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

VEnv * _V60_V0vanity_V0seed;

VWEAK VWORD _V40_V10vcore_Dset__car_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__cdr_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dstring__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__ref;
VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__ref;
VWEAK VClosure _VW_V40_V10vcore_Dstring__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringRef2, NULL };
VWEAK VWORD _V0kind__val;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0kind__val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "kind-val" };
VWEAK VWORD _V0promise__box;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0promise__box = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "promise-box" };
VWEAK VWORD _V10vcore_Dforce;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dforce = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.force" };
VWEAK VWORD _V10vcore_Dpromise_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dpromise_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.promise\?" };
VWEAK VWORD _V10vcore_Dmake__promise;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dmake__promise = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.make-promise" };
VWEAK VWORD _V10vcore_Ddelay__force__impl;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Ddelay__force__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.delay-force-impl" };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.mutator" };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.setter" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D135 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "set!: procedure doesn't have a setter: " };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D134 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "set!: procedure doesn't have a mutator: " };
VWEAK VWORD _V0get__promise__kind__val;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0get__promise__kind__val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "get-promise-kind-val" };
VWEAK VWORD _V0set__promise__kind__val_B;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0set__promise__kind__val_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "set-promise-kind-val!" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D133 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "not a record of the right type" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0lazy;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0lazy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "lazy" };
VWEAK VWORD _V0eager;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0eager = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "eager" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D132 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V0kind__val = VEncodePointer(VInternSymbol(-1820418493, &_VW_V0kind__val.sym), VPOINTER_OTHER);
  _V0promise__box = VEncodePointer(VInternSymbol(-1997416820, &_VW_V0promise__box.sym), VPOINTER_OTHER);
  _V10vcore_Dforce = VEncodePointer(VInternSymbol(787577650, &_VW_V10vcore_Dforce.sym), VPOINTER_OTHER);
  _V10vcore_Dpromise_Q = VEncodePointer(VInternSymbol(1895122411, &_VW_V10vcore_Dpromise_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__promise = VEncodePointer(VInternSymbol(-1357658304, &_VW_V10vcore_Dmake__promise.sym), VPOINTER_OTHER);
  _V10vcore_Ddelay__force__impl = VEncodePointer(VInternSymbol(-898912511, &_VW_V10vcore_Ddelay__force__impl.sym), VPOINTER_OTHER);
  _V10vcore_Dmutator = VEncodePointer(VInternSymbol(-315800619, &_VW_V10vcore_Dmutator.sym), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VInternSymbol(2136925547, &_VW_V10vcore_Dsetter.sym), VPOINTER_OTHER);
  _V0get__promise__kind__val = VEncodePointer(VInternSymbol(-1805015442, &_VW_V0get__promise__kind__val.sym), VPOINTER_OTHER);
  _V0set__promise__kind__val_B = VEncodePointer(VInternSymbol(234371586, &_VW_V0set__promise__kind__val_B.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0lazy = VEncodePointer(VInternSymbol(2123886502, &_VW_V0lazy.sym), VPOINTER_OTHER);
  _V0eager = VEncodePointer(VInternSymbol(468685020, &_VW_V0eager.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V10_Dset__setter_B_D32, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V10_Dset__mutator_B_D35, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dsetter, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dmutator, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D1, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V0make__promise__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V0get__promise__kind__val, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V0set__promise__kind__val_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dmake__promise, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dforce, _var0, _var1);
static void _V0vanity_V0seed_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.50 1 0) (##string ##.string.132) (bruijn ##.x.51 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D132.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0seed_V20_V0k1))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k1, self)))));
}
static void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k11(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity seed set-promise-kind-val!) #t (bruijn ##.set-promise-kind-val!.5 9 3) (bruijn ##.k.56 2 0) (bruijn ##.promise*.19 5 0) (bruijn ##.content.20 4 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg2 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B, _V60_V0vanity_V0seed)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0seed_V0set__promise__kind__val_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.set-cdr! (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k11) (bruijn ##.content.20 4 0) (##inline ##vcore.cdr (bruijn ##.x.58 0 0)))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k11, self)))),
      statics->up->up->up->vars[0],
      VInlineCdr2(runtime,
        _var0));
}
static void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k9(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.6 8 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k10) (bruijn ##.promise*.19 4 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k10, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0get__promise__kind__val(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.set-car! (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k9) (bruijn ##.content.20 3 0) (##inline ##vcore.car (bruijn ##.x.60 0 0)))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k9, self)))),
      statics->up->up->vars[0],
      VInlineCar2(runtime,
        _var0));
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.61 1 0)) (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.6 7 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k8) (bruijn ##.promise*.19 3 0)) ((bruijn ##.k.56 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k8, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0get__promise__kind__val(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k12(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity seed ##vcore.force) #t (bruijn ##..vcore.force.2 6 0) (bruijn ##.k.53 5 0) (bruijn ##.promise.17 5 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V10vcore_Dforce(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k7) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k12))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k7, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k12, self)))));
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k6) (##inline ##vcore.car (bruijn ##.content.20 0 0)) 'eager)
    VCallFuncWithGC(runtime, (VFunc)VEq2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k6, self)))),
      VInlineCar2(runtime,
        _var0),
      _V0eager);
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.6 4 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k5) (bruijn ##.promise.17 3 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k5, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0get__promise__kind__val(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.54 0 0) ((bruijn ##.k.53 2 0) (##inline ##vcore.cdr (bruijn ##.content.18 1 0))) ((##inline ##vcore.cdr (bruijn ##.content.18 1 0)) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k4)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VInlineCdr2(runtime,
        statics->vars[0])), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k4, self)))));
}
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k3) (##inline ##vcore.car (bruijn ##.content.18 0 0)) 'eager)
    VCallFuncWithGC(runtime, (VFunc)VEq2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k3, self)))),
      VInlineCar2(runtime,
        _var0),
      _V0eager);
}
void _V50_V0vanity_V0seed_V10vcore_Dforce(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dforce" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.6 1 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k2) (bruijn ##.promise.17 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k2, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0get__promise__kind__val(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.66 0 0) ((bruijn ##.k.65 1 0) (bruijn ##.x.21 1 1)) (##qualified-call (vanity seed make-promise-impl) #t (bruijn ##.make-promise-impl.7 2 5) (bruijn ##.k.65 1 0) (##inline ##vcore.cons 'eager (bruijn ##.x.21 1 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _V0eager,
        statics->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0make__promise__impl, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0make__promise__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0seed_V10vcore_Dmake__promise(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dmake__promise" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmake__promise, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##..vcore.promise?.8 1 6) (close _V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k13) (bruijn ##.x.21 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[6]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k13, self)))),
      _var1);
}
void _V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity seed make-promise-impl) #t (bruijn ##.make-promise-impl.7 1 5) (bruijn ##.k.68 0 0) (##inline ##vcore.cons 'lazy (bruijn ##.thunk.22 0 1)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _V0lazy,
        _var1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0make__promise__impl, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0make__promise__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.70 2 0) (bruijn ##.x.72 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.71 0 0) (##vcore.record-set! (bruijn ##.k.70 1 0) (bruijn ##.rec.23 1 1) 1 (bruijn ##.x.24 1 2)) (##vcore.record (close _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k15) #f 'error (##string ##.string.133) (##inline ##vcore.cons 'set-promise-kind-val! (##inline ##vcore.cons (bruijn ##.rec.23 1 1) '()))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l),
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k15, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D133.sym, VPOINTER_OTHER),
      VInlineCons2(runtime,
        _V0set__promise__kind__val_B,
        VInlineCons2(runtime,
        statics->vars[1],
        VNULL)));
}
}
void _V50_V0vanity_V0seed_V0set__promise__kind__val_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0set__promise__kind__val_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0set__promise__kind__val_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity seed ##..vcore.promise?.1) #t (bruijn ##..vcore.promise?.1.9 1 7) (close _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k14) (bruijn ##.rec.23 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k14, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D1, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D1(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.75 2 0) (bruijn ##.x.77 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.76 0 0) (basic-block 1 1 (##.reg.120) ((##vcore.record-ref (bruijn ##.rec.25 2 1) 1)) ((bruijn ##.k.75 2 0) (bruijn ##.reg.120 0 0))) (##vcore.record (close _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k17) #f 'error (##string ##.string.133) (##inline ##vcore.cons 'get-promise-kind-val (##inline ##vcore.cons (bruijn ##.rec.25 1 1) '()))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k17, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D133.sym, VPOINTER_OTHER),
      VInlineCons2(runtime,
        _V0get__promise__kind__val,
        VInlineCons2(runtime,
        statics->vars[1],
        VNULL)));
}
}
void _V50_V0vanity_V0seed_V0get__promise__kind__val(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0get__promise__kind__val" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0get__promise__kind__val, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity seed ##..vcore.promise?.1) #t (bruijn ##..vcore.promise?.1.9 1 7) (close _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k16) (bruijn ##.rec.25 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k16, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D1, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D1(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V0make__promise__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V0make__promise__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0make__promise__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.k.80 0 0) (bruijn ##.promise-box.0.10 1 8) (bruijn ##.kind-val.26 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 3,
      _var0,
      statics->vars[8],
      _var1);
}
void _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D1, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.121) ((##vcore.record? (bruijn ##.x.27 1 1))) (if (bruijn ##.reg.121 0 0) (basic-block 1 1 (##.reg.122) ((##vcore.record-ref (bruijn ##.x.27 2 1) 0)) (##vcore.eqv? (bruijn ##.k.81 2 0) (bruijn ##.reg.122 0 0) (bruijn ##.promise-box.0.10 3 8))) ((bruijn ##.k.81 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    VCallFuncWithGC(runtime, (VFunc)VEq2, 3,
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->vars[8]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dmutator_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.123 ##.reg.124 ##.reg.125) ((##vcore.display-word (##string ##.string.134) (bruijn ##.err.29 1 0)) (##vcore.write (bruijn ##.func.28 3 1) (bruijn ##.err.29 1 0)) (##vcore.newline (bruijn ##.err.29 1 0))) (##vcore.abort (bruijn ##.k.85 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D134.sym, VPOINTER_OTHER),
      statics->vars[0]);
    self->vars[1] = _VBasic_VWrite2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
    self->vars[2] = _VBasic_VNewline2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VAbort2, 1,
      statics->up->vars[0]);
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stderr->port (close _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k18))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator_V0k18, self)))));
}
void _V50_V0vanity_V0seed_V10vcore_Dmutator(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dmutator" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmutator, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.hash-table-ref (bruijn ##.k.84 0 0) (bruijn ##.mutator-table.13 1 11) (bruijn ##.func.28 0 1) (close _V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      statics->vars[11],
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda4, self)))));
}
void _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dsetter_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.126 ##.reg.127 ##.reg.128) ((##vcore.display-word (##string ##.string.135) (bruijn ##.err.31 1 0)) (##vcore.write (bruijn ##.func.30 3 1) (bruijn ##.err.31 1 0)) (##vcore.newline (bruijn ##.err.31 1 0))) (##vcore.abort (bruijn ##.k.87 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D135.sym, VPOINTER_OTHER),
      statics->vars[0]);
    self->vars[1] = _VBasic_VWrite2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
    self->vars[2] = _VBasic_VNewline2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VAbort2, 1,
      statics->up->vars[0]);
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stderr->port (close _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k19))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter_V0k19, self)))));
}
void _V50_V0vanity_V0seed_V10vcore_Dsetter(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0seed_V10vcore_Dsetter" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dsetter, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.hash-table-ref (bruijn ##.k.86 0 0) (bruijn ##.setter-table.16 1 14) (bruijn ##.func.30 0 1) (close _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda5))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      statics->vars[14],
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda5, self)))));
}
static void _V0vanity_V0seed_V20_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.52 5 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.setter (bruijn ##..vcore.setter.15 4 13)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.mutator (bruijn ##..vcore.mutator.12 4 10)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.delay-force-impl (bruijn ##..vcore.delay-force-impl.4 4 2)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.make-promise (bruijn ##..vcore.make-promise.3 4 1)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.promise? (bruijn ##..vcore.promise?.8 4 6)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.force (bruijn ##..vcore.force.2 4 0)) '())))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dsetter,
        statics->up->up->up->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dmutator,
        statics->up->up->up->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Ddelay__force__impl,
        statics->up->up->up->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dmake__promise,
        statics->up->up->up->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dpromise_Q,
        statics->up->up->up->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dforce,
        statics->up->up->up->vars[0]),
        VNULL)))))));
}
static void _V0vanity_V0seed_V20_V0k36(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0seed_V20_V0k37) (bruijn ##..vcore.promise?.8 4 6) (bruijn ##..vcore.promise?.1.9 4 7))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k37, self)))),
      VEncodeInt(4l), VEncodeInt(6l),
      statics->up->up->up->vars[7]
    );
}
static void _V0vanity_V0seed_V20_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0seed_V20_V0k36) (bruijn ##.promise-box.0.10 4 8) (##inline ##vcore.cons (##inline ##vcore.qcons 'promise-box (##inline ##vcore.qcons 'kind-val '())) '()))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k36, self)))),
      VEncodeInt(4l), VEncodeInt(8l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0promise__box,
        VInlineCons2(runtime,
        _V0kind__val,
        VNULL)),
        VNULL)
    );
}
static void _V0vanity_V0seed_V20_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0seed_V20_V0k35) (bruijn ##..vcore.set-mutator!.11 4 9) (bruijn ##.set-mutator!.35 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k35, self)))),
      VEncodeInt(4l), VEncodeInt(9l),
      self->vars[0]
    );
}
static void _V0vanity_V0seed_V20_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.130) ((##vcore.string-set! (bruijn ##.vec.43 3 1) (bruijn ##.i.44 3 2) (bruijn ##.x.105 1 0))) ((bruijn ##.k.104 3 0) (bruijn ##.reg.130 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringSet2(runtime, NULL,
      statics->up->up->vars[1],
      statics->up->up->vars[2],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda8, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.reg.129) ((##vcore.string-ref (bruijn ##.vec.43 1 1) (bruijn ##.i.44 1 2))) ((bruijn ##.proc.45 1 3) (close _V0vanity_V0seed_V20_V0k38) (bruijn ##.reg.129 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k38, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.35) #f (bruijn ##.set-mutator!.35 0 0) (close _V0vanity_V0seed_V20_V0k34) (##intrinsic ##vcore.string-ref) (close _V0vanity_V0seed_V20_V0lambda8))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k34, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dstring__ref;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda8, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D35(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.vector-set! (bruijn ##.k.107 2 0) (bruijn ##.vec.40 2 1) (bruijn ##.i.41 2 2) (bruijn ##.x.108 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda9, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.reg.131) ((##vcore.vector-ref (bruijn ##.vec.40 1 1) (bruijn ##.i.41 1 2))) ((bruijn ##.proc.42 1 3) (close _V0vanity_V0seed_V20_V0k39) (bruijn ##.reg.131 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k39, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.35) #f (bruijn ##.set-mutator!.35 0 0) (close _V0vanity_V0seed_V20_V0k33) (##intrinsic ##vcore.vector-ref) (close _V0vanity_V0seed_V20_V0lambda9))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k33, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dvector__ref;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda9, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D35(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.k.110 1 0) (bruijn ##.pair.38 1 1) (bruijn ##.x.111 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.proc.39 0 2) (close _V0vanity_V0seed_V20_V0k40) (##inline ##vcore.cdr (bruijn ##.pair.38 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k40, self)))),
      VInlineCdr2(runtime,
        _var1));
}
static void _V0vanity_V0seed_V20_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.35) #f (bruijn ##.set-mutator!.35 0 0) (close _V0vanity_V0seed_V20_V0k32) (##intrinsic ##vcore.cdr) (close _V0vanity_V0seed_V20_V0lambda10))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k32, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcdr;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda10, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D35(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-car! (bruijn ##.k.113 1 0) (bruijn ##.pair.36 1 1) (bruijn ##.x.114 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.proc.37 0 2) (close _V0vanity_V0seed_V20_V0k41) (##inline ##vcore.car (bruijn ##.pair.36 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k41, self)))),
      VInlineCar2(runtime,
        _var1));
}
static void _V0vanity_V0seed_V20_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.35) #f (bruijn ##.set-mutator!.35 0 0) (close _V0vanity_V0seed_V20_V0k31) (##intrinsic ##vcore.car) (close _V0vanity_V0seed_V20_V0lambda11))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k31, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcar;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda11, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D35(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda7" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.set-setter!.14 4 12) (close _V0vanity_V0seed_V20_V0k30) (bruijn ##..vcore.mutator.12 4 10) (bruijn ##.set-mutator!.35 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k30, self)))),
      statics->up->up->up->vars[10],
      _var0);
}
void _V50_V10_Dset__mutator_B_D35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V10_Dset__mutator_B_D35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dset__mutator_B_D35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.k.103 0 0) (bruijn ##.mutator-table.13 4 11) (bruijn ##.getter.46 0 1) (bruijn ##.mutator.47 0 2))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      statics->up->up->up->vars[11],
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_V0k29(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V0vanity_V0seed_V20_V0lambda7) (close "_V50_V10_Dset__mutator_B_D35"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda7, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dset__mutator_B_D35, self)))));
}
static void _V0vanity_V0seed_V20_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_V0k29) (bruijn ##.mutator-table.13 3 11) (bruijn ##.x.116 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k29, self)))),
      VEncodeInt(3l), VEncodeInt(11l),
      _var0
    );
}
static void _V0vanity_V0seed_V20_V0k27(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-hash-table (close _V0vanity_V0seed_V20_V0k28) (##intrinsic ##vcore.eq?) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k28, self)))),
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
}
static void _V0vanity_V0seed_V20_V0k26(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0seed_V20_V0k27) (bruijn ##..vcore.set-setter!.14 2 12) (bruijn ##.set-setter!.32 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k27, self)))),
      VEncodeInt(2l), VEncodeInt(12l),
      self->vars[0]
    );
}
static void _V0vanity_V0seed_V20_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.32) #f (bruijn ##.set-setter!.32 0 0) (close _V0vanity_V0seed_V20_V0k26) (##intrinsic ##vcore.string-ref) (##intrinsic ##vcore.string-set!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k26, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dstring__ref;
    VWORD _arg2 = 
      _V40_V10vcore_Dstring__set_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D32(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.32) #f (bruijn ##.set-setter!.32 0 0) (close _V0vanity_V0seed_V20_V0k25) (##intrinsic ##vcore.vector-ref) (##intrinsic ##vcore.vector-set!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k25, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dvector__ref;
    VWORD _arg2 = 
      _V40_V10vcore_Dvector__set_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D32(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.32) #f (bruijn ##.set-setter!.32 0 0) (close _V0vanity_V0seed_V20_V0k24) (##intrinsic ##vcore.cdr) (##intrinsic ##vcore.set-cdr!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k24, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcdr;
    VWORD _arg2 = 
      _V40_V10vcore_Dset__cdr_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D32(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.32) #f (bruijn ##.set-setter!.32 0 0) (close _V0vanity_V0seed_V20_V0k23) (##intrinsic ##vcore.car) (##intrinsic ##vcore.set-car!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k23, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcar;
    VWORD _arg2 = 
      _V40_V10vcore_Dset__car_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D32(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda6" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-setter!.32) #f (bruijn ##.set-setter!.32 0 0) (close _V0vanity_V0seed_V20_V0k22) (bruijn ##..vcore.setter.15 2 13) (bruijn ##.set-setter!.32 0 0))
  {
    VClosure * _closure = VDecodeClosure(_var0);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k22, self))));
    VWORD _arg1 = 
      statics->up->vars[13];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D32(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V10_Dset__setter_B_D32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V10_Dset__setter_B_D32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dset__setter_B_D32, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.k.118 0 0) (bruijn ##.setter-table.16 2 14) (bruijn ##.getter.33 0 1) (bruijn ##.setter.34 0 2))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      statics->up->vars[14],
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_V0k21(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V0vanity_V0seed_V20_V0lambda6) (close "_V50_V10_Dset__setter_B_D32"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dset__setter_B_D32, self)))));
}
static void _V0vanity_V0seed_V20_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_V0k21) (bruijn ##.setter-table.16 1 14) (bruijn ##.x.119 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k21, self)))),
      VEncodeInt(1l), VEncodeInt(14l),
      _var0
    );
}
static void _V0vanity_V0seed_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##letrec (vanity seed) 15 ((close "_V50_V0vanity_V0seed_V10vcore_Dforce" "_V60_V0vanity_V0seed") (close "_V50_V0vanity_V0seed_V10vcore_Dmake__promise" "_V60_V0vanity_V0seed") (close "_V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl" "_V60_V0vanity_V0seed") (close "_V50_V0vanity_V0seed_V0set__promise__kind__val_B" "_V60_V0vanity_V0seed") (close "_V50_V0vanity_V0seed_V0get__promise__kind__val" "_V60_V0vanity_V0seed") (close "_V50_V0vanity_V0seed_V0make__promise__impl" "_V60_V0vanity_V0seed") #f (close "_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D1" "_V60_V0vanity_V0seed") #f #f (close "_V50_V0vanity_V0seed_V10vcore_Dmutator" "_V60_V0vanity_V0seed") #f #f (close "_V50_V0vanity_V0seed_V10vcore_Dsetter" "_V60_V0vanity_V0seed") #f) (##vcore.make-hash-table (close _V0vanity_V0seed_V20_V0k20) (##intrinsic ##vcore.eq?) #f 32))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[15]; } container;
    self = &container.self;
    _V60_V0vanity_V0seed = self;
    VInitEnv(self, 15, 15, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce, _V60_V0vanity_V0seed))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmake__promise, _V60_V0vanity_V0seed))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl, _V60_V0vanity_V0seed))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B, _V60_V0vanity_V0seed))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0make__promise__impl, _V60_V0vanity_V0seed))));
    self->vars[6] = VEncodeBool(false);
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D1, _V60_V0vanity_V0seed))));
    self->vars[8] = VEncodeBool(false);
    self->vars[9] = VEncodeBool(false);
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator, _V60_V0vanity_V0seed))));
    self->vars[11] = VEncodeBool(false);
    self->vars[12] = VEncodeBool(false);
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter, _V60_V0vanity_V0seed))));
    self->vars[14] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0seed_V20", &_V60_V0vanity_V0seed);
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k20, self)))),
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
    }
}
static void _V0vanity_V0seed_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.49 0 0) (close _V0vanity_V0seed_V20_V0lambda2) (close _V0vanity_V0seed_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0seed_V20 = (VFunc)_V0vanity_V0seed_V20_V0lambda1;
