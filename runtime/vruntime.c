/*
 * Copyright 2023 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Runtime.
 *
 * The Vanity Scheme Runtime is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either version
 * 3 of the License, or (at your option) any later version.
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
 * This work is published with additional permission under GNU GPL
 * Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
 * should have been included with the Vanity Scheme Runtime.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#define _GNU_SOURCE
#include <dlfcn.h>
#include <pthread.h>

#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#include <setjmp.h>
#include <string.h>
#include <stddef.h>
#include <assert.h>
#include <time.h>
#include <stdarg.h>
#include <signal.h>

#include "vscheme/vruntime.h"
#include "vscheme/vinlines.h"


// makes the GC walk down environments & lists in order to improve cache coherency

// Have to be very careful about what optimizations are added here, to avoid
// a stack overflow during GC

// Specifically,
// * when a pair is moved, its cdr is moved in a loop
// * when an env is moved, its up is moved in a loop
// * when a closure is moved, its env is moved
// -- everything else is typical cheney GC
// the worst stack space from this is pair -> closure -> env
// it can't loop because closures only have envs, and envs only have envs

// terrible, horrible, this goes away if we replace all these globals with a function param
jmp_buf VRoot;

char * VStackStart;
ssize_t VStackSize;
ssize_t VStackLen;

void * VHeap;
void * VHeapPos;
void * VHeapEnd;
bool VActiveHeap;

struct {
  void * begin;
  void * end;
  size_t size;
} VHeaps[2];

void VSwapHeap() {
  VActiveHeap = !VActiveHeap;

  VHeap = VHeaps[VActiveHeap].begin;
  VHeapPos = VHeap;
  VHeapEnd = VHeaps[VActiveHeap].end;
}

enum MEMORY_LOCATION { STACK_MEM = 1, HEAP_MEM = 2, OLD_HEAP_MEM = 4, STATIC_MEM = 8 };
static unsigned VMemLocation(void * obj) {
  if(VStackStart - VStackSize <= (char*)obj && (char*)obj < VStackStart)
    return STACK_MEM;
  else if(VHeaps[VActiveHeap].begin <= obj && obj < VHeaps[VActiveHeap].end)
    return HEAP_MEM;
  else if(VHeaps[!VActiveHeap].begin <= obj && obj < VHeaps[!VActiveHeap].end)
    return OLD_HEAP_MEM;
  else
    return STATIC_MEM;
}

unsigned VNumMinorGCs;
unsigned VNumMajorGCs;

unsigned long VMinorGCTime;
unsigned long VMajorGCTime;

#define MAX_TRACKED_MUTATIONS 256
unsigned VNumTrackedMutations;
unsigned VNumUntrackedMutations;
struct {
  VWORD * container;
  VWORD * slot;
} VTrackedMutations[MAX_TRACKED_MUTATIONS];

static hash64 VHashSymbol(VWORD sym) {
  VBlob * blob = VDecodeBlob(sym);
  hash64 h = hash64_seed();
  h = char_hash64(h, VSYMBOL);
  h = string_hash64(h, blob->buf, blob->len);

  return hash64_to_hash48(h);
}

// 1. basic loop lookup
// 2. hashmap
// 3. interning
// 4. value field in symbols
VGlobalEntry * VGlobalTable;
unsigned VNumGlobals;
unsigned VNumGlobalSlots;

VGlobalEntry * VInsertGlobalEntry(hash64 h, VWORD sym, VWORD val) {
  size_t i = h & (VNumGlobalSlots-1);
  while(VBits(VGlobalTable[i].symbol) != VBits(VVOID))
  {
    i = (i + 1) & (VNumGlobalSlots-1);
  }
  VGlobalTable[i].hash = h;
  VGlobalTable[i].symbol = sym;
  VGlobalTable[i].value = val;

  VNumGlobals++;

  return &VGlobalTable[i];
}

void VInitGlobalTable() {
  VNumGlobalSlots = 32;
  VGlobalTable = malloc(sizeof(VGlobalEntry[VNumGlobalSlots]));
  for(int i = 0; i < VNumGlobalSlots; i++) VGlobalTable[i].symbol = VVOID;
}

void VResizeGlobalTable() {
  VGlobalEntry * newtable = malloc(sizeof(VGlobalEntry[VNumGlobalSlots*2]));
  for(int i = 0; i < VNumGlobalSlots*2; i++)
  {
    newtable[i].hash = 0;
    newtable[i].symbol = VVOID;
    newtable[i].value = VVOID;
  }

  VGlobalEntry * oldtable = VGlobalTable;
  VGlobalTable = newtable;
  VNumGlobals = 0;
  size_t old_num_slots = VNumGlobalSlots;
  VNumGlobalSlots *= 2;

  for(unsigned i = 0; i < old_num_slots; i++) {
    VGlobalEntry * old = &oldtable[i];
    if(VBits(old->symbol) == VBits(VVOID)) continue;
    VInsertGlobalEntry(old->hash, old->symbol, old->value);
  }

  free(oldtable);
}

VGlobalEntry * VLookupGlobalEntry(VWORD sym) {
  hash64 h = VHashSymbol(sym);
  size_t i = h & (VNumGlobalSlots-1);

  VGlobalEntry * place = NULL;
  while(VBits(VGlobalTable[i].symbol) != VBits(VVOID)) {
    if(VGlobalTable[i].hash == h && VCheckSymbolEqv(sym, VGlobalTable[i].symbol)) {
      place = &VGlobalTable[i];
      break;
    }
    i = (i + 1) & (VNumGlobalSlots-1);
  }
  return place;
}
VGlobalEntry * VLookupGlobalEntryFast(char const * sym) {
  hash64 h = hash64_seed();
  h = char_hash64(h, VSYMBOL);
  h = string_hash64(h, sym, strlen(sym)+1);
  h = hash64_to_hash48(h);

  size_t i = h & (VNumGlobalSlots-1);

  VGlobalEntry * place = NULL;
  while(VBits(VGlobalTable[i].symbol) != VBits(VVOID)) {
    if(VGlobalTable[i].hash == h && !strcmp(sym, ((VBlob*)VDecodePointer(VGlobalTable[i].symbol))->buf)) {
      place = &VGlobalTable[i];
      break;
    }
    i = (i + 1) & (VNumGlobalSlots-1);
  }
  return place;
}

/*
VGlobalEntry * VLookupGlobalEntry(VWORD sym) {
  for(unsigned i = 0; i < VNumGlobals; i++) {
    if(VCheckSymbolEqv(sym, VGlobalTable[i].symbol))
      return &VGlobalTable[i];
  }
  return NULL;
}
*/

//void (*VGCResume)(VEnv * env);
void * VGCResume;
VEnv * VGCResumeEnv;
VEnvironment * VGCResumeEnviron;
int VExitCode = 0;


