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
#include <limits.h>
#include <stdlib.h>
#include <setjmp.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>
#include <assert.h>
#include <stdint.h>

// Current ABI: void Foobar(VEnv * env);
// Deep Binding ABI: void Foobar(VEnv * env, VDyn * dyn);
// Advanced ABI: void Foobar(VRuntime * runtime, VEnv * up, VDyn * dyn, int num_vars, ...)
// where VWORDs are stored as doubles to go in the xmm registers

#include "vscheme/vhash.h"

typedef struct {
  double number;
} VWORD;

// If not ISNAN => a number

// 4 bits after mantissa are tag

// RTTP
// last bit, true for pointer
// 2 bits for indicating pointer types
// ==> closure, pair, other

// Otherwise a nonnumber immediate.
// TTTP
// nonpointer types: false, true, NAN, NULL, int, char

#define vint long
#define VINT_MASK 0x0000FFFFffffFFFFul
#define VINT_MAX  0x00007FFFffffFFFFl
#define VINT_MIN ~VINT_MAX

#define TAG_BIAS         0x0001000000000000ul
#define POINTER_TEST_BIT 0x0001000000000000ul
enum VPOINTER_T { VPOINTER_CLOSURE = 1*TAG_BIAS, VPOINTER_PAIR = 3*TAG_BIAS, VPOINTER_C = 5*TAG_BIAS, VPOINTER_OTHER = 7*TAG_BIAS };
//cannot start at 0, the mantissa has to be nonzero as otherwise the number is an inf
//enum VIMMERAL_T { VIMM_TRUE = 2*TAG_BIAS, VIMM_NAN = 4*TAG_BIAS, VIMM_NULL = 6*TAG_BIAS, VIMM_FALSE = 8*TAG_BIAS, VIMM_VOID = 10*TAG_BIAS, VIMM_INT = 12*TAG_BIAS, VIMM_EOF = 14*TAG_BIAS, VIMM_NUMBER = 16*TAG_BIAS };
enum VIMMERAL_T { VIMM_TOK = 2*TAG_BIAS, VIMM_INT = 4*TAG_BIAS, VIMM_CHAR = 6*TAG_BIAS, VIMM_NUMBER = 16*TAG_BIAS };
enum VTOK_T {
  VTOK_FALSE, VTOK_TRUE, VTOK_VOID, VTOK_NAN, VTOK_NULL, VTOK_EOF, VTOK_TOMBSTONE,
  // TO ONLY BE USED BY THE LEXER
  VTOK_LEX_OPENPAREN, VTOK_LEX_CLOSEPAREN, VTOK_LEX_VECPAREN, VTOK_LEX_DOT, VTOK_LEX_COMMENT,
  VTOK_LEX_QUOTE, VTOK_LEX_QUASIQUOTE, VTOK_LEX_UNQUOTE, VTOK_LEX_UNQUOTE_SPLICING,
  VNUM_TOKS
};

enum VTAG {
  VTAG_START = 33, VENV = 33, VCLOSURE, VPAIR, VCONST_PAIR, VVECTOR, VRECORD, VSYMBOL, VSTRING, VPORT,
  VTAG_END };
typedef unsigned VTAG;

enum VJMP { VJMP_START, VJMP_FINISH, VJMP_GC, VJMP_ERROR, VJMP_EXIT };

#define LITERAL_TYPE_MASK (15ul*TAG_BIAS)

#define LITERAL_HEADER 0x7FF0000000000000ul
#define POINTER_MIRROR 0xFFFF000000000000ul

#define VNAN VWord(LITERAL_HEADER | VIMM_TOK | VTOK_NAN)
#define VNULL VWord(LITERAL_HEADER | VIMM_TOK | VTOK_NULL)
#define VTRUE VWord(LITERAL_HEADER | VIMM_TOK | VTOK_TRUE)
#define VFALSE VWord(LITERAL_HEADER | VIMM_TOK | VTOK_FALSE)
#define VVOID VWord(LITERAL_HEADER | VIMM_TOK | VTOK_VOID)
#define VEOF VWord(LITERAL_HEADER | VIMM_TOK | VTOK_EOF)
#define VTOMBSTONE VWord(LITERAL_HEADER | VIMM_TOK | VTOK_TOMBSTONE)

#define FORWARDED ULLONG_MAX

static inline unsigned long VBits(VWORD v) {
  union {
    unsigned long bits;
    VWORD v2;
  } u;
  u.v2 = v;
  return u.bits;
}
static inline VWORD VWord(unsigned long v) {
  union {
    unsigned long bits;
    VWORD v2;
  } u;
  u.bits = v;
  return u.v2;
}

static inline bool VIsEq(VWORD a, VWORD b) { return VBits(a) == VBits(b); }

