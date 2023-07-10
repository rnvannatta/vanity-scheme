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

__attribute__((used)) static void VAdd2CaseVarargs(V_CORE_ARGS, VWORD k, ...) {
    V_ARG_MIN2("+", 1, argc);
    bool exact = true;
    double dacc = 0;
    long int iacc = 0;
    va_list args;
    va_start(args, k);
    for(unsigned i = 1; i < argc; i++) {
      VWORD v = va_arg(args, VWORD);
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
    va_end(args);
    VWORD ret;
    if(iacc >= INT_MAX || iacc <= INT_MIN)
      exact = false;

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    V_CALL2(VDecodeClosure(k), runtime, ret);
}

__attribute__((used)) static void VAdd2Case2(V_CORE_ARGS, VWORD k, VWORD a, VWORD b) {
    bool exact = true;
    double dacc = 0;
    long int iacc = 0;
    for(int i = 0; i < 2; i++)
    {
      VWORD v = i ? b : a;
      unsigned long type = VWordType(v);
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
    if(iacc >= INT_MAX || iacc <= INT_MIN)
      exact = false;

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    V_CALL2(VDecodeClosure(k), runtime, ret);
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

__attribute__((used)) static void VSub2Case2(V_CORE_ARGS, VWORD k, VWORD a, VWORD b) {
    bool exact = true;
    double dacc = 0;
    long int iacc = 0;
    {
      unsigned long type = VWordType(a);
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
      unsigned long type = VWordType(b);
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
    if(iacc >= INT_MAX || iacc <= INT_MIN)
      exact = false;

    if(exact)
      ret = VEncodeInt(iacc);
    else
      ret = VEncodeNumber(iacc+dacc);
    V_CALL2(VDecodeClosure(k), runtime, ret);
}

__attribute__((used)) static void VSub2CaseVarargs(V_CORE_ARGS, VWORD k, VWORD x, ...) {
    V_ARG_MIN2("-", 2, argc);
    bool exact = true;
    double dacc = 0;
    long int iacc = 0;
    {
      unsigned long type = VWordType(x);
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
    va_end(args);
end:
    {
      VWORD ret;
      if(iacc >= INT_MAX || iacc <= INT_MIN)
        exact = false;

      if(exact)
        ret = VEncodeInt(iacc);
      else
        ret = VEncodeNumber(iacc+dacc);
      V_CALL2(VDecodeClosure(k), runtime, ret);
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

void VMul2(V_CORE_ARGS, VWORD k, ...) {
    V_ARG_MIN2("*", 1, argc);
    bool exact = true;
    double dacc = 1;
    long int iacc = 1;
    va_list args;
    va_start(args, k);
    for(unsigned i = 1; i < argc; i++) {
      VWORD v = va_arg(args, VWORD);
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
    V_CALL2(VDecodeClosure(k), runtime, ret);
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

void VDiv2(V_CORE_ARGS, VWORD k, VWORD x, ...) {
    V_ARG_MIN2("/", 2, argc);
    bool exact = true;
    double dacc = 1;
    long int iacc = 1;
    {
      unsigned long type = VWordType(x);
      if(type == VIMM_INT) {
        iacc += VDecodeInt(x);
      } else if(type == VIMM_NUMBER) {
        exact = false;
        dacc += VDecodeNumber(x);
      } else {
        VError("-: not a number\n");
      }
    }
    // performs the 1/x op
    if(argc == 2) {
      if(iacc != 1) {
        iacc = 1;
        dacc = iacc;
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
    va_end(args);
end:
    {
      VWORD ret;
      if(exact)
        ret = VEncodeInt(iacc);
      else
        ret = VEncodeNumber(iacc*dacc);
      V_CALL2(VDecodeClosure(k), runtime, ret);
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

void VQuot2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
    V_ARG_CHECK2("quotient", 3, argc);

    if(VWordType(x) != VIMM_INT) VError("quotient: not an int");
    if(VWordType(y) != VIMM_INT) VError("quotient: not an int");

    V_CALL2(VDecodeClosure(k), runtime, VEncodeInt(VDecodeInt(x) / VDecodeInt(y)));
}
void VRem2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
    V_ARG_CHECK2("remainder", 3, argc);

    if(VWordType(x) != VIMM_INT) VError("quotient: not an int");
    if(VWordType(y) != VIMM_INT) VError("quotient: not an int");

    V_CALL2(VDecodeClosure(k), runtime, VEncodeInt(VDecodeInt(x) % VDecodeInt(y)));
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

  V_CALL2(VDecodeClosure(k), runtime, VEncodeInt(ret));
  
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

void VNullP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("null?", 2, argc);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(VBits(x) == VBits(VNULL)));
}
void VEofP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("eof-object?", 2, argc);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(VBits(x) == VBits(VEOF)));
}
void VPairP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("pair?", 2, argc);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(VWordType(x) == VPOINTER_PAIR));
}
void VVectorP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("vector?", 2, argc);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(VDecodeVector(x)));
}
void VProcedureP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("procedure?", 2, argc);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(VWordType(x) == VPOINTER_CLOSURE));
}
void VBlobP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("blob?", 2, argc);
  bool ret = false;
  if(VWordType(x) == VPOINTER_OTHER) {
    switch(*(VTAG*)VDecodePointer(x)) {
      case VSYMBOL:
      case VSTRING:
        ret = true;
        break;
      default:
        ret = false;
        break;
    }
  }
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(ret));
}
void VSymbolP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("symbol?", 2, argc);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(VDecodeSymbol(x)));
}
void VStringP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("string?", 2, argc);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(VDecodeString(x)));
}
void VDoubleP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("double?", 2, argc);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(VIsNumber(x)));
}
void VIntP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("int?", 2, argc);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(VWordType(x) == VIMM_INT));
}
void VCharP2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("char?", 2, argc);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(VWordType(x) == VIMM_CHAR));
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

