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


static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D83 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__car_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__cdr_B;
VWEAK VClosure _VW_V40_V10vcore_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__set_B;
VWEAK VClosure _VW_V40_V10vcore_Dstring__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__ref;
VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__ref;
VWEAK VClosure _VW_V40_V10vcore_Dstring__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringRef2, NULL };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.mutator" };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.setter" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D82 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "set!: procedure doesn't have a mutator: " };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D81 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "set!: procedure doesn't have a setter: " };
static __attribute__((constructor)) void VDllMain1() {
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V10vcore_Dmutator = VEncodePointer(VLookupConstant("_V10vcore_Dmutator", &_VW_V10vcore_Dmutator), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VLookupConstant("_V10vcore_Dsetter", &_VW_V10vcore_Dsetter), VPOINTER_OTHER);
}
V_DECLARE_FUNC(_V50_V10_Dset__setter_B_D11, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V10_Dset__mutator_B_D14, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dmutator, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0seed_V10vcore_Dsetter, _var0, _var1);
void _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.72 ##.reg.73 ##.reg.74) ((##vcore.display-word (##string ##.string.81) (bruijn ##.err.8 1 0)) (##vcore.write (bruijn ##.func.7 3 1) (bruijn ##.err.8 1 0)) (##vcore.newline (bruijn ##.err.8 1 0))) (##vcore.abort (bruijn ##.k.31 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D81.sym, VPOINTER_OTHER),
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
void _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.stderr->port (close _V50_V0vanity_V0seed_V10vcore_Dsetter_V0k4))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter_V0k4, self)))));
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
  // (##vcore.hash-table-ref (bruijn ##.k.30 0 0) (bruijn ##.setter-table.1 1 0) (bruijn ##.func.7 0 1) (close _V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda2))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      statics->vars[0],
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter_V0lambda2, self)))));
}
void _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.reg.75 ##.reg.76 ##.reg.77) ((##vcore.display-word (##string ##.string.82) (bruijn ##.err.10 1 0)) (##vcore.write (bruijn ##.func.9 3 1) (bruijn ##.err.10 1 0)) (##vcore.newline (bruijn ##.err.10 1 0))) (##vcore.abort (bruijn ##.k.37 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VDisplay2(runtime, NULL,
      VEncodePointer(&_V10_Dstring_D82.sym, VPOINTER_OTHER),
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
  // (##vcore.stderr->port (close _V50_V0vanity_V0seed_V10vcore_Dmutator_V0k5))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator_V0k5, self)))));
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
  // (##vcore.hash-table-ref (bruijn ##.k.36 0 0) (bruijn ##.mutator-table.4 1 3) (bruijn ##.func.9 0 1) (close _V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      statics->vars[3],
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator_V0lambda3, self)))));
}
static void _V0vanity_V0seed_V20_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.28 18 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.setter (bruijn ##..vcore.setter.2 14 1)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.mutator (bruijn ##..vcore.mutator.5 14 4)) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dsetter,
        VGetArg(statics, 14-1, 1)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dmutator,
        VGetArg(statics, 14-1, 4)),
        VNULL)));
}
static void _V0vanity_V0seed_V20_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_V0k17) (bruijn ##..vcore.set-mutator!.6 13 5) (bruijn ##.set-mutator!.14 5 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k17, self)))),
      VEncodeInt(13l), VEncodeInt(5l),
      VGetArg(statics, 5-1, 0)
    );
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
  // (basic-block 1 1 (##.reg.79) ((##vcore.string-set! (bruijn ##.vec.22 3 1) (bruijn ##.i.23 3 2) (bruijn ##.x.54 1 0))) ((bruijn ##.k.53 3 0) (bruijn ##.reg.79 0 0)))
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
static void _V0vanity_V0seed_V20_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda6, got ~D~N"
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
  // (basic-block 1 1 (##.reg.78) ((##vcore.string-ref (bruijn ##.vec.22 1 1) (bruijn ##.i.23 1 2))) ((bruijn ##.proc.24 1 3) (close _V0vanity_V0seed_V20_V0k18) (bruijn ##.reg.78 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k18, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-mutator!.14) (bruijn ##.set-mutator!.14 4 0) (close _V0vanity_V0seed_V20_V0k16) (##intrinsic ##vcore.string-ref) (close _V0vanity_V0seed_V20_V0lambda6))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k16, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dstring__ref;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda6, self))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D14(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.vector-set! (bruijn ##.k.56 2 0) (bruijn ##.vec.19 2 1) (bruijn ##.i.20 2 2) (bruijn ##.x.57 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      _var0);
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
  // (basic-block 1 1 (##.reg.80) ((##vcore.vector-ref (bruijn ##.vec.19 1 1) (bruijn ##.i.20 1 2))) ((bruijn ##.proc.21 1 3) (close _V0vanity_V0seed_V20_V0k19) (bruijn ##.reg.80 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k19, self)))),
      self->vars[0]);
    }
}
static void _V0vanity_V0seed_V20_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-mutator!.14) (bruijn ##.set-mutator!.14 3 0) (close _V0vanity_V0seed_V20_V0k15) (##intrinsic ##vcore.vector-ref) (close _V0vanity_V0seed_V20_V0lambda7))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k15, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dvector__ref;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda7, self))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D14(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.k.59 1 0) (bruijn ##.pair.17 1 1) (bruijn ##.x.60 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void _V0vanity_V0seed_V20_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.proc.18 0 2) (close _V0vanity_V0seed_V20_V0k20) (##inline ##vcore.cdr (bruijn ##.pair.17 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k20, self)))),
      VInlineCdr2(runtime,
        _var1));
}
static void _V0vanity_V0seed_V20_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-mutator!.14) (bruijn ##.set-mutator!.14 2 0) (close _V0vanity_V0seed_V20_V0k14) (##intrinsic ##vcore.cdr) (close _V0vanity_V0seed_V20_V0lambda8))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k14, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcdr;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda8, self))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D14(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-car! (bruijn ##.k.62 1 0) (bruijn ##.pair.15 1 1) (bruijn ##.x.63 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      statics->vars[0],
      statics->vars[1],
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
  // ((bruijn ##.proc.16 0 2) (close _V0vanity_V0seed_V20_V0k21) (##inline ##vcore.car (bruijn ##.pair.15 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k21, self)))),
      VInlineCar2(runtime,
        _var1));
}
static void _V0vanity_V0seed_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-mutator!.14) (bruijn ##.set-mutator!.14 1 0) (close _V0vanity_V0seed_V20_V0k13) (##intrinsic ##vcore.car) (close _V0vanity_V0seed_V20_V0lambda9))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k13, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcar;
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda9, self))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__mutator_B_D14(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.set-setter!.3 8 2) (close _V0vanity_V0seed_V20_V0k12) (bruijn ##..vcore.mutator.5 8 4) (bruijn ##.set-mutator!.14 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k12, self)))),
      VGetArg(statics, 8-1, 4),
      _var0);
}
void _V50_V10_Dset__mutator_B_D14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dset__mutator_B_D14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.k.47 0 0) (bruijn ##.mutator-table.4 8 3) (bruijn ##.getter.25 0 1) (bruijn ##.mutator.26 0 2))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      VGetArg(statics, 8-1, 3),
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0vanity_V0seed_V20_V0lambda5) (close "_V50_V10_Dset__mutator_B_D14"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda5, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dset__mutator_B_D14, self)))));
}
static void _V0vanity_V0seed_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_V0k11) (bruijn ##..vcore.set-setter!.3 6 2) (bruijn ##.set-setter!.11 5 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k11, self)))),
      VEncodeInt(6l), VEncodeInt(2l),
      VGetArg(statics, 5-1, 0)
    );
}
static void _V0vanity_V0seed_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-setter!.11) (bruijn ##.set-setter!.11 4 0) (close _V0vanity_V0seed_V20_V0k10) (##intrinsic ##vcore.string-ref) (##intrinsic ##vcore.string-set!))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k10, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dstring__ref;
    VWORD _arg2 = 
      _V40_V10vcore_Dstring__set_B;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D11(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-setter!.11) (bruijn ##.set-setter!.11 3 0) (close _V0vanity_V0seed_V20_V0k9) (##intrinsic ##vcore.vector-ref) (##intrinsic ##vcore.vector-set!))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k9, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dvector__ref;
    VWORD _arg2 = 
      _V40_V10vcore_Dvector__set_B;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D11(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-setter!.11) (bruijn ##.set-setter!.11 2 0) (close _V0vanity_V0seed_V20_V0k8) (##intrinsic ##vcore.cdr) (##intrinsic ##vcore.set-cdr!))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k8, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcdr;
    VWORD _arg2 = 
      _V40_V10vcore_Dset__cdr_B;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D11(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-setter!.11) (bruijn ##.set-setter!.11 1 0) (close _V0vanity_V0seed_V20_V0k7) (##intrinsic ##vcore.car) (##intrinsic ##vcore.set-car!))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k7, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dcar;
    VWORD _arg2 = 
      _V40_V10vcore_Dset__car_B;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D11(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V0vanity_V0seed_V20_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.set-setter!.11) (bruijn ##.set-setter!.11 0 0) (close _V0vanity_V0seed_V20_V0k6) (bruijn ##..vcore.setter.2 1 1) (bruijn ##.set-setter!.11 0 0))
  {
    VClosure * _closure = VDecodeClosure(_var0);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k6, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dset__setter_B_D11(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V10_Dset__setter_B_D11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dset__setter_B_D11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.k.66 0 0) (bruijn ##.setter-table.1 1 0) (bruijn ##.getter.12 0 1) (bruijn ##.setter.13 0 2))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      statics->vars[0],
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 6 ((bruijn ##.x.29 2 0) (close "_V50_V0vanity_V0seed_V10vcore_Dsetter") #f (bruijn ##.x.35 1 0) (close "_V50_V0vanity_V0seed_V10vcore_Dmutator") #f) ((close _V0vanity_V0seed_V20_V0lambda4) (close "_V50_V10_Dset__setter_B_D11")))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dsetter, self))));
    self->vars[2] = VEncodeBool(false);
    self->vars[3] = statics->vars[0];
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0seed_V10vcore_Dmutator, self))));
    self->vars[5] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0lambda4, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dset__setter_B_D11, self)))));
    }
}
static void _V0vanity_V0seed_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-hash-table (close _V0vanity_V0seed_V20_V0k3) (##intrinsic ##vcore.eq?) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k3, self)))),
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
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
  // (##vcore.make-hash-table (close _V0vanity_V0seed_V20_V0k2) (##intrinsic ##vcore.eq?) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k2, self)))),
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
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
  // (##vcore.make-import (close _V0vanity_V0seed_V20_V0k1) (##string ##.string.83))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0seed_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D83.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0seed_V20 = (VFunc)_V0vanity_V0seed_V20_V0lambda1;
