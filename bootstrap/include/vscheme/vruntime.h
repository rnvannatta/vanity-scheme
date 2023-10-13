/*
 * Copyright 2023 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Runtime.
 *
 * The Vanity Scheme Runtime is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either version
 * 3 of the License, or (at your option) any later version.
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
 * This work is published with additional permission under GNU GPL
 * Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
 * should have been included with the Vanity Scheme Runtime.
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

#include "vscheme/vhash.h"

static_assert(sizeof(char) == sizeof(int8_t));
static_assert(sizeof(short) == sizeof(int16_t));
static_assert(sizeof(int) == sizeof(int32_t));
// not true on windows, bleh! need to fix this one the most
static_assert(sizeof(long) == sizeof(int64_t));

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
  VNUM_TOKS
};

enum VTAG {
  VTAG_START = 33, VENVIRONMENT = 33, VENV, VCONTENV, VCLOSURE, VPAIR, VCONST_PAIR, VVECTOR, VRECORD, VSYMBOL, VSTRING, VPORT, VRUNTIME,
  VTAG_END };
typedef unsigned VTAG;
enum VJMP { VJMP_START, VJMP_FINISH, VJMP_GC, VJMP_ERROR, VJMP_EXIT };

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

typedef struct VRuntime VRuntime;
typedef struct VEnv VEnv;
#define V_CORE_ARGS VRuntime * runtime, VEnv * statics, int argc
typedef void (*VFunc)(V_CORE_ARGS, ...);

typedef struct VWORD {
  uint64_t integer;
} VWORD;

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

typedef struct VEnv {
  VTAG tag;
  unsigned short num_vars;
  unsigned short var_len;
  struct VEnv * up;
  VWORD vars[];
} VEnv;

typedef struct VClosure {
  VTAG tag;
  VFunc func;
  VEnv * env;
} VClosure;

typedef struct VPair {
  VTAG tag;
  VWORD first;
  VWORD rest;
} VPair;

typedef struct VVector {
  VTAG tag;
  unsigned len;
  VWORD arr[];
} VVector;

typedef struct VBlob {
  VTAG tag;
  unsigned len;
  char buf[];
} VBlob;

enum PORT_FLAG_T {
  PFLAG_READ = 1,
  PFLAG_WRITE = 2,
  PFLAG_OSTRING = 4,
  PFLAG_PROCESS = 8,
  PFLAG_NOCLOSE = 16,
};

typedef struct VPort {
  VTAG tag;
  FILE * stream;
  unsigned flags;
} VPort;

typedef struct VDynamic {
  VTAG tag;
  VWORD key;
  VWORD val;
  struct VDynamic * up;
} VDynamic;

typedef struct VRuntime VRuntime;

typedef struct VEnvironment {
  VTAG tag;                 //  0
  unsigned argc;            //  4
  VRuntime * runtime;       //  8
  VEnv * static_chain;      // 16
  VWORD argv[];             // 24+
} VEnvironment;


typedef struct {
  hash64 hash;
  VWORD symbol;
  VWORD value;
} VGlobalEntry;

typedef struct VDebugInfo {
  char const * name;
} VDebugInfo;

static inline bool VIsEq(VWORD a, VWORD b) { return VBits(a) == VBits(b); }
void VError(const char *, ...);

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
  //return ((int64_t)VBits(v) << 32) >> 32;
  return VBits(v) & UINT32_MAX;
}

static inline VWORD VEncodeChar(char c) {
  return VWord(LITERAL_HEADER | VIMM_CHAR | (unsigned char)c);
}

static inline char VDecodeChar(VWORD v) {
  return (char)(VBits(v) & 0xFF);
}

// TODO remove usage of this function
static inline VWORD VEncodeNumber(double d) {
  VWORD v;
  memcpy(&v, &d, sizeof v);
  return v;
}
static inline VWORD VEncodeDouble(double d) {
  VWORD v;
  memcpy(&v, &d, sizeof v);
  return v;
}

static inline double VDecodeNumber(VWORD v) {
  double d;
  memcpy(&d, &v, sizeof v);
  return d;
}

static inline VWORD VEncodeBool(bool b) {
  return b ? VTRUE : VFALSE;
}

static inline bool VDecodeBool(VWORD v) {
  return VBits(v) != VBits(VFALSE);
}

// Pointer types

static inline VWORD VEncodePointer(void * v, enum VPOINTER_T type) {
  uint64_t bits = (uint64_t)(intptr_t)v;
  bits &= ~POINTER_MIRROR;
  bits |= type;
  bits |= LITERAL_HEADER;
  return VWord(bits);
}

static_assert(-1ll == -1ll >> 63ll);
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
      return bits == (VIMM_TOK | VTOK_NAN);
    } else {
      return false;
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

static inline void VCheckWordType(VWORD v, enum VIMMERAL_T type) {
  if(VWordType(v) != type)
  {
    VError("incorrect type\n");
  }
}

static inline bool VIsBlob(VWORD v) {
  if(VIsPointer(v)) {
    VTAG t = *(VTAG*)VDecodePointer(v);
    switch(t) {
      case VSTRING:
      case VSYMBOL:
        return true;
      default:
        return false;
    }
  }
  return false;
}
static inline bool VIsMutableBlob(VWORD v) {
  if(VIsPointer(v)) {
    VTAG t = *(VTAG*)VDecodePointer(v);
    switch(t) {
      case VSTRING:
        return true;
      default:
        return false;
    }
  }
  return false;
}

static inline bool VIsString(VWORD v) {
  return VIsPointer(v) && *(VTAG*)VDecodePointer(v) == VSTRING;
}

static inline bool VIsSymbol(VWORD v) {
  return VIsPointer(v) && *(VTAG*)VDecodePointer(v) == VSYMBOL;
}

static inline bool VIsVector(VWORD v) {
  return VIsPointer(v) && *(VTAG*)VDecodePointer(v) == VVECTOR;
}

static inline bool VIsPort(VWORD v) {
  return VIsPointer(v) && *(VTAG*)VDecodePointer(v) == VPORT;
}

/* ======================== Checked Decoding ======================= */