void VEq2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK2("eq?", 3, argc);
  V_CALL2(VDecodeClosure(k), runtime, VInlineEq(x, y));
}

void VSymbolEqv2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK2("symbol=?", 3, argc);
  V_CALL2(VDecodeClosure(k), runtime, VInlineEq(x, y));
}
void VBlobEqv2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
  V_ARG_CHECK2("blob=?", 3, argc);
  VBlob * blob_a = (VBlob*)VDecodePointer(x);
  VBlob * blob_b = (VBlob*)VDecodePointer(y);
  bool ret = false;
  if(blob_a->len == blob_b->len)
    ret = blob_a->tag == blob_b->tag && !memcmp(blob_a->buf, blob_b->buf, blob_a->len);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(ret));
}

// logic

void VNot(VEnv * env) {
  V_ARG_CHECK("not", 2, env);
    VClosure * k = VDecodeClosure(env->vars[0]);
    V_TAIL_CALL(env, k, VEncodeBool(VBits(env->vars[1]) == VBits(VFALSE)));
}
void VNot2(V_CORE_ARGS, VWORD k, VWORD x) {
  V_ARG_CHECK2("not", 2, argc);
  V_CALL2(VDecodeClosure(k), runtime, VEncodeBool(VBits(x) == VBits(VFALSE)));
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

void VCons2(V_CORE_ARGS, VWORD k, VWORD x, VWORD y) {
    V_ARG_CHECK2("cons", 3, argc);
    V_CALL2(VDecodeClosure(k), runtime, VInlineCons(x, y));
}

void VCar2(V_CORE_ARGS, VWORD k, VWORD x) {
    V_ARG_CHECK2("car", 2, argc);
    V_CALL2(VDecodeClosure(k), runtime, VInlineCar(x));
}

void VCdr2(V_CORE_ARGS, VWORD k, VWORD x) {
    V_ARG_CHECK2("cdr", 2, argc);
    V_CALL2(VDecodeClosure(k), runtime, VInlineCdr(x));
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

void VListVector2(V_CORE_ARGS, VWORD k, VWORD lst) {
  V_ARG_CHECK2("list->vector", 2, argc);

  V_GC_CHECK2_VARARGS((VFunc2)VVectorLength2, runtime, statics, 2, argc, k, lst) {
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
    V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(vec, VPOINTER_OTHER));
  }
}

void VVectorRef2(V_CORE_ARGS, VWORD k, VWORD vector, VWORD index) {
  V_ARG_CHECK2("vector-ref", 3, argc);
  VVector * vec = VDecodeVector(vector);
  if(!vec) VError("vector-ref: arg 1 not a vector\n");
  if(VWordType(index) != VIMM_INT) VError("vector-ref: arg 2 not an int\n");
  long i = VDecodeInt(index);
  if(!(0 <= i && i < vec->len)) VError("vector-ref: out of range\n");

  V_CALL2(VDecodeClosure(k), runtime, vec->arr[i]);
}

void VVectorLength2(V_CORE_ARGS, VWORD k, VWORD vector) {
  V_ARG_CHECK2("vector-length", 2, argc);
  VVector * vec = VDecodeVector(vector);
  if(!vec) VError("vector-ref: arg 1 not a vector\n");
  V_CALL2(VDecodeClosure(k), runtime, VEncodeInt(vec->len));
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

void VMakeString2(V_CORE_ARGS, VWORD k, VWORD len, ...) {
  V_ARG_RANGE2("make-string", 2, 3, argc);

  if(VWordType(len) != VIMM_INT) VError("make-string: not an int");
  long i = VDecodeInt(len);
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

  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(str, VPOINTER_OTHER));
}

void VSubstring2(V_CORE_ARGS, VWORD k, VWORD string, ...) {
  V_ARG_RANGE2("substring", 2, 4, argc);

  VBlob const * str = VDecodeBlob(string);
  if(!str || str->tag != VSTRING) VError("substring: arg 1 not a string");

  long start = 0;
  long end = str->len - 1;
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

  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(copy, VPOINTER_OTHER));
}

