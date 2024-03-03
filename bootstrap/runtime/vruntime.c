/*
 * Copyright 2023-2024 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Runtime.
 *
 * The Vanity Scheme Runtime is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either version
 * 2.1 of the License, or (at your option) any later version.
 * 
 * The Vanity Scheme Runtime is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the Vanity Scheme Runtime.
 *
 * If not, see <https://www.gnu.org/licenses/>.
 *
 * This work is published with additional permission, the Vanity Scheme
 * Runtime Library Exceptions, which should have been included with the
 * Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#define _GNU_SOURCE
#ifdef __linux__
#include <dlfcn.h>
#include <pthread.h>
#include <setjmp.h>
#endif
#ifdef _WIN64
#include <debugapi.h>
#include <libloaderapi.h>
#include <processthreadsapi.h>
#include <psapi.h>
#endif

#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <assert.h>
#include <time.h>
#include <stdarg.h>
#include <signal.h>

#include "vscheme/vruntime.h"
#include "vruntime_private.h"
#include "vqueue_private.h"
#include "vscheme/vinlines.h"
#include "vscheme/vhash.h"

#define FORWARDED ULLONG_MAX

// order of operations for implementing finalizers:
// 6. add foreign pointers to finalizers

// so finalizers can run in any order and thats them lumps

// the GC will walk down environments & lists in order to improve cache coherency

// Have to be very careful about what optimizations are added to it, to avoid
// a stack overflow during GC

// Specifically,
// * when a pair is moved, its cdr is moved in a loop
// * when an env is moved, its up is moved in a loop
// * when a closure is moved, its env is moved
// -- everything else is typical cheney GC
// the worst stack space from this is pair -> closure -> env
// it can't loop because closures only have envs, and envs only have envs

typedef struct VFinalizerEntry {
  bool foreign_marked;
  uint8_t pad;
  VWORD mem;
  VWORD finalizer;
} VFinalizerEntry;

#define MAX_TRACKED_MUTATIONS 256


// Anything < HEAP MEM needs to be collected during a GC
enum MEMORY_LOCATION { FIBER_MEM = 1, OLD_HEAP_MEM = 2, STACK_MEM = 4, HEAP_MEM = 8, STATIC_MEM = 16 };
SYSV_CALL static unsigned VMemLocation(VRuntime * runtime, void * obj) {
  if(((VObject*)obj)->flags & VFLAG_STATIC)
    return STATIC_MEM;

  if(runtime->public.VStackStart - runtime->public.VStackSize <= (char*)obj && (char*)obj < runtime->public.VStackStart)
    return STACK_MEM;
  if(runtime->VHeaps[runtime->VActiveHeap].begin <= obj && obj < runtime->VHeaps[runtime->VActiveHeap].end)
    return HEAP_MEM;
  if(runtime->VHeaps[!runtime->VActiveHeap].begin <= obj && obj < runtime->VHeaps[!runtime->VActiveHeap].end)
    return OLD_HEAP_MEM;

  for(int i = 0; i < runtime->num_half_reaped_fibers; i++) {
    VRuntime * fiber_runtime = runtime->half_reaped_fibers[i];
    if(fiber_runtime->VHeaps[fiber_runtime->VActiveHeap].begin <= obj && obj < fiber_runtime->VHeaps[fiber_runtime->VActiveHeap].end)
      return FIBER_MEM;
  }

  return STATIC_MEM;
}

SYSV_CALL static uint64_t VHashSymbol(VWORD sym) {
  VBlob * blob = VDecodeBlob(sym);
  uint64_t h = vhash(blob->buf, blob->len, VSYMBOL);

  return h;
}

// 1. basic loop lookup
// 2. hashmap
// 3. interning
// 4. value field in symbols

static SYSV_CALL VGlobalEntry * VInsertGlobalEntry(VRuntime * runtime, uint64_t h, VWORD sym, VWORD val) {
  size_t i = h & (runtime->VNumGlobalSlots-1);
  while(VBits(runtime->VGlobalTable[i].symbol) != VBits(VVOID))
  {
    i = (i + 1) & (runtime->VNumGlobalSlots-1);
  }
  runtime->VGlobalTable[i].hash = h;
  runtime->VGlobalTable[i].symbol = sym;
  runtime->VGlobalTable[i].value = val;

  runtime->VNumGlobals++;

  return &runtime->VGlobalTable[i];
}

static SYSV_CALL void VInitGlobalTable(VRuntime * runtime) {
  runtime->VNumGlobalSlots = 32;
  runtime->VGlobalTable = malloc(sizeof(VGlobalEntry[runtime->VNumGlobalSlots]));
  for(int i = 0; i < runtime->VNumGlobalSlots; i++) runtime->VGlobalTable[i].symbol = VVOID;
}

static SYSV_CALL void VResizeGlobalTable(VRuntime * runtime) {
  VGlobalEntry * newtable = malloc(sizeof(VGlobalEntry[runtime->VNumGlobalSlots*2]));
  for(int i = 0; i < runtime->VNumGlobalSlots*2; i++)
  {
    newtable[i].hash = 0;
    newtable[i].symbol = VVOID;
    newtable[i].value = VVOID;
  }

  VGlobalEntry * oldtable = runtime->VGlobalTable;
  runtime->VGlobalTable = newtable;
  runtime->VNumGlobals = 0;
  size_t old_num_slots = runtime->VNumGlobalSlots;
  runtime->VNumGlobalSlots *= 2;

  for(unsigned i = 0; i < old_num_slots; i++) {
    VGlobalEntry * old = &oldtable[i];
    if(VBits(old->symbol) == VBits(VVOID)) continue;
    VInsertGlobalEntry(runtime, old->hash, old->symbol, old->value);
  }

  free(oldtable);
}

SYSV_CALL static VGlobalEntry * VLookupGlobalEntry(VRuntime * runtime, VWORD sym) {
  uint64_t h = VHashSymbol(sym);
  size_t i = h & (runtime->VNumGlobalSlots-1);

  VGlobalEntry * place = NULL;
  while(VBits(runtime->VGlobalTable[i].symbol) != VBits(VVOID)) {
    if(runtime->VGlobalTable[i].hash == h && VCheckSymbolEqv(sym, runtime->VGlobalTable[i].symbol)) {
      place = &runtime->VGlobalTable[i];
      break;
    }
    i = (i + 1) & (runtime->VNumGlobalSlots-1);
  }
  return place;
}
SYSV_CALL VGlobalEntry * VLookupGlobalEntryFast2(VRuntime * runtime, char const * sym) {
  uint64_t h = vhash(sym, strlen(sym)+1, VSYMBOL);

  size_t i = h & (runtime->VNumGlobalSlots-1);

  VGlobalEntry * place = NULL;
  while(VBits(runtime->VGlobalTable[i].symbol) != VBits(VVOID)) {
    if(runtime->VGlobalTable[i].hash == h && !strcmp(sym, ((VBlob*)VDecodePointer(runtime->VGlobalTable[i].symbol))->buf)) {
      place = &runtime->VGlobalTable[i];
      break;
    }
    i = (i + 1) & (runtime->VNumGlobalSlots-1);
  }
  return place;
}

size_t VConstantTableSize;
size_t VConstantTableOccupancy;
struct VConstantSlot { char * name; void * val; } * VConstantTable;
SYSV_CALL static void VInsertConstantImpl(char * name, void * val) {
  uint64_t h = vhash(name, strlen(name)+1, 1337);
  size_t i = h & (VConstantTableSize - 1);
  while(VConstantTable[i].name) {
    i = (i + 1) & (VConstantTableSize - 1);
  }
  VConstantTable[i].name = name;
  VConstantTable[i].val = val;
}
SYSV_CALL static void VInsertConstant(char * name, void * val) {
  if(VConstantTableOccupancy >= 0.8 * VConstantTableSize) {
    struct VConstantSlot * oldconsts = VConstantTable;
    size_t oldsize = VConstantTableSize;
    if(!VConstantTableSize)
      VConstantTableSize = 16;
    VConstantTableSize *= 2;
    VConstantTable = calloc(VConstantTableSize, sizeof(struct VConstantSlot));
    for(int i = 0; i < oldsize; i++) {
      if(oldconsts[i].name)
        VInsertConstantImpl(oldconsts[i].name, oldconsts[i].val);
    }
  }
  VInsertConstantImpl(name, val);
  VConstantTableOccupancy++;
}
SYSV_CALL void * VLookupConstant(char * name, void * val) {
  if(!VConstantTableSize) {
    VInsertConstant(name, val);
    return val;
  }
  uint64_t h = vhash(name, strlen(name)+1, 1337);
  size_t i = h & (VConstantTableSize - 1);
  while(VConstantTable[i].name) {
    if(!strcmp(VConstantTable[i].name, name)) {
      return VConstantTable[i].val;
    }
    i = (i + 1) & (VConstantTableSize - 1);
  }
  VInsertConstant(name, val);
  return val;
} 

// okay: so finalizers to managed memory can be detected as stale when they remain after a gc
// specifically, after gc, a finalizer to managed memory points to a forwarded address
// -- finalizers to foreign memory are manually tended to during move
// -- this requires checking the finalizer table any time we move a foreign pointer :(
//
// -- there's no way to avoid this without insane behavior. even if we alloc for holding
// -- the type, it would still be insane to attach the finalizer to the alloc not the foreign
// -- address

// what does the alg look like? hmmmmm
// 1. garbage collect
// 2. scan finalizer set for moved and unmoved addresses
// ---- moved addresses get their finalizers forward to next set
// 3. unmoved addresses also get forwarded to next set...
// 4. but unmoved addresses get a continuation stacked on
// ---- (lambda _ (finalize! k addr)) where k is the gc continuation
// ---- these keep getting tacked on ie (lambda _ (finalize! (lambda _ (finalize! k addr0))) addr1)
// 5. and then gc resumes which causes the finalizers to do their thang

SYSV_CALL static void VWipeFinalizerTable(VFinalizerTable * table) {
  table->num_finalizers = 0;
  table->new_finalizers_start = 0;
  for(unsigned i = 0; i < table->table_size; i++)
    table->table[i] = ~0u;
}

SYSV_CALL static inline uint64_t VHashPointer(VWORD ptr) {
  return vhash64_quick((uintptr_t)VDecodePointer(ptr));
}

SYSV_CALL static void VSetFinalizerHash(VFinalizerTable * table, VWORD mem, unsigned dense_index, bool dupe_test) {
  uint64_t h = VHashPointer(mem);
  unsigned i = h & (table->table_size - 1);
  unsigned tries = 0;
  while(tries++ <= table->table_size && ~table->table[i]) {
    if(dupe_test && VBits(table->dense[table->table[i]].mem) == VBits(mem))
      VError("set-finalizer!: tried to set finalizer to address that already has one ~S\n", mem);
    i = (i+1) & (table->table_size - 1);
  }
  if(tries >= table->table_size) VError("Unable to insert into finalizer hashmap\n");
  table->table[i] = dense_index;
}

SYSV_CALL void VSetFinalizerImpl(VFinalizerTable * table, VWORD mem, VWORD finalizer) {
  // in order to track table entries, we need this to be constant in frame
  // which means we need to trigger a gc if we cannot fit into dense
  if(table->num_finalizers >= table->dense_size) {
    unsigned new_size = table->dense_size;
    if(new_size) new_size *= 2;
    else new_size = 8;
    table->dense = realloc(table->dense, sizeof(VFinalizerEntry[new_size]));
    table->dense_size = new_size;
  }

  if(table->num_finalizers >= table->table_size * 0.8) {
    unsigned new_size = table->table_size;
    if(new_size) new_size *= 2;
    else new_size = 8;
    free(table->table);
    table->table = malloc(sizeof(unsigned[new_size]));
    table->table_size = new_size;
    for(unsigned i = 0; i < new_size; i++) {
      table->table[i] = ~0u;
    }
    for(unsigned i = 0; i < table->num_finalizers; i++) {
      // skip over tombstones
      VWORD mem = table->dense[i].mem;
      if(VDecodeBool(mem))
        VSetFinalizerHash(table, mem, i, false);
    }
  }

  unsigned dense_index = table->num_finalizers;
  VFinalizerEntry * entry = &table->dense[dense_index];
  *entry = (VFinalizerEntry) { .foreign_marked = false, .pad = 0, .mem = mem, .finalizer = finalizer };
  table->num_finalizers++;

  VSetFinalizerHash(table, mem, dense_index, true);
}

SYSV_CALL static VFinalizerEntry * VGetFinalizer(VRuntime * runtime, VWORD mem, bool active_heap) {
  VFinalizerTable * table = &runtime->VHeapFinalizers[runtime->VActiveHeap ^ !active_heap];
  uint64_t h = VHashPointer(mem);
  unsigned i = h & (table->table_size - 1);
  unsigned tries = 0;
  while(tries++ < table->table_size) {
    unsigned dense_index = table->table[i];
    if(!~dense_index) return NULL;

    VFinalizerEntry * f = table->dense + dense_index;
    if(VBits(f->mem) == VBits(mem)) return f;

    i = (i+1) & (table->table_size - 1);
  }
  return NULL;
}

SYSV_CALL static void VMarkForeignFinalizer(VRuntime * runtime, VWORD mem, bool active_heap) {
  VFinalizerEntry * entry = VGetFinalizer(runtime, mem, active_heap);
  if(entry) {
    entry->foreign_marked = true;
  }
}

SYSV_CALL void VSetFinalizer(V_CORE_ARGS, VWORD k, VWORD mem, VWORD finalizer) {
  V_ARG_CHECK2("set-finalizer!", 3, argc);
  if(!(VIsPointer(mem) || VIsForeignPointer(mem)))
    VError("set-finalizer!: Finalizers can only be set on addresses ~S\n", mem);
  if(!(VWordType(finalizer) == VPOINTER_CLOSURE))
    VError("set-finalizer!: Not a procedure ~S\n", finalizer);

  // In order to just have heap finalizers, we need to track finalizer
  // as a mutation to avoid dropping it
  // we also can't drop mem until the finalizer is run ofc

  VSetFinalizerImpl(&runtime->VHeapFinalizers[runtime->VActiveHeap], mem, finalizer);
  V_CALL(k, runtime, VVOID);
}

SYSV_CALL void VFinalize(V_CORE_ARGS, VWORD k, VWORD mem) {
  V_GC_CHECK2_VARARGS((VFunc)VFinalize, runtime, statics, 2, argc, k, mem) {
    V_ARG_CHECK2("finalize!", 2, argc);
    if(!(VIsPointer(mem) || VIsForeignPointer(mem)))
      VError("finalize!: Not an address ~S\n", mem);

    VFinalizerEntry * finalizer = VGetFinalizer(runtime, mem, true);
    if(!finalizer) VError("finalize!: No finalizer at address of ~S\n", mem);

    VWORD final = finalizer->finalizer;
    if(!VDecodeBool(final)) VError("finalize!: double finalize at address of ~S\n", mem);
    finalizer->mem = VFALSE;
    finalizer->finalizer = VFALSE;
    V_CALL(final, runtime, k, mem);
  }
}

SYSV_CALL void VHasFinalizer(V_CORE_ARGS, VWORD k, VWORD mem) {
  if(!(VIsPointer(mem) || VIsForeignPointer(mem)))
    VError("has-finalizer?: Not an address ~S\n", mem);
  V_CALL(k, runtime, VEncodeBool(VGetFinalizer(runtime, mem, true)));
}

SYSV_CALL void VGarbageCollect(V_CORE_ARGS, VWORD k, VWORD major) {
  VClosure * cl = VDecodeClosure(k);
  if(VDecodeBool(major)) {
    runtime->VForceMajorGC = true;
  }
  VGarbageCollect2Args(cl->func, runtime, cl->env, 1, 1, VVOID);
}

// continuation to run finalizers that didn't survive a gc
SYSV_CALL static void VApplyFinalizer(V_CORE_ARGS, ...) {
  VWORD k = statics->vars[0];
  VWORD mem = statics->vars[1];

  V_CALL_FUNC(VFinalize, NULL, runtime, k, mem);
}

SYSV_CALL void * VForwarded(void * address) {
  if(*(uint64_t*)address == FORWARDED)
    return *(void**)(address + sizeof(VWORD));
  else
    return NULL;
}

/////////////////////////////////////////////////////////////
//                   GARBAGE COLLECTOR                     //
/////////////////////////////////////////////////////////////

SYSV_CALL static void VForward(void * old, void const * forward) {
  *(uint64_t*)old = FORWARDED;
  *(void const**)(old + sizeof(VWORD)) = forward;
}

SYSV_CALL static void * VAllocHeap(VRuntime * runtime, size_t size) {
  if(runtime->VHeapPos + size >= runtime->VHeapEnd) {
    return NULL;
  }
  void * ret = (void*)runtime->VHeapPos;
  runtime->VHeapPos += size;
  return ret;
}

SYSV_CALL static void * VMoveObject(VRuntime * runtime, void * obj, size_t size) {
  void * collected = VAllocHeap(runtime, size);
  if(!collected) {
    fprintf(stderr, "Heap Overflow! This shouldn't have happened\n");
    abort();
  }

  memcpy(collected, obj, size);
  VForward(obj, collected);
  return collected;
}

SYSV_CALL static bool VNeedsMove(VRuntime * runtime, void * obj) {
  return VMemLocation(runtime, obj) < HEAP_MEM;
}

// Checks for forwarding and heap presence first
SYSV_CALL static void * VCheckedMoveObject(VRuntime * runtime, void * obj, size_t size) {
  void * forwarded = VForwarded(obj);
  if(forwarded)
    return forwarded;
  if(!VNeedsMove(runtime, obj))
    return obj;
  return VMoveObject(runtime, obj, size);
}
SYSV_CALL static VWORD VMoveDispatch(VRuntime * runtime, VWORD word);

// Checks for forwarding and heap presence first
SYSV_CALL static VEnv * VCheckedMoveEnv(VRuntime * runtime, VEnv * env) {
  // Only copying the actual live variables to compact the stack frame
  // Stack frames can have more slots than variables from stack frame reuse
  VEnv * ret = VCheckedMoveObject(runtime, env, sizeof(VEnv) + sizeof(VWORD[env->num_vars]));
  ret->var_len = ret->num_vars;

  VEnv * old = ret;
  while(old->up) {
    void * forward = VForwarded(old->up);
    if(forward) {
      old->up = forward;
      break;
    }
    if(!VNeedsMove(runtime, old->up))
      break;
    old->up = VMoveObject(runtime, old->up, sizeof(VEnv) + sizeof(VWORD[old->up->num_vars]));
    old->up->var_len = old->up->num_vars;
    old = old->up;
  }
  return ret;
}

// Checks for forwarding and heap presence first
SYSV_CALL static VEnvironment * VCheckedMoveEnviron(VRuntime * runtime, VEnvironment * env) {
  VEnvironment * ret = VCheckedMoveObject(runtime, env, sizeof(VEnvironment) + sizeof(VWORD[env->argc]));

  if(ret->static_chain) {
    ret->static_chain = VCheckedMoveEnv(runtime, ret->static_chain);
  }

  // runtime is not on the heap, but it contains pointers to the heap
  if(ret->runtime) {
    ret->runtime->VExitCode = VMoveDispatch(runtime, ret->runtime->VExitCode);
  }

  return ret;
}

SYSV_CALL static VClosure * VMoveClosure(VRuntime * runtime, VClosure * closure) {
  closure = VMoveObject(runtime, closure, sizeof(VClosure));
  if(closure->env)
    closure->env = VCheckedMoveEnv(runtime, closure->env);
  return closure;
}

SYSV_CALL static VPair * VMovePair(VRuntime * runtime, VPair * pair) {
  VPair * ret = VMoveObject(runtime, pair, sizeof(VPair));

  VPair * old = ret;
  while(VWordType(old->rest) == VPOINTER_PAIR) {
    void * rest = VDecodePointer(old->rest);

    void * forward = VForwarded(rest);
    if(forward) {
      old->rest = VEncodePair(forward);
      break;
    }
    if(!VNeedsMove(runtime, rest))
      break;

    rest = VMoveObject(runtime, rest, sizeof(VPair));
    old->rest = VEncodePair(rest);
    old = rest;
  }
  old->rest = VMoveDispatch(runtime, old->rest);
  return ret;
}

SYSV_CALL static VWORD VMoveDispatch(VRuntime * runtime, VWORD word) {
  if(!VIsPointer(word)) {
    if(VIsForeignPointer(word))
      VMarkForeignFinalizer(runtime, word, false);
    return word;
  }
  void * ptr = VDecodePointer(word);
  void * forward = VForwarded(ptr);
  if(forward) {
    uint64_t type = VWordType(word);
    return VEncodePointer(forward, type);
  }
  if(!VNeedsMove(runtime, ptr))
    return word;
  uint64_t type = VWordType(word);

  VNEWTAG tag = *(VNEWTAG*)ptr;
  if(!(VTAG_START <= tag && tag < VTAG_END)) {
    fprintf(stderr, "Unknown tag %u in VMoveDispatch. Heap Corruption?\n", tag);
    abort();
  }
  
  switch(type) {
    case VPOINTER_CLOSURE:
      return VEncodeClosure(VMoveClosure(runtime, VDecodeClosure(word)));
      break;
    case VPOINTER_PAIR:
      return VEncodePair(VMovePair(runtime, VDecodePair(word)));
      break;
    case VPOINTER_OTHER:
    {
      VNEWTAG tag = *(VNEWTAG*)ptr;
      switch(tag)
      {
        case VSTRING:
        case VSYMBOL:
        case VBUFFER:
        case VRNG_STATE:
        {
          VBlob * b = ptr;
          return VEncodePointer(VMoveObject(runtime, b, sizeof(VBlob) + (b->len + sizeof(VWORD) - 1)/sizeof(VWORD) * sizeof(VWORD)), VPOINTER_OTHER);
          break;
        }
        case VVECTOR:
        {
          VVector * v = ptr;
          return VEncodePointer(VMoveObject(runtime, v, sizeof(VVector) + sizeof(VWORD[v->len])), VPOINTER_OTHER);
          break;
        }
        case VHASH_TABLE:
        {
          VHashTable * v = ptr;
          return VEncodePointer(VMoveObject(runtime, v, sizeof(VHashTable)), VPOINTER_OTHER);
          break;
        }
        case VPORT:
        {
          VPort * p = ptr;
          return VEncodePointer(VMoveObject(runtime, p, sizeof(VPort)), VPOINTER_OTHER);
          break;
        }
        case VFUTURE:
        {
          VFuture * f = ptr;
          return VEncodePointer(VMoveObject(runtime, f, sizeof(VFuture)), VPOINTER_OTHER);
        }
        default:
          fprintf(stderr, "Unknown tag %u in VMoveDispatch. Heap corruption?\n", tag);
          abort();
      }
      break;
    }
    case VENVIRONMENT:
      return VEncodePointer(VCheckedMoveEnviron(runtime, ptr), VPOINTER_OTHER);
    default:
      fprintf(stderr, "Unknown type %016llx in VMoveDispatch. Heap corruption?\n", (unsigned long long)type);
      abort();
  }
}

SYSV_CALL static void VCheneyEnvironment(VRuntime * runtime, VEnvironment * env) {
  for(int i = 0; i < env->argc; i++) {
    env->argv[i] = VMoveDispatch(runtime, env->argv[i]);
  }
}

SYSV_CALL static void VCheneyEnv(VRuntime * runtime, VEnv * env) {
  for(int i = 0; i < env->num_vars; i++) {
    env->vars[i] = VMoveDispatch(runtime, env->vars[i]);
  }
}

SYSV_CALL static void VCheneyPair(VRuntime * runtime, VPair * pair) {
  pair->first = VMoveDispatch(runtime, pair->first);
}

SYSV_CALL static void VCheneyVector(VRuntime * runtime, VVector * vec) {
  for(int i = 0; i < vec->len; i++)
    vec->arr[i] = VMoveDispatch(runtime, vec->arr[i]);
}
SYSV_CALL static void VCheneyHashTable(VRuntime * runtime, VHashTable * table) {
  VWORD _vec = table->vec = VMoveDispatch(runtime, table->vec);
  table->eq = VMoveDispatch(runtime, table->eq);
  table->hash = VMoveDispatch(runtime, table->hash);

  // FIXME: this should be done in a VMoveHashTable
  // and the storage type of hash table's vector
  // should be something other than an actual vector
  // so as to allow us to skip scanning the vector twice
  VVector * vec = VCheckedDecodeVector(_vec, "garbage-collect/hash-table");
  for(int i = 0; i < vec->len/3; i++) {

    VWORD key = vec->arr[3*i+0];
    if(VBits(key) == VBits(VVOID))
      continue;
    vec->arr[3*i+2] = VMoveDispatch(runtime, vec->arr[3*i+2]);

    VWORD key_mov = VMoveDispatch(runtime, key);
    if(VBits(key_mov) != VBits(key))
      table->flags |= HFLAG_DIRTY;
    vec->arr[3*i+0] = key_mov;
  }
}

SYSV_CALL static void VCheneyFuture(VRuntime * runtime, VFuture * future) {
  // If the future is eligible for gc, then we're back in the main thread
  // and it should have been collected
  assert(!future->fiber);
  if(!future->fiber) {
    future->val = VMoveDispatch(runtime, future->val);
  }
}

SYSV_CALL static VWORD * VCheneyScan(VRuntime * runtime, VWORD * cur) {
  switch(*(VNEWTAG*)cur) {
    case VENVIRONMENT:
    {
      VEnvironment * env = (VEnvironment*)cur;
      VCheneyEnvironment(runtime, env);
      return cur + (sizeof(VEnvironment) + sizeof(VWORD[env->argc])) / sizeof(VWORD);
      break;
    }
    case VENV:
    {
      VEnv * env = (VEnv*)cur;
      VCheneyEnv(runtime, env);
      return cur + (sizeof(VEnv) + sizeof(VWORD[env->var_len])) / sizeof(VWORD);
      break;
    }
    case VCLOSURE:
    {
      return cur + sizeof(VClosure) / sizeof(VWORD);
      break;
    }
    case VPAIR:
    case VCONST_PAIR:
    {
      VCheneyPair(runtime, (VPair*)cur);
      return cur + sizeof(VPair) / sizeof(VWORD);
      break;
    }
    case VVECTOR:
    {
      VVector * v = ((VVector*)cur);
      VCheneyVector(runtime, v);
      return cur + (sizeof(VVector) / sizeof(VWORD)) + v->len;
    }
    case VHASH_TABLE:
    {
      VHashTable * v = ((VHashTable*)cur);
      VCheneyHashTable(runtime, v);
      return cur + (sizeof(VHashTable) / sizeof(VWORD));
    }
    case VSTRING:
    case VSYMBOL:
    case VBUFFER:
    case VRNG_STATE:
    {
      return cur + (sizeof(VBlob) + ((VBlob*)cur)->len + sizeof(VWORD)-1)/sizeof(VWORD);
      break;
    }
    case VPORT:
    {
      return cur + (sizeof(VPort))/sizeof(VWORD);
      break;
    }
    case VFUTURE:
    {
      VFuture * f = (VFuture*)cur;
      VCheneyFuture(runtime, f);
      return cur + (sizeof(VFuture))/sizeof(VWORD);
      break;
    }
  }
  fprintf(stderr, "Unknown type in VCheneyScan. Heap Corruption?\n");
  abort();
  return NULL;
}

#undef environ
SYSV_CALL static void VGCResumeFunc(V_CORE_ARGS, ...) {
  VFunc f = VCheckedDecodeForeignPointer(statics->vars[0], "gc-resume");
  VEnvironment * e = (void*)VDecodePointer(statics->vars[1]);
  VSysApply(f, e);
}

static inline bool VIsMain(VRuntime * runtime) {
  return runtime->my_fiber == runtime->main_fiber;
}

SYSV_CALL static void VSwapHeap(VRuntime * runtime) {
  runtime->VActiveHeap = !runtime->VActiveHeap;
#ifdef __linux__
  bool i = runtime->VActiveHeap;
  if(!VIsMain(runtime) && !runtime->owns_heap[i]) {
    size_t size = runtime->public.VStackLen * 8;
    char * heap = VStackPop(runtime->fiber_heaps);
    if(!heap) {
      heap = malloc(size);
    }
    runtime->VHeaps[i].begin = heap;
    runtime->VHeaps[i].end = runtime->VHeaps[i].begin + size;
    runtime->VHeaps[i].size = size;
  }
#endif
  runtime->VHeap = runtime->VHeaps[runtime->VActiveHeap].begin;
  runtime->VHeapPos = runtime->VHeap;
  runtime->VHeapEnd = runtime->VHeaps[runtime->VActiveHeap].end;
}

SYSV_CALL void VGarbageCollect2Args(VFunc f, VRuntime * runtime, VEnv * statics, int fixed_args, int argc, ...) {
  VWORD argv[argc];
  va_list list;
  va_start(list, argc);
  for(int i = 0; i < fixed_args; i++)
    argv[i] = va_arg(list, VWORD);
  assert(fixed_args <= argc);
  if(fixed_args < argc) {
    VWORD varargs = va_arg(list, VWORD);
    int i = fixed_args;
    while(!VIsEq(varargs, VNULL)) {
      assert(i < argc);
      VPair * p = VDecodePair(varargs);
      argv[i] = p->first;
      varargs = p->rest;
      i++;
    }
    assert(i == argc);
  }
  va_end(list);
  VGarbageCollect2(f, runtime, statics, argc, argv);
}
SYSV_CALL static VWORD VCleanupFinalizers(VRuntime * runtime, VWORD k, VFinalizerTable * new_table, VFinalizerTable ** dead_tables);
SYSV_CALL void VGarbageCollect2(VFunc f, VRuntime * runtime, VEnv * statics, int argc, VWORD * argv) {
#ifdef __linux__
  struct timespec start_time, end_time;
  clock_gettime(CLOCK_MONOTONIC, &start_time);
#endif
  ptrdiff_t stack_len = (char*)&f - runtime->public.VStackStart;
  if(stack_len < 0) stack_len = -stack_len;
  size_t environ_size = sizeof(VEnvironment) + sizeof(VWORD[argc]);
  stack_len += environ_size;

  size_t fiber_size = 0;
  if(runtime->num_half_reaped_fibers) {
    for(int i = 0; i < runtime->num_half_reaped_fibers; i++) {
      fiber_size += runtime->half_reaped_fibers[i]->VHeapPos - runtime->half_reaped_fibers[i]->VHeap;
    }
  }

  size_t after_gc_size = runtime->VHeapPos - runtime->VHeap + stack_len + fiber_size;
  bool is_unplanned_major = runtime->VHeap + after_gc_size >= runtime->VHeapEnd - runtime->public.VStackSize;
  bool is_major = runtime->VForceMajorGC || is_unplanned_major;
  static VDebugInfo major_info = { "Garbage Collection (major)" };
  static VDebugInfo minor_info = { "Garbage Collection (minor)" };
  VRecordCallNoInline(runtime, is_major ? &major_info : &minor_info);
  runtime->VForceMajorGC = false;

  if(is_major) {
    runtime->VNumMajorGCs++;
    VSwapHeap(runtime);
  } else {
    runtime->VNumMinorGCs++;
  }

  if(after_gc_size > runtime->VHeaps[runtime->VActiveHeap].size) {
    if(!runtime->num_half_reaped_fibers) {
      fprintf(stderr, "Garbage collector may overflow: this should be impossible.\n");
      abort();
    }
    fprintf(stderr, "resizing heap from big fiber returnz %lld\n", (long long)after_gc_size);
    free(runtime->VHeaps[runtime->VActiveHeap].begin);
    while(after_gc_size > runtime->VHeaps[runtime->VActiveHeap].size) {
      runtime->VHeaps[runtime->VActiveHeap].size *= 2;
    }
    runtime->VHeaps[runtime->VActiveHeap].begin = malloc(runtime->VHeaps[runtime->VActiveHeap].size);
    runtime->VHeaps[runtime->VActiveHeap].end = runtime->VHeaps[runtime->VActiveHeap].begin + runtime->VHeaps[runtime->VActiveHeap].size;
    runtime->VHeap = runtime->VHeaps[runtime->VActiveHeap].begin;
    runtime->VHeapPos = runtime->VHeap;
    runtime->VHeapEnd = runtime->VHeaps[runtime->VActiveHeap].end;
  }

  VEnvironment * environ = alloca(environ_size);
  environ->base = VMakeObject(VENVIRONMENT);
  environ->runtime = runtime;
  environ->static_chain = statics;
  environ->argc = argc;
  memcpy(environ->argv, argv, sizeof(VWORD[argc]));

  VWORD * cur = (VWORD*)runtime->VHeapPos;

  if(!is_major) {
    // tracked mutations can be ignored during major gcs
    // because the issue was heap pointing to stack
    // but we're crawling heap and stack this gc
    if(runtime->VTrackedMutations) {
      for(unsigned i = 0; i < runtime->VNumTrackedMutations; i++) {
        // of interest is that because container is in the heap
        // we only need to check forwards during a major gc, technically
        VWORD * container = runtime->VTrackedMutations[i].container;
        VWORD * slot = runtime->VTrackedMutations[i].slot;
        // the container may be another tracked mutation's slot
        if(container)
        {
          VWORD * forward = VForwarded(container);
          if(forward) {
            slot = forward + (slot - container);
          }
        }

        *slot = VMoveDispatch(runtime, *slot);
      }
    }
    // Finalizers are only processed during major gcs, so we need
    // to manually copy them over during minor gcs
    VFinalizerTable * table = &runtime->VHeapFinalizers[runtime->VActiveHeap];
    for(unsigned i = table->new_finalizers_start; i < table->num_finalizers; i++) {
      VFinalizerEntry * entry = table->dense + i;
      VWORD finalizer = entry->finalizer = VMoveDispatch(runtime, entry->finalizer);
      VWORD mem = VMoveDispatch(runtime, entry->mem);
      if(VBits(mem) != VBits(entry->mem)) {
        entry->finalizer = VFALSE;
        entry->mem = VFALSE;
        VSetFinalizerImpl(table, mem, finalizer);
      }
    }
  }
  // all finalizers returned from a fiber are living, but it's tricky to handle them anyway
  if(runtime->num_half_reaped_fibers) {
    VFinalizerTable * table = &runtime->VHeapFinalizers[runtime->VActiveHeap];
    for(int j = 0; j < runtime->num_half_reaped_fibers; j++) {
      VRuntime * fiber_runtime = runtime->half_reaped_fibers[j];
      VFinalizerTable const * fiber_table = &fiber_runtime->VHeapFinalizers[fiber_runtime->VActiveHeap];
      for(unsigned i = 0; i < fiber_table->num_finalizers; i++) {
        VFinalizerEntry * entry = fiber_table->dense + i;
        VWORD finalizer = entry->finalizer = VMoveDispatch(runtime, entry->finalizer);
        VWORD mem = VMoveDispatch(runtime, entry->mem);
        VSetFinalizerImpl(table, mem, finalizer);
      }
    }
  }
  {
    VFinalizerTable * table = &runtime->VHeapFinalizers[runtime->VActiveHeap];
    table->new_finalizers_start = table->num_finalizers;
  }
  runtime->VNumTrackedMutations = 0;

  if(runtime->VGrowSymtable || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
  {
    runtime->VGrowSymtable = false;
    VResizeGlobalTable(runtime);
  }

  // Need to resize the global table after tracked mutations, because
  // global table has tracked mutations in it
  if(is_major)
  {
    for(unsigned i = 0; i < runtime->VNumGlobalSlots; i++)
    {
      if(VBits(runtime->VGlobalTable[i].symbol) != VBits(VVOID))
      {
        runtime->VGlobalTable[i].hash = runtime->VGlobalTable[i].hash;
        runtime->VGlobalTable[i].symbol = VMoveDispatch(runtime, runtime->VGlobalTable[i].symbol);
        runtime->VGlobalTable[i].value = VMoveDispatch(runtime, runtime->VGlobalTable[i].value);
      }
    }
  }

  environ = VCheckedMoveEnviron(runtime, environ);
  {
    VEnv * e = VAllocHeap(runtime, sizeof(VEnv)+sizeof(VWORD[2]));
    e->base = VMakeSmallObject(VENV);
    e->num_vars = 2;
    e->var_len = 2;
    e->up = NULL;
    e->vars[0] = VEncodeForeignPointer(f);
    e->vars[1] = VEncodePointer(environ, VPOINTER_OTHER);
    VClosure * k = VAllocHeap(runtime, sizeof(VClosure));
    *k = VMakeClosure2((VFunc)VGCResumeFunc, e);

    environ->runtime->VGCResumeCont = VEncodeClosure(k);
  }

  {
    VWORD * stop = runtime->VHeapPos;
    // the space between cur and stop is the gray set, ie unscanned but moved objects
    while(cur < stop) {
      cur = VCheneyScan(runtime, cur);
      stop = runtime->VHeapPos;
    }
  }

  if(is_major)
  {
    int num_dead_tables = 1;
    VFinalizerTable * dead_tables[num_dead_tables+1];
    dead_tables[0] = &runtime->VHeapFinalizers[!runtime->VActiveHeap];
    dead_tables[1] = NULL;
    environ->runtime->VGCResumeCont = VCleanupFinalizers(runtime, environ->runtime->VGCResumeCont, &runtime->VHeapFinalizers[runtime->VActiveHeap], dead_tables);
  }

  {
    VWORD * stop = runtime->VHeapPos;
    // the space between cur and stop is the gray set, ie unscanned but moved objects
    while(cur < stop) {
      cur = VCheneyScan(runtime, cur);
      stop = runtime->VHeapPos;
    }
  }

  runtime->num_half_reaped_fibers = 0;
  free(runtime->half_reaped_fibers);
  runtime->half_reaped_fibers = NULL;

  // If after a GC, we are still in a state where the next garbage collect can overflow the heap
  // we need to grow the heap
  // or if we are doing too many major gcs, grow the heap to avoid thrashing

  // We'll have to seperate this in a function and call it at beginning of GC when we add fiber reaping
#ifdef __linux__
  if(!VIsMain(runtime)) {
    int inactive = !runtime->VActiveHeap;
    if(!runtime->owns_heap[inactive] && (runtime->VHeapPos - runtime->VHeap) + runtime->public.VStackSize > runtime->public.VStackLen * 8) {
      runtime->owns_heap[inactive] = true;
      VStackPush(runtime->fiber_heaps, runtime->VHeaps[inactive].begin);
      runtime->VHeaps[inactive].begin = NULL;
    }

    if(runtime->owns_heap[inactive]) {
      if((runtime->VHeapPos - runtime->VHeap) + runtime->public.VStackSize > runtime->VHeaps[inactive].size) {
        if(runtime->VHeaps[inactive].begin)
          free(runtime->VHeaps[inactive].begin);
        runtime->VHeaps[inactive].size *= 2;
        runtime->VHeaps[inactive].begin = malloc(runtime->VHeaps[inactive].size);
        runtime->VHeaps[inactive].end = runtime->VHeaps[inactive].begin + runtime->VHeaps[inactive].size;
      }
    } else {
      if(runtime->VHeaps[inactive].begin)
        VStackPush(runtime->fiber_heaps, runtime->VHeaps[inactive].begin);
      runtime->VHeaps[inactive].begin = NULL;
      runtime->VHeaps[inactive].end = NULL;
      runtime->VHeaps[inactive].size = 0;
    }
  }
  else
#endif
  {
    bool grow_heap = false;
    if(is_unplanned_major) {
      // TODO do binomial statistic test here
      if(runtime->VGCsSinceMajor < 20)
        grow_heap = true;
      runtime->VGCsSinceMajor = 0;
    } else {
      runtime->VGCsSinceMajor++;
    }

    if(grow_heap || (runtime->VHeapPos - runtime->VHeap) + runtime->public.VStackSize > runtime->VHeaps[!runtime->VActiveHeap].size) {
      free(runtime->VHeaps[!runtime->VActiveHeap].begin);
      runtime->VHeaps[!runtime->VActiveHeap].size *= 2;
      runtime->VHeaps[!runtime->VActiveHeap].begin = malloc(runtime->VHeaps[!runtime->VActiveHeap].size);
      runtime->VHeaps[!runtime->VActiveHeap].end = runtime->VHeaps[!runtime->VActiveHeap].begin + runtime->VHeaps[!runtime->VActiveHeap].size;
      //fprintf(stderr, "Growing heap!\n");
    }
  }

#ifdef __linux__
  clock_gettime(CLOCK_MONOTONIC, &end_time);
  long diff_sec = end_time.tv_sec - start_time.tv_sec;
  long diff_nsec = end_time.tv_nsec - start_time.tv_nsec;
  diff_nsec += 1000ul * 1000ul * 1000ul * diff_sec;
  if(is_major)
    runtime->VMajorGCTime += diff_nsec;
  else
    runtime->VMinorGCTime += diff_nsec;
#endif

  VLongJmp(runtime->VRoot, VJMP_GC);
}

// The last thing that happens in garbage collection before resuming
SYSV_CALL static VWORD VCleanupFinalizers(VRuntime * runtime, VWORD k, VFinalizerTable * new_table, VFinalizerTable ** dead_tables) {
  while(*dead_tables) {
    VFinalizerTable * dead_table = *dead_tables;
    for(unsigned i = 0; i < dead_table->num_finalizers; i++) {
      VFinalizerEntry * entry = dead_table->dense + i;
      // tombstone, we can skip it
      if(!VDecodeBool(entry->mem)) continue;


      VWORD finalizer = VMoveDispatch(runtime, entry->finalizer);
      VWORD mem = entry->mem;
      void * mem_ptr = VDecodePointer(mem);
      void * mem_forward = VIsManagedPointer(mem) ? VForwarded(mem_ptr) : NULL;
      
      if(mem_forward) {
        mem = VEncodePointer(mem_forward, VWordType(mem));
      } else if(VMemLocation(runtime, mem_ptr) == HEAP_MEM || entry->foreign_marked) {
        /* nothing. all is good :) */
      } else {
        mem = VMoveDispatch(runtime, mem);
        VEnv * e = VAllocHeap(runtime, sizeof(VEnv) + sizeof(VWORD[2]));
        VClosure * newk = VAllocHeap(runtime, sizeof(VClosure));
        // no. it's not okay if the alloc fails
        if(e && newk) {
          e->base = VMakeSmallObject(VENV);
          e->num_vars = 2;
          e->var_len = 2;
          e->up = NULL;
          e->vars[0] = k;
          e->vars[1] = mem;
          *newk = VMakeClosure2(VApplyFinalizer, e);
          k = VEncodeClosure(newk);
        } else {
          VError("Ran out of heap space while managing finalizers~N");
        }
      }
      VSetFinalizerImpl(new_table, mem, finalizer);
    }
    VWipeFinalizerTable(dead_table);
    dead_tables++;
  }
  new_table->new_finalizers_start = new_table->num_finalizers;
  return k;
}

