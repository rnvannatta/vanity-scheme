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

VWEAK VWORD _V40_V10vcore_Dmake__random;
VWEAK VClosure _VW_V40_V10vcore_Dmake__random = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeRandom, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__copy;
VWEAK VClosure _VW_V40_V10vcore_Drandom__copy = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomCopy, NULL };
static VPair _V10_Dpair_D67 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D66 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D65 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D64 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D63 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D62 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D61 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D60 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0make__random;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__random = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-random" };
VWEAK VWORD _V0random__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0random__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "random-copy" };
VWEAK VWORD _V0random__sample__float_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0random__sample__float_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "random-sample-float!" };
VWEAK VWORD _V0random__advance_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0random__advance_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "random-advance!" };
static VPair _V10_Dpair_D59 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D58 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D57 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D56 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D55 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D54 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0end;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "end" };
static VPair _V10_Dpair_D53 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D52 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0rng;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0rng = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "rng" };
static VPair _V10_Dpair_D51 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D50 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D49 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0random__sample_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0random__sample_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "random-sample!" };
VWEAK VWORD _V0hash;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0hash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "hash" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
VWEAK VWORD _V40_V10vcore_Drandom__sample__float_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__sample__float_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomSampleFloat, NULL };
VWEAK VWORD _V40_V10vcore_Drandom__advance_B;
VWEAK VClosure _VW_V40_V10vcore_Drandom__advance_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRandomAdvance, NULL };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D48 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0hash_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D47 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D46 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D45 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D44 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D43 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D42 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D41 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D40 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D39 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D38 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D37 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D36 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D35 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0hash_V0random__sample_B);
static void _V0vanity_V0hash_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hash_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.11 1 0) (##string ##.string.48) (bruijn ##.%x.12 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D48.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0hash_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hash_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash_V20_V0lambda2, got ~D~N"
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
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0hash_V0random__sample_B" #t (##pair ##.pair.67) (2 (##vcore.random-sample! (bruijn ##.%k.14 0 0) (bruijn ##.rng.6 0 1))) (3 (##vcore.random-sample-bounded! (bruijn ##.%k.15 0 0) (bruijn ##.rng.7 0 1) (bruijn ##.end.8 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash_V0random__sample_B, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0hash_V0random__sample_B" };
 VRecordCall2(runtime, &dbg);
  // (##vcore.random-sample! (bruijn ##.%k.14 0 0) (bruijn ##.rng.6 0 1))
    VCallFuncWithGC(runtime, (VFunc)VRandomSample, 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0hash_V0random__sample_B" };
 VRecordCall2(runtime, &dbg);
  // (##vcore.random-sample-bounded! (bruijn ##.%k.15 0 0) (bruijn ##.rng.7 0 1) (bruijn ##.end.8 0 2))
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
static void _V0vanity_V0hash_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hash_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash_V20_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##letrec (vanity hash) 5 ((##intrinsic ##vcore.random-advance!) (##intrinsic ##vcore.random-sample-float!) (close "_V50_V0vanity_V0hash_V0random__sample_B" (vanity hash)) (##intrinsic ##vcore.random-copy) (##intrinsic ##vcore.make-random)) (basic-block 10 10 (##.%x.25 ##.%x.26 ##.%x.27 ##.%x.28 ##.%x.29 ##.%x.30 ##.%x.31 ##.%x.32 ##.%x.33 ##.%r.34) ((##vcore.cons 'make-random (bruijn ##.make-random.5 1 4)) (##vcore.cons 'random-copy (bruijn ##.random-copy.4 1 3)) (##vcore.cons 'random-sample! (bruijn ##.random-sample!.3 1 2)) (##vcore.cons 'random-sample-float! (bruijn ##.random-sample-float!.2 1 1)) (##vcore.cons 'random-advance! (bruijn ##.random-advance!.1 1 0)) (##vcore.cons (bruijn ##.%x.29 0 4) '()) (##vcore.cons (bruijn ##.%x.28 0 3) (bruijn ##.%x.30 0 5)) (##vcore.cons (bruijn ##.%x.27 0 2) (bruijn ##.%x.31 0 6)) (##vcore.cons (bruijn ##.%x.26 0 1) (bruijn ##.%x.32 0 7)) (##vcore.cons (bruijn ##.%x.25 0 0) (bruijn ##.%x.33 0 8))) ((bruijn ##.%k.13 2 0) (bruijn ##.%r.34 0 9))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[9]);
    }
    }
}
static void _V0vanity_V0hash_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hash_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.10 0 0) (close _V0vanity_V0hash_V20_V0lambda2) (close _V0vanity_V0hash_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0hash_V20 = (VFunc)_V0vanity_V0hash_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0make__random = VEncodePointer(VInternSymbol(1013818122, &_VW_V0make__random.sym), VPOINTER_OTHER);
  _V0random__copy = VEncodePointer(VInternSymbol(790874858, &_VW_V0random__copy.sym), VPOINTER_OTHER);
  _V0random__sample__float_B = VEncodePointer(VInternSymbol(-594491265, &_VW_V0random__sample__float_B.sym), VPOINTER_OTHER);
  _V0random__advance_B = VEncodePointer(VInternSymbol(-1678545240, &_VW_V0random__advance_B.sym), VPOINTER_OTHER);
  _V0end = VEncodePointer(VInternSymbol(1592199522, &_VW_V0end.sym), VPOINTER_OTHER);
  _V0rng = VEncodePointer(VInternSymbol(1388674199, &_VW_V0rng.sym), VPOINTER_OTHER);
  _V0random__sample_B = VEncodePointer(VInternSymbol(-1854759504, &_VW_V0random__sample_B.sym), VPOINTER_OTHER);
  _V0hash = VEncodePointer(VInternSymbol(827081031, &_VW_V0hash.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dmake__random = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__random", &_VW_V40_V10vcore_Dmake__random), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__copy = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__copy", &_VW_V40_V10vcore_Drandom__copy), VPOINTER_CLOSURE);
  _V10_Dpair_D67.first = VEncodePointer(&_V10_Dpair_D59, VPOINTER_PAIR);
  _V10_Dpair_D67.rest = VEncodePointer(&_V10_Dpair_D66, VPOINTER_PAIR);
  _V10_Dpair_D66.first = VEncodePointer(&_V10_Dpair_D65, VPOINTER_PAIR);
  _V10_Dpair_D66.rest = VNULL;
  _V10_Dpair_D65.first = VEncodePointer(&_V10_Dpair_D64, VPOINTER_PAIR);
  _V10_Dpair_D65.rest = VEncodePointer(&_V10_Dpair_D45, VPOINTER_PAIR);
  _V10_Dpair_D64.first = _V0random__advance_B;
  _V10_Dpair_D64.rest = VEncodePointer(&_V10_Dpair_D63, VPOINTER_PAIR);
  _V10_Dpair_D63.first = _V0random__sample__float_B;
  _V10_Dpair_D63.rest = VEncodePointer(&_V10_Dpair_D62, VPOINTER_PAIR);
  _V10_Dpair_D62.first = _V0random__sample_B;
  _V10_Dpair_D62.rest = VEncodePointer(&_V10_Dpair_D61, VPOINTER_PAIR);
  _V10_Dpair_D61.first = _V0random__copy;
  _V10_Dpair_D61.rest = VEncodePointer(&_V10_Dpair_D60, VPOINTER_PAIR);
  _V10_Dpair_D60.first = _V0make__random;
  _V10_Dpair_D60.rest = VNULL;
  _V10_Dpair_D59.first = VEncodePointer(&_V10_Dpair_D51, VPOINTER_PAIR);
  _V10_Dpair_D59.rest = VEncodePointer(&_V10_Dpair_D58, VPOINTER_PAIR);
  _V10_Dpair_D58.first = VEncodePointer(&_V10_Dpair_D53, VPOINTER_PAIR);
  _V10_Dpair_D58.rest = VEncodePointer(&_V10_Dpair_D57, VPOINTER_PAIR);
  _V10_Dpair_D57.first = VEncodePointer(&_V10_Dpair_D56, VPOINTER_PAIR);
  _V10_Dpair_D57.rest = VNULL;
  _V10_Dpair_D56.first = _V0_Mk;
  _V10_Dpair_D56.rest = VEncodePointer(&_V10_Dpair_D55, VPOINTER_PAIR);
  _V10_Dpair_D55.first = _V0rng;
  _V10_Dpair_D55.rest = VEncodePointer(&_V10_Dpair_D54, VPOINTER_PAIR);
  _V10_Dpair_D54.first = _V0end;
  _V10_Dpair_D54.rest = VNULL;
  _V10_Dpair_D53.first = _V0_Mk;
  _V10_Dpair_D53.rest = VEncodePointer(&_V10_Dpair_D52, VPOINTER_PAIR);
  _V10_Dpair_D52.first = _V0rng;
  _V10_Dpair_D52.rest = VNULL;
  _V10_Dpair_D51.first = _V0vanity;
  _V10_Dpair_D51.rest = VEncodePointer(&_V10_Dpair_D50, VPOINTER_PAIR);
  _V10_Dpair_D50.first = _V0hash;
  _V10_Dpair_D50.rest = VEncodePointer(&_V10_Dpair_D49, VPOINTER_PAIR);
  _V10_Dpair_D49.first = _V0random__sample_B;
  _V10_Dpair_D49.rest = VNULL;
  _V40_V10vcore_Drandom__sample__float_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__sample__float_B", &_VW_V40_V10vcore_Drandom__sample__float_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drandom__advance_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drandom__advance_B", &_VW_V40_V10vcore_Drandom__advance_B), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D47.first = VEncodePointer(&_V10_Dpair_D44, VPOINTER_PAIR);
  _V10_Dpair_D47.rest = VEncodePointer(&_V10_Dpair_D46, VPOINTER_PAIR);
  _V10_Dpair_D46.first = VEncodePointer(&_V10_Dpair_D45, VPOINTER_PAIR);
  _V10_Dpair_D46.rest = VNULL;
  _V10_Dpair_D45.first = VEncodePointer(&_V10_Dpair_D35, VPOINTER_PAIR);
  _V10_Dpair_D45.rest = VEncodePointer(&_V10_Dpair_D36, VPOINTER_PAIR);
  _V10_Dpair_D44.first = VEncodeBool(false);
  _V10_Dpair_D44.rest = VEncodePointer(&_V10_Dpair_D43, VPOINTER_PAIR);
  _V10_Dpair_D43.first = VEncodePointer(&_V10_Dpair_D42, VPOINTER_PAIR);
  _V10_Dpair_D43.rest = VNULL;
  _V10_Dpair_D42.first = _V0_Mx;
  _V10_Dpair_D42.rest = VNULL;
  _V10_Dpair_D41.first = VEncodePointer(&_V10_Dpair_D37, VPOINTER_PAIR);
  _V10_Dpair_D41.rest = VEncodePointer(&_V10_Dpair_D40, VPOINTER_PAIR);
  _V10_Dpair_D40.first = VEncodePointer(&_V10_Dpair_D36, VPOINTER_PAIR);
  _V10_Dpair_D40.rest = VNULL;
  _V10_Dpair_D39.first = VEncodePointer(&_V10_Dpair_D37, VPOINTER_PAIR);
  _V10_Dpair_D39.rest = VEncodePointer(&_V10_Dpair_D38, VPOINTER_PAIR);
  _V10_Dpair_D38.first = VNULL;
  _V10_Dpair_D38.rest = VNULL;
  _V10_Dpair_D37.first = VEncodeBool(false);
  _V10_Dpair_D37.rest = VEncodePointer(&_V10_Dpair_D36, VPOINTER_PAIR);
  _V10_Dpair_D36.first = VEncodePointer(&_V10_Dpair_D35, VPOINTER_PAIR);
  _V10_Dpair_D36.rest = VNULL;
  _V10_Dpair_D35.first = _V0_Mk;
  _V10_Dpair_D35.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hash_V20_V0k1, VEncodePointer(&_V10_Dpair_D47, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hash_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D41, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0hash_V0random__sample_B, VEncodePointer(&_V10_Dpair_D67, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hash_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D41, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hash_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D39, VPOINTER_PAIR));
}