void VStringCopy2(V_CORE_ARGS, VWORD k, VWORD dest, VWORD _at, VWORD source, ...) {
  V_ARG_RANGE2("string-copy!", 4, 6, argc);

  VBlob * dst = VDecodeBlob(dest);
  if(!dst || dst->tag != VSTRING) VError("string-copy!: arg 1 not a string\n");

  if(VWordType(_at) != VIMM_INT) VError("string-copy!: arg 2 not an int\n");
  long at = VDecodeInt(_at);
  if(!(0 <= at && at < dst->len)) VError("string-copy!: at out of bounds\n");

  VBlob const * src = VDecodeBlob(source);
  if(!src || src->tag != VSTRING) VError("string-copy!: arg 3 not a string\n");


  long start = 0;
  long end = src->len - 1;
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
  long srclen = end - start;
  long dstlen = dst->len-1 - at;
  if(!(0 <= start && start < src->len)) VError("string-copy!: start out of bounds\n");
  if(!(0 <= end && end < src->len)) VError("string-copy!: end out of bounds\n");
  if(start > end) VError("string-copy!: start greater than end\n");
  if(dstlen < srclen) VError("string-copy!: attempting to copy ~l chars into a substring ~l chars long.\n", srclen, dstlen);

  memmove(dst->buf + at, src->buf + start, srclen);
  V_CALL2(VDecodeClosure(k), runtime, VVOID);
}

void VStringLength2(V_CORE_ARGS, VWORD k, VWORD _str) {
  V_ARG_CHECK2("string-length", 2, argc);
  VBlob * str = VDecodeBlob(_str);
  if(!str || str->tag != VSTRING) VError("string-length: not a string");

  // not exposing the null terminal
  V_CALL2(VDecodeClosure(k), runtime, VEncodeInt(str->len - 1));
}

