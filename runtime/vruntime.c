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
#include <time.h>
#endif
#ifdef _WIN64
#include <io.h>
#include <fileapi.h>
#include <errhandlingapi.h>
#include <debugapi.h>
#include <libloaderapi.h>
#include <processthreadsapi.h>
#include <psapi.h>
#include <profileapi.h>
#endif
#ifdef __EMSCRIPTEN__
#include <emscripten/stack.h>
#include <emscripten/emscripten.h>
#include <dlfcn.h>
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
#include <stdatomic.h>

#include "vanity/dfile.h"
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vsetjmp_private.h"
#include "vruntime_private.h"
#include "vport_private.h"
#include "vscheme/vinlines.h"
#include "vscheme/vhash.h"
#include "vscheme/vmemory.h"
#include "intern_private.h"

#ifndef VANITY_PURE_C
// fibers require asm support
#include "vqueue_private.h"
#else
// single threaded stack impl since PURE_C abi is single threaded.
// still need the stack to hold heap pages.
typedef struct VListNode {
  void * data;
  struct VListNode * next;
} VListNode;

typedef struct VListNodePool {
  VListNode * nodes;
} VListNodePool;
typedef struct VStack {
  VListNode * head;
  VListNodePool pool;
} VStack;

static void VStackInit(VStack * stack) {
  stack->head = NULL;
  stack->pool.nodes = NULL;
}

static VListNode * VAllocNode(VListNodePool * pool) {
  VListNode * ret = pool->nodes;
  if(!ret)
    ret = malloc(sizeof(VListNode));
  ret->data = NULL;
  ret->next = NULL;
  return ret;
}
static void VFreeNode(VListNodePool * pool, VListNode * node) {
  node->data = NULL;
  node->next = pool->nodes;
  pool->nodes = node;
}
static void VStackPush(VStack * stack, void * data) {
  VListNode * node = VAllocNode(&stack->pool);
  node->data = data;
  node->next = stack->head;
  stack->head = node;
}
static void * VStackPop(VStack * stack) {
  VListNode * node = stack->head;
  if(!node)
    return NULL;
  stack->head = node->next;
  void * data = node->data;
  VFreeNode(&stack->pool, node);
  return data;
}
#endif

#ifdef VANITY_PURE_C
void VSysApply(VFunc func, VEnvironment * environ) {
  int argc = environ->argc;
  VEnv * self = VAlloca(environ->runtime, sizeof(VEnv)+sizeof(VWORD[argc]));
  memcpy(self->vars, environ->argv, sizeof(VWORD[argc]));
  VInitEnv(self, argc, argc, environ->static_chain);

  func(environ->runtime, environ->static_chain, argc, self);
  while(1) {
    VPublicRuntime * _pub = (VPublicRuntime *)environ->runtime;
    _pub->trampoline_func(environ->runtime, _pub->trampoline_env, _pub->trampoline_argc, _pub->trampoline_args);
  }
}
void VSysApplyBounce(VFunc func, VEnvironment * environ) {
  int argc = environ->argc;
  VEnv * self = VAlloca(environ->runtime, sizeof(VEnv)+sizeof(VWORD[argc]));
  memcpy(self->vars, environ->argv, sizeof(VWORD[argc]));
  VInitEnv(self, argc, argc, environ->static_chain);

  // possible to get ourselves in trouble without doing a gc check but ehhhhh
  func(environ->runtime, environ->static_chain, argc, self);
}
#endif

static inline bool VIsMain(VRuntime * runtime) {
  return runtime->my_fiber == runtime->main_fiber;
}

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

__attribute__((noreturn))
void VReallyExit(int ret) {
#ifdef __EMSCRIPTEN__
  emscripten_cancel_main_loop();
#endif
  exit(ret);
}

__attribute__((noreturn))
void VReallyAbort() {
#ifdef __EMSCRIPTEN__
  emscripten_cancel_main_loop();
#endif
  abort();
}

void VDonateMemoryPool(VRuntime * runtime, VMemoryPool * pool) {
  assert(!runtime->num_unreaped_arenas);
  int ct = 0;
  VAllocPage * cur_page = pool->page;
  {
    while(cur_page) {
      ct++;
      cur_page = cur_page->next;
    }
  }
  if(!ct) return;

  VArena * arenas = malloc(sizeof(VArena[ct]));
  int i = 0;
  cur_page = pool->page;
  size_t pagesize = pool->page_size;
  size_t pageoffset = pool->page_offset;
  while(cur_page)
  {
    char * page_end = cur_page->buf + pagesize;
    arenas[i] = (VArena) {
      .buf = (char*)cur_page,
      .buf_end = page_end,
      .buf_cursor = cur_page->next ? page_end : cur_page->buf + pageoffset,
    };
    i++;
    cur_page = cur_page->next;
  }
  assert(i == ct);
  runtime->num_unreaped_arenas = ct;
  runtime->unreaped_arenas = arenas;

  pool->page_offset = pool->page_size;
  pool->page = NULL;
}

static SYSV_CALL void VFPrintfC(VRuntime * runtime, VPort * p, char const * str, ...);

__attribute__((noreturn))
static void VAbortC(VRuntime * runtime, VWORD err) {
  // Print the msg, attempt to start a debugger... but only if we're the main thread
  // fibers should continue throwing through into the main thread.
  // we might have more exception handlers in the main thread.
  if(!runtime || VIsMain(runtime)) {
#ifdef __linux__
    if(isatty(fileno(stderr)))
      VFPrintfC(NULL, (VPort[]){get_port_stderr()}, "\033[1;31munhandled exception:\033[0m ~A~N", err);
    else
#endif
      VFPrintfC(NULL, (VPort[]){get_port_stderr()}, "unhandled exception: ~A~N", err);

    if(runtime)
      VPrintCallHistory(runtime);
    fflush(stderr);
    fflush(stdout);
    d_fflush(dstderr);
    d_fflush(dstdout);
#ifdef __linux__
    raise(SIGTRAP);
#endif
#ifdef _WIN64
    DebugBreak();
#endif
#ifdef __EMSCRIPTEN__
    emscripten_debugger();
#endif
  }

  // TODO actually pass the error here

  if(runtime)
    VLongJmp(runtime->VRoot, VJMP_ERROR);
  VReallyAbort();
}

#define FORWARDED ULLONG_MAX

