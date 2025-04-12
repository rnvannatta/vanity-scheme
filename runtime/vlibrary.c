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
#include <time.h>
#endif
#ifdef _WIN64
#include "fileapi.h"
#include "errhandlingapi.h"
#include "profileapi.h"
#endif

// only used by call/cc. maybe we should move call/cc to runtime.c
// it's a pretty goofy function that's kind of fundamental
#include "vruntime_private.h"

/////////////////////////////////////////////////////////

SYSV_CALL void VExact(V_CORE_ARGS, VWORD k, VWORD x) {
  uint64_t type = VWordType(x);
  if(type == VIMM_INT) {
    V_CALL(k, runtime, x);
  } else if(type == VIMM_NUMBER) {
    V_CALL(k, runtime, VEncodeInt((int)VDecodeNumber(x)));
  } else {
    VErrorC(runtime, "exact: not a number: ~S", x);
  }
}
SYSV_CALL void VInexact(V_CORE_ARGS, VWORD k, VWORD x) {
  uint64_t type = VWordType(x);
  if(type == VIMM_INT) {
    V_CALL(k, runtime, VEncodeNumber((double)VDecodeInt(x)));
  } else if(type == VIMM_NUMBER) {
    V_CALL(k, runtime, x);
  } else {
    VErrorC(runtime, "exact: not a number: ~S", x);
  }
}

SYSV_CALL __attribute__((used)) static void VAdd2CaseVarargs(V_CORE_ARGS, VWORD k, ...) {
    V_ARG_MIN3(runtime, "+", 1, argc);
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
        VErrorC(runtime, "+: not a number: ~S", v);
      }
    }
    va_end(args);
    VWORD ret;
    if(exact && (iacc > INT32_MAX || iacc < INT32_MIN)) {
      VErrorC(runtime, "+: integer overflow");
    }

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    V_CALL(k, runtime, ret);
}

SYSV_CALL __attribute__((used)) static void VAdd2Case2(V_CORE_ARGS, VWORD k, VWORD a, VWORD b) {
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
    V_CALL(k, runtime, ret);
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
" je VAdd2Case2\n"
" jmp VAdd2CaseVarargs\n"
);

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
    V_CALL(k, runtime, ret);
}

SYSV_CALL __attribute__((used)) static void VSub2CaseVarargs(V_CORE_ARGS, VWORD k, VWORD x, ...) {
    V_ARG_MIN3(runtime, "-", 2, argc);
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
        VErrorC(runtime, "-: not a number: ~S", v);
      }
    }
    va_end(args);
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
      V_CALL(k, runtime, ret);
    }
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

SYSV_CALL void VMul2(V_CORE_ARGS, VWORD k, ...) {
    V_ARG_MIN3(runtime, "*", 1, argc);
    bool exact = true;
    double dacc = 1;
    int64_t iacc = 1;
    va_list args;
    va_start(args, k);
    for(unsigned i = 1; i < argc; i++) {
      VWORD v = va_arg(args, VWORD);
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
    V_CALL(k, runtime, ret);
}

SYSV_CALL void VDiv2(V_CORE_ARGS, VWORD k, VWORD x, ...) {
    V_ARG_MIN3(runtime, "/", 2, argc);
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
        VErrorC(runtime, "/: not a number: ~S", v);
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

SYSV_CALL void VQuot2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
    V_ARG_CHECK3(runtime, "quotient", 3, argc);

    V_CALL(k, runtime, VEncodeInt(VCheckedDecodeInt2(runtime, x, "quotient") / VCheckedDecodeInt2(runtime, y, "quotient")));
}
SYSV_CALL void VRem2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
    V_ARG_CHECK3(runtime, "remainder", 3, argc);

    V_CALL(k, runtime, VEncodeInt(VCheckedDecodeInt2(runtime, x, "remainder") % VCheckedDecodeInt2(runtime, y, "remainder")));
}

// This feels fucking idiotic.
SYSV_CALL void VCmp2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK3(runtime, "cmp", 3, argc);
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

  V_CALL(k, runtime, VEncodeInt(ret));
  
}

// type predicates
SYSV_CALL void VNullP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "null?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VBits(x) == VBits(VNULL)));
}
SYSV_CALL void VEofP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "eof-object?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VBits(x) == VBits(VEOF)));
}
SYSV_CALL void VPairP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "pair?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VWordType(x) == VPOINTER_PAIR));
}
SYSV_CALL void VVectorP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "vector?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsVector(x)));
}
SYSV_CALL void VRecordP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "record?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsRecord(x)));
}
SYSV_CALL void VHashTableP(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "hash-table?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsHashTable(x)));
}
SYSV_CALL void VProcedureP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "procedure?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VWordType(x) == VPOINTER_CLOSURE));
}
SYSV_CALL void VBlobP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "blob?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsBlob(x)));
}
SYSV_CALL void VSymbolP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "symbol?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsSymbol(x)));
}
SYSV_CALL void VStringP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "string?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsString(x)));
}
SYSV_CALL void VDoubleP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "double?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VIsNumber(x)));
}
SYSV_CALL void VIntP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "int?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VWordType(x) == VIMM_INT));
}
SYSV_CALL void VCharP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "char?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VWordType(x) == VIMM_CHAR));
}
SYSV_CALL void VVoidP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "##vcore.void?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VBits(x) == VBits(VVOID)));
}
SYSV_CALL void VNullptrP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "##vcore.nullptr?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VBits(x) == VBits(VNULLPTR)));
}
SYSV_CALL void VForeignPointerP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "##vcore.foreign-pointer?", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VWordType(x) == VPOINTER_FOREIGN));
}

// equality
SYSV_CALL void VEq2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK3(runtime, "eq?", 3, argc);
  V_CALL(k, runtime, VInlineEq2(runtime, x, y));
}

SYSV_CALL void VSymbolEqv2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK3(runtime, "symbol=?", 3, argc);
  V_CALL(k, runtime, VInlineSymbolEqv2(runtime, x, y));
}
SYSV_CALL void VBlobEqv2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK3(runtime, "blob=?", 3, argc);
  VBlob * blob_a = VCheckedDecodeBlob2(runtime, x, "blob=?");
  VBlob * blob_b = VCheckedDecodeBlob2(runtime, y, "blob=?");
  bool ret = false;
  if(blob_a->len == blob_b->len)
    ret = blob_a->base.tag == blob_b->base.tag && !memcmp(blob_a->buf, blob_b->buf, blob_a->len);
  V_CALL(k, runtime, VEncodeBool(ret));
}

SYSV_CALL void VEqv(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK3(runtime, "eqv?", 3, argc);
  V_CALL(k, runtime, VInlineEqv2(runtime, x, y));
}

// logic