void VStringRef2(V_CORE_ARGS, VWORD k, VWORD _str, VWORD _i) {
  V_ARG_CHECK2("string-ref", 3, argc);
  VBlob * str = VDecodeBlob(_str);
  if(!str || str->tag != VSTRING) VError("string-ref: not a string");

  if(VWordType(_i) != VIMM_INT) VError("string-ref: not an int");
  long i = VDecodeInt(_i);
  // not exposing the null terminal
  if(!(0 <= i && i < str->len)) VError("string-ref: out of bounds");

  V_CALL2(VDecodeClosure(k), runtime, VEncodeChar(str->buf[i]));
}

void VStringSet2(V_CORE_ARGS, VWORD k, VWORD _str, VWORD _i, VWORD _c) {
  V_ARG_CHECK2("string-set!", 4, argc);
  VBlob * str = VDecodeBlob(_str);
  if(!str || str->tag != VSTRING) VError("string-set!: not a string");

  if(VWordType(_i) != VIMM_INT) VError("string-set!: not an int");
  long i = VDecodeInt(_i);
  // not exposing the null terminal
  if(!(0 <= i && i < str->len)) VError("string-set!: out of bounds");

  if(VWordType(_c) != VIMM_CHAR) VError("string-set!: not a char");

  char c = VDecodeChar(_c);
  str->buf[i] = c;

  V_CALL2(VDecodeClosure(k), runtime, VVOID);
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

void VStringSymbol2(V_CORE_ARGS, VWORD k, VWORD _str) {
  V_ARG_CHECK2("string->symbol", 2, argc);
  VBlob * str = VDecodeBlob(_str);
  if(!str || str->tag != VSTRING) VError("string->symbol: not a string: ~A~N", _str);

  VBlob * sym = V_ALLOCA_BLOB(str->len);
  VFillBlob(sym, VSYMBOL, str->len, str->buf);
  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(sym, VPOINTER_OTHER));
}
void VSymbolString2(V_CORE_ARGS, VWORD k, VWORD _sym) {
  V_ARG_CHECK2("symbol->string", 2, argc);
  VBlob * sym = VDecodeBlob(_sym);
  if(!sym || sym->tag != VSYMBOL) VError("symbol->string: not a symbol: ~A~N", _sym);

  VBlob * str = V_ALLOCA_BLOB(sym->len);
  VFillBlob(str, VSTRING, sym->len, sym->buf);
  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(str, VPOINTER_OTHER));
}

void VStringNumber2(V_CORE_ARGS, VWORD k, VWORD _str) {
  V_ARG_CHECK2("string->number", 2, argc);
  VBlob * str = VDecodeBlob(_str);
  if(!str || str->tag != VSTRING) VError("string->number: not a string: ~A~N", _str);

  if(str->len == 1)
    V_CALL2(VDecodeClosure(k), runtime, VFALSE);

  char * end = NULL;
  errno = 0;
  double d = strtod(str->buf, &end);
  if(errno) {
    errno = 0;
    V_CALL2(VDecodeClosure(k), runtime, VFALSE);
  }
  if(str->buf + str->len - 1 != end)
    V_CALL2(VDecodeClosure(k), runtime, VFALSE);

  // FIXME lazy but incorrect way to parse ints vs doubles, need to parse by checking for period
  // actually, it's probably correct but stupid, deliberate deviation incoming
  if(floor(d) == d && VINT_MIN <= d && d <= VINT_MAX) {
    V_CALL2(VDecodeClosure(k), runtime, VEncodeInt((vint)d));
  } else {
    V_CALL2(VDecodeClosure(k), runtime, VEncodeNumber(d));
  }
}

// chars

