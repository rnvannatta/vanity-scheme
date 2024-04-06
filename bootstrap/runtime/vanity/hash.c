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
static struct { VBlob sym; char bytes[21]; } _V10string_D14 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0hash_V20" };
VWEAK VWORD _V0random__advance_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0random__advance_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "random-advance!" };
VWEAK VWORD _V0random__sample__float_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0random__sample__float_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "random-sample-float!" };
VWEAK VWORD _V0random__sample_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0random__sample_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "random-sample!" };
VWEAK VWORD _V0random__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0random__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "random-copy" };
VWEAK VWORD _V0make__random;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__random = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-random" };
VWEAK VWORD _V40_V10vcore_Drandom__advance_B;VWEAK VClosure _VW_V40_V10vcore_Drandom__advance_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomAdvance, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__sample__float_B;VWEAK VClosure _VW_V40_V10vcore_Drandom__sample__float_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSampleFloat, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__copy;VWEAK VClosure _VW_V40_V10vcore_Drandom__copy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomCopy, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__random;VWEAK VClosure _VW_V40_V10vcore_Dmake__random = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeRandom, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0random__advance_B = VEncodePointer(VLookupConstant("_V0random__advance_B", &_VW_V0random__advance_B), VPOINTER_OTHER);
  _V0random__sample__float_B = VEncodePointer(VLookupConstant("_V0random__sample__float_B", &_VW_V0random__sample__float_B), VPOINTER_OTHER);
  _V0random__sample_B = VEncodePointer(VLookupConstant("_V0random__sample_B", &_VW_V0random__sample_B), VPOINTER_OTHER);
  _V0random__copy = VEncodePointer(VLookupConstant("_V0random__copy", &_VW_V0random__copy), VPOINTER_OTHER);
  _V0make__random = VEncodePointer(VLookupConstant("_V0make__random", &_VW_V0make__random), VPOINTER_OTHER);
  _V40_V10vcore_Drandom__advance_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__advance_B", &_VW_V40_V10vcore_Drandom__advance_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__sample__float_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample__float_B", &_VW_V40_V10vcore_Drandom__sample__float_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__copy = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__copy", &_VW_V40_V10vcore_Drandom__copy), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__random = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__random", &_VW_V40_V10vcore_Dmake__random), VPOINTER_CLOSURE);
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0hash_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0hash_V20_lambda2 #t (2 (##vcore.random-sample! (bruijn ##k.3 0 0) (bruijn rng 0 1))) (3 (##vcore.random-sample-bounded! (bruijn ##k.4 0 0) (bruijn rng 0 1) (bruijn end 0 2))))
 VError("Not enough arguments to _V0vanity_V0hash_V20_lambda2, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0hash_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0hash_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0hash_V20_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.random-sample! (bruijn ##k.3 0 0) (bruijn rng 0 1))
    V_CALL_FUNC(VRandomSample, NULL, runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0hash_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0hash_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0hash_V20_lambda2, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (##vcore.random-sample-bounded! (bruijn ##k.4 0 0) (bruijn rng 0 1) (bruijn end 0 2))
    V_CALL_FUNC(VRandomSampleBounded, NULL, runtime,
      _var0,
      _var1,
      _var2);
 }
}
void _V0vanity_V0hash_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0hash_V20_lambda2, @function\n"
#endif
"_V0vanity_V0hash_V20_lambda2:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0vanity_V0hash_V20_lambda2\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0vanity_V0hash_V20_lambda2\n"
"    jmp _V20CaseError__V0vanity_V0hash_V20_lambda2\n"
);
static void _V0vanity_V0hash_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hash_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0hash_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0hash_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 5 ((##intrinsic ##vcore.make-random) (##intrinsic ##vcore.random-copy) (close _V0vanity_V0hash_V20_lambda2) (##intrinsic ##vcore.random-sample-float!) (##intrinsic ##vcore.random-advance!)) ((bruijn ##k.2 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'make-random (bruijn make-random 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-copy (bruijn random-copy 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-sample! (bruijn random-sample! 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-sample-float! (bruijn random-sample-float! 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-advance! (bruijn random-advance! 0 4)) '())))))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[5]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 5, 5, upenv);
    env->vars[0] = _V40_V10vcore_Dmake__random;
    env->vars[1] = _V40_V10vcore_Drandom__copy;
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0hash_V20_lambda2, env)});
    env->vars[3] = _V40_V10vcore_Drandom__sample__float_B;
    env->vars[4] = _V40_V10vcore_Drandom__advance_B;
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        VInlineCons(
        _V0make__random,
        env->vars[0]),
        VInlineCons(
        VInlineCons(
        _V0random__copy,
        env->vars[1]),
        VInlineCons(
        VInlineCons(
        _V0random__sample_B,
        env->vars[2]),
        VInlineCons(
        VInlineCons(
        _V0random__sample__float_B,
        env->vars[3]),
        VInlineCons(
        VInlineCons(
        _V0random__advance_B,
        env->vars[4]),
        VNULL))))));
    }
 }
}
static void _V0vanity_V0hash_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hash_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0hash_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0hash_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0hash_V20_k1) (##string ##string.14))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0hash_V20_k1, env)}),
      VEncodePointer(&_V10string_D14.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0hash_V20 = (VFunc)_V0vanity_V0hash_V20_lambda1;
