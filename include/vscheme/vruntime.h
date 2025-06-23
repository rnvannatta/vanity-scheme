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
 
#pragma once
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include "vmetamacro.h"

static_assert(sizeof(char) == sizeof(int8_t), "");
static_assert(sizeof(short) == sizeof(int16_t), "");
static_assert(sizeof(int) == sizeof(int32_t), "");
static_assert(sizeof(long) == sizeof(int64_t) || sizeof(long) == sizeof(int32_t), "");
static_assert(sizeof(long long) == sizeof(int64_t), "");

#ifdef __EMSCRIPTEN__
static_assert(sizeof(long) == sizeof(void*), "");
static_assert(sizeof(int32_t) == sizeof(void*), "");
typedef long ssize_t;
#ifndef VANITY_PURE_C
static_assert(0, "");
#endif
#endif

#define SYSV_CALL

#define V_UNLIKELY(x) __builtin_expect(!!(x), 0)
#define V_LIKELY(x) __builtin_expect(!!(x), 1)

/* ======================== Structures and Enums ======================= */

// If not ISNAN => a number
// 4 bits after mantissa are tag

// RTTP
// last bit, true for pointer
// 2 bits for indicating pointer types
// ==> closure, pair, other

// Otherwise a nonnumber immediate.
// TTTP
// nonpointer types: false, true, NAN, NULL, int, char

#define TAG_BIAS         0x0001000000000000ul
#define POINTER_TEST_BIT 0x0001000000000000ul
enum VPOINTER_T { VPOINTER_CLOSURE = 1*TAG_BIAS, VPOINTER_PAIR = 3*TAG_BIAS, VPOINTER_UNUSED = 5*TAG_BIAS, VPOINTER_OTHER = 7*TAG_BIAS,
// yuck
VPOINTER_FOREIGN = 8*TAG_BIAS, };
//cannot start at 0, the mantissa has to be nonzero as otherwise the number is an inf

// replace VIMM_NUMBER with VIMM_DOUBLE
enum VIMMERAL_T { VIMM_TOK = 2*TAG_BIAS, VIMM_INT = 4*TAG_BIAS, VIMM_CHAR = 6*TAG_BIAS, VIMM_NUMBER = 16*TAG_BIAS };
#define VIMM_DOUBLE VIMM_NUMBER

enum VTOK_T {
  VTOK_FALSE, VTOK_TRUE, VTOK_VOID, VTOK_NAN, VTOK_NULL, VTOK_EOF, VTOK_TOMBSTONE,
  // TO ONLY BE USED BY THE LEXER
  VTOK_LEX_OPENPAREN, VTOK_LEX_CLOSEPAREN, VTOK_LEX_VECPAREN, VTOK_LEX_DOT, VTOK_LEX_COMMENT,
  VTOK_LEX_QUOTE, VTOK_LEX_QUASIQUOTE, VTOK_LEX_UNQUOTE, VTOK_LEX_UNQUOTE_SPLICING,
  VTOK_ERROR, VTOK_LEX_VECTOR,

  VTOK_LEX_U8VECTOR,
  VTOK_LEX_S8VECTOR,
  VTOK_LEX_U16VECTOR,
  VTOK_LEX_S16VECTOR,
  VTOK_LEX_S32VECTOR,

  VTOK_LEX_F32VECTOR,
  VTOK_LEX_F64VECTOR,

  VNUM_TOKS
};

enum VTAG {
  // Eventually would be nice to replace RNG_STATE with typed pointer usage
  VTAG_START = 33,
  VENVIRONMENT = 33,
  VENV,
  VCONTENV,
  VCLOSURE,
  VPAIR,
  VCONST_PAIR,
  VVECTOR,
  VRECORD,
  VSYMBOL,
  VSTRING,
  VBUFFER,
  VRNG_STATE,
  VPORT,
  VRUNTIME,
  VHASH_TABLE,
  VFUTURE,
  VTAG_END
};
static_assert(VTAG_END < 255, "");
typedef unsigned VTAG;
typedef unsigned short VNEWTAG;

enum VBUFFER_TYPE {
  BUF_S8,
  BUF_S16,
  BUF_S32,
  BUF_S64,

  BUF_U8,
  BUF_U16,
  BUF_U32,
  BUF_U64,

  BUF_F32,
  BUF_F64,
};

enum VOBJECT_FLAGS {
  VFLAG_STATIC = 1,
  VFLAG_IMMUTABLE = 2,
  VFLAG_FINALIZER = 4,
  VFLAG_MARKED = 8,
};

typedef struct VObject {
  unsigned short tag;
  unsigned char flags;
  unsigned char pincount;
  // used for a couple purposes in mark and compact gc
  // first, during mark it holds offset information for pointer-reversal
  // second, during compact it holds the future location of the object
  int forward_offset;
} VObject;
// temporary stopgap
// used in 4 objects: env, blob, vector, hash table
// how? how do I get this eliminated? seems impossible
// I think I have to manually edit the bootstrap code... ew
typedef struct VSmallObject {
  unsigned short tag;
  unsigned char flags;
  unsigned char pincount;
} VSmallObject;

#ifdef __linux__
#define VWEAK __attribute__((weak))
#endif
#ifdef __EMSCRIPTEN__
#define VWEAK __attribute__((weak))
#endif
#ifdef _WIN64
#define VWEAK __declspec(selectany)
#endif

enum VJMP { VJMP_START, VJMP_FINISH, VJMP_GC, VJMP_ERROR, VJMP_EXIT, VJMP_AWAIT, VJMP_YIELD };
enum VRETURN_CODE { VUNDEFINED, VEXITED, VFINISHED, VYIELDED };

#define LITERAL_TYPE_MASK (15ul*TAG_BIAS)

#define LITERAL_HEADER  0x7FF0000000000000ul
#define LITERAL_PAYLOAD 0x000FFFFFFFFFFFFFul
#define POINTER_MIRROR  0xFFFF000000000000ul

#if 0
// 4 bits. NPXX
// NAN: 1000, INF: 0000

// OTHER: 0100
// CLOSURE: 0101
// PAIR: 0110

// TOK: 0001
// INT: 0010
// CHAR: 0011

// FOREIGN: 1001

// NAN and INF are placed such that they're 1000 and 0000 respectively. This way you can test
// if a literal is a double by merely checking that it's real or the bottom 3 bits of tag are 0
// second top bit is a pointer bit, so all pointers have a 4 in them.

// checking that a type is an type other than double is merely checking that the top 16 bits are all
// set appropriately.

// note that, ofc the sign bit is undefined for a true nan and clearly flipped for an inf
// not to mention infs don't have the literal header as do nans

