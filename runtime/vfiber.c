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
#include <pthread.h>
#include <signal.h>
#endif
#include "vscheme/vruntime.h"
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
#ifdef __linux__
// ======================================================
// ------------------- QUEUES ---------------------------
// ======================================================

typedef struct VQueueNode VQueueNode;
typedef struct VQueuePtr {
  union {
    struct {
      VQueueNode * ptr;
      uint64_t ver;
    };
    __int128 i;
  };
} VQueuePtr;

typedef struct VQueueNode {
  void * data;
  VQueuePtr next;
} VQueueNode;

typedef struct VFiberQueue {
  VQueuePtr head;
  VQueuePtr tail;
} VFiberQueue;

void VFiberQueueInit(VFiberQueue * queue) {
  VQueueNode * root = malloc(sizeof(VQueueNode));
  root->data = NULL;
  root->next.ptr = NULL;
  root->next.ver = 0;

  queue->head = (VQueuePtr) { { .ptr = root, .ver = 0 } };
  queue->tail = (VQueuePtr) { { .ptr = root, .ver = 0 } };
}

#define VFiberQueuePush VFiberQueueAtomicPush
#define VFiberQueuePop VFiberQueueAtomicPop

static bool CasQueuePtr(VQueuePtr * dst, VQueuePtr * expected, VQueueNode * val) {
  VQueuePtr newptr = { { .ptr = val, .ver = expected->ver+1 } };
  return __atomic_compare_exchange_n(&dst->i, &expected->i, newptr.i, false, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
}

// a fiber waits, it writes itself to its waitee
// a fiber exits, it goes on a reaping list
// and we just sift through 

VFiber * VFiberQueueAtomicPop(VFiberQueue * queue) {
  for(;;) {
    VQueuePtr head, tail, next;
    head.i = __atomic_load_n(&queue->head.i, __ATOMIC_SEQ_CST);
    tail.i = __atomic_load_n(&queue->tail.i, __ATOMIC_SEQ_CST);
    next.i = __atomic_load_n(&head.ptr->next.i, __ATOMIC_SEQ_CST);
    // the list is empty, or someone else is mid pop
    if(next.ptr == NULL) {
      if(head.ptr == tail.ptr) {
        // either the list is empty
        // or someone's mid pop and the tail is out of date
        return NULL;
      }
      // someone else is mid pop
      continue;
    }
    if(head.ptr == tail.ptr) {
      // queue tail is out of date, just gonna advance it while
      // we have the cache line
      CasQueuePtr(&queue->tail, &tail, next.ptr);
    } else {
      // null out the pointer to next so nobody tramples on us 
      if(CasQueuePtr(&head.ptr->next, &next, NULL)) {
        VFiber * ret = next.ptr->data;
        if(CasQueuePtr(&queue->head, &head, next.ptr)) {
          free(head.ptr);
          return ret;
        }
      }
    }
  }
  return NULL;
}
void VFiberQueueAtomicPush(VFiberQueue * queue, VFiber * fiber) {
  VQueueNode * newnode = malloc(sizeof(VQueueNode));
  newnode->data = fiber;
  newnode->next.ptr = NULL;
  newnode->next.ver = 0;
  for(;;) {
    VQueuePtr tail, next;
    tail.i = __atomic_load_n(&queue->tail.i, __ATOMIC_SEQ_CST);
    next.i = __atomic_load_n(&tail.ptr->next.i, __ATOMIC_SEQ_CST);
    if(next.ptr == NULL) {
      if(CasQueuePtr(&tail.ptr->next, &next, newnode)) {
        // not particularly important to advance the tail now
        // but might as well since we likely have the cache line
        CasQueuePtr(&queue->tail, &tail, newnode);
        return;
      }
    } else {
      // tail doesn't point to the actual tail, attempt an advance
      CasQueuePtr(&queue->tail, &tail, next.ptr);
    }
  }
}

// ======================================================
// ------------------- FIBERS ---------------------------
// ======================================================

// Super low level fiber primitives. Do not call yourself.
void VSwitchFiber(VFiberState const * to, VFiberState * from);
// VSwitchFiber _must_ release all locks immediately afterwards

// A weirdass non-function that calls the function in r12 with the argument in r13
// If the function returns the fiber aborts the entire program. With a coathanger.
void VFiberStart();

void VInitFiber(VFiber * fiber, char * stack, size_t stacklen, void (*func)(void * data), void * data) {
  memset(fiber, 0, sizeof *fiber);
  fiber->state.rip = (uint64_t)(void*)VFiberStart;
  fiber->state.rsp = (uint64_t)(stack+stacklen);
  fiber->state.r12 = (uint64_t)(void*)func;
  fiber->state.r13 = (uint64_t)data;
}

typedef struct VFiberContext VFiberContext;
typedef struct VFiberWorkerData {
  VFiber me;
  VFiberContext * context;
  pthread_t id;
} VFiberWorkerData;

typedef struct VFiberContext {
  pthread_mutex_t mutex;
  pthread_cond_t cond;
  VFiberQueue queue;
  // for N threads there are N special sleeper fibers
  // that run when there is not enough work to saturate
  VFiberQueue sleeper_queue; 
  // Threads waiting for a reaping
  VFiberQueue reap_queue;
  // nonzero indicates fibers should wrap up work
  int fiber_signal;
  int num_worker_threads;
  VFiberWorkerData threads[];
} VFiberContext;

static pthread_cond_t dubious = PTHREAD_COND_INITIALIZER;

#define HINULL ((void*)~0ull)
static VFiber * VFiberSelect(VFiberContext * context, bool must_succeed) {
  VFiber * fiber = NULL;
  for(int i = 0; i < 2; i++) {
    VFiber * reaped = VFiberQueuePop(&context->reap_queue);
    if(!reaped)
      break;
    // TODO atomic writes for waiter
    if(reaped->waiter && reaped->waiter != HINULL) {
      fiber = reaped->waiter;
      break;
    }
    VFiberQueuePush(&context->reap_queue, reaped);
  }
  if(!fiber)
    fiber = VFiberQueuePop(&context->queue);
  if(!fiber && must_succeed) {
    // spurious NULLs can be returned by VFiberQueuePop
    // when two threads are popping at once
    while(!(fiber = VFiberQueuePop(&context->sleeper_queue)));
  }
  return fiber;
}

void VFiberSleep(VFiber * me, double seconds) {
  VFiberContext * context = me->context;
  struct timespec begin, cur;
  clock_gettime(CLOCK_MONOTONIC_RAW, &begin);


  clock_gettime(CLOCK_MONOTONIC_RAW, &cur);
  double elapsed = (cur.tv_sec - begin.tv_sec) + (cur.tv_nsec - begin.tv_nsec) / (1000.0 * 1000 * 1000);

  pthread_mutex_lock(&context->mutex);
  while(elapsed < seconds) {
    VFiber const * fiber = VFiberSelect(context, false);
    if(fiber) {
      VFiberQueuePush(&context->queue, me);
      VSwitchFiber(&fiber->state, &me->state);
    }
    clock_gettime(CLOCK_MONOTONIC_RAW, &cur);
    elapsed = (cur.tv_sec - begin.tv_sec) + (cur.tv_nsec - begin.tv_nsec) / (1000.0 * 1000 * 1000);
    if(elapsed >= seconds)
      break;

    struct timespec waittime;
    waittime.tv_sec = 0;
    waittime.tv_nsec = 10000;
    pthread_cond_timedwait(&dubious, &context->mutex, &waittime);
  }
  // Fibers must always unlock this mutex
  pthread_mutex_unlock(&context->mutex);
}

int VSleeperFiberYield(VFiber * me) {
  VFiberContext * context = me->context;
  pthread_mutex_lock(&context->mutex);

  VFiber const * fiber = NULL;
  int ret = context->fiber_signal;
  do {
    fiber = VFiberSelect(context, false);
    if(!fiber && !ret) {
      struct timespec waittime;
      waittime.tv_sec = 0;
      waittime.tv_nsec = 10000;
      pthread_cond_timedwait(&context->cond, &context->mutex, &waittime);
      ret = context->fiber_signal;
    }
  } while(!fiber && !ret);
  if(fiber) {
    VFiberQueuePush(&context->sleeper_queue, me);
    VSwitchFiber(&fiber->state, &me->state);
  }

  // Fibers must always unlock this mutex
  pthread_mutex_unlock(&context->mutex);

  return ret;
}

void VFiberExit(VFiberContext * context, VFiber * me, uint64_t ret) {
  pthread_mutex_lock(&context->mutex);

  me->alive = false;
  me->reaped = false;
  me->ret = ret;
  VFiber const * fiber = NULL;
  if(me->waiter && me->waiter != HINULL) {
    fiber = me->waiter;
  } else {
    fiber = VFiberSelect(context, true);
    VFiberQueuePush(&context->reap_queue, me);
  }
  // wake up all fiber workers in case one is asleep waiting on this one
  pthread_cond_broadcast(&context->cond);

  VSwitchFiber(&fiber->state, &me->state);
  // Fibers must always unlock this mutex
  pthread_mutex_unlock(&context->mutex);
}

uint64_t VFiberWait(VFiberContext * context, VFiber * waitee, VFiber * me) {
  uint64_t ret = 0;

  pthread_mutex_lock(&context->mutex);
  assert(waitee->waiter == NULL);
  if(!me) {
    waitee->waiter = HINULL;
    // Called from the non-fiber thread, nothing to do but wait
    while(waitee->alive) {
      // The waitee will send a broadcast to wake us up
      pthread_cond_wait(&context->cond, &context->mutex);
    }
  } else {
    waitee->waiter = me;
    VFiber const * fiber = VFiberSelect(context, true);
    VSwitchFiber(&fiber->state, &me->state);
  } 
  ret = waitee->ret;
  waitee->reaped = true;

  pthread_mutex_unlock(&context->mutex);

  return ret;
}

static void *VSleeperFiberMain(void * _data) {
  VFiberWorkerData * data = _data;
  sigset_t mask;
  sigfillset(&mask);
  int ret = pthread_sigmask(SIG_BLOCK, &mask, NULL);
  if(ret) {
    fprintf(stderr, "Couldn't block signals on fiber threads. Goodbye!\n");
    fflush(stderr);
    abort();
  }

  int exit = 0;
  while(!exit) {
    printf("yielding\n");
    exit = VSleeperFiberYield(&data->me);
  }

  return NULL;
}

typedef struct VFiberPreambleData {
  VFiberContext * context;
  VFiber * me;
  uint64_t (*func)(VFiber * me, void * data);
  void * data;
} VFiberPreambleData;

static void VFiberPreamble(void * _data) {
  VFiberPreambleData * data = _data;
  pthread_mutex_unlock(&data->context->mutex);

  uint64_t ret = data->func(data->me, data->data);

  VFiberExit(data->context, data->me, ret);
}

VFiber * VPushFiber(VFiberContext * context, char * stack, size_t stacklen, uint64_t (*func)(VFiber * me, void * data), void *data) {
  size_t fiber_size = ((sizeof(VFiber)+15)/16)*16;
  size_t preamble_size = ((sizeof(VFiberPreambleData)+15)/16)*16;
  VFiber * fiber = (VFiber*)(stack + stacklen - fiber_size);
  memset(fiber, 0, sizeof *fiber);

  VFiberPreambleData * preamble_data = (VFiberPreambleData*)(stack + stacklen - fiber_size - preamble_size);
  char * stack_top = (stack + stacklen - fiber_size - preamble_size - 16);
  preamble_data->context = context;
  preamble_data->me = fiber;
  preamble_data->func = func;
  preamble_data->data = data;

  fiber->state.rip = (uint64_t)(void*)VFiberStart;
  fiber->state.rsp = (uint64_t)(stack_top);
  fiber->state.r12 = (uint64_t)(void*)VFiberPreamble;
  fiber->state.r13 = (uint64_t)preamble_data;
  fiber->alive = true;
  fiber->reaped = false;
  fiber->context = context;


  VFiberQueuePush(&context->queue, fiber);

  pthread_mutex_lock(&context->mutex);
  pthread_cond_signal(&context->cond);
  pthread_mutex_unlock(&context->mutex);


  return fiber;
}

void VLaunchFiberWorkers(VFiberContext ** context_out, int numthreads) {
  VFiberContext * context = *context_out = malloc(sizeof(VFiberContext) + numthreads*sizeof(VFiberWorkerData));
  pthread_cond_init(&context->cond, NULL);
  pthread_mutex_init(&context->mutex, NULL);
  VFiberQueueInit(&context->queue);
  VFiberQueueInit(&context->sleeper_queue);
  VFiberQueueInit(&context->reap_queue);
  context->fiber_signal = 0;
  context->num_worker_threads = numthreads;

  for(int i = 0; i < numthreads; i++) {
    context->threads[i].context = context;
    memset(&context->threads[i].me, '0', sizeof context->threads[i].me);
    context->threads[i].me.context = context;
    context->threads[i].me.alive = true;
    context->threads[i].me.reaped = false;
    int ret = pthread_create(&context->threads[i].id, NULL, VSleeperFiberMain, &context->threads[i]);
    if(ret) {
      fprintf(stderr, "Couldn't create requested number of fiber works. Time to die!\n");
      fflush(stderr);
      abort();
    }
  }
}

void VCloseFiberWorkers(VFiberContext * context) {
  pthread_mutex_lock(&context->mutex);
  pthread_cond_broadcast(&context->cond);
  context->fiber_signal = 1;
  pthread_mutex_unlock(&context->mutex);

  for(int i = 0; i < context->num_worker_threads; i++) {
    pthread_join(context->threads[i].id, NULL);
    printf("reaped thread\n");
  }
  pthread_cond_destroy(&context->cond);
  pthread_mutex_destroy(&context->mutex);
}
#endif