/*********************** BULK COPY *************************/

static inline size_t VEnvironSize(VObject const * o) {
  VEnvironment const * environ = (VEnvironment const*)o;
  return sizeof(VEnvironment) + sizeof(VWORD[environ->argc]);
}
static inline size_t VEnvSize(VObject const * o) {
  VEnv const * env = (VEnv const*)o;
  return sizeof(VEnv) + sizeof(VWORD[env->var_len]);
}
static inline size_t VVectorSize(VObject const * o) {
  VVector const * vec = (VVector const*)o;
  return sizeof(VVector) + sizeof(VWORD[vec->len]);
}
static inline size_t VBlobSize(VObject const * o) {
  VBlob const * blob = (VBlob const*)o;
  return sizeof(VBlob) + blob->len;
}

static inline size_t VObjectSize(VObject const * o) {
  switch(o->tag) {
    case VENVIRONMENT:
      return VEnvironSize(o);
    case VENV:
      return VEnvSize(o);
    case VCONTENV:
      assert(0);
      return 0;
    case VCLOSURE:
      return sizeof(VClosure);
    case VCONST_PAIR:
    case VPAIR:
      return sizeof(VPair);
    case VVECTOR:
      return VVectorSize(o);
    case VRECORD:
      assert(0);
      return 0;
    case VSYMBOL:
    case VSTRING:
    case VBUFFER:
    case VRNG_STATE:
      return VBlobSize(o);
      break;
    case VPORT:
      return sizeof(VPort);
    case VRUNTIME:
      return sizeof(VRuntime);
    case VHASH_TABLE:
      return sizeof(VHashTable);
    case VFUTURE:
      return sizeof(VFuture);
    default:
      VError("Unknown object (tag: ~D) in heap.\n", o->tag);
      return 0;
  }
}

