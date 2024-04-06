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
#include <errno.h>
#include <signal.h>
#endif
#ifdef _WIN64
#include <windef.h>
#include <winnt.h>
#include <intrin.h>

#include <processthreadsapi.h>
#include <synchapi.h>
#include <handleapi.h>
#include <errhandlingapi.h>
#endif

#include "vscheme/vruntime.h"
#include "vsetjmp_private.h"
#include "vqueue_private.h"
#include "vruntime_private.h"
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
#include <stdatomic.h>
#include <x86intrin.h>
// ======================================================
// ------------------- QUEUES ---------------------------
// ======================================================

#ifdef _WIN64

typedef struct _CLIENT_ID
{
   HANDLE UniqueProcess;
   HANDLE UniqueThread;
} CLIENT_ID, *PCLIENT_ID;

#ifndef __UNICODE_STRING_DEFINED__
#define __UNICODE_STRING_DEFINED__
typedef struct _UNICODE_STRING {
  USHORT Length;        /* bytes */
  USHORT MaximumLength; /* bytes */
  PWSTR  Buffer;
} UNICODE_STRING, *PUNICODE_STRING;
#endif

typedef struct _GDI_TEB_BATCH
{
    ULONG  Offset;
    HANDLE HDC;
    ULONG  Buffer[0x136];
} GDI_TEB_BATCH;

typedef struct _PEB_LDR_DATA
{
    ULONG               Length;
    BOOLEAN             Initialized;
    PVOID               SsHandle;
    LIST_ENTRY          InLoadOrderModuleList;
    LIST_ENTRY          InMemoryOrderModuleList;
    LIST_ENTRY          InInitializationOrderModuleList;
    PVOID               EntryInProgress;
    BOOLEAN             ShutdownInProgress;
    HANDLE              ShutdownThreadId;
} PEB_LDR_DATA, *PPEB_LDR_DATA;

typedef struct _ARM64EC_NT_CONTEXT ARM64EC_NT_CONTEXT;
typedef struct _CHPE_V2_CPU_AREA_INFO
{
    BOOLEAN             InSimulation;         /* 000 */
    BOOLEAN             InSyscallCallback;    /* 001 */
    ULONG64             EmulatorStackBase;    /* 008 */
    ULONG64             EmulatorStackLimit;   /* 010 */
    ARM64EC_NT_CONTEXT *ContextAmd64;         /* 018 */
    ULONG              *SuspendDoorbell;      /* 020 */
    ULONG64             LoadingModuleModflag; /* 028 */
    void               *EmulatorData[4];      /* 030 */
    ULONG64             EmulatorDataInline;   /* 050 */
} CHPE_V2_CPU_AREA_INFO, *PCHPE_V2_CPU_AREA_INFO;

typedef struct _TEB_ACTIVE_FRAME_CONTEXT
{
    ULONG       Flags;
    const char *FrameName;
} TEB_ACTIVE_FRAME_CONTEXT, *PTEB_ACTIVE_FRAME_CONTEXT;

typedef struct _TEB_FLS_DATA
{
    LIST_ENTRY      fls_list_entry;
    void          **fls_data_chunks[8];
} TEB_FLS_DATA, *PTEB_FLS_DATA;

typedef struct _TEB_ACTIVE_FRAME
{
    ULONG                     Flags;
    struct _TEB_ACTIVE_FRAME *Previous;
    TEB_ACTIVE_FRAME_CONTEXT *Context;
} TEB_ACTIVE_FRAME, *PTEB_ACTIVE_FRAME;

typedef struct _PEB *PPEB;

typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME
{
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *Previous;
    struct _ACTIVATION_CONTEXT                 *ActivationContext;
    ULONG                                       Flags;
} RTL_ACTIVATION_CONTEXT_STACK_FRAME, *PRTL_ACTIVATION_CONTEXT_STACK_FRAME;

typedef struct _ACTIVATION_CONTEXT_STACK
{
    RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame;
    LIST_ENTRY                          FrameListCache;
    ULONG                               Flags;
    ULONG                               NextCookieSequenceNumber;
    ULONG_PTR                           StackId;
} ACTIVATION_CONTEXT_STACK, *PACTIVATION_CONTEXT_STACK;