SYSV_CALL void VNot2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK3(runtime, "not", 2, argc);
  V_CALL(k, runtime, VEncodeBool(VBits(x) == VBits(VFALSE)));
}

// pairs

SYSV_CALL void VCons2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
    V_ARG_CHECK3(runtime, "cons", 3, argc);
    V_CALL(k, runtime, VInlineCons2(runtime, x, y));
}

SYSV_CALL void VCar2(V_CORE_ARGS, VWORD k, VWORD x) {
    V_ARG_CHECK3(runtime, "car", 2, argc);
    V_CALL(k, runtime, VInlineCar2(runtime, x));
}

SYSV_CALL void VCdr2(V_CORE_ARGS, VWORD k, VWORD x) {
    V_ARG_CHECK3(runtime, "cdr", 2, argc);
    V_CALL(k, runtime, VInlineCdr2(runtime, x));
}

// vectors

SYSV_CALL void VListVector2(V_CORE_ARGS, VWORD k, VWORD lst) {
  V_ARG_CHECK3(runtime, "list->vector", 2, argc);

  int len = 0;
  VWORD v = lst;
  while(VWordType(v) == VPOINTER_PAIR) {
    len++;
    v = VDecodePair(v)->rest;
  }
  if(VBits(v) != VBits(VNULL)) VErrorC(runtime, "list->vector: not a null-terminated list\n");

  VVector * vec = V_ALLOCA_VECTOR(len);
  vec->base = VMakeSmallObject(VVECTOR);
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

SYSV_CALL void VVectorRef2(V_CORE_ARGS, VWORD k, VWORD vector, VWORD index) {
  V_ARG_CHECK3(runtime, "vector-ref", 3, argc);
  VVector * vec = VCheckedDecodeVector2(runtime, vector, "vector-ref");
  if(VWordType(index) != VIMM_INT) VErrorC(runtime, "vector-ref: arg 2 not an int\n");
  int i = VDecodeInt(index);
  if(!(0 <= i && i < vec->len)) VErrorC(runtime, "vector-ref: out of range\n");

  V_CALL(k, runtime, vec->arr[i]);
}

SYSV_CALL void VVectorLength2(V_CORE_ARGS, VWORD k, VWORD vector) {
  V_ARG_CHECK3(runtime, "vector-length", 2, argc);
  VVector * vec = VCheckedDecodeVector2(runtime, vector, "vector-length");
  V_CALL(k, runtime, VEncodeInt(vec->len));
}

// records

SYSV_CALL void VCreateRecord2(V_CORE_ARGS, VWORD k, VWORD type, ...) {
  V_ARG_MIN3(runtime, "record", 2, argc);

  int len = argc-2;
  if(len > 65534) VErrorC(runtime, "record: records with more than 65535 fields not supported\n");

  VVector * rec = V_ALLOCA_VECTOR(len+1);
  rec->base = VMakeSmallObject(VRECORD);
  rec->len = len+1;

  rec->arr[0] = type;
  int i = 1;
  int c = 2;
  va_list args;
  va_start(args, type);
  while(c < argc) {
    rec->arr[i++] = va_arg(args, VWORD);
    c++;
  }
  va_end(args);
  V_CALL(k, runtime, VEncodePointer(rec, VPOINTER_OTHER));
}

SYSV_CALL void VRecordRef2(V_CORE_ARGS, VWORD k, VWORD record, VWORD index) {
  V_ARG_CHECK3(runtime, "record-ref", 3, argc);
  VVector * rec = VCheckedDecodeRecord2(runtime, record, "record-ref");
  if(VWordType(index) != VIMM_INT) VErrorC(runtime, "record-ref: arg 2 not an int\n");
  int i = VDecodeInt(index);
  if(!(0 <= i && i < rec->len)) VErrorC(runtime, "record-ref: out of range\n");

  V_CALL(k, runtime, rec->arr[i]);
}

SYSV_CALL void VRecordLength2(V_CORE_ARGS, VWORD k, VWORD record) {
  V_ARG_CHECK3(runtime, "record-length", 2, argc);
  VVector * rec = VCheckedDecodeRecord2(runtime, record, "record-length");
  V_CALL(k, runtime, VEncodeInt(rec->len));
}

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

  VTrackHashTable(runtime, table, key);

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
}

SYSV_CALL void VMakeHashTable(V_CORE_ARGS, VWORD k, VWORD eq, VWORD hash, VWORD _len) {
  VClosure * closure = VCheckedDecodeClosure2(runtime, eq, "make-hash-table");
  if(closure->func != (void*)VEq2 && closure->func != (void*)VEqv)
    VErrorC(runtime, "hash tables currently only support `eq?` and `eqv?` as the comparator\n");

  int len = VCheckedDecodeInt2(runtime, _len, "make-hash-table");
  if(len <= 0) VErrorC(runtime, "hash tables need length > 0");
  if(len > INT_MAX/3) VErrorC(runtime, "hash table is too large ~D\n", len);
  if(len & (len-1)) VErrorC(runtime, "hash table needs pow2 length ~D\n", len);
  VVector * vec = V_ALLOCA_VECTOR(3*len);
  vec->base = VMakeSmallObject(VVECTOR);
  vec->len = 3*len;
  for(int i = 0; i < len; i++) {
    vec->arr[3*i+0] = VVOID;
    vec->arr[3*i+1] = VEncodeInt(0);
    vec->arr[3*i+2] = VVOID;
  }
  VHashTable table = {
    .base = VMakeSmallObject(VHASH_TABLE),
    .flags = closure->func == (void*)VEq2 ? HFLAG_EQ : HFLAG_EQV,
    .occupancy = 0,
    .load_factor = 0.8f,
    .vec = VEncodePointer(vec, VPOINTER_OTHER),
    .eq = eq,
    .hash = hash,
  };
  V_CALL(k, runtime, VEncodePointer(&table, VPOINTER_OTHER));
}

SYSV_CALL void VHashTableEqvFunc(V_CORE_ARGS, VWORD k, VWORD _table) {
  VHashTable * table = VCheckedDecodeHashTable2(runtime, _table, "hash-table-equivalence-function");
  V_CALL(k, runtime, table->eq);
}
SYSV_CALL void VHashTableHashFunc(V_CORE_ARGS, VWORD k, VWORD _table) {
  VHashTable * table = VCheckedDecodeHashTable2(runtime, _table, "hash-table-hash-function");
  V_CALL(k, runtime, table->hash);
}
SYSV_CALL void VHashTableVector(V_CORE_ARGS, VWORD k, VWORD _table) {
  VHashTable * table = VCheckedDecodeHashTable2(runtime, _table, "hash-table-vector");
  V_CALL(k, runtime, table->vec);
}
SYSV_CALL void VHashTableRef(V_CORE_ARGS, VWORD k, VWORD _table, VWORD key, VWORD thunk) {
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
    table->flags ^= HFLAG_DIRTY;
    VVector * newvec = V_ALLOCA_VECTOR(3 * capacity);
    VGrowHashTable(runtime, table, capacity, newvec);
    vec = newvec;
    goto try_again;
  }
  if(found) {
    V_CALL(k, runtime, vec->arr[3*index+2]);
  } else {
    V_CALL(thunk, runtime, k);
  }
}

