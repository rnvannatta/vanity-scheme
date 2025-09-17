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
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include "vscheme/vhash.h"
#include <assert.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include "vanity/dfile.h"
#include "vport_private.h"

#ifdef __linux__
#endif
#ifdef _WIN64
#include "fileapi.h"
#include "errhandlingapi.h"
#endif

// only used by call/cc. maybe we should move call/cc to runtime.c
// it's a pretty goofy function that's kind of fundamental
#include "vruntime_private.h"

// TMP TMP
#ifndef V_BEGIN_FUNC_BASIC
#define V_BEGIN_FUNC_BASIC(name, scmname, nargs, ...) \
  VWORD _VBasic_ ## name(VRuntime * runtime, VEnv * statics __VA_OPT__(MAP(V_ADD_WORD, __VA_ARGS__))); \
  V_BEGIN_FUNC(name, scmname, (nargs)+1, k __VA_OPT__(,) __VA_ARGS__) \
    VWORD ret = _VBasic_ ## name(runtime, statics __VA_OPT__(,) __VA_ARGS__); \
    V_BOUNCE(k, runtime, ret); \
  V_END_FUNC \
  void _VBasic_ ## name(VRuntime * runtime, VEnv * statics __VA_OPT__(MAP(V_ADD_WORD, __VA_ARGS__))) {
#endif
// TMP TMP

/////////////////////////////////////////////////////////

V_BEGIN_FUNC(VExact, "exact", 2, k, x)
  uint64_t type = VWordType(x);
  if(type == VIMM_INT) {
    V_BOUNCE(k, runtime, x);
  } else if(type == VIMM_NUMBER) {
    V_BOUNCE(k, runtime, VEncodeInt((int)VDecodeNumber(x)));
  } else {
    VErrorC(runtime, "exact: not a number: ~S", x);
  }
V_END_FUNC

V_BEGIN_FUNC(VInexact, "inexact", 2, k, x)
  uint64_t type = VWordType(x);
  if(type == VIMM_INT) {
    V_BOUNCE(k, runtime, VEncodeNumber((double)VDecodeInt(x)));
  } else if(type == VIMM_NUMBER) {
    V_BOUNCE(k, runtime, x);
  } else {
    VErrorC(runtime, "exact: not a number: ~S", x);
  }
V_END_FUNC

VWORD _VBasic_VAdd_Binary(VRuntime * runtime, VEnv * statics, VWORD a, VWORD b) {
  bool exact = true;
  double dacc = 0;
  int64_t iacc = 0;
  for(int i = 0; i < 2; i++)
  {
    VWORD v = i ? b : a;
    uint64_t type = VWordType(v);
    if(type == VIMM_INT) {
      iacc += VDecodeInt(v);
    } else if(type == VIMM_NUMBER) {
      exact = false;
      dacc += VDecodeNumber(v);
    } else {
      VErrorC(runtime, "+: not a number: ~S", v);
    }
  }
  VWORD ret;
  if(exact && (iacc > INT32_MAX || iacc < INT32_MIN)) {
    VErrorC(runtime, "+: integer overflow");
  }

  if(exact)
    ret = VEncodeInt(iacc);
  else
    ret = VEncodeNumber(iacc+dacc);
  return ret;
}
VWORD _VBasic_VNeg(VRuntime * runtime, VEnv * statics, VWORD x) {
  bool exact = true;
  double dacc = 0;
  int64_t iacc = 0;
  {
    uint64_t type = VWordType(x);
    if(type == VIMM_INT) {
      iacc = VDecodeInt(x);
    } else if(type == VIMM_NUMBER) {
      exact = false;
      dacc = VDecodeNumber(x);
    } else {
      VErrorC(runtime, "-: not a number: ~S", x);
    }
  }
  // performs the -x op
  iacc = -iacc;
  dacc = -dacc;
  {
    VWORD ret;
    if(exact && (iacc > INT32_MAX || iacc < INT32_MIN)) {
      VErrorC(runtime, "-: integer overflow");
    }

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    return ret;
  }
}
VWORD _VBasic_VSub_Binary(VRuntime * runtime, VEnv * statics, VWORD x, VWORD y) {
  bool exact = true;
  double dacc = 0;
  int64_t iacc = 0;
  {
    uint64_t type = VWordType(x);
    if(type == VIMM_INT) {
      iacc = VDecodeInt(x);
    } else if(type == VIMM_NUMBER) {
      exact = false;
      dacc = VDecodeNumber(x);
    } else {
      VErrorC(runtime, "-: not a number: ~S", x);
    }
  }
  // performs x0 - x1 - x2 - x3 ...
  {
    VWORD v = y;
    uint64_t type = VWordType(v);
    if(type == VIMM_INT) {
      iacc -= VDecodeInt(v);
    } else if(type == VIMM_NUMBER) {
      exact = false;
      dacc -= VDecodeNumber(v);
    } else {
      VErrorC(runtime, "-: not a number: ~S", v);
    }
  }
  {
    VWORD ret;
    if(exact && (iacc > INT32_MAX || iacc < INT32_MIN)) {
      VErrorC(runtime, "-: integer overflow");
    }

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    return ret;
  }
}
VWORD _VBasic_VMul_Binary(VRuntime * runtime, VEnv * statics, VWORD a, VWORD b) {
  bool exact = true;
  double dacc = 1;
  int64_t iacc = 1;
  for(unsigned i = 0; i < 2; i++) {
    VWORD v = i ? b : a;
    uint64_t type = VWordType(v);
    if(type == VIMM_INT) {
      iacc *= VDecodeInt(v);
      if(exact && (iacc > INT32_MAX || iacc < INT32_MIN)) {
        VErrorC(runtime, "*: integer overflow");
      }
      if(iacc > INT32_MAX || iacc < INT32_MIN) {
        exact = false;
        dacc *= iacc;
        iacc = 1;
      }
    } else if(type == VIMM_NUMBER) {
      exact = false;
      dacc *= VDecodeNumber(v);
    } else {
      VErrorC(runtime, "*: not a number: ~S", v);
    }
  }
  VWORD ret;
  if(exact)
    ret = VEncodeInt(iacc);
  else
    ret = VEncodeNumber(iacc*dacc);
  return ret;
}
VWORD _VBasic_VRcp(VRuntime * runtime, VEnv * statics, VWORD x) {
  bool exact = true;
  double dacc = 1;
  int64_t iacc = 1;
  {
    uint64_t type = VWordType(x);
    if(type == VIMM_INT) {
      iacc = VDecodeInt(x);
    } else if(type == VIMM_NUMBER) {
      exact = false;
      dacc = VDecodeNumber(x);
    } else {
      VErrorC(runtime, "/: not a number: ~S", x);
    }
  }
  // performs the 1/x op
  if(iacc != 1) {
    dacc = iacc;
    iacc = 1;
    exact = false;
  }
  dacc = 1.0/dacc;
  {
    VWORD ret;
    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc*dacc);
    return ret;
  }
}
VWORD _VBasic_VDiv_Binary(VRuntime * runtime, VEnv * statics, VWORD a, VWORD b) {
  bool exact = true;
  double dacc = 1;
  int64_t iacc = 1;
  {
    uint64_t type = VWordType(a);
    if(type == VIMM_INT) {
      iacc = VDecodeInt(a);
    } else if(type == VIMM_NUMBER) {
      exact = false;
      dacc = VDecodeNumber(a);
    } else {
      VErrorC(runtime, "/: not a number: ~S", a);
    }
  }
  {
    VWORD v = b;
    uint64_t type = VWordType(v);
    if(type == VIMM_INT) {
      int i = VDecodeInt(v);
      if(iacc % i == 0) {
        iacc /= i;
      } else {
        exact = false;
        dacc /= i;
      }
    } else if(type == VIMM_NUMBER) {
      exact = false;
      dacc /= VDecodeNumber(v);
    } else {
      VErrorC(runtime, "/: not a number: ~S", v);
    }
  }
  {
    VWORD ret;
    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc*dacc);
    return ret;
  }
}

#ifdef VANITY_PURE_C
V_BEGIN_FUNC_MIN(VAdd2, "+", 1, k)
#else
SYSV_CALL __attribute__((used)) static V_BEGIN_FUNC_MIN(VAdd2CaseVarargs, "+", 1, k)
#endif
  V_ARG_MIN3(runtime, "+", 1, argc);
  bool exact = true;
  double dacc = 0;
  int64_t iacc = 0;
  for(int i = 1; i < argc; i++) {
    VWORD v = self->vars[i];
    uint64_t type = VWordType(v);
    if(type == VIMM_INT) {
      iacc += VDecodeInt(v);
    } else if(type == VIMM_NUMBER) {
      exact = false;
      dacc += VDecodeNumber(v);
    } else {
      VErrorC(runtime, "+: not a number: ~S", v);
    }
  }
  VWORD ret;
  if(exact && (iacc > INT32_MAX || iacc < INT32_MIN)) {
    VErrorC(runtime, "+: integer overflow");
  }

  if(exact)
    ret = VEncodeInt(iacc);
  else
    ret = VEncodeNumber(iacc+dacc);
  V_BOUNCE(k, runtime, ret);
V_END_FUNC

#ifndef VANITY_PURE_C
SYSV_CALL __attribute__((used)) static void VAddBinary(V_CORE_ARGS, VWORD k, VWORD a, VWORD b) {
  VWORD ret = _VBasic_VAdd_Binary(runtime, statics, a, b);
  V_BOUNCE(k, runtime, ret);
}

SYSV_CALL void VAdd2(V_CORE_ARGS, VWORD k, ...);
asm(
".intel_syntax noprefix\n"
".globl VAdd2\n"
#ifdef __linux__
".type VAdd2, @function\n"
#endif
"VAdd2:\n"
" cmp " ARGC_REG ", 3\n"
" je VAddBinary\n"
" jmp VAdd2CaseVarargs\n"
);
#endif

#ifdef VANITY_PURE_C
V_BEGIN_FUNC_MIN(VSub2, "-", 2, k, x)
#else
SYSV_CALL __attribute__((used)) static V_BEGIN_FUNC_MIN(VSub2CaseVarargs, "-", 2, k, x)
#endif
  bool exact = true;
  double dacc = 0;
  int64_t iacc = 0;
  {
    uint64_t type = VWordType(x);
    if(type == VIMM_INT) {
      iacc += VDecodeInt(x);
    } else if(type == VIMM_NUMBER) {
      exact = false;
      dacc += VDecodeNumber(x);
    } else {
      VErrorC(runtime, "-: not a number: ~S", x);
    }
  }
  // performs the -x op
  if(argc == 2) {
    iacc = -iacc;
    dacc = -dacc;
    goto end;
  }
  // performs x0 - x1 - x2 - x3 ...
  for(int i = 2; i < argc; i++) {
    VWORD v = self->vars[i];
    uint64_t type = VWordType(v);
    if(type == VIMM_INT) {
      iacc -= VDecodeInt(v);
    } else if(type == VIMM_NUMBER) {
      exact = false;
      dacc -= VDecodeNumber(v);
    } else {
      VErrorC(runtime, "-: not a number: ~S", v);
    }
  }
end:
  {
    VWORD ret;
    if(exact && (iacc > INT32_MAX || iacc < INT32_MIN)) {
      VErrorC(runtime, "-: integer overflow");
    }

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    V_BOUNCE(k, runtime, ret);
  }
V_END_FUNC

#ifndef VANITY_PURE_C
SYSV_CALL __attribute__((used)) static void VSub2Case2(V_CORE_ARGS, VWORD k, VWORD a, VWORD b) {
    bool exact = true;
    double dacc = 0;
    int64_t iacc = 0;
    {
      uint64_t type = VWordType(a);
      if(type == VIMM_INT) {
        iacc += VDecodeInt(a);
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc += VDecodeNumber(a);
      } else {
        VErrorC(runtime, "-: not a number ~S", a);
      }
    }
    {
      uint64_t type = VWordType(b);
      if(type == VIMM_INT) {
        iacc -= VDecodeInt(b);
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc -= VDecodeNumber(b);
      } else {
        VErrorC(runtime, "-: not a number ~S", b);
      }
    }
    VWORD ret;
    if(exact && (iacc > INT32_MAX || iacc < INT32_MIN)) {
      VErrorC(runtime, "-: integer overflow");
    }

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    V_BOUNCE(k, runtime, ret);
}