// TODO kill this
bool VANITY_USE_DFILE = false;

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
enum MEMORY_LOCATION { ARENA_MEM = 1, OLD_HEAP_MEM = 2, STACK_MEM = 4, HEAP_MEM = 8, STATIC_MEM = 16 };
SYSV_CALL static unsigned VMemLocation(VRuntime * runtime, void * obj) {
  if(((VObject*)obj)->flags & VFLAG_STATIC)
    return STATIC_MEM;

#ifdef VANITY_PURE_C
  if(runtime->public.VSecondStackStart <= (char*)obj && (char*)obj < runtime->public.VSecondStackStart + runtime->public.VSecondStackSize)
    return STACK_MEM;
#endif
  if(runtime->public.VStackStart - runtime->public.VStackSize <= (char*)obj && (char*)obj < runtime->public.VStackStart)
    return STACK_MEM;
  if(runtime->VHeaps[runtime->VActiveHeap].begin <= obj && obj < runtime->VHeaps[runtime->VActiveHeap].end)
    return HEAP_MEM;
  if(runtime->VHeaps[!runtime->VActiveHeap].begin <= obj && obj < runtime->VHeaps[!runtime->VActiveHeap].end)
    return OLD_HEAP_MEM;

#if 0
  for(int i = 0; i < runtime->num_half_reaped_fibers; i++) {
    VRuntime * fiber_runtime = runtime->half_reaped_fibers[i];
    if(fiber_runtime->VHeaps[fiber_runtime->VActiveHeap].begin <= obj && obj < fiber_runtime->VHeaps[fiber_runtime->VActiveHeap].end)
      return ARENA_MEM;
  }
#endif
  for(int i = 0; i < runtime->num_unreaped_arenas; i++) {
    VArena * arena = &runtime->unreaped_arenas[i];
    if(arena->buf <= (char*)obj && (char*)obj <= arena->buf_end)
      return ARENA_MEM;
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
  runtime->VNumGlobalSlots = 1024;
  runtime->VGlobalTable = malloc(sizeof(VGlobalEntry[runtime->VNumGlobalSlots]));
  for(int i = 0; i < runtime->VNumGlobalSlots; i++) runtime->VGlobalTable[i].symbol = VVOID;
}

static SYSV_CALL void VResizeGlobalTable(VRuntime * runtime) {
  // FIXME: I'm convinced there is a memory issue here, because the mutation tracking
  // would drop the objects. I've kludged around it by making the global table huge
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
    free(oldconsts);
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

static int VStaticEnvTableSize;
static int VStaticEnvTableCapacity;
typedef struct {
  char const * name;
  VEnv ** slot;
} VStaticEnvEntry;

static VStaticEnvEntry * VStaticEnvTable;
void VRegisterStaticEnv(char const * name, VEnv ** slot) {
  for(int i = 0; i < VStaticEnvTableSize; i++) {
    if(!strcmp(VStaticEnvTable[i].name, name)) {
      fprintf(stderr, "Internal system error: double registering a static environment: %s\n", name);
      VAbortC(NULL, VERROR);
    }
  }
  if(VStaticEnvTableSize == VStaticEnvTableCapacity) {
    if(!VStaticEnvTableCapacity)
      VStaticEnvTableCapacity = 1;
    VStaticEnvTableCapacity *= 2;
    VStaticEnvTable = realloc(VStaticEnvTable, sizeof(VStaticEnvEntry[VStaticEnvTableCapacity]));
  }
  VStaticEnvTable[VStaticEnvTableSize].name = name;
  VStaticEnvTable[VStaticEnvTableSize++].slot = slot;
}
void VUnregisterStaticEnv(char const * name) {
  for(int i = 0; i < VStaticEnvTableSize; i++) {
    if(!strcmp(VStaticEnvTable[i].name, name)) {
      memmove(&VStaticEnvTable[i], &VStaticEnvTable[i+1], sizeof(VStaticEnvEntry[VStaticEnvTableSize - i - 1]));
      VStaticEnvTableSize--;
      return;
    }
  }
  fprintf(stderr, "Warning: unregistering a nonexistant static environment:  %s\n", name);
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

SYSV_CALL static void VSetFinalizerHash(VRuntime * runtime, VFinalizerTable * table, VWORD mem, unsigned dense_index, bool dupe_test) {
  uint64_t h = VHashPointer(mem);
  unsigned i = h & (table->table_size - 1);
  unsigned tries = 0;
  while(tries++ <= table->table_size && ~table->table[i]) {
    if(dupe_test && VBits(table->dense[table->table[i]].mem) == VBits(mem))
      VErrorC(runtime, "set-finalizer!: tried to set finalizer to address that already has one ~S\n", mem);
    i = (i+1) & (table->table_size - 1);
  }
  if(tries >= table->table_size) VErrorC(runtime, "Unable to insert into finalizer hashmap\n");
  table->table[i] = dense_index;
}

SYSV_CALL void VSetFinalizerImpl(VRuntime * runtime, VFinalizerTable * table, VWORD mem, VWORD finalizer) {
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
        VSetFinalizerHash(runtime, table, mem, i, false);
    }
  }

  unsigned dense_index = table->num_finalizers;
  VFinalizerEntry * entry = &table->dense[dense_index];
  *entry = (VFinalizerEntry) { .foreign_marked = false, .pad = 0, .mem = mem, .finalizer = finalizer };
  table->num_finalizers++;

  VSetFinalizerHash(runtime, table, mem, dense_index, true);
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

V_BEGIN_FUNC(VSetFinalizer, "set-finalizer!", 3, k, mem, finalizer)
  if(!(VIsPointer(mem) || VIsForeignPointer(mem)))
    VErrorC(runtime, "set-finalizer!: Finalizers can only be set on addresses ~S\n", mem);
  if(!(VWordType(finalizer) == VPOINTER_CLOSURE))
    VErrorC(runtime, "set-finalizer!: Not a procedure ~S\n", finalizer);

  // In order to just have heap finalizers, we need to track finalizer
  // as a mutation to avoid dropping it
  // we also can't drop mem until the finalizer is run ofc

  VSetFinalizerImpl(runtime, &runtime->VHeapFinalizers[runtime->VActiveHeap], mem, finalizer);
  V_BOUNCE(k, runtime, VVOID);
V_END_FUNC

V_BEGIN_FUNC(VFinalize, "finalize!", 2, k, mem)
  V_GC_CHECK2_VARARGS((VFunc)VFinalize, runtime, statics, 2, argc, k, mem) {
    if(!(VIsPointer(mem) || VIsForeignPointer(mem)))
      VErrorC(runtime, "finalize!: Not an address ~S\n", mem);

    VFinalizerEntry * finalizer = VGetFinalizer(runtime, mem, true);
    if(!finalizer) VErrorC(runtime, "finalize!: No finalizer at address of ~S\n", mem);

    VWORD final = finalizer->finalizer;
    if(!VDecodeBool(final)) VErrorC(runtime, "finalize!: double finalize at address of ~S\n", mem);
    finalizer->mem = VFALSE;
    finalizer->finalizer = VFALSE;
    V_BOUNCE(final, runtime, k, mem);
  }
V_END_FUNC

V_BEGIN_FUNC(VHasFinalizer, "has-finalizer?", 2, k, mem)
  if(!(VIsPointer(mem) || VIsForeignPointer(mem)))
    VErrorC(runtime, "has-finalizer?: Not an address ~S\n", mem);
  V_BOUNCE(k, runtime, VEncodeBool(VGetFinalizer(runtime, mem, true)));
V_END_FUNC

V_BEGIN_FUNC(VGarbageCollect, "garbage-collect", 2, k, major)
  VClosure * cl = VDecodeClosure(k);
  if(VDecodeBool(major)) {
    runtime->VForceMajorGC = true;
  }
  VGarbageCollect2Args(cl->func, runtime, cl->env, 1, 1, VVOID);
V_END_FUNC

// continuation to run finalizers that didn't survive a gc
V_BEGIN_FUNC_MIN(VApplyFinalizer, "apply-finalizer!", 0)
  VWORD k = statics->vars[0];
  VWORD mem = statics->vars[1];

  V_BOUNCE_FUNC(VFinalize, NULL, runtime, k, mem);
V_END_FUNC

SYSV_CALL void * VForwarded(void * address) {
  if(*(uint64_t*)address == FORWARDED)
    return *(void**)(address + sizeof(VWORD));
  else
    return NULL;
}

V_BEGIN_FUNC(VGetDynamics, "get-dynamics", 1, k)
  V_BOUNCE(k, runtime, runtime->dynamics);
V_END_FUNC

V_BEGIN_FUNC(VPushDynamic, "push-dynamic", 3, k, key, val)
  VPair entry = VMakePair(key, val);
  VPair node = VMakePair(VEncodePair(&entry), runtime->dynamics);
  runtime->dynamics = VEncodePair(&node);

  V_CALL(k, runtime, VEncodePair(&entry));
V_END_FUNC

V_BEGIN_FUNC(VPopDynamic, "pop-dynamic", 2, k, keyval)
  if(VIsEq(runtime->dynamics, VNULL))
    VErrorC(runtime, "pop-dynamic: attempted to pop a dynamic when there are none bound: ~S\n", keyval);
  VPair * top = VDecodePair(runtime->dynamics);
  if(!VIsEq(keyval, top->first)) {
    VErrorC(runtime, "pop-dynamic: you must pop dynamics in inverse order they were pushed: got ~S, expected ~S, chain ~S\n", keyval, top->first, runtime->dynamics);
  }
  runtime->dynamics = top->rest;

  V_BOUNCE(k, runtime, VVOID);
V_END_FUNC

V_BEGIN_FUNC(VGetExceptionHandlers, "get-exception-handlers", 1, k)
  V_BOUNCE(k, runtime, runtime->exception_handlers);
V_END_FUNC

static V_BEGIN_FUNC(VDefaultExceptionHandler, "default-exception-handler", 2, k, err)
  V_BOUNCE_FUNC(VAbort2, NULL, runtime, err);
V_END_FUNC

static VClosure default_exception_handler = { .base = { .tag = VCLOSURE }, .func = (VFunc)VDefaultExceptionHandler, .env = NULL };
static SYSV_CALL VWORD VGetExceptionHandlerImpl(VRuntime * runtime) {
  if(VIsEq(runtime->exception_handlers, VNULL)) {
    return VEncodeClosure(&default_exception_handler);
  } else {
    VPair * top = VDecodePair(runtime->exception_handlers);
    runtime->exception_handlers = top->rest;
    return top->first;
  }
}
V_BEGIN_FUNC(VGetExceptionHandler, "get-exception-handler", 1, k)
  V_BOUNCE(k, runtime, VGetExceptionHandlerImpl(runtime));
V_END_FUNC

V_BEGIN_FUNC(VPushExceptionHandler, "push-exception-hander", 2, k, handler)
  (void)VCheckedDecodeClosure2(runtime, handler, "push-exception-hander");
    
  VPair node = VMakePair(handler, runtime->exception_handlers);
  runtime->exception_handlers = VEncodePair(&node);

  V_CALL(k, runtime, VVOID);
V_END_FUNC

V_BEGIN_FUNC(VPopExceptionHandler, "pop-exception-handler", 2, k, handler)
  if(VIsEq(runtime->exception_handlers, VNULL))
    VErrorC(runtime, "pop-exception-handler: attempted to pop an exception handler when there are none bound: ~S\n", handler);

  VPair * top = VDecodePair(runtime->exception_handlers);
  if(!VIsEq(handler, top->first)) {
    VErrorC(runtime, "pop-exception-handler: you must pop exception handlers in inverse order they were pushed: got ~S, expected ~S\n",
           handler, top->first);
  }
  runtime->exception_handlers = top->rest;

  V_BOUNCE(k, runtime, VVOID);
V_END_FUNC

static V_BEGIN_FUNC_MIN(VRaiseK, "raise-k", 0)
  VWORD x = statics->vars[0];
  V_BOUNCE_FUNC(VRaise, NULL, runtime, VFALSE, x);
V_END_FUNC

V_BEGIN_FUNC(VRaise, "raise", 2, _, x)
  VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[1]));
  VInitEnv(env, 1, 1, NULL);
  env->vars[0] = x;
  VClosure raisek = VMakeClosure2(VRaiseK, env);

  VWORD handler = VGetExceptionHandlerImpl(runtime);
  V_CALL(handler, runtime, VEncodeClosure(&raisek), x);
V_END_FUNC

#ifdef _WIN64
FILE * Windows_TmpFile() {
  // because tmpfile() creates its files in the root folder of the volume
  // and the root C: was changed in Vista to be readonly
  // and tmpfile() was left hanging.
  char buf[PATH_MAX];
  GetTempPathA(sizeof buf, buf);
  char * name = _tempnam(buf, "tmp");
  if(!name)
    return NULL;
  enum { FILE_FLAG_DELETE_ON_CLOSE = 0x04000000 };
  HANDLE h = CreateFile( name, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, FILE_FLAG_DELETE_ON_CLOSE, NULL );
  free(name);
  if((intptr_t)h == (intptr_t)-1)
    return NULL;
  // don't call CloseHandle on h anymore, open_osfhandle takes ownership
  int fd = _open_osfhandle((intptr_t)h, 0);
  if(fd == -1)
    return NULL;
  // don't call close on fd anymore, fdopen takes ownership
  FILE * f = fdopen(fd, "wb+");
  return f;
}
#endif

static SYSV_CALL void VVFPrintfC(VRuntime * runtime, VPort * p, char const * str, va_list args);
SYSV_CALL void VErrorC(VRuntime * runtime, const char * str, ...) {
  va_list args;
  va_start(args, str);
#define ERROR_USE_DFILE
#ifdef ERROR_USE_DFILE
  DFILE * f = d_strfile();
#else
  #ifdef __linux__
  FILE * f = tmpfile();
  #endif
  #ifdef _WIN64
  FILE * f = Windows_TmpFile();
  #endif
#endif
  VBlob * ret = alloca(sizeof(VBlob)+4096);
  ret->base = VMakeSmallObject(VSTRING);
  ret->len = 4096;
  if(f) {
#ifdef ERROR_USE_DFILE
    VPort p = {
      .base.tag = VPORT,
      .line = 1,
      .dstream = f,
      .flags = PFLAG_WRITE | PFLAG_READ | PFLAG_DFILE,
    };
#else
    VPort p = VMakePortStream(f, PFLAG_WRITE | PFLAG_READ);
#endif
    VVFPrintfC(runtime, &p, str, args);
    int len = port_ftell(&p);
    port_rewind(&p);

    if(len < ret->len)
      ret->len = len;
    else
      len = ret->len-1;

    port_fread(ret->buf, len, &p);
    ret->buf[len] = '\0';
    port_close(&p);
  } else {
    char msg[] = "an error occured but file descriptors were exhausted. Unable to transcribe message.";
    memcpy(ret->buf, msg, sizeof msg);
    ret->len = sizeof msg;
  }
  va_end(args);
  V_CALL_FUNC(VRaise, NULL, runtime, VFALSE, VEncodePointer(ret, VPOINTER_OTHER));
}

/////////////////////////////////////////////////////////////
//                   GARBAGE COLLECTOR                     //
/////////////////////////////////////////////////////////////

static V_BEGIN_FUNC(VHugeFree, "huge-free", 2, k, mem)
  if(!VIsPointer(mem))
    VErrorC(runtime, "huge-free: not huge memory");
  void * ptr = VDecodePointer(mem);
  if(VMemLocation(runtime, ptr) != STATIC_MEM)
    VErrorC(runtime, "huge-free: not huge memory");
  free(ptr);
  V_BOUNCE(k, runtime, VVOID);
V_END_FUNC
static VClosure VHugeFreeClosure = {
  .base = {
    .tag = VCLOSURE,
  },
  .func = (VFunc)VHugeFree,
  .env = NULL,
};

void * VHugeAlloc(VRuntime * runtime, size_t size, bool plain_old_data) {
  if(!plain_old_data)
    VErrorC(runtime, "huge allocs must be plain old data such as bytevectors, f32vectors, or strings");
  void * ret = malloc(size);
  VSetFinalizerImpl(runtime, &runtime->VHeapFinalizers[runtime->VActiveHeap], VEncodePointer(ret, VPOINTER_OTHER), VEncodePointer(&VHugeFreeClosure, VPOINTER_CLOSURE));
  return ret;
}

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
#ifdef __EMSCRIPTEN__
  int tag = *(VNEWTAG*)obj;
  if(!(VTAG_START <= tag && tag < VTAG_END)) {
    fprintf(stderr, "object of size %zu has invalid tag %d\n", size, tag);
    VAbortC(NULL, VERROR);
  }