void * VForwarded(void * address) {
  if(*(unsigned long*)address == FORWARDED)
    return *(void**)(address + sizeof(VWORD));
  else
    return NULL;
}

void VForward(void * old, void const * forward) {
  *(unsigned long*)old = FORWARDED;
  *(void const**)(old + sizeof(VWORD)) = forward;
}

void * VMoveObject(void * obj, size_t size) {
  if(VHeapPos + size >= VHeapEnd) {
    fprintf(stderr, "Heap Overflow! This shouldn't have happened\n");
    abort();
  }

  void * collected = (void*)(VHeapPos);
  VHeapPos += size;

  memcpy(collected, obj, size);
  VForward(obj, collected);
  return collected;
}

static bool VNeedsMove(void * obj) {
  return VMemLocation(obj) == STACK_MEM || VMemLocation(obj) == OLD_HEAP_MEM;
}

// Checks for forwarding and heap presence first
void * VCheckedMoveObject(void * obj, size_t size) {
  void * forwarded = VForwarded(obj);
  if(forwarded)
    return forwarded;
  if(!VNeedsMove(obj))
    return obj;
  return VMoveObject(obj, size);
}

// Checks for forwarding and heap presence first
VEnv * VCheckedMoveEnv(VEnv * env) {
  // Only copying the actual live variables to compact the stack frame
  // Stack frames can have more slots than variables from stack frame reuse
  VEnv * ret = VCheckedMoveObject(env, sizeof(VEnv) + sizeof(VWORD[env->num_vars]));
  ret->var_len = ret->num_vars;

  VEnv * old = ret;
  while(old->up) {
    if(!VNeedsMove(old->up))
      break;
    void * forward = VForwarded(old->up);
    if(forward) {
      old->up = forward;
      break;
    }
    old->up = VMoveObject(old->up, sizeof(VEnv) + sizeof(VWORD[old->up->num_vars]));
    old->up->var_len = old->up->num_vars;
    old = old->up;
  }
  return ret;
}

// Checks for forwarding and heap presence first
VEnvironment * VCheckedMoveEnviron(VEnvironment * env) {
  VEnvironment * ret = VCheckedMoveObject(env, sizeof(VEnvironment) + sizeof(VWORD[env->argc]));

  if(ret->static_chain) {
    ret->static_chain = VCheckedMoveEnv(ret->static_chain);
  }

  if(ret->runtime) {
    VError("Whoops forgot to implement runtime gc\n");
  }

  return ret;
}

VClosure * VMoveClosure(VClosure * closure) {
  closure = VMoveObject(closure, sizeof(VClosure));
  if(closure->env)
    closure->env = VCheckedMoveEnv(closure->env);
  return closure;
}

VWORD VMoveDispatch(VWORD word);
VPair * VMovePair(VPair * pair) {
  VPair * ret = VMoveObject(pair, sizeof(VPair));

  VPair * old = ret;
  while(VWordType(old->rest) == VPOINTER_PAIR) {
    void * rest = VDecodePointer(old->rest);

    if(!VNeedsMove(rest))
      break;
    void * forward = VForwarded(rest);
    if(forward) {
      old->rest = VEncodePair(forward);
      break;
    }

    rest = VMoveObject(rest, sizeof(VPair));
    old->rest = VEncodePair(rest);
    old = rest;
  }
  old->rest = VMoveDispatch(old->rest);
  return ret;
}

VWORD VMoveDispatch(VWORD word) {
  if(!VIsPointer(word))
    return word;
  void * ptr = VDecodePointer(word);
  if(!VNeedsMove(ptr))
    return word;
  unsigned long type = VWordType(word);
  void * forward = VForwarded(ptr);
  if(forward) {
    return VEncodePointer(forward, type);
  }

  unsigned tag = *(unsigned*)ptr;
  if(!(VTAG_START <= tag && tag < VTAG_END)) {
    fprintf(stderr, "Unknown tag %u in VMoveDispatch. Heap Corruption?\n", tag);
    abort();
  }
  
  switch(type) {
    case VPOINTER_CLOSURE:
      return VEncodeClosure(VMoveClosure(VDecodeClosure(word)));
      break;
    case VPOINTER_PAIR:
      return VEncodePair(VMovePair(VDecodePair(word)));
      break;
    case VPOINTER_OTHER:
    {
      unsigned tag = *(unsigned*)ptr;
      switch(tag)
      {
        case VSTRING:
        case VSYMBOL:
        {
          VBlob * b = ptr;
          return VEncodePointer(VMoveObject(b, sizeof(VBlob) + (b->len + sizeof(VWORD) - 1)/sizeof(VWORD) * sizeof(VWORD)), VPOINTER_OTHER);
          break;
        }
        case VVECTOR:
        {
          VVector * v = ptr;
          return VEncodePointer(VMoveObject(v, sizeof(VVector) + sizeof(VWORD[v->len])), VPOINTER_OTHER);
          break;
        }
        case VPORT:
        {
          VPort * p = ptr;
          return VEncodePointer(VMoveObject(p, sizeof(VPort)), VPOINTER_OTHER);
          break;
        }
        default:
          fprintf(stderr, "Unknown tag %u in VMoveDispatch. Heap corruption?\n", tag);
          abort();
      }
      break;
    }
    default:
      fprintf(stderr, "Unknown type %016lx in VMoveDispatch. Heap corruption?\n", type);
      abort();
  }
}

void VCheneyEnvironment(VEnvironment * env) {
  for(int i = 0; i < env->argc; i++) {
    env->argv[i] = VMoveDispatch(env->argv[i]);
  }
}

void VCheneyEnv(VEnv * env) {
  for(int i = 0; i < env->num_vars; i++) {
    env->vars[i] = VMoveDispatch(env->vars[i]);
  }
}

void VCheneyClosure(VClosure * closure) {
}

void VCheneyPair(VPair * pair) {
  pair->first = VMoveDispatch(pair->first);
}

void VCheneyVector(VVector * vec) {
  for(int i = 0; i < vec->len; i++)
    vec->arr[i] = VMoveDispatch(vec->arr[i]);
}

VWORD * VCheneyScan(VWORD * cur) {
  switch(*(VTAG*)cur) {
    case VENVIRONMENT:
    {
      VEnvironment * env = (VEnvironment*)cur;
      VCheneyEnvironment(env);
      return cur + (sizeof(VEnvironment) + sizeof(VWORD[env->argc])) / sizeof(VWORD);
      break;
    }
    case VENV:
    {
      VEnv * env = (VEnv*)cur;
      VCheneyEnv(env);
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
      VCheneyPair((VPair*)cur);
      return cur + sizeof(VPair) / sizeof(VWORD);
      break;
    }
    case VVECTOR:
    {
      VVector * v = ((VVector*)cur);
      VCheneyVector(v);
      return cur + (sizeof(VVector) / sizeof(VWORD)) + v->len;
    }
    case VSTRING:
    case VSYMBOL:
    {
      return cur + (sizeof(VBlob) + ((VBlob*)cur)->len + sizeof(VWORD)-1)/sizeof(VWORD);
      break;
    }
    case VPORT:
    {
      return cur + (sizeof(VPort))/sizeof(VWORD);
      break;
    }
  }
  fprintf(stderr, "Unknown type in VCheneyScan. Heap Corruption?\n");
  abort();
  return NULL;
}