SYSV_CALL void VSub2(V_CORE_ARGS, VWORD k, VWORD x, ...);
asm(
".intel_syntax noprefix\n"
".globl VSub2\n"
#ifdef __linux__
".type VSub2, @function\n"
#endif
"VSub2:\n"
" cmp " ARGC_REG ", 3\n"
" je VSub2Case2\n"
" jmp VSub2CaseVarargs\n"
);
#endif

V_BEGIN_FUNC_MIN(VMul2, "*", 1, k)
    bool exact = true;
    double dacc = 1;
    int64_t iacc = 1;
    //va_list args;
    //va_start(args, k);
    for(unsigned i = 1; i < argc; i++) {
      //VWORD v = va_arg(args, VWORD);
      VWORD v = self->vars[i];
      uint64_t type = VWordType(v);
      if(type == VIMM_INT) {
        iacc *= VDecodeInt(v);
        if(exact && (iacc > INT32_MAX || iacc < INT32_MIN)) {
          VErrorC(runtime, "*: integer overflow");
        }
        if(iacc > INT32_MAX || iacc < INT32_MIN) {
          exact = false;
          dacc *= iacc;
          iacc = 1;
        }
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc *= VDecodeNumber(v);
      } else {
        VErrorC(runtime, "*: not a number: ~S", v);
      }
    }
    VWORD ret;
    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc*dacc);
    V_BOUNCE(k, runtime, ret);
V_END_FUNC

V_BEGIN_FUNC_MIN(VDiv2, "/", 2, k, x)
    bool exact = true;
    double dacc = 1;
    int64_t iacc = 1;
    {
      uint64_t type = VWordType(x);
      if(type == VIMM_INT) {
        iacc = VDecodeInt(x);
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc = VDecodeNumber(x);
      } else {
        VErrorC(runtime, "/: not a number: ~S", x);
      }
    }
    // performs the 1/x op
    if(argc == 2) {
      if(iacc != 1) {
        dacc = iacc;
        iacc = 1;
        exact = false;
      }
      dacc = 1.0/dacc;
      goto end;
    }
    // performs x0 / (x1 * x2 * x3 ...)
    //va_list args;
    //va_start(args, x);
    for(unsigned i = 2; i < argc; i++) {
      //VWORD v = va_arg(args, VWORD);
      VWORD v = self->vars[i];
      uint64_t type = VWordType(v);
      if(type == VIMM_INT) {
        int i = VDecodeInt(v);
        if(iacc % i == 0) {
          iacc /= i;
        } else {
          exact = false;
          dacc /= i;
        }
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc /= VDecodeNumber(v);
      } else {
        VErrorC(runtime, "/: not a number: ~S", v);
      }
    }
    //va_end(args);
end:
    {
      VWORD ret;
      if(exact)
        ret = VEncodeInt(iacc);
      else
        ret = VEncodeNumber(iacc*dacc);
      V_BOUNCE(k, runtime, ret);
    }
V_END_FUNC

V_BEGIN_FUNC(VQuot2, "quotient", 3, k, x, y)
    V_BOUNCE(k, runtime, VEncodeInt(VCheckedDecodeInt2(runtime, x, "quotient") / VCheckedDecodeInt2(runtime, y, "quotient")));
V_END_FUNC

V_BEGIN_FUNC(VRem2, "remainder", 3, k, x, y)
    V_BOUNCE(k, runtime, VEncodeInt(VCheckedDecodeInt2(runtime, x, "remainder") % VCheckedDecodeInt2(runtime, y, "remainder")));
V_END_FUNC

// This feels fucking idiotic.
V_BEGIN_FUNC(VCmp2, "cmp", 3, k, x, y)
  double a, b;
  if(isnan(a=VDecodeNumber(x))) {
    if(VWordType(x) != VIMM_INT)
      VErrorC(runtime, "cmp: not a number ~A", x);
    a = (double)VDecodeInt(x);
  }
  if(isnan(b=VDecodeNumber(y))) {
    if(VWordType(y) != VIMM_INT)
      VErrorC(runtime, "cmp: not a number ~A", y);
    b = (double)VDecodeInt(y);
  }

  double diff = a - b;
  int ret = diff  > 0.0 ? 1
          : diff == 0.0 ? 0
          : -1 ;

  V_BOUNCE(k, runtime, VEncodeInt(ret));
V_END_FUNC

//VWORD _VBasic_VAdd_Binary(VRuntime * runtime, VEnv * statics, VWORD a, VWORD b) {
#define V_IMPLEMENT_COMPARE_BASIC_BINARY(op, Name, scm_name) \
  VWORD _VBasic_ ## Name ## _Binary(VRuntime * runtime, VEnv * statics, VWORD _a, VWORD _b) { \
    double a, b; \
    if(VIsDouble(_a)) a = VDecodeNumber(_a); \
    else if(VWordType(_a) == VIMM_INT) a = (double)VDecodeInt(_a); \
    else a = 0, VErrorC(runtime, scm_name ": not a number ~A", _a); \
    \
    if(VIsDouble(_b)) b = VDecodeNumber(_b); \
    else if(VWordType(_b) == VIMM_INT) b = (double)VDecodeInt(_b); \
    else b = 0, VErrorC(runtime, scm_name ": not a number ~A", _b); \
    return VEncodeBool((a op b)); \
  }
#define V_IMPLEMENT_COMPARE_PUREC(op, Name, scm_name) \
  V_BEGIN_FUNC_MIN(Name, scm_name, 3, k, _a, _b) \
    double a, b; \
    if(VIsDouble(_a)) a = VDecodeNumber(_a); \
    else if(VWordType(_a) == VIMM_INT) a = (double)VDecodeInt(_a); \
    else a = 0, VErrorC(runtime, scm_name ": arg 1 not a number ~A", _a); \
    \
    if(VIsDouble(_b)) b = VDecodeNumber(_b); \
    else if(VWordType(_b) == VIMM_INT) b = (double)VDecodeInt(_b); \
    else b = 0, VErrorC(runtime, scm_name ": arg 2 not a number ~A", _b); \
    \
    if(!(a op b)) V_BOUNCE(k, runtime, VFALSE); \
    \
    for(int i = 3; i < argc; i++) { \
      a = b; \
      _b = self->vars[i]; \
      if(VIsDouble(_b)) b = VDecodeNumber(_b); \
      else if(VWordType(_b) == VIMM_INT) b = (double)VDecodeInt(_b); \
      else VErrorC(runtime, scm_name ": arg ~D not a number ~A", argc - 1, _b); \
      if(!(a op b)) V_BOUNCE(k, runtime, VFALSE); \
    } \
    V_BOUNCE(k, runtime, VTRUE); \
  V_END_FUNC
#define V_IMPLEMENT_COMPARE_FAST_BINARY(op, Name, scm_name) \
  SYSV_CALL __attribute__((used)) static void Name ## _Binary(V_CORE_ARGS, VWORD k, VWORD a, VWORD b) { \
    VWORD ret = _VBasic_ ## Name ## _Binary(runtime, statics, a, b); \
    V_BOUNCE(k, runtime, ret); \
  } \

#define V_IMPLEMENT_COMPARE_FAST_SYSV_X64(op, Name, scm_name) \
  SYSV_CALL void Name(V_CORE_ARGS, VWORD k, VWORD a, VWORD b, ...); \
  asm( \
  ".intel_syntax noprefix\n" \
  ".globl " # Name "\n" \
  ".type " # Name ", @function\n" \
  # Name ":\n" \
  " cmp " ARGC_REG ", 3\n" \
  " je " # Name "_Binary\n" \
  " jmp " # Name "_Varargs\n" \
  );
#define V_IMPLEMENT_COMPARE_FAST_WINDOWS_X64(op, Name, scm_name) \
  SYSV_CALL void Name(V_CORE_ARGS, VWORD k, VWORD a, VWORD b, ...); \
  asm( \
  ".intel_syntax noprefix\n" \
  ".globl " # Name "\n" \
  # Name ":\n" \
  " cmp " ARGC_REG ", 3\n" \
  " je " # Name "_Binary\n" \
  " jmp " # Name "_Varargs\n" \
  );

#ifdef VANITY_PURE_C

#define V_IMPLEMENT_COMPARE(op, Name, scm_name) \
  V_IMPLEMENT_COMPARE_BASIC_BINARY(op, Name, scm_name) \
  V_IMPLEMENT_COMPARE_PUREC(op, Name, scm_name)

#elif defined(__linux__)

#define V_IMPLEMENT_COMPARE(op, Name, scm_name) \
  V_IMPLEMENT_COMPARE_BASIC_BINARY(op, Name, scm_name) \
  V_IMPLEMENT_COMPARE_FAST_BINARY(op, Name, scm_name) \
  SYSV_CALL __attribute__((used)) static V_IMPLEMENT_COMPARE_PUREC(op, Name ## _Varargs, scm_name) \
  V_IMPLEMENT_COMPARE_FAST_SYSV_X64(op, Name, scm_name) \

#elif defined(_WIN64)

#define V_IMPLEMENT_COMPARE(op, Name, scm_name) \
  V_IMPLEMENT_COMPARE_BASIC_BINARY(op, Name, scm_name) \
  V_IMPLEMENT_COMPARE_FAST_BINARY(op, Name, scm_name) \
  SYSV_CALL __attribute__((used)) static V_IMPLEMENT_COMPARE_PUREC(op, Name ## _Varargs, scm_name) \
  V_IMPLEMENT_COMPARE_FAST_WINDOWS_X64(op, Name, scm_name) \

#endif

V_IMPLEMENT_COMPARE(<, VCmpLt, "<")
V_IMPLEMENT_COMPARE(<=, VCmpLe, "<=")
V_IMPLEMENT_COMPARE(==, VCmpEq, "=")
V_IMPLEMENT_COMPARE(>=, VCmpGe, ">=")
V_IMPLEMENT_COMPARE(>, VCmpGt, ">")

// type predicates
V_BEGIN_FUNC_BASIC(VNullP2, "null?", 1, x)
  return VEncodeBool(VBits(x) == VBits(VNULL));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VEofP2, "eof-object?", 1, x)
  return VEncodeBool(VBits(x) == VBits(VEOF));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VPairP2, "pair?", 1, x)
  return VEncodeBool(VWordType(x) == VPOINTER_PAIR);
V_END_FUNC

V_BEGIN_FUNC_BASIC(VVectorP2, "vector?", 1, x)
  return VEncodeBool(VIsVector(x));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VRecordP2, "record?", 1, x)
  return VEncodeBool(VIsRecord(x));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VHashTableP, "hash-table?", 1, x)
  return VEncodeBool(VIsHashTable(x));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VProcedureP2, "procedure?", 1, x)
  return VEncodeBool(VWordType(x) == VPOINTER_CLOSURE);
V_END_FUNC

V_BEGIN_FUNC_BASIC(VBlobP2, "blob?", 1, x)
  return VEncodeBool(VIsBlob(x));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VSymbolP2, "symbol?", 1, x)
  return VEncodeBool(VIsSymbol(x));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VStringP2, "string?", 1, x)
  return VEncodeBool(VIsString(x));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VDoubleP2, "double?", 1, x)
  return VEncodeBool(VIsNumber(x));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VIntP2, "int?", 1, x)
  return VEncodeBool(VWordType(x) == VIMM_INT);
V_END_FUNC

V_BEGIN_FUNC_BASIC(VCharP2, "char?", 1, x)
  return VEncodeBool(VWordType(x) == VIMM_CHAR);
V_END_FUNC

