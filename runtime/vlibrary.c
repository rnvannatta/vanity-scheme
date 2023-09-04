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
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include <assert.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>

__attribute__((used)) static void VAdd2CaseVarargs(V_CORE_ARGS, VWORD k, ...) {
    V_ARG_MIN2("+", 1, argc);
    bool exact = true;
    double dacc = 0;
    int64_t iacc = 0;
    va_list args;
    va_start(args, k);
    for(unsigned i = 1; i < argc; i++) {
      VWORD v = va_arg(args, VWORD);
      uint64_t type = VWordType(v);
      if(type == VIMM_INT) {
        iacc += VDecodeInt(v);
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc += VDecodeNumber(v);
      } else {
        VError("+: not a number\n");
      }
    }
    va_end(args);
    VWORD ret;
    if(iacc >= INT32_MAX || iacc <= INT32_MIN)
      exact = false;

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    V_CALL(k, runtime, ret);
}

__attribute__((used)) static void VAdd2Case2(V_CORE_ARGS, VWORD k, VWORD a, VWORD b) {
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
        VError("+: not v number ~S\n", v);
      }
    }
    VWORD ret;
    if(iacc >= INT32_MAX || iacc <= INT32_MIN)
      exact = false;

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    V_CALL(k, runtime, ret);
}

void VAdd2(V_CORE_ARGS, VWORD k, ...);
asm(
".intel_syntax noprefix\n"
".globl VAdd2\n"
"VAdd2:\n"
" cmp edx, 3\n"
" je VAdd2Case2\n"
" jmp VAdd2CaseVarargs\n"
);

__attribute__((used)) static void VSub2Case2(V_CORE_ARGS, VWORD k, VWORD a, VWORD b) {
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
        VError("-: not a number ~S\n", a);
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
        VError("-: not a number ~S\n", b);
      }
    }
    VWORD ret;
    if(iacc >= INT32_MAX || iacc <= INT32_MIN)
      exact = false;

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    V_CALL(k, runtime, ret);
}

__attribute__((used)) static void VSub2CaseVarargs(V_CORE_ARGS, VWORD k, VWORD x, ...) {
    V_ARG_MIN2("-", 2, argc);
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
        VError("-: not a number\n");
      }
    }
    // performs the -x op
    if(argc == 2) {
      iacc = -iacc;
      dacc = -dacc;
      goto end;
    }
    // performs x0 - x1 - x2 - x3 ...
    va_list args;
    va_start(args, x);
    for(unsigned i = 2; i < argc; i++) {
      VWORD v = va_arg(args, VWORD);
      uint64_t type = VWordType(v);
      if(type == VIMM_INT) {
        iacc -= VDecodeInt(v);
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc -= VDecodeNumber(v);
      } else {
        VError("-: not a number\n");
      }
    }
    va_end(args);
end:
    {
      VWORD ret;
      if(iacc >= INT32_MAX || iacc <= INT32_MIN)
        exact = false;

      if(exact)
        ret = VEncodeInt(iacc);
      else
        ret = VEncodeNumber(iacc+dacc);
      V_CALL(k, runtime, ret);
    }
}

void VSub2(V_CORE_ARGS, VWORD k, VWORD x, ...);
asm(
".intel_syntax noprefix\n"
".globl VSub2\n"
"VSub2:\n"
" cmp edx, 3\n"
" je VSub2Case2\n"
" jmp VSub2CaseVarargs\n"
);

void VMul2(V_CORE_ARGS, VWORD k, ...) {
    V_ARG_MIN2("*", 1, argc);
    bool exact = true;
    double dacc = 1;
    int64_t iacc = 1;
    va_list args;
    va_start(args, k);
    for(unsigned i = 1; i < argc; i++) {
      VWORD v = va_arg(args, VWORD);
      uint64_t type = VWordType(v);
      if(type == VIMM_INT) {
        // FIXME no longer handles overflow correctly, instead
        // use overflow detection from hacker's delight
        iacc *= VDecodeInt(v);
        if(iacc >= INT32_MAX || iacc <= INT32_MIN) {
          exact = false;
          dacc *= iacc;
          iacc = 1;
        }
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc *= VDecodeNumber(v);
      } else {
        VError("*: not a number\n");
      }
    }
    VWORD ret;
    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc*dacc);
    V_CALL(k, runtime, ret);
}

