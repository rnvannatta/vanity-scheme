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
#include <stdatomic.h>
#include <x86intrin.h>
#ifdef __linux__
// ======================================================
// ------------------- QUEUES ---------------------------
// ======================================================

typedef struct VListNode {
  void * data;
  VListPtr next;
} VListNode;


void VListNodePoolInit(VListNodePool * pool) {
  pool->nodes.ptr = NULL;
  pool->nodes.ver = 0;
}
void VStackInit(VStack * stack) {
  stack->head.ptr = NULL;
  stack->head.ver = 0;

  VListNodePoolInit(&stack->pool);
}
void VQueueInit(VQueue * queue) {
  VListNode * root = malloc(sizeof(VListNode));
  root->data = NULL;
  root->next.ptr = NULL;
  root->next.ver = 0;

  queue->head = (VListPtr) { { .ptr = root, .ver = 0 } };
  queue->tail = (VListPtr) { { .ptr = root, .ver = 0 } };

  VListNodePoolInit(&queue->pool);
}

static bool CasQueuePtr(VListPtr * dst, VListPtr * expected, VListNode * val) {
  VListPtr newptr = { { .ptr = val, .ver = expected->ver+1 } };
  return __atomic_compare_exchange_n(&dst->i, &expected->i, newptr.i, false, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
}

static VListNode * VAllocNode(VListNodePool * pool) {
  for(;;) {
    VListPtr head;
    head.i = __atomic_load_n(&pool->nodes.i, __ATOMIC_SEQ_CST);
    if(head.ptr == NULL) {
      VListNode * ret = malloc(sizeof(VListNode));
      ret->data = NULL;
      ret->next.ptr = NULL;
      ret->next.ver = 0;
      return ret;
    }

    VListPtr next;
    next.i = __atomic_load_n(&head.ptr->next.i, __ATOMIC_SEQ_CST);
    if(CasQueuePtr(&pool->nodes, &head, next.ptr)) {
      head.ptr->data = NULL;
      head.ptr->next.ptr = NULL;
      return head.ptr;
    }
  }
}

static void VFreeNode(VListNodePool * pool, VListNode * node) {
  node->data = NULL;
  for(;;) {
    VListPtr head;
    head.i = __atomic_load_n(&pool->nodes.i, __ATOMIC_SEQ_CST);
    node->next.ptr = head.ptr;
    if(CasQueuePtr(&pool->nodes, &head, node))
      return;
  }
}

void VStackPush(VStack * stack, void * data) {
  VListNode * node = VAllocNode(&stack->pool);
  node->data = data;
  for(;;) {
    VListPtr head;
    head.i = __atomic_load_n(&stack->head.i, __ATOMIC_SEQ_CST);
    node->next.ptr = head.ptr;
    if(CasQueuePtr(&stack->head, &head, node))
      return;
  }
}
void * VStackPop(VStack * stack) {
  VListNode * node;
  for(;;) {
    VListPtr head;
    head.i = __atomic_load_n(&stack->head.i, __ATOMIC_SEQ_CST);
    if(head.ptr == NULL) {
      return NULL;
    }

    VListPtr next;
    next.i = __atomic_load_n(&head.ptr->next.i, __ATOMIC_SEQ_CST);
    if(CasQueuePtr(&stack->head, &head, next.ptr)) {
      node = head.ptr;
      break;
    }
  }
  void * data = node->data;
  VFreeNode(&stack->pool, node);
  return data;
}

#define HINULL ((void*)~0ull)
void * VQueuePop(VQueue * queue) {
  for(;;) {
    VListPtr head, tail, next;
    head.i = __atomic_load_n(&queue->head.i, __ATOMIC_SEQ_CST);
    tail.i = __atomic_load_n(&queue->tail.i, __ATOMIC_SEQ_CST);
    next.i = __atomic_load_n(&head.ptr->next.i, __ATOMIC_SEQ_CST);
    // if this check passes, the next pointer is a valid address
    if(head.i == __atomic_load_n(&queue->head.i, __ATOMIC_SEQ_CST)) {
      if(head.ptr == tail.ptr) {
        // list is empty
        if(next.ptr == NULL)
          return NULL;
        // queue tail is out of date, just gonna advance it while
        // we have the cache line
        CasQueuePtr(&queue->tail, &tail, next.ptr);
      } else {
        // but can't next stop being valid and be unsafe to deref???
        // what stops another thread from freeing twice here???
        VFiber * ret = next.ptr->data;
        if(CasQueuePtr(&queue->head, &head, next.ptr)) {
          VFreeNode(&queue->pool, head.ptr);
          return ret;
        }
      }
    }
  }
  return NULL;
}
void VQueuePush(VQueue * queue, void * fiber) {
  VListNode * newnode = VAllocNode(&queue->pool);
  newnode->data = fiber;
  newnode->next.ptr = NULL;
  newnode->next.ver = 0;
  for(;;) {
    VListPtr tail, next;
    tail.i = __atomic_load_n(&queue->tail.i, __ATOMIC_SEQ_CST);
    next.i = __atomic_load_n(&tail.ptr->next.i, __ATOMIC_SEQ_CST);
    // if this check passes, the next pointer is a valid address
    if(tail.i == __atomic_load_n(&queue->tail.i, __ATOMIC_SEQ_CST)) {
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
}

// ======================================================
// ------------------- FIBERS ---------------------------
// ======================================================

// Super low level fiber primitives. Do not call yourself.
void VSwitchFiber(VFiberState const * to, VFiberState * from);

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
  pthread_cond_t sleeper_cond;
  pthread_cond_t main_thread_cond;
  size_t stacksize;
  // a stack of stacks for fibers to use
  VStack stackstack;
  // a stack of blank fiber datas for creation
  VStack blank_fiber_stack;
  // fibers eligible for running
  VQueue queue;
  // for N threads there are N special sleeper fibers
  // that run when there is not enough work to saturate
  VQueue sleeper_queue; 
  // Threads waiting for a reaping
  VQueue reap_queue;
  // nonzero indicates fibers should wrap up work
  _Atomic int fiber_signal;
  int num_worker_threads;
  VFiberWorkerData threads[];
} VFiberContext;

static VFiber * VFiberSelect(VFiberContext * context, bool must_succeed) {
  VFiber * fiber = NULL;
  for(int i = 0; i < 2; i++) {
    VFiber * reaped = VQueuePop(&context->reap_queue);
    if(!reaped)
      break;
    VFiber * waiter = atomic_load(&reaped->waiter);
    if(waiter && waiter != HINULL) {
      fiber = waiter;
      break;
    }
    VQueuePush(&context->reap_queue, reaped);
  }
  if(!fiber)
    fiber = VQueuePop(&context->queue);
  if(!fiber && must_succeed) {
    // spurious NULLs can be returned by VQueuePop
    // when two threads are popping at once
    while(!(fiber = VQueuePop(&context->sleeper_queue)));
  }
  if(fiber && !fiber->stack) {
    fiber->stack = VStackPop(&context->stackstack);
    if(!fiber->stack)
      fiber->stack = malloc(context->stacksize);
    fiber->stacksize = context->stacksize;
    fiber->state.rsp = (uint64_t)(fiber->stack + context->stacksize - 16);
  }
  return fiber;
}

void VFiberSleep(VFiber * me, double seconds) {
  VFiberContext * context = me->context;
  struct timespec begin, cur;
  clock_gettime(CLOCK_MONOTONIC_RAW, &begin);


  clock_gettime(CLOCK_MONOTONIC_RAW, &cur);
  double elapsed = (cur.tv_sec - begin.tv_sec) + (cur.tv_nsec - begin.tv_nsec) / (1000.0 * 1000 * 1000);

  while(elapsed < seconds) {
    VFiber const * fiber = VFiberSelect(context, false);
    if(fiber) {
      VQueuePush(&context->queue, me);
      VSwitchFiber(&fiber->state, &me->state);
    }
    clock_gettime(CLOCK_MONOTONIC_RAW, &cur);
    elapsed = (cur.tv_sec - begin.tv_sec) + (cur.tv_nsec - begin.tv_nsec) / (1000.0 * 1000 * 1000);
    if(elapsed >= seconds)
      break;
    __builtin_ia32_pause();
  }
}

int VSleeperFiberYield(VFiber * me) {
  VFiberContext * context = me->context;

  VFiber const * fiber = NULL;
  int ret = atomic_load(&context->fiber_signal);
  do {
    fiber = VFiberSelect(context, false);
    if(!fiber && !ret) {
      pthread_mutex_lock(&context->mutex);
      struct timespec waittime;
      waittime.tv_sec = 0;
      waittime.tv_nsec = 10000;
      pthread_cond_timedwait(&context->sleeper_cond, &context->mutex, &waittime);
      ret = atomic_load(&context->fiber_signal);
      pthread_mutex_unlock(&context->mutex);
    }
  } while(!fiber && !ret);
  if(fiber) {
    VQueuePush(&context->sleeper_queue, me);
    VSwitchFiber(&fiber->state, &me->state);
  }

  return ret;
}

void VFiberExit(VFiberContext * context, VFiber * me, uint64_t ret) {

  me->ret = ret;
  VFiber const * fiber = NULL;
  VFiber * waiter = atomic_load(&me->waiter);
  if(waiter && waiter != HINULL) {
    fiber = waiter;
  } else {
    fiber = VFiberSelect(context, true);
    // we won't actually be reaped until alive is false
    VQueuePush(&context->reap_queue, me);
  }
  // we're ready for our error code to be read
  atomic_store(&me->alive, false);
  pthread_mutex_lock(&context->mutex);
  pthread_cond_signal(&context->sleeper_cond);
  pthread_cond_signal(&context->main_thread_cond);
  pthread_mutex_unlock(&context->mutex);

  VSwitchFiber(&fiber->state, &me->state);
}

uint64_t VFiberWait(VFiberContext * context, VFiber * waitee, VFiber * me) {
  uint64_t ret = 0;

  VFiber * waiter = atomic_load(&waitee->waiter);
  assert(waiter == NULL);
  if(!me) {
    assert(atomic_compare_exchange_strong(&waitee->waiter, &waiter, HINULL));
    // Called from the non-fiber thread, nothing to do but wait
    pthread_mutex_lock(&context->mutex);
    while(atomic_load(&waitee->alive)) {
      // The waitee will send a broadcast to wake us up
      pthread_cond_wait(&context->main_thread_cond, &context->mutex);
    }
    pthread_mutex_unlock(&context->mutex);
    bool found = false;
    do {
      VFiber * fiber = VQueuePop(&context->reap_queue);
      if(fiber == waitee) break;
      VQueuePush(&context->reap_queue, fiber);
    } while(!found);
  } else {
    assert(atomic_compare_exchange_strong(&waitee->waiter, &waiter, me));
    VFiber const * fiber = VFiberSelect(context, true);
    VSwitchFiber(&fiber->state, &me->state);
    // alive is written after the fiber is sent to the reap queue
    while(atomic_load(&waitee->alive))
      __builtin_ia32_pause();
  } 
  ret = waitee->ret;
  // wait for the fiber to be fully swapped out
  while(atomic_load(&waitee->state.running))
    __builtin_ia32_pause();

  VStackPush(&context->stackstack, waitee->stack);
  VStackPush(&context->blank_fiber_stack, waitee);

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
    exit = VSleeperFiberYield(&data->me);
  }

  return NULL;
}

static void VFiberPreamble(void * _me) {
  VFiber * me = _me;
  pthread_mutex_unlock(&me->context->mutex);

  uint64_t ret = me->startup_func(me, me->startup_data);

  VFiberExit(me->context, me, ret);
}

VFiber * VPushFiber(VFiberContext * context, uint64_t (*func)(VFiber * me, void * data), void *data) {
  VFiber* fiber = VStackPop(&context->blank_fiber_stack);
  if(!fiber)
    fiber = malloc(sizeof(VFiber));
  memset(fiber, 0, sizeof *fiber);

  fiber->context = context;
  fiber->stack = NULL;
  fiber->stacksize = 0;
  fiber->startup_func = func;
  fiber->startup_data = data;
  fiber->state.rip = (uint64_t)(void*)VFiberStart;
  fiber->state.rsp = (uint64_t)(NULL);
  fiber->state.r12 = (uint64_t)(void*)VFiberPreamble;
  fiber->state.r13 = (uint64_t)fiber;
  atomic_init(&fiber->state.running, false);
  atomic_init(&fiber->alive, true);
  atomic_init(&fiber->waiter, NULL);


  VQueuePush(&context->queue, fiber);

  pthread_mutex_lock(&context->mutex);
  pthread_cond_signal(&context->sleeper_cond);
  pthread_mutex_unlock(&context->mutex);


  return fiber;
}

void VLaunchFiberWorkers(VFiberContext ** context_out, int numthreads, size_t stacksize) {
  VFiberContext * context = *context_out = malloc(sizeof(VFiberContext) + numthreads*sizeof(VFiberWorkerData));
  pthread_cond_init(&context->sleeper_cond, NULL);
  pthread_cond_init(&context->main_thread_cond, NULL);
  pthread_mutex_init(&context->mutex, NULL);
  context->stacksize = stacksize;
  VStackInit(&context->stackstack);
  VStackInit(&context->blank_fiber_stack);
  VQueueInit(&context->queue);
  VQueueInit(&context->sleeper_queue);
  VQueueInit(&context->reap_queue);
  atomic_init(&context->fiber_signal, 0);
  context->num_worker_threads = numthreads;

  for(int i = 0; i < numthreads; i++) {
    context->threads[i].context = context;
    memset(&context->threads[i].me, '0', sizeof context->threads[i].me);
    context->threads[i].me.context = context;
    atomic_init(&context->threads[i].me.alive, true);
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
  pthread_cond_broadcast(&context->sleeper_cond);
  atomic_store(&context->fiber_signal, 1);
  pthread_mutex_unlock(&context->mutex);

  for(int i = 0; i < context->num_worker_threads; i++) {
    pthread_join(context->threads[i].id, NULL);
  }
  pthread_cond_destroy(&context->sleeper_cond);
  pthread_mutex_destroy(&context->mutex);
  free(context);
}
#endif