#endif
  void * collected = VAllocHeap(runtime, size);
  if(!collected) {
    //if(runtime->VHeapPos + size >= runtime->VHeapEnd) {
    fprintf(stderr, "Heap Overflow! This shouldn't have happened.\n"
                    "--heap size: %zu\n"
                    "--heap used: %zu\n"
                    "--mem requested: %zu\n"
                    "--heap ptr: %p\n"
                    "--heap end ptr: %p\n",
            runtime->VHeapEnd - runtime->VHeap,
            runtime->VHeapPos - runtime->VHeap,
            size,
            runtime->VHeap,
            runtime->VHeapEnd
            );
    VAbortC(NULL, VERROR);
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
    ret->runtime->dynamics = VMoveDispatch(runtime, ret->runtime->dynamics);
    ret->runtime->exception_handlers = VMoveDispatch(runtime, ret->runtime->exception_handlers);
    ret->runtime->declare_list = VMoveDispatch(runtime, ret->runtime->declare_list);
    ret->runtime->library_list = VMoveDispatch(runtime, ret->runtime->library_list);
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

  uint64_t type = VWordType(word);
  if(type == VPOINTER_OTHER) {
    VNEWTAG tag = *(VNEWTAG*)ptr;
    switch(tag) {
      case VSTRING:
      case VBUFFER:
      {
        VBlob * b = ptr;
        size_t size = sizeof(VBlob) + (b->len + sizeof(VWORD) - 1)/sizeof(VWORD) * sizeof(VWORD);
        if(size >= V_HUGE_ALLOC_THRESHOLD) {
          VMarkForeignFinalizer(runtime, word, false);
        }
      }
    }
  }

  if(!VNeedsMove(runtime, ptr))
    return word;

  VNEWTAG tag = *(VNEWTAG*)ptr;
  if(!(VTAG_START <= tag && tag < VTAG_END)) {
    fprintf(stderr, "Unknown tag %u in VMoveDispatch. Heap Corruption? -MoveDispatch\n", tag);
    VPrintCallHistory(runtime);
    VAbortC(NULL, VERROR);
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
        case VBUFFER:
        case VSYMBOL:
        case VRNG_STATE:
        {
          VBlob * b = ptr;
          size_t size = sizeof(VBlob) + (b->len + sizeof(VWORD) - 1)/sizeof(VWORD) * sizeof(VWORD);
          return VEncodePointer(VMoveObject(runtime, b, size), VPOINTER_OTHER);
          break;
        }
        case VVECTOR:
        case VRECORD:
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
          VAbortC(NULL, VERROR);
      }
      break;
    }
    case VENVIRONMENT:
      return VEncodePointer(VCheckedMoveEnviron(runtime, ptr), VPOINTER_OTHER);
    default:
      fprintf(stderr, "Unknown type %016llx in VMoveDispatch. Heap corruption?\n", (unsigned long long)type);
      VAbortC(NULL, VERROR);
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
  // so as to allow us to skip scanning the vector twice during major gcs

  // keys pointing to STACK mem cause their tables to always be marked dirty during a minor gc.
  // and minor gcs only move STACK.
  // fibers reaps also always mark their tables dirty.
  // so we need to consider major gcs. any key pointing to HEAP during a major GC has been moved.
  bool major = runtime->VIsMajorGC;
  if(!major)
    return;

  VVector * vec = VCheckedDecodeVector2(runtime, _vec, "garbage-collect/hash-table");
  for(int i = 0; i < vec->len/3; i++) {

    VWORD key = vec->arr[3*i+0];
    if(VBits(key) == VBits(VVOID))
      continue;
    vec->arr[3*i+2] = VMoveDispatch(runtime, vec->arr[3*i+2]);

    VWORD key_mov = VMoveDispatch(runtime, key);
    if(major && VIsPointer(key_mov) && VMemLocation(runtime, VDecodePointer(key_mov)) == HEAP_MEM)
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
    case VRECORD:
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
  fprintf(stderr, "Unknown tag %u in VCheneyScan. Heap Corruption? -CheneyScan\n", (int)(*(VNEWTAG*)cur));
  VPrintCallHistory(runtime);
  VAbortC(NULL, VERROR);
  return NULL;
}

#undef environ
static V_BEGIN_FUNC_MIN(VGCResumeFunc, "gc-resume", 0)
//SYSV_CALL static void VGCResumeFunc(V_CORE_ARGS, ...) {
  VFunc f = VCheckedDecodeForeignPointer2(runtime, statics->vars[0], "gc-resume");
  VEnvironment * e = (void*)VDecodePointer(statics->vars[1]);
  VSysApplyBounce(f, e);
V_END_FUNC

SYSV_CALL static void VSwapHeap(VRuntime * runtime) {
  runtime->VActiveHeap = !runtime->VActiveHeap;
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
  runtime->VHeap = runtime->VHeaps[runtime->VActiveHeap].begin;
  runtime->VHeapPos = runtime->VHeap;
  runtime->VHeapEnd = runtime->VHeaps[runtime->VActiveHeap].end;
}

SYSV_CALL void VGarbageCollect2Closure(VRuntime * runtime, VClosure * closure, int argc, ...) {
  VFunc f = closure->func;
  VEnv * statics = closure->env;
  VWORD argv[argc];
  va_list list;
  va_start(list, argc);
  for(int i = 0; i < argc; i++)
    argv[i] = va_arg(list, VWORD);
  va_end(list);
  VGarbageCollect2(f, runtime, statics, argc, argv);
}

SYSV_CALL void VGarbageCollect2Func(VRuntime * runtime, VFunc f, int argc, ...) {
  VEnv * statics = NULL;
  VWORD argv[argc];
  va_list list;
  va_start(list, argc);
  for(int i = 0; i < argc; i++)
    argv[i] = va_arg(list, VWORD);
  va_end(list);
  VGarbageCollect2(f, runtime, statics, argc, argv);
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

volatile sig_atomic_t _Atomic VInterruptSignal;

SYSV_CALL void VGarbageCollect2(VFunc f, VRuntime * runtime, VEnv * statics, int argc, VWORD * argv) {
#ifdef __linux__
  struct timespec start_time, end_time;
  clock_gettime(CLOCK_MONOTONIC, &start_time);
#endif
  ptrdiff_t stack_len = (char*)&f - runtime->public.VStackStart;
  if(stack_len < 0) stack_len = -stack_len;
  size_t environ_size = sizeof(VEnvironment) + sizeof(VWORD[argc]);
  stack_len += environ_size;
#ifdef VANITY_PURE_C
  stack_len += runtime->public.VSecondStackCursor;
#endif

  size_t arena_size = 0;
#if 0
  if(runtime->num_half_reaped_fibers) {
    for(int i = 0; i < runtime->num_half_reaped_fibers; i++) {
      arena_size += runtime->half_reaped_fibers[i]->VHeapPos - runtime->half_reaped_fibers[i]->VHeap;
    }
  }
#else
  if(runtime->num_unreaped_arenas) {
    for(int i = 0; i < runtime->num_unreaped_arenas; i++) {
      arena_size += runtime->unreaped_arenas[i].buf_cursor - runtime->unreaped_arenas[i].buf;
    }
  }
#endif

  size_t total_stack_size = runtime->public.VStackSize;
#ifdef VANITY_PURE_C
  total_stack_size += runtime->public.VSecondStackSize;
#endif

  size_t after_gc_size = runtime->VHeapPos - runtime->VHeap + stack_len + arena_size;
  bool is_unplanned_major = runtime->VHeap + after_gc_size >= runtime->VHeapEnd - total_stack_size;
  bool is_major = runtime->VForceMajorGC || is_unplanned_major;
  runtime->VIsMajorGC = is_major;
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
    if(!runtime->num_unreaped_arenas) {
      fprintf(stderr, "Garbage collector may overflow: this should be impossible.\n");
      VAbortC(NULL, VERROR);
    }
    fprintf(stderr, "resizing heap from big fiber returnz %lld\n", (long long)after_gc_size);
    free(runtime->VHeaps[runtime->VActiveHeap].begin);
    while(after_gc_size > runtime->VHeaps[runtime->VActiveHeap].size) {
      runtime->VHeaps[runtime->VActiveHeap].size *= 2;
    }
    size_t size = runtime->VHeaps[runtime->VActiveHeap].size;
    runtime->VHeaps[runtime->VActiveHeap].begin = malloc(size);
    if(!runtime->VHeaps[runtime->VActiveHeap].begin) {
      fprintf(stderr, "failed to resize heap to size %zu\n", size);
      VAbortC(NULL, VERROR);
    }
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
    // but we're crawling heap and stack in a major gc

    // for the same reason, we can ignore hash table tracking during major gcs
    // have to do this first before any forwarding
    if(runtime->num_tracked_hash_tables) {
      for(unsigned i = 0; i < runtime->num_tracked_hash_tables; i++) {
        runtime->tracked_hash_tables[i]->flags |= HFLAG_DIRTY;
      }
    }
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
        VSetFinalizerImpl(runtime, table, mem, finalizer);
      }
    }
  }
  // all finalizers returned from a fiber are living, but it's tricky to handle them anyway
  if(runtime->num_unreaped_arenas) {
    VFinalizerTable * table = &runtime->VHeapFinalizers[runtime->VActiveHeap];
    for(int j = 0; j < runtime->num_unreaped_arenas; j++) {
      //VRuntime * fiber_runtime = runtime->half_reaped_fibers[j];
      //VFinalizerTable const * fiber_table = &fiber_runtime->VHeapFinalizers[fiber_runtime->VActiveHeap];
      VFinalizerTable const * arena_table = &runtime->unreaped_arenas[j].finalizers;
      for(unsigned i = 0; i < arena_table->num_finalizers; i++) {
        VFinalizerEntry * entry = arena_table->dense + i;
        VWORD finalizer = entry->finalizer = VMoveDispatch(runtime, entry->finalizer);
        VWORD mem = VMoveDispatch(runtime, entry->mem);
        VSetFinalizerImpl(runtime, table, mem, finalizer);
      }
    }
  }
  {
    VFinalizerTable * table = &runtime->VHeapFinalizers[runtime->VActiveHeap];
    table->new_finalizers_start = table->num_finalizers;
  }
  runtime->VNumTrackedMutations = 0;
  runtime->num_tracked_hash_tables = 0;

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

  // These objects are normally extremely veteran. So maybe worth doing some trickery
  // So we only have to consider them in major collects. Eh. Only a handful of libraries at a time.
  // ~20.
  for(int i = 0; i < VStaticEnvTableSize; i++) {
    *VStaticEnvTable[i].slot = VCheckedMoveEnv(runtime, *VStaticEnvTable[i].slot);
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

  if(atomic_exchange(&VInterruptSignal, 0)) {
    VErrorC(runtime, "interrupted");
  }

#if 0
  runtime->num_half_reaped_fibers = 0;
  free(runtime->half_reaped_fibers);
  runtime->half_reaped_fibers = NULL;
#else
  // TODO: what about the arena mem??? did I leak that???
  for(int i = 0; i < runtime->num_unreaped_arenas; i++) {
    VArena * arena = &runtime->unreaped_arenas[i];
    if(arena->heap_return)
      VStackPush(arena->heap_return, arena->buf);
    else
      free(arena->buf);
    free(arena->finalizers.dense);
    free(arena->finalizers.table);
  }
  runtime->num_unreaped_arenas = 0;
  free(runtime->unreaped_arenas);
  runtime->unreaped_arenas = NULL;
#endif

  // If after a GC, we are still in a state where the next garbage collect can overflow the heap
  // we need to grow the heap
  // or if we are doing too many major gcs, grow the heap to avoid thrashing

  // We'll have to seperate this in a function and call it at beginning of GC when we add fiber reaping
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
        size_t size = runtime->VHeaps[inactive].size;
        runtime->VHeaps[inactive].begin = malloc(size);
        if(!runtime->VHeaps[inactive].begin) {
          fprintf(stderr, "failed to resize heap to size %zu\n", size);
          VAbortC(NULL, VERROR);
        }
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

    if(grow_heap || (runtime->VHeapPos - runtime->VHeap) + total_stack_size > runtime->VHeaps[!runtime->VActiveHeap].size) {
      free(runtime->VHeaps[!runtime->VActiveHeap].begin);
      runtime->VHeaps[!runtime->VActiveHeap].size *= 2;
      size_t size = runtime->VHeaps[!runtime->VActiveHeap].size;
      runtime->VHeaps[!runtime->VActiveHeap].begin = malloc(size);
      if(!runtime->VHeaps[!runtime->VActiveHeap].begin) {
        fprintf(stderr, "failed to resize heap to size %zu\n", size);
        VAbortC(NULL, VERROR);
      }
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
#else
#endif

#ifdef VANITY_PURE_C
  runtime->public.VSecondStackCursor = 0;
#endif

  bool yield = runtime->VYield;
  runtime->VYield = false;
  VLongJmp(runtime->VRoot, yield ? VJMP_YIELD : VJMP_GC);
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
          VErrorC(runtime, "Ran out of heap space while managing finalizers~N");
        }
      }
      VSetFinalizerImpl(runtime, new_table, mem, finalizer);
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
    case VRECORD:
      return VVectorSize(o);
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
      fprintf(stderr, "Unknown object (tag: %hd) in heap.\n", o->tag);
      VAbortC(NULL, VERROR);
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
  fprintf(stderr, "why is a runtime on the heap?\n");
  VAbortC(NULL, VERROR);
}

