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

V_DECLARE_FUNC_BASIC(VEqHash, _var0);
V_DECLARE_FUNC_BASIC(VHashCombine, _var0, _var1);
V_DECLARE_FUNC_BASIC(VHashBlob, _var0);
V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0compiler_V0hush;

static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D153 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "_V0vanity_V0hashtable_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D152 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V0current__hash;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0current__hash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "current-hash" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D151 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "_V0vanity_V0compiler_V0hush_V20" };
VWEAK VWORD _V0hush__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hush__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hush-table-ref" };
VWEAK VWORD _V0hush__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hush__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hush-table-set!" };
VWEAK VWORD _V0make__hush__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hush__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hush-table" };
VWEAK VWORD _V0hush;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0hush = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "hush" };
static VPair _V10_Dpair_D150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0hash__table;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "hash-table" };
VWEAK VWORD _V0hush__table;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0hush__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "hush-table" };
VWEAK VWORD _V40VEqHash;
VWEAK VClosure _VW_V40VEqHash = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEqHash, NULL };
VWEAK VWORD _V40VHashCombine;
VWEAK VClosure _VW_V40VHashCombine = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashCombine, NULL };
VWEAK VWORD _V40VHashBlob;
VWEAK VClosure _VW_V40VHashBlob = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashBlob, NULL };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D149 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "not a record of the right type" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0hush__table_Dget;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hush__table_Dget = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hush-table.get" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V10_DARECORDDAWG;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10_DARECORDDAWG = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##.ARECORDDAWG" };
VWEAK VWORD _V10_DAVECTORDAWG;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10_DAVECTORDAWG = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##.AVECTORDAWG" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0make__hush__table, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref, _var0, _var1, _var2, _var3);
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.pair.39 0 0) (basic-block 1 1 (##.%r.115) ((##vcore.cdr (bruijn ##.pair.39 1 0))) ((bruijn ##.%k.59 5 0) (bruijn ##.%r.115 0 0))) ((bruijn ##.thunk.35 4 3) (bruijn ##.%k.59 4 0)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 1,
      statics->up->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.chain.38 0 0) ((bruijn ##.assoc.3 5 0) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k7) (bruijn ##.key.34 3 2) (bruijn ##.chain.38 0 0)) ((bruijn ##.thunk.35 3 3) (bruijn ##.%k.59 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k7, self)))),
      statics->up->up->vars[2],
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[3]), 1,
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.60 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.hash-table-ref.4 4 1) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k6) (bruijn ##.real.37 0 0) (bruijn ##.hash.36 1 0) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0lambda3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k6, self)))),
      _var0,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0lambda3, self)))));
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hush hush-table.get) #t (bruijn ##.hush-table.get.25 2 4) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k5) (bruijn ##.ht.33 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k5, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref, got ~D~N"
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
  // (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.23 1 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k4) (bruijn ##.key.34 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref_V0k4, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.pair.46 0 0) (##vcore.set-cdr! (bruijn ##.%k.61 4 0) (bruijn ##.pair.46 0 0) (bruijn ##.val.42 4 3)) (basic-block 3 3 (##.%x.116 ##.%x.117 ##.%x.118) ((##vcore.cons (bruijn ##.key.41 5 2) (bruijn ##.val.42 5 3)) (##vcore.cdr (bruijn ##.chain.45 2 0)) (##vcore.cons (bruijn ##.%x.116 0 0) (bruijn ##.%x.117 0 1))) (##vcore.set-cdr! (bruijn ##.%k.61 5 0) (bruijn ##.chain.45 2 0) (bruijn ##.%x.118 0 2))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->up->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VGetArg(statics, 5-1, 3));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      self->vars[2]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.hash-table-set!.5 7 2) (bruijn ##.%k.61 5 0) (bruijn ##.real.44 3 0) (bruijn ##.hash.43 4 0) (bruijn ##.%x.65 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 4,
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[0],
      statics->up->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.chain.45 0 0) ((bruijn ##.assoc.3 5 0) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k11) (bruijn ##.key.41 3 2) (bruijn ##.chain.45 0 0)) (basic-block 1 1 (##.%x.119) ((##vcore.cons (bruijn ##.key.41 4 2) (bruijn ##.val.42 4 3))) ((bruijn ##.list.6 6 3) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k12) (bruijn ##.%x.119 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k11, self)))),
      statics->up->up->vars[2],
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k12, self)))),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.67 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.hash-table-ref.4 4 1) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k10) (bruijn ##.real.44 0 0) (bruijn ##.hash.43 1 0) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0lambda4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k10, self)))),
      _var0,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hush hush-table.get) #t (bruijn ##.hush-table.get.25 2 4) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k9) (bruijn ##.ht.40 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k9, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B, got ~D~N"
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
  // (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.23 1 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k8) (bruijn ##.key.41 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B_V0k8, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.hash-combine.31 6 10) (bruijn ##.%k.68 5 0) (bruijn ##.%x.70 2 0) (bruijn ##.%x.71 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 10)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.122) ((##vcore.cdr (bruijn ##.x.47 4 1))) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.23 5 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V0k14) (bruijn ##.%x.122 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k14, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hush hush ##.loop.48) #f (bruijn ##.loop.48 5 0) (bruijn ##.%k.76 4 0) (bruijn ##.%x.127 2 0) (bruijn ##.%x.79 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.hash-combine.31 9 10) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48_V0k16) (bruijn ##.%x.80 0 0) (bruijn ##.h.50 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48_V0k16, self)))),
      _var0,
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.125 ##.%p.126) ((##vcore.vector-length (bruijn ##.x.47 6 1)) (##vcore.= (bruijn ##.i.49 1 1) (bruijn ##.%x.125 0 0))) (if (bruijn ##.%p.126 0 1) ((bruijn ##.%k.76 1 0) (bruijn ##.h.50 1 2)) (basic-block 2 2 (##.%x.127 ##.%x.128) ((##vcore.+ (bruijn ##.i.49 2 1) 1) (##vcore.vector-ref (bruijn ##.x.47 7 1) (bruijn ##.i.49 2 1))) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.23 8 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48_V0k15) (bruijn ##.%x.128 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48_V0k15, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hush hush ##.loop.48) #f (bruijn ##.loop.48 1 0) (bruijn ##.%k.68 5 0) 0 (bruijn ##.%x.83 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hush hush ##.loop.51) #f (bruijn ##.loop.51 5 0) (bruijn ##.%k.85 4 0) (bruijn ##.%x.132 2 0) (bruijn ##.%x.88 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.hash-combine.31 10 10) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51_V0k19) (bruijn ##.%x.89 0 0) (bruijn ##.h.53 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51_V0k19, self)))),
      _var0,
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.130 ##.%p.131) ((##vcore.record-length (bruijn ##.x.47 7 1)) (##vcore.= (bruijn ##.i.52 1 1) (bruijn ##.%x.130 0 0))) (if (bruijn ##.%p.131 0 1) ((bruijn ##.%k.85 1 0) (bruijn ##.h.53 1 2)) (basic-block 2 2 (##.%x.132 ##.%x.133) ((##vcore.+ (bruijn ##.i.52 2 1) 1) (##vcore.record-ref (bruijn ##.x.47 8 1) (bruijn ##.i.52 2 1))) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.23 9 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51_V0k18) (bruijn ##.%x.133 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordLength2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VRecordRef2(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51_V0k18, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hush hush ##.loop.51) #f (bruijn ##.loop.51 1 0) (bruijn ##.%k.68 6 0) 0 (bruijn ##.%x.92 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0hush(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.120) ((##vcore.pair? (bruijn ##.x.47 1 1))) (if (bruijn ##.%p.120 0 0) (basic-block 1 1 (##.%x.121) ((##vcore.car (bruijn ##.x.47 2 1))) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.23 3 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V0k13) (bruijn ##.%x.121 0 0))) (basic-block 1 1 (##.%p.123) ((##vcore.blob? (bruijn ##.x.47 2 1))) (if (bruijn ##.%p.123 0 0) ((bruijn ##.hash-blob.30 3 9) (bruijn ##.%k.68 2 0) (bruijn ##.x.47 2 1)) (basic-block 1 1 (##.%p.124) ((##vcore.vector? (bruijn ##.x.47 3 1))) (if (bruijn ##.%p.124 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48")) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.23 5 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V0k17) '##.AVECTORDAWG)) (basic-block 1 1 (##.%p.129) ((##vcore.record? (bruijn ##.x.47 4 1))) (if (bruijn ##.%p.129 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51")) (##qualified-call (vanity compiler hush hush) #t (bruijn ##.hush.23 6 2) (close _V50_V0vanity_V0compiler_V0hush_V0hush_V0k20) '##.ARECORDDAWG)) ((bruijn ##.eq-hash.32 5 11) (bruijn ##.%k.68 4 0) (bruijn ##.x.47 4 1))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k13, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VBlobP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[9]), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D48, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k17, self))));
    VWORD _arg1 = 
      _V10_DAVECTORDAWG;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V10_Dloop_D51, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush_V0k20, self))));
    VWORD _arg1 = 
      _V10_DARECORDDAWG;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0hush(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 11)), 2,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1]);
}
    }
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hush_V0make__hush__table_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0make__hush__table_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hush make-hush-table-impl) #t (bruijn ##.make-hush-table-impl.26 2 5) (bruijn ##.%k.93 1 0) (bruijn ##.%x.94 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0make__hush__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0make__hush__table, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-hash-table.8 2 5) (close _V50_V0vanity_V0compiler_V0hush_V0make__hush__table_V0k21) (##intrinsic ##vcore.eq?) (bruijn ##.current-hash.7 2 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0make__hush__table_V0k21, self)))),
      _V40_V10vcore_Deq_Q,
      statics->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.95 3 0) (bruijn ##.%x.97 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.96 0 0) (basic-block 1 1 (##.%r.134) ((##vcore.record-ref (bruijn ##.rec.54 2 1) 1)) ((bruijn ##.%k.95 2 0) (bruijn ##.%r.134 0 0))) (basic-block 2 2 (##.%x.135 ##.%x.136) ((##vcore.cons (bruijn ##.rec.54 2 1) '()) (##vcore.cons 'hush-table.get (bruijn ##.%x.135 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k23) #f 'error (##string ##.string.149) (bruijn ##.%x.136 0 1))))
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
      _V0hush__table_Dget,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k23, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D149.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hush ##.hush-table?.2) #t (bruijn ##.hush-table?.2.28 1 7) (close _V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k22) (bruijn ##.rec.54 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hush;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget_V0k22, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2, _V60_V0vanity_V0compiler_V0hush)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.%k.100 0 0) (bruijn ##.hush-table.1.29 1 8) (bruijn ##.hash-table.55 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 3,
      _var0,
      statics->vars[8],
      _var1);
}
void _V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.137) ((##vcore.record? (bruijn ##.x.56 1 1))) (if (bruijn ##.%p.137 0 0) (basic-block 2 2 (##.%x.138 ##.%r.139) ((##vcore.record-ref (bruijn ##.x.56 2 1) 0) (##vcore.eqv? (bruijn ##.%x.138 0 0) (bruijn ##.hush-table.1.29 3 8))) ((bruijn ##.%k.101 2 0) (bruijn ##.%r.139 0 1))) ((bruijn ##.%k.101 1 0) #f)))
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
static void _V0vanity_V0compiler_V0hush_V20_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 8 8 (##.%x.141 ##.%x.142 ##.%x.143 ##.%x.144 ##.%x.145 ##.%x.146 ##.%x.147 ##.%r.148) ((##vcore.cons 'hush (bruijn ##.hush.23 2 2)) (##vcore.cons 'make-hush-table (bruijn ##.make-hush-table.24 2 3)) (##vcore.cons 'hush-table-set! (bruijn ##.hush-table-set!.22 2 1)) (##vcore.cons 'hush-table-ref (bruijn ##.hush-table-ref.21 2 0)) (##vcore.cons (bruijn ##.%x.144 0 3) '()) (##vcore.cons (bruijn ##.%x.143 0 2) (bruijn ##.%x.145 0 4)) (##vcore.cons (bruijn ##.%x.142 0 1) (bruijn ##.%x.146 0 5)) (##vcore.cons (bruijn ##.%x.141 0 0) (bruijn ##.%x.147 0 6))) ((bruijn ##.%k.58 7 0) (bruijn ##.%r.148 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0hush,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0make__hush__table,
      statics->up->vars[3]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0hush__table__set_B,
      statics->up->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0hush__table__ref,
      statics->up->vars[0]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[7]);
    }
}
static void _V0vanity_V0compiler_V0hush_V20_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hush_V20_V0k25) (bruijn ##.hush-table?.27 1 6) (bruijn ##.hush-table?.2.28 1 7))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k25, self)))),
      VEncodeInt(1l), VEncodeInt(6l),
      statics->vars[7]
    );
}
static void _V0vanity_V0compiler_V0hush_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hush_V20_V0lambda2, got ~D~N"
  "-- expected 6~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (##letrec (vanity compiler hush) 12 ((close "_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref" (vanity compiler hush)) (close "_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B" (vanity compiler hush)) (close "_V50_V0vanity_V0compiler_V0hush_V0hush" (vanity compiler hush)) (close "_V50_V0vanity_V0compiler_V0hush_V0make__hush__table" (vanity compiler hush)) (close "_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget" (vanity compiler hush)) (close "_V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl" (vanity compiler hush)) #f (close "_V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2" (vanity compiler hush)) #f (##basic-intrinsic "VHashBlob") (##basic-intrinsic "VHashCombine") (##basic-intrinsic "VEqHash")) (basic-block 1 1 (##.%x.140) ((##vcore.cons 'hush-table '(##pair ##.pair.150))) (set! (close _V0vanity_V0compiler_V0hush_V20_V0k24) (bruijn ##.hush-table.1.29 1 8) (bruijn ##.%x.140 0 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[12]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hush = self;
    VInitEnv(self, 12, 12, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__ref, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table__set_B, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0make__hush__table, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0hush__table_Dget, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V0make__hush__table__impl, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[6] = VEncodeBool(false);
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hush_V10_Dhush__table_Q_D2, _V60_V0vanity_V0compiler_V0hush))));
    self->vars[8] = VEncodeBool(false);
    self->vars[9] = _V40VHashBlob;
    self->vars[10] = _V40VHashCombine;
    self->vars[11] = _V40VEqHash;
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hush_V20", &_V60_V0vanity_V0compiler_V0hush);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0hush__table,
      VEncodePointer(&_V10_Dpair_D150, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k24, self)))),
      VEncodeInt(1l), VEncodeInt(8l),
      self->vars[0]
    );
    }
    }
}
static void _V0vanity_V0compiler_V0hush_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hush_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0hush_V20_V0lambda2) (##string ##.string.151) (bruijn ##.%x.112 0 0) 'assoc 'hash-table-ref 'hash-table-set! 'list 'current-hash 'make-hash-table)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 9,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D151.sym, VPOINTER_OTHER),
      _var0,
      _V0assoc,
      _V0hash__table__ref,
      _V0hash__table__set_B,
      _V0list,
      _V0current__hash,
      _V0make__hash__table);
}
static void _V0vanity_V0compiler_V0hush_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hush_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hush_V20_V0k3) (bruijn ##.%x.113 1 0) (bruijn ##.%x.114 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hush_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hush_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hush_V20_V0k2) (##string ##.string.152))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D152.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hush_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hush_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hush_V20_V0k1) (##string ##.string.153))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hush_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D153.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0hush_V20 = (VFunc)_V0vanity_V0compiler_V0hush_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0make__hash__table = VEncodePointer(VInternSymbol(-2146525516, &_VW_V0make__hash__table.sym), VPOINTER_OTHER);
  _V0current__hash = VEncodePointer(VInternSymbol(-1388026837, &_VW_V0current__hash.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VInternSymbol(-799540310, &_VW_V0hash__table__set_B.sym), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VInternSymbol(987278019, &_VW_V0hash__table__ref.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0hush__table__ref = VEncodePointer(VInternSymbol(-845139466, &_VW_V0hush__table__ref.sym), VPOINTER_OTHER);
  _V0hush__table__set_B = VEncodePointer(VInternSymbol(-1662644055, &_VW_V0hush__table__set_B.sym), VPOINTER_OTHER);
  _V0make__hush__table = VEncodePointer(VInternSymbol(-1788547486, &_VW_V0make__hush__table.sym), VPOINTER_OTHER);
  _V0hush = VEncodePointer(VInternSymbol(2033234706, &_VW_V0hush.sym), VPOINTER_OTHER);
  _V0hash__table = VEncodePointer(VInternSymbol(-747738850, &_VW_V0hash__table.sym), VPOINTER_OTHER);
  _V0hush__table = VEncodePointer(VInternSymbol(346844745, &_VW_V0hush__table.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0hush__table_Dget = VEncodePointer(VInternSymbol(-1806845772, &_VW_V0hush__table_Dget.sym), VPOINTER_OTHER);
  _V10_DARECORDDAWG = VEncodePointer(VInternSymbol(911526808, &_VW_V10_DARECORDDAWG.sym), VPOINTER_OTHER);
  _V10_DAVECTORDAWG = VEncodePointer(VInternSymbol(778957291, &_VW_V10_DAVECTORDAWG.sym), VPOINTER_OTHER);
  _V10_Dpair_D150.first = _V0hash__table;
  _V10_Dpair_D150.rest = VNULL;
  _V40VEqHash = VEncodePointer(VLookupConstant("_V40VEqHash", &_VW_V40VEqHash), VPOINTER_CLOSURE);
  _V40VHashCombine = VEncodePointer(VLookupConstant("_V40VHashCombine", &_VW_V40VHashCombine), VPOINTER_CLOSURE);
  _V40VHashBlob = VEncodePointer(VLookupConstant("_V40VHashBlob", &_VW_V40VHashBlob), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