static bool VGrowSymtable;
static unsigned VGCsSinceMajor;
void VGarbageCollect(void (*f)(VEnv * env), VEnv * env) {
  struct timespec start_time, end_time;
  clock_gettime(CLOCK_MONOTONIC, &start_time);
  ptrdiff_t stack_len = (char*)&env - VStackStart;
  if(stack_len < 0) stack_len = -stack_len;
  stack_len += sizeof(VEnv) + sizeof(VWORD[env->var_len]);

  size_t after_gc_size = VHeapPos - VHeap + stack_len;
  bool is_major = VHeap + after_gc_size >= VHeapEnd - VStackSize;
  if(is_major) {
    VNumMajorGCs++;
    VSwapHeap();
  } else {
    VNumMinorGCs++;
  }
  if(after_gc_size > VHeaps[VActiveHeap].size) {
    fprintf(stderr, "Garbage collector may overflow: this should be impossible.\n");
    abort();
  }

  VGCResumeEnv = NULL;
  VGCResumeEnviron = NULL;
  VGCResume = f;
  // env is the only root right, so nothing to do if its NULL?
  // how long will this stay true . . .
  // dear past me: when the fuck is it NULL?
  if(env)
  {
    if(env)
      env = VGCResumeEnv = VCheckedMoveEnv(env);

    for(unsigned i = 0; i < VNumTrackedMutations; i++) {
      // of interest is that because container is in the heap
      // we only need to check forwards during a major gc, technically
      VWORD * container = VTrackedMutations[i].container;
      VWORD * slot = VTrackedMutations[i].slot;
      if(container)
      {
        VWORD * forward = VForwarded(container);
        if(forward) {
          slot = forward + (slot - container);
        }
      }

      *slot = VMoveDispatch(*slot);
    }
    VNumTrackedMutations = 0;

    if(VGrowSymtable || VNumGlobals >= VNumGlobalSlots * 0.8)
    {
      VGrowSymtable = false;
      VResizeGlobalTable();
    }

    // Need to resize the global table after tracked mutations, because
    // global table has tracked mutations in it
    if(is_major)
    {
      for(unsigned i = 0; i < VNumGlobalSlots; i++)
      {
        if(VBits(VGlobalTable[i].symbol) != VBits(VVOID))
        {
          VGlobalTable[i].hash = VGlobalTable[i].hash;
          VGlobalTable[i].symbol = VMoveDispatch(VGlobalTable[i].symbol);
          VGlobalTable[i].value = VMoveDispatch(VGlobalTable[i].value);
        }
      }
    }

    VWORD * cur = (VWORD*)VGCResumeEnv;
    VWORD * stop = VHeapPos;
    // the space between cur and stop is the gray set, ie unscanned but moved objects
    while(cur < stop) {
      cur = VCheneyScan(cur);
      stop = VHeapPos;
    }
  }
  // If after a GC, we are still in a state where the next garbage collect can overflow the heap
  // we need to grow the heap
  // or if we are doing too many major gcs, grow the heap to avoid thrashing
  bool grow_heap = false;
  if(is_major) {
    // TODO do binomial statistic test here
    if(VGCsSinceMajor < 20)
      grow_heap = true;
    VGCsSinceMajor = 0;
  } else {
    VGCsSinceMajor++;
  }

  if(grow_heap || (VHeapPos - VHeap) + VStackSize > VHeaps[!VActiveHeap].size) {
    free(VHeaps[!VActiveHeap].begin);
    VHeaps[!VActiveHeap].size *= 2;
    VHeaps[!VActiveHeap].begin = malloc(VHeaps[!VActiveHeap].size);
    VHeaps[!VActiveHeap].end = VHeaps[!VActiveHeap].begin + VHeaps[!VActiveHeap].size;
    //fprintf(stderr, "Growing heap!\n");
  }

  clock_gettime(CLOCK_MONOTONIC, &end_time);
  long diff_sec = end_time.tv_sec - start_time.tv_sec;
  long diff_nsec = end_time.tv_nsec - start_time.tv_nsec;
  diff_nsec += 1000ul * 1000ul * 1000ul * diff_sec;
  if(is_major)
    VMajorGCTime += diff_nsec;
  else
    VMinorGCTime += diff_nsec;
  longjmp(VRoot, VJMP_GC);
}

