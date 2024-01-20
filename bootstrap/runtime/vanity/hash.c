/* Copyright 2023 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Compiler.
 *
 * The Vanity Scheme Compiler is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of the
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
 * This work is published with additional permission under GNU GPL
 * Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
 * should have been included with the Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include <stdarg.h>
static struct { VBlob sym; char bytes[21]; } _V10string_D20 = { { VSTRING, 21 }, "_V0vanity_V0hash_V20" };
VWEAK VWORD _V40_V10vcore_Dmake__random;VWEAK VClosure _VW_V40_V10vcore_Dmake__random = { VCLOSURE, (VFunc)VMakeRandom, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__copy;VWEAK VClosure _VW_V40_V10vcore_Drandom__copy = { VCLOSURE, (VFunc)VRandomCopy, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__sample__float_B;VWEAK VClosure _VW_V40_V10vcore_Drandom__sample__float_B = { VCLOSURE, (VFunc)VRandomSampleFloat, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__advance_B;VWEAK VClosure _VW_V40_V10vcore_Drandom__advance_B = { VCLOSURE, (VFunc)VRandomAdvance, NULL };
VWEAK VWORD _V0random__advance_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0random__advance_B = { { VSYMBOL, 16 }, "random-advance!" };
VWEAK VWORD _V0random__sample__float_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0random__sample__float_B = { { VSYMBOL, 21 }, "random-sample-float!" };
VWEAK VWORD _V0random__sample_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0random__sample_B = { { VSYMBOL, 15 }, "random-sample!" };
VWEAK VWORD _V0random__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0random__copy = { { VSYMBOL, 12 }, "random-copy" };
VWEAK VWORD _V0make__random;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__random = { { VSYMBOL, 12 }, "make-random" };
static __attribute__((constructor)) void VDllMain1() {
  _V40_V10vcore_Dmake__random = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__random", &_VW_V40_V10vcore_Dmake__random), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__copy = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__copy", &_VW_V40_V10vcore_Drandom__copy), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__sample__float_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample__float_B", &_VW_V40_V10vcore_Drandom__sample__float_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__advance_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__advance_B", &_VW_V40_V10vcore_Drandom__advance_B), VPOINTER_CLOSURE);
  _V0random__advance_B = VEncodePointer(VLookupConstant("_V0random__advance_B", &_VW_V0random__advance_B), VPOINTER_OTHER);
  _V0random__sample__float_B = VEncodePointer(VLookupConstant("_V0random__sample__float_B", &_VW_V0random__sample__float_B), VPOINTER_OTHER);
  _V0random__sample_B = VEncodePointer(VLookupConstant("_V0random__sample_B", &_VW_V0random__sample_B), VPOINTER_OTHER);
  _V0random__copy = VEncodePointer(VLookupConstant("_V0random__copy", &_VW_V0random__copy), VPOINTER_OTHER);
  _V0make__random = VEncodePointer(VLookupConstant("_V0make__random", &_VW_V0make__random), VPOINTER_OTHER);
}
static void _V0vanity_V0hash_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0hash_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0hash_V20_k6, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.3 5 0) (##inline ##sys.cons (##inline ##sys.cons (quote make-random) (bruijn make-random 5 1)) (##inline ##sys.cons (##inline ##sys.cons (quote random-copy) (bruijn random-copy 5 2)) (##inline ##sys.cons (##inline ##sys.cons (quote random-sample!) (bruijn random-sample! 5 3)) (##inline ##sys.cons (##inline ##sys.cons (quote random-sample-float!) (bruijn random-sample-float! 5 4)) (##inline ##sys.cons (##inline ##sys.cons (quote random-advance!) (bruijn random-advance! 5 5)) (quote ())))))))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0make__random,
        VGetArg(upenv, 5-1, 1)),
        VInlineCons(
        VInlineCons(
        _V0random__copy,
        VGetArg(upenv, 5-1, 2)),
        VInlineCons(
        VInlineCons(
        _V0random__sample_B,
        VGetArg(upenv, 5-1, 3)),
        VInlineCons(
        VInlineCons(
        _V0random__sample__float_B,
        VGetArg(upenv, 5-1, 4)),
        VInlineCons(
        VInlineCons(
        _V0random__advance_B,
        VGetArg(upenv, 5-1, 5)),
        VNULL))))));
 }
}
static void _V0vanity_V0hash_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0hash_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0hash_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0hash_V20_k6) (bruijn random-advance! 4 5) (##intrinsic ##vcore.random-advance!))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0hash_V20_k6, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      _V40_V10vcore_Drandom__advance_B
    );
 }
}
static void _V0vanity_V0hash_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0hash_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0hash_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0hash_V20_k5) (bruijn random-sample-float! 3 4) (##intrinsic ##vcore.random-sample-float!))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0hash_V20_k5, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      _V40_V10vcore_Drandom__sample__float_B
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0random__sample_B_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0random__sample_B_lambda4 #t (2 (##vcore.random-sample! (bruijn ##k.18 0 0) (bruijn rng 0 1))) (3 (##vcore.random-sample-bounded! (bruijn ##k.19 0 0) (bruijn rng 0 1) (bruijn end 0 2))))
 VError("Not enough arguments to _V0random__sample_B_lambda4, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0random__sample_B_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0random__sample_B_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.random-sample! (bruijn ##k.18 0 0) (bruijn rng 0 1))
    V_CALL_FUNC(VRandomSample, NULL, runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V0random__sample_B_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0random__sample_B_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (##vcore.random-sample-bounded! (bruijn ##k.19 0 0) (bruijn rng 0 1) (bruijn end 0 2))
    V_CALL_FUNC(VRandomSampleBounded, NULL, runtime,
      _var0,
      _var1,
      _var2);
 }
}
void _V0random__sample_B_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0random__sample_B_lambda4:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0random__sample_B_lambda4\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0random__sample_B_lambda4\n"
"    jmp _V20CaseError__V0random__sample_B_lambda4\n"
);
static void _V0vanity_V0hash_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0hash_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0hash_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0hash_V20_k4) (bruijn random-sample! 2 3) (close _V0random__sample_B_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0hash_V20_k4, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0random__sample_B_lambda4, env)})
    );
 }
}
static void _V0vanity_V0hash_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0hash_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0hash_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0hash_V20_k3) (bruijn random-copy 1 2) (##intrinsic ##vcore.random-copy))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0hash_V20_k3, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      _V40_V10vcore_Drandom__copy
    );
 }
}
static void _V0vanity_V0hash_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0hash_V20_lambda3, runtime, upenv, 6, argc, _var0, _var1, _var2, _var3, _var4, _var5) {
  struct { VEnv env; VWORD argv[6]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 6; env->var_len = 6; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  // (set! (close _V0vanity_V0hash_V20_k2) (bruijn make-random 0 1) (##intrinsic ##vcore.make-random))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0hash_V20_k2, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      _V40_V10vcore_Dmake__random
    );
 }
}
static void _V0vanity_V0hash_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0hash_V20_lambda2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0hash_V20_lambda3) (bruijn ##k.2 0 0) #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0hash_V20_lambda3, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0hash_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0hash_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0hash_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0hash_V20_lambda2) (bruijn ##k.1 1 0))
V_CALL_FUNC(_V0vanity_V0hash_V20_lambda2, env, runtime,
      upenv->vars[0]);
 }
}
static void _V0vanity_V0hash_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0hash_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0hash_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0hash_V20_k1) (##string ##string.20))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0hash_V20_k1, env)}),
      VEncodePointer(&_V10string_D20.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0hash_V20 = (VFunc)_V0vanity_V0hash_V20_lambda1;