V_BEGIN_FUNC_BASIC(VVoidP2, "##vcore.void?", 1, x)
  return VEncodeBool(VBits(x) == VBits(VVOID));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VNullptrP2, "##vcore.nullptr?", 1, x)
  return VEncodeBool(VBits(x) == VBits(VNULLPTR));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VForeignPointerP2, "##vcore.foreign-pointer?", 1, x)
  return VEncodeBool(VWordType(x) == VPOINTER_FOREIGN);
V_END_FUNC


// equality
V_BEGIN_FUNC(VEq2, "eq?", 3, k, x, y)
  V_BOUNCE(k, runtime, VInlineEq2(runtime, x, y));
V_END_FUNC

V_BEGIN_FUNC(VSymbolEqv2, "symbol=?", 3, k, x, y)
  V_BOUNCE(k, runtime, VInlineSymbolEqv2(runtime, x, y));
V_END_FUNC

V_BEGIN_FUNC(VBlobEqv2, "blob=?", 3, k, x, y)
  bool ret = false;
  if(VIsEq(x, y)) {
    ret = true;
  } else {
    VBlob * blob_a = VCheckedDecodeBlob2(runtime, x, "blob=?");
    VBlob * blob_b = VCheckedDecodeBlob2(runtime, y, "blob=?");
    if(blob_a->len == blob_b->len)
      ret = blob_a->base.tag == blob_b->base.tag && !memcmp(blob_a->buf, blob_b->buf, blob_a->len);
  }
  V_BOUNCE(k, runtime, VEncodeBool(ret));
V_END_FUNC

V_BEGIN_FUNC(VEqv, "eqv?", 3, k, x, y)
  V_BOUNCE(k, runtime, VInlineEqv2(runtime, x, y));
V_END_FUNC

// logic

V_BEGIN_FUNC_BASIC(VNot2, "not", 1, x)
  return VEncodeBool(VBits(x) == VBits(VFALSE));
V_END_FUNC

// pairs

V_BEGIN_FUNC(VCons2, "cons", 3, k, x, y)
    V_BOUNCE(k, runtime, VInlineCons2(runtime, x, y));
}

V_BEGIN_FUNC(VCar2, "car", 2, k, x)
    V_BOUNCE(k, runtime, VInlineCar2(runtime, x));
V_END_FUNC


V_BEGIN_FUNC(VCdr2, "cdr", 2, k, x)
    V_BOUNCE(k, runtime, VInlineCdr2(runtime, x));
V_END_FUNC


// vectors

V_BEGIN_FUNC_RANGE(VMakeVector, "make-vector", 2, 3, k, _len, _fill)
  int len = VCheckedDecodeInt2(runtime, _len, "make-vector");

  VWORD fill = argc == 3 ? _fill : VFALSE;
  VVector * vec = V_ALLOCA_VECTOR2(&runtime, runtime, len);
  if(!vec) VGarbageCollect2Func(runtime, (VFunc)VMakeVector, 3, k, _len, fill);
  vec->base = VMakeSmallObject(VVECTOR);
  vec->len = len;

  for(int i = 0; i < len; i++) {
    vec->arr[i] = fill;
  }
  V_BOUNCE(k, runtime, VEncodePointer(vec, VPOINTER_OTHER));
}
V_BEGIN_FUNC_MIN(VCreateVector, "vector", 1, k)
  int len = argc-1;

  VVector * vec = V_ALLOCA_SMALL_VECTOR(runtime, len);
  vec->base = VMakeSmallObject(VVECTOR);
  vec->len = len;

  for(int i = 0; i < len; i++) {
    vec->arr[i] = self->vars[i+1];
  }
  V_BOUNCE(k, runtime, VEncodePointer(vec, VPOINTER_OTHER));
}
V_BEGIN_FUNC(VListVector2, "list->vector", 2, k, lst)
  int len = 0;
  VWORD v = lst;
  while(VWordType(v) == VPOINTER_PAIR) {
    len++;
    v = VDecodePair(v)->rest;
  }
  if(VBits(v) != VBits(VNULL)) VErrorC(runtime, "list->vector: not a null-terminated list\n");

  VVector * vec = V_ALLOCA_VECTOR2(&runtime, runtime, len);
  if(!vec) VGarbageCollect2Func(runtime, (VFunc)VListVector2, 2, k, lst);
  vec->base = VMakeSmallObject(VVECTOR);
  vec->len = len;

  v = lst;
  int i = 0;
  while(VWordType(v) == VPOINTER_PAIR) {
    VPair * p = VDecodePair(v);
    vec->arr[i++] = p->first;
    v = p->rest;
  }
  V_BOUNCE(k, runtime, VEncodePointer(vec, VPOINTER_OTHER));
}

V_BEGIN_FUNC_BASIC(VVectorRef2, "vector-ref", 2, vector, index)
  VVector * vec = VCheckedDecodeVector2(runtime, vector, "vector-ref");
  if(VWordType(index) != VIMM_INT) VErrorC(runtime, "vector-ref: arg 2 not an int\n");
  int i = VDecodeInt(index);
  if(!(0 <= i && i < vec->len)) VErrorC(runtime, "vector-ref: out of range\n");

  return vec->arr[i];
V_END_FUNC

V_BEGIN_FUNC_BASIC(VVectorLength2, "vector-length", 1, vector)
  VVector * vec = VCheckedDecodeVector2(runtime, vector, "vector-length");
  return VEncodeInt(vec->len);
V_END_FUNC

// records

V_BEGIN_FUNC_MIN(VCreateRecord2, "record", 2, k, type)
  int len = argc-2;
  if(len > 65534) VErrorC(runtime, "record: records with more than 65535 fields not supported\n");

  VVector * rec = V_ALLOCA_SMALL_VECTOR(runtime, len+1);
  rec->base = VMakeSmallObject(VRECORD);
  rec->len = len+1;

  rec->arr[0] = type;
  int i = 1;
  int c = 2;
  int i2 = 2;
  while(c < argc) {
    rec->arr[i++] = self->vars[i2++];
    c++;
  }
  V_BOUNCE(k, runtime, VEncodePointer(rec, VPOINTER_OTHER));
}

V_BEGIN_FUNC_BASIC(VRecordRef2, "record-ref", 2, record, index)
  VVector * rec = VCheckedDecodeRecord2(runtime, record, "record-ref");
  if(VWordType(index) != VIMM_INT) VErrorC(runtime, "record-ref: arg 2 not an int\n");
  int i = VDecodeInt(index);
  if(!(0 <= i && i < rec->len)) VErrorC(runtime, "record-ref: out of range\n");

  return rec->arr[i];
V_END_FUNC

V_BEGIN_FUNC_BASIC(VRecordLength2, "record-length", 1, record)
  VVector * rec = VCheckedDecodeRecord2(runtime, record, "record-length");
  return VEncodeInt(rec->len);
V_END_FUNC

// hashing

static uint64_t VEqHashImpl(VWORD x) {
  return vhash64_quick(VBits(x));
}

static uint64_t VEqvHashImpl(VWORD x) {
  if(VIsSymbol(x)) {
    VBlob * b = VDecodeBlob(x);
    return vhash(b->buf, b->len, 0);
  }
  return vhash64_quick(VBits(x));
}

// hash tables
SYSV_CALL static bool VHashTableSetImpl(VRuntime * runtime, VHashTable * table, VVector * vec, VWORD key, VWORD val, unsigned flags) {
  uint64_t capacity = vec->len / 3;
  uint64_t tries = 0;
  uint64_t hash = (flags & HFLAG_EQ) ? VEqHashImpl(key) : VEqvHashImpl(key);
  uint64_t index = hash & (capacity-1);

  uint64_t poverty = 0;
  bool found = false;

  VTrackHashTable(runtime, table, key);

  while(tries <= capacity) {
    VWORD test = vec->arr[3*index+0];

    if(VBits(key) == VBits(test)) {
      found = true;
      break;
    }
    if((flags & HFLAG_EQV) && VDecodeBool(VInlineEqv2(runtime, key, test))) {
      found = true;
      break;
    }
    if(VBits(test) == VBits(VVOID)) {
      found = false;
      break;
    }

    uint64_t test_poverty = VDecodeInt(vec->arr[3*index+1]); 
    if(poverty > test_poverty) {
      VWORD tmpkey = key;
      VWORD tmppov = VEncodeInt(poverty);
      VWORD tmpval = val;

      key = vec->arr[3*index+0];
      poverty = test_poverty;
      val = vec->arr[3*index+2];

      vec->arr[3*index+0] = tmpkey;
      vec->arr[3*index+1] = tmppov;
      vec->arr[3*index+2] = tmpval;

      VTrackMutation(runtime, vec, &vec->arr[3*index+0], tmpkey);
      // poverty is an int, nothing to track
      VTrackMutation(runtime, vec, &vec->arr[3*index+2], tmpval);
    }

    index = (index + 1) & (capacity-1);
    tries++;
    poverty++;
  }

  vec->arr[3*index+0] = key;
  vec->arr[3*index+1] = VEncodeInt(poverty);
  vec->arr[3*index+2] = val;

  VTrackMutation(runtime, vec, &vec->arr[3*index+0], key);
  // poverty is an int, nothing to track
  VTrackMutation(runtime, vec, &vec->arr[3*index+2], val);

  return found;
}

SYSV_CALL static void VGrowHashTable(VRuntime * runtime, VHashTable * table, int newlen, VVector * vec) {
  if(newlen <= 0) VErrorC(runtime, "hash tables need length > 0");
  if(newlen > INT_MAX/3) VErrorC(runtime, "hash table is too large ~D\n", newlen);
  if(newlen & (newlen-1)) VErrorC(runtime, "hash table needs pow2 length ~D\n", newlen);

  assert(table->occupancy < table->load_factor * newlen);

  vec->base = VMakeSmallObject(VVECTOR);
  vec->len = 3*newlen;
  for(int i = 0; i < newlen; i++) {
    vec->arr[3*i+0] = VVOID;
    vec->arr[3*i+1] = VEncodeInt(0);
    vec->arr[3*i+2] = VVOID;
  }

  VVector * oldvec = VCheckedDecodeVector2(runtime, table->vec, "hash-table-ref");
  VWORD vecword = VEncodePointer(vec, VPOINTER_OTHER);
  table->vec = vecword;
  VTrackMutation(runtime, table, &table->vec, table->vec);
  for(int i = 0; i < oldvec->len/3; i++) {
    if(VBits(oldvec->arr[3*i+0]) == VBits(VVOID))
      continue;
    VWORD key = oldvec->arr[3*i+0];
    VWORD val = oldvec->arr[3*i+2];
    assert(!VHashTableSetImpl(runtime, table, vec, key, val, table->flags));
  }
  table->flags &= ~HFLAG_DIRTY;
}

V_BEGIN_FUNC(VMakeHashTable, "make-hash-table", 4, k, eq, hash, _len)
  VClosure * closure = VCheckedDecodeClosure2(runtime, eq, "make-hash-table");
  if(closure->func != (void*)VEq2 && closure->func != (void*)VEqv)
    VErrorC(runtime, "hash tables currently only support `eq?` and `eqv?` as the comparator\n");

  int len = VCheckedDecodeInt2(runtime, _len, "make-hash-table");
  if(len <= 0) VErrorC(runtime, "hash tables need length > 0");
  if(len > INT_MAX/3) VErrorC(runtime, "hash table is too large ~D\n", len);
  if(len & (len-1)) VErrorC(runtime, "hash table needs pow2 length ~D\n", len);
  VVector * vec = V_ALLOCA_VECTOR2(&runtime, runtime, 3*len);
  if(!vec) VGarbageCollect2Func(runtime, (VFunc)VMakeHashTable, 4, k, eq, hash, _len);
  vec->base = VMakeSmallObject(VVECTOR);
  vec->len = 3*len;
  for(int i = 0; i < len; i++) {
    vec->arr[3*i+0] = VVOID;
    vec->arr[3*i+1] = VEncodeInt(0);
    vec->arr[3*i+2] = VVOID;
  }
  VHashTable _table = {
    .base = VMakeSmallObject(VHASH_TABLE),
    .flags = closure->func == (void*)VEq2 ? HFLAG_EQ : HFLAG_EQV,
    .occupancy = 0,
    .load_factor = 0.8f,
    .vec = VEncodePointer(vec, VPOINTER_OTHER),
    .eq = eq,
    .hash = hash,
  };
  VHashTable * table = V_EDEN_INIT(runtime, VHashTable, _table);
  V_BOUNCE(k, runtime, VEncodePointer(table, VPOINTER_OTHER));
}

