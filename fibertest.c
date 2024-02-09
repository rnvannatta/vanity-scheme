#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "vscheme/vruntime.h"

VFiber fiber;
VFiber me;

void VSwitchFiber(VFiber const * to, VFiber * from);
void VInitFiber(VFiber * fiber, char * stack, size_t stacklen, void (*func)(void * data), void * data);

void foo(void* dat) {
  printf("%s\n", (char*)dat);
  VSwitchFiber(&me, &fiber);
  exit(1);
}

uint64_t fibrous(VFiber * me, void *data) {
  //printf("hayo from the fiber\n");
  //usleep(500 * 1000);
  VFiberSleep(me, 0.5);
  return *(int*)data;
}
uint64_t fibby(VFiber * me, void *data) {
  //printf("hayo from the fiber\n");
  sleep(2);
  return *(int*)data;
}

uint64_t fiberish(VFiber * me, void *data) {
  VFiber * futures[8];
  int arrs[4] = { 1, 2, 3, 4 };
  printf("nesting\n");
  for(int i = 0; i < 4; i++) {
    futures[i] = VPushFiber(me->context, fibrous, &arrs[i]);
  }
  for(int i = 0; i < 4; i++) {
    printf("from the fiber %d %llu\n", *(int*)data, VFiberWait(me->context, futures[i], me));
  }
  return *(int*)data;
}

int main() {
  char * stack = malloc(4096);
  (void)stack;
  // lowlevel context switching testing
  /*
  char * str = "Hello, World!";
  VInitFiber(&fiber, stack, 4096, foo, str);

  VSwitchFiber(&fiber, &me);

  printf("returned from fiber\n");

  // higher level fiber testing
  */
  VFiberContext * context;
  VLaunchFiberWorkers(&context, 8, 4096);

#if 0
  int leet = 1337;

  VFiber * future = VPushFiber(context, stack, 4096, fibby, &leet);
  printf("%llu\n", VFiberWait(context, future, NULL));
#else
  VFiber * futures[8];
  int arrs[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
  for(int i = 0; i < 8; i++) {
    char * stack = malloc(4096);
    futures[i] = VPushFiber(context, fiberish, &arrs[i]);
  }
  for(int i = 0; i < 8; i++) {
    printf("%llu\n", VFiberWait(context, futures[i], NULL));
  }
  for(int i = 0; i < 8; i++) {
    char * stack = malloc(4096);
    futures[i] = VPushFiber(context, fiberish, &arrs[i]);
  }
  for(int i = 0; i < 8; i++) {
    printf("%llu\n", VFiberWait(context, futures[i], NULL));
  }
#endif

  VCloseFiberWorkers(context);
}