void VGarbageCollect2Args(VFunc2 f, VRuntime * runtime, VEnv * statics, int fixed_args, int argc, ...) {
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
void VGarbageCollect2(VFunc2 f, VRuntime * runtime, VEnv * statics, int argc, VWORD * argv) {
  struct timespec start_time, end_time;
  clock_gettime(CLOCK_MONOTONIC, &start_time);
  ptrdiff_t stack_len = (char*)&f - VStackStart;
  if(stack_len < 0) stack_len = -stack_len;
  size_t environ_size = sizeof(VEnvironment) + sizeof(VWORD[argc]);
  stack_len += environ_size;

  size_t after_gc_size = VHeapPos - VHeap + stack_len;
  bool is_major = VHeap + after_gc_size >= VHeapEnd - VStackSize;
  if(is_major) {
    VNumMajorGCs++;
    VSwapHeap();
  } else {
    VNumMinorGCs++;
  }
  if(after_gc_size > VHeaps[VActiveHeap].size) {
    fprintf(stderr, "Garbage collector may overflow: this should be impossible.\n");
    abort();
  }

  VEnvironment * environ = alloca(environ_size);
  environ->tag = VENVIRONMENT;
  environ->runtime = runtime;
  environ->static_chain = statics;
  environ->argc = argc;
  memcpy(environ->argv, argv, sizeof(VWORD[argc]));
  /*
  printf("garbage collect got %d args:\n", environ->argc);
  for(int i = 0; i < argc; i++) {
    VDisplayWord(stdout, environ->argv[i], true);
    printf("\n");
  }
  */

  VWORD * cur = (VWORD*)VHeapPos;

  for(unsigned i = 0; i < VNumTrackedMutations; i++) {
    // of interest is that because container is in the heap
    // we only need to check forwards during a major gc, technically
    VWORD * container = VTrackedMutations[i].container;
    VWORD * slot = VTrackedMutations[i].slot;
    if(container)
    {
      VWORD * forward = VForwarded(container);
      if(forward) {
        slot = forward + (slot - container);
      }
    }

    *slot = VMoveDispatch(*slot);
  }
  VNumTrackedMutations = 0;

  if(VGrowSymtable || VNumGlobals >= VNumGlobalSlots * 0.8)
  {
    VGrowSymtable = false;
    VResizeGlobalTable();
  }

  // Need to resize the global table after tracked mutations, because
  // global table has tracked mutations in it
  if(is_major)
  {
    for(unsigned i = 0; i < VNumGlobalSlots; i++)
    {
      if(VBits(VGlobalTable[i].symbol) != VBits(VVOID))
      {
        VGlobalTable[i].hash = VGlobalTable[i].hash;
        VGlobalTable[i].symbol = VMoveDispatch(VGlobalTable[i].symbol);
        VGlobalTable[i].value = VMoveDispatch(VGlobalTable[i].value);
      }
    }
  }

  VGCResumeEnv = NULL;
  VGCResumeEnviron = VCheckedMoveEnviron(environ);
  VGCResume = f;

  VWORD * stop = VHeapPos;
  // the space between cur and stop is the gray set, ie unscanned but moved objects
  while(cur < stop) {
    cur = VCheneyScan(cur);
    stop = VHeapPos;
  }
  // If after a GC, we are still in a state where the next garbage collect can overflow the heap
  // we need to grow the heap
  // or if we are doing too many major gcs, grow the heap to avoid thrashing
  bool grow_heap = false;
  if(is_major) {
    // TODO do binomial statistic test here
    if(VGCsSinceMajor < 20)
      grow_heap = true;
    VGCsSinceMajor = 0;
  } else {
    VGCsSinceMajor++;
  }

  if(grow_heap || (VHeapPos - VHeap) + VStackSize > VHeaps[!VActiveHeap].size) {
    free(VHeaps[!VActiveHeap].begin);
    VHeaps[!VActiveHeap].size *= 2;
    VHeaps[!VActiveHeap].begin = malloc(VHeaps[!VActiveHeap].size);
    VHeaps[!VActiveHeap].end = VHeaps[!VActiveHeap].begin + VHeaps[!VActiveHeap].size;
    //fprintf(stderr, "Growing heap!\n");
  }

  clock_gettime(CLOCK_MONOTONIC, &end_time);
  long diff_sec = end_time.tv_sec - start_time.tv_sec;
  long diff_nsec = end_time.tv_nsec - start_time.tv_nsec;
  diff_nsec += 1000ul * 1000ul * 1000ul * diff_sec;
  if(is_major)
    VMajorGCTime += diff_nsec;
  else
    VMinorGCTime += diff_nsec;
  longjmp(VRoot, VJMP_GC);
}

VDebugInfo * VCallHistory[V_CALL_HISTORY_LEN];
unsigned VCallHistoryCursor;

static void VPrintCallHistory() {
  fprintf(stderr, "Call History (most recent to least recent)\n");
  unsigned i;
  for(i = 0; i < 32; i++) {
    VDebugInfo * debug = VCallHistory[(VCallHistoryCursor - i) % V_CALL_HISTORY_LEN];
    if(!debug) break;
    fprintf(stderr, "%2u. %s\n", i, debug->name);
  }
  fprintf(stderr, "%2u. ...\n", i);
}


// Root level continuation
void VNext(VEnv * env) {
  // Always GC before a longjmp as all the datas on the stack
  if(VMemLocation(env) == STACK_MEM)
    VGarbageCollect(VNext, env);
  longjmp(VRoot, VJMP_FINISH);
}

static void VNext2K(V_CORE_ARGS, ...) {
  longjmp(VRoot, VJMP_FINISH);
}

void VNext2(V_CORE_ARGS, ...) {
  // Always GC before a longjmp as all the datas on the stack
  VGarbageCollect2(VNext2K, runtime, statics, 0, NULL);
}

void VExit(VEnv * env) {
  V_ARG_RANGE("exit", 1, 2, env);
  // Always GC before a longjmp as all the datas on the stack
  if(VMemLocation(env) == STACK_MEM)
    VGarbageCollect(VExit, env);
  VExitCode = 0;
  if(env->num_vars == 2) {
    VWORD e = env->vars[1];
    if(VWordType(e) == VIMM_INT)
      VExitCode = VDecodeInt(e);
    else if(!VDecodeBool(e))
      VExitCode = 1;
  }
  longjmp(VRoot, VJMP_EXIT);
}
void VExit2(V_CORE_ARGS, VWORD k, VWORD e) {
  V_ARG_RANGE2("exit", 1, 2, argc);
  // Always GC before a longjmp as all the datas on the stack
  if(VMemLocation(statics) == STACK_MEM) {
    VWORD argv[] = { k, e };
    VGarbageCollect2((VFunc2)VExit2, runtime, statics, argc, argv);
  }
  VExitCode = 0;
  if(argc == 2) {
    if(VWordType(e) == VIMM_INT)
      VExitCode = VDecodeInt(e);
    else if(!VDecodeBool(e))
      VExitCode = 1;
  }
  longjmp(VRoot, VJMP_EXIT);
}

void VAbort(VEnv * env) {
  VPrintCallHistory();
  fflush(stderr);
  fflush(stdout);
  raise(SIGTRAP);
  longjmp(VRoot, VJMP_ERROR);
}
void VAbort2(V_CORE_ARGS, ...) {
  VPrintCallHistory();
  fflush(stderr);
  fflush(stdout);
  raise(SIGTRAP);
  longjmp(VRoot, VJMP_ERROR);
}

void VVFPrintfC(FILE * f, char const * str, va_list args) {
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

void VFPrintfC(FILE * f, char const * str, ...) {
  va_list args;;
  va_start(args, str);
  VVFPrintfC(f, str, args);
  va_end(args);
}

void VError(const char * str, ...) {
  va_list args;
  va_start(args, str);
  VVFPrintfC(stderr, str, args);

  va_end(args);
  VAbort(NULL);
}


void VIf(VEnv * env) {
  VWORD p = VGetArg(env, 0, 1);
  VClosure * thunk = VDecodeClosure(VGetArg(env, 0, VDecodeBool(p) ? 2 : 3));
  V_TAIL_CALL(env, thunk, VGetArg(env, 0, 0));
}
void VBegin(VEnv * env) {
  VClosure * thunk = VDecodeClosure(VGetArg(env, 0, 2));
  V_TAIL_CALL(env, thunk, VGetArg(env, 0, 0));
}

void VTrackMutation(void * container, VWORD * slot, VWORD val) {
  if(VNumTrackedMutations >= MAX_TRACKED_MUTATIONS) {
    VError("Unable to track mutation: overflow\n");
  }
  if(VIsPointer(val)) {
    void * ptr = VDecodePointer(val);
    if(VMemLocation(ptr) != STACK_MEM) {
      VNumUntrackedMutations++;
    } else if(VMemLocation(container) != STACK_MEM) {
      // a slot in older memory is being set to
      // a value in the new generation, need to track it to
      // avoid losing it
      VTrackedMutations[VNumTrackedMutations].container = (VWORD*)container;
      VTrackedMutations[VNumTrackedMutations].slot = slot;
      VNumTrackedMutations++;
    } else {
      VNumUntrackedMutations++;
    }
  }
}

static void VSetPair(VEnv * env, bool bSetCar) {
  char * proc = bSetCar ? "set-car!" : "set-cdr!";
  V_ARG_CHECK(proc, 3, env);
  if(VStackOverflow((char*)&env) || VNumTrackedMutations >= MAX_TRACKED_MUTATIONS) {
    VGarbageCollect(bSetCar ? VSetCar : VSetCdr, env);
  } else {
    VClosure * k = VDecodeClosure(env->vars[0]);
    if(VWordType(env->vars[1]) != VPOINTER_PAIR) VError("%s: arg 1 not a pair\n", proc);
    VPair * p = VDecodePair(env->vars[1]);
    VWORD val = env->vars[2];

    VTrackMutation(p, bSetCar ? &p->first : &p->rest, val);
    
    if(bSetCar)
      p->first = val;
    else
      p->rest = val;
    V_TAIL_CALL(env, k, VVOID);
  }
}
void VSetCar(VEnv * env) {
  VSetPair(env, true);
}
void VSetCdr(VEnv * env) {
  VSetPair(env, false);
}

static void VSetPair2(V_CORE_ARGS, bool bSetCar, VWORD k, VWORD pair, VWORD val) {
  char * proc = bSetCar ? "set-car!" : "set-cdr!";
  V_ARG_CHECK2(proc, 3, argc);
  if(VStackOverflow((char*)&runtime) || VNumTrackedMutations >= MAX_TRACKED_MUTATIONS) {
    VGarbageCollect2Args((VFunc2)(bSetCar ? VSetCar2 : VSetCdr2), runtime, statics, 3, argc, k, pair, val);
  } else {
    if(VWordType(pair) != VPOINTER_PAIR) VError("%s: arg 1 not a pair\n", proc);
    VPair * p = VDecodePair(pair);

    VTrackMutation(p, bSetCar ? &p->first : &p->rest, val);
    
    if(bSetCar)
      p->first = val;
    else
      p->rest = val;
    V_CALL2(VDecodeClosure(k), runtime, VVOID);
  }
}
void VSetCar2(V_CORE_ARGS, VWORD k, VWORD pair, VWORD val) {
  VSetPair2(runtime, statics, argc, true, k, pair, val);
}
void VSetCdr2(V_CORE_ARGS, VWORD k, VWORD pair, VWORD val) {
  VSetPair2(runtime, statics, argc, false, k, pair, val);
}

void VVectorSet(VEnv * env) {
  V_ARG_CHECK("vector-set!", 4, env);
  if(VStackOverflow((char*)&env) || VNumTrackedMutations >= MAX_TRACKED_MUTATIONS) {
    VGarbageCollect(VVectorSet, env);
  } else {
    VClosure * k = VDecodeClosure(env->vars[0]);
    VVector * vec = VDecodeVector(env->vars[1]);
    if(!vec) VError("vector-set!: arg 1 not a vector\n");
    if(VWordType(env->vars[2]) != VIMM_INT) VError("vector-set!: arg 2 not an int\n");
    long i = VDecodeInt(env->vars[2]);
    if(!(0 <= i && i < vec->len)) VError("vector-set!: out of range\n");

    VWORD val = env->vars[3];
    VTrackMutation(vec, vec->arr + i, val);
    vec->arr[i] = val;

    V_TAIL_CALL(env, k, VVOID);
  }
}
void VVectorSet2(V_CORE_ARGS, VWORD k, VWORD v, VWORD i, VWORD val) {
  V_ARG_CHECK2("vector-set!", 4, argc);
  if(VStackOverflow((char*)&runtime) || VNumTrackedMutations >= MAX_TRACKED_MUTATIONS) {
    VGarbageCollect2Args((VFunc2)VVectorSet2, runtime, statics, 4, argc, k, v, i, val);
  } else {
    VVector * vector = VDecodeVector(v);
    if(!vector) VError("vector-set!: arg 1 not a vector\n");
    if(VWordType(i) != VIMM_INT) VError("vector-set!: arg 2 not an int\n");
    long index = VDecodeInt(i);
    if(!(0 <= index && index < vector->len)) VError("vector-set!: out of range\n");

    VTrackMutation(vector, vector->arr + index, val);
    vector->arr[index] = val;

    V_CALL2(VDecodeClosure(k), runtime, VVOID);
  }
}

void VSetEnvVar(VEnv * env) {
  // not really a procedure but needs to abuse the procedure
  // interface to garbage collect
  if(VStackOverflow((char*)&env) || VNumTrackedMutations >= MAX_TRACKED_MUTATIONS) {
    VGarbageCollect(VSetEnvVar, env);
  } else {
    if(env->num_vars != 4) VError("set!: not enough arguments? This should be impossible\n");
    VClosure * k = VDecodeClosure(env->vars[0]);
    long up = VDecodeInt(env->vars[1]);
    long var = VDecodeInt(env->vars[2]);
    VWORD val = env->vars[3];
    VEnv * orig = env;

    env = env->up;
    while(up) {
      env = env->up;
      up--;
    }
    env->vars[var] = val;

    // Its impossible for a var in the old set to point to the new set
    // except through mutation, track all such events to avoid dropping them
    // during GC
    if(VIsPointer(val)) {
      void * ptr = VDecodePointer(val);
      if(VMemLocation(ptr) != STACK_MEM) {
        VNumUntrackedMutations++;
      } else if(VMemLocation(env) != STACK_MEM) {
        // an environment in older memory is being set to
        // a value in the new generation, need to track it to
        // avoid losing it
        VTrackedMutations[VNumTrackedMutations].container = (VWORD*)env;
        VTrackedMutations[VNumTrackedMutations].slot = &env->vars[var];
        VNumTrackedMutations++;
      } else {
        VNumUntrackedMutations++;
      }
    }
    V_TAIL_CALL(orig, k, VVOID);
  }
}

void VSetEnvVar2(V_CORE_ARGS, VWORD k, VWORD _up, VWORD _var, VWORD val) {
  // not really a procedure but needs to abuse the procedure
  // interface to garbage collect
  if(argc != 4) VError("set!: not enough arguments? This should be impossible\n");
  if(VStackOverflow((char*)&runtime) || VNumTrackedMutations >= MAX_TRACKED_MUTATIONS) {
    VGarbageCollect2Args((VFunc2)VSetEnvVar2, runtime, statics, 4, 4, k, _up, _var, val);
  } else {
    long up = VDecodeInt(_up);
    long var = VDecodeInt(_var);

    while(up) {
      statics = statics->up;
      up--;
    }
    statics->vars[var] = val;

    // Its impossible for a var in the old set to point to the new set
    // except through mutation, track all such events to avoid dropping them
    // during GC
    if(VIsPointer(val)) {
      void * ptr = VDecodePointer(val);
      if(VMemLocation(ptr) != STACK_MEM) {
        VNumUntrackedMutations++;
      } else if(VMemLocation(statics) != STACK_MEM) {
        // an environment in older memory is being set to
        // a value in the new generation, need to track it to
        // avoid losing it
        VTrackedMutations[VNumTrackedMutations].container = (VWORD*)statics;
        VTrackedMutations[VNumTrackedMutations].slot = &statics->vars[var];
        VNumTrackedMutations++;
      } else {
        VNumUntrackedMutations++;
      }
    }
    V_CALL2(VDecodeClosure(k), runtime, VVOID);
  }
}

static bool VDefineImpl(VWORD sym, VWORD val, bool is_set) {
  hash64 hash = VHashSymbol(sym);

  VGlobalEntry * place = VLookupGlobalEntry(sym);

  if(!place)
  {
    if(is_set) return false;

    place = VInsertGlobalEntry(hash, sym, val);
    if(VIsPointer(sym)) {
      void * ptr = VDecodePointer(sym);
      // The symbol table is not walked during minor gc so always track values
      if(VMemLocation(ptr) != STACK_MEM) {
        VNumUntrackedMutations++;
      } else {
        if(VNumTrackedMutations >= MAX_TRACKED_MUTATIONS) VError("Mutation tracking overflow\n");
        // symbol table is never moved, no need to worry about forwards
        VTrackedMutations[VNumTrackedMutations].container = NULL;
        VTrackedMutations[VNumTrackedMutations].slot = &place->symbol;
        VNumTrackedMutations++;
      }
    }
  }
  
  place->value = val;
  if(VIsPointer(val)) {
    void * ptr = VDecodePointer(val);
    // The symbol table is not walked during minor gc so always track values
    if(VMemLocation(ptr) != STACK_MEM) {
      VNumUntrackedMutations++;
    } else {
      if(VNumTrackedMutations >= MAX_TRACKED_MUTATIONS) VError("Mutation tracking overflow\n");
      // symbol table is never moved, no need to worry about forwards
      VTrackedMutations[VNumTrackedMutations].container = NULL;
      VTrackedMutations[VNumTrackedMutations].slot = &place->value;
      VNumTrackedMutations++;
    }
  }
  return true;
}


void VSetGlobalVar(VEnv * env) {
  if(VStackOverflow((char*)&env) || VNumTrackedMutations >= MAX_TRACKED_MUTATIONS)
    VGarbageCollect(VSetGlobalVar, env);

  VClosure * k = VDecodeClosure(env->vars[0]);
  VWORD sym = env->vars[1];
  VWORD val = env->vars[2];
 
  VGlobalEntry * place = VLookupGlobalEntry(sym);
  if(!place)
    VError("set!: Symbol not found: ~a\n", sym);
  
  place->value = val;
  if(VIsPointer(val)) {
    void * ptr = VDecodePointer(val);
    // The symbol table is not walked during minor gc so always track values
    if(VMemLocation(ptr) != STACK_MEM) {
      VNumUntrackedMutations++;
    } else {
      // symbol table is never moved, no need to worry about forwards
      VTrackedMutations[VNumTrackedMutations].container = NULL;
      VTrackedMutations[VNumTrackedMutations].slot = &place->value;
      VNumTrackedMutations++;
    }
  }
  V_TAIL_CALL(env, k, VVOID);
}

void VSetGlobalVar2(V_CORE_ARGS, VWORD k, VWORD sym, VWORD val) {
  V_ARG_CHECK2("set!", 3, argc);
  if(VStackOverflow((char*)&runtime) || VNumTrackedMutations+1 >= MAX_TRACKED_MUTATIONS || VNumGlobals >= VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc2)VSetGlobalVar2, runtime, statics, 3, argc, k, sym, val);

  if(!VDefineImpl(sym, val, true))
    VError("set!: Symbol not found: ~a\n", sym);
  V_CALL2(VDecodeClosure(k), runtime, VVOID);
}


void VDefineGlobalVar(VEnv * env) {
  if(VStackOverflow((char*)&env) || VNumTrackedMutations+1 >= MAX_TRACKED_MUTATIONS || VNumGlobals >= VNumGlobalSlots * 0.8)
    VGarbageCollect(VDefineGlobalVar, env);

  VClosure * k = VDecodeClosure(env->vars[0]);
  VWORD sym = env->vars[1];
  VWORD val = env->vars[2];
  VDefineImpl(sym, val, false);
  V_TAIL_CALL(env, k, VVOID);
}

void VDefineGlobalVar2(V_CORE_ARGS, VWORD k, VWORD sym, VWORD val) {
  V_ARG_CHECK2("define", 3, argc);
  if(VStackOverflow((char*)&runtime) || VNumTrackedMutations+1 >= MAX_TRACKED_MUTATIONS || VNumGlobals >= VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc2)VDefineGlobalVar2, runtime, statics, 3, argc, k, sym, val);

  VDefineImpl(sym, val, false);
  V_CALL2(VDecodeClosure(k), runtime, VVOID);
}