static inline void VShiftHashTable(VObject * o, void const * old, void const * oldend, ptrdiff_t shift) {
  VHashTable * table = (VHashTable*)o;
  table->flags |= HFLAG_DIRTY;
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
    case VRECORD:
      VShiftVector(o, old, oldend, shift);
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
      fprintf(stderr, "Unknown object (tag: %hd) in heap.\n", o->tag);
      VAbortC(NULL, VERROR);
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

static V_BEGIN_FUNC_MIN(VNext2K, "next-k", 0)
  VLongJmp(runtime->VRoot, VJMP_FINISH);
V_END_FUNC

V_BEGIN_FUNC_RANGE(VNext2, "next", 0, 1, e)
  if(argc)
    runtime->VExitCode = e;
  else
    runtime->VExitCode = VVOID;
  // Always GC before a VLongJmp as all the datas on the stack
  if(!VIsMain(runtime))
    runtime->VForceMajorGC = true;
  VGarbageCollect2(VNext2K, runtime, statics, 0, NULL);
V_END_FUNC

static void VYieldToHostImpl(VRuntime * runtime, VEnv * statics, int argc, VWORD _k, VWORD e) {
  runtime->VYield = true;
  if(argc > 1)
    runtime->VExitCode = e;
  else
    runtime->VExitCode = VVOID;
  if(!VIsMain(runtime))
    VErrorC(runtime, "yield-to-host does not support parallelism yet");
  VWORD vvoid = VVOID;
  VClosure * k = VDecodeClosureApply2(runtime, _k);
  VGarbageCollect2(k->func, runtime, k->env, 1, &vvoid);
}

V_BEGIN_FUNC_RANGE(VYieldToHost, "yield-to-host", 1, 2, _k, e)
  VYieldToHostImpl(runtime, statics, argc, _k, e);
V_END_FUNC

V_BEGIN_FUNC_RANGE(VYieldToHostMajor, "yield-to-host-major", 1, 2, _k, e)
  runtime->VForceMajorGC = true;
  VYieldToHostImpl(runtime, statics, argc, _k, e);
V_END_FUNC

static V_BEGIN_FUNC(VExitK, "exit-k", 1, before_finalizers)
  VFinalizerTable * table = &runtime->VHeapFinalizers[runtime->VActiveHeap];
  if(table->num_finalizers == 0)
    VLongJmp(runtime->VRoot, VJMP_EXIT);

  if(!VIsMain(runtime)) {
    if(table->num_finalizers == VDecodeInt(before_finalizers))
      VLongJmp(runtime->VRoot, VJMP_EXIT);
    runtime->VForceMajorGC = true;
    VWORD num_finalizers = VEncodeInt(table->num_finalizers);
    VGarbageCollect2((VFunc)VExitK, runtime, NULL, 1, &num_finalizers);
  }

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
V_END_FUNC

V_BEGIN_FUNC_RANGE(VExit2, "exit", 1, 2, k, e)
  V_ARG_RANGE3(runtime, "exit", 1, 2, argc);
  runtime->VExitCode = VEncodeInt(0);
  if(argc == 2) {
    runtime->VExitCode = e;
  }
  if(VIsMain(runtime)) {
    // only fibers need to return meaningful data, normal exits coerce
    // to integer early so finalizers run
    runtime->VExitCode = VEncodeInt(VDecodeExitCode(runtime->VExitCode));
  }
  runtime->VForceMajorGC = true;
  VWORD num_finalizers = VEncodeInt(runtime->VHeapFinalizers[runtime->VActiveHeap].num_finalizers);
  VGarbageCollect2((VFunc)VExitK, runtime, NULL, 1, &num_finalizers);
V_END_FUNC

V_BEGIN_FUNC_MIN(VAbort2, "abort", 0)
  VWORD err = VERROR;
  if(!runtime || VIsMain(runtime)) {
    if(argc) {
      err = self->vars[0];
    }
  }
  VAbortC(runtime, err);
V_END_FUNC

static SYSV_CALL void VVFPrintfC(VRuntime * runtime, VPort * p, char const * str, va_list args) {
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
            port_fputc('~', p);
            break;
          case 'N':
          case 'n':
          {
            port_fputc('\n', p);
            break;
          }
          case 'Z':
          case 'z':
          {
            char const * str = va_arg(args, char const*);
            //fprintf(f, "%s", str);
            port_fputs(str, p);
            break;
          }
          case 'F':
          case 'f':
          {
            double d = va_arg(args, double);
            //fprintf(f, "%f", d);
            port_fputd(d, p);
            break;
          }
          case 'D':
          case 'd':
          {
            int i = va_arg(args, int);
            //fprintf(f, "%i", i);
            port_fputi(i, p);
            break;
          }
          case 'L':
          case 'l':
          {
            long i = va_arg(args, long);
            //fprintf(f, "%li", i);
            port_fputli(i, p);
            break;
          }
          case 'A':
          case 'a':
          {
            VWORD w = va_arg(args, VWORD);
            VDisplayWord2(p, w, false);
            break;
          }
          case 'S':
          case 's':
          {
            VWORD w = va_arg(args, VWORD);
            VDisplayWord2(p, w, true);
            break;
          }
          default:
            va_end(args);
            if(runtime)
              VErrorC(runtime, "Malformed format string\n");
            else {
              VAbortC(NULL, VERROR);
            }
            break;
        }
        break;
      default:
        port_fputc(c, p);
        break;
    }
  }
}

static SYSV_CALL void VFPrintfC(VRuntime * runtime, VPort * p, char const * str, ...) {
  va_list args;
  va_start(args, str);
  VVFPrintfC(runtime, p, str, args);
  va_end(args);
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

// We need to do a similar thing for hash tables to mark when rehashing is necessary.
void VTrackHashTable(VRuntime * runtime, VHashTable * table, VWORD key) {
  if(runtime->num_tracked_hash_tables >= runtime->tracked_hash_tables_size) {
    if(!runtime->tracked_hash_tables_size)
      runtime->tracked_hash_tables_size = 8;
    runtime->tracked_hash_tables_size *= 2;
    runtime->tracked_hash_tables = realloc(runtime->tracked_hash_tables, sizeof(VHashTable*)*runtime->tracked_hash_tables_size);
  }
  // eww what in the fuck was I thinking
  // this results in catastrophe
  if(VIsPointer(key)) {
    void *keyptr = VDecodePointer(key);
    if(VMemLocation(runtime, keyptr) == STACK_MEM)
      runtime->tracked_hash_tables[runtime->num_tracked_hash_tables++] = table;
  }
}

static void VSetPair2(V_CORE_ARGS, bool bSetCar, VWORD k, VWORD pair, VWORD val) {
  char * proc = bSetCar ? "set-car!" : "set-cdr!";
  if(VStackOverflowNoInline(runtime)) {
    VGarbageCollect2Args((VFunc)(bSetCar ? VSetCar2 : VSetCdr2), runtime, statics, 3, argc, k, pair, val);
  } else {
    if(VWordType(pair) != VPOINTER_PAIR) VErrorC(runtime, "%s: arg 1 not a pair\n", proc);
    VPair * p = VDecodePair(pair);
    if(p->base.flags & VFLAG_IMMUTABLE) VErrorC(runtime, "%s: pair is immutable", proc);

    VTrackMutation(runtime, p, bSetCar ? &p->first : &p->rest, val);
    
    if(bSetCar)
      p->first = val;
    else
      p->rest = val;
    V_BOUNCE(k, runtime, VVOID);
  }
}
V_BEGIN_FUNC(VSetCar2, "set-car!", 3, k, pair, val)
  VSetPair2(runtime, statics, argc, true, k, pair, val);
V_END_FUNC

V_BEGIN_FUNC(VSetCdr2, "set-cdr!", 3, k, pair, val)
  VSetPair2(runtime, statics, argc, false, k, pair, val);
V_END_FUNC

static void VVectorSetImpl(VRuntime * runtime, VWORD k, VVector * vector, int index, VWORD val) {
  VTrackMutation(runtime, vector, vector->arr + index, val);
  vector->arr[index] = val;

  V_BOUNCE(k, runtime, VVOID);
}

V_BEGIN_FUNC(VVectorSet2, "vector-set!", 4, k, v, i, val)
  if(VStackOverflowNoInline(runtime)) {
    VGarbageCollect2Args((VFunc)VVectorSet2, runtime, statics, 4, argc, k, v, i, val);
  } else {
    VVector * vector = VCheckedDecodeVector2(runtime, v, "vector-set!");
    if(vector->base.flags & VFLAG_IMMUTABLE) VErrorC(runtime, "vector-set!: vector is immutable");
    if(VWordType(i) != VIMM_INT) VErrorC(runtime, "vector-set!: arg 2 not an int\n");
    int index = VDecodeInt(i);
    if(!(0 <= index && index < vector->len)) VErrorC(runtime, "vector-set!: out of range\n");

    VVectorSetImpl(runtime, k, vector, index, val);
  }
V_END_FUNC

V_BEGIN_FUNC(VRecordSet2, "record-set!", 4, k, r, i, val)
  if(VStackOverflowNoInline(runtime)) {
    VGarbageCollect2Args((VFunc)VRecordSet2, runtime, statics, 4, argc, k, r, i, val);
  } else {
    VVector * record = VCheckedDecodeRecord2(runtime, r, "record-set!");
    if(VWordType(i) != VIMM_INT) VErrorC(runtime, "record-set!: arg 2 not an int\n");
    int index = VDecodeInt(i);
    if(!(0 <= index && index < record->len)) VErrorC(runtime, "record-set!: out of range\n");
    if(index == 0) VErrorC(runtime, "record-set!: tried to set tag field of record\n");

    VVectorSetImpl(runtime, k, record, index, val);
  }
V_END_FUNC

V_BEGIN_FUNC(VSetEnvVar2, "set-env-var!", 4, k, _up, _var, val)
  // not really a procedure but needs to abuse the procedure
  // interface to garbage collect
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
    V_BOUNCE(k, runtime, VVOID);
  }
V_END_FUNC

static bool VDefineImpl(VRuntime * runtime, VWORD sym, VWORD val, bool is_set) {
  if(!VIsMain(runtime)) {
    VErrorC(runtime, "define-global: not permitted inside of a fiber or during active asynchronous execution\n");
  }

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

V_BEGIN_FUNC(VSetGlobalVar2, "set!", 3, k, sym, val)
  if(VStackOverflowNoInline(runtime) || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc)VSetGlobalVar2, runtime, statics, 3, argc, k, sym, val);

  if(!VDefineImpl(runtime, sym, val, true))
    VErrorC(runtime, "set!: Symbol not found: ~a\n", sym);
  V_BOUNCE(k, runtime, VVOID);
V_END_FUNC


V_BEGIN_FUNC(VDefineGlobalVar2, "define", 3, k, sym, val)
  if(VStackOverflowNoInline(runtime) || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc)VDefineGlobalVar2, runtime, statics, 3, argc, k, sym, val);

  VDefineImpl(runtime, sym, val, false);
  V_BOUNCE(k, runtime, VVOID);