void VCharInt(VEnv * env) {
  V_ARG_CHECK("char->int", 2, env);
  VClosure * k = VDecodeClosure(env->vars[0]);
  if(VWordType(env->vars[1]) != VIMM_CHAR) VError("char->integer: not a char");
  V_TAIL_CALL(env, k, VEncodeInt((long)VDecodeChar(env->vars[1])));
}
void VCharInt2(V_CORE_ARGS, VWORD k, VWORD c) {
  V_ARG_CHECK2("char->int", 2, argc);
  if(VWordType(c) != VIMM_CHAR) VError("char->integer: not a char");
  V_CALL2(VDecodeClosure(k), runtime, VEncodeInt((long)VDecodeChar(c)));
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


void VDupStdout2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK2("dup-stdout", 1, argc);

  int fd = dup(fileno(stdout));
  FILE * f = fdopen(fd, "wb");
  VPort port = VMakePortStream(f, PFLAG_WRITE);
  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

void VDupStdin2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK2("dup-stdin", 1, argc);

  int fd = dup(fileno(stdin));
  FILE * f = fdopen(fd, "rb");
  VPort port = VMakePortStream(f, PFLAG_READ);
  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

void VDupStderr2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK2("dup-stderr", 1, argc);

  int fd = dup(fileno(stderr));
  FILE * f = fdopen(fd, "wb");
  VPort port = VMakePortStream(f, PFLAG_WRITE);
  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(&port, VPOINTER_OTHER));
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

static void VOpenStream2(VRuntime * runtime, VWORD k, VWORD path, char const * mode, unsigned flags) {
  VBlob * str = VDecodeBlob(path);
  if(!str || str->tag != VSTRING) VError("open-stream: not a string");
  FILE * f = fopen(str->buf, mode);
  if(!f) VError("open-stream: failed to open file `~Z`~N", str->buf);
  VPort port = VMakePortStream(f, flags);
  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(&port, VPOINTER_OTHER));
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

  V_CALL2(VDecodeClosure(k), runtime, VVOID);
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

}void VOpenOutputString2(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK2("open-output-string", 1, argc);
  FILE * f = tmpfile();
  VPort port = VMakePortStream(f, PFLAG_WRITE | PFLAG_OSTRING);
  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(&port, VPOINTER_OTHER));
}

void VGetOutputString2(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK2("get-output-string", 2, argc);
  VPort * port = (VPort*)VDecodePointer(_port);
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

  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(str, VPOINTER_OTHER));
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

void VReadChar2(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK2("read-char", 2, argc);
  VPort * port = (VPort*)VDecodePointer(_port);
  if(!port || port->tag != VPORT) VError("read-char: not a port ~S~N", _port);
  if(!(port->flags & PFLAG_READ)) VError("read-char: not an readable port ~S~N", _port);

  FILE * f = port->stream;
  char c = fgetc(f);
  if(c == EOF) {
    V_CALL2(VDecodeClosure(k), runtime, VEOF);
  } else {
    V_CALL2(VDecodeClosure(k), runtime, VEncodeChar((char)c));
  }
}