void VMultiDefine(VEnv * env) {
  V_ARG_CHECK("multidefine", 2, env);
  long num = 0;
  VWORD defines = env->vars[1];
  while(!VIsEq(defines, VNULL)) {
    num++;
    defines = VDecodePair(defines)->rest;
  }
  VGrowSymtable = VNumGlobals + num >= VNumGlobalSlots * 0.8;
  if(VStackOverflow((char*)&env) || VNumTrackedMutations+num >= MAX_TRACKED_MUTATIONS || VGrowSymtable) {
    VGarbageCollect(VMultiDefine, env);
  }

  VClosure * k = VDecodeClosure(env->vars[0]);
  defines = env->vars[1];
  while(!VIsEq(defines, VNULL)) {
    VPair * pair = VDecodePair(VDecodePair(defines)->first);

#if 0
    VFPrintfC(stderr, "~S := ~S\n", pair->first, pair->rest);
#endif

    VDefineImpl(pair->first, pair->rest, false);
    
    defines = VDecodePair(defines)->rest;
  }
  V_TAIL_CALL(env, k, VVOID);
}
void VMultiDefine2(V_CORE_ARGS, VWORD k, VWORD defines) {
  V_ARG_CHECK2("multidefine", 2, argc);
  long num = 0;
  VWORD root = defines;
  while(!VIsEq(defines, VNULL)) {
    num++;
    defines = VDecodePair(defines)->rest;
  }
  VGrowSymtable = VNumGlobals + num >= VNumGlobalSlots * 0.8;
  if(VStackOverflow((char*)&runtime) || VNumTrackedMutations+num >= MAX_TRACKED_MUTATIONS || VGrowSymtable) {
    VGarbageCollect2Args((VFunc2)VMultiDefine2, runtime, statics, 2, argc, k, root);
  }

  defines = root;
  while(!VIsEq(defines, VNULL)) {
    VPair * pair = VDecodePair(VDecodePair(defines)->first);

#if 0
    VFPrintfC(stderr, "~S := ~S\n", pair->first, pair->rest);
#endif

    VDefineImpl(pair->first, pair->rest, false);
    
    defines = VDecodePair(defines)->rest;
  }
  V_CALL2(VDecodeClosure(k), runtime, VVOID);
}