static inline int VCheckedDecodeInt(VWORD v, char const * proc) {
  if(VWordType(v) != VIMM_INT) VError("~Z: not an int: ~S\n", proc, v);
  return VDecodeInt(v);
}

static inline double VCheckedDecodeDouble(VWORD v, char const * proc) {
  if(!VIsDouble(v)) VError("~Z: not a double: ~S\n", proc, v);
  return VDecodeNumber(v);
}

static inline double VCheckedDecodeNumber(VWORD v, char const * proc) {
  if(VIsDouble(v)) return VDecodeNumber(v);
  if(VWordType(v) != VIMM_INT) VError("~Z: neither an int nor a double: ~S\n", proc, v);
  return VDecodeInt(v);

}

static inline char VCheckedDecodeChar(VWORD v, char const * proc) {
  if(VWordType(v) != VIMM_CHAR) VError("~Z: not a char: ~S\n", proc, v);
  return VDecodeChar(v);
}

static inline VClosure * VCheckedDecodeClosure(VWORD v, char const * proc) {
  if(VWordType(v) != VPOINTER_CLOSURE) VError("~Z: not a closure: ~S\n", proc, v);
  return (VClosure*)VDecodePointer(v);
}
static inline VClosure * VDecodeClosureApply(VWORD v) {
  if(VWordType(v) != VPOINTER_CLOSURE) VError("tried to call non-closure: ~s\n", v);
  return (VClosure*)VDecodePointer(v);
}

static inline void * VCheckedDecodeForeignPointer(VWORD v, char const * proc) {
  if(VWordType(v) != VPOINTER_FOREIGN) VError("~Z: not a foreign pointer: ~S\n", proc, v);
  return (void*)VDecodePointer(v);
}

static inline VBlob * VCheckedDecodeBlob(VWORD v, char const * proc) {
  if(VIsBlob(v)) return (VBlob*) VDecodePointer(v);
  VError("~Z: not a blob: ~S\n", proc, v);
  return NULL;
}
static inline VBlob * VCheckedDecodeString(VWORD v, char const * proc) {
  if(VIsString(v)) return (VBlob*) VDecodePointer(v);
  VError("~Z: not a string: ~S\n", proc, v);
  return NULL;
}
static inline VBlob * VCheckedDecodeSymbol(VWORD v, char const * proc) {
  if(VIsSymbol(v)) return (VBlob*) VDecodePointer(v);
  VError("~Z: not a symbol: ~S\n", proc, v);
  return NULL;
}