enum V_TYPE_T { VIMM_TOK = 1*TAG_BIAS, VIMM_INT = 2*TAG_BIAS, VIMM_CHAR = 3*TAG_BIAS,
  VPTR_OTHER = 4*TAG_BIAS, VPTR_PAIR = 5*CLOSURE, VPTR_PAIR=6*TAG_BIAS,
  VPTR_FOREIGN = 9*TAG_BIAS

  VIMM_INF = 0, VIMM_NAN = 8*TAG_BIAS, VIMM_REAL=16*TAG_BIAS, VIMM_DOUBLE = 17*TAG_BIAS };
#endif

#define VNAN VWord(LITERAL_HEADER | VIMM_TOK | VTOK_NAN)
#define VNULL VWord(LITERAL_HEADER | VIMM_TOK | VTOK_NULL)
#define VTRUE VWord(LITERAL_HEADER | VIMM_TOK | VTOK_TRUE)
#define VFALSE VWord(LITERAL_HEADER | VIMM_TOK | VTOK_FALSE)
#define VVOID VWord(LITERAL_HEADER | VIMM_TOK | VTOK_VOID)
#define VEOF VWord(LITERAL_HEADER | VIMM_TOK | VTOK_EOF)
#define VTOMBSTONE VWord(LITERAL_HEADER | VIMM_TOK | VTOK_TOMBSTONE)
#define VERROR VWord(LITERAL_HEADER| VIMM_TOK | VTOK_ERROR)
#define VNULLPTR VWord(LITERAL_HEADER | VPOINTER_FOREIGN)

typedef struct VWORD {
  uint64_t integer;
} VWORD;

typedef struct VRuntime VRuntime;
typedef struct VEnv VEnv;

#define V_ARG_CHECK3(runtime, func, nargs, num_vars) \
  do { \
    if(V_UNLIKELY(nargs != num_vars)) { \
      VErrorC(runtime, "Incorrect number of arguments to ~Z, got ~D, need ~D", func, num_vars, nargs); \
      __builtin_unreachable(); \
    } } while(0)
#define V_ARG_MIN3(runtime, func, nargs, num_vars) \
  do { \
    if(V_UNLIKELY(num_vars < nargs)) { \
      VErrorC(runtime, "Incorrect number of arguments to ~Z, got ~D, need ~D", func, num_vars, nargs); \
      __builtin_unreachable(); \
    } } while(0)
#define V_ARG_RANGE3(runtime, func, nargmin, nargmax, num_vars) \
  do { \
    if(V_UNLIKELY(num_vars < nargmin || num_vars > nargmax)) { \
      VErrorC(runtime, "Incorrect number of arguments to ~Z, got ~D, need between ~D and ~D", func, num_vars, nargmin, nargmax); \
      __builtin_unreachable(); \
    } } while(0)