void VDiv2(V_CORE_ARGS, VWORD k, VWORD x, ...) {
    V_ARG_MIN2("/", 2, argc);
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
        VError("/: not a number\n");
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
    va_list args;
    va_start(args, x);
    for(unsigned i = 2; i < argc; i++) {
      VWORD v = va_arg(args, VWORD);
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
        VError("-: not a number\n");
      }
    }
    va_end(args);
end:
    {
      VWORD ret;
      if(exact)
        ret = VEncodeInt(iacc);
      else
        ret = VEncodeNumber(iacc*dacc);
      V_CALL(k, runtime, ret);
    }
}

void VQuot2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
    V_ARG_CHECK2("quotient", 3, argc);

    if(VWordType(x) != VIMM_INT) VError("quotient: not an int");
    if(VWordType(y) != VIMM_INT) VError("quotient: not an int");

    V_CALL(k, runtime, VEncodeInt(VDecodeInt(x) / VDecodeInt(y)));
}
void VRem2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
    V_ARG_CHECK2("remainder", 3, argc);

    if(VWordType(x) != VIMM_INT) VError("remainder: not an int");
    if(VWordType(y) != VIMM_INT) VError("remainder: not an int");

    V_CALL(k, runtime, VEncodeInt(VDecodeInt(x) % VDecodeInt(y)));
}

// This feels fucking idiotic.
void VCmp2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK2("cmp", 3, argc);
  double a, b;
  if(isnan(a=VDecodeNumber(x))) {
    if(VWordType(x) != VIMM_INT)
      VError("cmp: not a number ~A", x);
    a = (double)VDecodeInt(x);
  }
  if(isnan(b=VDecodeNumber(y))) {
    if(VWordType(y) != VIMM_INT)
      VError("cmp: not a number ~A", y);
    b = (double)VDecodeInt(y);
  }

  double diff = a - b;
  int ret = diff  > 0.0 ? 1
          : diff == 0.0 ? 0
          : -1 ;

  V_CALL(k, runtime, VEncodeInt(ret));
  
}

// type predicates
void VNullP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("null?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VBits(x) == VBits(VNULL)));
}
void VEofP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("eof-object?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VBits(x) == VBits(VEOF)));
}
void VPairP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("pair?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VWordType(x) == VPOINTER_PAIR));
}
void VVectorP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("vector?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsVector(x)));
}
void VProcedureP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("procedure?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VWordType(x) == VPOINTER_CLOSURE));
}
void VBlobP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("blob?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsBlob(x)));
}
void VSymbolP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("symbol?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsSymbol(x)));
}
void VStringP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("string?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsString(x)));
}
void VDoubleP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("double?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsNumber(x)));
}
void VIntP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("int?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VWordType(x) == VIMM_INT));
}
void VCharP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("char?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VWordType(x) == VIMM_CHAR));
}

// equality
void VEq2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK2("eq?", 3, argc);
  V_CALL(k, runtime, VInlineEq(x, y));
}

void VSymbolEqv2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK2("symbol=?", 3, argc);
  V_CALL(k, runtime, VInlineSymbolEqv(x, y));
}
void VBlobEqv2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK2("blob=?", 3, argc);
  VBlob * blob_a = VCheckedDecodeBlob(x, "blob=?");
  VBlob * blob_b = VCheckedDecodeBlob(y, "blob=?");
  bool ret = false;
  if(blob_a->len == blob_b->len)
    ret = blob_a->tag == blob_b->tag && !memcmp(blob_a->buf, blob_b->buf, blob_a->len);
  V_CALL(k, runtime, VEncodeBool(ret));
}