V_END_FUNC

V_BEGIN_FUNC(VMultiDefine2, "multidefine", 2, k, defines)
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
  V_BOUNCE(k, runtime, VVOID);
V_END_FUNC

V_BEGIN_FUNC(VLookupLibrary2, "lookup-library", 2, k, name)
  if(VStackOverflowNoInline(runtime) || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc)VLookupLibrary2, runtime, statics, 2, argc, k, name);

#define sym_str "##vcore.libraries"
  VBlob * sym = VCreateSymbolSlow(sym_str, sizeof sym_str - 1);
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
V_END_FUNC


static VWORD ImportImpl(VRuntime * runtime, VWORD * libs, int num_libs, VWORD importing_lib, VWORD x) {
  int cur = 0, end = num_libs;
  VWORD * rest = libs;
  VWORD args = VNULL;
  while(true) {
    if(VIsToken(args, VTOK_NULL)) {
      if(cur == end) {
        break;
      } else {
        args = rest[cur];
        cur++;
      }
    }
    VWORD arg = VInlineCar2(runtime, args);
    if(VDecodeBool(VInlineEqv2(runtime, VInlineCar2(runtime, arg), x))) {
      return VInlineCdr2(runtime, arg);
      break;
    } else {
      args = VInlineCdr2(runtime, args);
    }
  }
  VErrorC(runtime, "library ~A: symbol not found: ~A\n", importing_lib, x);
  return VVOID;
}

static V_BEGIN_FUNC(VMakeImportLambda, "make-import-lambda", 2, k, x)
  int cur = 2, end = statics->var_len;
  VWORD * rest = statics->vars;
  VWORD args = VNULL;
  while(true) {
    if(VIsToken(args, VTOK_NULL)) {
      if(cur == end) {
        VErrorC(runtime, "library ~A: symbol not found: ~A\n", rest[1], x);
        break;
      } else {
        args = rest[cur];
        cur++;
      }
    }
    VWORD arg = VInlineCar2(runtime, args);
    if(VDecodeBool(VInlineEqv2(runtime, VInlineCar2(runtime, arg), x))) {
      V_BOUNCE(k, runtime, VInlineCdr2(runtime, arg));
      break;
    } else {
      args = VInlineCdr2(runtime, args);
    }
  }
V_END_FUNC


V_BEGIN_FUNC_MIN(VMakeImport2, "make-import", 2, k, lib)
  VClosure ret = VMakeClosure2((VFunc)VMakeImportLambda, self);
  V_CALL(k, runtime, VEncodeClosure(&ret));
V_END_FUNC

V_BEGIN_FUNC_MIN(VMultiImport, "multi-import", 3, _k, lib, _imports)
  VClosure * k = VDecodeClosureApply2(runtime, _k);
  VVector * imports = VCheckedDecodeVector2(runtime, _imports, "multi-import");

  VEnvironment * environ = alloca(sizeof(VEnvironment) + sizeof(VWORD[argc-3]));
  environ->base = VMakeObject(VENVIRONMENT);
  environ->argc = argc-3;
  environ->runtime = runtime;
  environ->static_chain = k->env;
  for(int i = 3; i < argc; i++) {
    environ->argv[i-3] = ImportImpl(runtime, imports->arr, imports->len, lib, self->vars[i]);
  }
  VSysApplyBounce(k->func, environ);
V_END_FUNC


#ifdef __linux__
static void * VDLOpen(char const * name) {
  return dlopen(name, RTLD_LAZY | RTLD_GLOBAL);
}
static void * VDLSym(char const * name) {
  return dlsym(RTLD_DEFAULT, name);
}
#elif defined(__EMSCRIPTEN__)
// FIXME cba to hash table tbh
typedef struct DLSymNode {
  char const * name;
  void * ptr;
  struct DLSymNode * next;
} DLSymNode;
static DLSymNode * VDLSymChainRoot;
void VRegisterSym(char const * name, void * ptr) {
  DLSymNode * chain = VDLSymChainRoot;
  while(chain) {
    if(!strcmp(chain->name, name)) {
      chain->ptr = ptr;
    }
    chain = chain->next;
  }
  DLSymNode * node = malloc(sizeof(DLSymNode));
  node->name = name;
  node->ptr = ptr;
  node->next = VDLSymChainRoot;
  VDLSymChainRoot = node;
}

static void * VDLOpen(char const * name) {
  // emscripten doesn't support dynamic linking
  return (void*)0;
}
static void * VDLSym(char const * name) {
  DLSymNode * chain = VDLSymChainRoot;
  while(chain) {
    if(!strcmp(chain->name, name))
      return chain->ptr;
    chain = chain->next;
  }
  return NULL;
}
#elif defined(_WIN64)
static void * VDLOpen(char const * name) {
  return LoadLibraryA(name);
}
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

static VPair * VAssocDeclares(VRuntime * runtime, VBlob * string) {
  VWORD declares = runtime->declare_list;
  while(!VIsEq(declares, VNULL)) {
    VPair * node = VDecodePair(declares);
    declares = node->rest;

    VPair * decl = VDecodePair(node->first);
    VBlob * key = VDecodeBlob(decl->first);
    if(!strcmp(key->buf, string->buf))
      return decl;
  }
  return NULL;
}

V_BEGIN_FUNC(VDlopenLibraryImpl, "dlopen-library!", 2, k, _string)
  VBlob * string = VCheckedDecodeString2(runtime, _string, "dlopen-library!");
#if 0
#ifdef __linux__
  void * handle = dlopen(string->buf, RTLD_LAZY | RTLD_GLOBAL);
  if(!handle) VErrorC(runtime, "dlopen-library!: failed to dlopen ~S: ~Z", _string, dlerror());
#elif defined(_WIN64)
  void * handle = LoadLibraryA(string->buf);
  if(!handle) VErrorC(runtime, "dlopen-library!: failed to LoadLibraryA ~S", _string);

#else
  VErrorC(runtime, "dlopen-library!: unsupported platform.");
#endif
#else
  void * handle = VDLOpen(string->buf);
  if(!handle) VErrorC(runtime, "dlopen-library!: failed to dlopen ~S: ~Z", _string,
#ifdef __linux__
  dlerror()
#else
  "unknown error"
#endif
  );
#endif
  V_BOUNCE(k, runtime, VVOID);
V_END_FUNC

VFunc VDlopenLibrary = (VFunc)VDlopenLibraryImpl;

V_BEGIN_FUNC(VSetDeclare, "set-declare!", 3, k, _string, proc)
  if(!VIsMain(runtime)) {
    VErrorC(runtime, "set-declare!: not permitted inside of a fiber or during active asynchronous execution");
  }

  VBlob * string = VCheckedDecodeString2(runtime, _string, "set-declare!");
  (void)VCheckedDecodeClosure2(runtime, proc, "set-declare!");

  VPair * declare = VAssocDeclares(runtime, string);

  VPair newdeclare;
  VPair newnode;
  if(declare) {
    VSetRest(runtime, declare, proc);
  } else {
    newdeclare = VMakePair(_string, proc);
    newnode = VMakePair(VEncodePair(&newdeclare), runtime->declare_list);
    runtime->declare_list = VEncodePair(&newnode);
  }
  V_CALL(k, runtime, VVOID);
V_END_FUNC

void * VLoadFunction(VRuntime * runtime, VWORD name) {
  char const * str = VCheckedDecodeConstCString2(runtime, name, "load-function");

#if 0
#if defined(__linux__) || defined(__EMSCRIPTEN__)
  void * ptr = dlsym(RTLD_DEFAULT, str);
#elif defined(_WIN64)
  void * ptr = VDLSym(str);
#else
  void * ptr == NULL;
  VErrorC(runtime, "load-function: unsupported platform");
#endif
#else
  void * ptr = VDLSym(str);
#endif

  if(!ptr) {
    VErrorC(runtime, "load-function: failed to dlsym function ~z (did you remember to load or link the file it's in?)\n", str);
  }
  return ptr;
}

static VClosure VFunctionImpl(VRuntime * runtime, VWORD name) {
  VBlob * blob = VCheckedDecodeString2(runtime, name, "function");

  const char * str = blob->buf;
#if 0
#if defined(__linux__) || defined(__EMSCRIPTEN__)
  void * ptr = dlsym(RTLD_DEFAULT, str);
#elif defined(_WIN64)
  void * ptr = VDLSym(str);
#else
  void * ptr == NULL;
  VErrorC(runtime, "function: unsupported platform");
#endif
#else
  void * ptr = VDLSym(str);
#endif
  if(!ptr) {
    VPair * decl = VAssocDeclares(runtime, blob);
    if(decl) return *VCheckedDecodeClosure2(runtime, decl->rest, "function");
  }

  if(!ptr) {
    VErrorC(runtime, "function: failed to dlsym function ~z (did you remember to load or link the file it's in?)\n", str);
  }
  VFunc * fun = ptr;
  return VMakeClosure2(*fun, NULL);
}
static VClosure VFunctionImpl3(VRuntime * runtime, VWORD name) {
  VBlob * blob = VCheckedDecodeString2(runtime, name, "function");

  const char * str = blob->buf;
#if 0
#if defined(__linux__) || defined(__EMSCRIPTEN__)
  void * ptr = dlsym(RTLD_DEFAULT, str);
#elif defined(_WIN64)
  void * ptr = VDLSym(str);
#else
  void * ptr == NULL;
  VErrorC(runtime, "function: unsupported platform");
#endif
#else
  void * ptr = VDLSym(str);
#endif
  if(!ptr) {
    VPair * decl = VAssocDeclares(runtime, blob);
    if(decl) return *VCheckedDecodeClosure2(runtime, decl->rest, "function");
  }

  if(!ptr) {
    VErrorC(runtime, "function: failed to dlsym function ~z (did you remember to load or link the file it's in?)\n", str);
  }
  return VMakeClosure2((VFunc)ptr, NULL);
}

static V_BEGIN_FUNC(VLoadForeignFunctionImpl, "load-foreign-function", 2, k, name)
  VBlob * blob = VCheckedDecodeString2(runtime, name, "load-foreign-function");

  const char * str = blob->buf;
#if 0
#if defined(__linux__) || defined(__EMSCRIPTEN__)
  void * ptr = dlsym(RTLD_DEFAULT, str);
#elif defined(_WIN64)
  void * ptr = VDLSym(str);
#else
  void * ptr;
  VErrorC(runtime, "function: unsupported platform");
#endif
#else
  void * ptr = VDLSym(str);
#endif

  if(!ptr) {
    VErrorC(runtime, "foreign-function: failed to dlsym function ~z (did you remember to load or link the file it's in?)\n", str);
  }
  void * fun = ptr;
  V_CALL(k, runtime, VEncodeForeignPointer(fun));
V_END_FUNC

VFunc VLoadForeignFunction = (VFunc)VLoadForeignFunctionImpl;

// How library loading works:
//
// 1. A library (foo bar) is declared to a loader thunk with a mangled name for (foo bar), eg _V20_V0foo_V0bar. Something searchable with dlsym()
// -- the loader thunk runs the body of the library, creating the library's internal environment and returns an importer function
// -- the importer function
//
// 2. import statements compile to a multidefine with a load-library call to provide the definitions
// -- (##vcore.multidefine (##vcore.load-library "_V20_V0foo_V0bar"))

// 3. load-library first looks at the list of loaded libraries, if it finds it it runs its importer function

// 4. if it doesn't find it, it searches for the declare for the loader via dlsym(), the loader is run to get the importer
// -- in interpreted mode compiled libraries have priority over interpreted libraries

// 5. the importer function is then run to fetch the definitions for multidefine


static V_BEGIN_FUNC(VLoadLibraryK, "load-library-k", 1, loader)
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
V_END_FUNC

V_BEGIN_FUNC(VLoadLibrary2, "load-library", 2, k, name)
  if(VStackOverflowNoInline(runtime) || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc)VLoadLibrary2, runtime, statics, 2, argc, k, name);

