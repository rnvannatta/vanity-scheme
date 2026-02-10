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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D24 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0hash_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
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
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0hash_V0random__sample_B);
static void _V0vanity_V0hash_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hash_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.10 1 0) (##string ##.string.24) (bruijn ##.x.11 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D24.sym, VPOINTER_OTHER),
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
 // ("_V50_V0vanity_V0hash_V0random__sample_B" #t (2 (##vcore.random-sample! (bruijn ##.k.13 0 0) (bruijn ##.rng.5 0 1))) (3 (##vcore.random-sample-bounded! (bruijn ##.k.14 0 0) (bruijn ##.rng.6 0 1) (bruijn ##.end.7 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash_V0random__sample_B, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0hash_V0random__sample_B" };
 VRecordCall2(runtime, &dbg);
  // (##vcore.random-sample! (bruijn ##.k.13 0 0) (bruijn ##.rng.5 0 1))
    VCallFuncWithGC(runtime, (VFunc)VRandomSample, 2,
      _var0,
      _var1);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0hash_V0random__sample_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0hash_V0random__sample_B" };
 VRecordCall2(runtime, &dbg);
  // (##vcore.random-sample-bounded! (bruijn ##.k.14 0 0) (bruijn ##.rng.6 0 1) (bruijn ##.end.7 0 2))
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
  // (##letrec (vanity hash) 5 ((##intrinsic ##vcore.random-advance!) (##intrinsic ##vcore.random-sample-float!) (close "_V50_V0vanity_V0hash_V0random__sample_B" "_V60_V0vanity_V0hash") (##intrinsic ##vcore.random-copy) (##intrinsic ##vcore.make-random)) ((bruijn ##.k.12 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'make-random (bruijn ##.make-random.4 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-copy (bruijn ##.random-copy.3 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-sample! (bruijn ##.random-sample!.2 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-sample-float! (bruijn ##.random-sample-float!.1 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'random-advance! (bruijn ##.random-advance!.0 0 0)) '())))))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__random,
        self->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0random__copy,
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0random__sample_B,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0random__sample__float_B,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0random__advance_B,
        self->vars[0]),
        VNULL))))));
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
  // (##vcore.call-with-values (bruijn ##.k.9 0 0) (close _V0vanity_V0hash_V20_V0lambda2) (close _V0vanity_V0hash_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0hash_V20 = (VFunc)_V0vanity_V0hash_V20_V0lambda1;
