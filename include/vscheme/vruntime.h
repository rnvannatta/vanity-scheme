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

static_assert(sizeof(char) == sizeof(int8_t));
static_assert(sizeof(short) == sizeof(int16_t));
static_assert(sizeof(int) == sizeof(int32_t));
static_assert(sizeof(long) == sizeof(int64_t) || sizeof(long) == sizeof(int32_t));
static_assert(sizeof(long long) == sizeof(int64_t));

//#define SYSV_CALL __attribute__((sysv_abi))
#define SYSV_CALL

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
  VTOK_ERROR,
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
  VTAG_END
};
static_assert(VTAG_END < 255);
typedef unsigned VTAG;
typedef unsigned short VNEWTAG;

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
#include <setjmp.h>
#define VJmpBuf jmp_buf
#define VSetJmp setjmp
#define VLongJmp longjmp
#endif
#ifdef _WIN64
// Thank you for the stack unwinding that causes stack overflows, Windows
#include <xmmintrin.h>
struct VJmpBuf {
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
};
typedef struct VJmpBuf VJmpBuf[1];
static_assert(sizeof(struct VJmpBuf) == 240);

int VSetJmp(struct VJmpBuf buf[1]);
void VLongJmp(struct VJmpBuf buf[1], int ret);
#endif

#ifdef __linux__
#define VWEAK __attribute__((weak))
#endif
#ifdef _WIN64
#define VWEAK __declspec(selectany)
#endif

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
#define VERROR VWord(LITERAL_HEADER| VIMM_TOK | VTOK_ERROR);

typedef struct VWORD {
  uint64_t integer;
} VWORD;

typedef struct VRuntime VRuntime;
typedef struct VEnv VEnv;
#define V_CORE_ARGS VRuntime * runtime, VEnv * statics, int argc
typedef SYSV_CALL void (*VFunc)(V_CORE_ARGS, ...);
typedef SYSV_CALL void (*VThunk)(V_CORE_ARGS, VWORD k);
#ifdef __linux__
#define ARGC_REG "edx"
#endif
#ifdef _WIN64
#define ARGC_REG "r8d"
#endif

SYSV_CALL static inline uint64_t VBits(VWORD v) {
  uint64_t bits;
  memcpy(&bits, &v, sizeof v);
  return bits;
}
SYSV_CALL static inline VWORD VWord(uint64_t bits) {
  VWORD v;
  memcpy(&v, &bits, sizeof bits);
  return v;
}

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
};

typedef struct VPort {
  VObject base;
  FILE * stream;
  unsigned flags;
} VPort;

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

SYSV_CALL static inline bool VIsEq(VWORD a, VWORD b) { return VBits(a) == VBits(b); }
SYSV_CALL void VError(const char *, ...);

// Used in inline functions
typedef struct VPublicRuntime {
  VObject base;
  char * VStackStart;
  ssize_t VStackLen;
  ssize_t VStackSize;
  VDebugInfo * VCallHistory[V_CALL_HISTORY_LEN];
  unsigned VCallHistoryCursor;
} VPublicRuntime;
typedef struct VRuntime VRuntime;
/* ======================== Encoding and Decoding ======================= */

// Immediate types

SYSV_CALL static inline VWORD VEncodeToken(unsigned tok) { return VWord(LITERAL_HEADER | VIMM_TOK | tok); }

SYSV_CALL static inline unsigned VDecodeToken(VWORD v) {
  return (unsigned)(VBits(v) & 0xFFFFFFFF);
}

SYSV_CALL static inline VWORD VEncodeInt(int i) {
  return VWord(LITERAL_HEADER | VIMM_INT | (UINT32_MAX & (unsigned)i));
}

SYSV_CALL static inline int VDecodeInt(VWORD v) {
  return VBits(v) & UINT32_MAX;
}

SYSV_CALL static inline VWORD VEncodeChar(char c) {
  return VWord(LITERAL_HEADER | VIMM_CHAR | (unsigned char)c);
}

SYSV_CALL static inline char VDecodeChar(VWORD v) {
  return (char)(VBits(v) & 0xFF);
}

// TODO remove usage of this function
SYSV_CALL static inline VWORD VEncodeNumber(double d) {
  VWORD v;
  memcpy(&v, &d, sizeof v);
  return v;
}
SYSV_CALL static inline VWORD VEncodeDouble(double d) {
  VWORD v;
  memcpy(&v, &d, sizeof v);
  return v;
}

