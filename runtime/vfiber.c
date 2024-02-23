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
#ifdef _WIN64
#include <windef.h>
#include <intrin.h>
#endif
#include "vscheme/vruntime.h"
#include "vqueue_private.h"
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
#include <stdatomic.h>
#include <x86intrin.h>
// ======================================================
// ------------------- QUEUES ---------------------------
// ======================================================

#ifdef __linux
unsigned char InterlockedCompareExchange128(volatile __int64_t * dst, __int64_t hi, __int64_t lo, __int64_t * expected) {
  unsigned char ret;
  asm volatile(
    "lock cmpxchg16b %0\n\t"
    "setz %b1\n\t"
    : "+m" (((__int128*)dst)[0]), "=r" (ret), "+d" (expected[1]), "+a" (expected[0])
    : "c" (hi), "b" (lo)
  );
  return ret;
}

typedef struct VListNode {
  void * data;
  VListPtr next;
} VListNode;


void VListNodePoolInit(VListNodePool * pool) {
  pool->nodes.ptr = NULL;
  pool->nodes.ver = 0;
}
void VListNodePoolDeinit(VListNodePool * pool) {
  while(pool->nodes.ptr) {
    void * ptr = pool->nodes.ptr;
    pool->nodes.ptr = pool->nodes.ptr->next.ptr;
    free(ptr);
  }
  pool->nodes.ptr = NULL;
}