void VShiftPointer(void ** ptr, void const * old, void const * oldend, ptrdiff_t shift) {
  if(old <= *ptr && *ptr < oldend)
    *ptr += shift;
}

void VShiftWord(VWORD * word, void const * old, void const * oldend, ptrdiff_t shift) {
  if(!VIsPointer(*word))
    return;
  void * ptr = VDecodePointer(*word);
  if(old < ptr && ptr < oldend) {
    uint64_t bits = VBits(*word);
    bits += shift;
    *word = VWord(bits);
  }
}

static inline void VShiftEnvironment(VObject * o, void const * old, void const * oldend, ptrdiff_t shift) {
  VEnvironment * environ = (VEnvironment*)o;

  VShiftPointer((void**)&environ->runtime, old, oldend, shift);
  VShiftPointer((void**)&environ->static_chain, old, oldend, shift);
  for(int i = 0; i < environ->argc; i++)
    VShiftWord(&environ->argv[i], old, oldend, shift);
}

static inline void VShiftEnv(VObject * o, void const * old, void const * oldend, ptrdiff_t shift) {
  VEnv * env = (VEnv*)o;
  VShiftPointer((void**)&env->up, old, oldend, shift);
  for(int i = 0; i < env->num_vars; i++) {
    VShiftWord(&env->vars[i], old, oldend, shift);
  }
}