typedef struct _TEB
{                                                                 /* win32/win64 */
    NT_TIB                       Tib;                               /* 000/0000 */
    PVOID                        EnvironmentPointer;                /* 01c/0038 */
    CLIENT_ID                    ClientId;                          /* 020/0040 */
    PVOID                        ActiveRpcHandle;                   /* 028/0050 */
    PVOID                        ThreadLocalStoragePointer;         /* 02c/0058 */
    PPEB                         Peb;                               /* 030/0060 */
    ULONG                        LastErrorValue;                    /* 034/0068 */
    ULONG                        CountOfOwnedCriticalSections;      /* 038/006c */
    PVOID                        CsrClientThread;                   /* 03c/0070 */
    PVOID                        Win32ThreadInfo;                   /* 040/0078 */
    ULONG                        User32Reserved[26];                /* 044/0080 */
    ULONG                        UserReserved[5];                   /* 0ac/00e8 */
    PVOID                        WOW32Reserved;                     /* 0c0/0100 */
    ULONG                        CurrentLocale;                     /* 0c4/0108 */
    ULONG                        FpSoftwareStatusRegister;          /* 0c8/010c */
    PVOID                        ReservedForDebuggerInstrumentation[16]; /* 0cc/0110 */
#ifdef _WIN64
    PVOID                        SystemReserved1[30];               /*    /0190 */
#else
    PVOID                        SystemReserved1[26];               /* 10c/     used for krnl386 private data in Wine */
#endif
    char                         PlaceholderCompatibilityMode;      /* 174/0280 */
    BOOLEAN                      PlaceholderHydrationAlwaysExplicit;/* 175/0281 */
    char                         PlaceholderReserved[10];           /* 176/0282 */
    DWORD                        ProxiedProcessId;                  /* 180/028c */
    ACTIVATION_CONTEXT_STACK     ActivationContextStack;            /* 184/0290 */
    UCHAR                        WorkingOnBehalfOfTicket[8];        /* 19c/02b8 */
    LONG                         ExceptionCode;                     /* 1a4/02c0 */
    ACTIVATION_CONTEXT_STACK    *ActivationContextStackPointer;     /* 1a8/02c8 */
    ULONG_PTR                    InstrumentationCallbackSp;         /* 1ac/02d0 */
    ULONG_PTR                    InstrumentationCallbackPreviousPc; /* 1b0/02d8 */
    ULONG_PTR                    InstrumentationCallbackPreviousSp; /* 1b4/02e0 */
#ifdef _WIN64
    ULONG                        TxFsContext;                       /*    /02e8 */
    BOOLEAN                      InstrumentationCallbackDisabled;   /*    /02ec */
    BOOLEAN                      UnalignedLoadStoreExceptions;      /*    /02ed */
#else
    BOOLEAN                      InstrumentationCallbackDisabled;   /* 1b8/     */
    BYTE                         SpareBytes1[23];                   /* 1b9/     */
    ULONG                        TxFsContext;                       /* 1d0/     */
#endif
    GDI_TEB_BATCH                GdiTebBatch;                       /* 1d4/02f0 used for ntdll private data in Wine */
    CLIENT_ID                    RealClientId;                      /* 6b4/07d8 */
    HANDLE                       GdiCachedProcessHandle;            /* 6bc/07e8 */
    ULONG                        GdiClientPID;                      /* 6c0/07f0 */
    ULONG                        GdiClientTID;                      /* 6c4/07f4 */
    PVOID                        GdiThreadLocaleInfo;               /* 6c8/07f8 */
    ULONG_PTR                    Win32ClientInfo[62];               /* 6cc/0800 used for user32 private data in Wine */
    PVOID                        glDispatchTable[233];              /* 7c4/09f0 */
    PVOID                        glReserved1[29];                   /* b68/1138 */
    PVOID                        glReserved2;                       /* bdc/1220 */
    PVOID                        glSectionInfo;                     /* be0/1228 */
    PVOID                        glSection;                         /* be4/1230 */
    PVOID                        glTable;                           /* be8/1238 */
    PVOID                        glCurrentRC;                       /* bec/1240 */
    PVOID                        glContext;                         /* bf0/1248 */
    ULONG                        LastStatusValue;                   /* bf4/1250 */
    UNICODE_STRING               StaticUnicodeString;               /* bf8/1258 */
    WCHAR                        StaticUnicodeBuffer[261];          /* c00/1268 */
    PVOID                        DeallocationStack;                 /* e0c/1478 */
    PVOID                        TlsSlots[64];                      /* e10/1480 */
    LIST_ENTRY                   TlsLinks;                          /* f10/1680 */
    PVOID                        Vdm;                               /* f18/1690 */
    PVOID                        ReservedForNtRpc;                  /* f1c/1698 */
    PVOID                        DbgSsReserved[2];                  /* f20/16a0 */
    ULONG                        HardErrorMode;                     /* f28/16b0 */
#ifdef _WIN64
    PVOID                        Instrumentation[11];               /*    /16b8 */
#else
    PVOID                        Instrumentation[9];                /* f2c/ */
#endif
    GUID                         ActivityId;                        /* f50/1710 */
    PVOID                        SubProcessTag;                     /* f60/1720 */
    PVOID                        PerflibData;                       /* f64/1728 */
    PVOID                        EtwTraceData;                      /* f68/1730 */
    PVOID                        WinSockData;                       /* f6c/1738 */
    ULONG                        GdiBatchCount;                     /* f70/1740 */
    ULONG                        IdealProcessorValue;               /* f74/1744 */
    ULONG                        GuaranteedStackBytes;              /* f78/1748 */
    PVOID                        ReservedForPerf;                   /* f7c/1750 */
    PVOID                        ReservedForOle;                    /* f80/1758 */
    ULONG                        WaitingOnLoaderLock;               /* f84/1760 */
    PVOID                        SavedPriorityState;                /* f88/1768 */
    ULONG_PTR                    ReservedForCodeCoverage;           /* f8c/1770 */
    PVOID                        ThreadPoolData;                    /* f90/1778 */
    PVOID                       *TlsExpansionSlots;                 /* f94/1780 */
#ifdef _WIN64
    union {
        PVOID                    DeallocationBStore;                /*    /1788 */
        CHPE_V2_CPU_AREA_INFO   *ChpeV2CpuAreaInfo;                 /*    /1788 */
    } DUMMYUNIONNAME;
    PVOID                        BStoreLimit;                       /*    /1790 */
#endif
    ULONG                        MuiGeneration;                     /* f98/1798 */
    ULONG                        IsImpersonating;                   /* f9c/179c */
    PVOID                        NlsCache;                          /* fa0/17a0 */
    PVOID                        ShimData;                          /* fa4/17a8 */
    ULONG                        HeapVirtualAffinity;               /* fa8/17b0 */
    PVOID                        CurrentTransactionHandle;          /* fac/17b8 */
    TEB_ACTIVE_FRAME            *ActiveFrame;                       /* fb0/17c0 */
    TEB_FLS_DATA                *FlsSlots;                          /* fb4/17c8 */
    PVOID                        PreferredLanguages;                /* fb8/17d0 */
    PVOID                        UserPrefLanguages;                 /* fbc/17d8 */
    PVOID                        MergedPrefLanguages;               /* fc0/17e0 */
    ULONG                        MuiImpersonation;                  /* fc4/17e8 */
    USHORT                       CrossTebFlags;                     /* fc8/17ec */
    USHORT                       SameTebFlags;                      /* fca/17ee */
    PVOID                        TxnScopeEnterCallback;             /* fcc/17f0 */
    PVOID                        TxnScopeExitCallback;              /* fd0/17f8 */
    PVOID                        TxnScopeContext;                   /* fd4/1800 */
    ULONG                        LockCount;                         /* fd8/1808 */
    LONG                         WowTebOffset;                      /* fdc/180c */
    PVOID                        ResourceRetValue;                  /* fe0/1810 */
    PVOID                        ReservedForWdf;                    /* fe4/1818 */
    ULONGLONG                    ReservedForCrt;                    /* fe8/1820 */
    GUID                         EffectiveContainerId;              /* ff0/1828 */
} TEB, *PTEB;