SYSV_CALL void VHashTableSet(V_CORE_ARGS, VWORD k, VWORD _table, VWORD key, VWORD val) {

  VHashTable * table = VCheckedDecodeHashTable2(runtime, _table, "hash-table-set!");
  VVector * vec = VCheckedDecodeVector2(runtime, table->vec, "hash-table-set!");

  assert((table->flags & HFLAG_EQ) || (table->flags & HFLAG_EQV));
  uint64_t capacity = vec->len / 3;

  if(table->occupancy+1 >= table->load_factor * capacity) {
    VVector * newvec = V_ALLOCA_VECTOR(3 * capacity * 2);
    VGrowHashTable(runtime, table, capacity * 2, newvec);

    vec = newvec;
    capacity = vec->len / 3;
  }

try_again: ;
  uint64_t tries = 0;
  uint64_t hash = (table->flags & HFLAG_EQ) ? VEqHashImpl(key) : VEqvHashImpl(key);
  uint64_t index = hash & (capacity-1);

  uint64_t poverty = 0;

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
  if(!found && (table->flags & HFLAG_DIRTY)) {
    table->flags ^= HFLAG_DIRTY;
    VVector * newvec = V_ALLOCA_VECTOR(3 * capacity);
    VGrowHashTable(runtime, table, capacity, newvec);
    vec = newvec;
    goto try_again;
  }
  if(!found)
    table->occupancy++;

  VTrackHashTable(runtime, table, key);

  vec->arr[3*index+0] = key;
  vec->arr[3*index+1] = VEncodeInt(poverty);
  vec->arr[3*index+2] = val;

  VTrackMutation(runtime, vec, &vec->arr[3*index+0], key);
  // poverty is an int, nothing to track
  VTrackMutation(runtime, vec, &vec->arr[3*index+2], val);

  V_CALL(k, runtime, VVOID);
}
SYSV_CALL void VHashTableDelete(V_CORE_ARGS, VWORD k, VWORD _table, VWORD key) {
  VHashTable * table = VCheckedDecodeHashTable2(runtime, _table, "hash-table-delete!");
  VVector * vec = VCheckedDecodeVector2(runtime, table->vec, "hash-table-delete!");

  assert((table->flags & HFLAG_EQ) || (table->flags & HFLAG_EQV));
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
  if(!found) {
    V_CALL(k, runtime, VVOID);
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
    vec->arr[3*index+0] = VVOID;
    vec->arr[3*index+1] = VEncodeInt(0);
    vec->arr[3*index+2] = VVOID;
  }
}

