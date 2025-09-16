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


static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D22 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0hash_V20" };
VWEAK VWORD _V0random__advance_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0random__advance_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "random-advance!" };
VWEAK VWORD _V0random__sample__float_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0random__sample__float_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "random-sample-float!" };
VWEAK VWORD _V0random__sample_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0random__sample_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "random-sample!" };
VWEAK VWORD _V0random__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0random__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "random-copy" };
VWEAK VWORD _V0make__random;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__random = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-random" };
VWEAK VWORD _V40_V10vcore_Drandom__advance_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__advance_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomAdvance, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__sample__float_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__sample__float_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSampleFloat, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__copy;
VWEAK VClosure _VW_V40_V10vcore_Drandom__copy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomCopy, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__random;
VWEAK VClosure _VW_V40_V10vcore_Dmake__random = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeRandom, NULL };
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
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0hash_V0random__sample_B);
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0hash_V0random__sample_B" #t (2 (##vcore.random-sample! (bruijn ##.k.11 0 0) (bruijn ##.rng.6 0 1))) (3 (##vcore.random-sample-bounded! (bruijn ##.k.12 0 0) (bruijn ##.rng.7 0 1) (bruijn ##.end.8 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash_V0random__sample_B, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.random-sample! (bruijn ##.k.11 0 0) (bruijn ##.rng.6 0 1))
    VCallFuncWithGC(runtime, (VFunc)VRandomSample, 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.random-sample-bounded! (bruijn ##.k.12 0 0) (bruijn ##.rng.7 0 1) (bruijn ##.end.8 0 2))
    VCallFuncWithGC(runtime, (VFunc)VRandomSampleBounded, 3,
      _var0,
      _var1,
      _var2);
}
void _V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0hash_V0random__sample_B, @function\n"
#endif
".globl _V50_V0vanity_V0hash_V0random__sample_B\n"
"_V50_V0vanity_V0hash_V0random__sample_B:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0hash_V0random__sample_B\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0hash_V0random__sample_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0hash_V0random__sample_B\n"
);
static void _V0vanity_V0hash_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 5 ((##intrinsic ##vcore.make-random) (##intrinsic ##vcore.random-copy) (close "_V50_V0vanity_V0hash_V0random__sample_B") (##intrinsic ##vcore.random-sample-float!) (##intrinsic ##vcore.random-advance!)) ((bruijn ##.k.10 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'make-random (bruijn ##.make-random.1 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-copy (bruijn ##.random-copy.2 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-sample! (bruijn ##.random-sample!.3 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-sample-float! (bruijn ##.random-sample-float!.4 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-advance! (bruijn ##.random-advance!.5 0 4)) '())))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _V40_V10vcore_Dmake__random;
    self->vars[1] = _V40_V10vcore_Drandom__copy;
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash_V0random__sample_B, self))));
    self->vars[3] = _V40_V10vcore_Drandom__sample__float_B;
    self->vars[4] = _V40_V10vcore_Drandom__advance_B;
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__random,
        self->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0random__copy,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0random__sample_B,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0random__sample__float_B,
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0random__advance_B,
        self->vars[4]),
        VNULL))))));
    }
}
static void _V0vanity_V0hash_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0hash_V20_V0k1) (##string ##.string.22))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D22.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0hash_V20 = (VFunc)_V0vanity_V0hash_V20_V0lambda1;
