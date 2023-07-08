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
#include <assert.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>

void VAdd(VEnv * env) {
    VClosure * k = VDecodeClosure(env->vars[0]);
    bool exact = true;
    double dacc = 0;
    long int iacc = 0;
    for(unsigned i = 1; i < env->num_vars; i++) {
      VWORD v = env->vars[i];
      unsigned long type = VWordType(v);
      if(type == VIMM_INT) {
        iacc += VDecodeInt(v);
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc += VDecodeNumber(v);
      } else {
        VError("+: not a number\n");
      }
    }
    VWORD ret;
    if(iacc >= INT_MAX || iacc <= INT_MIN)
      exact = false;

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    V_TAIL_CALL(env, k, ret);
}

void VSub(VEnv * env) {
    V_ARG_MIN("-", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    bool exact = true;
    double dacc = 0;
    long int iacc = 0;
    {
      VWORD v = env->vars[1];
      unsigned long type = VWordType(v);
      if(type == VIMM_INT) {
        iacc += VDecodeInt(v);
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc += VDecodeNumber(v);
      } else {
        VError("-: not a number\n");
      }
    }
    // performs the -x op
    if(env->num_vars == 2) {
      iacc = -iacc;
      dacc = -dacc;
      goto end;
    }
    // performs x0 - x1 - x2 - x3 ...
    for(unsigned i = 2; i < env->num_vars; i++) {
      VWORD v = env->vars[i];
      unsigned long type = VWordType(v);
      if(type == VIMM_INT) {
        iacc -= VDecodeInt(v);
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc -= VDecodeNumber(v);
      } else {
        VError("-: not a number\n");
      }
    }
end:
    {
      VWORD ret;
      if(iacc >= INT_MAX || iacc <= INT_MIN)
        exact = false;

      if(exact)
        ret = VEncodeInt(iacc);
      else
        ret = VEncodeNumber(iacc+dacc);
      V_TAIL_CALL(env, k, ret);
    }
}

void VMul(VEnv * env) {
    VClosure * k = VDecodeClosure(env->vars[0]);
    bool exact = true;
    double dacc = 1;
    long int iacc = 1;
    for(unsigned i = 1; i < env->num_vars; i++) {
      VWORD v = env->vars[i];
      unsigned long type = VWordType(v);
      if(type == VIMM_INT) {
        // FIXME no longer handles overflow correctly, instead
        // use overflow detection from hacker's delight
        iacc *= VDecodeInt(v);
        if(iacc >= INT_MAX || iacc <= INT_MIN) {
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
    V_TAIL_CALL(env, k, ret);
}

void VDiv(VEnv * env) {
    V_ARG_MIN("/", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    bool exact = true;
    double dacc = 1;
    long int iacc = 1;
    {
      VWORD v = env->vars[1];
      unsigned long type = VWordType(v);
      if(type == VIMM_INT) {
        iacc += VDecodeInt(v);
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc += VDecodeNumber(v);
      } else {
        VError("-: not a number\n");
      }
    }
    // performs the 1/x op
    if(env->num_vars == 2) {
      if(iacc != 1) {
        iacc = 1;
        dacc = iacc;
        exact = false;
      }
      dacc = 1.0/dacc;
      goto end;
    }
    // performs x0 / (x1 * x2 * x3 ...)
    for(unsigned i = 2; i < env->num_vars; i++) {
      VWORD v = env->vars[i];
      unsigned long type = VWordType(v);
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
end:
    {
      VWORD ret;
      if(exact)
        ret = VEncodeInt(iacc);
      else
        ret = VEncodeNumber(iacc*dacc);
      V_TAIL_CALL(env, k, ret);
    }
}

void VQuot(VEnv * env) {
    V_ARG_CHECK("quotient", 3, env);
    VClosure * k = VDecodeClosure(env->vars[0]);

    if(VWordType(env->vars[1]) != VIMM_INT) VError("quotient: not an int");
    if(VWordType(env->vars[2]) != VIMM_INT) VError("quotient: not an int");

    V_TAIL_CALL(env, k, VEncodeInt(VDecodeInt(env->vars[1]) / VDecodeInt(env->vars[2])));
}
void VRem(VEnv * env) {
    V_ARG_CHECK("remainder", 3, env);
    VClosure * k = VDecodeClosure(env->vars[0]);

    if(VWordType(env->vars[1]) != VIMM_INT) VError("quotient: not an int");
    if(VWordType(env->vars[2]) != VIMM_INT) VError("quotient: not an int");

    V_TAIL_CALL(env, k, VEncodeInt(VDecodeInt(env->vars[1]) % VDecodeInt(env->vars[2])));
}

void VCmp(VEnv * env) {
  V_ARG_CHECK("cmp", 3, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  double a, b;
  if(isnan(a=VDecodeNumber(env->vars[1]))) {
    if(VWordType(env->vars[1]) != VIMM_INT)
      VError("cmp: not a number ~A", env->vars[1]);
    a = (double)VDecodeInt(env->vars[1]);
  }
  if(isnan(b=VDecodeNumber(env->vars[2]))) {
    if(VWordType(env->vars[2]) != VIMM_INT)
      VError("cmp: not a number ~A", env->vars[2]);
    b = (double)VDecodeInt(env->vars[2]);
  }

  double diff = a - b;
  int ret = diff  > 0.0 ? 1
          : diff == 0.0 ? 0
          : -1 ;

  V_TAIL_CALL(env, k, VEncodeInt(ret));
  
}

// type predicates

void VNullP(VEnv * env) {
    V_ARG_CHECK("null?", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VBits(env->vars[1]) == VBits(VNULL)));
}
void VEofP(VEnv * env) {
    V_ARG_CHECK("eof-object?", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VBits(env->vars[1]) == VBits(VEOF)));
}
void VPairP(VEnv * env) {
    V_ARG_CHECK("pair?", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VWordType(env->vars[1]) == VPOINTER_PAIR));
}
void VVectorP(VEnv * env) {
  V_ARG_CHECK("vector?", 2, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  V_TAIL_CALL(env, k, VEncodeBool(VDecodeVector(env->vars[1])));
}
void VProcedureP(VEnv * env) {
    V_ARG_CHECK("procedure?", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VWordType(env->vars[1]) == VPOINTER_CLOSURE));
}
void VBlobP(VEnv * env) {
    V_ARG_CHECK("blob?", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    bool ret = false;
    if(VWordType(env->vars[1]) == VPOINTER_OTHER) {
      switch(*(VTAG*)VDecodePointer(env->vars[1])) {
        case VSYMBOL:
        case VSTRING:
          ret = true;
          break;
        default:
          ret = false;
          break;
      }
    }

    V_TAIL_CALL(env, k, VEncodeBool(ret));
}
void VSymbolP(VEnv * env) {
    V_ARG_CHECK("symbol?", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VWordType(env->vars[1]) == VPOINTER_OTHER
                                    && *(VTAG*)VDecodePointer(env->vars[1]) == VSYMBOL));
}
void VStringP(VEnv * env) {
    V_ARG_CHECK("string?", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VWordType(env->vars[1]) == VPOINTER_OTHER
                                    && *(VTAG*)VDecodePointer(env->vars[1]) == VSTRING));
}
void VDoubleP(VEnv * env) {
    V_ARG_CHECK("double?", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VIsNumber(env->vars[0])));
}
void VIntP(VEnv * env) {
    V_ARG_CHECK("int?", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VWordType(env->vars[1]) == VIMM_INT));
}
void VCharP(VEnv * env) {
    V_ARG_CHECK("char?", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VWordType(env->vars[1]) == VIMM_CHAR));
}