static inline VWORD VEncodeToken(int tok) { return VWord(LITERAL_HEADER | VIMM_TOK | tok); }
static inline bool VIsToken(VWORD v, int tok) { return VBits(v) == (LITERAL_HEADER | VIMM_TOK | tok); }

static inline bool VIsNumber(VWORD v) {
  return !isnan(v.number) || VIsToken(v, VTOK_NAN);
}
static inline unsigned long VWordType(VWORD v) {
  unsigned long bits = VBits(v);
  if(VIsNumber(v)) {
    return VIMM_NUMBER;
  } else {
    return bits & LITERAL_TYPE_MASK;
  }
}
static inline bool VIsPointer(VWORD v) {
  return !VIsNumber(v) && VBits(v) & POINTER_TEST_BIT;
}

void VError(const char *, ...);
static inline void VCheckWordType(VWORD v, enum VIMMERAL_T type) {
  if(VWordType(v) != type)
  {
    VError("incorrect type\n");
  }
}

static inline VWORD VEncodePointer(void * v, enum VPOINTER_T type) {
  if(type != VPOINTER_C) {
    unsigned long bits = (unsigned long)(intptr_t)v;
    bits &= ~POINTER_MIRROR;
    bits |= type;
    bits |= LITERAL_HEADER;
    return VWord(bits);
  }
  return VVOID;
}
static_assert(-1l == -1l >> 63l);
static inline VWORD * VDecodePointer(VWORD v) {
  long bits = (long)VBits(v);
  bits = (bits << 16l) >> 16l;
  return (VWORD*)(intptr_t)bits;
}

static inline struct VClosure * VDecodeClosure(VWORD v) {
  if(VWordType(v) != VPOINTER_CLOSURE) VError("not a closure: ~s\n", v);
  return (struct VClosure*)VDecodePointer(v);
}
static inline struct VClosure * VDecodeClosureApply(VWORD v) {
  if(VWordType(v) != VPOINTER_CLOSURE) VError("tried to call non-procedure: ~s\n", v);
  return (struct VClosure*)VDecodePointer(v);
}

static inline VWORD VEncodeClosure(struct VClosure * c) {
  return VEncodePointer(c, VPOINTER_CLOSURE);
}


static inline long VDecodeInt(VWORD v) {
  return ((long)VBits(v) << 16l) >> 16l;
}
static inline VWORD VEncodeInt(long i) {
  if(!(VINT_MIN <= i && i <= VINT_MAX)) VError("int encoding overflow ~L exceeds 48 bits\n", i);
  return VWord(LITERAL_HEADER | VIMM_INT | (VINT_MASK & (unsigned long)i));
}

static inline char VDecodeChar(VWORD v) {
  return (char)(VBits(v) & 0xFF);
}
static inline VWORD VEncodeChar(char c) {
  return VWord(LITERAL_HEADER | VIMM_CHAR | (unsigned char)c);
}

static inline double VDecodeNumber(VWORD v) {
  return v.number;
}
static inline VWORD VEncodeNumber(double d) {
  return (VWORD){.number = d};
}

static inline unsigned VDecodeToken(VWORD v) {
  return (unsigned)(VBits(v) & 0xFFFFFFFF);
}
static inline bool VDecodeBool(VWORD v) {
  return !VIsToken(v, VTOK_FALSE);
}
static inline VWORD VEncodeBool(bool b) {
  return b ? VTRUE : VFALSE;
}

// strings, symbols, raw bytes
typedef struct VBlob {
  VTAG tag;
  unsigned len;
  char buf[];
} VBlob;
#define V_ALLOCA_BLOB(len) alloca(sizeof(VBlob) + len);
static inline VBlob * VFillBlob(VBlob * blob, VTAG tag, unsigned len, char const * dat) {
  blob->tag = tag;
  blob->len = len;
  memcpy(blob->buf, dat, len);
  return blob;
}
#define V_BLOB_LITERAL(tag, dat) VEncodePointer(VFillBlob(alloca(sizeof(VBlob) + sizeof dat), tag, sizeof dat, dat), VPOINTER_OTHER)

static inline VBlob * VDecodeBlob(VWORD v) {
  if(VWordType(v) == VPOINTER_OTHER)
    return (VBlob*) VDecodePointer(v);
  else
    return NULL;
}

typedef struct VVector {
  VTAG tag;
  unsigned len;
  VWORD arr[];
} VVector;
#define V_ALLOCA_VECTOR(len) alloca(sizeof(VVector) + sizeof(VWORD[len]));
static inline VVector * VFillVector(VVector * vec, VTAG tag, unsigned len, VWORD const * dat) {
  vec->tag = tag;
  vec->len = len;
  memcpy(vec->arr, dat, sizeof(VWORD[len]));
  return vec;
}
#define V_VECTOR_LITERAL(dat) VEncodePointer(VFillVector(alloca(sizeof(VVector) + sizeof dat), VVECTOR, sizeof dat / sizeof *dat, dat), VPOINTER_OTHER)