// strings
SYSV_CALL void VMakeString2(V_CORE_ARGS, VWORD k, VWORD len, ...) {
  V_ARG_RANGE3(runtime, "make-string", 2, 3, argc);

  if(VWordType(len) != VIMM_INT) VErrorC(runtime, "make-string: not an int");
  int i = VDecodeInt(len);
  //if(!(0 <= i && i < 1024 * 1024)) VErrorC(runtime, "make-string: out of bounds");

  char c = 'X';
  if(argc == 3) {
    va_list args;
    va_start(args, len);
    VWORD fill = va_arg(args, VWORD);
    va_end(args);

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

  V_CALL(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}

SYSV_CALL void VSubstring2(V_CORE_ARGS, VWORD k, VWORD string, ...) {
  V_ARG_RANGE3(runtime, "substring", 2, 4, argc);

  VBlob const * str = VCheckedDecodeString2(runtime, string, "substring");

  int start = 0;
  int end = str->len - 1;
  va_list args;
  if(argc >= 3)
  {
    va_start(args, string);
    VWORD startword = va_arg(args, VWORD);
    if(VWordType(startword) != VIMM_INT) VErrorC(runtime, "substring: arg 2 not an int");
    start = VDecodeInt(startword);
  }
  if(argc >= 4)
  {
    VWORD endword = va_arg(args, VWORD);
    if(VWordType(endword) != VIMM_INT) VErrorC(runtime, "substring: arg 3 not an int");
    end = VDecodeInt(endword);
  }
  if(argc >= 3)
  {
    va_end(args);
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

  V_CALL(k, runtime, VEncodePointer(copy, VPOINTER_OTHER));
}

SYSV_CALL void VStringCopy2(V_CORE_ARGS, VWORD k, VWORD dest, VWORD _at, VWORD source, ...) {
  V_ARG_RANGE3(runtime, "string-copy!", 4, 6, argc);

  VBlob * dst = VCheckedDecodeString2(runtime, dest, "string-copy!");

  if(VWordType(_at) != VIMM_INT) VErrorC(runtime, "string-copy!: arg 2 not an int\n");
  int at = VDecodeInt(_at);
  if(!(0 <= at && at < dst->len)) VErrorC(runtime, "string-copy!: at out of bounds\n");

  VBlob const * src = VCheckedDecodeString2(runtime, source, "string-copy!");


  int start = 0;
  int end = src->len - 1;
  va_list args;
  if(argc >= 5) {
    va_start(args, source);
    VWORD _start = va_arg(args, VWORD);
    if(VWordType(_start) != VIMM_INT) VErrorC(runtime, "string-copy!: arg 4 not an int\n");
    start = VDecodeInt(_start);
  }
  if(argc >= 6) {
    VWORD _end = va_arg(args, VWORD);
    if(VWordType(_end) != VIMM_INT) VErrorC(runtime, "string-copy!: arg 5 not an int\n");
    end = VDecodeInt(_end);
  }
  if(argc >= 5) {
    va_end(args);
  }
  int srclen = end - start;
  int dstlen = dst->len-1 - at;
  if(!(0 <= start && start < src->len)) VErrorC(runtime, "string-copy!: start out of bounds\n");
  if(!(0 <= end && end < src->len)) VErrorC(runtime, "string-copy!: end out of bounds\n");
  if(start > end) VErrorC(runtime, "string-copy!: start greater than end\n");
  if(dstlen < srclen) VErrorC(runtime, "string-copy!: attempting to copy ~l chars into a substring ~l chars long.\n", srclen, dstlen);

  memmove(dst->buf + at, src->buf + start, srclen);
  V_CALL(k, runtime, VVOID);
}

SYSV_CALL void VStringLength2(V_CORE_ARGS, VWORD k, VWORD _str) {
  V_ARG_CHECK3(runtime, "string-length", 2, argc);
  VBlob * str = VCheckedDecodeString2(runtime, _str, "string-length");

  // not exposing the null terminal
  V_CALL(k, runtime, VEncodeInt(str->len - 1));
}

SYSV_CALL void VStringRef2(V_CORE_ARGS, VWORD k, VWORD _str, VWORD _i) {
  V_ARG_CHECK3(runtime, "string-ref", 3, argc);
  VBlob * str = VCheckedDecodeString2(runtime, _str, "string-ref");

  if(VWordType(_i) != VIMM_INT) VErrorC(runtime, "string-ref: not an int");
  int i = VDecodeInt(_i);
  // not exposing the null terminal
  if(!(0 <= i && i < str->len)) VErrorC(runtime, "string-ref: ~A out of bounds (0 to ~D)~N", _i, str->len);

  V_CALL(k, runtime, VEncodeChar(str->buf[i]));
}

SYSV_CALL void VStringSet2(V_CORE_ARGS, VWORD k, VWORD _str, VWORD _i, VWORD _c) {
  V_ARG_CHECK3(runtime, "string-set!", 4, argc);
  VBlob * str = VCheckedDecodeString2(runtime, _str, "string-set!");

  if(VWordType(_i) != VIMM_INT) VErrorC(runtime, "string-set!: not an int");
  int i = VDecodeInt(_i);
  // not exposing the null terminal
  if(!(0 <= i && i < str->len)) VErrorC(runtime, "string-set!: out of bounds");

  if(VWordType(_c) != VIMM_CHAR) VErrorC(runtime, "string-set!: not a char");

  char c = VDecodeChar(_c);
  str->buf[i] = c;

  V_CALL(k, runtime, VVOID);
}

SYSV_CALL void VStringSymbol2(V_CORE_ARGS, VWORD k, VWORD _str) {
  V_ARG_CHECK3(runtime, "string->symbol", 2, argc);
  VBlob * str = VCheckedDecodeString2(runtime, _str, "string->symbol");

  VBlob * sym = V_ALLOCA_BLOB(str->len);
  VFillBlob(sym, VSYMBOL, str->len, str->buf);
  V_CALL(k, runtime, VEncodePointer(sym, VPOINTER_OTHER));
}
SYSV_CALL void VSymbolString2(V_CORE_ARGS, VWORD k, VWORD _sym) {
  V_ARG_CHECK3(runtime, "symbol->string", 2, argc);
  VBlob * sym = VCheckedDecodeSymbol2(runtime, _sym, "symbol->string");

  VBlob * str = V_ALLOCA_BLOB(sym->len);
  VFillBlob(str, VSTRING, sym->len, sym->buf);
  V_CALL(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}

SYSV_CALL void VStringNumber2(V_CORE_ARGS, VWORD k, VWORD _str) {
  V_ARG_CHECK3(runtime, "string->number", 2, argc);
  VBlob * str = VCheckedDecodeString2(runtime, _str, "string->number");

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

SYSV_CALL void VCharInt2(V_CORE_ARGS, VWORD k, VWORD c) {
  V_ARG_CHECK3(runtime, "char->int", 2, argc);
  if(VWordType(c) != VIMM_CHAR) VErrorC(runtime, "char->integer: not a char");
  V_CALL(k, runtime, VEncodeInt((int)VDecodeChar(c)));
}

// ports

// TODO delete this idiotic procedures
SYSV_CALL void VDupStdout2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK3(runtime, "dup-stdout", 1, argc);
  VErrorC(runtime, "removed intrinsic!");
}

SYSV_CALL void VDupStdin2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK3(runtime, "dup-stdin", 1, argc);
  VErrorC(runtime, "removed intrinsic!");
}

SYSV_CALL void VDupStderr2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK3(runtime, "dup-stderr", 1, argc);
  VErrorC(runtime, "removed intrinsic!");
}

//
// less idiotic versions of the dup procedures
//
SYSV_CALL void VStdoutPort(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK3(runtime, "stdout->port", 1, argc);

  VPort port = VMakePortStream(stdout, PFLAG_WRITE | PFLAG_NOCLOSE);
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

SYSV_CALL void VStdinPort(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK3(runtime, "stdin->port", 1, argc);

  VPort port = VMakePortStream(stdin, PFLAG_READ | PFLAG_NOCLOSE);
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

SYSV_CALL void VStderrPort(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK3(runtime, "stderr->port", 1, argc);

  VPort port = VMakePortStream(stderr, PFLAG_WRITE | PFLAG_NOCLOSE);
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER));
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
      V_CALL(k, runtime, VFALSE, ok);
    } else {
      // unrecoverable error, just return VFALSE
      V_CALL(k, runtime, VFALSE, VTRUE);
    }
  }

  VPort port = VMakePortStream(f, flags);
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER), ok);
}

SYSV_CALL void VOpenInputStream2(V_CORE_ARGS, VWORD k, VWORD path) {
  V_ARG_CHECK3(runtime, "open-input-stream", 2, argc);
  VOpenStream2(runtime, k, path, "rb", PFLAG_READ);
}
SYSV_CALL void VOpenOutputStream2(V_CORE_ARGS, VWORD k, VWORD path) {
  V_ARG_CHECK3(runtime, "open-output-stream", 2, argc);
  VOpenStream2(runtime, k, path, "wb", PFLAG_WRITE);
}

SYSV_CALL void VCloseStream2(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK3(runtime, "close-port", 2, argc);

  if(VWordType(_port) != VPOINTER_OTHER) VErrorC(runtime, "close-port: not a port\n");
  VPort * port = (VPort*)VDecodePointer(_port);
  if(port->base.tag != VPORT) VErrorC(runtime, "close-port: not a port\n");

  int ret = port_close(port);

  V_CALL(k, runtime, VEncodeInt(ret));
}

SYSV_CALL void VTtyPortP(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK3(runtime, "tty-port?", 2, argc);

  if(VWordType(_port) != VPOINTER_OTHER) VErrorC(runtime, "tty-port?: not a port\n");
  VPort * port = (VPort*)VDecodePointer(_port);
  if(port->base.tag != VPORT) VErrorC(runtime, "tty-port?: not a port\n");
  if(!(port->flags & PFLAG_WRITE)) VErrorC(runtime, "tty-port?: not an input port\n");

  int fd = port_fileno(port);
  bool tty = isatty(fd);
  errno = 0;

  V_CALL(k, runtime, VEncodeBool(tty));
}

FILE * Windows_TmpFile();