static inline VVector * VCheckedDecodeVector(VWORD v, char const * proc) {
  if(VIsVector(v)) return (VVector*) VDecodePointer(v);
  VError("~Z: not a vector: ~S\n", proc, v);
  return NULL;
}

static inline VPort * VCheckedDecodePort(VWORD v, char const * proc) {
  if(VIsPort(v)) return (VPort*) VDecodePointer(v);
  VError("~Z: not a port: ~S\n", proc, v);
  return NULL;
}

/* ======================== C FFI Decoding ======================= */

static inline bool VCheckedDecodeBool(VWORD v, char const * proc) {
  return VDecodeBool(v);
}
static inline VWORD VCheckedDecodeVWORD(VWORD v, char const * proc) {
  return v;
}

// I understand these are obvious, but srsly why not
#define UINT8_MIN 0
#define UINT16_MIN 0
#define UINT32_MIN 0
#define UINT64_MIN 0

#define V_MAKE_DECODE_INT(type, Type, TYPE) \
 static inline type VCheckedDecode ## Type(VWORD v, char const * proc) { \
    if(VWordType(v) != VIMM_INT) VError("~Z: not an int: ~S\n", proc, v); \
    int dec = VDecodeInt(v); \
    if(!(TYPE ## _MIN < dec && dec <= TYPE ## _MAX)) VError("~Z: overflow casting to " # type ": ~S\n", proc, v); \
    return (type)dec; \
 }

V_MAKE_DECODE_INT(int8_t, SignedChar, INT8);
V_MAKE_DECODE_INT(int16_t, Short, INT16);

V_MAKE_DECODE_INT(uint8_t, UnsignedChar, UINT8);
V_MAKE_DECODE_INT(uint16_t, UnsignedShort, UINT16);

static inline int64_t VCheckedDecodeLong(VWORD v, char const * proc) {
  if(VWordType(v) != VIMM_INT) VError("~Z: not an int: ~S\n", proc, v);
  return VDecodeInt(v);
}
static inline uint64_t VCheckedDecodeUnsignedLong(VWORD v, char const * proc) {
  if(VWordType(v) != VIMM_INT) VError("~Z: not an int: ~S\n", proc, v);
  int32_t i = VDecodeInt(v);
  unsigned u = i;
  return u;
}
static inline char * VCheckedDecodeCString(VWORD v, char const * proc) {
  if(VIsString(v)) {
    return VDecodeBlob(v)->buf;
  } else if(VIsForeignPointer(v)) {
    return (void*)VDecodePointer(v);
  }
  VError("~Z: not castable to c string: ~S\n", proc, v);
  return NULL;
}
static inline char const * VCheckedDecodeConstCString(VWORD v, char const * proc) {
  if(VIsString(v) || VIsSymbol(v)) {
    return VDecodeBlob(v)->buf;
  } else if(VIsForeignPointer(v)) {
    return (void*)VDecodePointer(v);
  }
  VError("~Z: not castable to const c string: ~S\n", proc, v);
  return NULL;
}

static inline void * VCheckedDecodeVoidPtr(VWORD v, char const * proc) {
  // void pointers accept any non-const foreign ponters and
  // any non-const buffers, so any buffer except symbols
  if(VIsForeignPointer(v)) {
    return (void*)VDecodePointer(v);
  } else if(VIsMutableBlob(v)) {
    return VDecodeBlob(v)->buf;
  }
  VError("~Z: not castable to void pointer: ~S\n", proc, v);
  return NULL;
}
static inline void const * VCheckedDecodeConstVoidPtr(VWORD v, char const * proc) {
  // const void pointers accept any foreign ponters and
  // any buffers, including constant buffers
  if(VIsForeignPointer(v)) {
    return VCheckedDecodeForeignPointer(v, proc);
  } else if(VIsBlob(v)) {
    return VDecodeBlob(v)->buf;
  }
  VError("~Z: not castable to const void pointer: ~S\n", proc, v);
  return NULL;
}

/* ======================== Construction ======================= */

#define V_ALLOCA_BLOB(len) alloca(sizeof(VBlob) + len);
static inline VBlob * VFillBlob(VBlob * blob, VTAG tag, unsigned len, char const * dat) {
  blob->tag = tag;
  blob->len = len;
  memcpy(blob->buf, dat, len);
  return blob;
}

#define V_STATIC_STRING(name, str) struct { VBlob b; char buf[sizeof str]; } name = { { .tag = VSTRING, .len = sizeof str }, str };

#define V_ALLOCA_VECTOR(len) alloca(sizeof(VVector) + sizeof(VWORD[len]));
static inline VVector * VFillVector(VVector * vec, VTAG tag, unsigned len, VWORD const * dat) {
  vec->tag = tag;
  vec->len = len;
  memcpy(vec->arr, dat, sizeof(VWORD[len]));
  return vec;
}

static inline VPort VMakePortStream(FILE * stream, unsigned flags) {
  return (VPort) { .tag = VPORT, .stream = stream, .flags = flags };
}

static inline VClosure VMakeClosure2(VFunc f, VEnv * env) {
  return (VClosure) {
    .tag = VCLOSURE,
    .func = f,
    .env = env,
  };
}

static inline VPair VMakePair(VWORD a, VWORD b) {
  return (VPair) { .tag = VPAIR, .first = a, .rest = b };
}

static inline VPair * VFillPair(VPair * pair, VWORD a, VWORD b) {
  pair->tag = VPAIR;
  pair->first = a;
  pair->rest = b;
  return pair;
}

/* ======================== Misc ======================= */

static inline bool VCheckSymbolEqv(VWORD a, VWORD b) {
  if(VBits(a) == VBits(b))
    return true;
  VBlob * blob_a = (VBlob*)VDecodePointer(a);
  VBlob * blob_b = (VBlob*)VDecodePointer(b);
  return !strcmp(blob_a->buf, blob_b->buf);
}

VGlobalEntry * VLookupGlobalEntry(VWORD sym);
static inline VWORD VLookupGlobalVar(VWORD sym) {
  VGlobalEntry * place = VLookupGlobalEntry(sym);
  if(place)
    return place->value;
  VError("Symbol not found: ~a\n", sym);
  return VVOID;
}

VGlobalEntry * VLookupGlobalEntryFast(char const * sym);
static inline VWORD VLookupGlobalVarFast(char const * sym) {
  VGlobalEntry * place = VLookupGlobalEntryFast(sym);
  if(place)
    return place->value;
  VError("Symbol not found: ~z\n", sym);
  return VVOID;
}

void VSysApply(VFunc func, VEnvironment * environ);

static inline VWORD VGetArg(VEnv * env, int up, int var) {
  while(up) {
    env = env->up;
    up--;
  }
  return env->vars[var];
}

#define V_CALL_HISTORY_LEN 16
extern VDebugInfo * VCallHistory[V_CALL_HISTORY_LEN];
extern unsigned VCallHistoryCursor;
static inline void VRecordCall(VDebugInfo * debug) {
  VCallHistory[++VCallHistoryCursor % V_CALL_HISTORY_LEN] = debug;
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

#define V_CALL_FUNC(func, env, runtime, ...) \
 do { \
   (func)(runtime, env, sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD), __VA_ARGS__); \
 } while(0)

#define V_CALL(closure, runtime, ...) \
  do { \
    VClosure * _closure = VDecodeClosureApply(closure); \
    (_closure->func)(runtime, _closure->env, sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD) __VA_OPT__(,) __VA_ARGS__); \
  } while(0)