#define V_ADD_WORD(x) , VWORD x
#ifdef VANITY_PURE_C
#define V_DECLARE_FUNC(name, ...) void name(VRuntime * runtime, VEnv * statics, int argc, VEnv * self);
#define V_DECLARE_FUNC_MIN(name, ...) void name(VRuntime * runtime, VEnv * statics, int argc, VEnv * self);
#define V_INIT_VAR(x) VWORD x = _var_cursor < argc ? self->vars[_var_cursor++] : VVOID;
#define V_BEGIN_FUNC(name, scmname, nargs, ...) \
  void name(VRuntime * runtime, VEnv * statics, int argc, VEnv * self) { \
    V_ARG_CHECK3(runtime, scmname, nargs, argc); \
    int _var_cursor = 0; \
    __VA_OPT__(MAP(V_INIT_VAR, __VA_ARGS__))
#define V_BEGIN_FUNC_MIN(name, scmname, nargs, ...) \
  void name(VRuntime * runtime, VEnv * statics, int argc, VEnv * self) { \
    V_ARG_MIN3(runtime, scmname, nargs, argc); \
    int _var_cursor = 0; \
    __VA_OPT__(MAP(V_INIT_VAR, __VA_ARGS__))
#define V_BEGIN_FUNC_RANGE(name, scmname, nargs_min, nargs_max, ...) \
  void name(VRuntime * runtime, VEnv * statics, int argc, VEnv * self) { \
    V_ARG_RANGE3(runtime, scmname, nargs_min, nargs_max, argc); \
    int _var_cursor = 0; \
    __VA_OPT__(MAP(V_INIT_VAR, __VA_ARGS__))

#define V_END_FUNC }
#else
#define V_DECLARE_FUNC(name, ...) void name(VRuntime * runtime, VEnv * statics, int argc __VA_OPT__(MAP(V_ADD_WORD, __VA_ARGS__)));
#define V_DECLARE_FUNC_MIN(name, ...) void name(VRuntime * runtime, VEnv * statics, int argc __VA_OPT__(MAP(V_ADD_WORD, __VA_ARGS__)), ...);
#define V_BEGIN_FUNC(name, scmname, nargs, ...) \
  void name(VRuntime * runtime, VEnv * statics, int argc __VA_OPT__(MAP(V_ADD_WORD, __VA_ARGS__))) { \
    V_ARG_CHECK3(runtime, scmname, nargs, argc); \
    enum { _argcount = VARG_COUNT(__VA_ARGS__), }; \
    _Static_assert(_argcount == nargs, "incorrect nargs in V_BEGIN_FUNC"); \
    struct { VEnv self; VWORD args[_argcount]; } _self = { \
      .args = { __VA_ARGS__ }, \
    }; \
    VEnv * self = &_self.self; \
    VInitEnv(self, _argcount, _argcount, statics);

#define V_INIT_VAR(x) self->vars[_var_cursor++] = x;
#define V_BEGIN_FUNC_MIN(name, scmname, nargs, ...) \
  void name(VRuntime * runtime, VEnv * statics, int argc __VA_OPT__(MAP(V_ADD_WORD, __VA_ARGS__)), ...) { \
    V_ARG_MIN3(runtime, scmname, nargs, argc); \
    VEnv * self = alloca(sizeof(VEnv) + sizeof(VWORD[argc])); \
    int _var_cursor = 0; \
    __VA_OPT__(MAP(V_INIT_VAR, __VA_ARGS__)) \
    va_list _args; va_start(_args, V_LAST_ARG(argc __VA_OPT__(,) __VA_ARGS__)); \
    for(; _var_cursor < argc; _var_cursor++) \
      self->vars[_var_cursor] = va_arg(_args, VWORD); \
    va_end(_args); \
    VInitEnv(self, argc, argc, statics);

#define V_BEGIN_FUNC_RANGE(name, scmname, nargs_min, nargs_max, ...) \
  void name(VRuntime * runtime, VEnv * statics, int argc __VA_OPT__(MAP(V_ADD_WORD, __VA_ARGS__))) { \
    V_ARG_RANGE3(runtime, scmname, nargs_min, nargs_max, argc); \
    VEnv * self = alloca(sizeof(VEnv) + sizeof(VWORD[argc])); \
    int _var_cursor = 0; \
    __VA_OPT__(MAP(V_INIT_VAR, __VA_ARGS__)) \
    VInitEnv(self, argc, argc, statics);

#define V_END_FUNC }
#endif

#define V_DECLARE_FUNC_BASIC(name, ...) \
  VWORD _VBasic_ ## name(VRuntime * runtime, VEnv * statics __VA_OPT__(MAP(V_ADD_WORD, __VA_ARGS__))); \
  V_DECLARE_FUNC(name, k __VA_OPT__(,) __VA_ARGS__);
#define V_BEGIN_FUNC_BASIC(name, scmname, nargs, ...) \
  VWORD _VBasic_ ## name(VRuntime * runtime, VEnv * statics __VA_OPT__(MAP(V_ADD_WORD, __VA_ARGS__))); \
  V_BEGIN_FUNC(name, scmname, (nargs)+1, k __VA_OPT__(,) __VA_ARGS__) \
    VWORD ret = _VBasic_ ## name(runtime, statics __VA_OPT__(,) __VA_ARGS__); \
    V_CALL(k, runtime, ret); \
  V_END_FUNC \
  VWORD _VBasic_ ## name(VRuntime * runtime, VEnv * statics __VA_OPT__(MAP(V_ADD_WORD, __VA_ARGS__))) {

#define V_CORE_ARGS VRuntime * runtime, VEnv * statics, int argc
typedef V_DECLARE_FUNC_MIN((*VFunc));
typedef V_DECLARE_FUNC((*VThunk), k);

#ifndef VANITY_PURE_C
#ifdef __linux__
#define ARGC_REG "edx"
#endif
#ifdef _WIN64
#define ARGC_REG "r8d"

#endif

#endif

#ifdef DONT_INLINE
static inline uint64_t VBits(VWORD v) {
  uint64_t bits;
  memcpy(&bits, &v, sizeof v);
  return bits;
}
static inline VWORD VWord(uint64_t bits) {
  VWORD v;
  memcpy(&v, &bits, sizeof bits);
  return v;
}
#else
#define VBits(_v) ((_v).integer)
#define VWord(_bits) ((VWORD){ .integer = _bits })
#endif

typedef struct VEnv {
  VSmallObject base;
  unsigned short num_vars;
  unsigned short var_len;
  struct VEnv * up;
  VWORD vars[];
} VEnv;

typedef struct VClosure {
  VObject base;
  VFunc func;
  VEnv * env;
} VClosure;

typedef struct VPair {
  VObject base;
  VWORD first;
  VWORD rest;
} VPair;

typedef struct VVector {
  VSmallObject base;
  unsigned len;
  VWORD arr[];
} VVector;

enum HASH_FLAGS_T {
  HFLAG_CHAINED = 1,
  HFLAG_EQ = 2,
  HFLAG_EQV = 4,
  HFLAG_DIRTY = 8,
};

typedef struct VHashTable {
  VSmallObject base;
  int flags;
  int occupancy;
  float load_factor;
  VWORD vec;
  VWORD eq;
  VWORD hash;
} VHashTable;

typedef struct VBlob {
  VSmallObject base;
  unsigned len;
  char buf[];
} VBlob;

enum PORT_FLAG_T {
  PFLAG_READ = 1,
  PFLAG_WRITE = 2,
  PFLAG_OSTRING = 4,
  PFLAG_PROCESS = 8,
  PFLAG_NOCLOSE = 16,
  PFLAG_DFILE = 32,
};

typedef struct DFILE DFILE;
typedef struct VPort {
  VSmallObject base;
  int line;
  union {
    FILE * stream;
    DFILE * dstream;
  };
  unsigned flags;
} VPort;

typedef struct VFiber VFiber;
typedef struct VFiberLock VFiberLock;
typedef struct VFuture {
  VObject base;
  VFiberLock * lock;
  VFiber * _Atomic fiber;
  VWORD val;
} VFuture;

typedef struct VDynamic {
  VObject base;
  VWORD key;
  VWORD val;
  struct VDynamic * up;
} VDynamic;

typedef struct VEnvironment {
  VObject base;        //  0
  VRuntime * runtime;  //  8
  VEnv * static_chain; // 16
  unsigned argc;       // 24
  VWORD argv[];        // 32+
} VEnvironment;


typedef struct {
  uint64_t hash;
  VWORD symbol;
  VWORD value;
} VGlobalEntry;

#define V_CALL_HISTORY_LEN 16
typedef struct VDebugInfo {
  char const * name;
} VDebugInfo;

static inline bool VIsEq(VWORD a, VWORD b) { return VBits(a) == VBits(b); }
void VErrorC(VRuntime * runtime, const char *, ...);

// Used in inline functions
typedef struct VPublicRuntime {
  VObject base;
  char * VStackStart;
  ssize_t VStackLen;
  ssize_t VStackSize;
  VDebugInfo * VCallHistory[V_CALL_HISTORY_LEN];
  unsigned VCallHistoryCursor;
#ifdef __EMSCRIPTEN__
  // emscripten has TWO stacks. the wasm argument stack, which
  // has no way to query it, and the linear memory stack which
  // is used for local variables which does have queries.
  // to get around the inability to query the wasm stack, we
  // simply gc after N calls. Which means every function call
  // has to decrement this.
  int max_callgas;
  int callgas;
#endif
} VPublicRuntime;
typedef struct VRuntime VRuntime;

#ifdef __EMSCRIPTEN__
#define VSpendCallgas(runtime) (((VPublicRuntime*)runtime)->callgas--)
#else
#define VSpendCallgas(runtime)
#endif

/* ======================== Encoding and Decoding ======================= */

// Immediate types

static inline VWORD VEncodeToken(unsigned tok) { return VWord(LITERAL_HEADER | VIMM_TOK | tok); }

static inline unsigned VDecodeToken(VWORD v) {
  return (unsigned)(VBits(v) & 0xFFFFFFFF);
}

static inline VWORD VEncodeInt(int i) {
  return VWord(LITERAL_HEADER | VIMM_INT | (UINT32_MAX & (unsigned)i));
}

static inline int VDecodeInt(VWORD v) {
  return VBits(v) & UINT32_MAX;
}

static inline VWORD VEncodeChar(char c) {
  return VWord(LITERAL_HEADER | VIMM_CHAR | (unsigned char)c);
}

static inline char VDecodeChar(VWORD v) {
  return (char)(VBits(v) & 0xFF);
}

#ifdef DONT_INLINE
static inline VWORD VEncodeBool(bool b) {
  return b ? VTRUE : VFALSE;
}

static inline bool VDecodeBool(VWORD v) {
  return VBits(v) != VBits(VFALSE);
}
#else
#define VEncodeBool(_b) (_b ? VTRUE : VFALSE)
#define VDecodeBool(_v) (VBits(_v) != VBits(VFALSE))
#endif

// TODO remove usage of this function
static inline VWORD VEncodeNumber(double d) {
  if(isnan(d)) {
    return VNAN;
  } else {
    VWORD v;
    memcpy(&v, &d, sizeof v);
    return v;
  }
}
static inline VWORD VEncodeDouble(double d) {
  if(isnan(d)) {
    return VNAN;
  } else {
    VWORD v;
    memcpy(&v, &d, sizeof v);
    return v;
  }
}

static inline double VDecodeNumber(VWORD v) {
  double d;
  memcpy(&d, &v, sizeof v);
  return d;
}

// Pointer types

#ifdef DONT_INLINE
static inline VWORD VEncodePointer(void * v, enum VPOINTER_T type) {
  uint64_t bits = (uint64_t)(intptr_t)v;
  bits &= ~POINTER_MIRROR;
  bits |= type;
  bits |= LITERAL_HEADER;
  return VWord(bits);
}

static_assert(-1ll == -1ll >> 63ll, "");
static inline VWORD * VDecodePointer(VWORD v) {
  int64_t bits = (int64_t)VBits(v);
  bits = (bits << 16) >> 16;
  return (VWORD*)(intptr_t)bits;
}

static inline VWORD VEncodeClosure(VClosure * c) {
  return VEncodePointer(c, VPOINTER_CLOSURE);
}

static inline VClosure * VDecodeClosure(VWORD v) {
  return (VClosure*)VDecodePointer(v);
}

static inline VWORD VEncodePair(VPair * p) {
  return VEncodePointer(p, VPOINTER_PAIR);
}
static inline VPair * VDecodePair(VWORD v) {
  return (VPair*)VDecodePointer(v);
}
#else
#define VEncodePointer(_v, _type) VWord( (((uint64_t)(intptr_t)_v) & ~POINTER_MIRROR) | _type | LITERAL_HEADER)
#define VDecodePointer(_v) ((VWORD*)(intptr_t)( ((int64_t)VBits(_v) << 16) >> 16))

#define VEncodeClosure(_c) (VEncodePointer(_c, VPOINTER_CLOSURE))
#define VDecodeClosure(_c) ((VClosure*)VDecodePointer(_c))

#define VEncodePair(_p) (VEncodePointer(_p, VPOINTER_PAIR))
#define VDecodePair(_p) ((VPair*)VDecodePointer(_p))
#endif

static inline VWORD VEncodeForeignPointer(void * v) {
  return VEncodePointer(v, VPOINTER_FOREIGN);
}

static inline VBlob * VDecodeBlob(VWORD v) {
  return (VBlob*) VDecodePointer(v);
}
static inline VBlob * VDecodeString(VWORD v) {
  return (VBlob*) VDecodePointer(v);
}
static inline VBlob * VDecodeSymbol(VWORD v) {
  return (VBlob*) VDecodePointer(v);
}

static inline VVector * VDecodeVector(VWORD v) {
  return (VVector*) VDecodePointer(v);
}

/* ======================== Type Checking ======================= */

static inline bool VIsToken(VWORD v, int tok) { return VBits(v) == (LITERAL_HEADER | VIMM_TOK | tok); }

// TODO replace all uses with VIsDouble
static inline bool VIsNumber(VWORD v) {
  uint64_t bits;
  memcpy(&bits, &v, sizeof v);
  // either a standard number, or an inf, or the canonical NAN
  if((bits & LITERAL_HEADER) == LITERAL_HEADER) {
    bits = bits & LITERAL_PAYLOAD;
    if(bits) {
      return (bits == (VIMM_TOK | VTOK_NAN));
    } else {
      return true;
    }
  } else {
    return true;
  }
}
static inline bool VIsDouble(VWORD v) {
  return VIsNumber(v);
}

static inline uint64_t VWordType(VWORD v) {
  uint64_t bits = VBits(v);
  if(VIsDouble(v)) {
    return VIMM_DOUBLE;
  } else {
    return bits & LITERAL_TYPE_MASK;
  }
}

static inline bool VIsPointer(VWORD v) {
  return !VIsDouble(v) && (VBits(v) & POINTER_TEST_BIT);
}
#define VIsManagedPointer VIsPointer
static inline bool VIsForeignPointer(VWORD v) {
  return !VIsDouble(v) && (VBits(v) & VPOINTER_FOREIGN) == VPOINTER_FOREIGN;
}
static inline bool VIsAnyPointer(VWORD v) {
  uint64_t bits = VBits(v);
  return !VIsDouble(v) && ((bits & POINTER_TEST_BIT) || (bits & VPOINTER_FOREIGN) == VPOINTER_FOREIGN);
}

static inline bool VIsBlob(VWORD v) {
  if(VIsPointer(v)) {
    VNEWTAG t = *(VNEWTAG*)VDecodePointer(v);
    switch(t) {
      case VSTRING:
      case VSYMBOL:
      case VBUFFER:
      case VRNG_STATE:
        return true;
      default:
        return false;
    }
  }
  return false;
}
static inline bool VIsMutableBlob(VWORD v) {
  if(VIsPointer(v)) {
    VNEWTAG t = *(VNEWTAG*)VDecodePointer(v);
    switch(t) {
      case VSTRING:
      case VBUFFER:
      case VRNG_STATE:
        return true;
      default:
        return false;
    }
  }
  return false;
}

static inline bool VIsString(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VSTRING;
}

static inline bool VIsSymbol(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VSYMBOL;
}

static inline bool VIsVector(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VVECTOR;
}

static inline bool VIsRecord(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VRECORD;
}

static inline bool VIsHashTable(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VHASH_TABLE;
}

static inline bool VIsPort(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VPORT;
}
static inline bool VIsFuture(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VFUTURE;
}

static inline bool VIsPointerTo(VWORD v, VNEWTAG tag) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == tag;
}

/* ======================== Checked Decoding ======================= */

static inline int VCheckedDecodeInt2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VWordType(v) != VIMM_INT) VErrorC(runtime, "~Z: not an int: ~S\n", proc, v);
  return VDecodeInt(v);
}

static inline double VCheckedDecodeDouble2(VRuntime * runtime, VWORD v, char const * proc) {
  if(!VIsDouble(v)) VErrorC(runtime, "~Z: not a double: ~S\n", proc, v);
  return VDecodeNumber(v);
}

static inline double VCheckedDecodeNumber2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VIsDouble(v)) return VDecodeNumber(v);
  if(VWordType(v) != VIMM_INT) VErrorC(runtime, "~Z: neither an int nor a double: ~S\n", proc, v);
  return VDecodeInt(v);

}

static inline char VCheckedDecodeChar2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VWordType(v) != VIMM_CHAR) VErrorC(runtime, "~Z: not a char: ~S\n", proc, v);
  return VDecodeChar(v);
}