void VLookupLibrary(VEnv * env) {
  if(VStackOverflow((char*)&env) || VNumTrackedMutations+1 >= MAX_TRACKED_MUTATIONS || VNumGlobals >= VNumGlobalSlots * 0.8)
    VGarbageCollect(VLookupLibrary, env);

#define sym_str "##vcore.libraries"
  VBlob * sym = alloca(sizeof(VBlob) + sizeof sym_str);
  sym->tag = VSYMBOL;
  sym->len = sizeof sym_str;
  memcpy(sym->buf, sym_str, sym->len);
#undef sym_str

  VWORD sym_word = VEncodePointer(sym, VPOINTER_OTHER);
  VGlobalEntry * lookup = VLookupGlobalEntry(sym_word);
  VWORD libs = VNULL;
  if(!lookup) {
    VDefineImpl(sym_word, libs, false);
  } else {
    libs = lookup->value;
  }

  VWORD lib = VFALSE;
  VBlob * name = VDecodeBlob(env->vars[1]);
  while(!VIsEq(libs, VNULL)) {
    VPair * libs_dec = VDecodePair(libs);
    VPair * pair = VDecodePair(libs_dec->first);
    VBlob * str = (VBlob*) VDecodeBlob(pair->first);
    if(!strcmp(name->buf, str->buf)) {
      lib = pair->rest;
      break;
    }
    libs = libs_dec->rest;
  }
  VClosure * k = VDecodeClosure(env->vars[0]);
  V_TAIL_CALL(env, k, lib);
}