static inline VVector * VDecodeVector(VWORD v) {
  if(VWordType(v) == VPOINTER_OTHER)
  {
    void * ptr = VDecodePointer(v);
    if(*(VTAG*)ptr == VVECTOR)
      return (VVector*)ptr;
  }
  return NULL;
}

enum PORT_FLAG_T { PFLAG_READ = 1, PFLAG_WRITE = 2, PFLAG_OSTRING = 4, PFLAG_PROCESS = 8 };
typedef struct VPort {
  VTAG tag;
  FILE * stream;
  unsigned flags;
} VPort;

static inline VPort VMakePortStream(FILE * stream, unsigned flags) {
  return (VPort) { .tag = VPORT, .stream = stream, .flags = flags };
}

typedef struct VPair {
  VTAG tag;
  VWORD first;
  VWORD rest;
} VPair;

static inline VWORD VEncodePair(VPair * p) {
  return VEncodePointer(p, VPOINTER_PAIR);
}
static inline VPair * VDecodePair(VWORD v) {
  return (VPair*)VDecodePointer(v);
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

static inline bool VCheckSymbolEqv(VWORD a, VWORD b) {
  if(VBits(a) == VBits(b))
    return true;
  VBlob * blob_a = (VBlob*)VDecodePointer(a);
  VBlob * blob_b = (VBlob*)VDecodePointer(b);
  return !strcmp(blob_a->buf, blob_b->buf);
}

typedef struct {
  hash64 hash;
  VWORD symbol;
  VWORD value;
} VGlobalEntry;

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

struct VClosure;
typedef struct VEnv {
  VTAG tag;
  unsigned short num_vars;
  unsigned short var_len;
  struct VEnv * up;
  VWORD vars[];
} VEnv;

static inline VWORD VGetArg(VEnv * env, int up, int var) {
  while(up) {
    env = env->up;
    up--;
  }
  return env->vars[var];
}

typedef struct VDebugInfo {
  char const * name;
} VDebugInfo;
#define V_CALL_HISTORY_LEN 16
extern VDebugInfo * VCallHistory[V_CALL_HISTORY_LEN];
extern unsigned VCallHistoryCursor;
static inline void VRecordCall(VDebugInfo * debug) {
  VCallHistory[++VCallHistoryCursor % V_CALL_HISTORY_LEN] = debug;
}

#define V_GATHER_VARARGS(env, start) do { \
  VEnv ** _env_dp = (env); \
  VEnv * _env = *_env_dp; \
  unsigned _start = (start); \
  assert(_start); /* arg 0 is the continuation, can't be part of varargs */ \
  VWORD _list = VNULL; \
  /* create a list in reverse order */ \
  for(unsigned _cur = _env->num_vars-1; _cur >= _start; _cur--) { \
    VPair * _pair = alloca(sizeof(VPair)); \
    _pair->tag = VPAIR; \
    _pair->first = _env->vars[_cur]; \
    _pair->rest = _list; \
    _list = VEncodePair(_pair); \
  } \
  VEnv * _newenv = _env; \
  if(_env->var_len > _start) { \
    /* can reuse the env: all good! */ \
  } else if(_env->var_len == _start) { \
    /* 0 varargs were passed in & the env is not big enough: create a bigger env. */ \
    _newenv = alloca(sizeof(VEnv)+sizeof(VWORD[_start+1])); \
    _newenv->tag = VENV; \
    _newenv->num_vars = _start+1; \
    _newenv->var_len = _start+1; \
    _newenv->up = _env->up; \
    memcpy(_newenv->vars, _env->vars, sizeof(VWORD[_start])); \
  } else { \
    VError("Not enough arguments to variadic function\n"); \
  } \
  _newenv->vars[_start] = _list; \
  _newenv->num_vars = _start+1; \
  *_env_dp = _newenv; \
} while(0)

typedef struct VClosure {
  VTAG tag;
  void (*func)(VEnv * env);
  VEnv * env;
} VClosure;
static inline VClosure VMakeClosure(void (*f)(VEnv * env), VEnv * env) {
  return (VClosure) {
    .tag = VCLOSURE,
    .func = f,
    .env = env,
  };
}

#define V_CALL(f, ...) V_CALL_CLOSURE(f, __VA_ARGS__)

#define V_CALL_CLOSURE(closure, ...) \
 do { \
   VClosure * _closure = (closure); \
   struct { \
     VEnv next; \
     VWORD vars[sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD)]; \
   } _container = { \
     .next = { \
       .tag = VENV, \
       .up = (_closure->env), \
       .num_vars = sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD), \
       .var_len = sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD), \
     }, \
    .vars = { __VA_ARGS__ }, \
   }; \
   (_closure->func)(&_container.next); \
 } while(0)

