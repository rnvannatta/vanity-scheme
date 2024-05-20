#ifndef WACKY_PRIVATE_H
#define WACKY_PRIVATE_H

#include <stdint.h>
#include <xmmintrin.h>

void * VLoadFunction(VRuntime * runtime, VWORD name);
SYSV_CALL void VApplyForeignFunctionImpl(V_CORE_ARGS, VWORD k, VWORD func, VWORD return_type, VWORD arg_types, VWORD args);
SYSV_CALL void VLoadForeignFunctionImpl(V_CORE_ARGS, VWORD k, VWORD name);
#ifdef __linux__
typedef struct VFuncallRegisters {
  void * funptr; // 0
  uint64_t rax; // 8

  union {
    struct {
      uint64_t rdi; // 16
      uint64_t rsi; // 24
      uint64_t rdx; // 32
      uint64_t rcx; // 40
      uint64_t r8;  // 48
      uint64_t r9;  // 56
    };
    uint64_t gprs[6];
    };

    union {
      struct {
        __m128 xmm0; // 64
        __m128 xmm1; // 80
        __m128 xmm2; // 96
        __m128 xmm3; // 112
        __m128 xmm4; // 128
        __m128 xmm5; // 144
        __m128 xmm6; // 160
        __m128 xmm7; // 176
      };
      __m128 fprs[8];
    };

    uint64_t stacklen; // 192
    char stack[];      // 200
} VFuncallRegisters;

void VFfiCallImpl(VFuncallRegisters * regs);
#endif
#ifdef _WIN64
typedef struct VFuncallRegisters {
  void * funptr; // 0
  uint64_t rax; // 8

  union {
    struct {
      uint64_t rcx; // 16
      uint64_t rdx; // 24
      uint64_t r8;  // 32
      uint64_t r9;  // 40
    };
    uint64_t gprs[4];
    };

    union {
      struct {
        __m128 xmm0; // 48
        __m128 xmm1; // 64
        __m128 xmm2; // 80
        __m128 xmm3; // 96
      };
      __m128 fprs[4];
    };

    uint64_t stacklen; // 112
    char stack[];      // 120
} VFuncallRegisters;

void VFfiCallImpl(VFuncallRegisters * regs);
#endif

#endif