static inline void VShiftClosure(VObject * o, void const * old, void const * oldend, ptrdiff_t shift) {
  VClosure * closure = (VClosure*)o;
  VShiftPointer((void**)&closure->env, old, oldend, shift);
}

static inline void VShiftPair(VObject * o, void const * old, void const * oldend, ptrdiff_t shift) {
  VPair * pair = (VPair*)o;
  VShiftWord(&pair->first, old, oldend, shift);
  VShiftWord(&pair->rest, old, oldend, shift);
}

static inline void VShiftVector(VObject * o, void const * old, void const * oldend, ptrdiff_t shift) {
  VVector * vec = (VVector*)o;
  for(int i = 0; i < vec->len; i++) {
    VShiftWord(&vec->arr[i], old, oldend, shift);
  }
}

static inline void VShiftRuntime(VObject * o, void const * old, void const * oldend, ptrdiff_t shift) {
  VError("why is a runtime on the heap?\n");
}

static inline void VShiftHashTable(VObject * o, void const * old, void const * oldend, ptrdiff_t shift) {
  VHashTable * table = (VHashTable*)o;
  VShiftWord(&table->vec, old, oldend, shift);
  VShiftWord(&table->eq, old, oldend, shift);
  VShiftWord(&table->hash, old, oldend, shift);
}
static inline void VShiftFuture(VObject * o, void const * old, void const * oldend, ptrdiff_t shift) {
  // If the future is eligible for gc, then we're back in the main thread
  // and it should have been collected
  VFuture * future = (VFuture*)o;
  if(!future->fiber)
    VShiftWord(&future->val, old, oldend, shift);
}

// adds shift to all pointers inside o that fall within the range [old,oldend), nonrecursively
static inline void VShiftObject(VObject * o, void const * old, void const * oldend, ptrdiff_t shift) {
  switch(o->tag) {
    case VSYMBOL:
    case VSTRING:
    case VBUFFER:
    case VRNG_STATE:
    case VPORT:
      /* no pointers in these objects! */
      return;
    case VENVIRONMENT:
      VShiftEnvironment(o, old, oldend, shift);
      return;
    case VENV:
      VShiftEnv(o, old, oldend, shift);
      return;
    case VCONTENV:
      assert(0);
      return;
    case VCLOSURE:
      VShiftClosure(o, old, oldend, shift);
      return;
    case VCONST_PAIR:
    case VPAIR:
      VShiftPair(o, old, oldend, shift);
      return;
    case VVECTOR:
      VShiftVector(o, old, oldend, shift);
      return;
    case VRECORD:
      assert(0);
      return;
    case VRUNTIME:
      VShiftRuntime(o, old, oldend, shift);
      return;
    case VHASH_TABLE:
      VShiftHashTable(o, old, oldend, shift);
      return;
    case VFUTURE:
      VShiftFuture(o, old, oldend, shift);
      return;
    default:
      VError("Unknown object (tag: ~D) in heap.\n", o->tag);
      return;
  }
}

// Copies a heap in its entirety
// Assumes that dst has no references to src
// This makes sense for the limitations of fibers
// And fibers have a full gc run at exit so the heap is all valid
void VCopyHeap(char * dst, char const * src, size_t len) {
  char const * cur = src;
  char const * end = src+len;
  while(cur < end) {
    VObject const * o = (VObject const*)cur;
    size_t objsize = VObjectSize(o);

    memcpy(dst, o, objsize);
    VObject * newo = (VObject*)dst;
    VShiftObject(newo, src, end, dst - cur);

    dst += objsize;
    cur += objsize;
  }
}

/////////////////////////////////////////////////////////////
//                   END GARBAGE COLLECTOR                 //
/////////////////////////////////////////////////////////////

SYSV_CALL static void VPrintCallHistory(VRuntime * runtime) {
  fprintf(stderr, "Call History (most recent to least recent)\n");
  unsigned i;
  for(i = 0; i < 32; i++) {
    VDebugInfo * debug = runtime->public.VCallHistory[(runtime->public.VCallHistoryCursor - i) % V_CALL_HISTORY_LEN];
    if(!debug) break;
    fprintf(stderr, "%2u. %s\n", i, debug->name);
  }
  fprintf(stderr, "%2u. ...\n", i);
}


