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

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D164 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
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
VWEAK VWORD _V10vcore_Dforce;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dforce = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.force" };
VWEAK VWORD _V10vcore_Dpromise_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dpromise_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.promise\?" };
VWEAK VWORD _V10vcore_Dmake__promise;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dmake__promise = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.make-promise" };
VWEAK VWORD _V10vcore_Ddelay__force__impl;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Ddelay__force__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.delay-force-impl" };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.mutator" };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.setter" };
static VPair _V10_Dpair_D163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kind__val;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0kind__val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "kind-val" };
VWEAK VWORD _V0promise__box;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0promise__box = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "promise-box" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D162 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "set!: procedure doesn't have a setter: " };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D161 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "set!: procedure doesn't have a mutator: " };
VWEAK VWORD _V0get__promise__kind__val;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0get__promise__kind__val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "get-promise-kind-val" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D160 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "not a record of the right type" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0set__promise__kind__val_B;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0set__promise__kind__val_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "set-promise-kind-val!" };
VWEAK VWORD _V0lazy;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0lazy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "lazy" };
VWEAK VWORD _V0eager;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0eager = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "eager" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V10_Dset__setter_B_D33, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V10_Dset__mutator_B_D36, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dsetter, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dmutator, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V0make__promise__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V0get__promise__kind__val, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V0set__promise__kind__val_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dmake__promise, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dforce, _var0, _var1);
static void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k9(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity seed set-promise-kind-val!) #t (bruijn ##.set-promise-kind-val!.6 12 3) (bruijn ##.%k.54 4 0) (bruijn ##.promise*.20 7 0) (bruijn ##.content.21 6 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B, _V60_V0vanity_V0seed)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0seed_V0set__promise__kind__val_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.125) ((##vcore.cdr (bruijn ##.%x.56 1 0))) (##vcore.set-cdr! (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k9) (bruijn ##.content.21 6 0) (bruijn ##.%x.125 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k9, self)))),
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k7(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.7 10 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k8) (bruijn ##.promise*.20 5 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k8, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0get__promise__kind__val(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.124) ((##vcore.car (bruijn ##.%x.58 1 0))) (##vcore.set-car! (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k7) (bruijn ##.content.21 4 0) (bruijn ##.%x.124 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k7, self)))),
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.123 1 2) (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.7 8 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k6) (bruijn ##.promise*.20 3 0)) ((bruijn ##.%k.54 0 0) #f))
if(VDecodeBool(
statics->vars[2])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k6, self))));
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
static void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity seed ##vcore.force) #t (bruijn ##..vcore.force.3 7 0) (bruijn ##.%k.51 6 0) (bruijn ##.promise.18 6 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V10vcore_Dforce(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.121 ##.%x.122 ##.%p.123) ((##vcore.car (bruijn ##.content.21 1 0)) (##vcore.eqv? (bruijn ##.%x.121 0 0) 'eager) (##vcore.not (bruijn ##.%x.122 0 1))) ((close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k5) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k10)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0eager);
    self->vars[2] = _VBasic_VNot2(runtime, NULL,
      self->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k5, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k10, self)))));
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.7 5 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k4) (bruijn ##.promise.18 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k4, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0get__promise__kind__val(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dforce_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.117 ##.%p.118) ((##vcore.car (bruijn ##.content.19 1 0)) (##vcore.eqv? (bruijn ##.%x.117 0 0) 'eager)) (if (bruijn ##.%p.118 0 1) (basic-block 1 1 (##.%r.119) ((##vcore.cdr (bruijn ##.content.19 2 0))) ((bruijn ##.%k.51 3 0) (bruijn ##.%r.119 0 0))) (basic-block 1 1 (##.%x.120) ((##vcore.cdr (bruijn ##.content.19 2 0))) ((bruijn ##.%x.120 0 0) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0eager);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dforce_V0k3, self)))));
    }
}
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dforce(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (##qualified-call (vanity seed get-promise-kind-val) #t (bruijn ##.get-promise-kind-val.7 1 4) (close _V50_V0vanity_V0seed_V10vcore_Dforce_V0k2) (bruijn ##.promise.18 0 1))
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
void _V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.64 0 0) ((bruijn ##.%k.63 1 0) (bruijn ##.x.22 1 1)) (basic-block 1 1 (##.%x.126) ((##vcore.cons 'eager (bruijn ##.x.22 2 1))) (##qualified-call (vanity seed make-promise-impl) #t (bruijn ##.make-promise-impl.8 3 5) (bruijn ##.%k.63 2 0) (bruijn ##.%x.126 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0eager,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0make__promise__impl, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0make__promise__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0seed_V10vcore_Dmake__promise(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // ((bruijn ##..vcore.promise?.9 1 6) (close _V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k11) (bruijn ##.x.22 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[6]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmake__promise_V0k11, self)))),
      _var1);
}
void _V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.127) ((##vcore.cons 'lazy (bruijn ##.thunk.23 1 1))) (##qualified-call (vanity seed make-promise-impl) #t (bruijn ##.make-promise-impl.8 2 5) (bruijn ##.%k.66 1 0) (bruijn ##.%x.127 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0lazy,
      statics->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0make__promise__impl, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V0make__promise__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.68 3 0) (bruijn ##.%x.70 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.69 0 0) (##vcore.record-set! (bruijn ##.%k.68 1 0) (bruijn ##.rec.24 1 1) 1 (bruijn ##.x.25 1 2)) (basic-block 2 2 (##.%x.128 ##.%x.129) ((##vcore.cons (bruijn ##.rec.24 2 1) '()) (##vcore.cons 'set-promise-kind-val! (bruijn ##.%x.128 0 0))) (##vcore.record (close _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k13) #f 'error (##string ##.string.160) (bruijn ##.%x.129 0 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0set__promise__kind__val_B,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k13, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D160.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0seed_V0set__promise__kind__val_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (##qualified-call (vanity seed ##..vcore.promise?.2) #t (bruijn ##..vcore.promise?.2.10 1 7) (close _V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k12) (bruijn ##.rec.24 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0set__promise__kind__val_B_V0k12, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.73 3 0) (bruijn ##.%x.75 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.74 0 0) (basic-block 1 1 (##.%r.130) ((##vcore.record-ref (bruijn ##.rec.26 2 1) 1)) ((bruijn ##.%k.73 2 0) (bruijn ##.%r.130 0 0))) (basic-block 2 2 (##.%x.131 ##.%x.132) ((##vcore.cons (bruijn ##.rec.26 2 1) '()) (##vcore.cons 'get-promise-kind-val (bruijn ##.%x.131 0 0))) (##vcore.record (close _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k15) #f 'error (##string ##.string.160) (bruijn ##.%x.132 0 1))))
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__promise__kind__val,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k15, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D160.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0seed_V0get__promise__kind__val(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (##qualified-call (vanity seed ##..vcore.promise?.2) #t (bruijn ##..vcore.promise?.2.10 1 7) (close _V50_V0vanity_V0seed_V0get__promise__kind__val_V0k14) (bruijn ##.rec.26 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0seed;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V0get__promise__kind__val_V0k14, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2, _V60_V0vanity_V0seed)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0seed_V0make__promise__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V0make__promise__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.%k.78 0 0) (bruijn ##.promise-box.1.11 1 8) (bruijn ##.kind-val.27 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 3,
      _var0,
      statics->vars[8],
      _var1);
}
void _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.133) ((##vcore.record? (bruijn ##.x.28 1 1))) (if (bruijn ##.%p.133 0 0) (basic-block 2 2 (##.%x.134 ##.%r.135) ((##vcore.record-ref (bruijn ##.x.28 2 1) 0) (##vcore.eqv? (bruijn ##.%x.134 0 0) (bruijn ##.promise-box.1.11 3 8))) ((bruijn ##.%k.79 2 0) (bruijn ##.%r.135 0 1))) ((bruijn ##.%k.79 1 0) #f)))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[8]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%r.136 ##.%r.137 ##.%k.138) ((##vcore.display-word (##string ##.string.161) (bruijn ##.err.30 1 0)) (##vcore.write (bruijn ##.func.29 3 1) (bruijn ##.err.30 1 0)) (##vcore.newline (bruijn ##.err.30 1 0))) (##vcore.abort (bruijn ##.%k.83 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D161.sym, VPOINTER_OTHER),
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
void _V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stderr->port (close _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k16))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator_V0k16, self)))));
}
void _V50_V0vanity_V0seed_V10vcore_Dmutator(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (##vcore.hash-table-ref (bruijn ##.%k.82 0 0) (bruijn ##.mutator-table.14 1 11) (bruijn ##.func.29 0 1) (close _V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      statics->vars[11],
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda3, self)))));
}
void _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%r.139 ##.%r.140 ##.%k.141) ((##vcore.display-word (##string ##.string.162) (bruijn ##.err.32 1 0)) (##vcore.write (bruijn ##.func.31 3 1) (bruijn ##.err.32 1 0)) (##vcore.newline (bruijn ##.err.32 1 0))) (##vcore.abort (bruijn ##.%k.85 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D162.sym, VPOINTER_OTHER),
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
void _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stderr->port (close _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k17))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter_V0k17, self)))));
}
void _V50_V0vanity_V0seed_V10vcore_Dsetter(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (##vcore.hash-table-ref (bruijn ##.%k.84 0 0) (bruijn ##.setter-table.17 1 14) (bruijn ##.func.31 0 1) (close _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      statics->vars[14],
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda4, self)))));
}
static void _V0vanity_V0seed_V20_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 12 12 (##.%x.143 ##.%x.144 ##.%x.145 ##.%x.146 ##.%x.147 ##.%x.148 ##.%x.149 ##.%x.150 ##.%x.151 ##.%x.152 ##.%x.153 ##.%r.154) ((##vcore.cons '##vcore.setter (bruijn ##..vcore.setter.16 6 13)) (##vcore.cons '##vcore.mutator (bruijn ##..vcore.mutator.13 6 10)) (##vcore.cons '##vcore.delay-force-impl (bruijn ##..vcore.delay-force-impl.5 6 2)) (##vcore.cons '##vcore.make-promise (bruijn ##..vcore.make-promise.4 6 1)) (##vcore.cons '##vcore.promise? (bruijn ##..vcore.promise?.9 6 6)) (##vcore.cons '##vcore.force (bruijn ##..vcore.force.3 6 0)) (##vcore.cons (bruijn ##.%x.148 0 5) '()) (##vcore.cons (bruijn ##.%x.147 0 4) (bruijn ##.%x.149 0 6)) (##vcore.cons (bruijn ##.%x.146 0 3) (bruijn ##.%x.150 0 7)) (##vcore.cons (bruijn ##.%x.145 0 2) (bruijn ##.%x.151 0 8)) (##vcore.cons (bruijn ##.%x.144 0 1) (bruijn ##.%x.152 0 9)) (##vcore.cons (bruijn ##.%x.143 0 0) (bruijn ##.%x.153 0 10))) ((bruijn ##.%k.50 9 0) (bruijn ##.%r.154 0 11)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[12]; } container;
    self = &container.self;
    VInitEnv(self, 12, 12, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dsetter,
      VGetArg(statics, 6-1, 13));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dmutator,
      VGetArg(statics, 6-1, 10));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Ddelay__force__impl,
      VGetArg(statics, 6-1, 2));
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dmake__promise,
      VGetArg(statics, 6-1, 1));
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dpromise_Q,
      VGetArg(statics, 6-1, 6));
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dforce,
      VGetArg(statics, 6-1, 0));
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[7]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[9]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[10]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[11]);
    }
}
static void _V0vanity_V0seed_V20_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0seed_V20_V0k35) (bruijn ##..vcore.promise?.9 5 6) (bruijn ##..vcore.promise?.2.10 5 7))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k35, self)))),
      VEncodeInt(5l), VEncodeInt(6l),
      VGetArg(statics, 5-1, 7)
    );
}
static void _V0vanity_V0seed_V20_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.142) ((##vcore.cons 'promise-box '(##pair ##.pair.163))) (set! (close _V0vanity_V0seed_V20_V0k34) (bruijn ##.promise-box.1.11 5 8) (bruijn ##.%x.142 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0promise__box,
      VEncodePointer(&_V10_Dpair_D163, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k34, self)))),
      VEncodeInt(5l), VEncodeInt(8l),
      self->vars[0]
    );
    }
}
static void _V0vanity_V0seed_V20_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0seed_V20_V0k33) (bruijn ##..vcore.set-mutator!.12 4 9) (bruijn ##.set-mutator!.36 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k33, self)))),
      VEncodeInt(4l), VEncodeInt(9l),
      self->vars[0]
    );
}
static void _V0vanity_V0seed_V20_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.156) ((##vcore.string-set! (bruijn ##.vec.44 3 1) (bruijn ##.i.45 3 2) (bruijn ##.%x.101 1 0))) ((bruijn ##.%k.100 3 0) (bruijn ##.%r.156 0 0)))
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
static void _V0vanity_V0seed_V20_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda7, got ~D~N"
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
  // (basic-block 1 1 (##.%x.155) ((##vcore.string-ref (bruijn ##.vec.44 1 1) (bruijn ##.i.45 1 2))) ((bruijn ##.proc.46 1 3) (close _V0vanity_V0seed_V20_V0k36) (bruijn ##.%x.155 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k36, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.36) #f (bruijn ##.set-mutator!.36 0 0) (close _V0vanity_V0seed_V20_V0k32) (##intrinsic ##vcore.string-ref) (close _V0vanity_V0seed_V20_V0lambda7))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k32, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dstring__ref;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda7, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D36(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.vector-set! (bruijn ##.%k.103 2 0) (bruijn ##.vec.41 2 1) (bruijn ##.i.42 2 2) (bruijn ##.%x.104 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
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
  // (basic-block 1 1 (##.%x.157) ((##vcore.vector-ref (bruijn ##.vec.41 1 1) (bruijn ##.i.42 1 2))) ((bruijn ##.proc.43 1 3) (close _V0vanity_V0seed_V20_V0k37) (bruijn ##.%x.157 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k37, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.36) #f (bruijn ##.set-mutator!.36 0 0) (close _V0vanity_V0seed_V20_V0k31) (##intrinsic ##vcore.vector-ref) (close _V0vanity_V0seed_V20_V0lambda8))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k31, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dvector__ref;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda8, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D36(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.%k.106 2 0) (bruijn ##.pair.39 2 1) (bruijn ##.%x.107 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.158) ((##vcore.cdr (bruijn ##.pair.39 1 1))) ((bruijn ##.proc.40 1 2) (close _V0vanity_V0seed_V20_V0k38) (bruijn ##.%x.158 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k38, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k29(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.36) #f (bruijn ##.set-mutator!.36 0 0) (close _V0vanity_V0seed_V20_V0k30) (##intrinsic ##vcore.cdr) (close _V0vanity_V0seed_V20_V0lambda9))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k30, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcdr;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda9, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D36(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-car! (bruijn ##.%k.109 2 0) (bruijn ##.pair.37 2 1) (bruijn ##.%x.110 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (basic-block 1 1 (##.%x.159) ((##vcore.car (bruijn ##.pair.37 1 1))) ((bruijn ##.proc.38 1 2) (close _V0vanity_V0seed_V20_V0k39) (bruijn ##.%x.159 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k39, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k28(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-mutator!.36) #f (bruijn ##.set-mutator!.36 0 0) (close _V0vanity_V0seed_V20_V0k29) (##intrinsic ##vcore.car) (close _V0vanity_V0seed_V20_V0lambda10))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k29, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcar;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda10, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D36(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.set-setter!.15 4 12) (close _V0vanity_V0seed_V20_V0k28) (bruijn ##..vcore.mutator.13 4 10) (bruijn ##.set-mutator!.36 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k28, self)))),
      statics->up->up->up->vars[10],
      _var0);
}
void _V50_V10_Dset__mutator_B_D36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dset__mutator_B_D36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.%k.99 0 0) (bruijn ##.mutator-table.14 4 11) (bruijn ##.getter.47 0 1) (bruijn ##.mutator.48 0 2))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      statics->up->up->up->vars[11],
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_V0k27(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V0vanity_V0seed_V20_V0lambda6) (close "_V50_V10_Dset__mutator_B_D36"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dset__mutator_B_D36, self)))));
}
static void _V0vanity_V0seed_V20_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_V0k27) (bruijn ##.mutator-table.14 3 11) (bruijn ##.%x.112 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k27, self)))),
      VEncodeInt(3l), VEncodeInt(11l),
      _var0
    );
}
static void _V0vanity_V0seed_V20_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.make-hash-table (close _V0vanity_V0seed_V20_V0k26) (##intrinsic ##vcore.eq?) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k26, self)))),
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
}
static void _V0vanity_V0seed_V20_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0seed_V20_V0k25) (bruijn ##..vcore.set-setter!.15 2 12) (bruijn ##.set-setter!.33 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k25, self)))),
      VEncodeInt(2l), VEncodeInt(12l),
      self->vars[0]
    );
}
static void _V0vanity_V0seed_V20_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.33) #f (bruijn ##.set-setter!.33 0 0) (close _V0vanity_V0seed_V20_V0k24) (##intrinsic ##vcore.string-ref) (##intrinsic ##vcore.string-set!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k24, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dstring__ref;
    VWORD _arg2 = 
      _V40_V10vcore_Dstring__set_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D33(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.33) #f (bruijn ##.set-setter!.33 0 0) (close _V0vanity_V0seed_V20_V0k23) (##intrinsic ##vcore.vector-ref) (##intrinsic ##vcore.vector-set!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k23, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dvector__ref;
    VWORD _arg2 = 
      _V40_V10vcore_Dvector__set_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D33(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k21(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.33) #f (bruijn ##.set-setter!.33 0 0) (close _V0vanity_V0seed_V20_V0k22) (##intrinsic ##vcore.cdr) (##intrinsic ##vcore.set-cdr!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k22, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcdr;
    VWORD _arg2 = 
      _V40_V10vcore_Dset__cdr_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D33(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k20(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (##.set-setter!.33) #f (bruijn ##.set-setter!.33 0 0) (close _V0vanity_V0seed_V20_V0k21) (##intrinsic ##vcore.car) (##intrinsic ##vcore.set-car!))
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k21, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcar;
    VWORD _arg2 = 
      _V40_V10vcore_Dset__car_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D33(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-setter!.33) #f (bruijn ##.set-setter!.33 0 0) (close _V0vanity_V0seed_V20_V0k20) (bruijn ##..vcore.setter.16 2 13) (bruijn ##.set-setter!.33 0 0))
  {
    VClosure * _closure = VDecodeClosure(_var0);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k20, self))));
    VWORD _arg1 = 
      statics->up->vars[13];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D33(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V10_Dset__setter_B_D33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dset__setter_B_D33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.%k.114 0 0) (bruijn ##.setter-table.17 2 14) (bruijn ##.getter.34 0 1) (bruijn ##.setter.35 0 2))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      statics->up->vars[14],
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_V0k19(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V0vanity_V0seed_V20_V0lambda5) (close "_V50_V10_Dset__setter_B_D33"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda5, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dset__setter_B_D33, self)))));
}
static void _V0vanity_V0seed_V20_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_V0k19) (bruijn ##.setter-table.17 1 14) (bruijn ##.%x.115 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k19, self)))),
      VEncodeInt(1l), VEncodeInt(14l),
      _var0
    );
}
static void _V0vanity_V0seed_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc) {
 if(argc != 0) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda2, got ~D~N"
  "-- expected 0~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[0]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 0, 0, statics);
  // (##letrec (vanity seed) 15 ((close "_V50_V0vanity_V0seed_V10vcore_Dforce" (vanity seed)) (close "_V50_V0vanity_V0seed_V10vcore_Dmake__promise" (vanity seed)) (close "_V50_V0vanity_V0seed_V10vcore_Ddelay__force__impl" (vanity seed)) (close "_V50_V0vanity_V0seed_V0set__promise__kind__val_B" (vanity seed)) (close "_V50_V0vanity_V0seed_V0get__promise__kind__val" (vanity seed)) (close "_V50_V0vanity_V0seed_V0make__promise__impl" (vanity seed)) #f (close "_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2" (vanity seed)) #f #f (close "_V50_V0vanity_V0seed_V10vcore_Dmutator" (vanity seed)) #f #f (close "_V50_V0vanity_V0seed_V10vcore_Dsetter" (vanity seed)) #f) (##vcore.make-hash-table (close _V0vanity_V0seed_V20_V0k18) (##intrinsic ##vcore.eq?) #f 32))
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
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10_D_Dvcore_Dpromise_Q_D2, _V60_V0vanity_V0seed))));
    self->vars[8] = VEncodeBool(false);
    self->vars[9] = VEncodeBool(false);
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator, _V60_V0vanity_V0seed))));
    self->vars[11] = VEncodeBool(false);
    self->vars[12] = VEncodeBool(false);
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter, _V60_V0vanity_V0seed))));
    self->vars[14] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0seed_V20", &_V60_V0vanity_V0seed);
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k18, self)))),
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
    }
}
static void _V0vanity_V0seed_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0seed_V20_V0lambda2) (##string ##.string.164) (bruijn ##.%x.116 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D164.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda1, got ~D~N"
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
VFunc _V0vanity_V0seed_V20 = (VFunc)_V0vanity_V0seed_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V10vcore_Dforce = VEncodePointer(VInternSymbol(787577650, &_VW_V10vcore_Dforce.sym), VPOINTER_OTHER);
  _V10vcore_Dpromise_Q = VEncodePointer(VInternSymbol(1895122411, &_VW_V10vcore_Dpromise_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dmake__promise = VEncodePointer(VInternSymbol(-1357658304, &_VW_V10vcore_Dmake__promise.sym), VPOINTER_OTHER);
  _V10vcore_Ddelay__force__impl = VEncodePointer(VInternSymbol(-898912511, &_VW_V10vcore_Ddelay__force__impl.sym), VPOINTER_OTHER);
  _V10vcore_Dmutator = VEncodePointer(VInternSymbol(-315800619, &_VW_V10vcore_Dmutator.sym), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VInternSymbol(2136925547, &_VW_V10vcore_Dsetter.sym), VPOINTER_OTHER);
  _V0kind__val = VEncodePointer(VInternSymbol(-1820418493, &_VW_V0kind__val.sym), VPOINTER_OTHER);
  _V0promise__box = VEncodePointer(VInternSymbol(-1997416820, &_VW_V0promise__box.sym), VPOINTER_OTHER);
  _V0get__promise__kind__val = VEncodePointer(VInternSymbol(-1805015442, &_VW_V0get__promise__kind__val.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0set__promise__kind__val_B = VEncodePointer(VInternSymbol(234371586, &_VW_V0set__promise__kind__val_B.sym), VPOINTER_OTHER);
  _V0lazy = VEncodePointer(VInternSymbol(2123886502, &_VW_V0lazy.sym), VPOINTER_OTHER);
  _V0eager = VEncodePointer(VInternSymbol(468685020, &_VW_V0eager.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V10_Dpair_D163.first = _V0kind__val;
  _V10_Dpair_D163.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
