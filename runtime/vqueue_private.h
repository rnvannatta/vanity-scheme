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
#pragma once

#include "vsetjmp_private.h"

typedef struct VFiberState VFiberState;
// Super low level primitives. Do not call yourself
__attribute__((returns_twice)) void VSwitchFiber(VFiberState const * to, VFiberState * from);

// A weirdass non-function that calls the function in r12 with the argument in r13
// if the function returns the fiber aborts the entire program. With a coathanger.
void VFiberStart();

typedef struct VListNode VListNode;
typedef struct VListPtr {
  union {
    struct {
      VListNode * ptr;
      uint64_t ver;
    };
    __int128 i;
    _Alignas(16) struct {
      int64_t lo;
      int64_t hi;
    };
  };
} VListPtr;
static_assert(sizeof(VListPtr) == 16);
static_assert(_Alignof(VListPtr) == 16);

typedef struct VListNodePool {
  VListPtr nodes;
} VListNodePool;

typedef struct VQueue {
  VListPtr head;
  VListPtr tail;
  VListNodePool pool;
} VQueue;

typedef struct VStack {
  VListPtr head;
  VListNodePool pool;
} VStack;

void VQueueInit(VQueue * queue);
void VStackInit(VStack * stack);

void VStackPush(VStack * stack, void * data);
void * VStackPop(VStack * stack);

void VQueuePush(VQueue * queue, void * fiber);
void * VQueuePop(VQueue * queue);

typedef struct VListNode VListNode;
typedef struct VFiber VFiber;

typedef struct VFiberContext VFiberContext;

typedef struct VFiberState {
  VRegisters regs;
  _Atomic uint32_t running;
  uint64_t signal_stack;
} VFiberState;

#ifdef __linux__
static_assert(sizeof(struct VFiberState) == 80);
#endif
#ifdef _WIN64
static_assert(sizeof(struct VFiberState) == 256);
#endif

enum { FIBER_NORMAL, FIBER_EXITED, FIBER_WAITED_ON };
typedef struct VFiber {
  VFiberContext * context;
  uint64_t (*startup_func)(struct VFiber * me, void * startup_data);
  void * startup_data;
  char * stack;
  size_t stacksize;
  uint64_t ret;
  struct VFiber * _Atomic waiter;
  _Atomic int status;
  VFiberState state;
} VFiber;

VFiber * VLaunchFiberWorkers(VFiberContext ** context_out, int numthreads, size_t stacksize);
void VCloseFiberWorkers(VFiberContext * context);

VFiber * VPushFiber(VFiberContext * context, VFiber * me, uint64_t (*func)(VFiber * me, void * data), void *data);
uint64_t VFiberWait(VFiberContext * context, VFiber * waitee, VFiber * me);
bool VTryFiberWait(VFiberContext * context, VFiber * waitee, VFiber * me, uint64_t * ret);

void VFiberSleep(VFiber * me, double seconds);

typedef struct VFiberLock VFiberLock;
void VFiberLockCreate(VFiberLock ** lock);
void VFiberLockDestroy(VFiberLock * lock);
void VFiberAcquire(VFiberLock * lock, VFiberContext * context, VFiber * me);
void VFiberRelease(VFiberLock * lock, VFiberContext * context, VFiber * me);