void VStackInit(VStack * stack) {
  stack->head.ptr = NULL;
  stack->head.ver = 0;

  VListNodePoolInit(&stack->pool);
}
void VStackDeinit(VStack * stack) {
  assert(stack->head.ptr == NULL);
  VListNodePoolDeinit(&stack->pool);
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

void VQueueDeinit(VQueue * queue) {
  assert(queue->head.ptr == queue->tail.ptr);
  free(queue->head.ptr);
  queue->head.ptr = NULL;
  queue->tail.ptr = NULL;
  VListNodePoolDeinit(&queue->pool);
}

static bool CasQueuePtr(VListPtr * dst, VListPtr * expected, VListNode * val) {
  VListPtr newptr = { { .ptr = val, .ver = expected->ver+1 } };
/*
#ifdef __linux__
  return __atomic_compare_exchange_n(&dst->i, &expected->i, newptr.i, false, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
#endif
#ifdef _WIN64
*/
  return InterlockedCompareExchange128(&dst->lo, newptr.hi, newptr.lo, &expected->lo);
//#endif
}
static VListPtr AtomicLoadPtr(VListPtr * ptr) {
#ifdef __linux__
  return (VListPtr) { { .i = __atomic_load_n(&ptr->i, __ATOMIC_SEQ_CST) } };
#endif
#ifdef _WIN64
  VListPtr ret = { { .lo = 0, .hi = 0 } };
  InterlockedCompareExchange128(&ptr->lo, ret.hi, ret.lo, &ret->lo);
  return ret;
#endif

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

void * VQueuePop(VQueue * queue) {
  atomic_thread_fence(memory_order_seq_cst);
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
  atomic_thread_fence(memory_order_seq_cst);
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
#endif

// ======================================================
// ------------------- FIBERS ---------------------------
// ======================================================
#ifdef __linux__
// Super low level fiber primitives. Do not call yourself.
__attribute__((returns_twice)) void VSwitchFiber(VFiberState const * to, VFiberState * from);

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
  // nonzero indicates fibers should wrap up work
  _Atomic int fiber_signal;
  VFiber main_fiber;
  char signal_stack[1024*1024];
  int num_worker_threads;
  VFiberWorkerData threads[];
} VFiberContext;

static void VAllocFiberStack(VFiberContext * context, VFiber * fiber) {
  assert(!fiber->stack && !fiber->state.rsp);

  fiber->stack = VStackPop(&context->stackstack);
  if(!fiber->stack)
    fiber->stack = malloc(context->stacksize);
  fiber->stacksize = context->stacksize;
  fiber->state.rsp = (uint64_t)(fiber->stack + context->stacksize - 16);
}

static VFiber * VFiberSelect(VFiberContext * context, bool must_succeed) {
  VFiber * fiber = VQueuePop(&context->queue);
  if(!fiber && must_succeed) {
    // spurious NULLs can be returned by VQueuePop
    // when two threads are popping at once
    while(!(fiber = VQueuePop(&context->sleeper_queue)));
  }
  if(fiber && !fiber->stack) {
    VAllocFiberStack(context, fiber);
  }
  return fiber;
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
    ret = atomic_load(&context->fiber_signal);
  }

  return ret;
}

void VFiberExit(VFiberContext * context, VFiber * me, uint64_t ret) {

  me->ret = ret;
  VFiber const * fiber = NULL;
  for(;;) {
    int status = atomic_load(&me->status);
    assert(status != FIBER_EXITED);
    if(status == FIBER_WAITED_ON) {
      // it's our problem to call the waiter
      VFiber * waiter = atomic_load(&me->waiter);
      assert(waiter);
      atomic_store(&me->status, FIBER_EXITED);
      fiber = waiter;
      break;
    }
    assert(status == FIBER_NORMAL);
    if(atomic_compare_exchange_strong(&me->status, &status, FIBER_EXITED)) {
      // if this succeeds, not our problem to call the waiter
      break;
    }
  }
  if(!fiber)
    fiber = VFiberSelect(context, true);

  VSwitchFiber(&fiber->state, &me->state);
}

uint64_t VFiberWait(VFiberContext * context, VFiber * waitee, VFiber * me) {
  uint64_t ret = 0;

  assert(atomic_exchange(&waitee->waiter, me) == NULL);

  int status = atomic_load(&waitee->status);
  if(!me) {
    if(status == FIBER_NORMAL) {
      // if this fails, the other thread exited
      atomic_compare_exchange_strong(&waitee->status, &status, FIBER_WAITED_ON);
    }
    pthread_mutex_lock(&context->mutex);
    while(atomic_load(&waitee->status) != FIBER_EXITED) {
      pthread_cond_wait(&context->main_thread_cond, &context->mutex);
    }
    pthread_mutex_unlock(&context->mutex);
  } else {
    if(status == FIBER_NORMAL) {
      if(atomic_compare_exchange_strong(&waitee->status, &status, FIBER_WAITED_ON)) {
        // We have successfully written FIBER_WAITED_ON to status, so we can swap out and
        // the other thread will ring. if we failed to write FIBER_WAITED_ON its because
        // the other thread exited first
        VFiber const * fiber = VFiberSelect(context, true);
        VSwitchFiber(&fiber->state, &me->state);
        status = atomic_load(&waitee->status);
      }
    }
  }
  ret = waitee->ret;
  // wait for the fiber to be fully swapped out
  while(atomic_load(&waitee->state.running))
    __builtin_ia32_pause();

  VStackPush(&context->stackstack, waitee->stack);
  VStackPush(&context->blank_fiber_stack, waitee);

  return ret;
}
bool VTryFiberWait(VFiberContext * context, VFiber * waitee, VFiber * me, uint64_t * ret) {
  if(atomic_load(&waitee->status) == FIBER_NORMAL)
    return false;

  *ret = waitee->ret;
  // wait for the fiber to be fully swapped out
  while(atomic_load(&waitee->state.running))
    __builtin_ia32_pause();

  VStackPush(&context->stackstack, waitee->stack);
  VStackPush(&context->blank_fiber_stack, waitee);

  return true;
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

  uint64_t ret = me->startup_func(me, me->startup_data);

  VFiberExit(me->context, me, ret);
}

VFiber * VPushFiber(VFiberContext * context, VFiber * me, uint64_t (*func)(VFiber * me, void * data), void *data) {
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
  atomic_store(&fiber->state.running, false);
  atomic_store(&fiber->status, FIBER_NORMAL);
  atomic_store(&fiber->waiter, NULL);

  // true for continuation stealing
  // false for child stealing, you monster
  if(true) {
    VAllocFiberStack(context, fiber);
    VQueuePush(&context->queue, me);
    VSwitchFiber(&fiber->state, &me->state);
  } else {
    VQueuePush(&context->queue, fiber);
  }

  pthread_mutex_lock(&context->mutex);
  pthread_cond_signal(&context->sleeper_cond);
  pthread_mutex_unlock(&context->mutex);

  return fiber;
}

#define HINULL ((void*)(~0ULL))
VFiber * VLaunchFiberWorkers(VFiberContext ** context_out, int numthreads, size_t stacksize) {
  VFiberContext * context = *context_out = malloc(sizeof(VFiberContext) + numthreads*sizeof(VFiberWorkerData));
  pthread_cond_init(&context->sleeper_cond, NULL);
  pthread_cond_init(&context->main_thread_cond, NULL);
  pthread_mutex_init(&context->mutex, NULL);
  context->stacksize = stacksize;
  VStackInit(&context->stackstack);
  VStackInit(&context->blank_fiber_stack);
  VQueueInit(&context->queue);
  VQueueInit(&context->sleeper_queue);
  atomic_store(&context->fiber_signal, 0);
  context->num_worker_threads = numthreads;

  memset(&context->main_fiber, 0, sizeof(VFiber));
  atomic_store(&context->main_fiber.state.running, true);
  atomic_store(&context->main_fiber.status, FIBER_NORMAL);
  atomic_store(&context->main_fiber.waiter, NULL);
  context->main_fiber.stack = HINULL;
  context->main_fiber.state.signal_stack = (uint64_t)context->signal_stack;

  for(int i = 0; i < numthreads; i++) {
    context->threads[i].context = context;
    memset(&context->threads[i].me, 0, sizeof context->threads[i].me);
    context->threads[i].me.context = context;
    context->threads[i].me.stack = HINULL;
    atomic_store(&context->threads[i].me.state.running, true);
    atomic_store(&context->threads[i].me.waiter, NULL);
    atomic_store(&context->threads[i].me.status, FIBER_NORMAL);
    int ret = pthread_create(&context->threads[i].id, NULL, VSleeperFiberMain, &context->threads[i]);
    if(ret) {
      fprintf(stderr, "Couldn't create requested number of fiber works. Time to die!\n");
      fflush(stderr);
      abort();
    }
  }
  return &context->main_fiber;
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

// ======================================================
// --------------------- LOCKS --------------------------
// ======================================================

// When a fiber tries to lock, it, atomically, either
// succeeds or pushes itself to a queue waiting on the lock

// When a fiber unlocks, it atomically pops the queue,
// and if anyone is waiting, it notifies them
typedef struct VFiberLock {
  _Atomic int queue_busy;
  int now_serving;
  int next_ticket;
  // a bit silly to use a spinlock with a waitfree queue haha
  VQueue queue;
} VFiberLock;

void VFiberLockCreate(VFiberLock ** _lock) {
  VFiberLock * lock = *_lock = malloc(sizeof(VFiberLock));
  atomic_store(&lock->queue_busy, 0);
  lock->now_serving = 0;
  lock->next_ticket = 0;
  VQueueInit(&lock->queue);
}
void VFiberLockDestroy(VFiberLock * lock) {
  assert(!atomic_load(&lock->queue_busy));
  assert(lock->now_serving == lock->next_ticket);
  VQueueDeinit(&lock->queue);
  free(lock);
  lock = NULL;
}

void VFiberAcquire(VFiberLock * lock, VFiberContext * context, VFiber * me) {
  do {
    while(atomic_load(&lock->queue_busy))
      __builtin_ia32_pause();
  } while(atomic_exchange(&lock->queue_busy, 1) != 0);

  int my_ticket = lock->next_ticket++;
  if(lock->now_serving != my_ticket) {
    VQueuePush(&lock->queue, me);
    atomic_store(&lock->queue_busy, 0);
    VFiber * next = VFiberSelect(context, true);
    VSwitchFiber(&next->state, &me->state);
    return;
  }

  atomic_store(&lock->queue_busy, 0);
}

void VFiberRelease(VFiberLock * lock, VFiberContext * context, VFiber * me) {
  do {
    while(atomic_load(&lock->queue_busy))
      __builtin_ia32_pause();
  } while(atomic_exchange(&lock->queue_busy, 1) != 0);

  lock->now_serving++;
  VFiber * waiter = VQueuePop(&lock->queue);
  atomic_store(&lock->queue_busy, 0);

  if(waiter) {
    VQueuePush(&context->queue, waiter);

    pthread_mutex_lock(&context->mutex);
    pthread_cond_signal(&context->sleeper_cond);
    pthread_mutex_unlock(&context->mutex);
  }
}

#endif
