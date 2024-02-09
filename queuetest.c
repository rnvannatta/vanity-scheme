#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "vscheme/vruntime.h"

void VFiberQueueInit(VFiberQueue*);
void VFiberQueueAtomicPush(VFiberQueue*, void*);
void * VFiberQueueAtomicPop(VFiberQueue*);

void * thread_write(void * queue) {
  for(int i = 0; i < 1000000; i++) {
    VFiberQueueAtomicPush(queue, (void*)(intptr_t)(i));
  }
}
void * thread_read(void * queue) {
  for(int i = 0; i < 1000000; i++) {
    VFiberQueueAtomicPop(queue);
  }
}

int main() {
  pthread_t readers[4], writers[4];
  VFiberQueue queue;
  VFiberQueueInit(&queue);
  for(int i = 0; i < 4; i++) {
    pthread_create(readers+i, NULL, thread_read, &queue);
  }
  for(int i = 0; i < 4; i++) {
    pthread_create(writers+i, NULL, thread_write, &queue);
  }
  for(int i = 0; i < 4; i++) {
    pthread_join(readers[i], NULL);
  }
  for(int i = 0; i < 4; i++) {
    pthread_join(writers[i], NULL);
  }
}
