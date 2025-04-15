#pragma once

#ifdef VANITY_PURE_C
#include <setjmp.h>
typedef struct VRegisters { int _; } VRegisters;

#define VJmpBuf jmp_buf
#define VSetJmp setjmp
#define VLongJmp longjmp

#elif defined(__linux__)
#include <setjmp.h>

typedef struct VRegisters {
  uint64_t rip;
  uint64_t rsp;

  uint64_t rbx;
  uint64_t rbp;

  uint64_t r12;
  uint64_t r13;
  uint64_t r14;
  uint64_t r15;
} VRegisters;
static_assert(sizeof(struct VRegisters) == 64);

#define VJmpBuf jmp_buf
#define VSetJmp setjmp
#define VLongJmp longjmp

#elif defined(_WIN64)
// Thank you for the stack unwinding that causes stack overflows, Windows
#include <xmmintrin.h>
typedef struct VRegisters {
  uint64_t rip;
  uint64_t rsp;

  uint64_t rbx;
  uint64_t rbp;

  uint64_t rdi;
  uint64_t rsi;

  uint64_t r12;
  uint64_t r13;
  uint64_t r14;
  uint64_t r15;

  __m128 xmm6;
  __m128 xmm7;
  __m128 xmm8;
  __m128 xmm9;
  __m128 xmm10;
  __m128 xmm11;
  __m128 xmm12;
  __m128 xmm13;
  __m128 xmm14;
  __m128 xmm15;
} VRegisters;
typedef VRegisters VJmpBuf[1];
static_assert(sizeof(struct VRegisters) == 240);

__attribute__((returns_twice)) int VSetJmp(struct VRegisters buf[1]);
void VLongJmp(struct VRegisters buf[1], int ret);
#endif