static inline void VReturnWord(VWORD k, VRuntime * runtime, VWORD ret) {
  VClosure * _k = VDecodeClosure(k); \
  (_k->func)(runtime, _k->env, 1, ret);
}

#define V_RETURN(k, runtime, word) \
  VReturnWord(k, runtime, word)
  

#define V_ARG_CHECK2(func, nargs, num_vars) \
  do { \
    if(nargs != num_vars) { \
      VError("Incorrect number of arguments to ~Z, got ~D, need ~D\n", func, num_vars, nargs); \
    } } while(0)
#define V_ARG_MIN2(func, nargs, num_vars) \
  do { \
    if(num_vars < nargs) { \
      VError("Incorrect number of arguments to ~Z, got ~D, need ~D\n", func, num_vars, nargs); \
    } } while(0)
#define V_ARG_RANGE2(func, nargmin, nargmax, num_vars) \
  do { \
    if(num_vars < nargmin || num_vars > nargmax) { \
      VError("Incorrect number of arguments to ~Z, got ~D, need between ~D and ~D\n", func, num_vars, nargmin, nargmax); \
    } } while(0)

extern char* VStackStart;
extern ssize_t VStackLen;

static inline bool VStackOverflow(char * VStackStop) {
  ptrdiff_t size = VStackStart - VStackStop;
#ifndef __x86_64__
  // stack may grow upwards on some platforms
  static_assert(0);
#endif
  assert(size >= 0);
  return size > VStackLen;
}
void VGarbageCollect2(VFunc f, VRuntime * runtime, VEnv * statics, int argc, VWORD * argv);
void VGarbageCollect2Args(VFunc f, VRuntime * runtime, VEnv * statics, int fixed_args, int argc, ...);