static inline VClosure * VCheckedDecodeClosure2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VWordType(v) != VPOINTER_CLOSURE) VErrorC(runtime, "~Z: not a closure: ~S\n", proc, v);
  return (VClosure*)VDecodePointer(v);
}
static inline VClosure * VDecodeClosureApply2(VRuntime * runtime, VWORD v) {
  if(VWordType(v) != VPOINTER_CLOSURE) VErrorC(runtime, "tried to call non-closure: ~s\n", v);
  return (VClosure*)VDecodePointer(v);
}
static inline VPair * VCheckedDecodePair2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VWordType(v) != VPOINTER_PAIR) VErrorC(runtime, "~Z: not a pair: ~S\n", proc, v);
  return (VPair*)VDecodePointer(v);
}

static inline void * VCheckedDecodePointer2(VRuntime * runtime, VWORD v, VNEWTAG tag, char const * proc) {
  if(VIsPointer(v)) {
    VNEWTAG * ptr = (VNEWTAG*)VDecodePointer(v);
    if(*ptr == tag) {
      return (void*)ptr;
    }
  }
  VErrorC(runtime, "~Z: not a pointer of the right type: ~S\n", proc, v);
  return NULL;
}

static inline void * VCheckedDecodeForeignPointer2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VWordType(v) != VPOINTER_FOREIGN) VErrorC(runtime, "~Z: not a foreign pointer: ~S\n", proc, v);
  return (void*)VDecodePointer(v);
}