SYSV_CALL static inline double VDecodeNumber(VWORD v) {
  double d;
  memcpy(&d, &v, sizeof v);
  return d;
}

SYSV_CALL static inline VWORD VEncodeBool(bool b) {
  return b ? VTRUE : VFALSE;
}

SYSV_CALL static inline bool VDecodeBool(VWORD v) {
  return VBits(v) != VBits(VFALSE);
}

// Pointer types

SYSV_CALL static inline VWORD VEncodePointer(void * v, enum VPOINTER_T type) {
  uint64_t bits = (uint64_t)(intptr_t)v;
  bits &= ~POINTER_MIRROR;
  bits |= type;
  bits |= LITERAL_HEADER;
  return VWord(bits);
}

static_assert(-1ll == -1ll >> 63ll);
SYSV_CALL static inline VWORD * VDecodePointer(VWORD v) {
  int64_t bits = (int64_t)VBits(v);
  bits = (bits << 16) >> 16;
  return (VWORD*)(intptr_t)bits;
}

SYSV_CALL static inline VWORD VEncodeClosure(VClosure * c) {
  return VEncodePointer(c, VPOINTER_CLOSURE);
}

SYSV_CALL static inline VClosure * VDecodeClosure(VWORD v) {
  return (VClosure*)VDecodePointer(v);
}

SYSV_CALL static inline VWORD VEncodePair(VPair * p) {
  return VEncodePointer(p, VPOINTER_PAIR);
}
SYSV_CALL static inline VPair * VDecodePair(VWORD v) {
  return (VPair*)VDecodePointer(v);
}

SYSV_CALL static inline VWORD VEncodeForeignPointer(void * v) {
  return VEncodePointer(v, VPOINTER_FOREIGN);
}

SYSV_CALL static inline VBlob * VDecodeBlob(VWORD v) {
  return (VBlob*) VDecodePointer(v);
}
SYSV_CALL static inline VBlob * VDecodeString(VWORD v) {
  return (VBlob*) VDecodePointer(v);
}
SYSV_CALL static inline VBlob * VDecodeSymbol(VWORD v) {
  return (VBlob*) VDecodePointer(v);
}

SYSV_CALL static inline VVector * VDecodeVector(VWORD v) {
  return (VVector*) VDecodePointer(v);
}

/* ======================== Type Checking ======================= */

SYSV_CALL static inline bool VIsToken(VWORD v, int tok) { return VBits(v) == (LITERAL_HEADER | VIMM_TOK | tok); }

