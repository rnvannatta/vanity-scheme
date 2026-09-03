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
VBlob * VInternSymbol(int hash, VBlob * sym);

V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0hash;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D33 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0hash_V20" };
VWEAK VWORD _V0random__advance_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0random__advance_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "random-advance!" };
VWEAK VWORD _V0random__sample__float_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0random__sample__float_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "random-sample-float!" };
VWEAK VWORD _V0random__sample_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0random__sample_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "random-sample!" };
VWEAK VWORD _V0random__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0random__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "random-copy" };
VWEAK VWORD _V0make__random;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__random = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-random" };
VWEAK VWORD _V40_V10vcore_Dmake__random;
VWEAK VClosure _VW_V40_V10vcore_Dmake__random = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeRandom, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__copy;
VWEAK VClosure _VW_V40_V10vcore_Drandom__copy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomCopy, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__sample__float_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__sample__float_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSampleFloat, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__advance_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__advance_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomAdvance, NULL };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0hash_V0random__sample_B);
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0hash_V0random__sample_B" #t #f (2 (##vcore.random-sample! (bruijn ##.%k.11 0 0) (bruijn ##.rng.6 0 1))) (3 (##vcore.random-sample-bounded! (bruijn ##.%k.12 0 0) (bruijn ##.rng.7 0 1) (bruijn ##.end.8 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash_V0random__sample_B, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##vcore.random-sample! (bruijn ##.%k.11 0 0) (bruijn ##.rng.6 0 1))
    VCallFuncWithGC(runtime, (VFunc)VRandomSample, 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##vcore.random-sample-bounded! (bruijn ##.%k.12 0 0) (bruijn ##.rng.7 0 1) (bruijn ##.end.8 0 2))
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
static void _V0vanity_V0hash_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc) {
 if(argc != 0) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash_V20_V0lambda2, got ~D~N"
  "-- expected 0~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[0]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 0, 0, statics);
  // (##letrec (vanity hash) 5 ((##intrinsic ##vcore.random-advance!) (##intrinsic ##vcore.random-sample-float!) (close "_V50_V0vanity_V0hash_V0random__sample_B" (vanity hash)) (##intrinsic ##vcore.random-copy) (##intrinsic ##vcore.make-random)) (basic-block 10 10 (##.%x.23 ##.%x.24 ##.%x.25 ##.%x.26 ##.%x.27 ##.%x.28 ##.%x.29 ##.%x.30 ##.%x.31 ##.%r.32) ((##vcore.cons 'make-random (bruijn ##.make-random.5 1 4)) (##vcore.cons 'random-copy (bruijn ##.random-copy.4 1 3)) (##vcore.cons 'random-sample! (bruijn ##.random-sample!.3 1 2)) (##vcore.cons 'random-sample-float! (bruijn ##.random-sample-float!.2 1 1)) (##vcore.cons 'random-advance! (bruijn ##.random-advance!.1 1 0)) (##vcore.cons (bruijn ##.%x.27 0 4) '()) (##vcore.cons (bruijn ##.%x.26 0 3) (bruijn ##.%x.28 0 5)) (##vcore.cons (bruijn ##.%x.25 0 2) (bruijn ##.%x.29 0 6)) (##vcore.cons (bruijn ##.%x.24 0 1) (bruijn ##.%x.30 0 7)) (##vcore.cons (bruijn ##.%x.23 0 0) (bruijn ##.%x.31 0 8))) ((bruijn ##.%k.10 4 0) (bruijn ##.%r.32 0 9))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    _V60_V0vanity_V0hash = self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _V40_V10vcore_Drandom__advance_B;
    self->vars[1] = _V40_V10vcore_Drandom__sample__float_B;
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash_V0random__sample_B, _V60_V0vanity_V0hash))));
    self->vars[3] = _V40_V10vcore_Drandom__copy;
    self->vars[4] = _V40_V10vcore_Dmake__random;
    VRegisterStaticEnv("_V0vanity_V0hash_V20", &_V60_V0vanity_V0hash);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[10]; } container;
    self = &container.self;
    VInitEnv(self, 10, 10, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0make__random,
      statics->vars[4]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0random__copy,
      statics->vars[3]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0random__sample_B,
      statics->vars[2]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0random__sample__float_B,
      statics->vars[1]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0random__advance_B,
      statics->vars[0]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[7]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[8]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[9]);
    }
    }
}
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
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0hash_V20_V0lambda2) (##string ##.string.33) (bruijn ##.%x.22 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D33.sym, VPOINTER_OTHER),
      _var0);
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
  // (##vcore.vector (close _V0vanity_V0hash_V20_V0k1))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash_V20_V0k1, self)))));
}
VFunc _V0vanity_V0hash_V20 = (VFunc)_V0vanity_V0hash_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0random__advance_B = VEncodePointer(VInternSymbol(-1678545240, &_VW_V0random__advance_B.sym), VPOINTER_OTHER);
  _V0random__sample__float_B = VEncodePointer(VInternSymbol(-594491265, &_VW_V0random__sample__float_B.sym), VPOINTER_OTHER);
  _V0random__sample_B = VEncodePointer(VInternSymbol(-1854759504, &_VW_V0random__sample_B.sym), VPOINTER_OTHER);
  _V0random__copy = VEncodePointer(VInternSymbol(790874858, &_VW_V0random__copy.sym), VPOINTER_OTHER);
  _V0make__random = VEncodePointer(VInternSymbol(1013818122, &_VW_V0make__random.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__random = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__random", &_VW_V40_V10vcore_Dmake__random), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__copy = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__copy", &_VW_V40_V10vcore_Drandom__copy), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__sample__float_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample__float_B", &_VW_V40_V10vcore_Drandom__sample__float_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__advance_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__advance_B", &_VW_V40_V10vcore_Drandom__advance_B), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