// logic

void VNot2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("not", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VBits(x) == VBits(VFALSE)));
}

// pairs

void VCons2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
    V_ARG_CHECK2("cons", 3, argc);
    V_CALL(k, runtime, VInlineCons(x, y));
}

void VCar2(V_CORE_ARGS, VWORD k, VWORD x) {
    V_ARG_CHECK2("car", 2, argc);
    V_CALL(k, runtime, VInlineCar(x));
}

void VCdr2(V_CORE_ARGS, VWORD k, VWORD x) {
    V_ARG_CHECK2("cdr", 2, argc);
    V_CALL(k, runtime, VInlineCdr(x));
}

// vectors

void VListVector2(V_CORE_ARGS, VWORD k, VWORD lst) {
  V_ARG_CHECK2("list->vector", 2, argc);

  V_GC_CHECK2_VARARGS((VFunc)VListVector2, runtime, statics, 2, argc, k, lst) {
    int len = 0;
    VWORD v = lst;
    while(VWordType(v) == VPOINTER_PAIR) {
      len++;
      v = VDecodePair(v)->rest;
    }
    if(VBits(v) != VBits(VNULL)) VError("list->vector: not a null-terminated list\n");

    VVector * vec = V_ALLOCA_VECTOR(len);
    vec->tag = VVECTOR;
    vec->len = len;

    v = lst;
    int i = 0;
    while(VWordType(v) == VPOINTER_PAIR) {
      VPair * p = VDecodePair(v);
      vec->arr[i++] = p->first;
      v = p->rest;
    }
    V_CALL(k, runtime, VEncodePointer(vec, VPOINTER_OTHER));
  }
}

void VVectorRef2(V_CORE_ARGS, VWORD k, VWORD vector, VWORD index) {
  V_ARG_CHECK2("vector-ref", 3, argc);
  VVector * vec = VCheckedDecodeVector(vector, "vector-ref");
  if(VWordType(index) != VIMM_INT) VError("vector-ref: arg 2 not an int\n");
  int i = VDecodeInt(index);
  if(!(0 <= i && i < vec->len)) VError("vector-ref: out of range\n");

  V_CALL(k, runtime, vec->arr[i]);
}

void VVectorLength2(V_CORE_ARGS, VWORD k, VWORD vector) {
  V_ARG_CHECK2("vector-length", 2, argc);
  VVector * vec = VCheckedDecodeVector(vector, "vector-length");
  V_CALL(k, runtime, VEncodeInt(vec->len));
}