void VLookupLibrary2(V_CORE_ARGS, VWORD k, VWORD name) {
  V_ARG_CHECK2("lookup-library", 2, argc);
  if(VStackOverflow((char*)&runtime) || VNumTrackedMutations+1 >= MAX_TRACKED_MUTATIONS || VNumGlobals >= VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc2)VLookupLibrary2, runtime, statics, 2, argc, k, name);

#define sym_str "##vcore.libraries"
  VBlob * sym = alloca(sizeof(VBlob) + sizeof sym_str);
  sym->tag = VSYMBOL;
  sym->len = sizeof sym_str;
  memcpy(sym->buf, sym_str, sym->len);
#undef sym_str

  VWORD sym_word = VEncodePointer(sym, VPOINTER_OTHER);
  VGlobalEntry * lookup = VLookupGlobalEntry(sym_word);
  VWORD libs = VNULL;
  if(!lookup) {
    VDefineImpl(sym_word, libs, false);
  } else {
    libs = lookup->value;
  }

  VWORD lib = VFALSE;
  while(!VIsEq(libs, VNULL)) {
    VPair * libs_dec = VDecodePair(libs);
    VPair * pair = VDecodePair(libs_dec->first);
    VBlob * str = (VBlob*) VDecodeBlob(pair->first);
    VBlob * name_dec = VDecodeBlob(name);
    if(!strcmp(name_dec->buf, str->buf)) {
      lib = pair->rest;
      break;
    }
    libs = libs_dec->rest;
  }
  V_CALL2(VDecodeClosure(k), runtime, lib);
}

static void VMakeImportLambda(V_CORE_ARGS, VWORD k, VWORD x) {
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
      V_CALL2(VDecodeClosure(k), runtime, VInlineCdr(arg));
      break;
    } else {
      args = VInlineCdr(args);
    }
  }
}

void VMakeImport2(V_CORE_ARGS, VWORD k, VWORD lib, ...) {
  V_ARG_MIN2("make-import", 2, argc);
  VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[argc]));
  env->tag = VENV;
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
  VClosure ret = VMakeClosure2((VFunc2)VMakeImportLambda, env);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeClosure(&ret));
}

static VFunc2 VFunctionImpl(VWORD name) {
  VBlob * blob = VDecodeBlob(name);
  if(!blob || blob->tag != VSTRING) {
    VError("function: not a string ~S\n", name);
  }

  const char * str = blob->buf;
  void * ptr = dlsym(RTLD_DEFAULT, str);
  if(!ptr) {
    VError("function: failed to dlsym function ~z (did you remember to load or link the file it's in?)\n", str);
  }
  VFunc2 * fun = ptr;
  return *fun;
}

static void VLoadLibraryK(V_CORE_ARGS, VWORD loader) {
  V_ARG_CHECK2("load-library-k", 1, argc);
  if(VStackOverflow((char*)&runtime) || VNumTrackedMutations+1 >= MAX_TRACKED_MUTATIONS || VNumGlobals >= VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc2)VLoadLibraryK, runtime, statics, 1, argc, loader);

  VWORD k = statics->vars[0];
  VWORD lib = statics->vars[1];
  VWORD libraries_sym = statics->vars[2];
  VWORD libraries = statics->vars[3];

  VPair p = VMakePair(lib, loader);
  VPair newlibs = VMakePair(VEncodePair(&p), libraries);

  VDefineImpl(libraries_sym, VEncodePair(&newlibs), true);

  V_CALL2(VDecodeClosure(k), runtime, loader);
}

void VLoadLibrary2(V_CORE_ARGS, VWORD k, VWORD name) {
  V_ARG_CHECK2("load-library", 2, argc);
  if(VStackOverflow((char*)&runtime) || VNumTrackedMutations+1 >= MAX_TRACKED_MUTATIONS || VNumGlobals >= VNumGlobalSlots * 0.8)
    VGarbageCollect2Args((VFunc2)VLoadLibrary2, runtime, statics, 2, argc, k, name);

#define sym_str "##vcore.libraries"
  VBlob * sym = alloca(sizeof(VBlob) + sizeof sym_str);
  sym->tag = VSYMBOL;
  sym->len = sizeof sym_str;
  memcpy(sym->buf, sym_str, sym->len);
#undef sym_str

  VWORD sym_word = VEncodePointer(sym, VPOINTER_OTHER);
  VGlobalEntry * lookup = VLookupGlobalEntry(sym_word);
  VWORD libs = VNULL;
  if(!lookup) {
    VDefineImpl(sym_word, libs, false);
  } else {
    libs = lookup->value;
  }

  VWORD libraries = libs;
  VWORD lib = VFALSE;
  while(!VIsEq(libs, VNULL)) {
    VPair * libs_dec = VDecodePair(libs);
    VPair * pair = VDecodePair(libs_dec->first);
    VBlob * str = (VBlob*) VDecodeBlob(pair->first);
    if(!strcmp(VDecodeBlob(name)->buf, str->buf)) {
      lib = pair->rest;
      break;
    }
    libs = libs_dec->rest;
  }
  if(!VDecodeBool(lib)) {
    VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[4]));
    env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = NULL;
    env->vars[0] = k;
    env->vars[1] = name;
    env->vars[2] = sym_word;
    env->vars[3] = libraries;
    VClosure callback = VMakeClosure2((VFunc2)VLoadLibraryK, env);
    VFunc2 loader = VFunctionImpl(name);
    V_CALL_FUNC2((*loader), runtime, VEncodeClosure(&callback));
    //V_CALL_FUNC2(VFunction2, runtime, VEncodeClosure(&callback), name);
  } else {
    V_CALL2(VDecodeClosure(k), runtime, lib);
  }
}