#define V_CALL_FUNC(func, ...) \
 do { \
   struct { \
     VEnv next; \
     VWORD vars[sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD)]; \
   } _container = { \
     .next = { \
       .tag = VENV, \
       .up = NULL, \
       .num_vars = sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD), \
       .var_len = sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD), \
     }, \
    .vars = { __VA_ARGS__ }, \
   }; \
   (func)(&_container.next); \
 } while(0)

typedef void(*VFunc)(VEnv*);

#define V_LETREC(env, ...) \
  struct { \
    VEnv letrec; \
    VWORD vars[sizeof (VFunc[]){ __VA_ARGS__ } / sizeof(VFunc)]; \
  } _container = { \
    .letrec = { \
      .tag = VENV, \
      .up = env, \
      .num_vars = sizeof (VFunc[]){ __VA_ARGS__ } / sizeof(VFunc), \
      .var_len = sizeof (VFunc[]){ __VA_ARGS__ } / sizeof(VFunc), \
    } \
  }; \
  env = &_container.letrec; \
  VClosure _closures[sizeof (VFunc[]){ __VA_ARGS__ } / sizeof(VFunc)]; \
  VBindLetrec(env, _closures, (VFunc[]){ __VA_ARGS__ })

#if 1
#define V_TAIL_CALL_CLOSURE(oldenv, closure, ...) \
 do { \
   /* tail calls don't generate closures or continuations so the oldenv is garbage */ \
   /* reuse variable frame when possible to reduce garbage generated */ \
   VEnv * _env = oldenv; \
   if(oldenv && oldenv->var_len >= sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD)) { \
     _env = oldenv; \
   } else { \
     _env = alloca(sizeof(VEnv) + sizeof((VWORD[]){ __VA_ARGS__ })); \
     _env->var_len = sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD); \
   } \
   VClosure * _closure = (closure); \
   memcpy(_env->vars, (VWORD[]){ __VA_ARGS__ }, sizeof (VWORD[]){ __VA_ARGS__ }); \
    \
   *_env = (VEnv) { \
     .tag = VENV, \
     .up = (_closure->env), \
     .num_vars = sizeof (VWORD[]){ __VA_ARGS__ } / sizeof(VWORD), \
     .var_len = _env->var_len, \
   }; \
    \
   /*assert(0);*/ \
   (_closure->func)(_env); \
 } while(0)
#define V_TAIL_CALL(oldenv, f, ...) V_TAIL_CALL_CLOSURE(oldenv, f, __VA_ARGS__)
#else
#define V_TAIL_CALL_CLOSURE(oldenv, func, ...) \
  V_CALL(func, __VA_ARGS__)
#define V_TAIL_CALL(oldenv, func, ...) \
  V_CALL(func, __VA_ARGS__)
#endif

#define V_GC_CHECK(func, env) \
  if(VStackOverflow((char*)&env)) { \
    VGarbageCollect(func, env); \
  } else

#define V_ARG_CHECK(func, nargs, env) \
  do { \
    if(nargs != env->num_vars) { \
      VError("Incorrect number of arguments to ~Z, got ~D, need ~D\n", func, env->num_vars, nargs); \
    } } while(0)
#define V_ARG_MIN(func, nargs, env) \
  do { \
    if(env->num_vars < nargs) { \
      VError("Incorrect number of arguments to ~Z, got ~D, need ~D\n", func, env->num_vars, nargs); \
    } } while(0)
#define V_ARG_RANGE(func, nargmin, nargmax, env) \
  do { \
    if(env->num_vars < nargmin || env->num_vars > nargmax) { \
      VError("Incorrect number of arguments to ~Z, got ~D, need between ~D and ~D\n", func, env->num_vars, nargmin, nargmax); \
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
void VGarbageCollect(void (*f)(VEnv * env), VEnv * env);

// Root level continuation
void VNext(VEnv * env);
// Default exception continuation
void VAbort(VEnv * env);
// Exit PROCEDURE, expects a continuation in slot 1
void VExit(VEnv * env);

void VDisplayWord(FILE * f, VWORD v, bool write);
void VBegin(VEnv * env);
void VIf(VEnv * env);

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

void VSetCar(VEnv * env);
void VSetCdr(VEnv * env);
void VVectorSet(VEnv * env);

void VSetEnvVar(VEnv * env);
void VSetGlobalVar(VEnv * env);
void VDefineGlobalVar(VEnv * env);
void VMultiDefine(VEnv * env);

void VFunction(VEnv * env);
void VLookupLibrary(VEnv * env);

// Main is the entrypoint into the program, the exit closure passed to main
// is the final continuation to end the program
int VStart(int nargs, void(* const * toplevels)());

extern int VArgc;
extern char ** VArgv;

void VCommandLine(VEnv * env);
