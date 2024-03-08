#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "vscheme/vruntime.h"
#include "runtime/vqueue_private.h"

VFiber test, main_fiber;

static void MyFiberTest(void * _me) {
  VFiber * me = _me;
  printf("hey from the fiber\n");

  VSwitchFiber(&main_fiber.state, &test.state);
  
  printf("never shoulda come here\n");
  abort();
}

void MyInitFiber(VFiberState * fiber, char * stack, void(*func)(void*), void * data) {
  memset(fiber, 0, sizeof *fiber);
  fiber->regs.rip = (uint64_t)(void*)VFiberStart;
  fiber->regs.rsp = (uint64_t)(void*)stack;
  fiber->regs.r12 = (uint64_t)func;
  fiber->regs.r13 = (uint64_t)data;

  // need to write stack info

  atomic_store(&fiber->running, false);
}

void MyMainFiber(VFiberState * fiber) {
  memset(fiber, 0, sizeof *fiber);
  atomic_store(&fiber->running, true);
  // need to write stack info
}

uint64_t FiberFuncer(VFiber * me, void * _data) {
  int * data = _data;
  printf("fiberin\n");
  return *data * *data;
}

int main() {
  /*
  MyMainFiber(&main_fiber.state);
  char stack[4096];
  MyInitFiber(&test.state, stack + 4080, MyFiberTest, &test);

  VSwitchFiber(&test.state, &main_fiber.state);
  printf("and we're back\n");
  */

  VFiberContext * context;
  VFiber * me = VLaunchFiberWorkers(&context, 8, 1024 * 1024 * 2);

  printf("workers launched\n");

  VFiber * fibers[10];
  int datas[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  for(int i = 0; i < 10; i++) {
    fibers[i] = VPushFiber(context, me, FiberFuncer, &datas[i]);
  }
  int rets[10];
  for(int i = 0; i < 10; i++) {
    rets[i] = VFiberWait(context, fibers[i], me);
    printf("from fiber %d: %d\n", i, rets[i]);
  }

  VCloseFiberWorkers(me, context);
}