// mingw spits out nasty scary warnings when compiling this on O2, so don't!
// the teb is stored in %gs, and it seems that gcc has some 'issues' with code
// that extracts from the gs, such as assuming it's a nullptr
#pragma GCC push_options
#pragma GCC optimize("O0")
struct _TEB * (MyNtCurrentTeb)() {
  return NtCurrentTeb();
}
#pragma GCC pop_options

__attribute__((returns_twice)) void VSwitchFiber(VFiberState const * to, VFiberState * from) {
  from->tib.except = MyNtCurrentTeb()->Tib.ExceptionList;
  from->tib.stack_limit = MyNtCurrentTeb()->Tib.StackLimit;
  from->tib.fls_slots = MyNtCurrentTeb()->FlsSlots;

  MyNtCurrentTeb()->Tib.FiberData = (void*)to;
  MyNtCurrentTeb()->Tib.ExceptionList = to->tib.except;
  MyNtCurrentTeb()->Tib.StackBase = to->tib.stack_base;
  MyNtCurrentTeb()->Tib.StackLimit = to->tib.stack_limit;
  MyNtCurrentTeb()->DeallocationStack = to->tib.stack_alloc;
  MyNtCurrentTeb()->FlsSlots = to->tib.fls_slots;

  VSwitchFiberAsm(to, from);
}
#endif