#define sym_str "##vcore.libraries"
  VBlob * sym = VCreateSymbolSlow(sym_str, sizeof sym_str - 1);
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
    VClosure loader = VFunctionImpl(runtime, name);
    V_CALL_FUNC(loader.func, loader.env, runtime, VEncodeClosure(&callback));
  } else {
    V_CALL(k, runtime, lib);
  }
V_END_FUNC

V_BEGIN_FUNC(VUnloadLibrary2, "unload-library", 2, k, name)
  if(VStackOverflowNoInline(runtime) || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc)VUnloadLibrary2, runtime, statics, 2, argc, k, name);

#define sym_str "##vcore.libraries"
  VBlob * sym = VCreateSymbolSlow(sym_str, sizeof sym_str - 1);
#undef sym_str

  VBlob * nm = VDecodeBlob(name);
  // why would this be null????
  if(nm)
    VUnregisterStaticEnv(nm->buf);

  VWORD sym_word = VEncodePointer(sym, VPOINTER_OTHER);
  VGlobalEntry * lookup = VLookupGlobalEntry(runtime, sym_word);
  VWORD libs = VNULL;
  if(!lookup) {
    VDefineImpl(runtime, sym_word, libs, false);
  } else {
    libs = lookup->value;
  }

  VPair * parent = NULL;
  VPair * lib_entry = NULL;
  while(!VIsEq(libs, VNULL)) {
    VPair * libs_dec = VDecodePair(libs);
    VPair * pair = VDecodePair(libs_dec->first);
    VBlob * str = VDecodeBlob(pair->first);
    // how can nm be null????
    if(str && nm && !strcmp(nm->buf, str->buf)) {
      lib_entry = pair;
      break;
    }
    parent = pair;

    libs = libs_dec->rest;
  }

  if(lib_entry && parent) {
    parent->rest = lib_entry->rest;
  }
  else if(lib_entry && !parent) {
    VDefineImpl(runtime, sym_word, lib_entry->rest, true);
  }
  V_CALL(k, runtime, VVOID);
V_END_FUNC

V_BEGIN_FUNC(VRenameImports, "rename-imports", 3, k, imports, renames)
  if(VStackOverflowNoInline(runtime) || runtime->VNumGlobals >= runtime->VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc)VRenameImports, runtime, statics, 2, argc, k, imports, renames);

  VWORD ret = VNULL;
  VWORD pair = renames;
  while(!VIsEq(pair, VNULL)) {
    VPair * _pair = VDecodePair(pair);
    VPair * names = VDecodePair(_pair->first);
    VWORD oldname = names->first;
    VWORD newname = names->rest;

    VWORD funcentry = _VBasic_VAssq(runtime, NULL, oldname, imports);
    if(VIsEq(funcentry, VFALSE))
      VErrorC(runtime, "rename-imports: procedure not found: ~S\n", _pair->first);

    VWORD closure = VDecodePair(funcentry)->rest;
    
    VPair * newfuncentry = alloca(sizeof(VPair));
    *newfuncentry = VMakePair(newname, closure);

    VPair * newnode = alloca(sizeof(VPair));
    *newnode = VMakePair(VEncodePair(newfuncentry), ret);
    ret = VEncodePair(newnode);

    pair = _pair->rest;
  }
  V_CALL(k, runtime, ret);
V_END_FUNC

#define IMPLEMENT_PRINT_VECTOR(Prefix, prefix, stride, ctype, fputi) \
static void Print ## Prefix(VPort * p, VBlob * blob) {\
  int len = (blob->len/stride)-1; \
  ctype * ints = (ctype*)(blob->buf+stride); \
  port_fputs("#" #prefix "(", p); \
  for(int i = 0; i < len-1; i++) { \
    fputi(ints[i], p); \
    port_fputc(' ', p); \
  } \
  if(len) \
    fputi(ints[len-1], p); \
  port_fputs(")", p); \
}

IMPLEMENT_PRINT_VECTOR(S8, s8, 1, int8_t, port_fputi8)
IMPLEMENT_PRINT_VECTOR(U8, u8, 1, uint8_t, port_fputu8)
IMPLEMENT_PRINT_VECTOR(S16, s16, 2, int16_t, port_fputi16)
IMPLEMENT_PRINT_VECTOR(U16, u16, 2, uint16_t, port_fputu16)
IMPLEMENT_PRINT_VECTOR(S32, s32, 4, int32_t, port_fputi32)

static void VDisplayWordImpl(VPort * port, VWORD v, bool write, int depth) {
  uint64_t type = VWordType(v);
  switch(type) {
    case VIMM_NUMBER:
      //fprintf(f, "%f", VDecodeNumber(v));
      port_fputd(VDecodeNumber(v), port);
      break;
    case VIMM_INT:
      //fprintf(f, "%d", VDecodeInt(v));
      port_fputi(VDecodeInt(v), port);
      break;
    case VIMM_CHAR:
      if(write) {
        char c = VDecodeChar(v);
        switch(c) {
          case '\a': port_fputs("#\\alarm", port); break;
          case '\b': port_fputs("#\\backspace", port); break;
          case (char)127: port_fputs("#\\delete", port); break;
          case (char)27: port_fputs("#\\escape", port); break;
          case '\n': port_fputs("#\\newline", port); break;
          case '\0': port_fputs("#\\null", port); break;
          case '\r': port_fputs("#\\return", port); break;
          case ' ': port_fputs("#\\space", port); break;
          case '\t': port_fputs("#\\tab", port); break;
          default:
            port_fputs("#\\", port);
            port_fputc(c, port);
            break;
        }
      } else {
        port_fputc(VDecodeChar(v), port);
      }
      break;
    case VIMM_TOK:
    {
      switch(VDecodeToken(v))
      {
        case VTOK_TRUE:
          port_fputs("#t", port);
          break;
        case VTOK_FALSE:
          port_fputs("#f", port);
          break;
        case VTOK_NULL:
          port_fputs("()", port);
          break;
        case VTOK_VOID:
          port_fputs("#void", port);
          break;
        case VTOK_EOF:
          port_fputs("#eof", port);
          break;
        case VTOK_NAN:
          port_fputs("#nan", port);
          break;
      }
      break;
    }
    case VPOINTER_PAIR:
    {
      if(depth >= 16)
        port_fputs("#pair", port);
      else {
        port_fputs("(", port);
        VPair * p = (VPair*)VDecodePointer(v);
        VDisplayWordImpl(port, p->first, write, depth+1);
        while(VWordType(p->rest) == VPOINTER_PAIR) {
          p = (VPair*)VDecodePointer(p->rest);
          port_fputs(" ", port);
          VDisplayWordImpl(port, p->first, write, depth+1);
        }
        if(!(VWordType(p->rest) == VIMM_TOK && VDecodeToken(p->rest) == VTOK_NULL)) {
          port_fputs(" . ", port);
          VDisplayWordImpl(port, p->rest, write, depth+1);
        }
        port_fputs(")", port);
      }
      break;
    }
    case VPOINTER_CLOSURE:
    {
      port_fputs("#closure", port);
      break;
    }
    case VPOINTER_FOREIGN:
    {
      if(VIsEq(v, VNULLPTR))
        port_fputs("#nullptr", port);
      else
        port_fputs("#foreign-pointer", port);
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
            port_fputc('"', port);
            for(unsigned i = 0; i < blob->len-1; i++) {
              char c = blob->buf[i];
              switch(c) {
                case '\a':
                  port_fputs("\\a", port);
                  break;
                case '\b':
                  port_fputs("\\b", port);
                  break;
                case '\t':
                  port_fputs("\\t", port);
                  break;
                case '\n':
                  port_fputs("\\n", port);
                  break;
                case '\r':
                  port_fputs("\\r", port);
                  break;
                case '\\':
                case '"':
                case '|':
                  port_fputc('\\', port);
                  port_fputc(c, port);
                  break;
                default:
                  port_fputc(c, port);
                  break;
              }
            }
            port_fputc('"', port);
          } else {
            port_fputs(blob->buf, port);
          }
          break;
        }
        case VBUFFER:
        {
          VBlob * blob = ptr;
          switch(blob->buf[0]) {
            case BUF_S8:
              PrintS8(port, blob);
              break;
            case BUF_U8:
              PrintU8(port, blob);
              break;
            case BUF_S16:
              PrintS16(port, blob);
              break;
            case BUF_U16:
              PrintU16(port, blob);
              break;
            case BUF_S32:
              PrintS32(port, blob);
              break;
            case BUF_F32:
            {
              int len = (blob->len/4)-1;
              float * floats = (float*)(blob->buf+4);
              port_fputs("#f32(", port);
              for(int i = 0; i < len-1; i++) {
                port_fputd(floats[i], port);
                port_fputc(' ', port);
              }
              if(len)
                port_fputd(floats[len-1], port);
              port_fputs(")", port);
              break;
            }
            case BUF_F64:
            {
              int len = (blob->len/8)-1;
              double * doubles = (double*)(blob->buf+8);
              port_fputs("#f64(", port);
              for(int i = 0; i < len-1; i++) {
                port_fputd(doubles[i], port);
                port_fputc(' ', port);
              }
              if(len)
                port_fputd(doubles[len-1], port);
              port_fputs(")", port);
              break;
              break;
            }
          }
          break;
        }
        case VVECTOR:
        {
          port_fputs("#vector", port);
          break;
        }
        case VRECORD:
        {
          VVector * rec = ptr;
          if(rec->len == 4 && !VDecodeBool(rec->arr[0])) {
            VDisplayWordImpl(port, rec->arr[1], write, depth+1);
            port_fputs(": ", port);
            VDisplayWordImpl(port, rec->arr[2], write, depth+1);
            VWORD irritants = rec->arr[3];
            if(!VIsEq(irritants, VNULL)) {
              port_fputs(":", port);
              while(VWordType(irritants) == VPOINTER_PAIR) {
                port_fputs(" ", port);
                VPair * pair = VDecodePair(irritants);
                VDisplayWordImpl(port, pair->first, write, depth+1);
                irritants = pair->rest;
              }
            }
          } else {
            port_fputs("#record", port);
          }
          break;
        }
        case VHASH_TABLE:
        {
          port_fputs("#hash-table", port);
          break;
        }
        case VPORT:
        {
          port_fputs("#port", port);
          break;
        }
        case VFUTURE:
        {
          port_fputs("#future", port);
          break;
        }
        default:
          port_fputs("#pointer", port);
          break;
      }
      break;
    }
    default:
      port_fputs("#?", port);
      break;
  }
}

SYSV_CALL void VDisplayWord(FILE * f, VWORD v, bool write) {
  VPort p = VMakePortStream(f, PFLAG_WRITE | PFLAG_NOCLOSE);
  VDisplayWordImpl(&p, v, write, 0);
}
SYSV_CALL void VDisplayWord2(VPort * p, VWORD v, bool write) {
  VDisplayWordImpl(p, v, write, 0);
}