static inline VBlob * VCheckedDecodeBlob2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VIsBlob(v)) return (VBlob*) VDecodePointer(v);
  VErrorC(runtime, "~Z: not a blob: ~S\n", proc, v);
  return NULL;
}
static inline VBlob * VCheckedDecodeString2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VIsString(v)) return (VBlob*) VDecodePointer(v);
  VErrorC(runtime, "~Z: not a string: ~S\n", proc, v);
  return NULL;
}
static inline VBlob * VCheckedDecodeSymbol2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VIsSymbol(v)) return (VBlob*) VDecodePointer(v);
  VErrorC(runtime, "~Z: not a symbol: ~S\n", proc, v);
  return NULL;
}

static inline VVector * VCheckedDecodeVector2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VIsVector(v)) return (VVector*) VDecodePointer(v);
  VErrorC(runtime, "~Z: not a vector: ~S\n", proc, v);
  return NULL;
}

static inline VVector * VCheckedDecodeRecord2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VIsRecord(v)) return (VVector*) VDecodePointer(v);
  VErrorC(runtime, "~Z: not a record: ~S\n", proc, v);
  return NULL;
}

static inline VHashTable * VCheckedDecodeHashTable2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VIsHashTable(v)) return (VHashTable*) VDecodePointer(v);
  VErrorC(runtime, "~Z: not a hash table: ~S\n", proc, v);
  return NULL;
}

static inline VPort * VCheckedDecodePort2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VIsPort(v)) return (VPort*) VDecodePointer(v);
  VErrorC(runtime, "~Z: not a port: ~S\n", proc, v);
  return NULL;
}

static inline VFuture * VCheckedDecodeFuture2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VIsFuture(v)) return (VFuture*) VDecodePointer(v);
  VErrorC(runtime, "~Z: not a future: ~S\n", proc, v);
  return NULL;
}

/* ======================== C FFI Decoding ======================= */

static inline int VBufferByteWidth(VRuntime * runtime, enum VBUFFER_TYPE type) {
  switch(type) {
    case BUF_S8:
    case BUF_U8:
      return 1;
    case BUF_S16:
    case BUF_U16:
      return 2;
    case BUF_S32:
    case BUF_U32:
    case BUF_F32:
      return 4;
    case BUF_S64:
    case BUF_U64:
    case BUF_F64:
      return 8;
    default:
      VErrorC(runtime, "invalid typebuffer has tag %d.", type);
      return 0;
  };
}

static inline bool VCheckedDecodeBool2(VRuntime * runtime, VWORD v, char const * proc) {
  return VDecodeBool(v);
}
static inline VWORD VCheckedDecodeVWORD2(VRuntime * runtime, VWORD v, char const * proc) {
  return v;
}

// I understand these are obvious, but srsly why not
#define UINT8_MIN 0
#define UINT16_MIN 0
#define UINT32_MIN 0
#define UINT64_MIN 0

#define V_MAKE_DECODE_INT2(type, Type, TYPE) \
 static inline type VCheckedDecode ## Type ## 2(VRuntime * runtime, VWORD v, char const * proc) { \
    if(VWordType(v) != VIMM_INT) VErrorC(runtime, "~Z: not an int: ~S\n", proc, v); \
    int dec = VDecodeInt(v); \
    if(!(TYPE ## _MIN < dec && dec <= TYPE ## _MAX)) VErrorC(runtime, "~Z: overflow casting to " # type ": ~S\n", proc, v); \
    return (type)dec; \
 }

V_MAKE_DECODE_INT2(int8_t, SignedChar, INT8);
V_MAKE_DECODE_INT2(int16_t, Short, INT16);

V_MAKE_DECODE_INT2(uint8_t, UnsignedChar, UINT8);
V_MAKE_DECODE_INT2(uint16_t, UnsignedShort, UINT16);

static inline char * VCheckedDecodeCString2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VIsString(v)) {
    return VDecodeBlob(v)->buf;
  } else if(VIsForeignPointer(v)) {
    return (void*)VDecodePointer(v);
  }
  VErrorC(runtime, "~Z: not castable to c string: ~S\n", proc, v);
  return NULL;
}
static inline char const * VCheckedDecodeConstCString2(VRuntime * runtime, VWORD v, char const * proc) {
  if(VIsString(v) || VIsSymbol(v)) {
    return VDecodeBlob(v)->buf;
  } else if(VIsForeignPointer(v)) {
    return (void*)VDecodePointer(v);
  }
  VErrorC(runtime, "~Z: not castable to const c string: ~S\n", proc, v);
  return NULL;
}