SYSV_CALL void VOpenOutputString2(V_CORE_ARGS, VWORD k) {
  // using tmpfile like this feels horrible
  // but it works for now
  V_ARG_CHECK3(runtime, "open-output-string", 1, argc);
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
      V_CALL(k, runtime, VFALSE, ok);
    } else {
#ifdef USE_DFILE_OSTREAM
      V_CALL(k, runtime, VFALSE, VFALSE);
#else
#ifdef _WIN64
      // Windows tmpfile() doesn't set errno! >:(
      V_CALL(k, runtime, VFALSE, VFALSE);
#endif
#ifdef __linux__
      // unrecoverable error: return false to the user
      V_CALL(k, runtime, VFALSE, VTRUE);
#endif
#endif
    }
  }

#ifdef USE_DFILE_OSTREAM
  VPort port = {
    .base.tag = VPORT,
    .dstream = f,
    .flags = PFLAG_WRITE | PFLAG_OSTRING | PFLAG_DFILE,
  };
#else
  VPort port = VMakePortStream(f, PFLAG_WRITE | PFLAG_OSTRING);
#endif
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER), ok);
}

SYSV_CALL void VGetOutputString2(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK3(runtime, "get-output-string", 2, argc);
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

  V_CALL(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}

// input

SYSV_CALL void VReadChar2(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK3(runtime, "read-char", 2, argc);
  VPort * port = (VPort*)VDecodePointer(_port);
  if(!port || port->base.tag != VPORT) VErrorC(runtime, "read-char: not a port ~S~N", _port);
  if(!(port->flags & PFLAG_READ)) VErrorC(runtime, "read-char: not an readable port ~S~N", _port);

  char c = port_fgetc(port);
  if(c < 0) {
    V_CALL(k, runtime, VEOF);
  } else {
    V_CALL(k, runtime, VEncodeChar((char)c));
  }
}

// FIXME BADLY only reads 256 char lines
SYSV_CALL void VReadLine2(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK3(runtime, "read-line", 2, argc);
  VPort * port = (VPort*)VDecodePointer(_port);
  if(!port || port->base.tag != VPORT) VErrorC(runtime, "read-line: not a port ~S~N", _port);
  if(!(port->flags & PFLAG_READ)) VErrorC(runtime, "read-line: not an readable port ~S~N", _port);

  VBlob * str = alloca(sizeof(VBlob) + 256);
  str->base = VMakeSmallObject(VSTRING);
  if(!port_fgets(str->buf, 256, port)) {
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
SYSV_CALL void VReadLine3(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK3(runtime, "read-line", 2, argc);
  VPort * port = (VPort*)VDecodePointer(_port);
  if(!port || port->base.tag != VPORT) VErrorC(runtime, "read-line: not a port ~S~N", _port);
  if(!(port->flags & PFLAG_READ)) VErrorC(runtime, "read-line: not an readable port ~S~N", _port);

  VBlob * str = alloca(sizeof(VBlob) + 256);
  str->base = VMakeSmallObject(VSTRING);
  if(!port_fgets(str->buf, 256, port)) {
    V_CALL(k, runtime, VEOF, VFALSE);
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
    V_CALL(k, runtime, VEncodePointer(str, VPOINTER_OTHER), VEncodeBool(line));
  }
}

// output

SYSV_CALL void VDisplay2(V_CORE_ARGS, VWORD k, VWORD val, VWORD port) {
    V_ARG_CHECK3(runtime, "display-word", 3, argc);
    VPort * p = VCheckedDecodePort2(runtime, port, "display-word");
    if(!(p->flags & PFLAG_WRITE)) VErrorC(runtime, "display-word: port's write end is closed~N");
    VDisplayWord2(p, val, false);
    V_CALL(k, runtime, VVOID);
}
SYSV_CALL void VWrite2(V_CORE_ARGS, VWORD k, VWORD val, VWORD port) {
    V_ARG_CHECK3(runtime, "write-word", 3, argc);
    VPort * p = VCheckedDecodePort2(runtime, port, "write-word");
    if(!(p->flags & PFLAG_WRITE)) VErrorC(runtime, "write-word: port's write end is closed~N");
    VDisplayWord2(p, val, true);
    V_CALL(k, runtime, VVOID);
}
SYSV_CALL void VNewline2(V_CORE_ARGS, VWORD k, VWORD port) {
    V_ARG_CHECK3(runtime, "newline", 2, argc);
    VPort * p = VCheckedDecodePort2(runtime, port, "newline");
    if(!(p->flags & PFLAG_WRITE)) VErrorC(runtime, "newline: port's write end is closed~N");
    port_fputc('\n', p);
    port_fflush(p);
    V_CALL(k, runtime, VVOID);
}

SYSV_CALL void VDisplayStdout(V_CORE_ARGS, VWORD k, VWORD val) {
    V_ARG_CHECK3(runtime, "display-stdout", 2, argc);
    VDisplayWord2((VPort[]){get_port_stdout()}, val, false);
    V_CALL(k, runtime, VVOID);
}
SYSV_CALL void VWriteStdout(V_CORE_ARGS, VWORD k, VWORD val) {
    V_ARG_CHECK3(runtime, "write-stdout", 2, argc);
    VDisplayWord2((VPort[]){get_port_stdout()}, val, true);
    V_CALL(k, runtime, VVOID);
}
SYSV_CALL void VNewlineStdout(V_CORE_ARGS, VWORD k) {
    V_ARG_CHECK3(runtime, "newline-stdout", 1, argc);
    VPort port = get_port_stdout();
    port_fputc('\n', &port);
    port_fflush(&port);
    V_CALL(k, runtime, VVOID);
}

// misc

SYSV_CALL static void VCallCCLambda2(V_CORE_ARGS, VWORD k, ...) {
  // continuations dont have arg0 as a continuation
  // so we need a wrapper to drop arg0 then call the continuation
  // and we can do that just with memmoving and changing the up var
  VWORD realk = statics->vars[0];
  runtime->dynamics = statics->vars[1];
  runtime->exception_handlers = statics->vars[2];
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
    VClosure * realk_real = VDecodeClosureApply2(runtime, realk);

    VEnvironment * environ = alloca(sizeof(VEnvironment) + sizeof(VWORD[argc-1]));
    environ->base = VMakeObject(VENVIRONMENT);
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

SYSV_CALL void VCallCC2(V_CORE_ARGS, VWORD k, VWORD _proc) {
  // (lambda (k proc) (proc k (lambda (k2 x) (k x))))
  // for supporting multiple values
  // (lambda (k proc) (proc k (lambda (k2 . xs) (apply k xs))))
  V_ARG_CHECK3(runtime, "call/cc", 2, argc);
  
  VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[3]));
  env->base = VMakeSmallObject(VENV); env->num_vars = 3; env->var_len = 3; env->up = NULL;
  env->vars[0] = k;
  env->vars[1] = runtime->dynamics;
  env->vars[2] = runtime->exception_handlers;
  VClosure k_wrapped = VMakeClosure2((VFunc)VCallCCLambda2, env);

  V_CALL(_proc, runtime, k, VEncodeClosure(&k_wrapped));
}

SYSV_CALL void VCallValuesK2(V_CORE_ARGS, ...) {
  VWORD k = statics->vars[0];
  VClosure * consumer = VCheckedDecodeClosure2(runtime, statics->vars[1], "call/values");

  VEnvironment * environ = alloca(sizeof(VEnvironment) + sizeof(VWORD[argc+1]));
  environ->base = VMakeObject(VENVIRONMENT);
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

SYSV_CALL void VCallValues2(V_CORE_ARGS, VWORD _k, VWORD _producer, VWORD _consumer) {
  // FIXME type check
  // (lambda (k producer consumer) (producer (lambda (k2 . args) (apply consumer k args))))
  V_ARG_CHECK3(runtime, "call-with-values", 3, argc);

  VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[2]));
  env->base = VMakeSmallObject(VENV); env->num_vars = 2; env->var_len = 2; env->up = NULL;
  env->vars[0] = _k;
  env->vars[1] = _consumer;
  VClosure consume = VMakeClosure2((VFunc)VCallValuesK2, env);

  V_CALL(_producer, runtime, VEncodeClosure(&consume));
}

SYSV_CALL void VApply2(V_CORE_ARGS, VWORD k, VWORD _proc, ...) {
  V_ARG_MIN3(runtime, "apply", 3, argc);

  VClosure * proc = VCheckedDecodeClosure2(runtime, _proc, "apply");

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
    VErrorC(runtime, "apply: not a null terminated list ~S~N\n", lst);

  VEnvironment * environ = alloca(sizeof(VEnvironment) + sizeof(VWORD[nargs]));
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

  VSysApply(proc->func, environ);
}

SYSV_CALL void VApplyCps(V_CORE_ARGS, VWORD k, VWORD _proc, VWORD lst) {
  V_ARG_CHECK3(runtime, "apply-cps", 3, argc);

  VClosure * proc = VCheckedDecodeClosure2(runtime, _proc, "apply-cps");

  int nargs = 0;
  VWORD pair = lst;
  while(VWordType(pair) == VPOINTER_PAIR) {
    pair = VDecodePair(pair)->rest;
    nargs++;
  }
  if(!VIsToken(pair, VTOK_NULL))
    VErrorC(runtime, "apply-cps: not a null terminated list ~S~N\n", lst);

  VEnvironment * environ = alloca(sizeof(VEnvironment) + sizeof(VWORD[nargs]));
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

  VSysApply(proc->func, environ);
}

SYSV_CALL void VSystem2(V_CORE_ARGS, VWORD k, VWORD cmd) {
  V_ARG_CHECK3(runtime, "system", 2, argc);

  VBlob * blob = VCheckedDecodeString2(runtime, cmd, "system");

  int ret = system(blob->buf);

  V_CALL(k, runtime, VEncodeInt(ret));
}

SYSV_CALL static void VOpenProcess2(V_CORE_ARGS, VWORD k, VWORD cmd, char const * mode, unsigned flags) {
  VBlob * blob = VCheckedDecodeString2(runtime, cmd, "open-io-process");

  FILE * f = popen(blob->buf, mode);

  if(!f) VErrorC(runtime, "open-io-process: failed to open process `~Z`~N", blob->buf);
  VPort port = VMakePortStream(f, flags | PFLAG_PROCESS);
  V_CALL(k, runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

SYSV_CALL void VOpenInputProcess2(V_CORE_ARGS, VWORD k, VWORD cmd) {
  V_ARG_CHECK3(runtime, "open-input-process", 2, argc);
  VOpenProcess2(runtime, statics, argc, k, cmd, "r", PFLAG_READ | PFLAG_PROCESS);
}
SYSV_CALL void VOpenOutputProcess2(V_CORE_ARGS, VWORD k, VWORD cmd) {
  V_ARG_CHECK3(runtime, "open-output-process", 2, argc);
  VOpenProcess2(runtime, statics, argc, k, cmd, "w", PFLAG_WRITE | PFLAG_PROCESS);
}

SYSV_CALL void VMakeTemporaryFile2(V_CORE_ARGS, VWORD k, VWORD _prefix, ...) {
  V_ARG_RANGE3(runtime, "make-temporary-file", 2, 3, argc);

  VBlob * prefix = VCheckedDecodeString2(runtime, _prefix, "make-temporary-file");

  // suffix may be annoying to do on windings
  VBlob * suffix = NULL;
  if(argc == 3) {
    va_list args; va_start(args, _prefix);
    VWORD _suffix = va_arg(args, VWORD);
    suffix = VCheckedDecodeString2(runtime, _suffix, "make-temporary-file");
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
    VErrorC(runtime, "make-temporary-file: temporary filename length of ~D exceeds max length of ~D\n", (int)len, (int)PATH_MAX);

  VBlob * str = alloca(sizeof(VBlob) + len);
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

  V_CALL(k, runtime, VEncodePointer(str, VPOINTER_OTHER));
}

SYSV_CALL void VMakeRandom(V_CORE_ARGS, VWORD k, VWORD _seed, VWORD _stream) {
  unsigned seed = VCheckedDecodeInt2(runtime, _seed, "make-random");
  unsigned stream = VCheckedDecodeInt2(runtime, _stream, "make-random");
  VBlob * buf = alloca(sizeof(VBlob)+sizeof(vrandom_state));
  buf->base = VMakeSmallObject(VRNG_STATE);
  buf->len = sizeof(vrandom_state);
  vsrandom((vrandom_state*)buf->buf, seed, stream);

  V_CALL(k, runtime, VEncodePointer(buf, VPOINTER_OTHER));
}
SYSV_CALL void VRandomCopy(V_CORE_ARGS, VWORD k, VWORD rng) {
  VBlob const * buf = VCheckedDecodePointer2(runtime, rng, VRNG_STATE, "random-copy");
  VBlob * copy = alloca(sizeof(VBlob)+sizeof(vrandom_state));
  copy->base = VMakeSmallObject(VRNG_STATE);
  copy->len = sizeof(vrandom_state);
  memcpy(copy->buf, buf->buf, sizeof(vrandom_state));

  V_CALL(k, runtime, VEncodePointer(copy, VPOINTER_OTHER));
}

SYSV_CALL void VRandomSample(V_CORE_ARGS, VWORD k, VWORD rng) {
  VBlob * buf = VCheckedDecodePointer2(runtime, rng, VRNG_STATE, "random-sample");
  int i = (unsigned)vrandom((vrandom_state*)buf->buf);

  V_CALL(k, runtime, VEncodeInt(i));
}
SYSV_CALL void VRandomSampleBounded(V_CORE_ARGS, VWORD k, VWORD rng, VWORD _bounds) {
  VBlob * buf = VCheckedDecodePointer2(runtime, rng, VRNG_STATE, "random-sample-bounded");
  int bounds = VCheckedDecodeInt2(runtime, _bounds, "random-sample-bounded");
  if(bounds <= 0) VErrorC(runtime, "random-sample-bounded: bounds must be positive ~D\n", bounds);
  int i = (unsigned)vrandom_bounded((vrandom_state*)buf->buf, bounds);

  V_CALL(k, runtime, VEncodeInt(i));
}
SYSV_CALL void VRandomSampleFloat(V_CORE_ARGS, VWORD k, VWORD rng) {
  VBlob * buf = VCheckedDecodePointer2(runtime, rng, VRNG_STATE, "random-sample-float");
  double d = vrandom_double((vrandom_state*)buf->buf);

  V_CALL(k, runtime, VEncodeNumber(d));
}

SYSV_CALL void VRandomAdvance(V_CORE_ARGS, VWORD k, VWORD rng, VWORD _n) {
  VBlob * buf = VCheckedDecodePointer2(runtime, rng, VRNG_STATE, "random-advance");
  int n = VCheckedDecodeInt2(runtime, _n, "random-advance");
  vrandom_advance((vrandom_state*)buf->buf, n);

  V_CALL(k, runtime, VVOID);
}

SYSV_CALL void VRealpath(V_CORE_ARGS, VWORD k, VWORD _relpath) {
  V_ARG_CHECK3(runtime, "realpath", 2, argc);
  VBlob * relpath = VCheckedDecodeString2(runtime, _relpath, "realpath");
  VBlob * ret = alloca(sizeof(VBlob) + PATH_MAX);
  *ret = (VBlob){ .base = VMakeSmallObject(VSTRING), .len = PATH_MAX };
#ifdef __linux__
  char * ok = realpath(relpath->buf, ret->buf);
#endif
#ifdef _WIN64
  DWORD ok = GetFullPathName(relpath->buf, PATH_MAX, ret->buf, NULL);  
  if(ok >= PATH_MAX)
    ok = 0;
#endif
  ret->len = strlen(ret->buf)+1;
  V_CALL(k, runtime, ok ? VEncodePointer(ret, VPOINTER_OTHER) : VFALSE);
}

SYSV_CALL void VAccess(V_CORE_ARGS, VWORD k, VWORD _path, VWORD _mode) {
  V_ARG_CHECK3(runtime, "access", 3, argc);
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
  V_CALL(k, runtime, VEncodeBool(!ret));
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
    VErrorC(runtime, "f32vector-ref!: index out of bounds ~D", (offset-8)/8);
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
    VErrorC(runtime, "f32vector-set!: index out of bounds ~D", (offset-8)/8);
  double d = 0;
  if(VIsDouble(v))
    d = VDecodeNumber(v);
  else if(VWordType(v) == VIMM_INT)
    d = VDecodeInt(v);
  else
    VErrorC(runtime, "f32vector-set!: not an int or a double ~S", v);
  memcpy(buffer->buf + offset, &d, 8);
}

#define IMPLEMENT_BUFFER(prefix, Prefix, elem_width) \
void V ## Prefix ## VectorP(V_CORE_ARGS, VWORD k, VWORD _buf) { \
  V_ARG_CHECK3(runtime, #prefix "vector?", 2, argc); \
  VWORD ret = VFALSE; \
  if(VIsBlob(_buf)) { \
    VBlob * buf = VDecodeBlob(_buf); \
    if(buf->base.tag == VBUFFER && BUF_ ## Prefix == buf->buf[0]) \
      ret = VTRUE; \
  } \
  V_CALL(k, runtime, ret); \
} \
void VMake ## Prefix ## Vector(V_CORE_ARGS, VWORD k, VWORD _len, VWORD fill) { \
  V_ARG_CHECK3(runtime, "make-" #prefix "vector", 3, argc); \
  unsigned len = VCheckedDecodeInt2(runtime, _len, "make-" #prefix "vector"); \
  if(len > INT_MAX) \
    VErrorC(runtime, "make-" #prefix "vector: tried to make a vector of length ~D, maximum vector length is ~D", len, INT_MAX); \
  unsigned size = elem_width * (len+1); \
  VBlob * ret = V_ALLOCA_BLOB2((void*)&runtime, runtime, size); \
  if(!ret) VGarbageCollect2Func(runtime, (VFunc)VMake ## Prefix ## Vector, argc, k, _len, fill); \
  ret->base = VMakeSmallObject(VBUFFER); \
  ret->len = size; \
  ret->buf[0] = BUF_ ## Prefix; \
  if(VDecodeBool(fill)) { \
    unsigned offset = elem_width; \
    for(unsigned i = 0; i < len; i++) { \
      Prefix ## Write(runtime, ret, offset, fill); \
      offset += elem_width; \
    } \
  } \
  V_CALL(k, runtime, VEncodePointer(ret, VPOINTER_OTHER)); \
} \
void VList ## Prefix ## Vector (V_CORE_ARGS, VWORD k, VWORD lst) { \
  V_ARG_CHECK3(runtime, "list->" #prefix "vector", 2, argc); \
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
  vec->buf[0] = BUF_ ## Prefix; \
  v = lst; \
  int i = 0; \
  unsigned offset = elem_width; \
  while(VWordType(v) == VPOINTER_PAIR) { \
    VPair * p = VDecodePair(v); \
    Prefix ## Write(runtime, vec, offset, p->first); \
    offset += elem_width; \
    i++; \
    v = p->rest; \
  } \
  V_CALL(k, runtime, VEncodePointer(vec, VPOINTER_OTHER)); \
} \
void V ## Prefix ## VectorLength(V_CORE_ARGS, VWORD k, VWORD _buf) { \
  V_ARG_CHECK3(runtime, #prefix "vector-length", 2, argc); \
  VBlob * buf = VCheckedDecodePointer2(runtime, _buf, VBUFFER, #prefix "vector-length"); \
  if(buf->buf[0] != BUF_ ## Prefix) \
    VErrorC(runtime, #prefix "vector-length: not a vector of the right type.", _buf); \
  V_CALL(k, runtime, VEncodeInt(buf->len/elem_width - 1)); \
} \
void V ## Prefix ## VectorRef(V_CORE_ARGS, VWORD k, VWORD _buf, VWORD _i) { \
  V_ARG_CHECK3(runtime, #prefix "vector-ref", 3, argc); \
  int i = VCheckedDecodeInt2(runtime, _i, #prefix "vector-ref"); \
  VBlob * buf = VCheckedDecodePointer2(runtime, _buf, VBUFFER, #prefix "vector-ref"); \
  if(buf->buf[0] != BUF_ ## Prefix) \
    VErrorC(runtime, #prefix "vector-length: not a vector of the right type.", _buf); \
  V_CALL(k, runtime, Prefix ## Read(runtime, buf, elem_width*(i+1))); \
} \
void V ## Prefix ## VectorSet(V_CORE_ARGS, VWORD k, VWORD _buf, VWORD _i, VWORD val) { \
  V_ARG_CHECK3(runtime, #prefix "vector-set!", 4, argc); \
  int i = VCheckedDecodeInt2(runtime, _i, #prefix "vector-set!"); \
  VBlob * buf = VCheckedDecodePointer2(runtime, _buf, VBUFFER, #prefix "vector-set!"); \
  if(buf->buf[0] != BUF_ ## Prefix) \
    VErrorC(runtime, #prefix "vector-set!: not a vector of the right type.", _buf); \
  Prefix ## Write(runtime, buf, elem_width*(i+1), val); \
  V_CALL(k, runtime, VVOID); \
}

IMPLEMENT_BUFFER(s8, S8, 1)
IMPLEMENT_BUFFER(u8, U8, 1)
IMPLEMENT_BUFFER(s16, S16, 2)
IMPLEMENT_BUFFER(u16, U16, 2)
IMPLEMENT_BUFFER(s32, S32, 4)

IMPLEMENT_BUFFER(f32, F32, 4)
IMPLEMENT_BUFFER(f64, F64, 8)

void VReadU8Vector(V_CORE_ARGS, VWORD k, VWORD _n, VWORD _port) {
  V_ARG_CHECK3(runtime, "read-u8vector", 3, argc);
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
      V_CALL(k, runtime, VEOF);
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
        V_CALL(k, runtime, VEOF);
      if(port_ferror(port))
        VErrorC(runtime, "read-u8vector: io error during read");
    }
  }
  V_CALL(k, runtime, VEncodePointer(ret, VPOINTER_OTHER));
}

static bool jiffy_epoch_set;
static uint64_t jiffy_epoch;
static uint64_t one_billion = 1000ull * 1000 * 1000;
uint64_t VCurrentJiffyImpl() {
  (void)one_billion;
#ifdef __linux__
  struct timespec nanotime;
  // using clock monotonic to avoid skew? the adjustments are allegedly gentle
  clock_gettime(CLOCK_MONOTONIC, &nanotime);
  uint64_t ret = nanotime.tv_nsec + one_billion * nanotime.tv_sec;
#elif defined(_WIN64)
  LARGE_INTEGER ticks;
  QueryPerformanceCounter(&ticks);
  uint64_t ret = ticks.QuadPart;
#else
  uint64_t ret = 0;
#endif
  if(!jiffy_epoch_set)
  {
    jiffy_epoch_set = true;
    jiffy_epoch = ret;
  }
  return ret - jiffy_epoch;
}
uint64_t VJiffiesPerSecondImpl() {
#ifdef __linux__
  return one_billion;
#endif
#ifdef _WIN64
  LARGE_INTEGER ticks_per_second;
  QueryPerformanceFrequency(&ticks_per_second);
  return ticks_per_second.QuadPart;
#endif
  return 0;
}

void VCurrentJiffy(V_CORE_ARGS, VWORD k) {
#if defined(__linux) || defined(_WIN64)
  uint64_t ret = VCurrentJiffyImpl();
  V_CALL(k, runtime, VEncodeNumber(ret));
#endif
  VErrorC(runtime, "current-jiffy: unsupported platform");
}

void VJiffiesPerSecond(V_CORE_ARGS, VWORD k) {
#if defined(__linux) || defined(_WIN64)
  V_CALL(k, runtime, VEncodeNumber(VJiffiesPerSecondImpl()));
#endif
  VErrorC(runtime, "jiffies-per-second: unsupported platform");
}

// bit banging

void VBitwiseNot(V_CORE_ARGS, VWORD k, VWORD _x) {
#define NAME "bitwise-not"
  int x = VCheckedDecodeInt2(runtime, _x, NAME);
  int ret = ~x;
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VBitwiseIor(V_CORE_ARGS, VWORD k, VWORD _a, VWORD _b) {
#define NAME "bitwise-ior"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = a | b;
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VBitwiseXor(V_CORE_ARGS, VWORD k, VWORD _a, VWORD _b) {
#define NAME "bitwise-xor"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = a ^ b;
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VBitwiseAnd(V_CORE_ARGS, VWORD k, VWORD _a, VWORD _b) {
#define NAME "bitwise-and"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = a & b;
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VBitwiseXnor(V_CORE_ARGS, VWORD k, VWORD _a, VWORD _b) {
#define NAME "bitwise-xnor"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = ~(a ^ b);
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VBitwiseNand(V_CORE_ARGS, VWORD k, VWORD _a, VWORD _b) {
#define NAME "bitwise-nand"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = ~(a & b);
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VBitwiseNor(V_CORE_ARGS, VWORD k, VWORD _a, VWORD _b) {
#define NAME "bitwise-nor"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = ~(a | b);
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VBitwiseAndC1(V_CORE_ARGS, VWORD k, VWORD _a, VWORD _b) {
#define NAME "bitwise-andc1"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = (~a & b);
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VBitwiseAndC2(V_CORE_ARGS, VWORD k, VWORD _a, VWORD _b) {
#define NAME "bitwise-andc1"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = (a & ~b);
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VBitwiseOrC1(V_CORE_ARGS, VWORD k, VWORD _a, VWORD _b) {
#define NAME "bitwise-orc1"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = (~a & b);
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VBitwiseOrC2(V_CORE_ARGS, VWORD k, VWORD _a, VWORD _b) {
#define NAME "bitwise-orc2"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret = (a & ~b);
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VArithmeticShift(V_CORE_ARGS, VWORD k, VWORD _a, VWORD _b) {
#define NAME "arithmetic-shift"
  int a = VCheckedDecodeInt2(runtime, _a, NAME);
  int b = VCheckedDecodeInt2(runtime, _b, NAME);
  int ret;
  if(b > 0)
    ret = a << b;
  else
    ret = a >> -b;
  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
void VBitCount(V_CORE_ARGS, VWORD k, VWORD _a) {
#define NAME "bit-count"
  unsigned a = VCheckedDecodeInt2(runtime, _a, NAME);
  // lib concerns; probs need to turn on BMI
  // int ret = __builtin_popcount(a);
  unsigned int ret;
  for (ret = 0; a; ret++)
    a &= a - 1;

  V_CALL(k, runtime, VEncodeInt(ret));
#undef NAME
}