// TODO replace all uses with VIsDouble
SYSV_CALL static inline bool VIsNumber(VWORD v) {
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
SYSV_CALL static inline bool VIsDouble(VWORD v) {
  return VIsNumber(v);
}

SYSV_CALL static inline uint64_t VWordType(VWORD v) {
  uint64_t bits = VBits(v);
  if(VIsDouble(v)) {
    return VIMM_DOUBLE;
  } else {
    return bits & LITERAL_TYPE_MASK;
  }
}

SYSV_CALL static inline bool VIsPointer(VWORD v) {
  return !VIsDouble(v) && (VBits(v) & POINTER_TEST_BIT);
}
#define VIsManagedPointer VIsPointer
SYSV_CALL static inline bool VIsForeignPointer(VWORD v) {
  return !VIsDouble(v) && (VBits(v) & VPOINTER_FOREIGN) == VPOINTER_FOREIGN;
}
SYSV_CALL static inline bool VIsAnyPointer(VWORD v) {
  uint64_t bits = VBits(v);
  return !VIsDouble(v) && ((bits & POINTER_TEST_BIT) || (bits & VPOINTER_FOREIGN) == VPOINTER_FOREIGN);
}

SYSV_CALL static inline void VCheckWordType(VWORD v, enum VIMMERAL_T type) {
  if(VWordType(v) != type)
  {
    VError("incorrect type\n");
  }
}

SYSV_CALL static inline bool VIsBlob(VWORD v) {
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
SYSV_CALL static inline bool VIsMutableBlob(VWORD v) {
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

SYSV_CALL static inline bool VIsString(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VSTRING;
}

SYSV_CALL static inline bool VIsSymbol(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VSYMBOL;
}

SYSV_CALL static inline bool VIsVector(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VVECTOR;
}

SYSV_CALL static inline bool VIsHashTable(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VHASH_TABLE;
}

SYSV_CALL static inline bool VIsPort(VWORD v) {
  return VIsPointer(v) && *(VNEWTAG*)VDecodePointer(v) == VPORT;
}

/* ======================== Checked Decoding ======================= */

SYSV_CALL static inline int VCheckedDecodeInt(VWORD v, char const * proc) {
  if(VWordType(v) != VIMM_INT) VError("~Z: not an int: ~S\n", proc, v);
  return VDecodeInt(v);
}

SYSV_CALL static inline double VCheckedDecodeDouble(VWORD v, char const * proc) {
  if(!VIsDouble(v)) VError("~Z: not a double: ~S\n", proc, v);
  return VDecodeNumber(v);
}

SYSV_CALL static inline double VCheckedDecodeNumber(VWORD v, char const * proc) {
  if(VIsDouble(v)) return VDecodeNumber(v);
  if(VWordType(v) != VIMM_INT) VError("~Z: neither an int nor a double: ~S\n", proc, v);
  return VDecodeInt(v);

}

SYSV_CALL static inline char VCheckedDecodeChar(VWORD v, char const * proc) {
  if(VWordType(v) != VIMM_CHAR) VError("~Z: not a char: ~S\n", proc, v);
  return VDecodeChar(v);
}

SYSV_CALL static inline VClosure * VCheckedDecodeClosure(VWORD v, char const * proc) {
  if(VWordType(v) != VPOINTER_CLOSURE) VError("~Z: not a closure: ~S\n", proc, v);
  return (VClosure*)VDecodePointer(v);
}
SYSV_CALL static inline VClosure * VDecodeClosureApply(VWORD v) {
  if(VWordType(v) != VPOINTER_CLOSURE) VError("tried to call non-closure: ~s\n", v);
  return (VClosure*)VDecodePointer(v);
}

SYSV_CALL static inline void * VCheckedDecodePointer(VWORD v, VNEWTAG tag, char const * proc) {
  if(VIsPointer(v)) {
    VNEWTAG * ptr = (VNEWTAG*)VDecodePointer(v);
    if(*ptr == tag) {
      return (void*)ptr;
    }
  }
  VError("~Z: not a pointer of the right type: ~S\n", proc, v);
  return NULL;
}

SYSV_CALL static inline void * VCheckedDecodeForeignPointer(VWORD v, char const * proc) {
  if(VWordType(v) != VPOINTER_FOREIGN) VError("~Z: not a foreign pointer: ~S\n", proc, v);
  return (void*)VDecodePointer(v);
}

SYSV_CALL static inline VBlob * VCheckedDecodeBlob(VWORD v, char const * proc) {
  if(VIsBlob(v)) return (VBlob*) VDecodePointer(v);
  VError("~Z: not a blob: ~S\n", proc, v);
  return NULL;
}
SYSV_CALL static inline VBlob * VCheckedDecodeString(VWORD v, char const * proc) {
  if(VIsString(v)) return (VBlob*) VDecodePointer(v);
  VError("~Z: not a string: ~S\n", proc, v);
  return NULL;
}
SYSV_CALL static inline VBlob * VCheckedDecodeSymbol(VWORD v, char const * proc) {
  if(VIsSymbol(v)) return (VBlob*) VDecodePointer(v);
  VError("~Z: not a symbol: ~S\n", proc, v);
  return NULL;
}

SYSV_CALL static inline VVector * VCheckedDecodeVector(VWORD v, char const * proc) {
  if(VIsVector(v)) return (VVector*) VDecodePointer(v);
  VError("~Z: not a vector: ~S\n", proc, v);
  return NULL;
}

SYSV_CALL static inline VHashTable * VCheckedDecodeHashTable(VWORD v, char const * proc) {
  if(VIsHashTable(v)) return (VHashTable*) VDecodePointer(v);
  VError("~Z: not a hash table: ~S\n", proc, v);
  return NULL;
}

SYSV_CALL static inline VPort * VCheckedDecodePort(VWORD v, char const * proc) {
  if(VIsPort(v)) return (VPort*) VDecodePointer(v);
  VError("~Z: not a port: ~S\n", proc, v);
  return NULL;
}

/* ======================== C FFI Decoding ======================= */

SYSV_CALL static inline bool VCheckedDecodeBool(VWORD v, char const * proc) {
  return VDecodeBool(v);
}
SYSV_CALL static inline VWORD VCheckedDecodeVWORD(VWORD v, char const * proc) {
  return v;
}

// I understand these are obvious, but srsly why not
#define UINT8_MIN 0
#define UINT16_MIN 0
#define UINT32_MIN 0
#define UINT64_MIN 0

#define V_MAKE_DECODE_INT(type, Type, TYPE) \
 SYSV_CALL static inline type VCheckedDecode ## Type(VWORD v, char const * proc) { \
    if(VWordType(v) != VIMM_INT) VError("~Z: not an int: ~S\n", proc, v); \
    int dec = VDecodeInt(v); \
    if(!(TYPE ## _MIN < dec && dec <= TYPE ## _MAX)) VError("~Z: overflow casting to " # type ": ~S\n", proc, v); \
    return (type)dec; \
 }

V_MAKE_DECODE_INT(int8_t, SignedChar, INT8);
V_MAKE_DECODE_INT(int16_t, Short, INT16);

V_MAKE_DECODE_INT(uint8_t, UnsignedChar, UINT8);
V_MAKE_DECODE_INT(uint16_t, UnsignedShort, UINT16);

SYSV_CALL static inline char * VCheckedDecodeCString(VWORD v, char const * proc) {
  if(VIsString(v)) {
    return VDecodeBlob(v)->buf;
  } else if(VIsForeignPointer(v)) {
    return (void*)VDecodePointer(v);
  }
  VError("~Z: not castable to c string: ~S\n", proc, v);
  return NULL;
}
SYSV_CALL static inline char const * VCheckedDecodeConstCString(VWORD v, char const * proc) {
  if(VIsString(v) || VIsSymbol(v)) {
    return VDecodeBlob(v)->buf;
  } else if(VIsForeignPointer(v)) {
    return (void*)VDecodePointer(v);
  }
  VError("~Z: not castable to const c string: ~S\n", proc, v);
  return NULL;
}

SYSV_CALL static inline void * VCheckedDecodeVoidPtr(VWORD v, char const * proc) {
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
SYSV_CALL static inline void const * VCheckedDecodeConstVoidPtr(VWORD v, char const * proc) {
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

static VObject VMakeObject(VNEWTAG tag) {
  return (VObject) {
    .tag = tag,
    .flags = 0,
    .pincount = 0,
    .forward_offset = 0
  };
}
static VSmallObject VMakeSmallObject(VNEWTAG tag) {
  return (VSmallObject) {
    .tag = tag,
    .flags = 0,
    .pincount = 0,
  };
}

#define V_ALLOCA_BLOB(len) alloca(sizeof(VBlob) + len);
SYSV_CALL static inline VBlob * VFillBlob(VBlob * blob, VNEWTAG tag, unsigned len, char const * dat) {
  blob->base = VMakeSmallObject(tag);
  blob->len = len;
  memcpy(blob->buf, dat, len);
  return blob;
}

#define V_STATIC_STRING(name, str) struct { VBlob b; char buf[sizeof str]; } name = { { .base = { .tag =VSTRING, .flags = 0, .pincount = 0, }, .len = sizeof str }, str };

#define V_ALLOCA_VECTOR(len) alloca(sizeof(VVector) + sizeof(VWORD[len]))
SYSV_CALL static inline VVector * VFillVector(VVector * vec, VNEWTAG tag, unsigned len, VWORD const * dat) {
  vec->base = VMakeSmallObject(tag);
  vec->len = len;
  memcpy(vec->arr, dat, sizeof(VWORD[len]));
  return vec;
}

SYSV_CALL static inline void VInitEnv(VEnv * env, unsigned short num_vars, unsigned short var_len, VEnv * upenv) {
  *env = (VEnv) { .base = VMakeSmallObject(VENV), .num_vars = num_vars, .var_len = var_len, .up = upenv };
}

SYSV_CALL static inline VPort VMakePortStream(FILE * stream, unsigned flags) {
  return (VPort) { .base = VMakeObject(VPORT), .stream = stream, .flags = flags };
}

SYSV_CALL static inline VClosure VMakeClosure2(VFunc f, VEnv * env) {
  return (VClosure) {
    .base = VMakeObject(VCLOSURE),
    .func = f,
    .env = env,
  };
}

SYSV_CALL static inline VPair VMakePair(VWORD a, VWORD b) {
  return (VPair) { .base = VMakeObject(VPAIR), .first = a, .rest = b };
}

SYSV_CALL static inline VPair * VFillPair(VPair * pair, VWORD a, VWORD b) {
  pair->base = VMakeObject(VPAIR);
  pair->first = a;
  pair->rest = b;
  return pair;
}

/* ======================== Misc ======================= */

// stores constants like the literal 'foo or the value of ##sys.+
// necessary because Windows doesn't have weak symbols lmao
SYSV_CALL void * VLookupConstant(char * name, void * val);

SYSV_CALL static inline bool VCheckSymbolEqv(VWORD a, VWORD b) {
  if(VBits(a) == VBits(b))
    return true;
  VBlob * blob_a = (VBlob*)VDecodePointer(a);
  VBlob * blob_b = (VBlob*)VDecodePointer(b);
  return !strcmp(blob_a->buf, blob_b->buf);
}

SYSV_CALL VGlobalEntry * VLookupGlobalEntryFast2(VRuntime * runtime, char const * sym);
SYSV_CALL static inline VWORD VLookupGlobalVarFast2(VRuntime * runtime, char const * sym) {
  VGlobalEntry * place = VLookupGlobalEntryFast2(runtime, sym);
  if(place)
    return place->value;
  VError("Symbol not found: ~z\n", sym);
  return VVOID;
}

#undef environ
SYSV_CALL void VSysApply(VFunc func, VEnvironment * environ);

SYSV_CALL static inline VWORD VGetArg(VEnv * env, int up, int var) {
  while(up) {
    env = env->up;
    up--;
  }
  return env->vars[var];
}

SYSV_CALL void VRecordCallNoInline(VRuntime * runtime, VDebugInfo * debug);
SYSV_CALL static inline void VRecordCall2(VRuntime * _runtime, VDebugInfo * debug) {
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

#define V_CALL_FUNC(func, env, runtime, ...) \
 do { \
   (func)(runtime, env, sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD), __VA_ARGS__); \
 } while(0)

#define V_CALL(closure, runtime, ...) \
  do { \
    VClosure * _closure = VDecodeClosureApply(closure); \
    (_closure->func)(runtime, _closure->env, sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD) __VA_OPT__(,) __VA_ARGS__); \
  } while(0)

SYSV_CALL static inline void VReturnWord(VWORD k, VRuntime * runtime, VWORD ret) {
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

//extern char* VStackStart;
//extern ssize_t VStackLen;

SYSV_CALL static inline bool VStackOverflow(VRuntime * _runtime) {
  VPublicRuntime * runtime = (VPublicRuntime*)_runtime;
  char * VStackStop = (char*)&runtime; 
  ptrdiff_t size = runtime->VStackStart - VStackStop;
#ifndef __x86_64__
  // stack may grow upwards on some platforms
  static_assert(0);
#endif
  return size > runtime->VStackLen;
}
SYSV_CALL bool VStackOverflowNoInline(VRuntime * runtime);
SYSV_CALL bool VStackOverflowNoInline2(VRuntime * runtime, char * VStackStop);

SYSV_CALL void VGarbageCollect2(VFunc f, VRuntime * runtime, VEnv * statics, int argc, VWORD * argv);
SYSV_CALL void VGarbageCollect2Args(VFunc f, VRuntime * runtime, VEnv * statics, int fixed_args, int argc, ...);

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
    VGarbageCollect2Args(func, runtime, statics, fixed_args, argc, __VA_ARGS__); \
  } else

SYSV_CALL void VDisplayWord(FILE * f, VWORD v, bool write);

SYSV_CALL void VFPrintfC(FILE * f, char const * str, ...);

SYSV_CALL void VTrackMutation(VRuntime * runtime, void * container, VWORD * slot, VWORD val);
SYSV_CALL static inline void VSetFirst(VRuntime * runtime, VPair * p, VWORD w) {
  VTrackMutation(runtime, p, &p->first, w);
  p->first = w;
}
SYSV_CALL static inline void VSetRest(VRuntime * runtime, VPair * p, VWORD w) {
  VTrackMutation(runtime, p, &p->rest, w);
  p->rest = w;
}

/* ======================== Core Functions ======================= */

// Root level continuation
SYSV_CALL void VNext2(V_CORE_ARGS, VWORD e);
// Default exception continuation
SYSV_CALL void VAbort2(V_CORE_ARGS, ...);
// Exit PROCEDURE, expects a continuation in slot 1
SYSV_CALL void VExit2(V_CORE_ARGS, VWORD k, VWORD e);


SYSV_CALL void VGarbageCollect(V_CORE_ARGS, VWORD k, VWORD major);
SYSV_CALL void VSetFinalizer(V_CORE_ARGS, VWORD k, VWORD mem, VWORD finalizer);
SYSV_CALL void VHasFinalizer(V_CORE_ARGS, VWORD k, VWORD mem);
SYSV_CALL void VFinalize(V_CORE_ARGS, VWORD k, VWORD mem);

SYSV_CALL void VSetCar2(V_CORE_ARGS, VWORD k, VWORD pair, VWORD val);
SYSV_CALL void VSetCdr2(V_CORE_ARGS, VWORD k, VWORD pair, VWORD val);
SYSV_CALL void VVectorSet2(V_CORE_ARGS, VWORD k, VWORD vec, VWORD i, VWORD val);

SYSV_CALL void VSetEnvVar2(V_CORE_ARGS, VWORD k, VWORD up, VWORD var, VWORD val);
SYSV_CALL void VSetGlobalVar2(V_CORE_ARGS, VWORD k, VWORD sym, VWORD val);
SYSV_CALL void VDefineGlobalVar2(V_CORE_ARGS, VWORD k, VWORD sym, VWORD val);
SYSV_CALL void VMultiDefine2(V_CORE_ARGS, VWORD k, VWORD defines);

SYSV_CALL void VFunction2(V_CORE_ARGS, VWORD k, VWORD name);

SYSV_CALL void VLookupLibrary2(V_CORE_ARGS, VWORD k, VWORD name);

SYSV_CALL void VMakeImport2(V_CORE_ARGS, VWORD k, VWORD lib, ...);
SYSV_CALL void VLoadLibrary2(V_CORE_ARGS, VWORD k, VWORD lib);

SYSV_CALL int VStart(int nargs, void(* const * toplevels)());

SYSV_CALL void VInitRuntime2(VRuntime ** runtime, int argc, char ** argv);
SYSV_CALL VWORD VStart2(VRuntime * runtime, int num_toplevels, VThunk const * toplevels);
static inline int VDecodeExitCode(VWORD v) {
  if(VIsToken(v, VTOK_ERROR))
    return 1;
  if(VWordType(v) == VIMM_INT)
    return VDecodeInt(v);
  return !VDecodeBool(v);
}

SYSV_CALL void VCommandLine2(V_CORE_ARGS, VWORD k);

/* ======================== Fibering ======================= */

#ifdef __linux__
typedef struct VListNode VListNode;
typedef struct VFiber VFiber;

typedef struct VFiberContext VFiberContext;
typedef struct VFiberState {
  uint64_t rip;
  uint64_t rsp;

  uint64_t rbx;
  uint64_t rbp;

  uint64_t r12;
  uint64_t r13;
  uint64_t r14;
  uint64_t r15;
  _Atomic uint32_t running;
  uint64_t signal_stack;
} VFiberState;
enum { FIBER_NORMAL, FIBER_EXITED, FIBER_WAITED_ON };
typedef struct VFiber {
  VFiberContext * context;
  uint64_t (*startup_func)(struct VFiber * me, void * startup_data);
  void * startup_data;
  char * stack;
  size_t stacksize;
  uint64_t ret;
  struct VFiber * _Atomic waiter;
  _Atomic int status;
  VFiberState state;
} VFiber;

VFiber * VLaunchFiberWorkers(VFiberContext ** context_out, int numthreads, size_t stacksize);
void VCloseFiberWorkers(VFiberContext * context);

VFiber * VPushFiber(VFiberContext * context, VFiber * me, uint64_t (*func)(VFiber * me, void * data), void *data);
uint64_t VFiberWait(VFiberContext * context, VFiber * waitee, VFiber * me);
bool VTryFiberWait(VFiberContext * context, VFiber * waitee, VFiber * me, uint64_t * ret);

void VFiberSleep(VFiber * me, double seconds);

SYSV_CALL void VFiberFork(V_CORE_ARGS, VWORD k, ...);
#endif