// FIXME only reads 256 char lines
void VReadLine2(V_CORE_ARGS, VWORD k, VWORD _port) {
  V_ARG_CHECK2("read-line", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc2)VReadLine2, runtime, statics, 2, argc, k, _port) {
    VPort * port = (VPort*)VDecodePointer(_port);
    if(!port || port->tag != VPORT) VError("read-line: not a port ~S~N", _port);
    if(!(port->flags & PFLAG_READ)) VError("read-line: not an readable port ~S~N", _port);

    FILE * f = port->stream;
    VBlob * str = alloca(sizeof(VBlob) + 256);
    str->tag = VSTRING;
    if(!fgets(str->buf, 256, f)) {
      V_CALL2(VDecodeClosure(k), runtime, VEOF);
    } else {
      size_t len = strlen(str->buf);
      if(len > 0 && str->buf[len-1] == '\n')
        len--;
      if(len > 0 && str->buf[len-1] == '\r')
        len--;
      str->buf[len] = '\0';
      str->len = len+1; // account for the null terminal
      V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(str, VPOINTER_OTHER));
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

void VDisplay2(V_CORE_ARGS, VWORD k, VWORD val, VWORD port) {
    V_ARG_CHECK2("display-word", 3, argc);
    FILE * f = ((VPort*)VDecodePointer(port))->stream;
    VDisplayWord(f, val, false);
    V_CALL2(VDecodeClosure(k), runtime, VVOID);
}
void VWrite2(V_CORE_ARGS, VWORD k, VWORD val, VWORD port) {
    V_ARG_CHECK2("write-word", 3, argc);
    FILE * f = ((VPort*)VDecodePointer(port))->stream;
    VDisplayWord(f, val, true);
    V_CALL2(VDecodeClosure(k), runtime, VVOID);
}
void VNewline2(V_CORE_ARGS, VWORD k, VWORD port) {
    V_ARG_CHECK2("newline", 2, argc);
    FILE * f = ((VPort*)VDecodePointer(port))->stream;
    fprintf(f, "\n");
    fflush(f);
    V_CALL2(VDecodeClosure(k), runtime, VVOID);
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
  unsigned nvars = env->num_vars;
  // fixme (values) will create an environment with extra space
  // so check before allocaing
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
    V_CALL2(VDecodeClosure(realk), runtime, ret);
  } else if(argc == 1) {
    // call/cc in a (begin)
    V_CALL2(VDecodeClosure(realk), runtime);
  } else {
    // nested call-with-values evil
    VClosure * realk_real = VDecodeClosure(realk);

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
  VClosure * proc = VDecodeClosure(_proc);
  
  VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[1]));
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = NULL;
  env->vars[0] = k;
  VClosure k_wrapped = VMakeClosure2((VFunc2)VCallCCLambda2, env);

  V_CALL2(proc, runtime, k, VEncodeClosure(&k_wrapped));
}

void VCallValuesK2(V_CORE_ARGS, ...) {
  VWORD k = statics->vars[0];
  VClosure * consumer = VDecodeClosure(statics->vars[1]);

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
  VClosure * producer = VDecodeClosure(_producer);

  VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[2]));
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = NULL;
  env->vars[0] = _k;
  env->vars[1] = _consumer;
  VClosure consume = VMakeClosure2((VFunc2)VCallValuesK2, env);

  V_CALL2(producer, runtime, VEncodeClosure(&consume));
}

void VApply2(V_CORE_ARGS, VWORD k, VWORD _proc, ...) {
  V_ARG_MIN2("apply", 3, argc);

    VClosure * proc = VDecodeClosure(_proc);

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


void VSystem2(V_CORE_ARGS, VWORD k, VWORD cmd) {
  V_ARG_CHECK2("system", 2, argc);

  VBlob * blob = VDecodeBlob(cmd);
  if(!blob || blob->tag != VSTRING) {
    VError("system: not a string ~S\n", cmd);
  }

  int ret = system(blob->buf);

  V_CALL2(VDecodeClosure(k), runtime, VEncodeInt(ret));
}

static void VOpenProcess2(V_CORE_ARGS, VWORD k, VWORD cmd, char const * mode, unsigned flags) {
  VBlob * blob = VDecodeBlob(cmd);
  if(!blob || blob->tag != VSTRING) {
    VError("open-io-process: not a string ~S\n", cmd);
  }

  FILE * f = popen(blob->buf, mode);

  if(!f) VError("open-io-process: failed to open process `~Z`~N", blob->buf);
  VPort port = VMakePortStream(f, flags | PFLAG_PROCESS);
  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(&port, VPOINTER_OTHER));
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

  VBlob * prefix = VDecodeBlob(_prefix);
  if(!prefix || prefix->tag != VSTRING) {
    VError("make-temporary-file: not a string ~S\n", _prefix);
  }

  // suffix may be annoying to do on windings
  VBlob * suffix = NULL;
  if(argc == 3) {
    va_list args; va_start(args, _prefix);
    VWORD _suffix = va_arg(args, VWORD);
    suffix = VDecodeBlob(_suffix);
    va_end(args);
    if(!suffix || suffix->tag != VSTRING) {
      VError("make-temporary-file: not a string ~S\n", _suffix);
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

  V_CALL2(VDecodeClosure(k), runtime, VEncodePointer(str, VPOINTER_OTHER));
}
