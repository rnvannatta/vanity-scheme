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

VEnv * _V60_V0vanity_V0compiler_V0alpha__convert;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1029 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1028 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1027 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1026 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1025 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1024 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D1023 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
VWEAK VWORD _V0alpha__convert;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0alpha__convert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "alpha-convert" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1022 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1021 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static VPair _V10_Dpair_D1020 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1019 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1018 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1017 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1016 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1015 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1014 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1013 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1012 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1011 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1010 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1009 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1008 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
static VPair _V10_Dpair_D1007 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1006 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1005 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1004 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1003 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1002 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1001 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1000 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V10instrinsic;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10instrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##instrinsic" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D132, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D130, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129, _var0, _var1, _var2, _var3, _var4, _var5);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D126, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D125, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D124, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert, _var0, _var1);
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D124_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D124_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.723) ((##vcore.not (bruijn ##.%x.348 1 0))) ((bruijn ##.%k.346 4 0) (bruijn ##.%r.723 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.721) ((##vcore.pair? (bruijn ##.x.133 1 1))) (if (bruijn ##.%p.721 0 0) (basic-block 1 1 (##.%x.722) ((##vcore.car (bruijn ##.x.133 2 1))) ((bruijn ##.memv.113 6 11) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D124_V0k8) (bruijn ##.%x.722 0 0) '(##pair ##.pair.1007))) ((bruijn ##.%k.346 1 0) #f)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D124_V0k8, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D1007, VPOINTER_PAIR));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D125_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D125_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.726) ((##vcore.not (bruijn ##.%x.352 1 0))) ((bruijn ##.%k.350 4 0) (bruijn ##.%r.726 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.724) ((##vcore.pair? (bruijn ##.x.134 1 1))) (if (bruijn ##.%p.724 0 0) (basic-block 1 1 (##.%x.725) ((##vcore.car (bruijn ##.x.134 2 1))) ((bruijn ##.memv.113 6 11) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D125_V0k9) (bruijn ##.%x.725 0 0) '(##pair ##.pair.1020))) ((bruijn ##.%k.350 1 0) #f)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D125_V0k9, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D126_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D126_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.13.137 0 0) ((bruijn ##.%k.354 3 0) (bruijn ##.x.13.137 0 0)) (basic-block 1 1 (##.%x.729) ((##vcore.cdr (bruijn ##.env.136 4 2))) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.lookup-env.126) #f (bruijn ##.lookup-env.126 5 2) (bruijn ##.%k.354 4 0) (bruijn ##.sym.135 4 1) (bruijn ##.%x.729 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D126(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D126, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.727) ((##vcore.null? (bruijn ##.env.136 1 2))) (if (bruijn ##.%p.727 0 0) ((bruijn ##.%k.354 1 0) #f) (basic-block 1 1 (##.%x.728) ((##vcore.car (bruijn ##.env.136 2 2))) ((bruijn ##.assv.112 6 10) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D126_V0k10) (bruijn ##.sym.135 2 1) (bruijn ##.%x.728 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D126_V0k10, self)))),
      statics->up->vars[1],
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.362 0 0) (bruijn ##.%k.361 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.108 14 6) (bruijn ##.%k.363 5 0) (bruijn ##.%x.364 0 0) (bruijn ##.env.731 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 6)), 3,
      VGetArg(statics, 5-1, 0),
      _var0,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda6, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.%x.732 ##.%x.733 ##.%r.734) ((##vcore.cons (bruijn ##.val.162 1 2) '()) (##vcore.cons (bruijn ##.x.161 1 1) (bruijn ##.%x.732 0 0)) (##vcore.cons 'define (bruijn ##.%x.733 0 1))) ((bruijn ##.%k.365 1 0) (bruijn ##.%r.734 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[2],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0define,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.109 13 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k16) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda6) (bruijn ##.new-xs.158 3 0) (bruijn ##.vals.160 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k16, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda6, self)))),
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 10 7) (bruijn ##.%k.368 0 0) (bruijn ##.val.163 0 1) (bruijn ##.env.731 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.env.731) ((##vcore.cons (bruijn ##.%x.369 1 0) (bruijn ##.env.140 8 2))) ((bruijn ##.map.109 12 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k15) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda7) (bruijn ##.vals.157 6 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda7, self)))),
      VGetArg(statics, 6-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.109 10 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k14) (##intrinsic ##vcore.cons) (bruijn ##.xs.156 4 1) (bruijn ##.new-xs.158 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k14, self)))),
      _V40_V10vcore_Dcons,
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.109 9 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k13) (bruijn ##.gensym.110 9 8) (bruijn ##.xs.156 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k13, self)))),
      VGetArg(statics, 9-1, 8),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.730 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k12) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda5) (bruijn ##.kk.14.141 3 1)) ((bruijn ##.%k.361 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k12, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda5, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k17(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.111 7 9) (bruijn ##.%k.359 2 0) (##string ##.string.1021))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 9)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1021.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.730) ((##vcore.null? (bruijn ##.tail-expr.155 1 0))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k11) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k17)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k11, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0k17, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.144 6 1) (bruijn ##.%k.386 2 0) (bruijn ##.expr.21.146 4 1) (bruijn ##.%x.387 1 0) (bruijn ##.%x.388 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.107 11 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k20) (bruijn ##.vals.18.148 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k20, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.736 1 1) ((bruijn ##.reverse.107 10 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k19) (bruijn ##.xs.17.147 2 2)) ((bruijn ##.%k.386 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k19, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.738 1 1) (basic-block 2 2 (##.expr.23.739 ##.%p.740) ((##vcore.cdr (bruijn ##.expr.22.737 2 0)) (##vcore.pair? (bruijn ##.expr.23.739 0 0))) (if (bruijn ##.%p.740 0 1) (basic-block 3 3 (##.xs.741 ##.expr.24.742 ##.%p.743) ((##vcore.car (bruijn ##.expr.23.739 1 0)) (##vcore.cdr (bruijn ##.expr.23.739 1 0)) (##vcore.pair? (bruijn ##.expr.24.742 0 1))) (if (bruijn ##.%p.743 0 2) (basic-block 3 3 (##.vals.744 ##.%x.745 ##.%p.746) ((##vcore.car (bruijn ##.expr.24.742 1 1)) (##vcore.cdr (bruijn ##.expr.24.742 1 1)) (##vcore.null? (bruijn ##.%x.745 0 1))) (if (bruijn ##.%p.746 0 2) (basic-block 3 3 (##.%x.747 ##.%x.748 ##.%x.749) ((##vcore.cdr (bruijn ##.expr.21.146 9 1)) (##vcore.cons (bruijn ##.xs.741 2 0) (bruijn ##.xs.17.147 9 2)) (##vcore.cons (bruijn ##.vals.744 1 0) (bruijn ##.vals.18.148 9 3))) ((bruijn ##.kk.20.149 6 1) (bruijn ##.%k.377 4 0) (bruijn ##.%x.747 0 0) (bruijn ##.%x.748 0 1) (bruijn ##.%x.749 0 2))) ((bruijn ##.%k.377 3 0) #f))) ((bruijn ##.%k.377 2 0) #f))) ((bruijn ##.%k.377 1 0) #f))) ((bruijn ##.%k.377 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 9-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 9-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.144 8 1) (bruijn ##.%k.373 3 0) (bruijn ##.expr.21.146 6 1) (bruijn ##.%x.374 1 0) (bruijn ##.%x.375 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.107 13 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k25) (bruijn ##.vals.18.148 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k25, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.107 12 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k24) (bruijn ##.xs.17.147 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k24, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.22.737 ##.%p.738) ((##vcore.car (bruijn ##.expr.21.146 4 1)) (##vcore.pair? (bruijn ##.expr.22.737 0 0))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k22) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k23)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k22, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k23, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.372 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0lambda10))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0lambda10, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k21(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.371 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0lambda9) (bruijn ##.loop.145 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0lambda9, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145, got ~D~N"
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
  // (basic-block 2 2 (##.%x.735 ##.%p.736) ((##vcore.pair? (bruijn ##.expr.21.146 1 1)) (##vcore.not (bruijn ##.%x.735 0 0))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k18) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k21)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k18, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145_V0k21, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-defines.127 ##.loop.145) #f (bruijn ##.loop.145 0 0) (bruijn ##.%k.370 1 0) (bruijn ##.defines.139 3 1) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V10_Dloop_D145(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda4) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda8))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda4, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda8, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.358 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127_V0lambda3, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.392 0 0) ((bruijn ##.%k.391 2 0) (bruijn ##.sym.168 2 1)) ((bruijn ##.%k.391 2 0) (bruijn ##.sym.168 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.60.170 0 0) (basic-block 1 1 (##.%r.750) ((##vcore.cdr (bruijn ##.x.60.170 1 0))) ((bruijn ##.%k.391 2 0) (bruijn ##.%r.750 0 0))) ((bruijn ##.lookup-intrinsic.104 7 2) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166_V0k27) (bruijn ##.sym.168 1 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166_V0k27, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.lookup-env.126) #f (bruijn ##.lookup-env.126 3 2) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166_V0k26) (bruijn ##.sym.168 0 1) (bruijn ##.env.169 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166_V0k26, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D126(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.755) ((##vcore.cons (bruijn ##.%x.397 3 0) (bruijn ##.%x.398 1 0))) ((bruijn ##.%k.394 7 0) (bruijn ##.%r.755 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.754) ((##vcore.cdr (bruijn ##.args.178 5 1))) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.iter-lambda.167 ##.genargs.176) #f (bruijn ##.genargs.176 6 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176_V0k29) (bruijn ##.%x.754 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176_V0k29, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.751) ((##vcore.null? (bruijn ##.args.178 1 1))) (if (bruijn ##.%p.751 0 0) ((bruijn ##.%k.394 1 0) '()) (basic-block 1 1 (##.%p.752) ((##vcore.pair? (bruijn ##.args.178 2 1))) (if (bruijn ##.%p.752 0 0) (basic-block 1 1 (##.%x.753) ((##vcore.car (bruijn ##.args.178 3 1))) ((bruijn ##.gensym.110 11 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176_V0k28) (bruijn ##.%x.753 0 0))) ((bruijn ##.gensym.110 10 8) (bruijn ##.%k.394 2 0) (bruijn ##.args.178 2 1))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176_V0k28, self)))),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.760) ((##vcore.cons (bruijn ##.%x.758 2 0) (bruijn ##.%x.405 1 0))) ((bruijn ##.%k.401 5 0) (bruijn ##.%r.760 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.756) ((##vcore.null? (bruijn ##.args.179 1 1))) (if (bruijn ##.%p.756 0 0) ((bruijn ##.%k.401 1 0) '()) (basic-block 1 1 (##.%p.757) ((##vcore.pair? (bruijn ##.args.179 2 1))) (if (bruijn ##.%p.757 0 0) (basic-block 2 2 (##.%x.758 ##.%x.759) ((##vcore.car (bruijn ##.args.179 3 1)) (##vcore.cdr (bruijn ##.args.179 3 1))) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.iter-lambda.167 ##.dedot.177) #f (bruijn ##.dedot.177 4 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177_V0k30) (bruijn ##.%x.759 0 1))) (basic-block 1 1 (##.%r.761) ((##vcore.cons (bruijn ##.args.179 3 1) '())) ((bruijn ##.%k.401 3 0) (bruijn ##.%r.761 0 0)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177_V0k30, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[1],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.764) ((##vcore.cons (bruijn ##.newargs.180 11 0) (bruijn ##.%x.407 1 0))) ((bruijn ##.%k.393 13 0) (bruijn ##.%r.764 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 0),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.763) ((##vcore.cons (bruijn ##.%x.409 1 0) '())) ((bruijn ##.append.105 17 3) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k39) (bruijn ##.new-defines.182 4 0) (bruijn ##.%x.763 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k39, self)))),
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 12 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k38) (bruijn ##.body.174 9 3) (bruijn ##.new-env.183 2 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k38, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 3);
    VWORD _arg2 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k37) (bruijn ##.dummy.63.184 2 2) (bruijn ##.%x.410 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k37, self)))),
      VEncodeInt(2l), VEncodeInt(2l),
      _var0
    );
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k36) (bruijn ##.new-env.183 1 1) (bruijn ##.new-env.62.186 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k36, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      self->vars[1]
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k35) (bruijn ##.new-defines.182 1 0) (bruijn ##.new-defines.61.185 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k35, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.env.762) ((##vcore.cons (bruijn ##.%x.411 1 0) (bruijn ##.env.175 6 4))) (letrec 3 (#f #f #f) ((bruijn ##.values.108 13 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0lambda11) (bruijn ##.defines.173 7 2) (bruijn ##.env.762 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 6-1, 4));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0lambda11, self)))),
      VGetArg(statics, 7-1, 2),
      statics->vars[0]);
    }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.109 10 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k34) (##intrinsic ##vcore.cons) (bruijn ##.%x.412 1 0) (bruijn ##.%x.413 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k34, self)))),
      _V40_V10vcore_Dcons,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.iter-lambda.167 ##.dedot.177) #f (bruijn ##.dedot.177 2 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k33) (bruijn ##.newargs.180 1 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k33, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.iter-lambda.167 ##.dedot.177) #f (bruijn ##.dedot.177 1 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k32) (bruijn ##.args.172 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k32, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.iter-lambda.167 ##.genargs.176) #f (bruijn ##.genargs.176 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k31) (bruijn ##.args.172 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Ddedot_D177, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V0k31, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167_V10_Dgenargs_D176(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.529 0 0) (bruijn ##.%k.524 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.852) ((##vcore.cons 'lambda (bruijn ##.%x.531 1 0))) ((bruijn ##.%k.530 2 0) (bruijn ##.%r.852 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.iter-lambda.167) #f (bruijn ##.iter-lambda.167 9 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k43) (bruijn ##.args.846 2 0) '() (bruijn ##.body.849 1 0) (bruijn ##.env.165 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k43, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      statics->vars[0];
    VWORD _arg4 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.525 0 0) (basic-block 2 2 (##.expr.28.844 ##.%p.845) ((##vcore.cdr (bruijn ##.x.164 7 1)) (##vcore.pair? (bruijn ##.expr.28.844 0 0))) (if (bruijn ##.%p.845 0 1) (basic-block 3 3 (##.args.846 ##.expr.29.847 ##.%p.848) ((##vcore.car (bruijn ##.expr.28.844 1 0)) (##vcore.cdr (bruijn ##.expr.28.844 1 0)) (##vcore.pair? (bruijn ##.expr.29.847 0 1))) (if (bruijn ##.%p.848 0 2) (basic-block 3 3 (##.body.849 ##.%x.850 ##.%p.851) ((##vcore.car (bruijn ##.expr.29.847 1 1)) (##vcore.cdr (bruijn ##.expr.29.847 1 1)) (##vcore.null? (bruijn ##.%x.850 0 1))) (if (bruijn ##.%p.851 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k42) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda13) (bruijn ##.kk.25.187 7 1)) ((bruijn ##.%k.524 5 0) #f))) ((bruijn ##.%k.524 4 0) #f))) ((bruijn ##.%k.524 3 0) #f))) ((bruijn ##.%k.524 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k42, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda13, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.765 1 0) (basic-block 1 1 (##.%x.843) ((##vcore.car (bruijn ##.x.164 5 1))) ((bruijn ##.equal?.102 9 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k41) 'lambda (bruijn ##.%x.843 0 0))) ((bruijn ##.%k.524 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k41, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.516 0 0) (bruijn ##.%k.509 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.840 ##.%x.841 ##.%r.842) ((##vcore.cons (bruijn ##.static?.831 5 0) (bruijn ##.%x.520 1 0)) (##vcore.cons (bruijn ##.name.828 6 0) (bruijn ##.%x.840 0 0)) (##vcore.cons '##qualified-lambda (bruijn ##.%x.841 0 1))) ((bruijn ##.%k.517 2 0) (bruijn ##.%r.842 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__lambda,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.iter-lambda.167) #f (bruijn ##.iter-lambda.167 12 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k48) (bruijn ##.args.834 2 0) '() (bruijn ##.body.837 1 0) (bruijn ##.env.165 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k48, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      statics->vars[0];
    VWORD _arg4 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.510 0 0) (basic-block 2 2 (##.expr.31.826 ##.%p.827) ((##vcore.cdr (bruijn ##.x.164 8 1)) (##vcore.pair? (bruijn ##.expr.31.826 0 0))) (if (bruijn ##.%p.827 0 1) (basic-block 3 3 (##.name.828 ##.expr.32.829 ##.%p.830) ((##vcore.car (bruijn ##.expr.31.826 1 0)) (##vcore.cdr (bruijn ##.expr.31.826 1 0)) (##vcore.pair? (bruijn ##.expr.32.829 0 1))) (if (bruijn ##.%p.830 0 2) (basic-block 3 3 (##.static?.831 ##.expr.33.832 ##.%p.833) ((##vcore.car (bruijn ##.expr.32.829 1 1)) (##vcore.cdr (bruijn ##.expr.32.829 1 1)) (##vcore.pair? (bruijn ##.expr.33.832 0 1))) (if (bruijn ##.%p.833 0 2) (basic-block 3 3 (##.args.834 ##.expr.34.835 ##.%p.836) ((##vcore.car (bruijn ##.expr.33.832 1 1)) (##vcore.cdr (bruijn ##.expr.33.832 1 1)) (##vcore.pair? (bruijn ##.expr.34.835 0 1))) (if (bruijn ##.%p.836 0 2) (basic-block 3 3 (##.body.837 ##.%x.838 ##.%p.839) ((##vcore.car (bruijn ##.expr.34.835 1 1)) (##vcore.cdr (bruijn ##.expr.34.835 1 1)) (##vcore.null? (bruijn ##.%x.838 0 1))) (if (bruijn ##.%p.839 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k47) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda14) (bruijn ##.kk.25.187 10 1)) ((bruijn ##.%k.509 7 0) #f))) ((bruijn ##.%k.509 6 0) #f))) ((bruijn ##.%k.509 5 0) #f))) ((bruijn ##.%k.509 4 0) #f))) ((bruijn ##.%k.509 3 0) #f))) ((bruijn ##.%k.509 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda14, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.766 1 0) (basic-block 1 1 (##.%x.825) ((##vcore.car (bruijn ##.x.164 6 1))) ((bruijn ##.equal?.102 10 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k46) '##qualified-lambda (bruijn ##.%x.825 0 0))) ((bruijn ##.%k.509 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k46, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.484 0 0) (bruijn ##.%k.481 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.811) ((##vcore.cons 'case-lambda (bruijn ##.%x.486 1 0))) ((bruijn ##.%k.485 2 0) (bruijn ##.%r.811 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.iter-lambda.167) #f (bruijn ##.iter-lambda.167 12 1) (bruijn ##.%k.487 0 0) (bruijn ##.arg.218 0 1) '() (bruijn ##.body.219 0 2) (bruijn ##.env.165 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      _var2;
    VWORD _arg4 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.109 16 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k53) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda17) (bruijn ##.args.216 2 1) (bruijn ##.bodies.217 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k53, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda17, self)))),
      statics->up->vars[1],
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.810) ((##vcore.null? (bruijn ##.tail-expr.215 1 0))) (if (bruijn ##.%p.810 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k52) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda16) (bruijn ##.kk.25.187 9 1)) ((bruijn ##.%k.481 5 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k52, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda16, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.39.205 6 1) (bruijn ##.%k.503 2 0) (bruijn ##.expr.41.207 4 1) (bruijn ##.%x.504 1 0) (bruijn ##.%x.505 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.107 19 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k56) (bruijn ##.bodies.38.209 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k56, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.813 1 1) ((bruijn ##.reverse.107 18 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k55) (bruijn ##.args.37.208 2 2)) ((bruijn ##.%k.503 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k55, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.815 1 1) (basic-block 3 3 (##.args.816 ##.expr.43.817 ##.%p.818) ((##vcore.car (bruijn ##.expr.42.814 2 0)) (##vcore.cdr (bruijn ##.expr.42.814 2 0)) (##vcore.pair? (bruijn ##.expr.43.817 0 1))) (if (bruijn ##.%p.818 0 2) (basic-block 3 3 (##.bodies.819 ##.%x.820 ##.%p.821) ((##vcore.car (bruijn ##.expr.43.817 1 1)) (##vcore.cdr (bruijn ##.expr.43.817 1 1)) (##vcore.null? (bruijn ##.%x.820 0 1))) (if (bruijn ##.%p.821 0 2) (basic-block 3 3 (##.%x.822 ##.%x.823 ##.%x.824) ((##vcore.cdr (bruijn ##.expr.41.207 8 1)) (##vcore.cons (bruijn ##.args.816 2 0) (bruijn ##.args.37.208 8 2)) (##vcore.cons (bruijn ##.bodies.819 1 0) (bruijn ##.bodies.38.209 8 3))) ((bruijn ##.kk.40.210 5 1) (bruijn ##.%k.495 3 0) (bruijn ##.%x.822 0 0) (bruijn ##.%x.823 0 1) (bruijn ##.%x.824 0 2))) ((bruijn ##.%k.495 2 0) #f))) ((bruijn ##.%k.495 1 0) #f))) ((bruijn ##.%k.495 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.39.205 8 1) (bruijn ##.%k.491 3 0) (bruijn ##.expr.41.207 6 1) (bruijn ##.%x.492 1 0) (bruijn ##.%x.493 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.107 21 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k61) (bruijn ##.bodies.38.209 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k61, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k59(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.107 20 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k60) (bruijn ##.args.37.208 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k60, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.42.814 ##.%p.815) ((##vcore.car (bruijn ##.expr.41.207 4 1)) (##vcore.pair? (bruijn ##.expr.42.814 0 0))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k58) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k59)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k58, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k59, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.490 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0lambda20))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0lambda20, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k57(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.489 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0lambda19) (bruijn ##.loop.206 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0lambda19, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206, got ~D~N"
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
  // (basic-block 2 2 (##.%x.812 ##.%p.813) ((##vcore.pair? (bruijn ##.expr.41.207 1 1)) (##vcore.not (bruijn ##.%x.812 0 0))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k54) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k57)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k54, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206_V0k57, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.loop.206) #f (bruijn ##.loop.206 0 0) (bruijn ##.%k.488 1 0) (bruijn ##.expr.36.809 2 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D206(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.482 0 0) (basic-block 1 1 (##.expr.36.809) ((##vcore.cdr (bruijn ##.x.164 9 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda15) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda18))) ((bruijn ##.%k.481 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda18, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.767 1 0) (basic-block 1 1 (##.%x.808) ((##vcore.car (bruijn ##.x.164 7 1))) ((bruijn ##.equal?.102 11 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k51) 'case-lambda (bruijn ##.%x.808 0 0))) ((bruijn ##.%k.481 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k51, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.454 0 0) (bruijn ##.%k.449 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.792 ##.%x.793 ##.%r.794) ((##vcore.cons (bruijn ##.static?.789 5 0) (bruijn ##.%x.458 1 0)) (##vcore.cons (bruijn ##.name.786 6 0) (bruijn ##.%x.792 0 0)) (##vcore.cons '##qualified-case-lambda (bruijn ##.%x.793 0 1))) ((bruijn ##.%k.455 2 0) (bruijn ##.%r.794 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__case__lambda,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda23, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.iter-lambda.167) #f (bruijn ##.iter-lambda.167 15 1) (bruijn ##.%k.459 0 0) (bruijn ##.arg.239 0 1) '() (bruijn ##.body.240 0 2) (bruijn ##.env.165 16 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      _var2;
    VWORD _arg4 = 
      VGetArg(statics, 16-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.109 19 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k66) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda23) (bruijn ##.args.237 2 1) (bruijn ##.bodies.238 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k66, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda23, self)))),
      statics->up->vars[1],
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.791) ((##vcore.null? (bruijn ##.tail-expr.236 1 0))) (if (bruijn ##.%p.791 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k65) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda22) (bruijn ##.kk.25.187 12 1)) ((bruijn ##.%k.449 7 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda22, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.50.226 6 1) (bruijn ##.%k.475 2 0) (bruijn ##.expr.52.228 4 1) (bruijn ##.%x.476 1 0) (bruijn ##.%x.477 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.107 22 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k69) (bruijn ##.bodies.49.230 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k69, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.796 1 1) ((bruijn ##.reverse.107 21 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k68) (bruijn ##.args.48.229 2 2)) ((bruijn ##.%k.475 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k68, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.798 1 1) (basic-block 3 3 (##.args.799 ##.expr.54.800 ##.%p.801) ((##vcore.car (bruijn ##.expr.53.797 2 0)) (##vcore.cdr (bruijn ##.expr.53.797 2 0)) (##vcore.pair? (bruijn ##.expr.54.800 0 1))) (if (bruijn ##.%p.801 0 2) (basic-block 3 3 (##.bodies.802 ##.%x.803 ##.%p.804) ((##vcore.car (bruijn ##.expr.54.800 1 1)) (##vcore.cdr (bruijn ##.expr.54.800 1 1)) (##vcore.null? (bruijn ##.%x.803 0 1))) (if (bruijn ##.%p.804 0 2) (basic-block 3 3 (##.%x.805 ##.%x.806 ##.%x.807) ((##vcore.cdr (bruijn ##.expr.52.228 8 1)) (##vcore.cons (bruijn ##.args.799 2 0) (bruijn ##.args.48.229 8 2)) (##vcore.cons (bruijn ##.bodies.802 1 0) (bruijn ##.bodies.49.230 8 3))) ((bruijn ##.kk.51.231 5 1) (bruijn ##.%k.467 3 0) (bruijn ##.%x.805 0 0) (bruijn ##.%x.806 0 1) (bruijn ##.%x.807 0 2))) ((bruijn ##.%k.467 2 0) #f))) ((bruijn ##.%k.467 1 0) #f))) ((bruijn ##.%k.467 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.50.226 8 1) (bruijn ##.%k.463 3 0) (bruijn ##.expr.52.228 6 1) (bruijn ##.%x.464 1 0) (bruijn ##.%x.465 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.107 24 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k74) (bruijn ##.bodies.49.230 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k74, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k72(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.107 23 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k73) (bruijn ##.args.48.229 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k73, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.53.797 ##.%p.798) ((##vcore.car (bruijn ##.expr.52.228 4 1)) (##vcore.pair? (bruijn ##.expr.53.797 0 0))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k71) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k72)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k71, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k72, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.462 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0lambda26))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0lambda26, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k70(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.461 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0lambda25) (bruijn ##.loop.227 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0lambda25, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227, got ~D~N"
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
  // (basic-block 2 2 (##.%x.795 ##.%p.796) ((##vcore.pair? (bruijn ##.expr.52.228 1 1)) (##vcore.not (bruijn ##.%x.795 0 0))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k67) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k70)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k67, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227_V0k70, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.loop.227) #f (bruijn ##.loop.227 0 0) (bruijn ##.%k.460 1 0) (bruijn ##.expr.47.790 2 1) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Dloop_D227(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.450 0 0) (basic-block 2 2 (##.expr.45.784 ##.%p.785) ((##vcore.cdr (bruijn ##.x.164 10 1)) (##vcore.pair? (bruijn ##.expr.45.784 0 0))) (if (bruijn ##.%p.785 0 1) (basic-block 3 3 (##.name.786 ##.expr.46.787 ##.%p.788) ((##vcore.car (bruijn ##.expr.45.784 1 0)) (##vcore.cdr (bruijn ##.expr.45.784 1 0)) (##vcore.pair? (bruijn ##.expr.46.787 0 1))) (if (bruijn ##.%p.788 0 2) (basic-block 2 2 (##.static?.789 ##.expr.47.790) ((##vcore.car (bruijn ##.expr.46.787 1 1)) (##vcore.cdr (bruijn ##.expr.46.787 1 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda21) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda24))) ((bruijn ##.%k.449 4 0) #f))) ((bruijn ##.%k.449 3 0) #f))) ((bruijn ##.%k.449 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda21, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda24, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.768 1 0) (basic-block 1 1 (##.%x.783) ((##vcore.car (bruijn ##.x.164 8 1))) ((bruijn ##.equal?.102 12 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k64) '##qualified-case-lambda (bruijn ##.%x.783 0 0))) ((bruijn ##.%k.449 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k64, self)))),
      _V10qualified__case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.445 0 0) (bruijn ##.%k.443 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.446 0 0) (bruijn ##.x.164 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.444 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k78) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda27) (bruijn ##.kk.25.187 8 1)) ((bruijn ##.%k.443 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k78, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda27, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.769 1 0) (basic-block 1 1 (##.%x.782) ((##vcore.car (bruijn ##.x.164 9 1))) ((bruijn ##.equal?.102 13 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k77) '##foreign.function (bruijn ##.%x.782 0 0))) ((bruijn ##.%k.443 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k77, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.439 0 0) (bruijn ##.%k.437 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.440 0 0) (bruijn ##.x.164 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.438 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k82) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda28) (bruijn ##.kk.25.187 9 1)) ((bruijn ##.%k.437 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k82, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda28, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.770 1 0) (basic-block 1 1 (##.%x.781) ((##vcore.car (bruijn ##.x.164 10 1))) ((bruijn ##.equal?.102 14 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k81) '##intrinsic (bruijn ##.%x.781 0 0))) ((bruijn ##.%k.437 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k81, self)))),
      _V10intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.433 0 0) (bruijn ##.%k.431 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.434 0 0) (bruijn ##.x.164 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.432 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k86) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda29) (bruijn ##.kk.25.187 10 1)) ((bruijn ##.%k.431 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k86, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda29, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.771 1 0) (basic-block 1 1 (##.%x.780) ((##vcore.car (bruijn ##.x.164 11 1))) ((bruijn ##.equal?.102 15 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k85) '##basic-intrinsic (bruijn ##.%x.780 0 0))) ((bruijn ##.%k.431 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k85, self)))),
      _V10basic__intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.426 0 0) (bruijn ##.%k.422 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.427 0 0) (bruijn ##.x.164 16 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 16-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.423 0 0) (basic-block 2 2 (##.expr.59.776 ##.%p.777) ((##vcore.cdr (bruijn ##.x.164 14 1)) (##vcore.pair? (bruijn ##.expr.59.776 0 0))) (if (bruijn ##.%p.777 0 1) (basic-block 2 2 (##.%x.778 ##.%p.779) ((##vcore.cdr (bruijn ##.expr.59.776 1 0)) (##vcore.null? (bruijn ##.%x.778 0 0))) (if (bruijn ##.%p.779 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k90) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda30) (bruijn ##.kk.25.187 13 1)) ((bruijn ##.%k.422 4 0) #f))) ((bruijn ##.%k.422 3 0) #f))) ((bruijn ##.%k.422 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k90, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda30, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.772 1 0) (basic-block 1 1 (##.%x.775) ((##vcore.car (bruijn ##.x.164 12 1))) ((bruijn ##.equal?.102 16 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k89) 'quote (bruijn ##.%x.775 0 0))) ((bruijn ##.%k.422 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k89, self)))),
      _V0quote,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.419 0 0) (bruijn ##.%k.418 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.106 17 4) (bruijn ##.%k.420 0 0) (##string ##.string.1022))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 4)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1022.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.773 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k93) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda31) (bruijn ##.kk.25.187 10 1)) ((bruijn ##.%k.418 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k93, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda31, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.774) ((##vcore.symbol? (bruijn ##.x.164 13 1))) (if (bruijn ##.%p.774 0 0) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128 ##.iter-symbol.166) #f (bruijn ##.iter-symbol.166 12 0) (bruijn ##.%k.415 1 0) (bruijn ##.x.164 13 1) (bruijn ##.env.165 13 2)) ((bruijn ##.%k.415 1 0) (bruijn ##.x.164 13 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 13-1, 1));
}
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.414 9 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda32) (bruijn ##.kk.25.187 9 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda32, self)))),
      VGetArg(statics, 9-1, 1));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k91(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.773) ((##vcore.null? (bruijn ##.x.164 11 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k92) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k94)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k92, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k94, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.772) ((##vcore.pair? (bruijn ##.x.164 10 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k88) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k91)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k88, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k91, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k83(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.771) ((##vcore.pair? (bruijn ##.x.164 9 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k84) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k87)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k84, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k87, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k79(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.770) ((##vcore.pair? (bruijn ##.x.164 8 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k80) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k83)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k80, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k83, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k75(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.769) ((##vcore.pair? (bruijn ##.x.164 7 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k76) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k79)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k76, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k79, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k62(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.768) ((##vcore.pair? (bruijn ##.x.164 6 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k63) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k75)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k75, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k49(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.767) ((##vcore.pair? (bruijn ##.x.164 5 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k50) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k62)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k50, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k62, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k44(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.766) ((##vcore.pair? (bruijn ##.x.164 4 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k45) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k49)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k49, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.765) ((##vcore.pair? (bruijn ##.x.164 3 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k40) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k44)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k40, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0k44, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167")) (##vcore.call/cc (bruijn ##.%k.390 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda12)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__symbol_D166, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V10_Diter__lambda_D167, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128_V0lambda12, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.855 ##.%r.856) ((##vcore.cons (bruijn ##.%x.536 4 0) (bruijn ##.%x.537 1 0)) (##vcore.cons 'letrec (bruijn ##.%x.855 0 0))) ((bruijn ##.%k.534 12 0) (bruijn ##.%r.856 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0letrec,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.854) ((##vcore.cons (bruijn ##.%x.539 1 0) '())) ((bruijn ##.append.105 14 3) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k103) (bruijn ##.new-defines.254 5 0) (bruijn ##.%x.854 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k103, self)))),
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 9 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k102) (bruijn ##.body.248 8 3) (bruijn ##.new-env.255 3 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k102, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k100(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.109 11 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k101) (bruijn ##.list.103 11 1) (bruijn ##.new-args.251 6 0) (bruijn ##.vals.253 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k101, self)))),
      VGetArg(statics, 11-1, 1),
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k100) (bruijn ##.dummy.66.256 2 2) (bruijn ##.%x.540 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k100, self)))),
      VEncodeInt(2l), VEncodeInt(2l),
      _var0
    );
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k98(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k99) (bruijn ##.new-env.255 1 1) (bruijn ##.new-env.65.258 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k99, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      self->vars[1]
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k98) (bruijn ##.new-defines.254 1 0) (bruijn ##.new-defines.64.257 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k98, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) ((bruijn ##.values.108 9 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0lambda33) (bruijn ##.defines.247 5 2) (bruijn ##.env.853 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0lambda33, self)))),
      VGetArg(statics, 5-1, 2),
      statics->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 5 7) (bruijn ##.%k.541 0 0) (bruijn ##.val.259 0 1) (bruijn ##.env.853 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.env.853) ((##vcore.cons (bruijn ##.%x.542 1 0) (bruijn ##.env.250 3 5))) ((bruijn ##.map.109 7 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k97) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0lambda34) (bruijn ##.vals.249 3 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      statics->up->up->vars[5]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k97, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0lambda34, self)))),
      statics->up->up->vars[4]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.109 5 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k96) (##intrinsic ##vcore.cons) (bruijn ##.args.246 1 1) (bruijn ##.new-args.251 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k96, self)))),
      _V40_V10vcore_Dcons,
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129, got ~D~N"
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
  // ((bruijn ##.map.109 4 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k95) (bruijn ##.gensym.110 4 8) (bruijn ##.args.246 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129_V0k95, self)))),
      statics->up->up->up->vars[8],
      _var1);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D130_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D130_V0lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 2 7) (bruijn ##.%k.544 0 0) (bruijn ##.arg.262 0 1) (bruijn ##.env.261 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[7]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D130, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.map.109 4 7) (bruijn ##.%k.543 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D130_V0lambda35) (bruijn ##.args.260 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D130_V0lambda35, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.651 0 0) (bruijn ##.%k.646 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.951 ##.%x.952 ##.%r.953) ((##vcore.cons (bruijn ##.%x.656 1 0) '()) (##vcore.cons (bruijn ##.%x.654 2 0) (bruijn ##.%x.951 0 0)) (##vcore.cons 'begin (bruijn ##.%x.952 0 1))) ((bruijn ##.%k.652 3 0) (bruijn ##.%r.953 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0begin,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 12 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k109) (bruijn ##.y.948 2 0) (bruijn ##.env.264 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k109, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 11 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k108) (bruijn ##.x.945 2 0) (bruijn ##.env.264 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k108, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.647 0 0) (basic-block 2 2 (##.expr.70.943 ##.%p.944) ((##vcore.cdr (bruijn ##.expr.263 7 1)) (##vcore.pair? (bruijn ##.expr.70.943 0 0))) (if (bruijn ##.%p.944 0 1) (basic-block 3 3 (##.x.945 ##.expr.71.946 ##.%p.947) ((##vcore.car (bruijn ##.expr.70.943 1 0)) (##vcore.cdr (bruijn ##.expr.70.943 1 0)) (##vcore.pair? (bruijn ##.expr.71.946 0 1))) (if (bruijn ##.%p.947 0 2) (basic-block 3 3 (##.y.948 ##.%x.949 ##.%p.950) ((##vcore.car (bruijn ##.expr.71.946 1 1)) (##vcore.cdr (bruijn ##.expr.71.946 1 1)) (##vcore.null? (bruijn ##.%x.949 0 1))) (if (bruijn ##.%p.950 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k107) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda37) (bruijn ##.kk.67.265 7 1)) ((bruijn ##.%k.646 5 0) #f))) ((bruijn ##.%k.646 4 0) #f))) ((bruijn ##.%k.646 3 0) #f))) ((bruijn ##.%k.646 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k107, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda37, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.857 1 0) (basic-block 1 1 (##.%x.942) ((##vcore.car (bruijn ##.expr.263 5 1))) ((bruijn ##.equal?.102 9 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k106) 'begin (bruijn ##.%x.942 0 0))) ((bruijn ##.%k.646 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k106, self)))),
      _V0begin,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.635 0 0) (bruijn ##.%k.629 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.938 ##.%x.939 ##.%x.940 ##.%r.941) ((##vcore.cons (bruijn ##.%x.642 1 0) '()) (##vcore.cons (bruijn ##.%x.640 2 0) (bruijn ##.%x.938 0 0)) (##vcore.cons (bruijn ##.%x.638 3 0) (bruijn ##.%x.939 0 1)) (##vcore.cons 'if (bruijn ##.%x.940 0 2))) ((bruijn ##.%k.636 4 0) (bruijn ##.%r.941 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 15 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k116) (bruijn ##.y.935 3 0) (bruijn ##.env.264 14 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k116, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 14 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k115) (bruijn ##.x.932 3 0) (bruijn ##.env.264 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k115, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 13 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k114) (bruijn ##.p.929 3 0) (bruijn ##.env.264 12 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k114, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.630 0 0) (basic-block 2 2 (##.expr.73.927 ##.%p.928) ((##vcore.cdr (bruijn ##.expr.263 8 1)) (##vcore.pair? (bruijn ##.expr.73.927 0 0))) (if (bruijn ##.%p.928 0 1) (basic-block 3 3 (##.p.929 ##.expr.74.930 ##.%p.931) ((##vcore.car (bruijn ##.expr.73.927 1 0)) (##vcore.cdr (bruijn ##.expr.73.927 1 0)) (##vcore.pair? (bruijn ##.expr.74.930 0 1))) (if (bruijn ##.%p.931 0 2) (basic-block 3 3 (##.x.932 ##.expr.75.933 ##.%p.934) ((##vcore.car (bruijn ##.expr.74.930 1 1)) (##vcore.cdr (bruijn ##.expr.74.930 1 1)) (##vcore.pair? (bruijn ##.expr.75.933 0 1))) (if (bruijn ##.%p.934 0 2) (basic-block 3 3 (##.y.935 ##.%x.936 ##.%p.937) ((##vcore.car (bruijn ##.expr.75.933 1 1)) (##vcore.cdr (bruijn ##.expr.75.933 1 1)) (##vcore.null? (bruijn ##.%x.936 0 1))) (if (bruijn ##.%p.937 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k113) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda38) (bruijn ##.kk.67.265 9 1)) ((bruijn ##.%k.629 6 0) #f))) ((bruijn ##.%k.629 5 0) #f))) ((bruijn ##.%k.629 4 0) #f))) ((bruijn ##.%k.629 3 0) #f))) ((bruijn ##.%k.629 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k113, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda38, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.858 1 0) (basic-block 1 1 (##.%x.926) ((##vcore.car (bruijn ##.expr.263 6 1))) ((bruijn ##.equal?.102 10 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k112) 'if (bruijn ##.%x.926 0 0))) ((bruijn ##.%k.629 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k112, self)))),
      _V0if,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.620 0 0) (bruijn ##.%k.615 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.923 ##.%x.924 ##.%r.925) ((##vcore.cons (bruijn ##.%x.625 1 0) '()) (##vcore.cons (bruijn ##.%x.623 2 0) (bruijn ##.%x.923 0 0)) (##vcore.cons 'or (bruijn ##.%x.924 0 1))) ((bruijn ##.%k.621 3 0) (bruijn ##.%r.925 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0or,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 14 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k122) (bruijn ##.y.920 2 0) (bruijn ##.env.264 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k122, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 13 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k121) (bruijn ##.x.917 2 0) (bruijn ##.env.264 12 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k121, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.616 0 0) (basic-block 2 2 (##.expr.77.915 ##.%p.916) ((##vcore.cdr (bruijn ##.expr.263 9 1)) (##vcore.pair? (bruijn ##.expr.77.915 0 0))) (if (bruijn ##.%p.916 0 1) (basic-block 3 3 (##.x.917 ##.expr.78.918 ##.%p.919) ((##vcore.car (bruijn ##.expr.77.915 1 0)) (##vcore.cdr (bruijn ##.expr.77.915 1 0)) (##vcore.pair? (bruijn ##.expr.78.918 0 1))) (if (bruijn ##.%p.919 0 2) (basic-block 3 3 (##.y.920 ##.%x.921 ##.%p.922) ((##vcore.car (bruijn ##.expr.78.918 1 1)) (##vcore.cdr (bruijn ##.expr.78.918 1 1)) (##vcore.null? (bruijn ##.%x.921 0 1))) (if (bruijn ##.%p.922 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k120) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda39) (bruijn ##.kk.67.265 9 1)) ((bruijn ##.%k.615 5 0) #f))) ((bruijn ##.%k.615 4 0) #f))) ((bruijn ##.%k.615 3 0) #f))) ((bruijn ##.%k.615 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k120, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda39, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.859 1 0) (basic-block 1 1 (##.%x.914) ((##vcore.car (bruijn ##.expr.263 7 1))) ((bruijn ##.equal?.102 11 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k119) 'or (bruijn ##.%x.914 0 0))) ((bruijn ##.%k.615 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k119, self)))),
      _V0or,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.591 0 0) (bruijn ##.%k.585 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-letrec.129) #f (bruijn ##.iter-letrec.129 17 5) (bruijn ##.%k.592 0 0) (bruijn ##.xs.298 4 1) '() (bruijn ##.body.898 1 0) (bruijn ##.vals.299 4 2) (bruijn ##.env.264 16 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      statics->vars[0];
    VWORD _arg4 = 
      statics->up->up->up->vars[2];
    VWORD _arg5 = 
      VGetArg(statics, 16-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.895) ((##vcore.null? (bruijn ##.tail-expr.297 1 0))) (if (bruijn ##.%p.895 0 0) (basic-block 2 2 (##.expr.89.896 ##.%p.897) ((##vcore.cdr (bruijn ##.expr.80.892 4 0)) (##vcore.pair? (bruijn ##.expr.89.896 0 0))) (if (bruijn ##.%p.897 0 1) (basic-block 3 3 (##.body.898 ##.%x.899 ##.%p.900) ((##vcore.car (bruijn ##.expr.89.896 1 0)) (##vcore.cdr (bruijn ##.expr.89.896 1 0)) (##vcore.null? (bruijn ##.%x.899 0 1))) (if (bruijn ##.%p.900 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k126) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda41) (bruijn ##.kk.67.265 13 1)) ((bruijn ##.%k.585 8 0) #f))) ((bruijn ##.%k.585 7 0) #f))) ((bruijn ##.%k.585 6 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k126, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda41, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.84.287 6 1) (bruijn ##.%k.609 2 0) (bruijn ##.expr.86.289 4 1) (bruijn ##.%x.610 1 0) (bruijn ##.%x.611 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.107 21 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k129) (bruijn ##.vals.83.291 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k129, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.902 1 1) ((bruijn ##.reverse.107 20 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k128) (bruijn ##.xs.82.290 2 2)) ((bruijn ##.%k.609 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k128, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.904 1 1) (basic-block 3 3 (##.xs.905 ##.expr.88.906 ##.%p.907) ((##vcore.car (bruijn ##.expr.87.903 2 0)) (##vcore.cdr (bruijn ##.expr.87.903 2 0)) (##vcore.pair? (bruijn ##.expr.88.906 0 1))) (if (bruijn ##.%p.907 0 2) (basic-block 3 3 (##.vals.908 ##.%x.909 ##.%p.910) ((##vcore.car (bruijn ##.expr.88.906 1 1)) (##vcore.cdr (bruijn ##.expr.88.906 1 1)) (##vcore.null? (bruijn ##.%x.909 0 1))) (if (bruijn ##.%p.910 0 2) (basic-block 3 3 (##.%x.911 ##.%x.912 ##.%x.913) ((##vcore.cdr (bruijn ##.expr.86.289 8 1)) (##vcore.cons (bruijn ##.xs.905 2 0) (bruijn ##.xs.82.290 8 2)) (##vcore.cons (bruijn ##.vals.908 1 0) (bruijn ##.vals.83.291 8 3))) ((bruijn ##.kk.85.292 5 1) (bruijn ##.%k.601 3 0) (bruijn ##.%x.911 0 0) (bruijn ##.%x.912 0 1) (bruijn ##.%x.913 0 2))) ((bruijn ##.%k.601 2 0) #f))) ((bruijn ##.%k.601 1 0) #f))) ((bruijn ##.%k.601 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.84.287 8 1) (bruijn ##.%k.597 3 0) (bruijn ##.expr.86.289 6 1) (bruijn ##.%x.598 1 0) (bruijn ##.%x.599 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.107 23 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k134) (bruijn ##.vals.83.291 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k134, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k132(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.107 22 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k133) (bruijn ##.xs.82.290 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k133, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.87.903 ##.%p.904) ((##vcore.car (bruijn ##.expr.86.289 4 1)) (##vcore.pair? (bruijn ##.expr.87.903 0 0))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k131) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k132)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k131, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k132, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.596 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0lambda44))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0lambda44, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k130(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.595 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0lambda43) (bruijn ##.loop.288 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0lambda43, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288, got ~D~N"
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
  // (basic-block 2 2 (##.%x.901 ##.%p.902) ((##vcore.pair? (bruijn ##.expr.86.289 1 1)) (##vcore.not (bruijn ##.%x.901 0 0))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k127) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k130)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k127, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288_V0k130, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131 ##.loop.288) #f (bruijn ##.loop.288 0 0) (bruijn ##.%k.594 1 0) (bruijn ##.expr.81.894 2 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D288(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.586 0 0) (basic-block 2 2 (##.expr.80.892 ##.%p.893) ((##vcore.cdr (bruijn ##.expr.263 10 1)) (##vcore.pair? (bruijn ##.expr.80.892 0 0))) (if (bruijn ##.%p.893 0 1) (basic-block 1 1 (##.expr.81.894) ((##vcore.car (bruijn ##.expr.80.892 1 0))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda40) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda42))) ((bruijn ##.%k.585 3 0) #f))) ((bruijn ##.%k.585 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda42, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.860 1 0) (basic-block 1 1 (##.%x.891) ((##vcore.car (bruijn ##.expr.263 8 1))) ((bruijn ##.equal?.102 12 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k125) 'letrec (bruijn ##.%x.891 0 0))) ((bruijn ##.%k.585 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k125, self)))),
      _V0letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.557 0 0) (bruijn ##.%k.550 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.877) ((##vcore.cdr (bruijn ##.%x.561 1 0))) ((bruijn ##.append.105 25 3) (bruijn ##.%k.558 3 0) (bruijn ##.%x.876 2 1) (bruijn ##.%x.877 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 3)), 3,
      statics->up->up->vars[0],
      statics->up->vars[1],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.875 ##.%x.876) ((##vcore.cons (bruijn ##.path.865 7 0) '()) (##vcore.cons '##letrec (bruijn ##.%x.875 0 0))) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-letrec.129) #f (bruijn ##.iter-letrec.129 20 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k139) (bruijn ##.xs.318 5 1) '() (bruijn ##.body.872 2 0) (bruijn ##.vals.319 5 2) (bruijn ##.env.264 19 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10letrec,
      self->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k139, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      statics->up->vars[0];
    VWORD _arg4 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg5 = 
      VGetArg(statics, 19-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.869) ((##vcore.null? (bruijn ##.tail-expr.317 1 0))) (if (bruijn ##.%p.869 0 0) (basic-block 2 2 (##.expr.101.870 ##.%p.871) ((##vcore.cdr (bruijn ##.expr.92.866 4 1)) (##vcore.pair? (bruijn ##.expr.101.870 0 0))) (if (bruijn ##.%p.871 0 1) (basic-block 3 3 (##.body.872 ##.%x.873 ##.%p.874) ((##vcore.car (bruijn ##.expr.101.870 1 0)) (##vcore.cdr (bruijn ##.expr.101.870 1 0)) (##vcore.null? (bruijn ##.%x.873 0 1))) (if (bruijn ##.%p.874 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k138) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda46) (bruijn ##.kk.67.265 15 1)) ((bruijn ##.%k.550 9 0) #f))) ((bruijn ##.%k.550 8 0) #f))) ((bruijn ##.%k.550 7 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k138, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda46, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.96.307 6 1) (bruijn ##.%k.579 2 0) (bruijn ##.expr.98.309 4 1) (bruijn ##.%x.580 1 0) (bruijn ##.%x.581 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.107 23 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k142) (bruijn ##.vals.95.311 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k142, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.879 1 1) ((bruijn ##.reverse.107 22 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k141) (bruijn ##.xs.94.310 2 2)) ((bruijn ##.%k.579 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k141, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.881 1 1) (basic-block 3 3 (##.xs.882 ##.expr.100.883 ##.%p.884) ((##vcore.car (bruijn ##.expr.99.880 2 0)) (##vcore.cdr (bruijn ##.expr.99.880 2 0)) (##vcore.pair? (bruijn ##.expr.100.883 0 1))) (if (bruijn ##.%p.884 0 2) (basic-block 3 3 (##.vals.885 ##.%x.886 ##.%p.887) ((##vcore.car (bruijn ##.expr.100.883 1 1)) (##vcore.cdr (bruijn ##.expr.100.883 1 1)) (##vcore.null? (bruijn ##.%x.886 0 1))) (if (bruijn ##.%p.887 0 2) (basic-block 3 3 (##.%x.888 ##.%x.889 ##.%x.890) ((##vcore.cdr (bruijn ##.expr.98.309 8 1)) (##vcore.cons (bruijn ##.xs.882 2 0) (bruijn ##.xs.94.310 8 2)) (##vcore.cons (bruijn ##.vals.885 1 0) (bruijn ##.vals.95.311 8 3))) ((bruijn ##.kk.97.312 5 1) (bruijn ##.%k.571 3 0) (bruijn ##.%x.888 0 0) (bruijn ##.%x.889 0 1) (bruijn ##.%x.890 0 2))) ((bruijn ##.%k.571 2 0) #f))) ((bruijn ##.%k.571 1 0) #f))) ((bruijn ##.%k.571 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.96.307 8 1) (bruijn ##.%k.567 3 0) (bruijn ##.expr.98.309 6 1) (bruijn ##.%x.568 1 0) (bruijn ##.%x.569 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.107 25 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k147) (bruijn ##.vals.95.311 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k147, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k145(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.107 24 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k146) (bruijn ##.xs.94.310 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k146, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.99.880 ##.%p.881) ((##vcore.car (bruijn ##.expr.98.309 4 1)) (##vcore.pair? (bruijn ##.expr.99.880 0 0))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k144) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k145)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k144, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k145, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.566 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0lambda49))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0lambda49, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k143(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.565 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0lambda48) (bruijn ##.loop.308 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0lambda48, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308, got ~D~N"
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
  // (basic-block 2 2 (##.%x.878 ##.%p.879) ((##vcore.pair? (bruijn ##.expr.98.309 1 1)) (##vcore.not (bruijn ##.%x.878 0 0))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k140) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k143)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308_V0k143, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131 ##.loop.308) #f (bruijn ##.loop.308 0 0) (bruijn ##.%k.564 1 0) (bruijn ##.expr.93.868 2 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V10_Dloop_D308(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.551 0 0) (basic-block 2 2 (##.expr.91.863 ##.%p.864) ((##vcore.cdr (bruijn ##.expr.263 11 1)) (##vcore.pair? (bruijn ##.expr.91.863 0 0))) (if (bruijn ##.%p.864 0 1) (basic-block 3 3 (##.path.865 ##.expr.92.866 ##.%p.867) ((##vcore.car (bruijn ##.expr.91.863 1 0)) (##vcore.cdr (bruijn ##.expr.91.863 1 0)) (##vcore.pair? (bruijn ##.expr.92.866 0 1))) (if (bruijn ##.%p.867 0 2) (basic-block 1 1 (##.expr.93.868) ((##vcore.car (bruijn ##.expr.92.866 1 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda45) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda47))) ((bruijn ##.%k.550 4 0) #f))) ((bruijn ##.%k.550 3 0) #f))) ((bruijn ##.%k.550 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda45, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda47, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.861 1 0) (basic-block 1 1 (##.%x.862) ((##vcore.car (bruijn ##.expr.263 9 1))) ((bruijn ##.equal?.102 13 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k137) '##letrec (bruijn ##.%x.862 0 0))) ((bruijn ##.%k.550 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k137, self)))),
      _V10letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-combination.130) #f (bruijn ##.iter-combination.130 9 6) (bruijn ##.%k.548 0 0) (bruijn ##.expr.263 8 1) (bruijn ##.env.264 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 6));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k148(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.547 5 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda50) (bruijn ##.kk.67.265 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda50, self)))),
      VGetArg(statics, 5-1, 1));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k135(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.861) ((##vcore.pair? (bruijn ##.expr.263 7 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k136) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k148)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k136, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k148, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k123(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.860) ((##vcore.pair? (bruijn ##.expr.263 6 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k124) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k135)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k124, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k135, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k117(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.859) ((##vcore.pair? (bruijn ##.expr.263 5 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k118) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k123)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k118, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k123, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k110(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.858) ((##vcore.pair? (bruijn ##.expr.263 4 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k111) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k117)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k111, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k117, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.857) ((##vcore.pair? (bruijn ##.expr.263 3 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k105) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k110)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k105, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k110, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.546 0 0) (##vcore.call/cc (bruijn ##.%k.545 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda36)) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.128) #f (bruijn ##.iter-atom.128 2 4) (bruijn ##.%k.545 1 0) (bruijn ##.expr.263 1 1) (bruijn ##.env.264 1 2)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0lambda36, self)))));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[4]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.application?.124) #f (bruijn ##.application?.124 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k104) (bruijn ##.expr.263 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131_V0k104, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D124(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D132, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.131) #f (bruijn ##.iter.131 1 7) (bruijn ##.%k.659 0 0) (bruijn ##.expr.322 0 1) '())
  {
    VClosure * _closure = VDecodeClosure(statics->vars[7]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.704 0 0) (bruijn ##.%k.702 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.705 0 0) (bruijn ##.expr.123 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.703 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k151) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52) (bruijn ##.kk.1.323 4 1)) ((bruijn ##.%k.702 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k151, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.954 1 0) (basic-block 1 1 (##.%x.994) ((##vcore.car (bruijn ##.expr.123 5 1))) ((bruijn ##.equal?.102 7 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k150) '##foreign.declare (bruijn ##.%x.994 0 0))) ((bruijn ##.%k.702 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k150, self)))),
      _V10foreign_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.694 0 0) (bruijn ##.%k.689 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.991 ##.%x.992 ##.%r.993) ((##vcore.cons (bruijn ##.%x.698 1 0) '()) (##vcore.cons (bruijn ##.f.985 4 0) (bruijn ##.%x.991 0 0)) (##vcore.cons '##vcore.declare (bruijn ##.%x.992 0 1))) ((bruijn ##.%k.695 2 0) (bruijn ##.%r.993 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Ddeclare,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.132) #f (bruijn ##.alpha-convert-impl.132 10 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k156) (bruijn ##.l.988 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k156, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D132(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.690 0 0) (basic-block 2 2 (##.expr.5.983 ##.%p.984) ((##vcore.cdr (bruijn ##.expr.123 8 1)) (##vcore.pair? (bruijn ##.expr.5.983 0 0))) (if (bruijn ##.%p.984 0 1) (basic-block 3 3 (##.f.985 ##.expr.6.986 ##.%p.987) ((##vcore.car (bruijn ##.expr.5.983 1 0)) (##vcore.cdr (bruijn ##.expr.5.983 1 0)) (##vcore.pair? (bruijn ##.expr.6.986 0 1))) (if (bruijn ##.%p.987 0 2) (basic-block 3 3 (##.l.988 ##.%x.989 ##.%p.990) ((##vcore.car (bruijn ##.expr.6.986 1 1)) (##vcore.cdr (bruijn ##.expr.6.986 1 1)) (##vcore.null? (bruijn ##.%x.989 0 1))) (if (bruijn ##.%p.990 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k155) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda53) (bruijn ##.kk.1.323 8 1)) ((bruijn ##.%k.689 5 0) #f))) ((bruijn ##.%k.689 4 0) #f))) ((bruijn ##.%k.689 3 0) #f))) ((bruijn ##.%k.689 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k155, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda53, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.955 1 0) (basic-block 1 1 (##.%x.982) ((##vcore.car (bruijn ##.expr.123 6 1))) ((bruijn ##.equal?.102 8 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k154) '##vcore.declare (bruijn ##.%x.982 0 0))) ((bruijn ##.%k.689 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k154, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.681 0 0) (bruijn ##.%k.676 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.979 ##.%x.980 ##.%r.981) ((##vcore.cons (bruijn ##.%x.685 1 0) '()) (##vcore.cons (bruijn ##.x.973 4 0) (bruijn ##.%x.979 0 0)) (##vcore.cons 'define (bruijn ##.%x.980 0 1))) ((bruijn ##.%k.682 2 0) (bruijn ##.%r.981 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0define,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.132) #f (bruijn ##.alpha-convert-impl.132 11 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k161) (bruijn ##.val.976 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k161, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D132(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.677 0 0) (basic-block 2 2 (##.expr.8.971 ##.%p.972) ((##vcore.cdr (bruijn ##.expr.123 9 1)) (##vcore.pair? (bruijn ##.expr.8.971 0 0))) (if (bruijn ##.%p.972 0 1) (basic-block 3 3 (##.x.973 ##.expr.9.974 ##.%p.975) ((##vcore.car (bruijn ##.expr.8.971 1 0)) (##vcore.cdr (bruijn ##.expr.8.971 1 0)) (##vcore.pair? (bruijn ##.expr.9.974 0 1))) (if (bruijn ##.%p.975 0 2) (basic-block 3 3 (##.val.976 ##.%x.977 ##.%p.978) ((##vcore.car (bruijn ##.expr.9.974 1 1)) (##vcore.cdr (bruijn ##.expr.9.974 1 1)) (##vcore.null? (bruijn ##.%x.977 0 1))) (if (bruijn ##.%p.978 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k160) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda54) (bruijn ##.kk.1.323 9 1)) ((bruijn ##.%k.676 5 0) #f))) ((bruijn ##.%k.676 4 0) #f))) ((bruijn ##.%k.676 3 0) #f))) ((bruijn ##.%k.676 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k160, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda54, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.956 1 0) (basic-block 1 1 (##.%x.970) ((##vcore.car (bruijn ##.expr.123 7 1))) ((bruijn ##.equal?.102 9 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k159) 'define (bruijn ##.%x.970 0 0))) ((bruijn ##.%k.676 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k159, self)))),
      _V0define,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.668 0 0) (bruijn ##.%k.663 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.967 ##.%x.968 ##.%r.969) ((##vcore.cons (bruijn ##.%x.672 1 0) '()) (##vcore.cons (bruijn ##.x.961 4 0) (bruijn ##.%x.967 0 0)) (##vcore.cons 'define (bruijn ##.%x.968 0 1))) ((bruijn ##.%k.669 2 0) (bruijn ##.%r.969 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0define,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.132) #f (bruijn ##.alpha-convert-impl.132 12 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k166) (bruijn ##.val.964 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k166, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D132(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.664 0 0) (basic-block 2 2 (##.expr.11.959 ##.%p.960) ((##vcore.cdr (bruijn ##.expr.123 10 1)) (##vcore.pair? (bruijn ##.expr.11.959 0 0))) (if (bruijn ##.%p.960 0 1) (basic-block 3 3 (##.x.961 ##.expr.12.962 ##.%p.963) ((##vcore.car (bruijn ##.expr.11.959 1 0)) (##vcore.cdr (bruijn ##.expr.11.959 1 0)) (##vcore.pair? (bruijn ##.expr.12.962 0 1))) (if (bruijn ##.%p.963 0 2) (basic-block 3 3 (##.val.964 ##.%x.965 ##.%p.966) ((##vcore.car (bruijn ##.expr.12.962 1 1)) (##vcore.cdr (bruijn ##.expr.12.962 1 1)) (##vcore.null? (bruijn ##.%x.965 0 1))) (if (bruijn ##.%p.966 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k165) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda55) (bruijn ##.kk.1.323 10 1)) ((bruijn ##.%k.663 5 0) #f))) ((bruijn ##.%k.663 4 0) #f))) ((bruijn ##.%k.663 3 0) #f))) ((bruijn ##.%k.663 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k165, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda55, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.957 1 0) (basic-block 1 1 (##.%x.958) ((##vcore.car (bruijn ##.expr.123 8 1))) ((bruijn ##.equal?.102 10 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k164) 'define-constant (bruijn ##.%x.958 0 0))) ((bruijn ##.%k.663 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k164, self)))),
      _V0define__constant,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.132) #f (bruijn ##.alpha-convert-impl.132 6 8) (bruijn ##.%k.661 0 0) (bruijn ##.expr.123 7 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D132(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k167(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.660 4 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda56) (bruijn ##.kk.1.323 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda56, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k162(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.957) ((##vcore.pair? (bruijn ##.expr.123 6 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k163) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k167)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k163, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k167, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k157(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.956) ((##vcore.pair? (bruijn ##.expr.123 5 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k158) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k162)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k158, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k162, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k152(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.955) ((##vcore.pair? (bruijn ##.expr.123 4 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k153) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k157)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k153, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k157, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.954) ((##vcore.pair? (bruijn ##.expr.123 3 1))) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k149) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k152)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k149, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k152, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 9 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D124") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D125") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D126") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D130") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D132")) (##vcore.call/cc (bruijn ##.%k.345 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda51)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D124, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D125, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D126, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D127, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D128, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D129, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D130, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D131, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D132, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda51, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.709 0 0) ((bruijn ##.%k.707 3 0) (bruijn ##.lst.342 3 2)) (basic-block 1 1 (##.%x.997) ((##vcore.cdr (bruijn ##.lst.342 4 2))) (##qualified-call (vanity compiler alpha-convert memtail) #t (bruijn ##.memtail.122 5 1) (bruijn ##.%k.707 4 0) (bruijn ##.x.341 4 1) (bruijn ##.%x.997 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0alpha__convert;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail, _V60_V0vanity_V0compiler_V0alpha__convert)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.712 0 0) ((bruijn ##.%k.707 2 0) (bruijn ##.lst.342 2 2)) ((bruijn ##.%k.707 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.995) ((##vcore.pair? (bruijn ##.lst.342 1 2))) (if (bruijn ##.%p.995 0 0) (basic-block 1 1 (##.%x.996) ((##vcore.car (bruijn ##.lst.342 2 2))) ((bruijn ##.equal?.102 4 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k168) (bruijn ##.x.341 2 1) (bruijn ##.%x.996 0 0))) ((bruijn ##.equal?.102 3 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k169) (bruijn ##.x.341 1 1) (bruijn ##.lst.342 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k168, self)))),
      statics->up->vars[1],
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k169, self)))),
      statics->vars[1],
      statics->vars[2]);
}
    }
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11) {
 if(argc != 12) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda2, got ~D~N"
  "-- expected 12~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[12]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 12, 12, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  self->vars[8] = _var8;
  self->vars[9] = _var9;
  self->vars[10] = _var10;
  self->vars[11] = _var11;
  // (##letrec (vanity compiler alpha-convert) 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert" (vanity compiler alpha-convert)) (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail" (vanity compiler alpha-convert))) (basic-block 2 2 (##.%x.998 ##.%r.999) ((##vcore.cons 'alpha-convert (bruijn ##.alpha-convert.121 1 0)) (##vcore.cons (bruijn ##.%x.998 0 0) '())) ((bruijn ##.%k.344 10 0) (bruijn ##.%r.999 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0alpha__convert = self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert, _V60_V0vanity_V0compiler_V0alpha__convert))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail, _V60_V0vanity_V0compiler_V0alpha__convert))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0alpha__convert_V20", &_V60_V0vanity_V0compiler_V0alpha__convert);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0alpha__convert,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[1]);
    }
    }
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda2) (##string ##.string.1023) (bruijn ##.%x.714 0 0) 'equal? 'list 'lookup-intrinsic 'append 'compiler-error 'reverse 'values 'map 'gensym 'error 'assv 'memv)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 15,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D1023.sym, VPOINTER_OTHER),
      _var0,
      _V0equal_Q,
      _V0list,
      _V0lookup__intrinsic,
      _V0append,
      _V0compiler__error,
      _V0reverse,
      _V0values,
      _V0map,
      _V0gensym,
      _V0error,
      _V0assv,
      _V0memv);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k7) (bruijn ##.%x.715 5 0) (bruijn ##.%x.716 4 0) (bruijn ##.%x.717 3 0) (bruijn ##.%x.718 2 0) (bruijn ##.%x.719 1 0) (bruijn ##.%x.720 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 7,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k7, self)))),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k6) (##string ##.string.1024))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D1024.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k5) (##string ##.string.1025))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1025.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k4) (##string ##.string.1026))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1026.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k3) (##string ##.string.1027))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1027.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k2) (##string ##.string.1028))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1028.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k1) (##string ##.string.1029))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1029.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0alpha__convert_V20 = (VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VInternSymbol(1810441535, &_VW_V0lookup__intrinsic.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0alpha__convert = VEncodePointer(VInternSymbol(-1170573105, &_VW_V0alpha__convert.sym), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VInternSymbol(471311928, &_VW_V0define__constant.sym), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0or = VEncodePointer(VInternSymbol(2016919801, &_VW_V0or.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VInternSymbol(1265111139, &_VW_V0begin.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V10instrinsic = VEncodePointer(VInternSymbol(344936007, &_VW_V10instrinsic.sym), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VInternSymbol(-473367874, &_VW_V10qualified__case__lambda.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VInternSymbol(905832333, &_VW_V10qualified__lambda.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V10_Dpair_D1020.first = _V0quote;
  _V10_Dpair_D1020.rest = VEncodePointer(&_V10_Dpair_D1019, VPOINTER_PAIR);
  _V10_Dpair_D1019.first = _V0lambda;
  _V10_Dpair_D1019.rest = VEncodePointer(&_V10_Dpair_D1018, VPOINTER_PAIR);
  _V10_Dpair_D1018.first = _V10qualified__lambda;
  _V10_Dpair_D1018.rest = VEncodePointer(&_V10_Dpair_D1017, VPOINTER_PAIR);
  _V10_Dpair_D1017.first = _V0case__lambda;
  _V10_Dpair_D1017.rest = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1016.first = _V10qualified__case__lambda;
  _V10_Dpair_D1016.rest = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1015.first = _V10instrinsic;
  _V10_Dpair_D1015.rest = VEncodePointer(&_V10_Dpair_D1014, VPOINTER_PAIR);
  _V10_Dpair_D1014.first = _V10basic__intrinsic;
  _V10_Dpair_D1014.rest = VEncodePointer(&_V10_Dpair_D1013, VPOINTER_PAIR);
  _V10_Dpair_D1013.first = _V10foreign_Dfunction;
  _V10_Dpair_D1013.rest = VEncodePointer(&_V10_Dpair_D1012, VPOINTER_PAIR);
  _V10_Dpair_D1012.first = _V0begin;
  _V10_Dpair_D1012.rest = VEncodePointer(&_V10_Dpair_D1011, VPOINTER_PAIR);
  _V10_Dpair_D1011.first = _V0if;
  _V10_Dpair_D1011.rest = VEncodePointer(&_V10_Dpair_D1010, VPOINTER_PAIR);
  _V10_Dpair_D1010.first = _V0or;
  _V10_Dpair_D1010.rest = VEncodePointer(&_V10_Dpair_D1009, VPOINTER_PAIR);
  _V10_Dpair_D1009.first = _V0letrec;
  _V10_Dpair_D1009.rest = VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR);
  _V10_Dpair_D1008.first = _V10letrec;
  _V10_Dpair_D1008.rest = VNULL;
  _V10_Dpair_D1007.first = _V0quote;
  _V10_Dpair_D1007.rest = VEncodePointer(&_V10_Dpair_D1006, VPOINTER_PAIR);
  _V10_Dpair_D1006.first = _V0lambda;
  _V10_Dpair_D1006.rest = VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR);
  _V10_Dpair_D1005.first = _V10qualified__lambda;
  _V10_Dpair_D1005.rest = VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR);
  _V10_Dpair_D1004.first = _V0case__lambda;
  _V10_Dpair_D1004.rest = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1003.first = _V10qualified__case__lambda;
  _V10_Dpair_D1003.rest = VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR);
  _V10_Dpair_D1002.first = _V10instrinsic;
  _V10_Dpair_D1002.rest = VEncodePointer(&_V10_Dpair_D1001, VPOINTER_PAIR);
  _V10_Dpair_D1001.first = _V10basic__intrinsic;
  _V10_Dpair_D1001.rest = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1000.first = _V10foreign_Dfunction;
  _V10_Dpair_D1000.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