SYSV_CALL void VGetStackInfo(char ** start, size_t * size) {
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
#elif defined(_WIN64)
  ULONG_PTR lo, hi;
  GetCurrentThreadStackLimits(&lo, &hi);
  *start = (char*)hi;
  *size = (char*)hi - (char*)lo;
#elif defined(__EMSCRIPTEN__)
  *start = (char*)emscripten_stack_get_base();
  *size = *start - (char*)emscripten_stack_get_end();
#else
  assert("get-stack-info: unsupported platform" && 0);
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
  if(stacksize < 2*V_STACK_MARGIN) {
    fprintf(stderr, "stack size %zu is less than the minimum size %zu\n", stacksize, 2*(size_t)V_STACK_MARGIN);
    VAbortC(NULL, VERROR);
  }

  r->public.VStackStart = start;
  r->public.VStackLen = (ssize_t)stacksize - V_STACK_MARGIN;
  r->public.VStackSize = (ssize_t)stacksize;
#ifdef __EMSCRIPTEN__
  // FIXME actually query and pass this somehow
  // it's really, really low on iOS :/
  r->public.callgas = r->public.max_callgas = 512;
#endif
#ifdef VANITY_PURE_C
  r->public.VSecondStackStart = malloc(V_SECOND_STACK_SIZE);
  printf("second stack start %p\n", r->public.VSecondStackStart);
  r->public.VSecondStackLen = V_SECOND_STACK_SIZE - V_STACK_MARGIN;
  r->public.VSecondStackSize = V_SECOND_STACK_SIZE;
  r->public.VSecondStackCursor = 0;
#endif

  r->VActiveHeap = true;
  r->VForceMajorGC = false;
  r->VGCsSinceMajor = 0;

  size_t size = r->public.VStackLen * 8;
  for(int i = 0; i < 2; i++) {
    r->VHeaps[i].begin = malloc(size);
    if(!r->VHeaps[i].begin) {
      fprintf(stderr, "failed to resize heap to size %zu\n", size);
      fprintf(stderr, "--stacksize is %zu\n", r->public.VStackSize);
      fprintf(stderr, "--stackstart is %zu\n", (uintptr_t)r->public.VStackStart);
      VAbortC(NULL, VERROR);
    }
    r->VHeaps[i].end = r->VHeaps[i].begin + size;
    r->VHeaps[i].size = size;
  }
  VSwapHeap(r);

  r->VNumTrackedMutations = 0;
  r->VNumUntrackedMutations = 0;
  r->VTrackedMutationsSize = 0;
  r->VTrackedMutations = NULL;

  r->num_tracked_hash_tables = 0;
  r->tracked_hash_tables_size = 0;
  r->tracked_hash_tables = NULL;

  r->VGlobalTable = NULL;
  r->VNumGlobals = 0;
  r->VNumGlobalSlots = 0;
  r->VGrowSymtable = false;

  r->dynamics = VNULL;
  r->exception_handlers = VNULL;

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
  r->owns_heap[0] = false;
  r->owns_heap[1] = false;

  r->fiber_runtimes = malloc(sizeof(VStack));
  VStackInit(r->fiber_runtimes);
  r->fiber_heaps = malloc(sizeof(VStack));
  VStackInit(r->fiber_heaps);

  r->num_unreaped_arenas = 0;
  r->unreaped_arenas = NULL;

  atomic_init(&r->gensym_storage, 0ull);
  r->gensym_index = (_Atomic uint64_t*)&r->gensym_storage;

  r->declare_list = VNULL;
  r->library_list = VNULL;

  (void)VCurrentJiffyImpl();
}

static VClosure next_closure = { .base = { .tag = VCLOSURE }, .func = (VFunc)VNext2, .env = NULL };