void VDisplayWord(FILE * f, VWORD v, bool write) {
  unsigned long type = VWordType(v);
  switch(type) {
    case VIMM_NUMBER:
      fprintf(f, "%f", VDecodeNumber(v));
      break;
    case VIMM_INT:
      fprintf(f, "%ld", VDecodeInt(v));
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
    case VPOINTER_OTHER:
    {
      void * ptr = (void*)VDecodePointer(v);
      unsigned tag = *(unsigned*)ptr;
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
    case VPOINTER_CLOSURE:
      fprintf(f, "#closure");
      break;
    default:
      fprintf(f, "#?");
      break;
  }
}

static void VGetStackInfo(char ** start, size_t * size) {
  int ret;
  pthread_attr_t attribs;
  ret = pthread_attr_init(&attribs);
  ret = pthread_getattr_np(pthread_self(), &attribs);
  
  if(ret) printf("pthread error\n");
  ret = pthread_attr_getstack(&attribs, (void**)start, size);
  if(ret) printf("pthread error\n");
  ret = pthread_attr_destroy(&attribs);
  if(ret) printf("pthread error\n");

#ifndef __x86_64__
  // stack may grow upwards on some platforms
  static_assert(0);
#endif
#ifndef __linux__
  // pthreads yes, but also the indexing of *start initially pointing
  // to the bottom of the stack
  static_assert(0);
#endif
  *start += *size;
}

int VStart(int nargs, void(* const * toplevels)()) {
  char * start;
  size_t stacksize;
  VGetStackInfo(&start, &stacksize);

  VStackStart = start;
  VStackSize = (ssize_t)stacksize;
  VStackLen = (ssize_t)stacksize - 1024*1024;

  VStackSize = 8 * 1024 * 1024;
  VStackLen = 7 * 1024 * 1024;

  if(!VHeaps[0].begin)
  {
    size_t size = VStackLen * 8;
    for(int i = 0; i < 2; i++) {
      VHeaps[i].begin = malloc(size);
      VHeaps[i].end = VHeaps[i].begin + size;
      VHeaps[i].size = size;
    }
    VSwapHeap();
  }

  if(!VGlobalTable)
  {
    VInitGlobalTable();
  }

  for(int i = 0; i < nargs; i++)
  {
    void (*func)() = toplevels[i];
    int which = setjmp(VRoot);
    switch(which) {
      case 0:
        func();
        break;
      case VJMP_GC:
        if(VGCResumeEnviron)
          VSysApply((VFunc2)VGCResume, VGCResumeEnviron);
        else
          ((VFunc)VGCResume)(VGCResumeEnv);
        break;
      case VJMP_FINISH:
      {
        break;
      }
      case VJMP_ERROR:
      {
        return 1;
        break;
      }
      case VJMP_EXIT:
      {
        return VExitCode;
        break;
      }
    }
  }
  return 0;
}

void VFunction(VEnv * env) {
  V_ARG_CHECK("function", 2, env);

  VBlob * blob = VDecodeBlob(env->vars[1]);
  if(!blob || blob->tag != VSTRING) {
    VError("function: not a string ~S\n", env->vars[1]);
  }

  const char * str = blob->buf;
  void * ptr = dlsym(RTLD_DEFAULT, str);
  if(!ptr) {
    VError("function: failed to dlsym function ~z (did you remember to load or link the file it's in?)\n", str);
  }
  void (**fun)(VEnv *) = ptr;
  VClosure closure = VMakeClosure(*fun, NULL);

  VClosure * k = VDecodeClosure(env->vars[0]);
  V_TAIL_CALL(env, k, VEncodeClosure(&closure));
}

void VFunction2(V_CORE_ARGS, VWORD k, VWORD name) {
  V_ARG_CHECK2("function", 2, argc);

  /*
  VBlob * blob = VDecodeBlob(name);
  if(!blob || blob->tag != VSTRING) {
    VError("function: not a string ~S\n", name);
  }

  const char * str = blob->buf;
  void * ptr = dlsym(RTLD_DEFAULT, str);
  if(!ptr) {
    VError("function: failed to dlsym function ~z (did you remember to load or link the file it's in?)\n", str);
  }
  VFunc2 * fun = ptr;
  VClosure closure = VMakeClosure2(*fun, NULL);
  */
  VFunc2 fun = VFunctionImpl(name);
  VClosure closure = VMakeClosure2(*fun, NULL);

  V_CALL2(VDecodeClosure(k), runtime, VEncodeClosure(&closure));
}

int VArgc;
char ** VArgv;

void VCommandLine(VEnv * env) {
  V_ARG_CHECK("command-line", 1, env);

  VWORD ret = VNULL;
  int argc = VArgc;
  while(argc--) {
    VPair * pair = alloca(sizeof(VPair));
    char * arg = VArgv[argc];
    unsigned len = strlen(arg);
    VBlob * str = alloca(sizeof(VBlob) + strlen(arg) + 1);
    str->tag = VSTRING;
    str->len = len+1;
    memcpy(str->buf, arg, len+1);
    *pair = VMakePair(VEncodePointer(str, VPOINTER_OTHER), ret);
    ret = VEncodePair(pair);
  }
  VClosure * k = VDecodeClosure(env->vars[0]);
  V_TAIL_CALL(env, k, ret);
}

void VCommandLine2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK2("command-line", 1, argc);

  VWORD ret = VNULL;
  int cmd_argc = VArgc;
  while(cmd_argc--) {
    VPair * pair = alloca(sizeof(VPair));
    char * arg = VArgv[cmd_argc];
    unsigned len = strlen(arg);
    VBlob * str = alloca(sizeof(VBlob) + strlen(arg) + 1);
    str->tag = VSTRING;
    str->len = len+1;
    memcpy(str->buf, arg, len+1);
    *pair = VMakePair(VEncodePointer(str, VPOINTER_OTHER), ret);
    ret = VEncodePair(pair);
  }
  V_CALL2(VDecodeClosure(k), runtime, ret);
}

// ======================================================
// ------------------- DEBUGGING STUFF ------------------
// ======================================================