// strings
void VMakeString2(V_CORE_ARGS, VWORD k, VWORD len, ...) {
  V_ARG_RANGE2("make-string", 2, 3, argc);

  if(VWordType(len) != VIMM_INT) VError("make-string: not an int");
  int i = VDecodeInt(len);
  if(!(0 <= i && i < 1024 * 1024)) VError("make-string: out of bounds");

  char c = 'X';
  if(argc == 3) {
    va_list args;
    va_start(args, len);
    VWORD fill = va_arg(args, VWORD);
    va_end(args);

    if(VWordType(fill) != VIMM_CHAR) VError("make-string: not a char");
    c = VDecodeChar(fill);
  }

  VBlob * str = alloca(sizeof(VBlob) + i + 1);
  str->tag = VSTRING;
  str->len = i + 1;
  str->buf[i] = '\0';
  memset(str->buf, c, i);

  V_CALL(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}

void VSubstring2(V_CORE_ARGS, VWORD k, VWORD string, ...) {
  V_ARG_RANGE2("substring", 2, 4, argc);

  VBlob const * str = VCheckedDecodeString(string, "substring");

  int start = 0;
  int end = str->len - 1;
  va_list args;
  if(argc >= 3)
  {
    va_start(args, string);
    VWORD startword = va_arg(args, VWORD);
    if(VWordType(startword) != VIMM_INT) VError("substring: arg 2 not an int");
    start = VDecodeInt(startword);
  }
  if(argc >= 4)
  {
    VWORD endword = va_arg(args, VWORD);
    if(VWordType(endword) != VIMM_INT) VError("substring: arg 3 not an int");
    end = VDecodeInt(endword);
  }
  if(argc >= 3)
  {
    va_end(args);
  }
  if(!(0 <= start && start < str->len)) VError("substring: start out of bounds");
  if(!(0 <= end && end < str->len)) VError("substring: end out of bounds");
  if(start > end) VError("substring: start greater than end");
  int len = end - start;
  VBlob * copy = alloca(sizeof(VBlob) + len + 1);
  copy->tag = VSTRING;
  copy->len = len + 1;
  copy->buf[len] = '\0';
  memcpy(copy->buf, str->buf + start, len);

  V_CALL(k, runtime, VEncodePointer(copy, VPOINTER_OTHER));
}

void VStringCopy2(V_CORE_ARGS, VWORD k, VWORD dest, VWORD _at, VWORD source, ...) {
  V_ARG_RANGE2("string-copy!", 4, 6, argc);

  VBlob * dst = VCheckedDecodeString(dest, "string-copy!");

  if(VWordType(_at) != VIMM_INT) VError("string-copy!: arg 2 not an int\n");
  int at = VDecodeInt(_at);
  if(!(0 <= at && at < dst->len)) VError("string-copy!: at out of bounds\n");

  VBlob const * src = VCheckedDecodeString(source, "string-copy!");


  int start = 0;
  int end = src->len - 1;
  va_list args;
  if(argc >= 5) {
    va_start(args, source);
    VWORD _start = va_arg(args, VWORD);
    if(VWordType(_start) != VIMM_INT) VError("string-copy!: arg 4 not an int\n");
    start = VDecodeInt(_start);
  }
  if(argc >= 6) {
    VWORD _end = va_arg(args, VWORD);
    if(VWordType(_end) != VIMM_INT) VError("string-copy!: arg 5 not an int\n");
    end = VDecodeInt(_end);
  }
  if(argc >= 5) {
    va_end(args);
  }
  int srclen = end - start;
  int dstlen = dst->len-1 - at;
  if(!(0 <= start && start < src->len)) VError("string-copy!: start out of bounds\n");
  if(!(0 <= end && end < src->len)) VError("string-copy!: end out of bounds\n");
  if(start > end) VError("string-copy!: start greater than end\n");
  if(dstlen < srclen) VError("string-copy!: attempting to copy ~l chars into a substring ~l chars long.\n", srclen, dstlen);

  memmove(dst->buf + at, src->buf + start, srclen);
  V_CALL(k, runtime, VVOID);
}

void VStringLength2(V_CORE_ARGS, VWORD k, VWORD _str) {
  V_ARG_CHECK2("string-length", 2, argc);
  VBlob * str = VCheckedDecodeString(_str, "string-length");

  // not exposing the null terminal
  V_CALL(k, runtime, VEncodeInt(str->len - 1));
}

void VStringRef2(V_CORE_ARGS, VWORD k, VWORD _str, VWORD _i) {
  V_ARG_CHECK2("string-ref", 3, argc);
  VBlob * str = VCheckedDecodeString(_str, "string-ref");

  if(VWordType(_i) != VIMM_INT) VError("string-ref: not an int");
  int i = VDecodeInt(_i);
  // not exposing the null terminal
  if(!(0 <= i && i < str->len)) VError("string-ref: ~A out of bounds (0 to ~D)~N", _i, str->len);

  V_CALL(k, runtime, VEncodeChar(str->buf[i]));
}

void VStringSet2(V_CORE_ARGS, VWORD k, VWORD _str, VWORD _i, VWORD _c) {
  V_ARG_CHECK2("string-set!", 4, argc);
  VBlob * str = VCheckedDecodeString(_str, "string-set!");

  if(VWordType(_i) != VIMM_INT) VError("string-set!: not an int");
  int i = VDecodeInt(_i);
  // not exposing the null terminal
  if(!(0 <= i && i < str->len)) VError("string-set!: out of bounds");

  if(VWordType(_c) != VIMM_CHAR) VError("string-set!: not a char");

  char c = VDecodeChar(_c);
  str->buf[i] = c;

  V_CALL(k, runtime, VVOID);
}

void VStringSymbol2(V_CORE_ARGS, VWORD k, VWORD _str) {
  V_ARG_CHECK2("string->symbol", 2, argc);
  VBlob * str = VCheckedDecodeString(_str, "string->symbol");

  VBlob * sym = V_ALLOCA_BLOB(str->len);
  VFillBlob(sym, VSYMBOL, str->len, str->buf);
  V_CALL(k, runtime, VEncodePointer(sym, VPOINTER_OTHER));
}
void VSymbolString2(V_CORE_ARGS, VWORD k, VWORD _sym) {
  V_ARG_CHECK2("symbol->string", 2, argc);
  VBlob * sym = VCheckedDecodeSymbol(_sym, "symbol->string");

  VBlob * str = V_ALLOCA_BLOB(sym->len);
  VFillBlob(str, VSTRING, sym->len, sym->buf);
  V_CALL(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}

void VStringNumber2(V_CORE_ARGS, VWORD k, VWORD _str) {
  V_ARG_CHECK2("string->number", 2, argc);
  VBlob * str = VCheckedDecodeString(_str, "string->number");

  if(str->len == 1)
    V_CALL(k, runtime, VFALSE);

  char * end = NULL;
  errno = 0;
  double d = strtod(str->buf, &end);
  if(errno) {
    errno = 0;
    V_CALL(k, runtime, VFALSE);
  }
  if(str->buf + str->len - 1 != end)
    V_CALL(k, runtime, VFALSE);

  // FIXME lazy but incorrect way to parse ints vs doubles, need to parse by checking for period
  // actually, it's probably correct but stupid, deliberate deviation incoming
  if(floor(d) == d && INT32_MIN <= d && d <= INT32_MAX) {
    V_CALL(k, runtime, VEncodeInt((int)d));
  } else {
    V_CALL(k, runtime, VEncodeNumber(d));
  }
}

// chars

void VCharInt2(V_CORE_ARGS, VWORD k, VWORD c) {
  V_ARG_CHECK2("char->int", 2, argc);
  if(VWordType(c) != VIMM_CHAR) VError("char->integer: not a char");
  V_CALL(k, runtime, VEncodeInt((int)VDecodeChar(c)));
}

// ports
void VDupStdout2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK2("dup-stdout", 1, argc);

  // also idiotic. just add a flag to ports to not close on final
  int fd = dup(fileno(stdout));
  FILE * f = fdopen(fd, "wb");
  VPort port = VMakePortStream(f, PFLAG_WRITE);
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

void VDupStdin2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK2("dup-stdin", 1, argc);

  // also idiotic. just add a flag to ports to not close on final
  int fd = dup(fileno(stdin));
  FILE * f = fdopen(fd, "rb");
  VPort port = VMakePortStream(f, PFLAG_READ);
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

void VDupStderr2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK2("dup-stderr", 1, argc);

  // also idiotic. just add a flag to ports to not close on final
  int fd = dup(fileno(stderr));
  FILE * f = fdopen(fd, "wb");
  VPort port = VMakePortStream(f, PFLAG_WRITE);
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

static void VOpenStream2(VRuntime * runtime, VWORD k, VWORD path, char const * mode, unsigned flags) {
  VBlob * str = VCheckedDecodeString(path, "open-stream");
  FILE * f = fopen(str->buf, mode);
  if(!f) VError("open-stream: failed to open file `~Z`~N", str->buf);
  VPort port = VMakePortStream(f, flags);
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

void VOpenInputStream2(V_CORE_ARGS, VWORD k, VWORD path) {
  V_ARG_CHECK2("open-input-stream", 2, argc);
  VOpenStream2(runtime, k, path, "rb", PFLAG_READ);
}
void VOpenOutputStream2(V_CORE_ARGS, VWORD k, VWORD path) {
  V_ARG_CHECK2("open-output-stream", 2, argc);
  VOpenStream2(runtime, k, path, "wb", PFLAG_WRITE);
}

void VCloseStream2(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK2("close-stream", 2, argc);

  if(VWordType(_port) != VPOINTER_OTHER) VError("close-stream: not a port");
  VPort * port = (VPort*)VDecodePointer(_port);
  if(port->tag != VPORT) VError("close-stream: not a port");

  if(port->stream)
  {
    if(port->flags & PFLAG_PROCESS)
      pclose(port->stream);
    else
      fclose(port->stream);
  }
  port->stream = NULL;

  V_CALL(k, runtime, VVOID);
}

void VOpenOutputString2(V_CORE_ARGS, VWORD k) {
  // using tmpfile like this feels horrible
  // but it works
  V_ARG_CHECK2("open-output-string", 1, argc);
  FILE * f = tmpfile();
  VPort port = VMakePortStream(f, PFLAG_WRITE | PFLAG_OSTRING);
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

void VGetOutputString2(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK2("get-output-string", 2, argc);
  VPort * port = (VPort*)VDecodePointer(_port);
  if(port->tag != VPORT) VError("get-output-string: not a port");
  if(!(port->flags & PFLAG_OSTRING)) VError("get-output-string: not an output string port");

  FILE * f = port->stream;
  int len = ftell(f);
  rewind(f);
  VBlob * str = alloca(sizeof(VBlob) + len + 1);
  str->tag = VSTRING;
  str->len = len+1;
  fread(str->buf, len, 1, f);
  str->buf[len] = '\0';
  fseek(f, 0, SEEK_END);

  V_CALL(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}

// input

void VReadChar2(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK2("read-char", 2, argc);
  VPort * port = (VPort*)VDecodePointer(_port);
  if(!port || port->tag != VPORT) VError("read-char: not a port ~S~N", _port);
  if(!(port->flags & PFLAG_READ)) VError("read-char: not an readable port ~S~N", _port);

  FILE * f = port->stream;
  char c = fgetc(f);
  if(c == EOF) {
    V_CALL(k, runtime, VEOF);
  } else {
    V_CALL(k, runtime, VEncodeChar((char)c));
  }
}

// FIXME BADLY only reads 256 char lines
void VReadLine2(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK2("read-line", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)VReadLine2, runtime, statics, 2, argc, k, _port) {
    VPort * port = (VPort*)VDecodePointer(_port);
    if(!port || port->tag != VPORT) VError("read-line: not a port ~S~N", _port);
    if(!(port->flags & PFLAG_READ)) VError("read-line: not an readable port ~S~N", _port);

    FILE * f = port->stream;
    VBlob * str = alloca(sizeof(VBlob) + 256);
    str->tag = VSTRING;
    if(!fgets(str->buf, 256, f)) {
      V_CALL(k, runtime, VEOF);
    } else {
      size_t len = strlen(str->buf);
      if(len > 0 && str->buf[len-1] == '\n')
        len--;
      if(len > 0 && str->buf[len-1] == '\r')
        len--;
      str->buf[len] = '\0';
      str->len = len+1; // account for the null terminal
      V_CALL(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
    }
  }
}

// output

void VDisplay2(V_CORE_ARGS, VWORD k, VWORD val, VWORD port) {
    V_ARG_CHECK2("display-word", 3, argc);
    FILE * f = ((VPort*)VDecodePointer(port))->stream;
    VDisplayWord(f, val, false);
    V_CALL(k, runtime, VVOID);
}
void VWrite2(V_CORE_ARGS, VWORD k, VWORD val, VWORD port) {
    V_ARG_CHECK2("write-word", 3, argc);
    FILE * f = ((VPort*)VDecodePointer(port))->stream;
    VDisplayWord(f, val, true);
    V_CALL(k, runtime, VVOID);
}
void VNewline2(V_CORE_ARGS, VWORD k, VWORD port) {
    V_ARG_CHECK2("newline", 2, argc);
    FILE * f = ((VPort*)VDecodePointer(port))->stream;
    fprintf(f, "\n");
    fflush(f);
    V_CALL(k, runtime, VVOID);
}

// misc

static void VCallCCLambda2(V_CORE_ARGS, VWORD k, ...) {
  // continuations dont have arg0 as a continuation
  // so we need a wrapper to drop arg0 then call the continuation
  // and we can do that just with memmoving and changing the up var
  VWORD realk = statics->vars[0];
  if(argc == 2) {
    // 99.99% of use cases, returning single value
    va_list args;
    va_start(args, k);
    VWORD ret = va_arg(args, VWORD);
    va_end(args);
    V_CALL(realk, runtime, ret);
  } else if(argc == 1) {
    // call/cc in a (begin)
    V_CALL(realk, runtime);
  } else {
    // nested call-with-values evil
    VClosure * realk_real = VDecodeClosureApply(realk);

    VEnvironment * environ = alloca(sizeof(VEnvironment) + sizeof(VWORD[argc-1]));
    environ->tag = VENVIRONMENT;
    environ->argc = argc-1;
    environ->runtime = runtime;
    environ->static_chain = realk_real->env;

    va_list args;
    va_start(args, k);
    for(int i = 1; i < argc; i++) {
      environ->argv[i-1] = va_arg(args, VWORD);
    }
    va_end(args);
    VSysApply(realk_real->func, environ);
  }
}

void VCallCC2(V_CORE_ARGS, VWORD k, VWORD _proc) {
  // (lambda (k proc) (proc k (lambda (k2 x) (k x))))
  // for supporting multiple values
  // (lambda (k proc) (proc k (lambda (k2 . xs) (apply k xs))))
  V_ARG_CHECK2("call/cc", 2, argc);
  
  VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[1]));
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = NULL;
  env->vars[0] = k;
  VClosure k_wrapped = VMakeClosure2((VFunc)VCallCCLambda2, env);

  V_CALL(_proc, runtime, k, VEncodeClosure(&k_wrapped));
}

void VCallValuesK2(V_CORE_ARGS, ...) {
  VWORD k = statics->vars[0];
  VClosure * consumer = VCheckedDecodeClosure(statics->vars[1], "call/values");

  VEnvironment * environ = alloca(sizeof(VEnvironment) + sizeof(VWORD[argc+1]));
  environ->tag = VENVIRONMENT;
  environ->argc = argc+1;
  environ->runtime = runtime;
  environ->static_chain = consumer->env;

  environ->argv[0] = k;
  va_list args;
  va_start(args, argc);
  for(int i = 0; i < argc; i++) {
    environ->argv[i+1] = va_arg(args, VWORD);
  }
  va_end(args);

  VSysApply(consumer->func, environ);
}

void VCallValues2(V_CORE_ARGS, VWORD _k, VWORD _producer, VWORD _consumer) {
  // FIXME type check
  // (lambda (k producer consumer) (producer (lambda (k2 . args) (apply consumer k args))))
  V_ARG_CHECK2("call-with-values", 3, argc);

  VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[2]));
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = NULL;
  env->vars[0] = _k;
  env->vars[1] = _consumer;
  VClosure consume = VMakeClosure2((VFunc)VCallValuesK2, env);

  V_CALL(_producer, runtime, VEncodeClosure(&consume));
}

void VApply2(V_CORE_ARGS, VWORD k, VWORD _proc, ...) {
  V_ARG_MIN2("apply", 3, argc);

    VClosure * proc = VCheckedDecodeClosure(_proc, "apply");

    VWORD tmp[argc-2];

    va_list args;
    va_start(args, _proc);
    tmp[0] = k;
    for(int i = 2; i < argc-1; i++) {
      tmp[i-1] = va_arg(args, VWORD);
    }
    VWORD lst = va_arg(args, VWORD);
    va_end(args);

    int nargs = argc-2;
    VWORD pair = lst;
    while(VWordType(pair) == VPOINTER_PAIR) {
      pair = VDecodePair(pair)->rest;
      nargs++;
    }
    if(!VIsToken(pair, VTOK_NULL))
      VError("apply: not a null terminated list ~S~N\n", lst);

    VEnvironment * environ = alloca(sizeof(VEnvironment) + sizeof(VWORD[nargs]));
    environ->tag = VENVIRONMENT;
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

    VSysApply(proc->func, environ);
}


void VSystem2(V_CORE_ARGS, VWORD k, VWORD cmd) {
  V_ARG_CHECK2("system", 2, argc);

  VBlob * blob = VCheckedDecodeString(cmd, "system");

  int ret = system(blob->buf);

  V_CALL(k, runtime, VEncodeInt(ret));
}

static void VOpenProcess2(V_CORE_ARGS, VWORD k, VWORD cmd, char const * mode, unsigned flags) {
  VBlob * blob = VCheckedDecodeString(cmd, "open-io-process");

  FILE * f = popen(blob->buf, mode);

  if(!f) VError("open-io-process: failed to open process `~Z`~N", blob->buf);
  VPort port = VMakePortStream(f, flags | PFLAG_PROCESS);
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

void VOpenInputProcess2(V_CORE_ARGS, VWORD k, VWORD cmd) {
  V_ARG_CHECK2("open-input-process", 2, argc);
  VOpenProcess2(runtime, statics, argc, k, cmd, "r", PFLAG_READ | PFLAG_PROCESS);
}
void VOpenOutputProcess2(V_CORE_ARGS, VWORD k, VWORD cmd) {
  V_ARG_CHECK2("open-output-process", 2, argc);
  VOpenProcess2(runtime, statics, argc, k, cmd, "w", PFLAG_WRITE | PFLAG_PROCESS);
}

void VMakeTemporaryFile2(V_CORE_ARGS, VWORD k, VWORD _prefix, ...) {
  V_ARG_RANGE2("make-temporary-file", 2, 3, argc);

  VBlob * prefix = VCheckedDecodeString(_prefix, "make-temporary-file");

  // suffix may be annoying to do on windings
  VBlob * suffix = NULL;
  if(argc == 3) {
    va_list args; va_start(args, _prefix);
    VWORD _suffix = va_arg(args, VWORD);
    suffix = VCheckedDecodeString(_suffix, "make-temporary-file");
    va_end(args);
  }

  char const * p = prefix->buf;
  char const * x = "XXXXXX";
  char const * s = "";
  if(suffix) s = suffix->buf;
  size_t len = strlen(p) + strlen(x) + strlen(s) + 1;
#ifndef PATH_MAX
#define PATH_MAX 4096
#endif
  if(len > PATH_MAX)
    VError("make-temporary-file: temporary filename length of ~D exceeds max length of ~D\n", (int)len, (int)PATH_MAX);

  VBlob * str = alloca(sizeof(VBlob) + len);
  str->tag = VSTRING;
  str->len = len;
  strcpy(str->buf, p);
  strcat(str->buf, x);
  strcat(str->buf, s);

  // Might be a mistake to discard this fd, but I cba to return multiple values atm
  // and I cba to add support for dual ended ports atm
  // probably isn't, looks like the turd windows will give me some trouble with this procedure
  (void)mkstemps(str->buf, strlen(s));

  V_CALL(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}