SYSV_CALL static void VNext2K(V_CORE_ARGS, ...) {
  VLongJmp(runtime->VRoot, VJMP_FINISH);
}

SYSV_CALL void VNext2(V_CORE_ARGS, VWORD e) {
  if(argc)
    runtime->VExitCode = e;
  else
    runtime->VExitCode = VVOID;
  // Always GC before a VLongJmp as all the datas on the stack
  if(!VIsMain(runtime))
    runtime->VForceMajorGC = true;
  VGarbageCollect2(VNext2K, runtime, statics, 0, NULL);
}

SYSV_CALL static void VExitK(V_CORE_ARGS, VWORD before_finalizers) {
  VFinalizerTable * table = &runtime->VHeapFinalizers[runtime->VActiveHeap];
  if(table->num_finalizers == 0)
    VLongJmp(runtime->VRoot, VJMP_EXIT);

#ifdef __linux__
  if(!VIsMain(runtime)) {
    if(table->num_finalizers == VDecodeInt(before_finalizers))
      VLongJmp(runtime->VRoot, VJMP_EXIT);
    runtime->VForceMajorGC = true;
    VWORD num_finalizers = VEncodeInt(table->num_finalizers);
    VGarbageCollect2((VFunc)VExitK, runtime, NULL, 1, &num_finalizers);
  }
#endif

  // The main thread needs to finalize anything stored in global variables
  // Which isn't a matter of simply unbinding the globals because that would
  // break the finalizers
  VClosure * closure = alloca(sizeof(VClosure));
  *closure = VMakeClosure2((VFunc)VExitK, NULL);
  VWORD k = VEncodeClosure(closure);

  // num_finalizers includes tombstones
  bool any_finalizers = false;
  assert(table->num_finalizers == table->new_finalizers_start);
  for(unsigned i = 0; i < table->num_finalizers; i++) {
    if(VStackOverflowNoInline2(runtime, (char*)closure))
      VGarbageCollect2Args(closure->func, runtime, closure->env, 1, 1, VVOID);

    VFinalizerEntry * entry = table->dense + i;
    // tombstone, we can skip it
    if(!VDecodeBool(entry->mem)) continue;

    any_finalizers = true;
    VWORD mem = entry->mem;
    
    VEnv * e = alloca(sizeof(VEnv) + sizeof(VWORD[2]));
    e->base = VMakeSmallObject(VENV);
    e->num_vars = 2;
    e->var_len = 2;
    e->up = NULL;
    e->vars[0] = k;
    e->vars[1] = mem;
    closure = alloca(sizeof(VClosure));
    *closure = VMakeClosure2(VApplyFinalizer, e);
    k = VEncodeClosure(closure);
  }
  if(any_finalizers)
    V_CALL(k, runtime, VVOID);
  else
    VLongJmp(runtime->VRoot, VJMP_EXIT);
}

SYSV_CALL void VExit2(V_CORE_ARGS, VWORD k, VWORD e) {
  V_ARG_RANGE2("exit", 1, 2, argc);
  runtime->VExitCode = VEncodeInt(0);
  if(argc == 2) {
    runtime->VExitCode = e;
  }
#ifdef __linux__
  if(VIsMain(runtime)) {
    // only fibers need to return meaningful data, normal exits coerce
    // to integer early so finalizers run
    runtime->VExitCode = VEncodeInt(VDecodeExitCode(runtime->VExitCode));
  }
#endif
  runtime->VForceMajorGC = true;
  VWORD num_finalizers = VEncodeInt(runtime->VHeapFinalizers[runtime->VActiveHeap].num_finalizers);
  VGarbageCollect2((VFunc)VExitK, runtime, NULL, 1, &num_finalizers);
}

SYSV_CALL void VAbort2(V_CORE_ARGS, ...) {
  if(runtime)
    VPrintCallHistory(runtime);
  fflush(stderr);
  fflush(stdout);
#ifdef __linux__
  raise(SIGTRAP);
#endif
#ifdef _WIN64
  DebugBreak();
#endif
  if(runtime)
    VLongJmp(runtime->VRoot, VJMP_ERROR);
  else
    abort();
}

SYSV_CALL void VVFPrintfC(FILE * f, char const * str, va_list args) {
  char c;
  while((c = *str++)) {
    switch(c) {
      case '\0':
        break;
      case '~':
        c = *str++;
        switch(c)
        {
          case '~':
            fputc('~', f);
            break;
          case 'N':
          case 'n':
          {
            fputc('\n', f);
            break;
          }
          case 'Z':
          case 'z':
          {
            char const * str = va_arg(args, char const*);
            fprintf(f, "%s", str);
            break;
          }
          case 'F':
          case 'f':
          {
            double d = va_arg(args, double);
            fprintf(f, "%f", d);
            break;
          }
          case 'D':
          case 'd':
          {
            int i = va_arg(args, int);
            fprintf(f, "%i", i);
            break;
          }
          case 'L':
          case 'l':
          {
            long i = va_arg(args, long);
            fprintf(f, "%li", i);
            break;
          }
          case 'A':
          case 'a':
          {
            VWORD w = va_arg(args, VWORD);
            VDisplayWord(f, w, false);
            break;
          }
          case 'S':
          case 's':
          {
            VWORD w = va_arg(args, VWORD);
            VDisplayWord(f, w, true);
            break;
          }
          default:
            va_end(args);
            VError("Malformed format string\n");
            break;
        }
        break;
      default:
        fputc(c, f);
        break;
    }
  }
}

SYSV_CALL void VFPrintfC(FILE * f, char const * str, ...) {
  va_list args;;
  va_start(args, str);
  VVFPrintfC(f, str, args);
  va_end(args);
}

SYSV_CALL void VError(const char * str, ...) {
  va_list args;
  va_start(args, str);
  VVFPrintfC(stderr, str, args);

  va_end(args);
  VAbort2(NULL, NULL, 0);
}


// Its impossible for a var in the old set to point to the new set
// except through mutation, track all such events to avoid dropping them
// during GC
// null is an acceptable value for container: the mutation will always be tracked
SYSV_CALL void VTrackMutation(VRuntime * runtime, void * container, VWORD * slot, VWORD val) {
  // TODO: USE A HASH TABLE TO AVOID DUPLICATE TRACKING
  if(runtime->VNumTrackedMutations >= runtime->VTrackedMutationsSize) {
    if(!runtime->VTrackedMutations)
      runtime->VTrackedMutationsSize = 128;
    runtime->VTrackedMutationsSize *= 2;
    runtime->VTrackedMutations = realloc(runtime->VTrackedMutations, sizeof(*runtime->VTrackedMutations) * runtime->VTrackedMutationsSize);
  }

  if(VIsPointer(val)) {
    void * ptr = VDecodePointer(val);
    if(VMemLocation(runtime, ptr) != STACK_MEM) {
      runtime->VNumUntrackedMutations++;
    } else if(!container || VMemLocation(runtime, container) != STACK_MEM) {
      // a slot in older memory is being set to
      // a value in the new generation, need to track it to
      // avoid losing it
      runtime->VTrackedMutations[runtime->VNumTrackedMutations].container = (VWORD*)container;
      runtime->VTrackedMutations[runtime->VNumTrackedMutations].slot = slot;
      runtime->VNumTrackedMutations++;
    } else {
      runtime->VNumUntrackedMutations++;
    }
  } 
}

SYSV_CALL static void VSetPair2(V_CORE_ARGS, bool bSetCar, VWORD k, VWORD pair, VWORD val) {
  char * proc = bSetCar ? "set-car!" : "set-cdr!";
  V_ARG_CHECK2(proc, 3, argc);
  if(VStackOverflowNoInline(runtime)) {
    VGarbageCollect2Args((VFunc)(bSetCar ? VSetCar2 : VSetCdr2), runtime, statics, 3, argc, k, pair, val);
  } else {
    if(VWordType(pair) != VPOINTER_PAIR) VError("%s: arg 1 not a pair\n", proc);
    VPair * p = VDecodePair(pair);

    VTrackMutation(runtime, p, bSetCar ? &p->first : &p->rest, val);
    
    if(bSetCar)
      p->first = val;
    else
      p->rest = val;
    V_CALL(k, runtime, VVOID);
  }
}
SYSV_CALL void VSetCar2(V_CORE_ARGS, VWORD k, VWORD pair, VWORD val) {
  VSetPair2(runtime, statics, argc, true, k, pair, val);
}
SYSV_CALL void VSetCdr2(V_CORE_ARGS, VWORD k, VWORD pair, VWORD val) {
  VSetPair2(runtime, statics, argc, false, k, pair, val);
}

SYSV_CALL void VVectorSet2(V_CORE_ARGS, VWORD k, VWORD v, VWORD i, VWORD val) {
  V_ARG_CHECK2("vector-set!", 4, argc);
  if(VStackOverflowNoInline(runtime)) {
    VGarbageCollect2Args((VFunc)VVectorSet2, runtime, statics, 4, argc, k, v, i, val);
  } else {
    VVector * vector = VCheckedDecodeVector(v, "vector-set!");
    if(VWordType(i) != VIMM_INT) VError("vector-set!: arg 2 not an int\n");
    int index = VDecodeInt(i);
    if(!(0 <= index && index < vector->len)) VError("vector-set!: out of range\n");

    VTrackMutation(runtime, vector, vector->arr + index, val);
    vector->arr[index] = val;

    V_CALL(k, runtime, VVOID);
  }
}

SYSV_CALL void VSetEnvVar2(V_CORE_ARGS, VWORD k, VWORD _up, VWORD _var, VWORD val) {
  // not really a procedure but needs to abuse the procedure
  // interface to garbage collect
  if(argc != 4) VError("set!: not enough arguments? This should be impossible\n");
  if(VStackOverflowNoInline(runtime)) {
    VGarbageCollect2Args((VFunc)VSetEnvVar2, runtime, statics, 4, 4, k, _up, _var, val);
  } else {
    int up = VDecodeInt(_up);
    int var = VDecodeInt(_var);

    while(up) {
      statics = statics->up;
      up--;
    }
    statics->vars[var] = val;

    VTrackMutation(runtime, statics, &statics->vars[var], val);
    V_CALL(k, runtime, VVOID);
  }
}

SYSV_CALL static bool VDefineImpl(VRuntime * runtime, VWORD sym, VWORD val, bool is_set) {
  uint64_t hash = VHashSymbol(sym);

  VGlobalEntry * place = VLookupGlobalEntry(runtime, sym);

  if(!place)
  {
    if(is_set) return false;

    place = VInsertGlobalEntry(runtime, hash, sym, val);
    // symbol table is never moved, no need to worry about forwards
    VTrackMutation(runtime, NULL, &place->symbol, sym);
  }
  
  place->value = val;
  VTrackMutation(runtime, NULL, &place->value, val);
  return true;
}

SYSV_CALL void VSetGlobalVar2(V_CORE_ARGS, VWORD k, VWORD sym, VWORD val) {
  V_ARG_CHECK2("set!", 3, argc);
  if(VStackOverflowNoInline(runtime) || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc)VSetGlobalVar2, runtime, statics, 3, argc, k, sym, val);

  if(!VDefineImpl(runtime, sym, val, true))
    VError("set!: Symbol not found: ~a\n", sym);
  V_CALL(k, runtime, VVOID);
}


SYSV_CALL void VDefineGlobalVar2(V_CORE_ARGS, VWORD k, VWORD sym, VWORD val) {
  V_ARG_CHECK2("define", 3, argc);
  if(VStackOverflowNoInline(runtime) || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc)VDefineGlobalVar2, runtime, statics, 3, argc, k, sym, val);

  VDefineImpl(runtime, sym, val, false);
  V_CALL(k, runtime, VVOID);
}

SYSV_CALL void VMultiDefine2(V_CORE_ARGS, VWORD k, VWORD defines) {
  V_ARG_CHECK2("multidefine", 2, argc);
  int num = 0;
  VWORD root = defines;
  while(!VIsEq(defines, VNULL)) {
    num++;
    defines = VDecodePair(defines)->rest;
  }
  runtime->VGrowSymtable = runtime->VNumGlobals + num >= runtime->VNumGlobalSlots * 0.8;
  if(VStackOverflowNoInline(runtime) || runtime->VGrowSymtable) {
    VGarbageCollect2Args((VFunc)VMultiDefine2, runtime, statics, 2, argc, k, root);
  }

  defines = root;
  while(!VIsEq(defines, VNULL)) {
    VPair * pair = VDecodePair(VDecodePair(defines)->first);

#if 0
    VFPrintfC(stderr, "~S := ~S\n", pair->first, pair->rest);
#endif

    VDefineImpl(runtime, pair->first, pair->rest, false);
    
    defines = VDecodePair(defines)->rest;
  }
  V_CALL(k, runtime, VVOID);
}