V_BEGIN_FUNC(VHashTableEqvFunc, "hash-table-equivalence-function", 2, k, _table)
  VHashTable * table = VCheckedDecodeHashTable2(runtime, _table, "hash-table-equivalence-function");
  V_BOUNCE(k, runtime, table->eq);
}
V_BEGIN_FUNC(VHashTableHashFunc, "hash-table-hash-function", 2, k, _table)
  VHashTable * table = VCheckedDecodeHashTable2(runtime, _table, "hash-table-hash-function");
  V_BOUNCE(k, runtime, table->hash);
}
V_BEGIN_FUNC(VHashTableVector, "hash-table-vector", 2, k, _table)
  VHashTable * table = VCheckedDecodeHashTable2(runtime, _table, "hash-table-vector");
  V_BOUNCE(k, runtime, table->vec);
}
V_BEGIN_FUNC(VHashTableRef, "hash-table-ref", 4, k, _table, key, thunk)
  VHashTable * table = VCheckedDecodeHashTable2(runtime, _table, "hash-table-ref");
  VVector * vec = VCheckedDecodeVector2(runtime, table->vec, "hash-table-ref");

  assert((table->flags & HFLAG_EQ) || (table->flags & HFLAG_EQV));

try_again: ;
  uint64_t capacity = vec->len / 3;
  uint64_t tries = 0;
  uint64_t hash = (table->flags & HFLAG_EQ) ? VEqHashImpl(key) : VEqvHashImpl(key);
  uint64_t index = hash & (capacity-1);

  bool found = false;
  while(tries <= capacity) {
    VWORD test = vec->arr[3*index+0];

    if(VBits(key) == VBits(test)) {
      found = true;
      break;
    }
    if((table->flags & HFLAG_EQV) && VDecodeBool(VInlineEqv2(runtime, key, test))) {
      found = true;
      break;
    }
    if(VBits(test) == VBits(VVOID)) {
      found = false;
      break;
    }

    index = (index + 1) & (capacity-1);
    tries++;
  }
  if(!found && (table->flags & HFLAG_DIRTY)) {
    VVector * newvec = V_ALLOCA_VECTOR2(&runtime, runtime, 3 * capacity);
    if(!newvec) VGarbageCollect2Func(runtime, (VFunc)VHashTableRef, 4, k, _table, key, thunk);
    VGrowHashTable(runtime, table, capacity, newvec);
    vec = newvec;
    goto try_again;
  }
  if(found) {
    V_BOUNCE(k, runtime, vec->arr[3*index+2]);
  } else {
    V_BOUNCE(thunk, runtime, k);
  }
}

V_BEGIN_FUNC(VHashTableSet, "hash-table-set!", 4, k, _table, key, val)

  VHashTable * table = VCheckedDecodeHashTable2(runtime, _table, "hash-table-set!");
  VVector * vec = VCheckedDecodeVector2(runtime, table->vec, "hash-table-set!");

  assert((table->flags & HFLAG_EQ) || (table->flags & HFLAG_EQV));
  uint64_t capacity = vec->len / 3;

  if(table->occupancy+1 >= table->load_factor * capacity) {
    VVector * newvec = V_ALLOCA_VECTOR2(&runtime, runtime, 3 * capacity * 2);
    if(!newvec) VGarbageCollect2Func(runtime, (VFunc)VHashTableSet, 4, k, _table, key, val);
    VGrowHashTable(runtime, table, capacity * 2, newvec);

    vec = newvec;
    capacity = vec->len / 3;
  }

  // have to always clean dirty tables for assignment
  // because otherwise the poverty metrics are
  // wrong and can cause duplicate keys
  // this is probably a hair pessimistic but omg idk
  // im tearing my hair out on these tables
  // 
  // ok i think the repro is this:
  // hashing pointer A into table like so:
  // - - D C - A
  // - - 0 0 - 0
  // where it's scrambled
  // and say A's new hash lands at D
  // then the bug is that A tests against D
  // fails, then tests against C, it has a greater povery
  // so it swaps with C!!!
  // the bug was that I need to consider a poverty swap a
  // opportunity to check for rehashing!!!
  if(table->flags & HFLAG_DIRTY) {
    VVector * newvec = V_ALLOCA_VECTOR2(&runtime, runtime, 3 * capacity);
    if(!newvec) VGarbageCollect2Func(runtime, (VFunc)VHashTableSet, 4, k, _table, key, val);
    VGrowHashTable(runtime, table, capacity, newvec);
    vec = newvec;
  }

  uint64_t tries = 0;
  uint64_t hash = (table->flags & HFLAG_EQ) ? VEqHashImpl(key) : VEqvHashImpl(key);
  uint64_t index = hash & (capacity-1);

  uint64_t poverty = 0;

  bool found = false;

  VTrackHashTable(runtime, table, key);

  while(tries <= capacity) {
    VWORD test = vec->arr[3*index+0];

    if(VBits(key) == VBits(test)) {
      found = true;
      break;
    }
    if((table->flags & HFLAG_EQV) && VDecodeBool(VInlineEqv2(runtime, key, test))) {
      found = true;
      break;
    }
    if(VBits(test) == VBits(VVOID)) {
      found = false;
      break;
    }

    uint64_t test_poverty = VDecodeInt(vec->arr[3*index+1]); 
    if(poverty > test_poverty) {
      VWORD tmpkey = key;
      VWORD tmppov = VEncodeInt(poverty);
      VWORD tmpval = val;

      key = vec->arr[3*index+0];
      poverty = test_poverty;
      val = vec->arr[3*index+2];

      vec->arr[3*index+0] = tmpkey;
      vec->arr[3*index+1] = tmppov;
      vec->arr[3*index+2] = tmpval;

      VTrackMutation(runtime, vec, &vec->arr[3*index+0], tmpkey);
      // poverty is an int, nothing to track
      VTrackMutation(runtime, vec, &vec->arr[3*index+2], tmpval);
    }

    index = (index + 1) & (capacity-1);
    tries++;
    poverty++;
  }
  if(!found)
    table->occupancy++;

  vec->arr[3*index+0] = key;
  vec->arr[3*index+1] = VEncodeInt(poverty);
  vec->arr[3*index+2] = val;

  VTrackMutation(runtime, vec, &vec->arr[3*index+0], key);
  // poverty is an int, nothing to track
  VTrackMutation(runtime, vec, &vec->arr[3*index+2], val);

  V_BOUNCE(k, runtime, VVOID);
}
V_BEGIN_FUNC(VHashTableDelete, "hash-table-delete!", 3, k, _table, key)
  VHashTable * table = VCheckedDecodeHashTable2(runtime, _table, "hash-table-delete!");
  VVector * vec = VCheckedDecodeVector2(runtime, table->vec, "hash-table-delete!");

  assert((table->flags & HFLAG_EQ) || (table->flags & HFLAG_EQV));
  uint64_t capacity = vec->len / 3;

  // shrinkage. with a bit of histerisis
  if(table->occupancy < 0.9 * table->load_factor * (capacity / 2)) {
    VVector * newvec = V_ALLOCA_VECTOR2(&runtime, runtime, 3 * (capacity / 2));
    if(!newvec) VGarbageCollect2Func(runtime, (VFunc)VHashTableDelete, 3, k, _table, key);
    VGrowHashTable(runtime, table, capacity / 2, newvec);

    vec = newvec;
    capacity = vec->len / 3;
  }

  // have to always clean dirty tables for deleting
  // because otherwise the poverty metrics are
  // wrong and can cause failure to delete keys
  //
  // I think if I'm correct the bug shouldn't be here.
  if(table->flags & HFLAG_DIRTY) {
    VVector * newvec = V_ALLOCA_VECTOR2(&runtime, runtime, 3 * capacity);
    if(!newvec) VGarbageCollect2Func(runtime, (VFunc)VHashTableDelete, 3, k, _table, key);
    VGrowHashTable(runtime, table, capacity, newvec);
    vec = newvec;
  }

  uint64_t tries = 0;
  uint64_t hash = (table->flags & HFLAG_EQ) ? VEqHashImpl(key) : VEqvHashImpl(key);
  uint64_t index = hash & (capacity-1);

  bool found = false;

  while(tries <= capacity) {
    VWORD test = vec->arr[3*index+0];

    if(VBits(key) == VBits(test)) {
      found = true;
      break;
    }
    if((table->flags & HFLAG_EQV) && VDecodeBool(VInlineEqv2(runtime, key, test))) {
      found = true;
      break;
    }
    if(VBits(test) == VBits(VVOID)) {
      found = false;
      break;
    }
    index = (index + 1) & (capacity-1);
    tries++;
  }
  if(!found) {
    V_BOUNCE(k, runtime, VVOID);
    return;
  }
  table->occupancy--;

  vec->arr[3*index+0] = VVOID;
  vec->arr[3*index+1] = VEncodeInt(0);
  vec->arr[3*index+2] = VVOID;

  while(true) {
    int oldindex = index;
    index = (index + 1) & (capacity-1);
    VWORD test = vec->arr[3*index+0];
    if(VBits(test) == VBits(VVOID))
      break;
    uint64_t poverty = VDecodeInt(vec->arr[3*index+1]);
    if(!poverty)
      break;
    vec->arr[3*oldindex+0] = vec->arr[3*index+0];
    vec->arr[3*oldindex+1] = VEncodeInt(poverty-1);
    vec->arr[3*oldindex+2] = vec->arr[3*index+2];

    VTrackMutation(runtime, vec, &vec->arr[3*oldindex+0], vec->arr[3*oldindex+0]);
    VTrackMutation(runtime, vec, &vec->arr[3*oldindex+2], vec->arr[3*oldindex+2]);

    vec->arr[3*index+0] = VVOID;
    vec->arr[3*index+1] = VEncodeInt(0);
    vec->arr[3*index+2] = VVOID;
  }
  V_BOUNCE(k, runtime, VVOID);
}

// strings
V_BEGIN_FUNC_RANGE(VMakeString2, "make-string", 2, 3, k, len, fill)
  if(VWordType(len) != VIMM_INT) VErrorC(runtime, "make-string: not an int");
  int i = VDecodeInt(len);
  //if(!(0 <= i && i < 1024 * 1024)) VErrorC(runtime, "make-string: out of bounds");

  char c = 'X';
  if(argc == 3) {
    if(VWordType(fill) != VIMM_CHAR) VErrorC(runtime, "make-string: not a char");
    c = VDecodeChar(fill);
  }

  VBlob * str = V_ALLOCA_BLOB2((void*)&runtime, runtime, i + 1);
  if(!str) {
    VGarbageCollect2Func(runtime, (VFunc)VMakeString2, 3, k, len, VEncodeChar(c));
  }

  str->base = VMakeSmallObject(VSTRING);
  str->len = i + 1;
  str->buf[i] = '\0';
  memset(str->buf, c, i);

  V_BOUNCE(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}