#ifdef _WIN64
static void MyConvertToFiber(VFiberState * state) {
  MyNtCurrentTeb()->Tib.FiberData = state;

  state->tib.except = MyNtCurrentTeb()->Tib.ExceptionList;
  state->tib.stack_base = MyNtCurrentTeb()->Tib.StackBase;
  state->tib.stack_limit = MyNtCurrentTeb()->Tib.StackLimit;
  state->tib.stack_alloc = MyNtCurrentTeb()->DeallocationStack;
  state->tib.fls_slots = MyNtCurrentTeb()->FlsSlots;
}
static void MyConvertFromFiber() {
  MyNtCurrentTeb()->Tib.FiberData = NULL;
}

static void MyCreateFiber(VFiberState * state, char * stack_base, char * stack_limit, char * stack_alloc) {
  state->tib.except = (void*)-1;
  state->tib.stack_base = stack_base;
  state->tib.stack_limit = stack_limit;
  state->tib.stack_alloc = stack_alloc;
  state->tib.fls_slots = NULL;
}
#endif

#define myassert(x) do { if(!(x)) { printf("assertion failed: %s, %s:%d\n", #x, __FILE__, __LINE__); assert(0); } } while(0)

// The debian bookworm build of mingw-w64 is missing this function because of merge errors
// Avoids different code on windings which is cool I guess...
unsigned char MyInterlockedCompareExchange128(volatile int64_t * dst, int64_t hi, int64_t lo, int64_t * expected) {
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
  myassert(stack->head.ptr == NULL);
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
  myassert(queue->head.ptr == queue->tail.ptr);
  free(queue->head.ptr);
  queue->head.ptr = NULL;
  queue->tail.ptr = NULL;
  VListNodePoolDeinit(&queue->pool);
}

static bool CasQueuePtr(VListPtr * dst, VListPtr * expected, VListNode * val) {
  VListPtr newptr = { { .ptr = val, .ver = expected->ver+1 } };
  return MyInterlockedCompareExchange128(&dst->lo, newptr.hi, newptr.lo, &expected->lo);
}
static VListPtr AtomicLoadPtr(VListPtr * ptr) {
  VListPtr ret = { { .lo = 0, .hi = 0 } };
  MyInterlockedCompareExchange128(&ptr->lo, ret.hi, ret.lo, &ret.lo);
  return ret;

}