SYSV_CALL void VLookupLibrary2(V_CORE_ARGS, VWORD k, VWORD name) {
  V_ARG_CHECK2("lookup-library", 2, argc);
  if(VStackOverflowNoInline(runtime) || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc)VLookupLibrary2, runtime, statics, 2, argc, k, name);

  // TODO statically allocate this you knucklehead
#define sym_str "##vcore.libraries"
  VBlob * sym = alloca(sizeof(VBlob) + sizeof sym_str);
  sym->base = VMakeSmallObject(VSYMBOL);
  sym->len = sizeof sym_str;
  memcpy(sym->buf, sym_str, sym->len);
#undef sym_str

  VWORD sym_word = VEncodePointer(sym, VPOINTER_OTHER);
  VGlobalEntry * lookup = VLookupGlobalEntry(runtime, sym_word);
  VWORD libs = VNULL;
  if(!lookup) {
    VDefineImpl(runtime, sym_word, libs, false);
  } else {
    libs = lookup->value;
  }

  VWORD lib = VFALSE;
  while(!VIsEq(libs, VNULL)) {
    VPair * libs_dec = VDecodePair(libs);
    VPair * pair = VDecodePair(libs_dec->first);
    VBlob * str = (VBlob*) VDecodeBlob(pair->first);
    VBlob * name_dec = VDecodeBlob(name);
    if(str && name_dec && !strcmp(name_dec->buf, str->buf)) {
      lib = pair->rest;
      break;
    }
    libs = libs_dec->rest;
  }
  V_CALL(k, runtime, lib);
}

SYSV_CALL static void VMakeImportLambda(V_CORE_ARGS, VWORD k, VWORD x) {
  int cur = 2, end = statics->var_len;
  VWORD * rest = statics->vars;
  VWORD args = VNULL;
  while(true) {
    if(VIsToken(args, VTOK_NULL)) {
      if(cur == end) {
        VError("library ~A: symbol not found: ~A\n", rest[1], x);
        break;
      } else {
        args = rest[cur];
        cur++;
      }
    }
    VWORD arg = VInlineCar(args);
    if(VDecodeBool(VInlineEqv(VInlineCar(arg), x))) {
      V_CALL(k, runtime, VInlineCdr(arg));
      break;
    } else {
      args = VInlineCdr(args);
    }
  }
}

SYSV_CALL void VMakeImport2(V_CORE_ARGS, VWORD k, VWORD lib, ...) {
  V_ARG_MIN2("make-import", 2, argc);
  VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[argc]));
  env->base = VMakeSmallObject(VENV);
  env->num_vars = argc;
  env->var_len = argc;
  env->up = statics;
  env->vars[0] = k;
  env->vars[1] = lib;
  va_list args;
  va_start(args, lib);
  for(int i = 2; i < argc; i++)
    env->vars[i] = va_arg(args, VWORD);
  va_end(args);
  VClosure ret = VMakeClosure2((VFunc)VMakeImportLambda, env);
  V_CALL(k, runtime, VEncodeClosure(&ret));
}

#ifdef _WIN64
SYSV_CALL static void * VDLSym(char const * name) {
  HMODULE hmod = GetModuleHandle(NULL);
  void * ptr = GetProcAddress(hmod, name);
  if(ptr) return ptr;

  // not embedded in the exe. time to enumerate the dlls :/
  HMODULE * modules, module_array[128];
  DWORD size, size_again;
  HANDLE me = GetCurrentProcess();
  if(!EnumProcessModules(me, NULL, 0, &size)) {
    return NULL;
  }
  if(size <= sizeof module_array)
    modules = module_array;
  else
    modules = malloc(size);

  if(!EnumProcessModules(me, modules, size, &size_again))
    return NULL;
  if(size != size_again)
    return NULL;

  for(int i = 0; i < size / sizeof(HMODULE); i++) {
    char buf[256];
    GetModuleBaseName(me, modules[i], buf, sizeof buf);

    ptr = GetProcAddress(modules[i], name);
    if(ptr) break;
  }

  if(size > sizeof module_array)
    free(modules);

  return ptr;
}
#endif

SYSV_CALL static VFunc VFunctionImpl(VWORD name) {
  VBlob * blob = VCheckedDecodeString(name, "function");

  const char * str = blob->buf;
#ifdef __linux__
  void * ptr = dlsym(RTLD_DEFAULT, str);
#endif
#ifdef _WIN64
  //HMODULE hmod = GetModuleHandle(NULL);
  //void * ptr = GetProcAddress(hmod, str);
  void * ptr = VDLSym(str);
#endif

  if(!ptr) {
    VError("function: failed to dlsym function ~z (did you remember to load or link the file it's in?)\n", str);
  }
  VFunc * fun = ptr;
  return *fun;
}

SYSV_CALL static void VLoadLibraryK(V_CORE_ARGS, VWORD loader) {
  V_ARG_CHECK2("load-library-k", 1, argc);
  if(VStackOverflowNoInline(runtime) || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc)VLoadLibraryK, runtime, statics, 1, argc, loader);

  VWORD k = statics->vars[0];
  VWORD libname = statics->vars[1];
  VWORD libraries_sym = statics->vars[2];
  VWORD libraries = VLookupGlobalEntry(runtime, libraries_sym)->value;

  VPair p = VMakePair(libname, loader);
  VPair newlibs = VMakePair(VEncodePair(&p), libraries);

  VDefineImpl(runtime, libraries_sym, VEncodePair(&newlibs), true);

  V_CALL(k, runtime, loader);
}

SYSV_CALL void VLoadLibrary2(V_CORE_ARGS, VWORD k, VWORD name) {
  V_ARG_CHECK2("load-library", 2, argc);
  if(VStackOverflowNoInline(runtime) || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc)VLoadLibrary2, runtime, statics, 2, argc, k, name);

#define sym_str "##vcore.libraries"
  VBlob * sym = alloca(sizeof(VBlob) + sizeof sym_str);
  sym->base = VMakeSmallObject(VSYMBOL);
  sym->len = sizeof sym_str;
  memcpy(sym->buf, sym_str, sym->len);
#undef sym_str

  VWORD sym_word = VEncodePointer(sym, VPOINTER_OTHER);
  VGlobalEntry * lookup = VLookupGlobalEntry(runtime, sym_word);
  VWORD libs = VNULL;
  if(!lookup) {
    VDefineImpl(runtime, sym_word, libs, false);
  } else {
    libs = lookup->value;
  }

  VWORD libraries = libs;
  VWORD lib = VFALSE;
  while(!VIsEq(libs, VNULL)) {
    VPair * libs_dec = VDecodePair(libs);
    VPair * pair = VDecodePair(libs_dec->first);
    VBlob * str = VDecodeBlob(pair->first);
    VBlob * nm = VDecodeBlob(name);
    if(str && nm && !strcmp(nm->buf, str->buf)) {
      lib = pair->rest;
      break;
    }
    libs = libs_dec->rest;
  }
  if(!VDecodeBool(lib)) {
    VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[4]));
    env->base = VMakeSmallObject(VENV); env->num_vars = 4; env->var_len = 4; env->up = NULL;
    env->vars[0] = k;
    env->vars[1] = name;
    env->vars[2] = sym_word;
    env->vars[3] = libraries;
    VClosure callback = VMakeClosure2((VFunc)VLoadLibraryK, env);
    VFunc loader = VFunctionImpl(name);
    V_CALL_FUNC((*loader), NULL, runtime, VEncodeClosure(&callback));
  } else {
    V_CALL(k, runtime, lib);
  }
}

SYSV_CALL void VDisplayWord(FILE * f, VWORD v, bool write) {
  uint64_t type = VWordType(v);
  switch(type) {
    case VIMM_NUMBER:
      fprintf(f, "%f", VDecodeNumber(v));
      break;
    case VIMM_INT:
      fprintf(f, "%d", VDecodeInt(v));
      break;
    case VIMM_CHAR:
      if(write) {
        char c = VDecodeChar(v);
        switch(c) {
          case '\a': fprintf(f, "#\\alarm"); break;
          case '\b': fprintf(f, "#\\backspace"); break;
          case (char)127: fprintf(f, "#\\delete"); break;
          case (char)27: fprintf(f, "#\\escape"); break;
          case '\n': fprintf(f, "#\\newline"); break;
          case '\0': fprintf(f, "#\\null"); break;
          case '\r': fprintf(f, "#\\return"); break;
          case ' ': fprintf(f, "#\\space"); break;
          case '\t': fprintf(f, "#\\tab"); break;
          default: fprintf(f, "#\\%c", c); break;
        }
      } else {
        fprintf(f, "%c", VDecodeChar(v));
      }
      break;
    case VIMM_TOK:
    {
      switch(VDecodeToken(v))
      {
        case VTOK_TRUE:
          fprintf(f, "#t");
          break;
        case VTOK_FALSE:
          fprintf(f, "#f");
          break;
        case VTOK_NULL:
          fprintf(f, "()");
          break;
        case VTOK_VOID:
          fprintf(f, "#void");
          break;
        case VTOK_EOF:
          fprintf(f, "#eof");
          break;
      }
      break;
    }
    case VPOINTER_PAIR:
    {
      fprintf(f, "#pair");
      break;
    }
    case VPOINTER_CLOSURE:
    {
      fprintf(f, "#closure");
      break;
    }
    case VPOINTER_FOREIGN:
    {
      fprintf(f, "#foreign-pointer");
      break;
    }
    case VPOINTER_OTHER:
    {
      void * ptr = (void*)VDecodePointer(v);
      VNEWTAG tag = *(VNEWTAG*)ptr;
      switch(tag) {
        case VSTRING:
        case VSYMBOL:
        {
          VBlob * blob = ptr;
          assert(blob->len);
          if(tag == VSTRING && write) {
            fputc('"', f);
            for(unsigned i = 0; i < blob->len-1; i++) {
              char c = blob->buf[i];
              switch(c) {
                case '\a':
                  fprintf(f, "\\a");
                  break;
                case '\b':
                  fprintf(f, "\\b");
                  break;
                case '\t':
                  fprintf(f, "\\t");
                  break;
                case '\n':
                  fprintf(f, "\\n");
                  break;
                case '\r':
                  fprintf(f, "\\r");
                  break;
                case '\\':
                case '"':
                case '|':
                  fprintf(f, "\\%c", c);
                  break;
                default:
                  fputc(c, f);
                  break;
              }
            }
            fputc('"', f);
          } else {
            fprintf(f, "%s", blob->buf);
          }
          break;
        }
        case VVECTOR:
        {
          fprintf(f, "#vector");
          break;
        }
        case VHASH_TABLE:
        {
          fprintf(f, "#hash-table");
          break;
        }
        case VPORT:
        {
          fprintf(f, "#port");
          break;
        }
        default:
          fprintf(f, "#pointer");
          break;
      }
      break;
    }
    default:
      fprintf(f, "#?");
      break;
  }
}

SYSV_CALL static void VGetStackInfo(char ** start, size_t * size) {
#ifdef __linux__
  int ret;
  pthread_attr_t attribs;
  ret = pthread_attr_init(&attribs);
  ret = pthread_getattr_np(pthread_self(), &attribs);
  if(ret) printf("pthread error\n");
  ret = pthread_attr_getstack(&attribs, (void**)start, size);
  if(ret) printf("pthread error\n");
  ret = pthread_attr_destroy(&attribs);
  if(ret) printf("pthread error\n");
  *start += *size;
#endif
#ifdef _WIN64
  ULONG_PTR lo, hi;
  GetCurrentThreadStackLimits(&lo, &hi);
  *start = (char*)hi;
  *size = (char*)hi - (char*)lo;
#endif

#ifndef __x86_64__
  // stack may grow upwards on some platforms
  static_assert(0);
#endif
}