// equality

void VEq(VEnv * env) {
  V_ARG_CHECK("eq?", 3, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VBits(env->vars[1]) == VBits(env->vars[2])));
}

void VSymbolEqv(VEnv * env) {
  // FIXME type check
  V_ARG_CHECK("symbol=?", 3, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VCheckSymbolEqv(env->vars[1], env->vars[2])));
}
void VBlobEqv(VEnv * env) {
  // FIXME type check
  V_ARG_CHECK("blob=?", 3, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  VBlob * blob_a = (VBlob*)VDecodePointer(env->vars[1]);
  VBlob * blob_b = (VBlob*)VDecodePointer(env->vars[2]);
  bool ret = false;
  if(blob_a->len == blob_b->len)
    ret = blob_a->tag == blob_b->tag && !memcmp(blob_a->buf, blob_b->buf, blob_a->len);
  V_TAIL_CALL(env, k, VEncodeBool(ret));
}

// logic

void VNot(VEnv * env) {
  V_ARG_CHECK("not", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VBits(env->vars[1]) == VBits(VFALSE)));
}

// pairs

void VCons(VEnv * env) {
    V_ARG_CHECK("cons", 3, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    VPair pair = VMakePair(env->vars[1], env->vars[2]);
    V_TAIL_CALL(env, k, VEncodePair(&pair));
}

void VCar(VEnv * env) {
    // FIXME type check
    V_ARG_CHECK("car", 2, env);
    if(VWordType(env->vars[1]) != VPOINTER_PAIR) VError("car: not a pair\n");
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VDecodePair(env->vars[1])->first);
}