V_BEGIN_FUNC_RANGE(VSubstring2, "substring", 2, 4, k, string, startword, endword)
  VBlob const * str = VCheckedDecodeString2(runtime, string, "substring");

  int start = 0;
  int end = str->len - 1;
  if(argc >= 3)
  {
    if(VWordType(startword) != VIMM_INT) VErrorC(runtime, "substring: arg 2 not an int");
    start = VDecodeInt(startword);
  }
  if(argc >= 4)
  {
    if(VWordType(endword) != VIMM_INT) VErrorC(runtime, "substring: arg 3 not an int");
    end = VDecodeInt(endword);
  }
  if(!(0 <= start && start < str->len)) VErrorC(runtime, "substring: start out of bounds");
  if(!(0 <= end && end < str->len)) VErrorC(runtime, "substring: end out of bounds");
  if(start > end) VErrorC(runtime, "substring: start greater than end");
  int len = end - start;
  VBlob * copy = V_ALLOCA_BLOB2((void*)&runtime, runtime, len + 1);
  if(!copy) {
    VGarbageCollect2Func(runtime, (VFunc)VSubstring2, 4, k, string, VEncodeInt(start), VEncodeInt(end));
  }
  copy->base = VMakeSmallObject(VSTRING);
  copy->len = len + 1;
  copy->buf[len] = '\0';
  memcpy(copy->buf, str->buf + start, len);

  V_BOUNCE(k, runtime, VEncodePointer(copy, VPOINTER_OTHER));
}

V_BEGIN_FUNC_RANGE(VStringCopy2, "string-copy!", 4, 6, k, dest, _at, source, _start, _end)
  VBlob * dst = VCheckedDecodeString2(runtime, dest, "string-copy!");

  if(VWordType(_at) != VIMM_INT) VErrorC(runtime, "string-copy!: arg 2 not an int\n");
  int at = VDecodeInt(_at);
  if(!(0 <= at && at < dst->len)) VErrorC(runtime, "string-copy!: at out of bounds\n");

  VBlob const * src = VCheckedDecodeString2(runtime, source, "string-copy!");


  int start = 0;
  int end = src->len - 1;
  if(argc >= 5) {
    if(VWordType(_start) != VIMM_INT) VErrorC(runtime, "string-copy!: arg 4 not an int\n");
    start = VDecodeInt(_start);
  }
  if(argc >= 6) {
    if(VWordType(_end) != VIMM_INT) VErrorC(runtime, "string-copy!: arg 5 not an int\n");
    end = VDecodeInt(_end);
  }
  int srclen = end - start;
  int dstlen = dst->len-1 - at;
  if(!(0 <= start && start < src->len)) VErrorC(runtime, "string-copy!: start out of bounds\n");
  if(!(0 <= end && end < src->len)) VErrorC(runtime, "string-copy!: end out of bounds\n");
  if(start > end) VErrorC(runtime, "string-copy!: start greater than end\n");
  if(dstlen < srclen) VErrorC(runtime, "string-copy!: attempting to copy ~l chars into a substring ~l chars long.\n", srclen, dstlen);

  memmove(dst->buf + at, src->buf + start, srclen);
  V_BOUNCE(k, runtime, VVOID);
}

V_BEGIN_FUNC_BASIC(VStringLength2, "string-length", 1, _str)
  VBlob * str = VCheckedDecodeString2(runtime, _str, "string-length");
  // not exposing the null terminal
  return VEncodeInt(str->len - 1);
V_END_FUNC

V_BEGIN_FUNC_BASIC(VStringRef2, "string-ref", 2, _str, _i)
  VBlob * str = VCheckedDecodeString2(runtime, _str, "string-ref");

  if(VWordType(_i) != VIMM_INT) VErrorC(runtime, "string-ref: not an int");
  int i = VDecodeInt(_i);
  // not exposing the null terminal
  if(!(0 <= i && i < str->len)) VErrorC(runtime, "string-ref: ~A out of bounds (0 to ~D)~N", _i, str->len);

  return VEncodeChar(str->buf[i]);
V_END_FUNC

V_BEGIN_FUNC_BASIC(VStringSet2, "string-set!", 3, _str, _i, _c)
  VBlob * str = VCheckedDecodeString2(runtime, _str, "string-set!");

  if(VWordType(_i) != VIMM_INT) VErrorC(runtime, "string-set!: not an int");
  int i = VDecodeInt(_i);
  // not exposing the null terminal
  if(!(0 <= i && i < str->len)) VErrorC(runtime, "string-set!: out of bounds");

  if(VWordType(_c) != VIMM_CHAR) VErrorC(runtime, "string-set!: not a char");

  char c = VDecodeChar(_c);
  str->buf[i] = c;

  return VVOID;
V_END_FUNC

V_BEGIN_FUNC(VStringSymbol2, "string->symbol", 2, k, _str)
  VBlob * str = VCheckedDecodeString2(runtime, _str, "string->symbol");

  VBlob * sym = V_ALLOCA_BLOB2(&runtime, runtime, str->len);
  if(!sym) VGarbageCollect2Func(runtime, (VFunc)VStringSymbol2, 2, k, _str);
  VFillBlob(sym, VSYMBOL, str->len, str->buf);
  V_BOUNCE(k, runtime, VEncodePointer(sym, VPOINTER_OTHER));
}
V_BEGIN_FUNC(VSymbolString2, "symbol->string", 2, k, _sym)
  VBlob * sym = VCheckedDecodeSymbol2(runtime, _sym, "symbol->string");

  VBlob * str = V_ALLOCA_BLOB2(&runtime, runtime, sym->len);
  if(!str) VGarbageCollect2Func(runtime, (VFunc)VSymbolString2, 2, k, _sym);
  VFillBlob(str, VSTRING, sym->len, sym->buf);
  V_BOUNCE(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}

V_BEGIN_FUNC_BASIC(VStringNumber2, "string->number", 1, _str)
  VBlob * str = VCheckedDecodeString2(runtime, _str, "string->number");

  if(str->len == 1)
    return VFALSE;

  char * end = NULL;
  errno = 0;
  double d = strtod(str->buf, &end);
  if(errno) {
    errno = 0;
    return VFALSE;
  }
  if(str->buf + str->len - 1 != end)
    return VFALSE;

  // FIXME lazy but incorrect way to parse ints vs doubles, need to parse by checking for period
  // actually, it's probably correct but stupid, deliberate deviation incoming
  if(floor(d) == d && INT32_MIN <= d && d <= INT32_MAX) {
    return VEncodeInt((int)d);
  } else {
    return VEncodeNumber(d);
  }
V_END_FUNC

// chars

V_BEGIN_FUNC_BASIC(VCharInt2, "char->integer", 1, c)
  if(VWordType(c) != VIMM_CHAR) VErrorC(runtime, "char->integer: not a char: ~A", c);
  return VEncodeInt((int)VDecodeChar(c));
V_END_FUNC

V_BEGIN_FUNC_BASIC(VIntChar, "integer->char", 1, _i)
  if(VWordType(_i) != VIMM_INT) VErrorC(runtime, "integer->char: not an int: ~A", _i);
  int i = VDecodeInt(_i);
  if(i < 0 || i > 127)
    VErrorC(runtime, "integer->char: int out of bounds: ~A", _i);
  return VEncodeChar((char)i);
V_END_FUNC

// ports

// TODO delete this idiotic procedures
V_BEGIN_FUNC(VDupStdout2, "dup-stdout", 1, k)
  VErrorC(runtime, "removed intrinsic!");
}

V_BEGIN_FUNC(VDupStdin2, "dup-stdin", 1, k)
  VErrorC(runtime, "removed intrinsic!");
}

V_BEGIN_FUNC(VDupStderr2, "dup-stderr", 1, k)
  VErrorC(runtime, "removed intrinsic!");
}

//
// less idiotic versions of the dup procedures
//
V_BEGIN_FUNC(VStdoutPort, "stdout->port", 1, k)
  VPort * port = V_EDEN_INIT(runtime, VPort, VMakePortStream(stdout, PFLAG_WRITE | PFLAG_NOCLOSE));
  V_BOUNCE(k, runtime, VEncodePointer(port, VPOINTER_OTHER));
}

V_BEGIN_FUNC(VStdinPort, "stdin->port", 1, k)
  VPort * port = V_EDEN_INIT(runtime, VPort, VMakePortStream(stdin, PFLAG_READ | PFLAG_NOCLOSE));
  V_BOUNCE(k, runtime, VEncodePointer(port, VPOINTER_OTHER));
}

V_BEGIN_FUNC(VStderrPort, "stderr->port", 1, k)
  VPort * port = V_EDEN_INIT(runtime, VPort, VMakePortStream(stderr, PFLAG_WRITE | PFLAG_NOCLOSE));
  V_BOUNCE(k, runtime, VEncodePointer(port, VPOINTER_OTHER));
}


SYSV_CALL static void VOpenStream2(VRuntime * runtime, VWORD k, VWORD path, char const * mode, unsigned flags) {
  VBlob * str = VCheckedDecodeString2(runtime, path, "open-stream");
  errno = 0;
  FILE * f = fopen(str->buf, mode);
  // ENFILE error can be fixed by running a garbage collect
  // second return value is backwards, it returns true if the
  // value should be handed to the user
  // 
  VWORD ok = VEncodeBool(errno != ENFILE && errno != EMFILE);
  if(!f) {
    if(errno == ENFILE || errno == EMFILE) {
      V_BOUNCE(k, runtime, VFALSE, ok);
    } else {
      // unrecoverable error, just return VFALSE
      V_BOUNCE(k, runtime, VFALSE, VTRUE);
    }
  }

  VPort * port = V_EDEN_INIT(runtime, VPort, VMakePortStream(f, flags));
  V_BOUNCE(k, runtime, VEncodePointer(port, VPOINTER_OTHER), ok);
}

V_BEGIN_FUNC(VOpenInputStream2, "open-input-stream", 2, k, path)
  VOpenStream2(runtime, k, path, "rb", PFLAG_READ);
V_END_FUNC

V_BEGIN_FUNC(VOpenOutputStream2, "open-output-stream", 2, k, path)
  VOpenStream2(runtime, k, path, "wb", PFLAG_WRITE);
V_END_FUNC


V_BEGIN_FUNC(VCloseStream2, "close-port", 2, k, _port)

  if(VWordType(_port) != VPOINTER_OTHER) VErrorC(runtime, "close-port: not a port\n");
  VPort * port = (VPort*)VDecodePointer(_port);
  if(port->base.tag != VPORT) VErrorC(runtime, "close-port: not a port\n");

  int ret = port_close(port);

  V_BOUNCE(k, runtime, VEncodeInt(ret));
}

V_BEGIN_FUNC(VTtyPortP, "tty-port?", 2, k, _port)

  if(VWordType(_port) != VPOINTER_OTHER) VErrorC(runtime, "tty-port?: not a port\n");
  VPort * port = (VPort*)VDecodePointer(_port);
  if(port->base.tag != VPORT) VErrorC(runtime, "tty-port?: not a port\n");
  if(!(port->flags & PFLAG_WRITE)) VErrorC(runtime, "tty-port?: not an input port\n");

  int fd = port_fileno(port);
  bool tty = isatty(fd);
  errno = 0;

  V_BOUNCE(k, runtime, VEncodeBool(tty));
}

FILE * Windows_TmpFile();

V_BEGIN_FUNC(VOpenOutputString2, "open-output-string", 1, k)
  errno = 0;
#define USE_DFILE_OSTREAM
#ifdef USE_DFILE_OSTREAM
  DFILE * f = d_strfile();
#else
#ifdef _WIN64
  FILE * f = Windows_TmpFile();
#else
  FILE * f = tmpfile();
#endif
#endif
  // ENFILE error can be fixed by running a garbage collect
  VWORD ok = VEncodeBool(errno != ENFILE && errno != EMFILE);
  if(!f) {
    if(errno == ENFILE || errno == EMFILE) {
      V_BOUNCE(k, runtime, VFALSE, ok);
    } else {
#ifdef USE_DFILE_OSTREAM
      V_BOUNCE(k, runtime, VFALSE, VFALSE);
#else
#ifdef _WIN64
      // Windows tmpfile() doesn't set errno! >:(
      V_BOUNCE(k, runtime, VFALSE, VFALSE);
#endif
#ifdef __linux__
      // unrecoverable error: return false to the user
      V_BOUNCE(k, runtime, VFALSE, VTRUE);
#endif
#endif
    }
  }