SYSV_CALL void VInitRuntime2(VRuntime ** runtime, int argc, char ** argv) {
  VRuntime * r = *runtime = malloc(sizeof(VRuntime));
  *r = (VRuntime){0};
  r->public.base = VMakeObject(VRUNTIME);

  r->VGCResumeCont = VFALSE;
  r->VExitCode = VFALSE;

  char * start;
  size_t stacksize;
  VGetStackInfo(&start, &stacksize);

  r->public.VStackStart = start;
  r->public.VStackLen = (ssize_t)stacksize - 1024*1024;
  r->public.VStackSize = (ssize_t)stacksize;

  r->VActiveHeap = true;
  r->VForceMajorGC = false;
  r->VGCsSinceMajor = 0;

  size_t size = r->public.VStackLen * 8;
  for(int i = 0; i < 2; i++) {
    r->VHeaps[i].begin = malloc(size);
    r->VHeaps[i].end = r->VHeaps[i].begin + size;
    r->VHeaps[i].size = size;
  }
  VSwapHeap(r);

  r->VNumTrackedMutations = 0;
  r->VNumUntrackedMutations = 0;
  r->VTrackedMutationsSize = 0;
  r->VTrackedMutations = NULL;

  r->VGlobalTable = NULL;
  r->VNumGlobals = 0;
  r->VNumGlobalSlots = 0;
  r->VGrowSymtable = false;

  memset(&r->VHeapFinalizers, 0, sizeof r->VHeapFinalizers);

  r->VNumMinorGCs = 0;
  r->VNumMajorGCs = 0;
  r->VMinorGCTime = 0;
  r->VMajorGCTime = 0;

  memset(&r->public.VCallHistory, 0, sizeof r->public.VCallHistory);
  r->public.VCallHistoryCursor = 0;

  r->VArgc = argc;
  r->VArgv = argv;

  r->lex_size = 0;
  r->lex_buf = NULL;

  // fiber implementation
  r->fiber_context = NULL;
  r->my_fiber = NULL;
  r->main_fiber = NULL;

  r->my_future = false;
#ifdef __linux__
  r->owns_heap[0] = false;
  r->owns_heap[1] = false;

  r->fiber_runtimes = malloc(sizeof(VStack));
  VStackInit(r->fiber_runtimes);
  r->fiber_heaps = malloc(sizeof(VStack));
  VStackInit(r->fiber_heaps);

  r->num_half_reaped_fibers = 0;
  r->half_reaped_fibers = NULL;
#endif
}

SYSV_CALL VWORD VStart2(VRuntime * runtime, int num_toplevels, VThunk const * toplevels) {
  if(!runtime->VGlobalTable)
  {
    VInitGlobalTable(runtime);
  }

  VClosure next_closure = VMakeClosure2((VFunc)VNext2, NULL);
  VWORD next = VEncodeClosure(&next_closure);

  VWORD ret = VEncodeInt(0);
  // volatile prevents a longjmp clobber warning when optimization is on
  volatile int i = 0;
  for(i = 0; i < num_toplevels; i++)
  {
    VThunk func = toplevels[i];
    int which = VSetJmp(runtime->VRoot);
    switch(which) {
      case 0:
        func(runtime, NULL, 1, next);
        break;
      case VJMP_GC:
        if(VWordType(runtime->VGCResumeCont) == VPOINTER_CLOSURE)
          V_CALL(runtime->VGCResumeCont, runtime, VVOID);
        else
          VError("missing GC Resume Continuation???~N");
        break;
      case VJMP_FINISH:
      {
        break;
      }
      case VJMP_ERROR:
      {
        ret = VEncodeInt(1);
        goto end;
        break;
      }
      case VJMP_EXIT:
      {
        ret = runtime->VExitCode;
        goto end;
        break;
      }
    }
  }
  VExit2(runtime, NULL, 2, VVOID, VEncodeInt(0));
end:
#ifdef __linux__
  if(runtime->fiber_context)
    VCloseFiberWorkers(runtime->fiber_context);
#endif
  return ret;
}

static SYSV_CALL void VResumeThunk(V_CORE_ARGS, ...) {
  V_CALL(statics->vars[0], runtime, statics->vars[1]);
}

SYSV_CALL VWORD VStart3(VRuntime * runtime, int num_toplevels, VWORD const * toplevels) {
  if(!runtime->VGlobalTable)
  {
    VInitGlobalTable(runtime);
  }

  VClosure next_closure = VMakeClosure2((VFunc)VNext2, NULL);
  VWORD next = VEncodeClosure(&next_closure);

  VWORD ret = VEncodeInt(0);
  // volatile prevents a longjmp clobber warning when optimization is on
  volatile int i = 0;
  for(i = 0; i < num_toplevels; i++)
  {
    VWORD func = toplevels[i];
    int which = VSetJmp(runtime->VRoot);
    switch(which) {
      case 0:
        V_CALL(func, runtime, next);
        break;
      case VJMP_GC:
        if(VWordType(runtime->VGCResumeCont) == VPOINTER_CLOSURE)
          V_CALL(runtime->VGCResumeCont, runtime, VVOID);
        else
          VError("missing GC Resume Continuation???~N");
        break;
      case VJMP_FINISH:
      {
        ret = runtime->VExitCode;
        if(runtime->my_future) {
          VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[2]));
          VInitEnv(env, 2, 2, NULL);
          env->vars[0] = next;
          env->vars[1] = ret;

          VClosure _thunk = VMakeClosure2((VFunc)VResumeThunk, env);
          VWORD thunk = VEncodeClosure(&_thunk);
          
          V_CALL_FUNC(VAwait, NULL, runtime, thunk, VEncodePointer(runtime->my_future, VPOINTER_OTHER));
        }
        break;
      }
      case VJMP_AWAIT:
      {
        if(!runtime->my_future)
          VError("async control flow error: tried to await-join without a future in flight?\n");
        runtime->my_future = NULL;
        ret = runtime->VExitCode;
        goto end;
        break;
      }
      case VJMP_ERROR:
      {
        ret = VERROR;
        goto end;
        break;
      }
      case VJMP_EXIT:
      {
        ret = runtime->VExitCode;
        goto end;
        break;
      }
    }
  }
  // VVOID will make the fiber return unhappy
  // while translating to a successful return code
  // to int main()
  VExit2(runtime, NULL, 2, VVOID, runtime->VExitCode);
end:
#ifdef __linux__
  if(VIsMain(runtime) && runtime->fiber_context)
    VCloseFiberWorkers(runtime->fiber_context);
#endif
  return ret;
}

SYSV_CALL void VFunction2(V_CORE_ARGS, VWORD k, VWORD name) {
  V_ARG_CHECK2("function", 2, argc);

  VFunc fun = VFunctionImpl(name);
  VClosure closure = VMakeClosure2(*fun, NULL);

  V_CALL(k, runtime, VEncodeClosure(&closure));
}

SYSV_CALL void VCommandLine2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK2("command-line", 1, argc);

  VWORD ret = VNULL;
  int cmd_argc = runtime->VArgc;
  while(cmd_argc--) {
    VPair * pair = alloca(sizeof(VPair));
    char * arg = runtime->VArgv[cmd_argc];
    unsigned len = strlen(arg);
    VBlob * str = alloca(sizeof(VBlob) + strlen(arg) + 1);
    str->base = VMakeSmallObject(VSTRING);
    str->len = len+1;
    memcpy(str->buf, arg, len+1);
    *pair = VMakePair(VEncodePointer(str, VPOINTER_OTHER), ret);
    ret = VEncodePair(pair);
  }
  V_CALL(k, runtime, ret);
}

SYSV_CALL bool __attribute__((noinline)) VStackOverflowNoInline(VRuntime * runtime) {
  char * VStackStop = (char*)&runtime;
  ptrdiff_t size = runtime->public.VStackStart - VStackStop;
#ifndef __x86_64__
  static_assert(0);
#endif
  return size > runtime->public.VStackLen;
}
SYSV_CALL bool __attribute__((noinline)) VStackOverflowNoInline2(VRuntime * runtime, char * VStackStop) {
  ptrdiff_t size = runtime->public.VStackStart - VStackStop;
#ifndef __x86_64__
  static_assert(0);
#endif
  return size > runtime->public.VStackLen;
}
SYSV_CALL void VRecordCallNoInline(VRuntime * runtime, VDebugInfo * debug) {
  runtime->public.VCallHistory[++runtime->public.VCallHistoryCursor % V_CALL_HISTORY_LEN] = debug;
}

// ======================================================
// --------------------- FIBER STUFF --------------------
// ======================================================

// stuff forbidden in fibers:
//   binding globals
//   setting globals
//   setting parent memory
//   importing

//   calling parent continuations? hrm I don't think that's forbidden. but ew

// TODO:
// 1. add finalizer passing
// 2. shore up UB?

#ifdef __linux__
typedef struct VLaunchFiberData {
  VWORD thunk;
  VRuntime const * base_runtime;
  VRuntime * my_runtime;
} VLaunchFiberData;

static void VInitFiberRuntime(VRuntime * r, VRuntime const * runtime, VFiber * fiber) {
  *r = *runtime;

  assert(runtime->fiber_context == fiber->context);
  size_t stacksize = fiber->stacksize;
  r->public.VStackStart = fiber->stack + stacksize;
  r->public.VStackLen = stacksize - 1024*1024;
  r->public.VStackSize = stacksize;

  memcpy(r->public.VCallHistory, runtime->public.VCallHistory, sizeof runtime->public.VCallHistory);
  r->public.VCallHistoryCursor = runtime->public.VCallHistoryCursor;

  r->VForceMajorGC = false;
  r->VActiveHeap = true;
  r->VGCsSinceMajor = 0;


  r->VNumTrackedMutations = 0;
  r->VNumUntrackedMutations = 0;
  r->VTrackedMutationsSize = 0;
  r->VTrackedMutations = NULL;

  r->VGlobalTable = runtime->VGlobalTable;
  r->VNumGlobals = runtime->VNumGlobals;
  r->VNumGlobalSlots = runtime->VNumGlobalSlots;
  r->VGrowSymtable = false;

  memset(&r->VHeapFinalizers, 0, sizeof r->VHeapFinalizers);

  r->VNumMinorGCs = 0;
  r->VNumMajorGCs = 0;
  r->VMinorGCTime = 0;
  r->VMajorGCTime = 0;

  r->VArgc = runtime->VArgc;
  r->VArgv = runtime->VArgv;

  r->lex_size = 0;
  r->lex_buf = NULL;

  r->my_fiber = fiber;
  r->main_fiber = runtime->main_fiber;
  r->fiber_context = runtime->fiber_context;

  r->my_future = NULL;
  r->fiber_runtimes = runtime->fiber_runtimes;
  r->fiber_heaps = runtime->fiber_heaps;

  for(int i = 0; i < 2; i++) {
    r->VHeaps[i].begin = NULL;
    r->VHeaps[i].end = NULL;
    r->VHeaps[i].size = 0;
  }
  r->VActiveHeap = false;
  r->VHeap = NULL;
  r->VHeapPos = NULL;
  r->VHeapEnd = NULL;
  VSwapHeap(r);
}
static void VFreeFiberRuntime(VRuntime * r) {
  for(int i = 0; i < 2; i++) {
    if(r->VHeaps[i].begin) {
      if(r->owns_heap[i])
        free(r->VHeaps[i].begin);
      else
        VStackPush(r->fiber_heaps, r->VHeaps[i].begin);
    }
  }
  for(int i = 0; i < 2; i++) {
    if(r->VHeapFinalizers[i].dense)
      free(r->VHeapFinalizers[i].dense);
    if(r->VHeapFinalizers[i].table)
      free(r->VHeapFinalizers[i].table);
  }
  if(r->lex_buf)
    free(r->lex_buf);
}

static uint64_t VLaunchFiber(VFiber * me, void * _data) {
  VLaunchFiberData * data = _data;

  data->my_runtime = VStackPop(data->base_runtime->fiber_runtimes);
  if(!data->my_runtime) {
    data->my_runtime = malloc(sizeof(VRuntime));
  }

  VInitFiberRuntime(data->my_runtime, data->base_runtime, me);
  VWORD ret = VStart3(data->my_runtime, 1, &data->thunk);

  return VBits(ret);
}

// extracts the return value, copying over data structures if needed
// and frees the runtime
static size_t VReapSpaceNeeded(VWORD fiber_ret, VRuntime * fiber_runtime) {
  if(!VIsPointer(fiber_ret))
    return 0;
  return fiber_runtime->VHeapPos - fiber_runtime->VHeap;
}

static void VReapFiberFinalizers(VRuntime * runtime, char * buf, VRuntime * fiber_runtime) {
  VFinalizerTable * my_table = &runtime->VHeapFinalizers[runtime->VActiveHeap];
  VFinalizerTable const * table = &fiber_runtime->VHeapFinalizers[fiber_runtime->VActiveHeap];
  int num_finalizers = table->num_finalizers;

  ptrdiff_t shift = buf - (char*)fiber_runtime->VHeap;
  void const * oldheap = fiber_runtime->VHeap;
  void const * oldend = fiber_runtime->VHeapPos;

  for(int i = 0; i < num_finalizers; i++) {
    VFinalizerEntry * entry = &table->dense[i];
    if(!VDecodeBool(entry->mem)) continue;
    VWORD mem = entry->mem;
    VWORD finalizer = entry->finalizer;

    VShiftWord(&mem, oldheap, oldend, shift);
    VShiftWord(&finalizer, oldheap, oldend, shift);

    VSetFinalizerImpl(my_table, mem, finalizer);
  }
}