void VCdr(VEnv * env) {
    // FIXME type check
    V_ARG_CHECK("cdr", 2, env);
    if(VWordType(env->vars[1]) != VPOINTER_PAIR) VError("cdr: not a pair\n");
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VDecodePair(env->vars[1])->rest);
}

// vectors

void VListVector(VEnv * env) {
  V_ARG_CHECK("list->vector", 2, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  int len = 0;
  VWORD v = env->vars[1];
  while(VWordType(v) == VPOINTER_PAIR) {
    len++;
    v = VDecodePair(v)->rest;
  }
  if(VBits(v) != VBits(VNULL)) VError("list->vector: not a null-terminated list\n");

  VVector * vec = V_ALLOCA_VECTOR(len);
  vec->tag = VVECTOR;
  vec->len = len;

  v = env->vars[1];
  int i = 0;
  while(VWordType(v) == VPOINTER_PAIR) {
    VPair * p = VDecodePair(v);
    vec->arr[i++] = p->first;
    v = p->rest;
  }
  V_TAIL_CALL(env, k, VEncodePointer(vec, VPOINTER_OTHER));
}

void VVectorRef(VEnv * env) {
  V_ARG_CHECK("vector-ref", 3, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  VVector * vec = VDecodeVector(env->vars[1]);
  if(!vec) VError("vector-ref: arg 1 not a vector\n");
  if(VWordType(env->vars[2]) != VIMM_INT) VError("vector-ref: arg 2 not an int\n");
  long i = VDecodeInt(env->vars[2]);
  if(!(0 <= i && i < vec->len)) VError("vector-ref: out of range\n");

  V_TAIL_CALL(env, k, vec->arr[i]);
}

void VVectorLength(VEnv * env) {
  V_ARG_CHECK("vector-length", 2, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  VVector * vec = VDecodeVector(env->vars[1]);
  if(!vec) VError("vector-ref: arg 1 not a vector\n");
  V_TAIL_CALL(env, k, VEncodeInt(vec->len));
}

// strings

void VMakeString(VEnv * env) {
  V_ARG_RANGE("make-string", 2, 3, env);
  VClosure * k = VDecodeClosure(env->vars[0]);

  if(VWordType(env->vars[1]) != VIMM_INT) VError("make-string: not an int");
  long i = VDecodeInt(env->vars[1]);
  if(!(0 <= i && i < 1024 * 1024)) VError("make-string: out of bounds");

  char c = 'X';
  if(env->num_vars == 3) {
    if(VWordType(env->vars[2]) != VIMM_CHAR) VError("make-string: not a char");
    c = VDecodeChar(env->vars[2]);
  }

  VBlob * str = alloca(sizeof(VBlob) + i + 1);
  str->tag = VSTRING;
  str->len = i + 1;
  str->buf[i] = '\0';
  memset(str->buf, c, i);

  V_TAIL_CALL(env, k, VEncodePointer(str, VPOINTER_OTHER));
}

void VSubstring(VEnv * env) {
  V_ARG_RANGE("substring", 2, 4, env);
  VClosure * k = VDecodeClosure(env->vars[0]);

  VBlob const * str = VDecodeBlob(env->vars[1]);
  if(!str || str->tag != VSTRING) VError("substring: arg 1 not a string");

  long start = 0;
  long end = str->len - 1;
  if(env->num_vars >= 3)
  {
    if(VWordType(env->vars[2]) != VIMM_INT) VError("substring: arg 2 not an int");
    start = VDecodeInt(env->vars[2]);
  }
  if(env->num_vars >= 4)
  {
    if(VWordType(env->vars[3]) != VIMM_INT) VError("substring: arg 3 not an int");
    end = VDecodeInt(env->vars[3]);
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

  V_TAIL_CALL(env, k, VEncodePointer(copy, VPOINTER_OTHER));
}

void VStringCopy(VEnv * env) {
  V_ARG_RANGE("string-copy!", 4, 6, env);
  VClosure * k = VDecodeClosure(env->vars[0]);

  VBlob * dst = VDecodeBlob(env->vars[1]);
  if(!dst || dst->tag != VSTRING) VError("string-copy!: arg 1 not a string\n");
  VBlob const * src = VDecodeBlob(env->vars[3]);
  if(!src || src->tag != VSTRING) VError("string-copy!: arg 3 not a string\n");

  if(VWordType(env->vars[2]) != VIMM_INT) VError("string-copy!: arg 2 not an int\n");
  long at = VDecodeInt(env->vars[2]);
  if(!(0 <= at && at < dst->len)) VError("string-copy!: at out of bounds\n");

  long start = 0;
  long end = src->len - 1;
  if(env->num_vars >= 5)
  {
    if(VWordType(env->vars[4]) != VIMM_INT) VError("string-copy!: arg 4 not an int\n");
    start = VDecodeInt(env->vars[4]);
  }
  if(env->num_vars >= 6)
  {
    if(VWordType(env->vars[5]) != VIMM_INT) VError("string-copy!: arg 5 not an int\n");
    end = VDecodeInt(env->vars[5]);
  }
  long srclen = end - start;
  long dstlen = dst->len-1 - at;
  if(!(0 <= start && start < src->len)) VError("string-copy!: start out of bounds\n");
  if(!(0 <= end && end < src->len)) VError("string-copy!: end out of bounds\n");
  if(start > end) VError("string-copy!: start greater than end\n");
  if(dstlen < srclen) VError("string-copy!: attempting to copy ~l chars into a substring ~l chars long.\n", srclen, dstlen);

  memmove(dst->buf + at, src->buf + start, srclen);
  V_TAIL_CALL(env, k, VVOID);
}

void VStringLength(VEnv * env) {
  V_ARG_CHECK("string-length", 2, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  VBlob * str = VDecodeBlob(env->vars[1]);
  if(!str || str->tag != VSTRING) VError("string-length: not a string");

  // not exposing the null terminal
  V_TAIL_CALL(env, k, VEncodeInt(str->len - 1));
}

void VStringRef(VEnv * env) {
  V_ARG_CHECK("string-ref", 3, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  VBlob * str = VDecodeBlob(env->vars[1]);
  if(!str || str->tag != VSTRING) VError("string-ref: not a string");

  if(VWordType(env->vars[2]) != VIMM_INT) VError("string-ref: not an int");
  long i = VDecodeInt(env->vars[2]);
  // not exposing the null terminal
  if(!(0 <= i && i < str->len)) VError("string-ref: out of bounds");

  V_TAIL_CALL(env, k, VEncodeChar(str->buf[i]));
}

void VStringSet(VEnv * env) {
  V_ARG_CHECK("string-set!", 4, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  VBlob * str = VDecodeBlob(env->vars[1]);
  if(!str || str->tag != VSTRING) VError("string-set!: not a string");

  if(VWordType(env->vars[2]) != VIMM_INT) VError("string-set!: not an int");
  long i = VDecodeInt(env->vars[2]);
  // not exposing the null terminal
  if(!(0 <= i && i < str->len)) VError("string-set!: out of bounds");

  if(VWordType(env->vars[3]) != VIMM_CHAR) VError("string-set!: not a char");

  char c = VDecodeChar(env->vars[3]);
  str->buf[i] = c;

  V_TAIL_CALL(env, k, VVOID);
}

void VStringSymbol(VEnv * env) {
  V_ARG_CHECK("string->symbol", 2, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  VBlob * str = VDecodeBlob(env->vars[1]);
  if(!str || str->tag != VSTRING) VError("string->symbol: not a string~N");

  VBlob * sym = V_ALLOCA_BLOB(str->len);
  VFillBlob(sym, VSYMBOL, str->len, str->buf);
  V_TAIL_CALL(env, k, VEncodePointer(sym, VPOINTER_OTHER));
}
void VSymbolString(VEnv * env) {
  V_ARG_CHECK("symbol->string", 2, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  VBlob * str = VDecodeBlob(env->vars[1]);
  if(!str || str->tag != VSYMBOL) VError("symbol->string: not a string: ~A~N", env->vars[1]);

  VBlob * sym = V_ALLOCA_BLOB(str->len);
  VFillBlob(sym, VSTRING, str->len, str->buf);
  V_TAIL_CALL(env, k, VEncodePointer(sym, VPOINTER_OTHER));
}

void VStringNumber(VEnv * env) {
  V_ARG_CHECK("string->number", 2, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  VBlob * str = VDecodeBlob(env->vars[1]);
  if(!str || str->tag != VSTRING) VError("string->number: not a string: ~A~N", env->vars[1]);

  if(str->len == 1)
    V_TAIL_CALL(env, k, VFALSE);

  char * end = NULL;
  errno = 0;
  double d = strtod(str->buf, &end);
  if(errno) {
    errno = 0;
    V_TAIL_CALL(env, k, VFALSE);
  }
  if(str->buf + str->len - 1 != end)
    V_TAIL_CALL(env, k, VFALSE);

  if(floor(d) == d && VINT_MIN <= d && d <= VINT_MAX) {
    V_TAIL_CALL(env, k, VEncodeInt((vint)d));
  } else {
    V_TAIL_CALL(env, k, VEncodeNumber(d));
  }
}

// chars

void VCharInt(VEnv * env) {
  V_ARG_CHECK("char->int", 2, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  if(VWordType(env->vars[1]) != VIMM_CHAR) VError("char->integer: not a char");
  V_TAIL_CALL(env, k, VEncodeInt((long)VDecodeChar(env->vars[1])));
}

// ports

void VDupStdout(VEnv * env) {
  V_ARG_CHECK("dup-stdout", 1, env);
  VClosure * k = VDecodeClosure(env->vars[0]);

  int fd = dup(fileno(stdout));
  FILE * f = fdopen(fd, "wb");
  VPort port = VMakePortStream(f, PFLAG_WRITE);
  V_TAIL_CALL(env, k, VEncodePointer(&port, VPOINTER_OTHER));
}

void VDupStdin(VEnv * env) {
  V_ARG_CHECK("dup-stdin", 1, env);
  VClosure * k = VDecodeClosure(env->vars[0]);

  int fd = dup(fileno(stdin));
  FILE * f = fdopen(fd, "rb");
  VPort port = VMakePortStream(f, PFLAG_READ);
  V_TAIL_CALL(env, k, VEncodePointer(&port, VPOINTER_OTHER));
}

void VDupStderr(VEnv * env) {
  V_ARG_CHECK("dup-stderr", 1, env);
  VClosure * k = VDecodeClosure(env->vars[0]);

  int fd = dup(fileno(stderr));
  FILE * f = fdopen(fd, "wb");
  VPort port = VMakePortStream(f, PFLAG_WRITE);
  V_TAIL_CALL(env, k, VEncodePointer(&port, VPOINTER_OTHER));
}

static void VOpenStream(VEnv * env, char const * mode, unsigned flags) {
  V_ARG_CHECK("open-stream", 2, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  VBlob * str = VDecodeBlob(env->vars[1]);
  if(!str || str->tag != VSTRING) VError("open-stream: not a string");
  FILE * f = fopen(str->buf, mode);
  if(!f) VError("open-stream: failed to open file `~Z`~N", str->buf);
  VPort port = VMakePortStream(f, flags);
  V_TAIL_CALL(env, k, VEncodePointer(&port, VPOINTER_OTHER));
}

void VOpenInputStream(VEnv * env) {
  VOpenStream(env, "rb", PFLAG_READ);
}
void VOpenOutputStream(VEnv * env) {
  VOpenStream(env, "wb", PFLAG_WRITE);
}

void VCloseStream(VEnv * env) {
  V_ARG_CHECK("close-file", 2, env);

  if(VWordType(env->vars[1]) != VPOINTER_OTHER) VError("close-stream: not a port");
  VPort * port = (VPort*)VDecodePointer(env->vars[1]);
  if(port->tag != VPORT) VError("close-stream: not a port");

  if(port->stream)
  {
    if(port->flags & PFLAG_PROCESS)
      pclose(port->stream);
    else
      fclose(port->stream);
  }
  port->stream = NULL;

  VClosure * k = VDecodeClosure(env->vars[0]);
  V_TAIL_CALL(env, k, VVOID);
}

void VOpenOutputString(VEnv * env) {
  V_ARG_CHECK("open-output-string", 1, env);
  FILE * f = tmpfile();
  VPort port = VMakePortStream(f, PFLAG_WRITE | PFLAG_OSTRING);
  VClosure * k = VDecodeClosure(env->vars[0]);
  V_TAIL_CALL(env, k, VEncodePointer(&port, VPOINTER_OTHER));
}

void VGetOutputString(VEnv * env) {
  V_ARG_CHECK("get-output-string", 2, env);
  VPort * port = (VPort*)VDecodePointer(env->vars[1]);
  if(port->tag != VPORT) VError("get-output-string: not a port");
  if(!(port->flags & PFLAG_OSTRING)) VError("get-output-string: not an output string port");

  FILE * f = port->stream;
  long len = ftell(f);
  rewind(f);
  VBlob * str = alloca(sizeof(VBlob) + len + 1);
  str->tag = VSTRING;
  str->len = len+1;
  fread(str->buf, len, 1, f);
  str->buf[len] = '\0';
  fseek(f, 0, SEEK_END);

  VClosure * k = VDecodeClosure(env->vars[0]);
  V_TAIL_CALL(env, k, VEncodePointer(str, VPOINTER_OTHER));
}

// input

void VReadChar(VEnv * env) {
  V_ARG_RANGE("read-char", 1, 2, env);
  FILE * f = env->num_vars == 2 ? ((VPort*)VDecodePointer(env->vars[1]))->stream : stdin;
  VClosure * k = VDecodeClosure(env->vars[0]);
  char c = fgetc(f);
  if(c == EOF) {
    V_TAIL_CALL(env, k, VEOF);
  } else {
    V_TAIL_CALL(env, k, VEncodeChar((char)c));
  }
}

// FIXME only reads 256 char lines
void VReadLine(VEnv * env) {
  //static VDebugInfo dbg = { "read-line" };
  V_ARG_RANGE("read-line", 1, 2, env);
  V_GC_CHECK(VReadLine, env) {
    FILE * f = env->num_vars == 2 ? ((VPort*)VDecodePointer(env->vars[1]))->stream : stdin;
    VClosure * k = VDecodeClosure(env->vars[0]);
    VBlob * str = alloca(sizeof(VBlob) + 256);
    str->tag = VSTRING;
    if(!fgets(str->buf, 256, f)) {
      V_TAIL_CALL(env, k, VEOF);
    } else {
      size_t len = strlen(str->buf);
      if(len > 0 && str->buf[len-1] == '\n')
        len--;
      if(len > 0 && str->buf[len-1] == '\r')
        len--;
      str->buf[len] = '\0';
      str->len = len+1; // account for the null terminal
      V_TAIL_CALL(env, k, VEncodePointer(str, VPOINTER_OTHER));
    }
  }
}

// output

void VDisplay(VEnv * env) {
    V_ARG_CHECK("display-word", 3, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    FILE * f = ((VPort*)VDecodePointer(env->vars[2]))->stream;
    VDisplayWord(f, env->vars[1], false);
    V_TAIL_CALL(env, k, VVOID);
}
void VWrite(VEnv * env) {
    V_ARG_CHECK("write-word", 3, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    FILE * f = ((VPort*)VDecodePointer(env->vars[2]))->stream;
    VDisplayWord(f, env->vars[1], true);
    V_TAIL_CALL(env, k, VVOID);
}
void VNewline(VEnv * env) {
    V_ARG_CHECK("newline", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    FILE * f = ((VPort*)VDecodePointer(env->vars[1]))->stream;
    fprintf(f, "\n");
    fflush(f);
    V_TAIL_CALL(env, k, VVOID);
}

// misc

void VCallCCLambda(VEnv * env) {
    // continuations dont have arg0 as a continuation
    // so we need a wrapper to drop arg0 then call the continuation
    //static VDebugInfo dbg = { "call/cc_k" };
    V_GC_CHECK(VCallCCLambda, env) {
      VClosure * k = VDecodeClosure(env->up->vars[0]);
      // and we can do that just with memmoving and changing the up var
      memmove(env->vars, env->vars+1, sizeof(VWORD[env->num_vars-1]));
      env->num_vars--;
      env->up = k->env;
      if(k->abi != OLD_ABI) VError("call/cc with new abi\n");
      ((VFunc)k->func)(env);
    }
}

void VCallCC(VEnv * env) {
    // (lambda (k proc) (proc k (lambda (k2 x) (k x))))
    // for supporting multiple values
    // (lambda (k proc) (proc k (lambda (k2 . xs) (apply k xs))))
    // FIXME type check
    V_ARG_CHECK("call/cc", 2, env);
    VWORD k = env->vars[0];
    VClosure * proc = VDecodeClosure(env->vars[1]);
    
    VClosure k_wrapped = VMakeClosure(VCallCCLambda, env);

    V_CALL(proc, k, VEncodeClosure(&k_wrapped));
}

void VCallValuesK(VEnv * env) {
  VWORD k = env->up->vars[0];
  VClosure * consumer = VDecodeClosure(env->up->vars[2]);

  // fixme (values) will create an environment with extra space
  // so check before allocaing
  unsigned nvars = env->num_vars;
  VEnv * newenv = alloca(sizeof(VEnv)+sizeof(VWORD[nvars+1]));
  newenv->tag = VENV;
  newenv->up = consumer->env;
  newenv->num_vars = nvars+1;
  newenv->var_len = nvars+1;

  newenv->vars[0] = k;
  memcpy(newenv->vars + 1, env->vars, sizeof(VWORD[nvars]));

  if(consumer->abi != OLD_ABI) VError("call/values with new abi\n");
  ((VFunc)consumer->func)(newenv);
}

void VCallValues(VEnv * env) {
    // FIXME type check
    // (lambda (k producer consumer) (producer (lambda (k2 . args) (apply consumer k args))))
    V_ARG_CHECK("call-with-values", 3, env);
    VClosure * producer = VDecodeClosure(env->vars[1]);

    VClosure k = VMakeClosure(VCallValuesK, env);
    V_CALL(producer, VEncodeClosure(&k));
}

void VApply(VEnv * env) {
  V_ARG_MIN("apply", 3, env);
  VWORD k = env->vars[0];
  VClosure * f = VDecodeClosure(env->vars[1]);
  
  unsigned len = 0;
  VWORD args = env->vars[2];
  while(VWordType(args) == VPOINTER_PAIR) {
    args = VDecodePair(args)->rest;
    len++;
  }
  args = env->vars[2];
  VEnv * newenv = alloca(sizeof(VEnv)+sizeof(VWORD[len+1]));
  newenv->tag = VENV;
  newenv->up = f->env;
  newenv->num_vars = len+1;
  newenv->var_len = len+1;

  newenv->vars[0] = k;
  unsigned cur = 1;
  while(VWordType(args) == VPOINTER_PAIR) {
    VPair * p = VDecodePair(args);
    newenv->vars[cur++] = p->first;
    args = p->rest;
  }
  if(f->abi != OLD_ABI) VError("apply with new abi\n");
  ((VFunc)f->func)(newenv);
}

void VSystem(VEnv * env) {
  V_ARG_CHECK("system", 2, env);

  VBlob * blob = VDecodeBlob(env->vars[1]);
  if(!blob || blob->tag != VSTRING) {
    VError("system: not a string\n");
  }

  int ret = system(blob->buf);

  VClosure * k = VDecodeClosure(env->vars[0]);
  V_TAIL_CALL(env, k, VEncodeInt(ret));
}

static void VOpenProcess(VEnv * env, char const * mode, unsigned flags) {
  V_ARG_CHECK("open-io-process", 2, env);

  VBlob * blob = VDecodeBlob(env->vars[1]);
  if(!blob || blob->tag != VSTRING) {
    VError("open-io-process: not a string\n");
  }

  FILE * f = popen(blob->buf, mode);

  if(!f) VError("open-io-process: failed to open process `~Z`~N", blob->buf);
  VPort port = VMakePortStream(f, flags | PFLAG_PROCESS);
  VClosure * k = VDecodeClosure(env->vars[0]);
  V_TAIL_CALL(env, k, VEncodePointer(&port, VPOINTER_OTHER));
}

void VOpenInputProcess(VEnv * env) {
  VOpenProcess(env, "r", PFLAG_READ | PFLAG_PROCESS);
}
void VOpenOutputProcess(VEnv * env) {
  VOpenProcess(env, "w", PFLAG_WRITE | PFLAG_PROCESS);
}

void VMakeTemporaryFile(VEnv * env) {
  V_ARG_RANGE("make-temporary-file", 2, 3, env);

  VBlob * prefix = VDecodeBlob(env->vars[1]);
  if(!prefix || prefix->tag != VSTRING) {
    VError("make-temporary-file: not a string\n");
  }

  // suffix may be annoying to do on windings
  VBlob * suffix = NULL;
  if(env->num_vars == 3) {
    suffix = VDecodeBlob(env->vars[2]);
    if(!suffix || suffix->tag != VSTRING) {
      VError("make-temporary-file: not a string\n");
    }
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

  VClosure * k = VDecodeClosure(env->vars[0]);
  V_TAIL_CALL(env, k, VEncodePointer(str, VPOINTER_OTHER));
}