SYSV_CALL VWORD VStart2(VRuntime * runtime, int num_toplevels, VThunk const * toplevels) {
  if(!runtime->VGlobalTable)
  {
    VInitGlobalTable(runtime);
  }

  VWORD next = VEncodeClosure(&next_closure);
  VWORD ret = VEncodeInt(0);
  // volatile prevents a longjmp clobber warning when optimization is on
  volatile int i = 0;
  for(i = 0; i < num_toplevels; i++)
  {
    VThunk func = toplevels[i];
    int which = VSetJmp(runtime->VRoot);
#ifdef __EMSCRIPTEN__
    runtime->public.callgas = runtime->public.max_callgas;
    runtime->public.bounceheight = 0;
#endif
    switch(which) {
      case 0:
        V_CALL_FUNC(func, NULL, runtime, next);
        break;
      case VJMP_YIELD:
      case VJMP_GC:
        if(VWordType(runtime->VGCResumeCont) == VPOINTER_CLOSURE)
          V_CALL(runtime->VGCResumeCont, runtime, VVOID);
        else
          VErrorC(runtime, "missing GC Resume Continuation???~N");
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
  V_CALL_FUNC(VExit2, NULL, runtime, VVOID, VEncodeInt(0));
end:
#ifndef VANITY_PURE_C
  if(runtime->fiber_context)
    VCloseFiberWorkers(runtime->my_fiber, runtime->fiber_context);
#endif
  return ret;
}

static V_BEGIN_FUNC_MIN(VResumeThunk, "resume", 0)
//static SYSV_CALL void VResumeThunk(V_CORE_ARGS, ...) {
  V_BOUNCE(statics->vars[0], runtime, statics->vars[1]);
V_END_FUNC

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
      case VJMP_YIELD:
      case VJMP_GC:
        if(VWordType(runtime->VGCResumeCont) == VPOINTER_CLOSURE)
          V_CALL(runtime->VGCResumeCont, runtime, VVOID);
        else
          VErrorC(runtime, "missing GC Resume Continuation???~N");
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
          VErrorC(runtime, "async control flow error: tried to await-join without a future in flight?\n");
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
  V_CALL_FUNC(VExit2, NULL, runtime, VVOID, runtime->VExitCode);
end:
#ifndef VANITY_PURE_C
  if(VIsMain(runtime) && runtime->fiber_context)
    VCloseFiberWorkers(runtime->my_fiber, runtime->fiber_context);
#endif
  return ret;
}

void VDestroyRuntime(VRuntime * runtime) {
#ifndef VANITY_PURE_C
  if(runtime->fiber_context)
    VCloseFiberWorkers(runtime->my_fiber, runtime->fiber_context);
#endif
}

int VExecute(VRuntime * runtime, VClosure * _thunk) {
  VClosure * volatile thunk = _thunk;
  if(!runtime->VGlobalTable)
    VInitGlobalTable(runtime);

  VWORD next = VEncodeClosure(&next_closure);
  {
    int which = VSetJmp(runtime->VRoot);
#ifdef __EMSCRIPTEN__
    runtime->public.callgas = runtime->public.max_callgas;
#endif
    switch(which) {
      case 0:
        if(VDecodeBool(runtime->VGCResumeCont)) {
          assert(VWordType(runtime->VGCResumeCont) == VPOINTER_CLOSURE);
          thunk = VDecodeClosure(runtime->VGCResumeCont);
          runtime->VGCResumeCont = VFALSE;
        }
        V_CALL_FUNC(thunk->func, thunk->env, runtime, next);
        break;
      case VJMP_GC:
        if(VWordType(runtime->VGCResumeCont) == VPOINTER_CLOSURE) {
          thunk = VDecodeClosure(runtime->VGCResumeCont);
          runtime->VGCResumeCont = VFALSE;
          V_CALL_FUNC(thunk->func, thunk->env, runtime, next);
        }
        assert(0);
        break;
      case VJMP_FINISH:
      {
        return VFINISHED;
      }
      case VJMP_EXIT:
      {
        return VEXITED;
      }
      case VJMP_YIELD:
      {
        return VYIELDED;
      }
      case VJMP_ERROR:
      default:
      {
        runtime->VExitCode = VEncodeInt(1);
        return VEXITED;
      }
    }
  }
  fprintf(stderr, "vanity: warning: invalid control flow: a function returned\n");
  runtime->VExitCode = VEncodeInt(1);
  //return VEXITED;
  // kludge atm in case of badness, the old method of
  // pumping vanity ended up having it act as if a finish happened
  // self hosting is a curse!
  return VFINISHED;
}

VWORD VGetExitCode(VRuntime * runtime) {
  return runtime->VExitCode;
}

V_BEGIN_FUNC(VFunction2, "function", 2, k, name)
  VClosure fun = VFunctionImpl(runtime, name);

  V_CALL(k, runtime, VEncodeClosure(&fun));
V_END_FUNC

V_BEGIN_FUNC(VFunction3, "function3", 2, k, name)
  VClosure fun = VFunctionImpl3(runtime, name);

  V_CALL(k, runtime, VEncodeClosure(&fun));
V_END_FUNC

V_BEGIN_FUNC(VCommandLine2, "command-line", 1, k)
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
V_END_FUNC

V_BEGIN_FUNC(VGensym, "gensym", 2, k, _str)
  if(!(VIsSymbol(_str) || VIsString(_str)))
    VErrorC(runtime, "gensym: not a string or symbol: ~S~N", _str);

  VBlob * str = VDecodeBlob(_str);
  uint64_t index = atomic_fetch_add_explicit(runtime->gensym_index, 1, memory_order_seq_cst);
  if(index == ~0ull) VErrorC(runtime, "gensym: internal error~N");

  char const * dots = ".";
  char const * var = str->buf;
  if(str->len >= 3 && str->buf[0] == '#' && str->buf[1] == '#' && str->buf[2] == '.') {
    dots = ".";
    var = str->buf+3;
  } else if((str->len >= 2 && str->buf[0] == '#' && str->buf[1] == '#')) {
    dots = "..";
    var = str->buf+2;
  }
  char buf[1024];
  int ret = snprintf(buf, sizeof buf, "##%s%s.%llu", dots, var, (unsigned long long)index);
  if(ret >= sizeof buf - 1)
    VErrorC(runtime, "gensym: symbol too long ~A", _str);
  VBlob * sym = VCreateSymbolSlow(buf, strlen(buf));

  V_CALL(k, runtime, VEncodePointer(sym, VPOINTER_OTHER));
V_END_FUNC

SYSV_CALL bool __attribute__((noinline)) VStackOverflowNoInline(VRuntime * runtime) {
  char * VStackStop = (char*)&runtime;
  ptrdiff_t size = runtime->public.VStackStart - VStackStop;
  bool has_gas = true;
#ifdef __EMSCRIPTEN__
  int min_callgas = 0;
#ifdef VANITY_PURE_C
  min_callgas = runtime->public.bounceheight;
#endif
  has_gas = runtime->public.callgas > min_callgas;
#endif
#ifdef VANITY_PURE_C
  if(runtime->public.VSecondStackCursor > runtime->public.VSecondStackLen)
    return true;
#endif
  return size > runtime->public.VStackLen || !has_gas;
}
SYSV_CALL bool __attribute__((noinline)) VStackOverflowNoInline2(VRuntime * runtime, char * VStackStop) {
  ptrdiff_t size = runtime->public.VStackStart - VStackStop;
  bool has_gas = true;
#ifdef __EMSCRIPTEN__
  int min_callgas = 0;
#ifdef VANITY_PURE_C
  min_callgas = runtime->public.bounceheight;
#endif
  has_gas = runtime->public.callgas > min_callgas;
#endif
#ifdef VANITY_PURE_C
  if(runtime->public.VSecondStackCursor > runtime->public.VSecondStackLen)
    return true;
#endif
  return size > runtime->public.VStackLen || !has_gas;
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

typedef struct VLaunchFiberData {
  VWORD thunk;
  VRuntime const * base_runtime;
  VRuntime * my_runtime;
} VLaunchFiberData;

#ifndef VANITY_PURE_C
static void VInitFiberRuntime(VRuntime * r, VRuntime const * runtime, VFiber * fiber) {
  *r = *runtime;

  assert(runtime->fiber_context == fiber->context);
  size_t stacksize = fiber->stacksize;
  r->public.VStackStart = fiber->stack + stacksize;
  r->public.VStackLen = stacksize - 1024*1024;
  r->public.VStackSize = stacksize;
#ifdef __EMSCRIPTEN__
  r->public.max_callgas = runtime->max_callgas;
  r->public.callgas = r->public.max_callgas;
#endif

  memcpy(r->public.VCallHistory, runtime->public.VCallHistory, sizeof runtime->public.VCallHistory);
  r->public.VCallHistoryCursor = runtime->public.VCallHistoryCursor;

  r->VForceMajorGC = false;
  r->VActiveHeap = true;
  r->VGCsSinceMajor = 0;


  r->VNumTrackedMutations = 0;
  r->VNumUntrackedMutations = 0;
  r->VTrackedMutationsSize = 0;
  r->VTrackedMutations = NULL;

  r->num_tracked_hash_tables = 0;
  r->tracked_hash_tables_size = 0;
  r->tracked_hash_tables = NULL;

  r->VGlobalTable = runtime->VGlobalTable;
  r->VNumGlobals = runtime->VNumGlobals;
  r->VNumGlobalSlots = runtime->VNumGlobalSlots;
  r->VGrowSymtable = false;

  r->dynamics = runtime->dynamics;
  r->exception_handlers = VNULL;

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

  atomic_init(&r->gensym_storage, ~0ull);
  r->gensym_index = (_Atomic uint64_t*)runtime->gensym_index;

  r->declare_list = runtime->declare_list;
  r->library_list = runtime->library_list;

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
    free(r->VHeapFinalizers[i].dense);
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

    VSetFinalizerImpl(runtime, my_table, mem, finalizer);
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
#if 0
  assert(runtime->num_half_reaped_fibers == 0);
  assert(!runtime->half_reaped_fibers);
  runtime->num_half_reaped_fibers = numfibers;
  VRuntime ** runtimes = runtime->half_reaped_fibers = malloc(sizeof(VRuntime*[numfibers]));
  for(int i = 0; i < numfibers; i++) {
    runtimes[i] = datas[i].my_runtime;
  }
#else
  assert(runtime->num_unreaped_arenas == 0);
  assert(!runtime->unreaped_arenas);
  runtime->num_unreaped_arenas = numfibers;
  VArena * arenas = runtime->unreaped_arenas = malloc(sizeof(VArena[numfibers]));
  for(int i = 0; i < numfibers; i++) {
    VRuntime * fiber_runtime = datas[i].my_runtime;
    arenas[i].buf = fiber_runtime->VHeaps[fiber_runtime->VActiveHeap].begin;
    arenas[i].buf_end = fiber_runtime->VHeaps[fiber_runtime->VActiveHeap].end;
    arenas[i].buf_cursor = fiber_runtime->VHeapPos;
    arenas[i].finalizers = fiber_runtime->VHeapFinalizers[fiber_runtime->VActiveHeap];
    if(fiber_runtime->owns_heap[fiber_runtime->VActiveHeap])
      arenas[i].heap_return = fiber_runtime->fiber_heaps;

    fiber_runtime->VHeaps[fiber_runtime->VActiveHeap].begin = NULL;
    fiber_runtime->VHeapFinalizers[fiber_runtime->VActiveHeap] = (VFinalizerTable){0};

    VFreeFiberRuntime(fiber_runtime);
    VStackPush(runtime->fiber_runtimes, fiber_runtime);
  }
#endif
}
static void VPushHalfReapedRuntimes(VRuntime * runtime, int numfibers, VRuntime ** _runtimes) {
  if(!numfibers)
    return;
#if 0
  assert(runtime->num_half_reaped_fibers == 0);
  assert(!runtime->half_reaped_fibers);
  runtime->num_half_reaped_fibers = numfibers;
  VRuntime ** runtimes = runtime->half_reaped_fibers = malloc(sizeof(VRuntime*[numfibers]));
  for(int i = 0; i < numfibers; i++) {
    runtimes[i] = _runtimes[i];
  }
#else
  assert(runtime->num_unreaped_arenas == 0);
  assert(!runtime->unreaped_arenas);
  runtime->num_unreaped_arenas = numfibers;
  VArena * arenas = runtime->unreaped_arenas = malloc(sizeof(VArena[numfibers]));
  for(int i = 0; i < numfibers; i++) {
    VRuntime * fiber_runtime = _runtimes[i];
    arenas[i].buf = fiber_runtime->VHeaps[fiber_runtime->VActiveHeap].begin;
    arenas[i].buf_end = fiber_runtime->VHeaps[fiber_runtime->VActiveHeap].end;
    arenas[i].buf_cursor = fiber_runtime->VHeapPos;
    arenas[i].finalizers = fiber_runtime->VHeapFinalizers[fiber_runtime->VActiveHeap];
    fiber_runtime->VHeapFinalizers[fiber_runtime->VActiveHeap] = (VFinalizerTable){0};
  }
#endif
}

static uint64_t VWrappedFiberFork(VRuntime * runtime, VEnv * upenv, int numfibers, VWORD k, VLaunchFiberData * datas) {
  VFiber * me = runtime->my_fiber;
  VFiber * fibers[numfibers];

  VWORD ret = VNULL;
  for(int i = 0; i < numfibers; i++) {
    ret = VInlineCons2(runtime, VVOID, ret);
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
      cur_wait = VInlineCdr2(runtime, cur_wait);
      waitpair = VDecodePair(cur_wait);
      waitnum++;
    }

    // try to reap threads
    while(halfreapnum < waitnum) {
      VPair * reappair = VDecodePair(cur_reap);
      VWORD fiber_ret = VInlineCar2(runtime, cur_reap);
      if(VIsToken(fiber_ret, VTOK_ERROR))
        VErrorC(runtime, "fiber-fork: a fiber errored\n");
      if(VIsToken(fiber_ret, VTOK_VOID))
        VErrorC(runtime, "fiber-fork: a fiber returned but did not return a value\n");

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
      cur_reap = VInlineCdr2(runtime, cur_reap);
      halfreapnum++;
    }

    if(pushnum == numfibers && waitnum < numfibers) {
      // no more fibers to push so at this point we start spinning on waits
      waitpair->first = VWord(VFiberWait(runtime->fiber_context, fibers[waitnum], me));
      cur_wait = VInlineCdr2(runtime, cur_wait);
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

V_BEGIN_FUNC(VFiberForkList, "fiber-fork", 2, k, lst)
#ifndef VANITY_PURE_C
  V_GC_CHECK2_VARARGS((VFunc)VFiberForkList, runtime, statics, 2, argc, k, lst) {
    if(!runtime->fiber_context) {
      runtime->my_fiber = VLaunchFiberWorkers(&runtime->fiber_context, 8, 2 * 1024 * 1024);
      runtime->main_fiber = runtime->my_fiber;
    }
    int nfibers = 0;
    VWORD cur = lst;
    while(!VIsToken(cur, VTOK_NULL)) {
      if(VWordType(cur) != VPOINTER_PAIR)
        VErrorC(runtime, "fiber-fork: not a proper list ~S\n", lst);
      if(VWordType(VInlineCar2(runtime, cur)) != VPOINTER_CLOSURE)
        VErrorC(runtime, "fiber-fork: not a procedure ~S\n", VInlineCar2(runtime, cur));
      nfibers++;
      cur = VInlineCdr2(runtime, cur);
    }
    if(nfibers * (sizeof(VPair) + sizeof(VLaunchFiberData)) > V_ALLOCA_LIMIT)
      VErrorC(runtime, "fiber-fork: too many fibers in one call, alloca limit exceeded\n");
    if(nfibers > 0) {
      VLaunchFiberData datas[nfibers];

      for(int i = 0; i < nfibers; i++) {
        datas[i].thunk = VInlineCar2(runtime, lst);
        datas[i].base_runtime = runtime;
        datas[i].my_runtime = NULL;
        lst = VInlineCdr2(runtime, lst);
      }

      VWrappedFiberFork(runtime, NULL, nfibers, k, datas);
    } else {
      V_CALL(k, runtime, VNULL);
    }
  }
#endif
  VErrorC(runtime, "fiber-fork: unsupported platform\n");
  assert(0);
V_END_FUNC

///////////////////// AWAIT //////////////////////////

#ifndef VANITY_PURE_C
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
  data->my_runtime->exception_handlers = data->base_runtime->exception_handlers;
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
V_BEGIN_FUNC(VAsync, "async", 2, k, future_thunk)
#ifndef VANITY_PURE_C
  V_GC_CHECK2_VARARGS((VFunc)VAsync, runtime, statics, 2, argc, k, future_thunk) {
    if(!runtime->fiber_context) {
      runtime->my_fiber = VLaunchFiberWorkers(&runtime->fiber_context, 8, 2 * 1024 * 1024);
      runtime->main_fiber = runtime->my_fiber;
    }
    if(VWordType(future_thunk) != VPOINTER_CLOSURE)
      VErrorC(runtime, "async: not a procedure ~S\n", future_thunk);
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
      VErrorC(runtime, "async control flow error: async-join occured even though the future hasn't been awaited\n");

    // Grab pieces of state not represented in the continuation
    runtime->dynamics = awaiter_data.my_runtime->dynamics;
    runtime->exception_handlers = awaiter_data.my_runtime->exception_handlers;

    VRuntime * runtimes[2] = {
      awaiter_data.my_runtime,
      thunk_data.my_runtime,
    };

    VPushHalfReapedRuntimes(runtime, 2, runtimes);
    VClosure * _resume_thunk = VDecodeClosure(resume_thunk);
    VGarbageCollect2(_resume_thunk->func, runtime, _resume_thunk->env, 0, NULL);
  }
#endif
  VErrorC(runtime, "async: unsupported platform\n");
  assert(0);
V_END_FUNC

#ifndef VANITY_PURE_C
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
V_BEGIN_FUNC(VAwait, "await", 2, k, _future)
#ifndef VANITY_PURE_C
  VFuture * future = VCheckedDecodeFuture2(runtime, _future, "await");

  VFiber * fiber = atomic_load(&future->fiber);
  if(fiber) {
    VFiberAcquire(future->lock, runtime->fiber_context, runtime->my_fiber);
    fiber = atomic_load(&future->fiber);
    if(fiber) {
      future->val = VWord(VFiberWait(runtime->fiber_context, fiber, runtime->my_fiber));
      if(VIsToken(future->val, VTOK_ERROR)) {
        future->val = VVOID;
        VErrorC(runtime, "await: a future errored\n");
      }
      assert(atomic_exchange(&future->fiber, NULL));
    }
    VFiberRelease(future->lock, runtime->fiber_context, runtime->my_fiber);
  }

  bool join_threads = false;
  if(fiber) {
    //if(runtime->my_future != future)
      //VErrorC(runtime, "await: must await inverse order of async launches\n");

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
  VErrorC(runtime, "await: unsupported platform");
  assert(0);
V_END_FUNC

static void sigint_handler(int i) {
  atomic_store(&VInterruptSignal, 1);
}

V_BEGIN_FUNC(VRegisterSigint, "register-sigint", 1, k)
  signal(SIGINT, sigint_handler);
  V_BOUNCE(k, runtime, VVOID);
V_END_FUNC

static bool jiffy_epoch_set;
static uint64_t jiffy_epoch;
static uint64_t one_billion = 1000ull * 1000 * 1000;
uint64_t VCurrentJiffyImpl() {
  (void)one_billion;
#ifdef __linux__
  struct timespec nanotime;
  // using clock monotonic to avoid skew? the adjustments are allegedly gentle
  clock_gettime(CLOCK_MONOTONIC, &nanotime);
  uint64_t ret = nanotime.tv_nsec + one_billion * nanotime.tv_sec;
#elif defined(_WIN64)
  LARGE_INTEGER ticks;
  QueryPerformanceCounter(&ticks);
  uint64_t ret = ticks.QuadPart;
#elif defined(__EMSCRIPTEN__)
  double d = emscripten_get_now();
  uint64_t ret = round(d * 1000);
#else
  uint64_t ret = 0;
#endif
  if(!jiffy_epoch_set)
  {
    jiffy_epoch_set = true;
    jiffy_epoch = ret;
  }
  return ret - jiffy_epoch;
}
uint64_t VJiffiesPerSecondImpl() {
#ifdef __linux__
  return one_billion;
#endif
#ifdef _WIN64
  LARGE_INTEGER ticks_per_second;
  QueryPerformanceFrequency(&ticks_per_second);
  return ticks_per_second.QuadPart;
#endif
#ifdef __EMSCRIPTEN__
  return 1000 * 1000;
#endif
  return 0;
}

// ======================================================
// ------------------- DEBUGGING STUFF ------------------
// ======================================================

// HAHA NONE