static inline void * VCheckedDecodeVoidPtr2(VRuntime * runtime, VWORD v, char const * proc) {
  // void pointers accept any non-const foreign ponters and
  // any non-const buffers, so any buffer except symbols
  if(VIsForeignPointer(v)) {
    return (void*)VDecodePointer(v);
  } else if(VIsPointerTo(v, VBUFFER)) {
    VBlob * b = VDecodeBlob(v);
    int w = VBufferByteWidth(runtime, b->buf[0]);
    return (void*)(b->buf + w);
  } else if(VIsMutableBlob(v)) {
    return VDecodeBlob(v)->buf;
  }
  VErrorC(runtime, "~Z: not castable to void pointer: ~S\n", proc, v);
  return NULL;
}
static inline void const * VCheckedDecodeConstVoidPtr2(VRuntime * runtime, VWORD v, char const * proc) {
  // const void pointers accept any foreign ponters and
  // any buffers, including constant buffers
  if(VIsForeignPointer(v)) {
    return VCheckedDecodeForeignPointer2(runtime, v, proc);
  } else if(VIsPointerTo(v, VBUFFER)) {
    VBlob * b = VDecodeBlob(v);
    int w = VBufferByteWidth(runtime, b->buf[0]);
    return (void*)(b->buf + w);
  } else if(VIsBlob(v)) {
    return VDecodeBlob(v)->buf;
  }
  VErrorC(runtime, "~Z: not castable to const void pointer: ~S\n", proc, v);
  return NULL;
}

#define IMPLEMENT_DECODE_BUFFER(Prefix, ctype) \
static inline ctype * VCheckedDecode ## Prefix ## Ptr(VRuntime * runtime, VWORD v, char const * proc) { \
  if(VIsForeignPointer(v)) { \
    return (void*)VDecodePointer(v); \
  } \
  if(VIsPointerTo(v, VBUFFER)) { \
    VBlob * b = VDecodeBlob(v); \
    if(b->buf[0] == BUF_ ## Prefix) \
      return (ctype*)(b->buf + sizeof(ctype)); \
  } \
  VErrorC(runtime, "~Z: not castable to float pointer: ~S\n", proc, v); \
  return NULL; \
}

IMPLEMENT_DECODE_BUFFER(F32, float)
IMPLEMENT_DECODE_BUFFER(F64, double)

IMPLEMENT_DECODE_BUFFER(S32, int)
IMPLEMENT_DECODE_BUFFER(U16, uint16_t)
IMPLEMENT_DECODE_BUFFER(S16, int16_t)
IMPLEMENT_DECODE_BUFFER(U8, uint8_t)
IMPLEMENT_DECODE_BUFFER(S8, int8_t)

/* ======================== Construction ======================= */

#ifdef DONT_INLINE

//#define ALWAYS_INLINE __attribute__((always_inline))
#define ALWAYS_INLINE

ALWAYS_INLINE static inline VObject VMakeObject(VNEWTAG tag) {
  return (VObject) {
    .tag = tag,
    .flags = 0,
    .pincount = 0,
    .forward_offset = 0
  };
}
ALWAYS_INLINE static inline VSmallObject VMakeSmallObject(VNEWTAG tag) {
  return (VSmallObject) {
    .tag = tag,
    .flags = 0,
    .pincount = 0,
  };
}

ALWAYS_INLINE static inline void VInitEnv(VEnv * env, unsigned short num_vars, unsigned short var_len, VEnv * upenv) {
  *env = (VEnv) { .base = VMakeSmallObject(VENV), .num_vars = num_vars, .var_len = var_len, .up = upenv };
}

ALWAYS_INLINE static inline VPort VMakePortStream(FILE * stream, unsigned flags) {
  return (VPort) { .base = VMakeSmallObject(VPORT), .line = 1, .stream = stream, .flags = flags };
}
ALWAYS_INLINE static inline VPort VMakePortStream2(DFILE * dstream, unsigned flags) {
  return (VPort) { .base = VMakeSmallObject(VPORT), .line = 1, .dstream = dstream, .flags = flags | PFLAG_DFILE };
}

ALWAYS_INLINE static inline VClosure VMakeClosure2(VFunc f, VEnv * env) {
  return (VClosure) {
    .base = VMakeObject(VCLOSURE),
    .func = f,
    .env = env,
  };
}

ALWAYS_INLINE static inline VPair VMakePair(VWORD a, VWORD b) {
  return (VPair) { .base = VMakeObject(VPAIR), .first = a, .rest = b };
}
#else
#define VMakeObject(_tag) ((VObject) { .tag = _tag, .flags = 0, .pincount = 0, .forward_offset = 0 })
#define VMakeSmallObject(_tag) ((VSmallObject) { .tag = _tag, .flags = 0, .pincount = 0 })
#define VInitEnv(_env, _num_vars, _var_len, _upenv) \
  do { *_env = (VEnv) { .base = VMakeSmallObject(VENV), .num_vars = _num_vars, .var_len = _var_len, .up = _upenv }; } while(0)
#define VMakePortStream(_stream, _flags) ((VPort) { .base = VMakeSmallObject(VPORT), .line = 1, .stream = _stream, .flags = _flags })
#define VMakePortStream2(_stream, _flags) ((VPort) { .base = VMakeSmallObject(VPORT), .line = 1, .dstream = _stream, .flags = _flags })
#define VMakeClosure2(_f, _env) ((VClosure) { .base = VMakeObject(VCLOSURE), .func = _f, .env = _env }) 
#define VMakePair(_a, _b) ((VPair) { .base = VMakeObject(VPAIR), .first = _a, .rest = _b })
#endif

/*******************************************************************************/

static inline VPair * VFillPair(VPair * pair, VWORD a, VWORD b) {
  pair->base = VMakeObject(VPAIR);
  pair->first = a;
  pair->rest = b;
  return pair;
}
static inline VWORD VFillEncodePair(VPair * pair, VWORD a, VWORD b) {
  pair->base = VMakeObject(VPAIR);
  pair->first = a;
  pair->rest = b;
  return VEncodePair(pair);
}

enum { V_HUGE_ALLOC_THRESHOLD = 128 * 1024 };
void * VHugeAlloc(VRuntime * runtime, size_t size, bool plain_old_data);

#define V_ALLOCA_BLOB(len) alloca(sizeof(VBlob) + len);
static inline VBlob * VFillBlob(VBlob * blob, VNEWTAG tag, unsigned len, char const * dat) {
  blob->base = VMakeSmallObject(tag);
  blob->len = len;
  memcpy(blob->buf, dat, len);
  return blob;
}
#define V_ALLOCA_BLOB2(last_alloced, runtime, len) \
  ({ \
    VBlob * _ret = NULL; \
    if(len > INT32_MAX) \
      VErrorC(runtime, "cannot allocate blob with more than ~D elements, asked to allocate one with ~D\n", INT32_MAX, len); \
    size_t _size = sizeof(VBlob) + len; \
    if(_size >= V_HUGE_ALLOC_THRESHOLD) { \
      _ret = VHugeAlloc(runtime, _size, true); \
    } else { \
    if(!VStackOverflowNoInline2(runtime, ((char*)last_alloced) - _size)) \
      _ret = alloca(_size); \
    } \
    _ret;\
  })