#ifdef USE_DFILE_OSTREAM
  VPort _port = {
    .base.tag = VPORT,
    .line = 1,
    .dstream = f,
    .flags = PFLAG_WRITE | PFLAG_OSTRING | PFLAG_DFILE,
  };
#else
  VPort _port = VMakePortStream(f, PFLAG_WRITE | PFLAG_OSTRING);
#endif
  VPort * port = V_EDEN_INIT(runtime, VPort, _port);
  V_BOUNCE(k, runtime, VEncodePointer(port, VPOINTER_OTHER), ok);
}

V_BEGIN_FUNC(VGetOutputString2, "get-output-string", 2, k, _port)
  VPort * port = (VPort*)VDecodePointer(_port);
  if(port->base.tag != VPORT) VErrorC(runtime, "get-output-string: not a port\n");
  if(!(port->flags & PFLAG_OSTRING)) VErrorC(runtime, "get-output-string: not an output string port\n");

  int len = port_ftell(port);
  VBlob * str = V_ALLOCA_BLOB2((void*)&runtime, runtime, len + 1);
  if(!str) {
    VGarbageCollect2Func(runtime, (VFunc)VGetOutputString2, 2, k, _port);
  }
  str->base = VMakeSmallObject(VSTRING);
  str->len = len+1;
  port_rewind(port);
  port_fread(str->buf, len, port);
  str->buf[len] = '\0';
  port_fseek(port, 0, SEEK_END);

  V_BOUNCE(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}

// input

V_BEGIN_FUNC_BASIC(VReadChar2, "read-char", 1, _port)
  VPort * port = (VPort*)VDecodePointer(_port);
  if(!port || port->base.tag != VPORT) VErrorC(runtime, "read-char: not a port ~S~N", _port);
  if(!(port->flags & PFLAG_READ)) VErrorC(runtime, "read-char: not an readable port ~S~N", _port);

  char c = port_fgetc(port);
  if(c < 0) {
    return VEOF;
  } else {
    return VEncodeChar((char)c);
  }
V_END_FUNC

V_BEGIN_FUNC(VReadLine2, "read-line", 2, k, _port)
  VPort * port = (VPort*)VDecodePointer(_port);
  if(!port || port->base.tag != VPORT) VErrorC(runtime, "read-line: not a port ~S~N", _port);
  if(!(port->flags & PFLAG_READ)) VErrorC(runtime, "read-line: not an readable port ~S~N", _port);

  VBlob * str = VAlloca(runtime, sizeof(VBlob) + 256);
  str->base = VMakeSmallObject(VSTRING);
  if(!port_fgets(str->buf, 256, port)) {
    V_BOUNCE(k, runtime, VEOF);
  } else {
    size_t len = strlen(str->buf);
    if(len > 0 && str->buf[len-1] == '\n')
      len--;
    if(len > 0 && str->buf[len-1] == '\r')
      len--;
    str->buf[len] = '\0';
    str->len = len+1; // account for the null terminal
    V_BOUNCE(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
  }
}
V_BEGIN_FUNC(VReadLine3, "read-line", 2, k, _port)
  VPort * port = (VPort*)VDecodePointer(_port);
  if(!port || port->base.tag != VPORT) VErrorC(runtime, "read-line: not a port ~S~N", _port);
  if(!(port->flags & PFLAG_READ)) VErrorC(runtime, "read-line: not an readable port ~S~N", _port);

  VBlob * str = VAlloca(runtime, sizeof(VBlob) + 256);
  str->base = VMakeSmallObject(VSTRING);
  if(!port_fgets(str->buf, 256, port)) {
    V_BOUNCE(k, runtime, VEOF, VFALSE);
  } else {
    bool line = false;
    size_t len = strlen(str->buf);
    if(len > 0 && str->buf[len-1] == '\n') {
      line = true;
      len--;
      if(len > 0 && str->buf[len-1] == '\r')
        len--;
    }
    str->buf[len] = '\0';
    str->len = len+1; // account for the null terminal
    V_BOUNCE(k, runtime, VEncodePointer(str, VPOINTER_OTHER), VEncodeBool(line));
  }
}

// output

V_BEGIN_FUNC_BASIC(VDisplay2, "display-word", 2, val, port)
    VPort * p = VCheckedDecodePort2(runtime, port, "display-word");
    if(!(p->flags & PFLAG_WRITE)) VErrorC(runtime, "display-word: port's write end is closed~N");
    VDisplayWord2(p, val, false);
    return VVOID;
}
V_BEGIN_FUNC_BASIC(VWrite2, "write-word", 2, val, port)
    VPort * p = VCheckedDecodePort2(runtime, port, "write-word");
    if(!(p->flags & PFLAG_WRITE)) VErrorC(runtime, "write-word: port's write end is closed~N");
    VDisplayWord2(p, val, true);
    return VVOID;
}
V_BEGIN_FUNC_BASIC(VNewline2, "newline", 1, port)
    VPort * p = VCheckedDecodePort2(runtime, port, "newline");
    if(!(p->flags & PFLAG_WRITE)) VErrorC(runtime, "newline: port's write end is closed~N");
    port_fputc('\n', p);
    port_fflush(p);
    return VVOID;
}

V_BEGIN_FUNC_BASIC(VDisplayStdout, "display-stdout", 1, val)
    VDisplayWord2((VPort[]){get_port_stdout()}, val, false);
    return VVOID;
}
V_BEGIN_FUNC_BASIC(VWriteStdout, "write-stdout", 1, val)
    VDisplayWord2((VPort[]){get_port_stdout()}, val, true);
    return VVOID;
}
V_BEGIN_FUNC_BASIC(VNewlineStdout, "newline-stdout", 0)
    VPort port = get_port_stdout();
    port_fputc('\n', &port);
    port_fflush(&port);
    return VVOID;
}

// misc

static V_BEGIN_FUNC_MIN(VCallCCLambda2, "call/cc-lambda", 1, k)
  // continuations dont have arg0 as a continuation
  // so we need a wrapper to drop arg0 then call the continuation
  // and we can do that just with memmoving and changing the up var
  VWORD realk = statics->vars[0];
  runtime->dynamics = statics->vars[1];
  runtime->exception_handlers = statics->vars[2];
  if(argc == 2) {
    // 99.99% of use cases, returning single value
    //va_list args;
    //va_start(args, k);
    //VWORD ret = va_arg(args, VWORD);
    //va_end(args);
    V_BOUNCE(realk, runtime, self->vars[1]);
  } else if(argc == 1) {
    // call/cc in a (begin)
    V_BOUNCE(realk, runtime);
  } else {
    // nested call-with-values evil
    VClosure * realk_real = VDecodeClosureApply2(runtime, realk);

    VEnvironment * environ = alloca(sizeof(VEnvironment) + sizeof(VWORD[argc-1]));
    environ->base = VMakeObject(VENVIRONMENT);
    environ->argc = argc-1;
    environ->runtime = runtime;
    environ->static_chain = realk_real->env;

    for(int i = 1; i < argc; i++) {
      environ->argv[i-1] = self->vars[i];
    }
    VSysApplyBounce(realk_real->func, environ);
  }
}

V_BEGIN_FUNC(VCallCC2, "call/cc", 2, k, _proc)
  // (lambda (k proc) (proc k (lambda (k2 x) (k x))))
  // for supporting multiple values
  // (lambda (k proc) (proc k (lambda (k2 . xs) (apply k xs))))
  VEnv * env = VAlloca(runtime, sizeof(VEnv) + sizeof(VWORD[3]));
  env->base = VMakeSmallObject(VENV); env->num_vars = 3; env->var_len = 3; env->up = NULL;
  env->vars[0] = k;
  env->vars[1] = runtime->dynamics;
  env->vars[2] = runtime->exception_handlers;
  VClosure * k_wrapped = V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VCallCCLambda2, env));

  V_BOUNCE(_proc, runtime, k, VEncodeClosure(k_wrapped));
}

static V_BEGIN_FUNC_MIN(VCallValuesK2, "call/values-k", 0)
  VWORD k = statics->vars[0];
  VClosure * consumer = VCheckedDecodeClosure2(runtime, statics->vars[1], "call/values");

  VEnvironment * environ = VAlloca(runtime, sizeof(VEnvironment) + sizeof(VWORD[argc+1]));
  environ->base = VMakeObject(VENVIRONMENT);
  environ->argc = argc+1;
  environ->runtime = runtime;
  environ->static_chain = consumer->env;

  environ->argv[0] = k;
  for(int i = 0; i < argc; i++) {
    environ->argv[i+1] = self->vars[i];
  }

  VSysApplyBounce(consumer->func, environ);
}

V_BEGIN_FUNC(VCallValues2, "call-with-values", 3, _k, _producer, _consumer)
  // FIXME type check
  // (lambda (k producer consumer) (producer (lambda (k2 . args) (apply consumer k args))))

  VEnv * env = VAlloca(runtime, sizeof(VEnv) + sizeof(VWORD[2]));
  env->base = VMakeSmallObject(VENV); env->num_vars = 2; env->var_len = 2; env->up = NULL;
  env->vars[0] = _k;
  env->vars[1] = _consumer;
  VClosure * consume = V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VCallValuesK2, env));

  V_BOUNCE(_producer, runtime, VEncodeClosure(consume));
}

V_BEGIN_FUNC_MIN(VApply2, "apply", 2, k, _proc)
  V_ARG_MIN3(runtime, "apply", 3, argc);

  VClosure * proc = VCheckedDecodeClosure2(runtime, _proc, "apply");

  VWORD tmp[argc-2];

  //va_list args;
  //va_start(args, _proc);
  tmp[0] = k;
  for(int i = 2; i < argc-1; i++) {
    //tmp[i-1] = va_arg(args, VWORD);
    tmp[i-1] = self->vars[i];
  }
  //VWORD lst = va_arg(args, VWORD);
  VWORD lst = self->vars[argc-1];
  //va_end(args);

  int nargs = argc-2;
  VWORD pair = lst;
  while(VWordType(pair) == VPOINTER_PAIR) {
    pair = VDecodePair(pair)->rest;
    nargs++;
  }
  if(!VIsToken(pair, VTOK_NULL))
    VErrorC(runtime, "apply: not a null terminated list ~S~N\n", lst);

  VEnvironment * environ = VAlloca(runtime, sizeof(VEnvironment) + sizeof(VWORD[nargs]));
  environ->base = VMakeObject(VENVIRONMENT);
  environ->argc = nargs;
  environ->runtime = runtime;
  environ->static_chain = proc->env;

  memcpy(environ->argv, tmp, sizeof tmp);
  VWORD * ptr = environ->argv + argc - 2;
  while(VWordType(lst) == VPOINTER_PAIR) {
    VPair * p = VDecodePair(lst);
    *ptr++ = p->first;
    lst = p->rest;
  }

  VSysApplyBounce(proc->func, environ);
}

V_BEGIN_FUNC(VApplyCps, "apply-cps", 3, k, _proc, lst)
  VClosure * proc = VCheckedDecodeClosure2(runtime, _proc, "apply-cps");

  int nargs = 0;
  VWORD pair = lst;
  while(VWordType(pair) == VPOINTER_PAIR) {
    pair = VDecodePair(pair)->rest;
    nargs++;
  }
  if(!VIsToken(pair, VTOK_NULL))
    VErrorC(runtime, "apply-cps: not a null terminated list ~S~N\n", lst);

  VEnvironment * environ = VAlloca(runtime, sizeof(VEnvironment) + sizeof(VWORD[nargs]));
  environ->base = VMakeObject(VENVIRONMENT);
  environ->argc = nargs;
  environ->runtime = runtime;
  environ->static_chain = proc->env;

  VWORD * ptr = environ->argv;
  while(VWordType(lst) == VPOINTER_PAIR) {
    VPair * p = VDecodePair(lst);
    *ptr++ = p->first;
    lst = p->rest;
  }

  VSysApplyBounce(proc->func, environ);
}