static void VReapFiberRuntime(VRuntime * runtime, char * buf, VRuntime * fiber_runtime) {
  if(buf)
    VCopyHeap(buf, fiber_runtime->VHeap, fiber_runtime->VHeapPos - fiber_runtime->VHeap);
  if(fiber_runtime->VHeapFinalizers[fiber_runtime->VActiveHeap].num_finalizers) {
    VReapFiberFinalizers(runtime, buf, fiber_runtime);
  }
  VFreeFiberRuntime(fiber_runtime);
  VStackPush(runtime->fiber_runtimes, fiber_runtime);
}

static void VPushHalfReapedFibers(VRuntime * runtime, int numfibers, VLaunchFiberData * datas) {
  if(!numfibers)
    return;
  assert(runtime->num_half_reaped_fibers == 0);
  assert(!runtime->half_reaped_fibers);
  runtime->num_half_reaped_fibers = numfibers;
  VRuntime ** runtimes = runtime->half_reaped_fibers = malloc(sizeof(VRuntime*[numfibers]));
  for(int i = 0; i < numfibers; i++) {
    runtimes[i] = datas[i].my_runtime;
  }
}
static void VPushHalfReapedRuntimes(VRuntime * runtime, int numfibers, VRuntime ** _runtimes) {
  if(!numfibers)
    return;
  assert(runtime->num_half_reaped_fibers == 0);
  assert(!runtime->half_reaped_fibers);
  runtime->num_half_reaped_fibers = numfibers;
  VRuntime ** runtimes = runtime->half_reaped_fibers = malloc(sizeof(VRuntime*[numfibers]));
  for(int i = 0; i < numfibers; i++) {
    runtimes[i] = _runtimes[i];
  }
}

// TODO need to keep massaging this into a GCable function
static uint64_t VWrappedFiberFork(VRuntime * runtime, VEnv * upenv, int numfibers, VWORD k, VLaunchFiberData * datas) {
  VFiber * me = runtime->my_fiber;
  VFiber * fibers[numfibers];

  VWORD ret = VNULL;
  for(int i = 0; i < numfibers; i++) {
    ret = VInlineCons(VVOID, ret);
  }

  int pushnum = 0;
  int waitnum = 0;
  int halfreapnum = 0;
  int reapnum = 0;

  VWORD cur_wait = ret;
  VWORD cur_reap = ret;
  char * stackstop = alloca(1);
  bool reapoverflow = false;
  while(halfreapnum < numfibers) {
    // spin up a fiber
    if(pushnum < numfibers) {
      fibers[pushnum] = VPushFiber(runtime->fiber_context, me, VLaunchFiber, &datas[pushnum]);
      pushnum++;
    }

    // see if we have any opportunistic waits
    VPair * waitpair = VDecodePair(cur_wait);
    while(waitnum < pushnum && VTryFiberWait(runtime->fiber_context, fibers[waitnum], me, (uint64_t*)&waitpair->first)) {
      cur_wait = VInlineCdr(cur_wait);
      waitpair = VDecodePair(cur_wait);
      waitnum++;
    }

    // try to reap threads
    while(halfreapnum < waitnum) {
      VPair * reappair = VDecodePair(cur_reap);
      VWORD fiber_ret = VInlineCar(cur_reap);
      if(VIsToken(fiber_ret, VTOK_ERROR))
        VError("fiber-split: a fiber errored\n");
      if(VIsToken(fiber_ret, VTOK_VOID))
        VError("fiber-split: a fiber returned but did not return a value\n");

      VRuntime * fiber_runtime = datas[halfreapnum].my_runtime;
      size_t reapsize = VReapSpaceNeeded(fiber_ret, fiber_runtime);
      if(!reapoverflow && !VStackOverflowNoInline2(runtime, stackstop - reapsize)) {
        char * buf = reapsize ? alloca(reapsize) : NULL;
        if(buf) stackstop = buf;
        VShiftWord(&reappair->first, fiber_runtime->VHeap, fiber_runtime->VHeapEnd, buf - (char*)fiber_runtime->VHeap);
        VReapFiberRuntime(runtime, buf, fiber_runtime);
        reapnum++;
      } else {
        reapoverflow = true;
      }
      cur_reap = VInlineCdr(cur_reap);
      halfreapnum++;
    }

    if(pushnum == numfibers && waitnum < numfibers) {
      // no more fibers to push so at this point we start spinning on waits
      waitpair->first = VWord(VFiberWait(runtime->fiber_context, fibers[waitnum], me));
      cur_wait = VInlineCdr(cur_wait);
      waitnum++;
    }
  }

  VPushHalfReapedFibers(runtime, numfibers - reapnum, datas + reapnum);

  if(reapoverflow) {
    VClosure * _k = VDecodeClosure(k);
    VGarbageCollect2(_k->func, runtime, _k->env, 1, &ret);
  } else {
    V_CALL(k, runtime, ret);
  }
  assert(0);
  return 0;
}


#endif

SYSV_CALL void VFiberForkList(V_CORE_ARGS, VWORD k, VWORD lst) {
#ifdef __linux__
  V_ARG_CHECK2("fiber-fork", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)VFiberForkList, runtime, statics, 2, argc, k, lst) {
    if(!runtime->fiber_context) {
      runtime->my_fiber = VLaunchFiberWorkers(&runtime->fiber_context, 8, 2 * 1024 * 1024);
      runtime->main_fiber = runtime->my_fiber;
    }
    int nfibers = 0;
    VWORD cur = lst;
    while(!VIsToken(cur, VTOK_NULL)) {
      if(VWordType(cur) != VPOINTER_PAIR)
        VError("fiber-fork: not a proper list ~S\n", lst);
      if(VWordType(VInlineCar(cur)) != VPOINTER_CLOSURE)
        VError("fiber-fork: not a procedure ~S\n", VInlineCar(cur));
      nfibers++;
      cur = VInlineCdr(cur);
    }
    if(nfibers > 0) {
      VLaunchFiberData datas[nfibers];

      for(int i = 0; i < nfibers; i++) {
        datas[i].thunk = VInlineCar(lst);
        datas[i].base_runtime = runtime;
        datas[i].my_runtime = NULL;
        lst = VInlineCdr(lst);
      }

      VWrappedFiberFork(runtime, NULL, nfibers, k, datas);
    } else {
      V_CALL(k, runtime, VNULL);
    }
  }
#endif
  VError("fiber-fork: unsupported platform\n");
  assert(0);
}

///////////////////// AWAIT //////////////////////////

#ifdef __linux__
typedef struct VLaunchAwaiterData {
  VWORD k;
  VWORD future;
  VRuntime * base_runtime;
  VRuntime * my_runtime;
} VLaunchAwaiterData;

static uint64_t VLaunchAwaiter(VFiber * me, void * _data) {
  VLaunchAwaiterData * data = _data;

  data->my_runtime = VStackPop(data->base_runtime->fiber_runtimes);
  if(!data->my_runtime) {
    data->my_runtime = malloc(sizeof(VRuntime));
  }

  VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[2]));
  VInitEnv(env, 2, 2, NULL);
  env->vars[0] = data->k;
  env->vars[1] = data->future;

  VClosure _thunk = VMakeClosure2((VFunc)VResumeThunk, env);
  VWORD thunk = VEncodeClosure(&_thunk);

  VInitFiberRuntime(data->my_runtime, data->base_runtime, me);
  data->my_runtime->my_future = (VFuture*)VDecodePointer(data->future);
  VWORD ret = VStart3(data->my_runtime, 1, &thunk);

  return VBits(ret);
}
#endif

// async first launches the thunk fiber, which is just (thunk)
// then it launches the continuation fiber, which is (k future)
// then it waits on the continuation fiber
// the continuation fiber returns a zero arg continuation to resume at
// then it garbage collects with the two runtimes and a resume at the zero arg continuation
SYSV_CALL void VAsync(V_CORE_ARGS, VWORD k, VWORD future_thunk) {
#ifdef __linux__
  V_ARG_CHECK2("async", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)VAsync, runtime, statics, 2, argc, k, future_thunk) {
    if(!runtime->fiber_context) {
      runtime->my_fiber = VLaunchFiberWorkers(&runtime->fiber_context, 8, 2 * 1024 * 1024);
      runtime->main_fiber = runtime->my_fiber;
    }
    if(VWordType(future_thunk) != VPOINTER_CLOSURE)
      VError("async: not a procedure ~S\n", future_thunk);
    VLaunchFiberData thunk_data = {
      .thunk = future_thunk,
      .base_runtime = runtime,
      .my_runtime = NULL,
    };
    VFiber * future_fiber = VPushFiber(runtime->fiber_context, runtime->my_fiber, VLaunchFiber, &thunk_data);
    VFuture future = {
      .base = { .tag = VFUTURE, .flags = 0, .pincount = 0, .forward_offset = 0 },
      .lock = NULL,
      .val = VVOID,
    };
    atomic_init(&future.fiber, future_fiber);
    VFiberLockCreate(&future.lock);

    VLaunchAwaiterData awaiter_data = {
      .k = k,
      .future = VEncodePointer(&future, VPOINTER_OTHER),
      .base_runtime = runtime,
      .my_runtime = NULL,
    };
    VFiber * awaiter_fiber = VPushFiber(runtime->fiber_context, runtime->my_fiber, VLaunchAwaiter, &awaiter_data);

    VWORD resume_thunk = VWord(VFiberWait(runtime->fiber_context, awaiter_fiber, runtime->my_fiber));

    if(atomic_load(&future.fiber))
      VError("async control flow error: async-join occured even though the future hasn't been awaited\n");

    VRuntime * runtimes[2] = {
      awaiter_data.my_runtime,
      thunk_data.my_runtime,
    };

    VPushHalfReapedRuntimes(runtime, 2, runtimes);
    VClosure * _resume_thunk = VDecodeClosure(resume_thunk);
    VGarbageCollect2(_resume_thunk->func, runtime, _resume_thunk->env, 0, NULL);
  }
#endif
  VError("async: unsupported platform\n");
  assert(0);
}

#ifdef __linux__
static SYSV_CALL void VAwaitRejoinK(V_CORE_ARGS, VWORD resume_thunk) {
  runtime->VExitCode = resume_thunk;
  VLongJmp(runtime->VRoot, VJMP_AWAIT);
}
#endif

// locks the future
// if the fiber hasn't exited, waits on it
//   and updates the future to hold its value
//   then unlocks the future
//   asserts that this future is the fiber's future
//   longjmps returning a thunk to continue at returning the future's value
// otherwise returns the fiber value
// the spawning thread is responsible for reaping the future's context
SYSV_CALL void VAwait(V_CORE_ARGS, VWORD k, VWORD _future) {
#ifdef __linux__
  V_ARG_CHECK2("await", 2, argc);
  VFuture * future = VCheckedDecodeFuture(_future, "await");

  VFiber * fiber = atomic_load(&future->fiber);
  if(fiber) {
    VFiberAcquire(future->lock, runtime->fiber_context, runtime->my_fiber);
    fiber = atomic_load(&future->fiber);
    if(fiber) {
      future->val = VWord(VFiberWait(runtime->fiber_context, fiber, runtime->my_fiber));
      assert(atomic_exchange(&future->fiber, NULL));
    }
    VFiberRelease(future->lock, runtime->fiber_context, runtime->my_fiber);
  }

  bool join_threads = false;
  if(fiber) {
    //if(runtime->my_future != future)
      //VError("await: must await inverse order of async launches\n");

    if(runtime->my_future == future) {
      join_threads = true;
    }
  }
  if(runtime->my_future) {
    if(!atomic_load(&runtime->my_future->fiber)) {
      join_threads = true;
    }
  }
  if(join_threads) {
    // garbage collect with a resume to yield the future's value into k
    VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[2]));
    VInitEnv(env, 2, 2, NULL);
    env->vars[0] = k;
    env->vars[1] = future->val;

    VClosure _thunk = VMakeClosure2((VFunc)VResumeThunk, env);
    VWORD thunk = VEncodeClosure(&_thunk);

    VGarbageCollect2((VFunc)VAwaitRejoinK, runtime, NULL, 1, &thunk);
  } else {
    V_CALL(k, runtime, future->val);
  }
#endif
  VError("await: unsupported platform\n");
  assert(0);
}

// ======================================================
// ------------------- DEBUGGING STUFF ------------------
// ======================================================

// HAHA NONE