#define V_STATIC_STRING(name, str) struct { VBlob b; char buf[sizeof str]; } name = { { .base = { .tag =VSTRING, .flags = 0, .pincount = 0, }, .len = sizeof str }, str };

#define V_ALLOCA_VECTOR(len) alloca(sizeof(VVector) + sizeof(VWORD[len]))
#define V_ALLOCA_VECTOR2(last_alloced, runtime, len) \
  ({ \
    VVector * _ret = NULL; \
    if(len > 65536) \
      VErrorC(runtime, "cannot allocate vector with more than 65536 elements, asked to allocate one with ~D\n", len); \
    size_t _size = sizeof(VVector) + sizeof(VWORD[len]); \
    if(!VStackOverflowNoInline2(runtime, ((char*)last_alloced) - _size)) \
      _ret = alloca(_size); \
    _ret;\
  })


static inline VVector * VFillVector(VVector * vec, VNEWTAG tag, unsigned len, VWORD const * dat) {
  vec->base = VMakeSmallObject(tag);
  vec->len = len;
  memcpy(vec->arr, dat, sizeof(VWORD[len]));
  return vec;
}

/* ======================== Misc ======================= */

#ifdef __EMSCRIPTEN__
void VRegisterSym(char const * name, void * ptr);
#endif

// stores constants like the literal 'foo or the value of ##sys.+
// necessary because Windows doesn't have weak symbols lmao
void * VLookupConstant(char * name, void * val);

static inline bool VCheckSymbolEqv(VWORD a, VWORD b) {
  if(VBits(a) == VBits(b))
    return true;
  VBlob * blob_a = (VBlob*)VDecodePointer(a);
  VBlob * blob_b = (VBlob*)VDecodePointer(b);
  return !strcmp(blob_a->buf, blob_b->buf);
}

VGlobalEntry * VLookupGlobalEntryFast2(VRuntime * runtime, char const * sym);
static inline VWORD VLookupGlobalVarFast2(VRuntime * runtime, char const * sym) {
  VGlobalEntry * place = VLookupGlobalEntryFast2(runtime, sym);
  if(place)
    return place->value;
  VErrorC(runtime, "Symbol not found: ~z\n", sym);
  return VVOID;
}

#undef environ
void VSysApply(VFunc func, VEnvironment * environ);

static inline VWORD VGetArg(VEnv * env, int up, int var) {
  while(up) {
    env = env->up;
    up--;
  }
  return env->vars[var];
}

void VRecordCallNoInline(VRuntime * runtime, VDebugInfo * debug);
static inline void VRecordCall2(VRuntime * _runtime, VDebugInfo * debug) {
  VPublicRuntime * runtime = (VPublicRuntime*)_runtime;
  runtime->VCallHistory[++runtime->VCallHistoryCursor % V_CALL_HISTORY_LEN] = debug;
}

#define V_GATHER_VARARGS_VARIADIC(_varargs, numfixed, argc, start) do { \
  va_list _vlist; va_start(_vlist, start); \
  VPair _root_pair = VMakePair(VVOID, VNULL); \
  VPair * _cur = &_root_pair; \
  for(int i = numfixed; i < argc; i++) { \
    VPair * p = alloca(sizeof(VPair)); \
    *p = VMakePair(va_arg(_vlist, VWORD), VNULL); \
    _cur->rest = VEncodePair(p); \
    _cur = p; \
  } \
  va_end(_vlist); \
  *_varargs = _root_pair.rest; \
} while(0)
#define V_GATHER_VARARGS_PUREC(_varargs, numfixed, argc) do { \
  VPair _root_pair = VMakePair(VVOID, VNULL); \
  VPair * _cur = &_root_pair; \
  for(int i = numfixed; i < argc; i++) { \
    VPair * p = alloca(sizeof(VPair)); \
    *p = VMakePair(self->vars[i], VNULL); \
    _cur->rest = VEncodePair(p); \
    _cur = p; \
  } \
  *_varargs = _root_pair.rest; \
} while(0)

void VCallFuncWithGC(VRuntime* runtime, VFunc func, int argc, ...);
void VCallDecodedWithGC(VRuntime* runtime, VClosure * closure, int argc, ...);

#ifdef VANITY_PURE_C
#define V_CALL_FUNC(fnc, nv, runtime, ...) \
  do { \
    VEnv * _upenv = nv; \
    enum { _argcount = VARG_COUNT(__VA_ARGS__) }; \
    struct { VEnv env; VWORD args[_argcount]; } _arguments = { \
      .env = { \
        .base = VMakeSmallObject(VENV), \
        .num_vars = _argcount, \
        .var_len = _argcount, \
        .up = _upenv, \
      }, \
      .args = { __VA_ARGS__ }, \
    }; \
    VSpendCallgas(runtime); \
    V_GC_CHECK2(fnc, runtime, nv, _argcount, _arguments.args) { \
      (fnc)(runtime, _upenv, _argcount, &_arguments.env); \
    } \
  } while(0)
#define V_CALL(closure, runtime, ...) \
  do { \
    VClosure * _closure = VDecodeClosureApply2(runtime, closure); \
    V_CALL_FUNC(_closure->func, _closure->env, runtime __VA_OPT__(,) __VA_ARGS__); \
  } while(0)

#else
#define V_CALL_FUNC(fnc, nv, runtime, ...) \
 do { \
    VSpendCallgas(runtime); \
   VCallDecodedWithGC(runtime, (VClosure[]){{ .func = (VFunc)fnc, .env = nv }}, sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD) __VA_OPT__(,) __VA_ARGS__); \
   /*(fnc)(runtime, nv, sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD) __VA_OPT__(,) __VA_ARGS__);*/ \
 } while(0)

#define V_CALL(closure, runtime, ...) \
  do { \
    VSpendCallgas(runtime); \
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, closure), sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD) __VA_OPT__(,) __VA_ARGS__); \
    /*VClosure * _closure = VDecodeClosureApply2(runtime, closure);*/ \
    /*(_closure->func)(runtime, _closure->env, sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD) __VA_OPT__(,) __VA_ARGS__);*/ \
  } while(0)

#endif

// The maximum amount that may be allocated per call
#define V_ALLOCA_LIMIT (512*1024)
// The amount of stack margin vanity expects at the start of a call
// It is the stack margin plus how much the GC expects plus safety
// padding.
#define V_STACK_MARGIN (1024*1024)