V_BEGIN_FUNC(VSystem2, "system", 2, k, cmd)

  VBlob * blob = VCheckedDecodeString2(runtime, cmd, "system");

  int ret = system(blob->buf);

  V_BOUNCE(k, runtime, VEncodeInt(ret));
}

SYSV_CALL static void VOpenProcess2(V_CORE_ARGS, VWORD k, VWORD cmd, char const * mode, unsigned flags) {
  VBlob * blob = VCheckedDecodeString2(runtime, cmd, "open-io-process");

  FILE * f = popen(blob->buf, mode);

  if(!f) VErrorC(runtime, "open-io-process: failed to open process `~Z`~N", blob->buf);
  VPort * port = V_EDEN_INIT(runtime, VPort, VMakePortStream(f, flags | PFLAG_PROCESS));
  V_BOUNCE(k, runtime, VEncodePointer(port, VPOINTER_OTHER));
}

V_BEGIN_FUNC(VOpenInputProcess2, "open-input-process", 2, k, cmd)
  VOpenProcess2(runtime, statics, argc, k, cmd, "r", PFLAG_READ | PFLAG_PROCESS);
}
V_BEGIN_FUNC(VOpenOutputProcess2, "open-output-process", 2, k, cmd)
  VOpenProcess2(runtime, statics, argc, k, cmd, "w", PFLAG_WRITE | PFLAG_PROCESS);
}

V_BEGIN_FUNC_RANGE(VMakeTemporaryFile2, "make-temporary-file", 2, 3, k, _prefix, _suffix)

  VBlob * prefix = VCheckedDecodeString2(runtime, _prefix, "make-temporary-file");

  // suffix may be annoying to do on windings
  VBlob * suffix = NULL;
  if(argc == 3)
    suffix = VCheckedDecodeString2(runtime, _suffix, "make-temporary-file");

  char const * p = prefix->buf;
  char const * x = "XXXXXX";
  char const * s = "";
  if(suffix) s = suffix->buf;
  size_t len = strlen(p) + strlen(x) + strlen(s) + 1;
#ifndef PATH_MAX
#define PATH_MAX 4096
#endif
  if(len > PATH_MAX)
    VErrorC(runtime, "make-temporary-file: temporary filename length of ~D exceeds max length of ~D\n", (int)len, (int)PATH_MAX);

  VBlob * str = VAlloca(runtime, sizeof(VBlob) + len);
  str->base = VMakeSmallObject(VSTRING);
  str->len = len;
  strcpy(str->buf, p);
  strcat(str->buf, x);
  strcat(str->buf, s);

  // Might be a mistake to discard this fd, but I cba to return multiple values atm
  // and I cba to add support for dual ended ports atm
  // probably isn't, looks like the turd windows will give me some trouble with this procedure
  // Oh how it is a mistake, past me. what were u thinking
#ifdef __linux__
  (void)mkstemps(str->buf, strlen(s));
#endif
#ifdef _W64
  VErrorC(runtime, "make-temporary-file: not supported on Windows\n");
#endif

  V_BOUNCE(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}

V_BEGIN_FUNC(VMakeRandom, "make-random", 3, k, _seed, _stream)
  unsigned seed = VCheckedDecodeInt2(runtime, _seed, "make-random");
  unsigned stream = VCheckedDecodeInt2(runtime, _stream, "make-random");
  VBlob * buf = VAlloca(runtime, sizeof(VBlob)+sizeof(vrandom_state));
  buf->base = VMakeSmallObject(VRNG_STATE);
  buf->len = sizeof(vrandom_state);
  vsrandom((vrandom_state*)buf->buf, seed, stream);

  V_BOUNCE(k, runtime, VEncodePointer(buf, VPOINTER_OTHER));
}
V_BEGIN_FUNC(VRandomCopy, "random-copy", 2, k, rng)
  VBlob const * buf = VCheckedDecodePointer2(runtime, rng, VRNG_STATE, "random-copy");
  VBlob * copy = VAlloca(runtime, sizeof(VBlob)+sizeof(vrandom_state));
  copy->base = VMakeSmallObject(VRNG_STATE);
  copy->len = sizeof(vrandom_state);
  memcpy(copy->buf, buf->buf, sizeof(vrandom_state));

  V_BOUNCE(k, runtime, VEncodePointer(copy, VPOINTER_OTHER));
}

V_BEGIN_FUNC(VRandomSample, "random-sample", 2, k, rng)
  VBlob * buf = VCheckedDecodePointer2(runtime, rng, VRNG_STATE, "random-sample");
  int i = (unsigned)vrandom((vrandom_state*)buf->buf);

  V_BOUNCE(k, runtime, VEncodeInt(i));
}
V_BEGIN_FUNC(VRandomSampleBounded, "random-sample-bounded", 3, k, rng, _bounds)
  VBlob * buf = VCheckedDecodePointer2(runtime, rng, VRNG_STATE, "random-sample-bounded");
  int bounds = VCheckedDecodeInt2(runtime, _bounds, "random-sample-bounded");
  if(bounds <= 0) VErrorC(runtime, "random-sample-bounded: bounds must be positive ~D\n", bounds);
  int i = (unsigned)vrandom_bounded((vrandom_state*)buf->buf, bounds);

  V_BOUNCE(k, runtime, VEncodeInt(i));
}
V_BEGIN_FUNC(VRandomSampleFloat, "random-sample-float", 2, k, rng)
  VBlob * buf = VCheckedDecodePointer2(runtime, rng, VRNG_STATE, "random-sample-float");
  double d = vrandom_double((vrandom_state*)buf->buf);

  V_BOUNCE(k, runtime, VEncodeNumber(d));
}

V_BEGIN_FUNC(VRandomAdvance, "random-advance", 3, k, rng, _n)
  VBlob * buf = VCheckedDecodePointer2(runtime, rng, VRNG_STATE, "random-advance");
  int n = VCheckedDecodeInt2(runtime, _n, "random-advance");
  vrandom_advance((vrandom_state*)buf->buf, n);

  V_BOUNCE(k, runtime, VVOID);
}

V_BEGIN_FUNC(VRealpath, "realpath", 2, k, _relpath)
  VBlob * relpath = VCheckedDecodeString2(runtime, _relpath, "realpath");
  VBlob * ret = VAlloca(runtime, sizeof(VBlob) + PATH_MAX);
  *ret = (VBlob){ .base = VMakeSmallObject(VSTRING), .len = PATH_MAX };
#ifdef __linux__
  char * ok = realpath(relpath->buf, ret->buf);
#endif
#ifdef _WIN64
  DWORD ok = GetFullPathName(relpath->buf, PATH_MAX, ret->buf, NULL);  
  if(ok >= PATH_MAX)
    ok = 0;
#endif
#ifdef __EMSCRIPTEN__
  bool ok = false;
#endif
  ret->len = strlen(ret->buf)+1;
  V_BOUNCE(k, runtime, ok ? VEncodePointer(ret, VPOINTER_OTHER) : VFALSE);
}

V_BEGIN_FUNC(VAccess, "access", 3, k, _path, _mode)
  VBlob * path = VCheckedDecodeString2(runtime, _path, "access");
  int usermode = VCheckedDecodeInt2(runtime, _mode, "access");

  int mode = 0;
  if(!usermode) mode = F_OK;
  if(usermode & 4) mode |= R_OK;
  if(usermode & 2) mode |= W_OK;
#ifdef _WIN64
  if(usermode & 1) mode |= R_OK;
#else
  if(usermode & 1) mode |= X_OK;
#endif

  int ret = access(path->buf, mode);
  V_BOUNCE(k, runtime, VEncodeBool(!ret));
}

//
// Buffers
//

