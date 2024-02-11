/* Copyright 2023-2024 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Compiler.
 *
 * The Vanity Scheme Compiler is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 2 of the
 * License, or (at your option) any later version.
 * 
 * The Vanity Scheme Compiler is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with the Vanity Scheme Compiler.
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
#include <stdarg.h>
static struct { VBlob sym; char bytes[21]; } _V10string_D31 = { { .base = { .tag = VSTRING }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[23]; } _V10string_D30 = { { .base = { .tag = VSTRING }, 23 }, "_V0vanity_V0assert_V20" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL }, 4 }, "cdr" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL }, 4 }, "car" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL }, 4 }, "not" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL }, 6 }, "null\?" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL }, 7 }, "equal\?" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL }, 19 }, "current-error-port" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL }, 7 }, "format" };
VWEAK VWORD _V0exit;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0exit = { { .base = { .tag = VSYMBOL }, 5 }, "exit" };
static struct { VBlob sym; char bytes[41]; } _V10string_D29 = { { .base = { .tag = VSTRING }, 41 }, "Assertion failed: ~A is not equal to ~A\n" };
VWEAK VWORD _V0assert__equal;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0assert__equal = { { .base = { .tag = VSYMBOL }, 13 }, "assert-equal" };
static __attribute__((constructor)) void VDllMain1() {
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VLookupConstant("_V0current__error__port", &_VW_V0current__error__port), VPOINTER_OTHER);
  _V0format = VEncodePointer(VLookupConstant("_V0format", &_VW_V0format), VPOINTER_OTHER);
  _V0exit = VEncodePointer(VLookupConstant("_V0exit", &_VW_V0exit), VPOINTER_OTHER);
  _V0assert__equal = VEncodePointer(VLookupConstant("_V0assert__equal", &_VW_V0assert__equal), VPOINTER_OTHER);
}
static void _V0vanity_V0assert_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k11, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.3 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote assert-equal) (bruijn assert-equal 1 1)) (quote ())))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
        VInlineCons(
        _V0assert__equal,
        upenv->vars[1]),
        VNULL));
 }
}
static void _V0assert__equal_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assert__equal_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_k15, runtime, upenv, 1, argc, _var0) {
  // ((bruijn exit 6 8) (bruijn ##k.6 4 0) 1)
V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      upenv->up->up->up->vars[0],
      VEncodeInt(1l));
 }
}
static void _V0assert__equal_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assert__equal_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn format 5 7) (close _V0assert__equal_k15) (bruijn ##x.9 0 0) (##string ##string.29) (bruijn x 3 1) (bruijn y 3 2))
V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_k15, env)}),
      _var0,
      VEncodePointer(&_V10string_D29.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]);
 }
}
static void _V0assert__equal_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assert__equal_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.7 0 0) ((bruijn current-error-port 4 6) (close _V0assert__equal_k14)) ((bruijn ##k.6 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_k14, env)}));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0assert__equal_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assert__equal_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 3 3) (close _V0assert__equal_k13) (bruijn ##x.10 0 0))
V_CALL(upenv->up->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_k13, env)}),
      _var0);
 }
}
static void _V0assert__equal_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0assert__equal_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_k16, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.12 1 0) (bruijn rest 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2]);
 }
}
static void _V0loop_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k21, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.14 5 0) (bruijn ##x.17 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0loop_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 8 1) (close _V0loop_k21) (bruijn rest 4 1))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k21, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0loop_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assert-equal 6 1) (close _V0loop_k20) (bruijn x 5 1) (bruijn ##x.18 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k20, env)}),
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.15 0 0) ((bruijn car 6 2) (close _V0loop_k19) (bruijn rest 2 1)) ((bruijn ##k.14 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k19, env)}),
      upenv->up->vars[1]);
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 5 3) (close _V0loop_k18) (bruijn ##x.19 0 0))
V_CALL(VGetArg(upenv, 5-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k18, env)}),
      _var0);
 }
}
static void _V0loop_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 4 4) (close _V0loop_k17) (bruijn rest 0 1))
V_CALL(upenv->up->up->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k17, env)}),
      _var1);
 }
}
static void _V0assert__equal_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0assert__equal_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0assert__equal_k16) (bruijn loop 0 1) (close _V0loop_lambda6))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_k16, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda6, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0assert__equal_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0assert__equal_lambda4 #t (3 ((bruijn equal? 2 5) (close _V0assert__equal_k12) (bruijn x 0 1) (bruijn y 0 2))) (2 + ((close _V0assert__equal_lambda5) (bruijn ##k.11 0 0) #f)))
 VError("Not enough arguments to _V0assert__equal_lambda4, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0assert__equal_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0assert__equal_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn equal? 2 5) (close _V0assert__equal_k12) (bruijn x 0 1) (bruijn y 0 2))
V_CALL(upenv->up->vars[5], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_k12, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V0assert__equal_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0assert__equal_lambda4, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((close _V0assert__equal_lambda5) (bruijn ##k.11 0 0) #f)
V_CALL_FUNC(_V0assert__equal_lambda5, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
void _V0assert__equal_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0assert__equal_lambda4:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0assert__equal_lambda4\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case1__V0assert__equal_lambda4\n"
"    jmp _V20CaseError__V0assert__equal_lambda4\n"
);
static void _V0vanity_V0assert_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0vanity_V0assert_V20_k11) (bruijn assert-equal 0 1) (close _V0assert__equal_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k11, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assert__equal_lambda4, env)})
    );
 }
}
static void _V0vanity_V0assert_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_lambda2, runtime, upenv, 9, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8) {
  struct { VEnv env; VWORD argv[9]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 9, 9, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  // ((close _V0vanity_V0assert_V20_lambda3) (bruijn ##k.2 0 0) #f)
V_CALL_FUNC(_V0vanity_V0assert_V20_lambda3, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0vanity_V0assert_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0assert_V20_lambda2) (bruijn ##k.1 10 0) (bruijn ##x.20 7 0) (bruijn ##x.21 6 0) (bruijn ##x.22 5 0) (bruijn ##x.23 4 0) (bruijn ##x.24 3 0) (bruijn ##x.25 2 0) (bruijn ##x.26 1 0) (bruijn ##x.27 0 0))
V_CALL_FUNC(_V0vanity_V0assert_V20_lambda2, env, runtime,
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0assert_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0assert_V20_k10) (quote exit))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k10, env)}),
      _V0exit);
 }
}
static void _V0vanity_V0assert_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0assert_V20_k9) (quote format))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k9, env)}),
      _V0format);
 }
}
static void _V0vanity_V0assert_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0assert_V20_k8) (quote current-error-port))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k8, env)}),
      _V0current__error__port);
 }
}
static void _V0vanity_V0assert_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0assert_V20_k7) (quote equal?))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k7, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0assert_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0assert_V20_k6) (quote null?))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k6, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0assert_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0assert_V20_k5) (quote not))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k5, env)}),
      _V0not);
 }
}
static void _V0vanity_V0assert_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0assert_V20_k4) (quote car))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k4, env)}),
      _V0car);
 }
}
static void _V0vanity_V0assert_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0assert_V20_k3) (quote cdr))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k3, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0assert_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0assert_V20_k2) (##string ##string.30) (bruijn ##x.28 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k2, env)}),
      VEncodePointer(&_V10string_D30.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0assert_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0assert_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0assert_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0assert_V20_k1) (##string ##string.31))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0assert_V20_k1, env)}),
      VEncodePointer(&_V10string_D31.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0assert_V20 = (VFunc)_V0vanity_V0assert_V20_lambda1;