static inline bool VStackOverflow(VRuntime * _runtime) {
  VPublicRuntime * runtime = (VPublicRuntime*)_runtime;
  char * VStackStop = (char*)&runtime; 
  ptrdiff_t size = runtime->VStackStart - VStackStop;
#if !defined(__x86_64__) && !defined(__EMSCRIPTEN__)
  // stack may grow upwards on some platforms
  static_assert(0, "");
#endif
  bool has_gas = true;
#ifdef __EMSCRIPTEN__
  has_gas = runtime->callgas > 0;
  if(!has_gas) {
    //printf("out of gas!\n");
  }
#endif
  return size > runtime->VStackLen || !has_gas;
}
bool VStackOverflowNoInline(VRuntime * runtime);
bool VStackOverflowNoInline2(VRuntime * runtime, char * VStackStop);

void VGarbageCollect2(VFunc f, VRuntime * runtime, VEnv * statics, int argc, VWORD * argv);
void VGarbageCollect2Closure(VRuntime * runtime, VClosure * closure, int argc, ...);
void VGarbageCollect2Func(VRuntime * runtime, VFunc f, int argc, ...);
void VGarbageCollect2Args(VFunc f, VRuntime * runtime, VEnv * statics, int fixed_args, int argc, ...);

#define V_GC_CHECK2(func, runtime, statics, argc, argv) \
  if(VStackOverflow(runtime)) { \
    VGarbageCollect2(func, runtime, statics, argc, argv); \
  } else
#define V_GC_CHECK2_LIST(func, runtime, statics, argc, argv) \
  if(VStackOverflow(runtime)) { \
    VWORD args[argc]; \
    for(int i = 0; i < argc; i++) \
      args[i] = va_arg(argv, VWORD); \
    va_end(argv); \
    VGarbageCollect2(func, runtime, statics, argc, args); \
  } else
#define V_GC_CHECK2_VARARGS(func, runtime, statics, fixed_args, argc, ...) \
  if(VStackOverflow(runtime)) { \
    VGarbageCollect2Args(func, runtime, statics, fixed_args, argc __VA_OPT__(,) __VA_ARGS__); \
  } else

void VDisplayWord(FILE * f, VWORD v, bool write);
void VDisplayWord2(VPort * p, VWORD v, bool write);

void VTrackMutation(VRuntime * runtime, void * container, VWORD * slot, VWORD val);
static inline void VSetFirst(VRuntime * runtime, VPair * p, VWORD w) {
  VTrackMutation(runtime, p, &p->first, w);
  p->first = w;
}
static inline void VSetRest(VRuntime * runtime, VPair * p, VWORD w) {
  VTrackMutation(runtime, p, &p->rest, w);
  p->rest = w;
}

__attribute__((noreturn))
void VReallyExit(int ret);

__attribute__((noreturn))
void VReallyAbort();

/* ======================== Core Functions ======================= */

// Root level continuation
V_DECLARE_FUNC(VNext2, e);
// Default exception continuation
V_DECLARE_FUNC_MIN(VAbort2);
// Exit PROCEDURE, expects a continuation in slot 1
V_DECLARE_FUNC(VExit2, k, e);
V_DECLARE_FUNC(VYieldToHost, k, e);
V_DECLARE_FUNC(VYieldToHostMajor, k, e);

V_DECLARE_FUNC(VGarbageCollect, k, major);
V_DECLARE_FUNC(VSetFinalizer, k, mem, finalizer);
V_DECLARE_FUNC(VHasFinalizer, k, mem);
V_DECLARE_FUNC(VFinalize, k, mem);

V_DECLARE_FUNC(VGetDynamics, k);
V_DECLARE_FUNC(VPushDynamic, k, key, val);
V_DECLARE_FUNC(VPopDynamic, k, keyval);

V_DECLARE_FUNC(VGetExceptionHandlers, k);
V_DECLARE_FUNC(VGetExceptionHandler, k);
V_DECLARE_FUNC(VPushExceptionHandler, k, handler);
V_DECLARE_FUNC(VPopExceptionHandler, k, node);
V_DECLARE_FUNC(VRaise, k, x);

V_DECLARE_FUNC(VSetCar2, k, pair, val);
V_DECLARE_FUNC(VSetCdr2, k, pair, val);
V_DECLARE_FUNC(VVectorSet2, k, vec, i, val);
V_DECLARE_FUNC(VRecordSet2, k, rec, i, val);

V_DECLARE_FUNC(VSetEnvVar2, k, up, var, val);
V_DECLARE_FUNC(VSetGlobalVar2, k, sym, val);
V_DECLARE_FUNC(VDefineGlobalVar2, k, sym, val);
V_DECLARE_FUNC(VMultiDefine2, k, defines);

V_DECLARE_FUNC(VFunction2, k, name);
V_DECLARE_FUNC(VLookupLibrary2, k, name);

V_DECLARE_FUNC_MIN(VMakeImport2, k, lib);
V_DECLARE_FUNC(VLoadLibrary2, k, lib);
V_DECLARE_FUNC(VUnloadLibrary2, k, lib);

int VStart(int nargs, void(* const * toplevels)());
void VInitRuntime2(VRuntime ** runtime, int argc, char ** argv);
void VDestroyRuntime(VRuntime * runtime);
VWORD VStart2(VRuntime * runtime, int num_toplevels, VThunk const * toplevels);
static inline int VDecodeExitCode(VWORD v) {
  if(VIsToken(v, VTOK_ERROR))
    return 1;
  if(VWordType(v) == VIMM_INT)
    return VDecodeInt(v);
  return !VDecodeBool(v);
}
int VExecute(VRuntime * runtime, VClosure * thunk);
VWORD VGetExitCode(VRuntime * runtime);

//void VCommandLine2(V_CORE_ARGS, VWORD k);
//void VGensym(V_CORE_ARGS, VWORD k, VWORD _str);
//void VRegisterSigint(V_CORE_ARGS, VWORD k);
//void VSetDeclare(V_CORE_ARGS, VWORD k, VWORD string, VWORD proc);
V_DECLARE_FUNC(VCommandLine2, k);
V_DECLARE_FUNC(VGensym, k, _str);
V_DECLARE_FUNC(VRegisterSigint, k);
V_DECLARE_FUNC(VSetDeclare, k, string, proc);

/* ======================== Fibering ======================= */

//void VFiberForkList(V_CORE_ARGS, VWORD k, VWORD lst);
//void VAsync(V_CORE_ARGS, VWORD k, VWORD future_thunk);
//void VAwait(V_CORE_ARGS, VWORD k, VWORD future);
V_DECLARE_FUNC(VFiberForkList, k, lst);
V_DECLARE_FUNC(VAsync, k, future_thunk);
V_DECLARE_FUNC(VAwait, k, future);

// Misc
uint64_t VCurrentJiffyImpl();