#define IMPLEMENT_BUFFER_READWRITE(prefix, Prefix, elem_width, ctype, CType) \
static void Prefix ## Write(VRuntime * runtime, VBlob * buffer, unsigned offset, VWORD v) { \
  const int stride = elem_width; \
  if(buffer->len < offset + stride) \
    VErrorC(runtime, #prefix "vector-set!: index out of bounds ~D", (offset-stride)/stride); \
  int i = 0; \
  if(VWordType(v) == VIMM_INT) \
    i = VDecodeInt(v); \
  else \
    VErrorC(runtime, #prefix "vector-set!: not an int ~S", v); \
  if(!(CType ## _MIN <= i && i <= CType ## _MAX)) \
    VErrorC(runtime, #prefix "vector-set!: not a " #ctype " ~S", v); \
  ctype ## _t x = i; \
  memcpy(buffer->buf + offset, &x, stride); \
} \
static VWORD Prefix ## Read(VRuntime * runtime, VBlob * buffer, unsigned offset) { \
  if(buffer->len < offset + elem_width) \
    VErrorC(runtime, "s32vector-ref!: index out of bounds ~D", (offset-elem_width)/elem_width); \
  ctype ## _t i = 0; \
  memcpy(&i, buffer->buf + offset, elem_width); \
  return VEncodeInt(i); \
}

#define UINT8_MIN 0
#define UINT16_MIN 0
#define UINT32_MIN 0

IMPLEMENT_BUFFER_READWRITE(s8, S8, 1, int8, INT8)
IMPLEMENT_BUFFER_READWRITE(u8, U8, 1, uint8, UINT8)
IMPLEMENT_BUFFER_READWRITE(s16, S16, 2, int16, INT16)
IMPLEMENT_BUFFER_READWRITE(u16, U16, 2, uint16, UINT16)
IMPLEMENT_BUFFER_READWRITE(s32, S32, 4, int32, INT32)

static VWORD F32Read(VRuntime * runtime, VBlob * buffer, unsigned offset) {
  if(buffer->len < offset + 4)
    VErrorC(runtime, "f32vector-ref!: index out of bounds ~D", (offset-4)/4);
  float f = 0;
  memcpy(&f, buffer->buf + offset, 4);
  return VEncodeNumber(f);
}
static VWORD F64Read(VRuntime * runtime, VBlob * buffer, unsigned offset) {
  if(buffer->len < offset + 8)
    VErrorC(runtime, "f64vector-ref!: index out of bounds ~D", (offset-8)/8);
  double d = 0;
  memcpy(&d, buffer->buf + offset, 8);
  return VEncodeNumber(d);
}

static void F32Write(VRuntime * runtime, VBlob * buffer, unsigned offset, VWORD v) {
  if(buffer->len < offset + 4)
    VErrorC(runtime, "f32vector-set!: index out of bounds ~D", (offset-4)/4);
  float f = 0;
  if(VIsDouble(v))
    f = VDecodeNumber(v);
  else if(VWordType(v) == VIMM_INT)
    f = VDecodeInt(v);
  else
    VErrorC(runtime, "f32vector-set!: not an int or a double ~S", v);
  memcpy(buffer->buf + offset, &f, 4);
}
static void F64Write(VRuntime * runtime, VBlob * buffer, unsigned offset, VWORD v) {
  if(buffer->len < offset + 8)
    VErrorC(runtime, "f64vector-set!: index out of bounds ~D", (offset-8)/8);
  double d = 0;
  if(VIsDouble(v))
    d = VDecodeNumber(v);
  else if(VWordType(v) == VIMM_INT)
    d = VDecodeInt(v);
  else
    VErrorC(runtime, "f64vector-set!: not an int or a double ~S", v);
  memcpy(buffer->buf + offset, &d, 8);
}

#define IMPLEMENT_BUFFER(prefix, Prefix, elem_width) \
V_BEGIN_FUNC_BASIC(V ## Prefix ## VectorP, #prefix "vector?", 1, _buf) \
  VWORD ret = VFALSE; \
  if(VIsBlob(_buf)) { \
    VBlob * buf = VDecodeBlob(_buf); \
    if(buf->base.tag == VBUFFER && BUF_ ## Prefix == buf->buf[0]) \
      ret = VTRUE; \
  } \
  return ret; \
V_END_FUNC \
V_BEGIN_FUNC_RANGE(VMake ## Prefix ## Vector, "make-" #prefix "vector", 2, 3, k, _len, _fill) \
  unsigned len = VCheckedDecodeInt2(runtime, _len, "make-" #prefix "vector"); \
  VWORD fill = argc == 3 ? _fill : VFALSE; \
  if(len > INT_MAX) \
    VErrorC(runtime, "make-" #prefix "vector: tried to make a vector of length ~D, maximum vector length is ~D", len, INT_MAX); \
  unsigned size = elem_width * (len+1); \
  VBlob * ret = V_ALLOCA_BLOB2((void*)&runtime, runtime, size); \
  if(!ret) VGarbageCollect2Func(runtime, (VFunc)VMake ## Prefix ## Vector, argc, k, _len, fill); \
  ret->base = VMakeSmallObject(VBUFFER); \
  ret->len = size; \
  memset(ret->buf, 0, elem_width); \
  ret->buf[0] = BUF_ ## Prefix; \
  if(VDecodeBool(fill)) { \
    unsigned offset = elem_width; \
    for(unsigned i = 0; i < len; i++) { \
      Prefix ## Write(runtime, ret, offset, fill); \
      offset += elem_width; \
    } \
  } \
  V_BOUNCE(k, runtime, VEncodePointer(ret, VPOINTER_OTHER)); \
V_END_FUNC \
V_BEGIN_FUNC(VList ## Prefix ## Vector, "list->" #prefix "vector", 2, k, lst) \
  int len = 0; \
  VWORD v = lst; \
  while(VWordType(v) == VPOINTER_PAIR) { \
    len++; \
    v = VDecodePair(v)->rest; \
  } \
  if(VBits(v) != VBits(VNULL)) VErrorC(runtime, "list->" #prefix "vector: not a null-terminated list\n"); \
  unsigned size = elem_width * (len+1); \
  VBlob * vec = V_ALLOCA_BLOB2((void*)&runtime, runtime, size); \
  if(!vec) VGarbageCollect2Func(runtime, (VFunc)VList ## Prefix ## Vector, argc, k, lst); \
  vec->base = VMakeSmallObject(VBUFFER); \
  vec->len = size; \
  memset(vec->buf, 0, elem_width); \
  vec->buf[0] = BUF_ ## Prefix; \
  v = lst; \
  unsigned offset = elem_width; \
  while(VWordType(v) == VPOINTER_PAIR) { \
    VPair * p = VDecodePair(v); \
    Prefix ## Write(runtime, vec, offset, p->first); \
    offset += elem_width; \
    v = p->rest; \
  } \
  V_BOUNCE(k, runtime, VEncodePointer(vec, VPOINTER_OTHER)); \
V_END_FUNC \
V_BEGIN_FUNC_MIN(V ## Prefix ## Vector, #prefix "vector", 1, k) \
  int len = argc-1; \
  unsigned size = elem_width * (len+1); \
  VBlob * vec = V_ALLOCA_SMALL_BLOB(runtime, size); \
  vec->base = VMakeSmallObject(VBUFFER); \
  vec->len = size; \
  memset(vec->buf, 0, elem_width); \
  vec->buf[0] = BUF_ ## Prefix; \
  unsigned offset = elem_width; \
  for(int i = 1; i < argc; i++) { \
    Prefix ## Write(runtime, vec, offset, self->vars[i]); \
    offset += elem_width; \
  } \
  V_BOUNCE(k, runtime, VEncodePointer(vec, VPOINTER_OTHER)); \
V_END_FUNC \
V_BEGIN_FUNC_BASIC(V ## Prefix ## VectorLength, #prefix "vector-length", 1, _buf) \
  VBlob * buf = VCheckedDecodePointer2(runtime, _buf, VBUFFER, #prefix "vector-length"); \
  if(buf->buf[0] != BUF_ ## Prefix) \
    VErrorC(runtime, #prefix "vector-length: not a vector of the right type.", _buf); \
  return VEncodeInt(buf->len/elem_width - 1); \
V_END_FUNC \
V_BEGIN_FUNC_BASIC(V ## Prefix ## VectorRef, #prefix "vector-ref", 2, _buf, _i) \
  int i = VCheckedDecodeInt2(runtime, _i, #prefix "vector-ref"); \
  VBlob * buf = VCheckedDecodePointer2(runtime, _buf, VBUFFER, #prefix "vector-ref"); \
  if(buf->buf[0] != BUF_ ## Prefix) \
    VErrorC(runtime, #prefix "vector-length: not a vector of the right type.", _buf); \
  return Prefix ## Read(runtime, buf, elem_width*(i+1)); \
V_END_FUNC \
V_BEGIN_FUNC_BASIC(V ## Prefix ## VectorSet, #prefix "vector-set!", 3, _buf, _i, val) \
  int i = VCheckedDecodeInt2(runtime, _i, #prefix "vector-set!"); \
  VBlob * buf = VCheckedDecodePointer2(runtime, _buf, VBUFFER, #prefix "vector-set!"); \
  if(buf->buf[0] != BUF_ ## Prefix) \
    VErrorC(runtime, #prefix "vector-set!: not a vector of the right type.", _buf); \
  Prefix ## Write(runtime, buf, elem_width*(i+1), val); \
  return VVOID; \
V_END_FUNC \
V_BEGIN_FUNC_RANGE(V ## Prefix ## VectorCopy, #prefix "vector-copy!", 4, 6, k, _dst, _at, _src, _start, _end) \
  VBlob * dst = VCheckedDecodePointer2(runtime, _dst, VBUFFER, #prefix "vector-copy!"); \
  VBlob * src = VCheckedDecodePointer2(runtime, _src, VBUFFER, #prefix "vector-copy!"); \
  int at = VCheckedDecodeInt2(runtime, _at, #prefix "vector-copy!"); \
  int start = VCheckedDecodeInt2(runtime, _start, #prefix "vector-copy!"); \
  int end = VCheckedDecodeInt2(runtime, _end, #prefix "vector-copy!"); \
  int nelems = end - start; \
  int atend = at + nelems; \
  if(at < 0 || start < 0 || nelems < 0) \
    VErrorC(runtime, #prefix "vector-copy!: invalid at, start, or end. at ~D, start ~D, end ~D", at, start, end); \
  /* buffers have n elements plus a tag */ \
  /* so the length of a buffer is n+1 */ \
  if(dst->len < elem_width * (atend +1) || src->len < elem_width * (end + 1)) \
    VErrorC(runtime, #prefix "vector-copy!: copy out of bounds"); \
  memmove(dst->buf + elem_width * (at + 1), src->buf + elem_width * (start + 1), elem_width * nelems); \
  V_BOUNCE(k, runtime, VVOID); \
V_END_FUNC

IMPLEMENT_BUFFER(s8, S8, 1)
IMPLEMENT_BUFFER(u8, U8, 1)
IMPLEMENT_BUFFER(s16, S16, 2)
IMPLEMENT_BUFFER(u16, U16, 2)
IMPLEMENT_BUFFER(s32, S32, 4)

IMPLEMENT_BUFFER(f32, F32, 4)
IMPLEMENT_BUFFER(f64, F64, 8)

V_BEGIN_FUNC(VReadU8Vector, "read-u8vector", 3, k, _n, _port)
  VPort * port = VCheckedDecodePointer2(runtime, _port, VPORT, "read-u8vector");
  off64_t n = VCheckedDecodeInt2(runtime, _n, "read-u8vector");
  if(n < -1) VErrorC(runtime, "read-u8vector: invalid amount of bytes to read ~D", n);

  if(n == -1) {
    errno = 0;
    off64_t start = port_ftell(port);
    if(port_fseek(port, 0, SEEK_END)) {
      if(errno == ESPIPE) {
        VErrorC(runtime, "read-u8vector: -1 for size cannot be passed to non-seekable ports");
      }
      VErrorC(runtime, "read-u8vector: io error during read");
    }
    off64_t end = port_ftell(port);
    port_fseek(port, start, SEEK_SET);
    n = end-start;
    if(n == 0)
      V_BOUNCE(k, runtime, VEOF);
  }
  VBlob * ret = V_ALLOCA_BLOB2((void*)&runtime, runtime, n+1);
  if(!ret) VGarbageCollect2Func(runtime, (VFunc)VReadU8Vector, argc, k, _n, _port);
  ret->base = VMakeSmallObject(VBUFFER);
  ret->len = n+1;
  ret->buf[0] = BUF_U8;

  if(n) {
    errno = 0;
    n = port_fread(ret->buf+1, n, port);
    ret->len = n+1;
    if(n <= 0) {
      if(port_feof(port))
        V_BOUNCE(k, runtime, VEOF);
      if(port_ferror(port))
        VErrorC(runtime, "read-u8vector: io error during read");
    }
  }
  V_BOUNCE(k, runtime, VEncodePointer(ret, VPOINTER_OTHER));
}

uint64_t VCurrentJiffyImpl();
uint64_t VJiffiesPerSecondImpl();

V_BEGIN_FUNC(VCurrentJiffy, "current-jiffy", 1, k)
#if defined(__linux) || defined(_WIN64) || defined(__EMSCRIPTEN__)
  uint64_t ret = VCurrentJiffyImpl();
  V_BOUNCE(k, runtime, VEncodeNumber(ret));
#endif
  VErrorC(runtime, "current-jiffy: unsupported platform");
}

V_BEGIN_FUNC(VJiffiesPerSecond, "jiffies-per-second", 1, k)
#if defined(__linux) || defined(_WIN64) || defined(__EMSCRIPTEN__)
  V_BOUNCE(k, runtime, VEncodeNumber(VJiffiesPerSecondImpl()));
#endif
  VErrorC(runtime, "jiffies-per-second: unsupported platform");
}

// bit banging

V_BEGIN_FUNC(VBitwiseNot, "bitwise-not", 2, k, _x)
#define NAME "bitwise-not"
  int x = VCheckedDecodeInt2(runtime, _x, NAME);
  int ret = ~x;
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VBitwiseIor, "bitwise-ior", 3, k, _a, _b)
#define NAME "bitwise-ior"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = a | b;
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VBitwiseXor, "bitwise-xor", 3, k, _a, _b)
#define NAME "bitwise-xor"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = a ^ b;
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VBitwiseAnd, "bitwise-and", 3, k, _a, _b)
#define NAME "bitwise-and"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = a & b;
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VBitwiseXnor, "bitwise-xnor", 3, k, _a, _b)
#define NAME "bitwise-xnor"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = ~(a ^ b);
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VBitwiseNand, "bitwise-nand", 3, k, _a, _b)
#define NAME "bitwise-nand"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = ~(a & b);
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VBitwiseNor, "bitwise-nor", 3, k, _a, _b)
#define NAME "bitwise-nor"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = ~(a | b);
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VBitwiseAndC1, "bitwise-andc1", 3, k, _a, _b)
#define NAME "bitwise-andc1"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = (~a & b);
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VBitwiseAndC2, "bitwise-andc1", 3, k, _a, _b)
#define NAME "bitwise-andc1"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = (a & ~b);
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VBitwiseOrC1, "bitwise-orc1", 3, k, _a, _b)
#define NAME "bitwise-orc1"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = (~a & b);
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VBitwiseOrC2, "bitwise-orc2", 3, k, _a, _b)
#define NAME "bitwise-orc2"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = (a & ~b);
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VArithmeticShift, "arithmetic-shift", 3, k, _a, _b)
#define NAME "arithmetic-shift"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret;
  if(b > 0)
    ret = a << b;
  else
    ret = a >> -b;
  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
V_BEGIN_FUNC(VBitCount, "bit-count", 2, k, _a)
#define NAME "bit-count"
  unsigned a = VCheckedDecodeInt2(runtime, _a, NAME);
  // lib concerns; probs need to turn on BMI
  // int ret = __builtin_popcount(a);
  unsigned int ret;
  for (ret = 0; a; ret++)
    a &= a - 1;

  V_BOUNCE(k, runtime, VEncodeInt(ret));
#undef NAME
}