static VListNode * VAllocNode(VListNodePool * pool) {
  for(;;) {
    VListPtr head;
    head = AtomicLoadPtr(&pool->nodes);
    if(head.ptr == NULL) {
      VListNode * ret = malloc(sizeof(VListNode));
      ret->data = NULL;
      ret->next.ptr = NULL;
      ret->next.ver = 0;
      return ret;
    }

    VListPtr next;
    next = AtomicLoadPtr(&head.ptr->next);
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
    head = AtomicLoadPtr(&pool->nodes);
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
    head = AtomicLoadPtr(&stack->head);
    node->next.ptr = head.ptr;
    if(CasQueuePtr(&stack->head, &head, node))
      return;
  }
}
void * VStackPop(VStack * stack) {
  VListNode * node;
  for(;;) {
    VListPtr head;
    head = AtomicLoadPtr(&stack->head);
    if(head.ptr == NULL) {
      return NULL;
    }

    VListPtr next;
    next = AtomicLoadPtr(&head.ptr->next);
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
    head = AtomicLoadPtr(&queue->head);
    tail = AtomicLoadPtr(&queue->tail);
    next = AtomicLoadPtr(&head.ptr->next);
    // if this check passes, the next pointer is a valid address
    if(head.i == AtomicLoadPtr(&queue->head).i) {
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
    tail = AtomicLoadPtr(&queue->tail);
    next = AtomicLoadPtr(&tail.ptr->next);
    // if this check passes, the next pointer is a valid address
    if(tail.i == AtomicLoadPtr(&queue->tail).i) {
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

typedef struct VFiberContext VFiberContext;
typedef struct VFiberWorkerData {
  VFiber me;
  VFiberContext * context;
#ifdef __linux__
  pthread_t id;
#endif
#ifdef _WIN64
  HANDLE handle;
  DWORD id;
#endif
} VFiberWorkerData;

typedef struct VFiberContext {
#ifdef __linux__
  pthread_mutex_t mutex;
  pthread_cond_t sleeper_cond;
#endif
#ifdef _WIN64
  CRITICAL_SECTION mutex;
  CONDITION_VARIABLE sleeper_cond;
#endif
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
  char signal_stack[1024*1024];
  int num_worker_threads;

  // These are used when closing. The main fiber needs
  // to be run on the main thread, so the two have to swap
  // to each other
  VFiber * _Atomic main_fiber;
  VFiber * _Atomic main_thread_fiber;

  VFiberWorkerData threads[];
} VFiberContext;

static void VAllocFiberStack(VFiberContext * context, VFiber * fiber) {
  myassert(!fiber->stack && !fiber->state.regs.rsp);

  fiber->stack = VStackPop(&context->stackstack);
  if(!fiber->stack)
    fiber->stack = malloc(context->stacksize);
  fiber->stacksize = context->stacksize;
  // on linux technically only need 16 bytes, but fuck it
  fiber->state.regs.rsp = (uint64_t)(fiber->stack + context->stacksize - 16 * 16);

#ifdef _WIN64
  fiber->state.tib.stack_base = fiber->stack + context->stacksize;
  fiber->state.tib.stack_alloc = fiber->stack;
  fiber->state.tib.stack_limit = fiber->stack;
#endif
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

void VFiberExit(VFiberContext * context, VFiber * me, uint64_t ret) {

  me->ret = ret;
  VFiber const * fiber = NULL;
  for(;;) {
    int status = atomic_load(&me->status);
    myassert(status != FIBER_EXITED);
    if(status == FIBER_WAITED_ON) {
      // it's our problem to call the waiter
      VFiber * waiter = atomic_load(&me->waiter);
      myassert(waiter);
      atomic_store(&me->status, FIBER_EXITED);
      fiber = waiter;
      break;
    }
    myassert(status == FIBER_NORMAL);
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

  myassert(atomic_exchange(&waitee->waiter, me) == NULL);

  int status = atomic_load(&waitee->status);
  if(!me) {
    myassert(!me);
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

static void VFiberPreamble(void * _me) {
  VFiber * me = _me;

  uint64_t ret = me->startup_func(me, me->startup_data);

  VFiberExit(me->context, me, ret);
}

VFiber * VPushFiber(VFiberContext * context, VFiber * me, uint64_t (*func)(VFiber * me, void * data), void *data) {
  // volatile prevents longjmp clobbering
  VFiber * volatile fiber = VStackPop(&context->blank_fiber_stack);
  if(!fiber)
    fiber = malloc(sizeof(VFiber));
  memset(fiber, 0, sizeof *fiber);

  fiber->context = context;
  fiber->stack = NULL;
  fiber->stacksize = 0;
  fiber->startup_func = func;
  fiber->startup_data = data;
  fiber->state.regs.rip = (uint64_t)(void*)VFiberStart;
  fiber->state.regs.rsp = (uint64_t)(NULL);
  fiber->state.regs.r12 = (uint64_t)(void*)VFiberPreamble;
  fiber->state.regs.r13 = (uint64_t)fiber;
  atomic_store(&fiber->state.running, false);
  atomic_store(&fiber->status, FIBER_NORMAL);
  atomic_store(&fiber->waiter, NULL);

#ifdef _WIN64
  MyCreateFiber(&fiber->state, NULL, NULL, NULL);
#endif

  // We do continuation stealing, so we immediately
  // jump into the worker: this minimizes the number
  // of fibers in the queue. If we instead pushed the
  // worker, we would for a parallel for push all them
  // to the thread which would be bad
  VAllocFiberStack(context, fiber);
  VQueuePush(&context->queue, me);
  VSwitchFiber(&fiber->state, &me->state);

#ifdef __linux__
  pthread_mutex_lock(&context->mutex);
  pthread_cond_signal(&context->sleeper_cond);
  pthread_mutex_unlock(&context->mutex);
#endif
#ifdef _WIN64
  EnterCriticalSection(&context->mutex);
  WakeConditionVariable(&context->sleeper_cond);
  LeaveCriticalSection(&context->mutex);
#endif

  return fiber;
}

int VSleeperFiberYield(VFiber * me) {
  VFiberContext * context = me->context;

  VFiber const * fiber = VFiberSelect(context, false);
  volatile int ret = atomic_load(&context->fiber_signal);
  if(!fiber && !ret) {
#ifdef __linux__
    pthread_mutex_lock(&context->mutex);
    struct timespec waittime;
    waittime.tv_sec = 0;
    waittime.tv_nsec = 10000;
    while(!ret && !fiber) {
      pthread_cond_timedwait(&context->sleeper_cond, &context->mutex, &waittime);
      ret = atomic_load(&context->fiber_signal);
      fiber = VFiberSelect(context, false);
    }
    pthread_mutex_unlock(&context->mutex);
#endif
#ifdef _WIN64
    EnterCriticalSection(&context->mutex);
    ret = atomic_load(&context->fiber_signal);
    while(!ret && !fiber) {
      SleepConditionVariableCS(&context->sleeper_cond, &context->mutex, +1);
      ret = atomic_load(&context->fiber_signal);
      fiber = VFiberSelect(context, false);
    }
    LeaveCriticalSection(&context->mutex);
#endif
  }
  if(fiber) {
    VQueuePush(&context->sleeper_queue, me);
    VSwitchFiber(&fiber->state, &me->state);
    ret = atomic_load(&context->fiber_signal);
  }

  return ret;
}

#ifdef __linux__
static void *
#endif
#ifdef _WIN64
static DWORD
#endif
VSleeperFiberMain(void * _data) {
  VFiberWorkerData * data = _data;

#ifdef __linux__
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
  pthread_t myid = pthread_self();
#endif

#ifdef _WIN64
  MyConvertToFiber(&data->me.state);

  int exit = 0;
  while(!exit) {
    exit = VSleeperFiberYield(&data->me);
  }

  MyConvertFromFiber();
  DWORD myid = GetCurrentThreadId();
#endif

  VFiberContext * context = data->me.context;
  if(myid == context->threads[context->num_worker_threads].id) {
    atomic_store(&context->main_thread_fiber, &data->me);

    VFiber * main_fiber = NULL;
    while(!(main_fiber = atomic_load(&context->main_fiber)))
      __builtin_ia32_pause();
    
    VSwitchFiber(&main_fiber->state, &data->me.state);
  }

#ifdef __linux__
  return NULL;
#endif
#ifdef _WIN64
  return 0;
#endif
}

#define HINULL ((void*)(~0ULL))
VFiber * VLaunchFiberWorkers(VFiberContext ** context_out, int numthreads, size_t stacksize) {
  size_t context_size = sizeof(VFiberContext) + (1+numthreads)*sizeof(VFiberWorkerData);
  VFiberContext * context = *context_out = malloc(context_size);
  memset(context, 0, context_size);
#ifdef __linux__
  pthread_cond_init(&context->sleeper_cond, NULL);
  pthread_mutex_init(&context->mutex, NULL);
#endif
#ifdef _WIN64
  InitializeCriticalSection(&context->mutex);
  InitializeConditionVariable(&context->sleeper_cond);
#endif

  context->stacksize = stacksize;
  VStackInit(&context->stackstack);
  VStackInit(&context->blank_fiber_stack);
  VQueueInit(&context->queue);
  VQueueInit(&context->sleeper_queue);
  atomic_store(&context->fiber_signal, 0);
  atomic_store(&context->main_fiber, NULL);
  atomic_store(&context->main_thread_fiber, NULL);
  context->num_worker_threads = numthreads;

  VFiberWorkerData * main_fiber = &context->threads[numthreads];
  memset(main_fiber, 0, sizeof(VFiberWorkerData));
  atomic_store(&main_fiber->me.state.running, true);
  atomic_store(&main_fiber->me.status, FIBER_NORMAL);
  atomic_store(&main_fiber->me.waiter, NULL);
  main_fiber->me.stack = HINULL;
  main_fiber->me.state.signal_stack = (uint64_t)context->signal_stack;

#ifdef __linux__
  main_fiber->id = pthread_self();
#endif
#ifdef _WIN64
  main_fiber->id = GetCurrentThreadId();
  main_fiber->handle = NULL;
  MyConvertToFiber(&main_fiber->me.state);
#endif

  for(int i = 0; i < numthreads; i++) {
    context->threads[i].context = context;
    memset(&context->threads[i].me, 0, sizeof context->threads[i].me);
    context->threads[i].me.context = context;
    context->threads[i].me.stack = HINULL;
    atomic_store(&context->threads[i].me.state.running, true);
    atomic_store(&context->threads[i].me.waiter, NULL);
    atomic_store(&context->threads[i].me.status, FIBER_NORMAL);

#ifdef __linux__
    int ret = pthread_create(&context->threads[i].id, NULL, VSleeperFiberMain, &context->threads[i]);
    bool ok = !ret;
#endif
#ifdef _WIN64
    HANDLE tid = context->threads[i].handle = CreateThread(NULL, 1024 * 1024 * 2, VSleeperFiberMain, &context->threads[i], 0, &context->threads[i].id);
    bool ok = tid;
#endif
    if(!ok) {
      fprintf(stderr, "Couldn't create requested number of fiber works. Time to die!\n");
      fflush(stderr);
      abort();
    }
  }
  return &main_fiber->me;
}

void VCloseFiberWorkers(VFiber * me, VFiberContext * context) {
#ifdef __linux__
  pthread_mutex_lock(&context->mutex);
  atomic_store(&context->fiber_signal, 1);
  pthread_cond_broadcast(&context->sleeper_cond);
  pthread_mutex_unlock(&context->mutex);

  pthread_t myid = pthread_self();
#endif
#ifdef _WIN64
  MyConvertFromFiber();

  EnterCriticalSection(&context->mutex);
  atomic_store(&context->fiber_signal, 1);
  WakeAllConditionVariable(&context->sleeper_cond);
  LeaveCriticalSection(&context->mutex);

  DWORD myid = GetCurrentThreadId();
#endif

  // switch back to the main thread so we can properly close all the others
  // and be back on the main thread which may have some special features
  if(myid != context->threads[context->num_worker_threads].id) {
    atomic_store(&context->main_fiber, me);

    VFiber * main_thread_fiber = NULL;
    while(!(main_thread_fiber = atomic_load(&context->main_thread_fiber)))
      __builtin_ia32_pause();
    
    VSwitchFiber(&main_thread_fiber->state, &me->state);

#ifdef __linux__
    myid = pthread_self();
#endif
#ifdef _WIN64
    myid = GetCurrentThreadId();
#endif
  }

#ifdef __linux__
  for(int i = 0; i < context->num_worker_threads; i++) {
    assert(context->threads[i].id != myid);
    int err = pthread_join(context->threads[i].id, NULL);
    assert(!err);
  }
  pthread_cond_destroy(&context->sleeper_cond);
  pthread_mutex_destroy(&context->mutex);
#endif

#ifdef _WIN64
  for(int i = 0; i < context->num_worker_threads; i++) {
    assert(context->threads[i].id != myid);

    WaitForSingleObject(context->threads[i].handle, -1);
    CloseHandle(context->threads[i].handle);
  }



  DeleteCriticalSection(&context->mutex);
#endif
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
  myassert(!atomic_load(&lock->queue_busy));
  myassert(lock->now_serving == lock->next_ticket);
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

#ifdef __linux__
    pthread_mutex_lock(&context->mutex);
    pthread_cond_signal(&context->sleeper_cond);
    pthread_mutex_unlock(&context->mutex);
#endif
#ifdef _WIN64
    EnterCriticalSection(&context->mutex);
    WakeConditionVariable(&context->sleeper_cond);
    LeaveCriticalSection(&context->mutex);
#endif
  }
}