#define V_GC_CHECK2(func, runtime, statics, argc, argv) \
  if(VStackOverflow((char*)&runtime)) { \
    VGarbageCollect2(func, runtime, statics, argc, argv); \
  } else
#define V_GC_CHECK2_LIST(func, runtime, statics, argc, argv) \
  if(VStackOverflow((char*)&runtime)) { \
    VWORD args[argc]; \
    for(int i = 0; i < argc; i++) \
      args[i] = va_arg(argv, VWORD); \
    va_end(argv); \
    VGarbageCollect2(func, runtime, statics, argc, args); \
  } else
#define V_GC_CHECK2_VARARGS(func, runtime, statics, fixed_args, argc, ...) \
  if(VStackOverflow((char*)&runtime)) { \
    VGarbageCollect2Args(func, runtime, statics, fixed_args, argc, __VA_ARGS__); \
  } else

// Root level continuation
void VNext2(V_CORE_ARGS, ...);
// Default exception continuation
void VAbort2(V_CORE_ARGS, ...);
// Exit PROCEDURE, expects a continuation in slot 1
void VExit2(V_CORE_ARGS, VWORD k, VWORD e);

void VDisplayWord(FILE * f, VWORD v, bool write);

void VFPrintfC(FILE * f, char const * str, ...);

void VTrackMutation(void * container, VWORD * slot, VWORD val);
static inline void VSetFirst(VPair * p, VWORD w) {
  VTrackMutation(p, &p->first, w);
  p->first = w;
}
static inline void VSetRest(VPair * p, VWORD w) {
  VTrackMutation(p, &p->rest, w);
  p->rest = w;
}

void VGarbageCollect(V_CORE_ARGS, VWORD k, VWORD major);
void VSetFinalizer(V_CORE_ARGS, VWORD k, VWORD mem, VWORD finalizer);
void VHasFinalizer(V_CORE_ARGS, VWORD k, VWORD mem);
void VFinalize(V_CORE_ARGS, VWORD k, VWORD mem);

void VSetCar2(V_CORE_ARGS, VWORD k, VWORD pair, VWORD val);
void VSetCdr2(V_CORE_ARGS, VWORD k, VWORD pair, VWORD val);
void VVectorSet2(V_CORE_ARGS, VWORD k, VWORD vec, VWORD i, VWORD val);

void VSetEnvVar2(V_CORE_ARGS, VWORD k, VWORD up, VWORD var, VWORD val);
void VSetGlobalVar2(V_CORE_ARGS, VWORD k, VWORD sym, VWORD val);
void VDefineGlobalVar2(V_CORE_ARGS, VWORD k, VWORD sym, VWORD val);
void VMultiDefine2(V_CORE_ARGS, VWORD k, VWORD defines);

void VFunction2(V_CORE_ARGS, VWORD k, VWORD name);

void VLookupLibrary2(V_CORE_ARGS, VWORD k, VWORD name);

void VMakeImport2(V_CORE_ARGS, VWORD k, VWORD lib, ...);
void VLoadLibrary2(V_CORE_ARGS, VWORD k, VWORD lib);

int VStart(int nargs, void(* const * toplevels)());

extern int VArgc;
extern char ** VArgv;

void VCommandLine2(V_CORE_ARGS, VWORD k);
