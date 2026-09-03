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

VEnv * _V60_V0vanity_V0compiler_V0optimize;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1237 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1236 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1235 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1234 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1233 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1232 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1231 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0any_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0any_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "any\?" };
VWEAK VWORD _V0variable__pure_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0variable__pure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "variable-pure\?" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1230 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0optimize_V20" };
VWEAK VWORD _V0qualify__callsites;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0qualify__callsites = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "qualify-callsites" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1229 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1228 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "qualify-callsites: NO matching case" };
VWEAK VWORD _V10qualified__call;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10qualified__call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##qualified-call" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
VWEAK VWORD _V0basic__block;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0basic__block = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "basic-block" };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _var0, _var1, _var2, _var3, _var4, _var5, _var6);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites, _var0, _var1);
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.723 0 0) (bruijn ##.%k.718 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1126 ##.%x.1127 ##.%r.1128) ((##vcore.cons (bruijn ##.%x.727 1 0) '()) (##vcore.cons (bruijn ##.xs.1120 4 0) (bruijn ##.%x.1126 0 0)) (##vcore.cons 'lambda (bruijn ##.%x.1127 0 1))) ((bruijn ##.%k.724 2 0) (bruijn ##.%r.1128 0 2)))
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
      _V0lambda,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 10 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k12) (bruijn ##.current-qualname.148 9 1) (bruijn ##.qualified-funcs.149 9 2) (bruijn ##.body.1123 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k12, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.719 0 0) (basic-block 2 2 (##.expr.25.1118 ##.%p.1119) ((##vcore.cdr (bruijn ##.expr.150 6 3)) (##vcore.pair? (bruijn ##.expr.25.1118 0 0))) (if (bruijn ##.%p.1119 0 1) (basic-block 3 3 (##.xs.1120 ##.expr.26.1121 ##.%p.1122) ((##vcore.car (bruijn ##.expr.25.1118 1 0)) (##vcore.cdr (bruijn ##.expr.25.1118 1 0)) (##vcore.pair? (bruijn ##.expr.26.1121 0 1))) (if (bruijn ##.%p.1122 0 2) (basic-block 3 3 (##.body.1123 ##.%x.1124 ##.%p.1125) ((##vcore.car (bruijn ##.expr.26.1121 1 1)) (##vcore.cdr (bruijn ##.expr.26.1121 1 1)) (##vcore.null? (bruijn ##.%x.1124 0 1))) (if (bruijn ##.%p.1125 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k11) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda4) (bruijn ##.kk.22.151 7 1)) ((bruijn ##.%k.718 5 0) #f))) ((bruijn ##.%k.718 4 0) #f))) ((bruijn ##.%k.718 3 0) #f))) ((bruijn ##.%k.718 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 3));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k11, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda4, self)))),
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.866 1 0) (basic-block 1 1 (##.%x.1117) ((##vcore.car (bruijn ##.expr.150 4 3))) ((bruijn ##.equal?.120 8 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k10) 'lambda (bruijn ##.%x.1117 0 0))) ((bruijn ##.%k.718 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k10, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.708 0 0) (bruijn ##.%k.701 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1112 ##.%x.1113 ##.%x.1114 ##.%x.1115 ##.%r.1116) ((##vcore.cons (bruijn ##.%x.714 1 0) '()) (##vcore.cons (bruijn ##.xs.1106 4 0) (bruijn ##.%x.1112 0 0)) (##vcore.cons (bruijn ##.static?.1103 5 0) (bruijn ##.%x.1113 0 1)) (##vcore.cons (bruijn ##.name.1100 6 0) (bruijn ##.%x.1114 0 2)) (##vcore.cons '##qualified-lambda (bruijn ##.%x.1115 0 3))) ((bruijn ##.%k.709 2 0) (bruijn ##.%r.1116 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__lambda,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[4]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 13 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k17) (bruijn ##.name.1100 4 0) (bruijn ##.qualified-funcs.149 12 2) (bruijn ##.body.1109 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k17, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.702 0 0) (basic-block 2 2 (##.expr.28.1098 ##.%p.1099) ((##vcore.cdr (bruijn ##.expr.150 7 3)) (##vcore.pair? (bruijn ##.expr.28.1098 0 0))) (if (bruijn ##.%p.1099 0 1) (basic-block 3 3 (##.name.1100 ##.expr.29.1101 ##.%p.1102) ((##vcore.car (bruijn ##.expr.28.1098 1 0)) (##vcore.cdr (bruijn ##.expr.28.1098 1 0)) (##vcore.pair? (bruijn ##.expr.29.1101 0 1))) (if (bruijn ##.%p.1102 0 2) (basic-block 3 3 (##.static?.1103 ##.expr.30.1104 ##.%p.1105) ((##vcore.car (bruijn ##.expr.29.1101 1 1)) (##vcore.cdr (bruijn ##.expr.29.1101 1 1)) (##vcore.pair? (bruijn ##.expr.30.1104 0 1))) (if (bruijn ##.%p.1105 0 2) (basic-block 3 3 (##.xs.1106 ##.expr.31.1107 ##.%p.1108) ((##vcore.car (bruijn ##.expr.30.1104 1 1)) (##vcore.cdr (bruijn ##.expr.30.1104 1 1)) (##vcore.pair? (bruijn ##.expr.31.1107 0 1))) (if (bruijn ##.%p.1108 0 2) (basic-block 3 3 (##.body.1109 ##.%x.1110 ##.%p.1111) ((##vcore.car (bruijn ##.expr.31.1107 1 1)) (##vcore.cdr (bruijn ##.expr.31.1107 1 1)) (##vcore.null? (bruijn ##.%x.1110 0 1))) (if (bruijn ##.%p.1111 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k16) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda5) (bruijn ##.kk.22.151 10 1)) ((bruijn ##.%k.701 7 0) #f))) ((bruijn ##.%k.701 6 0) #f))) ((bruijn ##.%k.701 5 0) #f))) ((bruijn ##.%k.701 4 0) #f))) ((bruijn ##.%k.701 3 0) #f))) ((bruijn ##.%k.701 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 3));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k16, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda5, self)))),
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.867 1 0) (basic-block 1 1 (##.%x.1097) ((##vcore.car (bruijn ##.expr.150 5 3))) ((bruijn ##.equal?.120 9 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k15) '##qualified-lambda (bruijn ##.%x.1097 0 0))) ((bruijn ##.%k.701 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k15, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.691 0 0) (bruijn ##.%k.689 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1093) ((##vcore.cons 'case-lambda (bruijn ##.%x.693 1 0))) ((bruijn ##.%k.692 2 0) (bruijn ##.%r.1093 0 0)))
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1095 ##.%r.1096) ((##vcore.cons (bruijn ##.%x.697 1 0) '()) (##vcore.cons (bruijn ##.%x.1094 3 0) (bruijn ##.%x.1095 0 0))) ((bruijn ##.%k.694 4 0) (bruijn ##.%r.1096 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 13 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k24) (bruijn ##.current-qualname.148 12 1) (bruijn ##.qualified-funcs.149 12 2) (bruijn ##.%x.698 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k24, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1094) ((##vcore.car (bruijn ##.cases.169 1 1))) ((bruijn ##.cadr.126 15 6) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k23) (bruijn ##.cases.169 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k23, self)))),
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.128 13 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k22) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda7) (bruijn ##.cases.1092 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k22, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda7, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.690 0 0) (basic-block 1 1 (##.cases.1092) ((##vcore.cdr (bruijn ##.expr.150 8 3))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k21) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda6) (bruijn ##.kk.22.151 7 1))) ((bruijn ##.%k.689 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k21, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda6, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.868 1 0) (basic-block 1 1 (##.%x.1091) ((##vcore.car (bruijn ##.expr.150 6 3))) ((bruijn ##.equal?.120 10 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k20) 'case-lambda (bruijn ##.%x.1091 0 0))) ((bruijn ##.%k.689 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k20, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.677 0 0) (bruijn ##.%k.673 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1085 ##.%x.1086 ##.%r.1087) ((##vcore.cons (bruijn ##.static?.1083 3 0) (bruijn ##.%x.681 1 0)) (##vcore.cons (bruijn ##.name.1080 4 0) (bruijn ##.%x.1085 0 0)) (##vcore.cons '##qualified-case-lambda (bruijn ##.%x.1086 0 1))) ((bruijn ##.%k.678 2 0) (bruijn ##.%r.1087 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__case__lambda,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1089 ##.%r.1090) ((##vcore.cons (bruijn ##.%x.685 1 0) '()) (##vcore.cons (bruijn ##.%x.1088 3 0) (bruijn ##.%x.1089 0 0))) ((bruijn ##.%k.682 4 0) (bruijn ##.%r.1090 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 16 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k31) (bruijn ##.name.1080 5 0) (bruijn ##.qualified-funcs.149 15 2) (bruijn ##.%x.686 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k31, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 2);
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1088) ((##vcore.car (bruijn ##.cases.176 1 1))) ((bruijn ##.cadr.126 18 6) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k30) (bruijn ##.cases.176 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k30, self)))),
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.128 16 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k29) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda9) (bruijn ##.cases.1084 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k29, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda9, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.674 0 0) (basic-block 2 2 (##.expr.34.1078 ##.%p.1079) ((##vcore.cdr (bruijn ##.expr.150 9 3)) (##vcore.pair? (bruijn ##.expr.34.1078 0 0))) (if (bruijn ##.%p.1079 0 1) (basic-block 3 3 (##.name.1080 ##.expr.35.1081 ##.%p.1082) ((##vcore.car (bruijn ##.expr.34.1078 1 0)) (##vcore.cdr (bruijn ##.expr.34.1078 1 0)) (##vcore.pair? (bruijn ##.expr.35.1081 0 1))) (if (bruijn ##.%p.1082 0 2) (basic-block 2 2 (##.static?.1083 ##.cases.1084) ((##vcore.car (bruijn ##.expr.35.1081 1 1)) (##vcore.cdr (bruijn ##.expr.35.1081 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k28) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda8) (bruijn ##.kk.22.151 10 1))) ((bruijn ##.%k.673 4 0) #f))) ((bruijn ##.%k.673 3 0) #f))) ((bruijn ##.%k.673 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 3));
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k28, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda8, self)))),
      VGetArg(statics, 10-1, 1));
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.869 1 0) (basic-block 1 1 (##.%x.1077) ((##vcore.car (bruijn ##.expr.150 7 3))) ((bruijn ##.equal?.120 11 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k27) '##qualified-case-lambda (bruijn ##.%x.1077 0 0))) ((bruijn ##.%k.673 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k27, self)))),
      _V10qualified__case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.665 0 0) (bruijn ##.%k.660 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1074 ##.%x.1075 ##.%r.1076) ((##vcore.cons (bruijn ##.%x.669 1 0) '()) (##vcore.cons (bruijn ##.xs.1068 4 0) (bruijn ##.%x.1074 0 0)) (##vcore.cons 'continuation (bruijn ##.%x.1075 0 1))) ((bruijn ##.%k.666 2 0) (bruijn ##.%r.1076 0 2)))
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
      _V0continuation,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 14 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k36) (bruijn ##.current-qualname.148 13 1) (bruijn ##.qualified-funcs.149 13 2) (bruijn ##.body.1071 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k36, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.661 0 0) (basic-block 2 2 (##.expr.37.1066 ##.%p.1067) ((##vcore.cdr (bruijn ##.expr.150 10 3)) (##vcore.pair? (bruijn ##.expr.37.1066 0 0))) (if (bruijn ##.%p.1067 0 1) (basic-block 3 3 (##.xs.1068 ##.expr.38.1069 ##.%p.1070) ((##vcore.car (bruijn ##.expr.37.1066 1 0)) (##vcore.cdr (bruijn ##.expr.37.1066 1 0)) (##vcore.pair? (bruijn ##.expr.38.1069 0 1))) (if (bruijn ##.%p.1070 0 2) (basic-block 3 3 (##.body.1071 ##.%x.1072 ##.%p.1073) ((##vcore.car (bruijn ##.expr.38.1069 1 1)) (##vcore.cdr (bruijn ##.expr.38.1069 1 1)) (##vcore.null? (bruijn ##.%x.1072 0 1))) (if (bruijn ##.%p.1073 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k35) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda10) (bruijn ##.kk.22.151 11 1)) ((bruijn ##.%k.660 5 0) #f))) ((bruijn ##.%k.660 4 0) #f))) ((bruijn ##.%k.660 3 0) #f))) ((bruijn ##.%k.660 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 3));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k35, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda10, self)))),
      VGetArg(statics, 11-1, 1));
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.870 1 0) (basic-block 1 1 (##.%x.1065) ((##vcore.car (bruijn ##.expr.150 8 3))) ((bruijn ##.equal?.120 12 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k34) 'continuation (bruijn ##.%x.1065 0 0))) ((bruijn ##.%k.660 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k34, self)))),
      _V0continuation,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.653 0 0) (bruijn ##.%k.649 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1063 ##.%r.1064) ((##vcore.cons (bruijn ##.%x.656 1 0) '()) (##vcore.cons 'continuation (bruijn ##.%x.1063 0 0))) ((bruijn ##.%k.654 2 0) (bruijn ##.%r.1064 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0continuation,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 14 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k41) (bruijn ##.current-qualname.148 13 1) (bruijn ##.qualified-funcs.149 13 2) (bruijn ##.body.1060 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k41, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.650 0 0) (basic-block 2 2 (##.expr.40.1058 ##.%p.1059) ((##vcore.cdr (bruijn ##.expr.150 11 3)) (##vcore.pair? (bruijn ##.expr.40.1058 0 0))) (if (bruijn ##.%p.1059 0 1) (basic-block 3 3 (##.body.1060 ##.%x.1061 ##.%p.1062) ((##vcore.car (bruijn ##.expr.40.1058 1 0)) (##vcore.cdr (bruijn ##.expr.40.1058 1 0)) (##vcore.null? (bruijn ##.%x.1061 0 1))) (if (bruijn ##.%p.1062 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k40) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda11) (bruijn ##.kk.22.151 11 1)) ((bruijn ##.%k.649 4 0) #f))) ((bruijn ##.%k.649 3 0) #f))) ((bruijn ##.%k.649 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 3));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda11, self)))),
      VGetArg(statics, 11-1, 1));
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.871 1 0) (basic-block 1 1 (##.%x.1057) ((##vcore.car (bruijn ##.expr.150 9 3))) ((bruijn ##.equal?.120 13 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k39) 'continuation (bruijn ##.%x.1057 0 0))) ((bruijn ##.%k.649 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k39, self)))),
      _V0continuation,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.626 0 0) (bruijn ##.%k.619 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) #t (bruijn ##.scan-bindings.145 23 1) (bruijn ##.%k.628 0 0) (bruijn ##.current-qualname.148 20 1) (bruijn ##.qualified-funcs.149 20 2) (bruijn ##.xs.1040 6 0) (bruijn ##.vals.199 3 1) (bruijn ##.body.1043 5 0) #f)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0optimize;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 20-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg4 = 
      statics->up->up->vars[1];
    VWORD _arg5 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg6 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize)}, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure_env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1051) ((##vcore.cons (bruijn ##.%x.1050 2 2) (bruijn ##.%x.631 1 0))) ((bruijn ##.%k.629 4 0) (bruijn ##.%r.1051 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1048 ##.%x.1049 ##.%x.1050) ((##vcore.cons (bruijn ##.%x.634 1 0) '()) (##vcore.cons (bruijn ##.xs.1040 8 0) (bruijn ##.%x.1048 0 0)) (##vcore.cons 'lambda (bruijn ##.%x.1049 0 1))) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k47) (bruijn ##.current-qualname.148 22 1) (bruijn ##.qualified-funcs.149 22 2) (bruijn ##.new-vals.200 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k47, self))));
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 21 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k46) (bruijn ##.current-qualname.148 20 1) (bruijn ##.new-qualified-funcs.201 0 2) (bruijn ##.body.1043 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k46, self))));
    VWORD _arg1 = 
      VGetArg(statics, 20-1, 1);
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.627 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda14) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda15))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda14, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda15, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1047) ((##vcore.null? (bruijn ##.tail-expr.198 1 0))) (if (bruijn ##.%p.1047 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k45) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda13) (bruijn ##.kk.22.151 17 1)) ((bruijn ##.%k.619 9 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k45, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda13, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.47.192 5 1) (bruijn ##.%k.643 1 0) (bruijn ##.expr.49.194 3 1) (bruijn ##.%x.644 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1053 1 1) ((bruijn ##.reverse.129 25 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k49) (bruijn ##.vals.46.195 2 2)) ((bruijn ##.%k.643 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k49, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.47.192 7 1) (bruijn ##.%k.638 2 0) (bruijn ##.expr.49.194 5 1) (bruijn ##.%x.639 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k51(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 27 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k52) (bruijn ##.vals.46.195 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k52, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.vals.1054 ##.%x.1055 ##.%x.1056) ((##vcore.car (bruijn ##.expr.49.194 4 1)) (##vcore.cdr (bruijn ##.expr.49.194 4 1)) (##vcore.cons (bruijn ##.vals.1054 0 0) (bruijn ##.vals.46.195 4 2))) ((bruijn ##.kk.48.196 1 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k51) (bruijn ##.%x.1055 0 1) (bruijn ##.%x.1056 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k51, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.637 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda18))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda18, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k50(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.636 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda17) (bruijn ##.loop.193 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0lambda17, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1052 ##.%p.1053) ((##vcore.pair? (bruijn ##.expr.49.194 1 1)) (##vcore.not (bruijn ##.%x.1052 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k48) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k50)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k48, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193_V0k50, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.193) #f (bruijn ##.loop.193 0 0) (bruijn ##.%k.635 1 0) (bruijn ##.expr.45.1046 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D193(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.621 0 0) (basic-block 2 2 (##.expr.43.1038 ##.%p.1039) ((##vcore.cdr (bruijn ##.expr.42.1035 3 0)) (##vcore.pair? (bruijn ##.expr.43.1038 0 0))) (if (bruijn ##.%p.1039 0 1) (basic-block 3 3 (##.xs.1040 ##.expr.44.1041 ##.%p.1042) ((##vcore.car (bruijn ##.expr.43.1038 1 0)) (##vcore.cdr (bruijn ##.expr.43.1038 1 0)) (##vcore.pair? (bruijn ##.expr.44.1041 0 1))) (if (bruijn ##.%p.1042 0 2) (basic-block 3 3 (##.body.1043 ##.%x.1044 ##.%p.1045) ((##vcore.car (bruijn ##.expr.44.1041 1 1)) (##vcore.cdr (bruijn ##.expr.44.1041 1 1)) (##vcore.null? (bruijn ##.%x.1044 0 1))) (if (bruijn ##.%p.1045 0 2) (basic-block 1 1 (##.expr.45.1046) ((##vcore.cdr (bruijn ##.expr.150 16 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda12) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda16))) ((bruijn ##.%k.619 6 0) #f))) ((bruijn ##.%k.619 5 0) #f))) ((bruijn ##.%k.619 4 0) #f))) ((bruijn ##.%k.619 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda12, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda16, self)))));
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.872 1 0) (basic-block 2 2 (##.expr.42.1035 ##.%p.1036) ((##vcore.car (bruijn ##.expr.150 10 3)) (##vcore.pair? (bruijn ##.expr.42.1035 0 0))) (if (bruijn ##.%p.1036 0 1) (basic-block 1 1 (##.%x.1037) ((##vcore.car (bruijn ##.expr.42.1035 1 0))) ((bruijn ##.equal?.120 15 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k44) 'lambda (bruijn ##.%x.1037 0 0))) ((bruijn ##.%k.619 1 0) #f))) ((bruijn ##.%k.619 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 3));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k44, self)))),
      _V0lambda,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.596 0 0) (bruijn ##.%k.589 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) #t (bruijn ##.scan-bindings.145 24 1) (bruijn ##.%k.598 0 0) (bruijn ##.current-qualname.148 21 1) (bruijn ##.qualified-funcs.149 21 2) (bruijn ##.xs.1018 6 0) (bruijn ##.vals.216 3 1) (bruijn ##.body.1021 5 0) #f)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0optimize;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 21-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 21-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg4 = 
      statics->up->up->vars[1];
    VWORD _arg5 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg6 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize)}, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure_env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1029) ((##vcore.cons (bruijn ##.%x.1028 2 2) (bruijn ##.%x.601 1 0))) ((bruijn ##.%k.599 4 0) (bruijn ##.%r.1029 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1026 ##.%x.1027 ##.%x.1028) ((##vcore.cons (bruijn ##.%x.604 1 0) '()) (##vcore.cons (bruijn ##.xs.1018 8 0) (bruijn ##.%x.1026 0 0)) (##vcore.cons 'continuation (bruijn ##.%x.1027 0 1))) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k58) (bruijn ##.current-qualname.148 23 1) (bruijn ##.qualified-funcs.149 23 2) (bruijn ##.new-vals.217 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0continuation,
      self->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k58, self))));
    VWORD _arg1 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 23-1, 2);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k57) (bruijn ##.current-qualname.148 21 1) (bruijn ##.new-qualified-funcs.218 0 2) (bruijn ##.body.1021 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k57, self))));
    VWORD _arg1 = 
      VGetArg(statics, 21-1, 1);
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.597 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda21) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda22))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda21, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda22, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1025) ((##vcore.null? (bruijn ##.tail-expr.215 1 0))) (if (bruijn ##.%p.1025 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k56) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda20) (bruijn ##.kk.22.151 18 1)) ((bruijn ##.%k.589 9 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k56, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda20, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.56.209 5 1) (bruijn ##.%k.613 1 0) (bruijn ##.expr.58.211 3 1) (bruijn ##.%x.614 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1031 1 1) ((bruijn ##.reverse.129 26 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k60) (bruijn ##.vals.55.212 2 2)) ((bruijn ##.%k.613 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k60, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.56.209 7 1) (bruijn ##.%k.608 2 0) (bruijn ##.expr.58.211 5 1) (bruijn ##.%x.609 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k62(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 28 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k63) (bruijn ##.vals.55.212 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k63, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.vals.1032 ##.%x.1033 ##.%x.1034) ((##vcore.car (bruijn ##.expr.58.211 4 1)) (##vcore.cdr (bruijn ##.expr.58.211 4 1)) (##vcore.cons (bruijn ##.vals.1032 0 0) (bruijn ##.vals.55.212 4 2))) ((bruijn ##.kk.57.213 1 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k62) (bruijn ##.%x.1033 0 1) (bruijn ##.%x.1034 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k62, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.607 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda25))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda25, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k61(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.606 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda24) (bruijn ##.loop.210 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0lambda24, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1030 ##.%p.1031) ((##vcore.pair? (bruijn ##.expr.58.211 1 1)) (##vcore.not (bruijn ##.%x.1030 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k59) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k61)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k59, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210_V0k61, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.210) #f (bruijn ##.loop.210 0 0) (bruijn ##.%k.605 1 0) (bruijn ##.expr.54.1024 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D210(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.591 0 0) (basic-block 2 2 (##.expr.52.1016 ##.%p.1017) ((##vcore.cdr (bruijn ##.expr.51.1013 3 0)) (##vcore.pair? (bruijn ##.expr.52.1016 0 0))) (if (bruijn ##.%p.1017 0 1) (basic-block 3 3 (##.xs.1018 ##.expr.53.1019 ##.%p.1020) ((##vcore.car (bruijn ##.expr.52.1016 1 0)) (##vcore.cdr (bruijn ##.expr.52.1016 1 0)) (##vcore.pair? (bruijn ##.expr.53.1019 0 1))) (if (bruijn ##.%p.1020 0 2) (basic-block 3 3 (##.body.1021 ##.%x.1022 ##.%p.1023) ((##vcore.car (bruijn ##.expr.53.1019 1 1)) (##vcore.cdr (bruijn ##.expr.53.1019 1 1)) (##vcore.null? (bruijn ##.%x.1022 0 1))) (if (bruijn ##.%p.1023 0 2) (basic-block 1 1 (##.expr.54.1024) ((##vcore.cdr (bruijn ##.expr.150 17 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda19) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda23))) ((bruijn ##.%k.589 6 0) #f))) ((bruijn ##.%k.589 5 0) #f))) ((bruijn ##.%k.589 4 0) #f))) ((bruijn ##.%k.589 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda19, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda23, self)))));
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.873 1 0) (basic-block 2 2 (##.expr.51.1013 ##.%p.1014) ((##vcore.car (bruijn ##.expr.150 11 3)) (##vcore.pair? (bruijn ##.expr.51.1013 0 0))) (if (bruijn ##.%p.1014 0 1) (basic-block 1 1 (##.%x.1015) ((##vcore.car (bruijn ##.expr.51.1013 1 0))) ((bruijn ##.equal?.120 16 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k55) 'continuation (bruijn ##.%x.1015 0 0))) ((bruijn ##.%k.589 1 0) #f))) ((bruijn ##.%k.589 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 3));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k55, self)))),
      _V0continuation,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.564 0 0) (bruijn ##.%k.555 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) #t (bruijn ##.scan-bindings.145 27 1) (bruijn ##.%k.566 0 0) (bruijn ##.current-qualname.148 24 1) (bruijn ##.qualified-funcs.149 24 2) (bruijn ##.xs.994 6 0) (bruijn ##.vals.237 3 1) (bruijn ##.body.997 5 0) #f)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0optimize;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 24-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 24-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg4 = 
      statics->up->up->vars[1];
    VWORD _arg5 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg6 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize)}, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure_env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1007) ((##vcore.cons (bruijn ##.%x.1006 2 4) (bruijn ##.%x.569 1 0))) ((bruijn ##.%k.567 4 0) (bruijn ##.%r.1007 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[4],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1002 ##.%x.1003 ##.%x.1004 ##.%x.1005 ##.%x.1006) ((##vcore.cons (bruijn ##.%x.574 1 0) '()) (##vcore.cons (bruijn ##.xs.994 8 0) (bruijn ##.%x.1002 0 0)) (##vcore.cons (bruijn ##.static?.991 9 0) (bruijn ##.%x.1003 0 1)) (##vcore.cons (bruijn ##.name.988 10 0) (bruijn ##.%x.1004 0 2)) (##vcore.cons '##qualified-lambda (bruijn ##.%x.1005 0 3))) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k69) (bruijn ##.current-qualname.148 26 1) (bruijn ##.qualified-funcs.149 26 2) (bruijn ##.new-vals.238 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__lambda,
      self->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k69, self))));
    VWORD _arg1 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 2);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 25 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k68) (bruijn ##.name.988 8 0) (bruijn ##.new-qualified-funcs.239 0 2) (bruijn ##.body.997 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 25-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k68, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.565 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda28) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda28, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda29, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1001) ((##vcore.null? (bruijn ##.tail-expr.236 1 0))) (if (bruijn ##.%p.1001 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k67) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda27) (bruijn ##.kk.22.151 21 1)) ((bruijn ##.%k.555 11 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k67, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda27, self)))),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.67.230 5 1) (bruijn ##.%k.583 1 0) (bruijn ##.expr.69.232 3 1) (bruijn ##.%x.584 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1009 1 1) ((bruijn ##.reverse.129 29 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k71) (bruijn ##.vals.66.233 2 2)) ((bruijn ##.%k.583 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k71, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.67.230 7 1) (bruijn ##.%k.578 2 0) (bruijn ##.expr.69.232 5 1) (bruijn ##.%x.579 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k73(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 31 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k74) (bruijn ##.vals.66.233 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k74, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.vals.1010 ##.%x.1011 ##.%x.1012) ((##vcore.car (bruijn ##.expr.69.232 4 1)) (##vcore.cdr (bruijn ##.expr.69.232 4 1)) (##vcore.cons (bruijn ##.vals.1010 0 0) (bruijn ##.vals.66.233 4 2))) ((bruijn ##.kk.68.234 1 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k73) (bruijn ##.%x.1011 0 1) (bruijn ##.%x.1012 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k73, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.577 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda32))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda32, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k72(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.576 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda31) (bruijn ##.loop.231 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0lambda31, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1008 ##.%p.1009) ((##vcore.pair? (bruijn ##.expr.69.232 1 1)) (##vcore.not (bruijn ##.%x.1008 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k70) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k72)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k70, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231_V0k72, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.231) #f (bruijn ##.loop.231 0 0) (bruijn ##.%k.575 1 0) (bruijn ##.expr.65.1000 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D231(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.557 0 0) (basic-block 2 2 (##.expr.61.986 ##.%p.987) ((##vcore.cdr (bruijn ##.expr.60.983 3 0)) (##vcore.pair? (bruijn ##.expr.61.986 0 0))) (if (bruijn ##.%p.987 0 1) (basic-block 3 3 (##.name.988 ##.expr.62.989 ##.%p.990) ((##vcore.car (bruijn ##.expr.61.986 1 0)) (##vcore.cdr (bruijn ##.expr.61.986 1 0)) (##vcore.pair? (bruijn ##.expr.62.989 0 1))) (if (bruijn ##.%p.990 0 2) (basic-block 3 3 (##.static?.991 ##.expr.63.992 ##.%p.993) ((##vcore.car (bruijn ##.expr.62.989 1 1)) (##vcore.cdr (bruijn ##.expr.62.989 1 1)) (##vcore.pair? (bruijn ##.expr.63.992 0 1))) (if (bruijn ##.%p.993 0 2) (basic-block 3 3 (##.xs.994 ##.expr.64.995 ##.%p.996) ((##vcore.car (bruijn ##.expr.63.992 1 1)) (##vcore.cdr (bruijn ##.expr.63.992 1 1)) (##vcore.pair? (bruijn ##.expr.64.995 0 1))) (if (bruijn ##.%p.996 0 2) (basic-block 3 3 (##.body.997 ##.%x.998 ##.%p.999) ((##vcore.car (bruijn ##.expr.64.995 1 1)) (##vcore.cdr (bruijn ##.expr.64.995 1 1)) (##vcore.null? (bruijn ##.%x.998 0 1))) (if (bruijn ##.%p.999 0 2) (basic-block 1 1 (##.expr.65.1000) ((##vcore.cdr (bruijn ##.expr.150 20 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda26) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda30))) ((bruijn ##.%k.555 8 0) #f))) ((bruijn ##.%k.555 7 0) #f))) ((bruijn ##.%k.555 6 0) #f))) ((bruijn ##.%k.555 5 0) #f))) ((bruijn ##.%k.555 4 0) #f))) ((bruijn ##.%k.555 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 20-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda26, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda30, self)))));
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.874 1 0) (basic-block 2 2 (##.expr.60.983 ##.%p.984) ((##vcore.car (bruijn ##.expr.150 12 3)) (##vcore.pair? (bruijn ##.expr.60.983 0 0))) (if (bruijn ##.%p.984 0 1) (basic-block 1 1 (##.%x.985) ((##vcore.car (bruijn ##.expr.60.983 1 0))) ((bruijn ##.equal?.120 17 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k66) '##qualified-lambda (bruijn ##.%x.985 0 0))) ((bruijn ##.%k.555 1 0) #f))) ((bruijn ##.%k.555 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 3));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k66, self)))),
      _V10qualified__lambda,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.523 0 0) (bruijn ##.%k.517 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) #t (bruijn ##.scan-bindings.145 25 1) (bruijn ##.%k.525 0 0) (bruijn ##.current-qualname.148 22 1) (bruijn ##.qualified-funcs.149 22 2) (bruijn ##.xs.254 5 1) (bruijn ##.vals.255 5 2) (bruijn ##.body.964 2 0) #t)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0optimize;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg4 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg5 = 
      statics->up->vars[0];
    VWORD _arg6 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize)}, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure_env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.967 ##.%x.968 ##.%r.969) ((##vcore.cons (bruijn ##.%x.530 1 0) '()) (##vcore.cons (bruijn ##.%x.528 2 0) (bruijn ##.%x.967 0 0)) (##vcore.cons 'letrec (bruijn ##.%x.968 0 1))) ((bruijn ##.%k.526 3 0) (bruijn ##.%r.969 0 2)))
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
      _V0letrec,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k80) (bruijn ##.current-qualname.148 23 1) (bruijn ##.new-qualified-funcs.259 1 2) (bruijn ##.body.964 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k80, self))));
    VWORD _arg1 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.122 28 2) (bruijn ##.%k.531 1 0) (bruijn ##.x.260 1 1) (bruijn ##.%x.532 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 2)), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k81) (bruijn ##.current-qualname.148 23 1) (bruijn ##.new-qualified-funcs.259 1 2) (bruijn ##.val.261 0 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k81, self))));
    VWORD _arg1 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.map.128 26 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k79) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda37) (bruijn ##.xs.254 5 1) (bruijn ##.new-vals.258 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k79, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda37, self)))),
      VGetArg(statics, 5-1, 1),
      _var1);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.524 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda35) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda36))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda35, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda36, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.961) ((##vcore.null? (bruijn ##.tail-expr.253 1 0))) (if (bruijn ##.%p.961 0 0) (basic-block 2 2 (##.expr.80.962 ##.%p.963) ((##vcore.cdr (bruijn ##.expr.71.958 4 0)) (##vcore.pair? (bruijn ##.expr.80.962 0 0))) (if (bruijn ##.%p.963 0 1) (basic-block 3 3 (##.body.964 ##.%x.965 ##.%p.966) ((##vcore.car (bruijn ##.expr.80.962 1 0)) (##vcore.cdr (bruijn ##.expr.80.962 1 0)) (##vcore.null? (bruijn ##.%x.965 0 1))) (if (bruijn ##.%p.966 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k78) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda34) (bruijn ##.kk.22.151 19 1)) ((bruijn ##.%k.517 8 0) #f))) ((bruijn ##.%k.517 7 0) #f))) ((bruijn ##.%k.517 6 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k78, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda34, self)))),
      VGetArg(statics, 19-1, 1));
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.75.243 6 1) (bruijn ##.%k.549 2 0) (bruijn ##.expr.77.245 4 1) (bruijn ##.%x.550 1 0) (bruijn ##.%x.551 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.129 26 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k84) (bruijn ##.vals.74.247 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k84, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.971 1 1) ((bruijn ##.reverse.129 25 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k83) (bruijn ##.xs.73.246 2 2)) ((bruijn ##.%k.549 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k83, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.973 1 1) (basic-block 3 3 (##.xs.974 ##.expr.79.975 ##.%p.976) ((##vcore.car (bruijn ##.expr.78.972 2 0)) (##vcore.cdr (bruijn ##.expr.78.972 2 0)) (##vcore.pair? (bruijn ##.expr.79.975 0 1))) (if (bruijn ##.%p.976 0 2) (basic-block 3 3 (##.vals.977 ##.%x.978 ##.%p.979) ((##vcore.car (bruijn ##.expr.79.975 1 1)) (##vcore.cdr (bruijn ##.expr.79.975 1 1)) (##vcore.null? (bruijn ##.%x.978 0 1))) (if (bruijn ##.%p.979 0 2) (basic-block 3 3 (##.%x.980 ##.%x.981 ##.%x.982) ((##vcore.cdr (bruijn ##.expr.77.245 8 1)) (##vcore.cons (bruijn ##.xs.974 2 0) (bruijn ##.xs.73.246 8 2)) (##vcore.cons (bruijn ##.vals.977 1 0) (bruijn ##.vals.74.247 8 3))) ((bruijn ##.kk.76.248 5 1) (bruijn ##.%k.541 3 0) (bruijn ##.%x.980 0 0) (bruijn ##.%x.981 0 1) (bruijn ##.%x.982 0 2))) ((bruijn ##.%k.541 2 0) #f))) ((bruijn ##.%k.541 1 0) #f))) ((bruijn ##.%k.541 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.75.243 8 1) (bruijn ##.%k.537 3 0) (bruijn ##.expr.77.245 6 1) (bruijn ##.%x.538 1 0) (bruijn ##.%x.539 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.129 28 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k89) (bruijn ##.vals.74.247 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k89, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 27 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k88) (bruijn ##.xs.73.246 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k88, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.78.972 ##.%p.973) ((##vcore.car (bruijn ##.expr.77.245 4 1)) (##vcore.pair? (bruijn ##.expr.78.972 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k86) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k87)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k86, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k87, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.536 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda40))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda40, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k85(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.535 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda39) (bruijn ##.loop.244 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0lambda39, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244, got ~D~N"
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
  // (basic-block 2 2 (##.%x.970 ##.%p.971) ((##vcore.pair? (bruijn ##.expr.77.245 1 1)) (##vcore.not (bruijn ##.%x.970 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k82) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k85)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k82, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244_V0k85, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.244) #f (bruijn ##.loop.244 0 0) (bruijn ##.%k.534 1 0) (bruijn ##.expr.72.960 2 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244, self))));
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
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D244(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.518 0 0) (basic-block 2 2 (##.expr.71.958 ##.%p.959) ((##vcore.cdr (bruijn ##.expr.150 15 3)) (##vcore.pair? (bruijn ##.expr.71.958 0 0))) (if (bruijn ##.%p.959 0 1) (basic-block 1 1 (##.expr.72.960) ((##vcore.car (bruijn ##.expr.71.958 1 0))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda33) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda38))) ((bruijn ##.%k.517 3 0) #f))) ((bruijn ##.%k.517 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda33, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda38, self)))));
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.875 1 0) (basic-block 1 1 (##.%x.957) ((##vcore.car (bruijn ##.expr.150 13 3))) ((bruijn ##.equal?.120 17 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k77) 'letrec (bruijn ##.%x.957 0 0))) ((bruijn ##.%k.517 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k77, self)))),
      _V0letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.484 0 0) (bruijn ##.%k.477 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) #t (bruijn ##.scan-bindings.145 27 1) (bruijn ##.%k.486 0 0) (bruijn ##.current-qualname.148 24 1) (bruijn ##.qualified-funcs.149 24 2) (bruijn ##.xs.278 5 1) (bruijn ##.vals.279 5 2) (bruijn ##.body.937 2 0) #t)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0optimize;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 24-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 24-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg4 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg5 = 
      statics->up->vars[0];
    VWORD _arg6 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize)}, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure_env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.940 ##.%x.941 ##.%x.942 ##.%r.943) ((##vcore.cons (bruijn ##.%x.492 1 0) '()) (##vcore.cons (bruijn ##.%x.490 2 0) (bruijn ##.%x.940 0 0)) (##vcore.cons (bruijn ##.path.930 10 0) (bruijn ##.%x.941 0 1)) (##vcore.cons '##letrec (bruijn ##.%x.942 0 2))) ((bruijn ##.%k.487 3 0) (bruijn ##.%r.943 0 3)))
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
      VGetArg(statics, 10-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V10letrec,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 26 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k95) (bruijn ##.current-qualname.148 25 1) (bruijn ##.new-qualified-funcs.283 1 2) (bruijn ##.body.937 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k95, self))));
    VWORD _arg1 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.122 30 2) (bruijn ##.%k.493 1 0) (bruijn ##.x.284 1 1) (bruijn ##.%x.494 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 2)), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 26 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k96) (bruijn ##.current-qualname.148 25 1) (bruijn ##.new-qualified-funcs.283 1 2) (bruijn ##.val.285 0 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k96, self))));
    VWORD _arg1 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda44, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.map.128 28 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k94) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda45) (bruijn ##.xs.278 5 1) (bruijn ##.new-vals.282 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k94, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda45, self)))),
      VGetArg(statics, 5-1, 1),
      _var1);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.485 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda43) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda44))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda43, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda44, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.934) ((##vcore.null? (bruijn ##.tail-expr.277 1 0))) (if (bruijn ##.%p.934 0 0) (basic-block 2 2 (##.expr.92.935 ##.%p.936) ((##vcore.cdr (bruijn ##.expr.83.931 4 1)) (##vcore.pair? (bruijn ##.expr.92.935 0 0))) (if (bruijn ##.%p.936 0 1) (basic-block 3 3 (##.body.937 ##.%x.938 ##.%p.939) ((##vcore.car (bruijn ##.expr.92.935 1 0)) (##vcore.cdr (bruijn ##.expr.92.935 1 0)) (##vcore.null? (bruijn ##.%x.938 0 1))) (if (bruijn ##.%p.939 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k93) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda42) (bruijn ##.kk.22.151 21 1)) ((bruijn ##.%k.477 9 0) #f))) ((bruijn ##.%k.477 8 0) #f))) ((bruijn ##.%k.477 7 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k93, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda42, self)))),
      VGetArg(statics, 21-1, 1));
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.87.267 6 1) (bruijn ##.%k.511 2 0) (bruijn ##.expr.89.269 4 1) (bruijn ##.%x.512 1 0) (bruijn ##.%x.513 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.129 28 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k99) (bruijn ##.vals.86.271 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k99, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.945 1 1) ((bruijn ##.reverse.129 27 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k98) (bruijn ##.xs.85.270 2 2)) ((bruijn ##.%k.511 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k98, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.947 1 1) (basic-block 3 3 (##.xs.948 ##.expr.91.949 ##.%p.950) ((##vcore.car (bruijn ##.expr.90.946 2 0)) (##vcore.cdr (bruijn ##.expr.90.946 2 0)) (##vcore.pair? (bruijn ##.expr.91.949 0 1))) (if (bruijn ##.%p.950 0 2) (basic-block 3 3 (##.vals.951 ##.%x.952 ##.%p.953) ((##vcore.car (bruijn ##.expr.91.949 1 1)) (##vcore.cdr (bruijn ##.expr.91.949 1 1)) (##vcore.null? (bruijn ##.%x.952 0 1))) (if (bruijn ##.%p.953 0 2) (basic-block 3 3 (##.%x.954 ##.%x.955 ##.%x.956) ((##vcore.cdr (bruijn ##.expr.89.269 8 1)) (##vcore.cons (bruijn ##.xs.948 2 0) (bruijn ##.xs.85.270 8 2)) (##vcore.cons (bruijn ##.vals.951 1 0) (bruijn ##.vals.86.271 8 3))) ((bruijn ##.kk.88.272 5 1) (bruijn ##.%k.503 3 0) (bruijn ##.%x.954 0 0) (bruijn ##.%x.955 0 1) (bruijn ##.%x.956 0 2))) ((bruijn ##.%k.503 2 0) #f))) ((bruijn ##.%k.503 1 0) #f))) ((bruijn ##.%k.503 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.87.267 8 1) (bruijn ##.%k.499 3 0) (bruijn ##.expr.89.269 6 1) (bruijn ##.%x.500 1 0) (bruijn ##.%x.501 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.129 30 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k104) (bruijn ##.vals.86.271 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k104, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k102(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 29 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k103) (bruijn ##.xs.85.270 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k103, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.90.946 ##.%p.947) ((##vcore.car (bruijn ##.expr.89.269 4 1)) (##vcore.pair? (bruijn ##.expr.90.946 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k101) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k102)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k101, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k102, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.498 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda48))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda48, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k100(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.497 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda47) (bruijn ##.loop.268 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0lambda47, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268, got ~D~N"
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
  // (basic-block 2 2 (##.%x.944 ##.%p.945) ((##vcore.pair? (bruijn ##.expr.89.269 1 1)) (##vcore.not (bruijn ##.%x.944 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k97) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k100)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268_V0k100, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.268) #f (bruijn ##.loop.268 0 0) (bruijn ##.%k.496 1 0) (bruijn ##.expr.84.933 2 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268, self))));
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
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D268(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.478 0 0) (basic-block 2 2 (##.expr.82.928 ##.%p.929) ((##vcore.cdr (bruijn ##.expr.150 16 3)) (##vcore.pair? (bruijn ##.expr.82.928 0 0))) (if (bruijn ##.%p.929 0 1) (basic-block 3 3 (##.path.930 ##.expr.83.931 ##.%p.932) ((##vcore.car (bruijn ##.expr.82.928 1 0)) (##vcore.cdr (bruijn ##.expr.82.928 1 0)) (##vcore.pair? (bruijn ##.expr.83.931 0 1))) (if (bruijn ##.%p.932 0 2) (basic-block 1 1 (##.expr.84.933) ((##vcore.car (bruijn ##.expr.83.931 1 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda41) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda46))) ((bruijn ##.%k.477 4 0) #f))) ((bruijn ##.%k.477 3 0) #f))) ((bruijn ##.%k.477 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda46, self)))));
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.876 1 0) (basic-block 1 1 (##.%x.927) ((##vcore.car (bruijn ##.expr.150 14 3))) ((bruijn ##.equal?.120 18 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k92) '##letrec (bruijn ##.%x.927 0 0))) ((bruijn ##.%k.477 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k92, self)))),
      _V10letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.456 0 0) (bruijn ##.%k.449 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.920 ##.%r.921) ((##vcore.cons (bruijn ##.cost.912 12 0) (bruijn ##.%x.459 1 0)) (##vcore.cons 'basic-block (bruijn ##.%x.920 0 0))) ((bruijn ##.%k.457 4 0) (bruijn ##.%r.921 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 12-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0basic__block,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.123 32 3) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k112) (bruijn ##.xs-vals.300 6 1) (bruijn ##.%x.460 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k112, self)))),
      VGetArg(statics, 6-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.122 31 2) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k111) (bruijn ##.%x.461 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k111, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k110) (bruijn ##.current-qualname.148 26 1) (bruijn ##.qualified-funcs.149 26 2) (bruijn ##.appl.917 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k110, self))));
    VWORD _arg1 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 2);
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.915) ((##vcore.null? (bruijn ##.tail-expr.299 1 0))) (if (bruijn ##.%p.915 0 0) (basic-block 1 1 (##.%p.916) ((##vcore.pair? (bruijn ##.tail.97.291 3 1))) (if (bruijn ##.%p.916 0 0) (basic-block 3 3 (##.appl.917 ##.%x.918 ##.%p.919) ((##vcore.car (bruijn ##.tail.97.291 4 1)) (##vcore.cdr (bruijn ##.tail.97.291 4 1)) (##vcore.null? (bruijn ##.%x.918 0 1))) (if (bruijn ##.%p.919 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k109) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda51) (bruijn ##.kk.22.151 24 1)) ((bruijn ##.%k.449 11 0) #f))) ((bruijn ##.%k.449 10 0) #f))) ((bruijn ##.%k.449 9 0) #f)))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k109, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda51, self)))),
      VGetArg(statics, 24-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.100.293 5 1) (bruijn ##.%k.471 1 0) (bruijn ##.expr.102.295 3 1) (bruijn ##.%x.472 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.923 1 1) ((bruijn ##.reverse.129 30 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k114) (bruijn ##.xs-vals.99.296 2 2)) ((bruijn ##.%k.471 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k114, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.100.293 7 1) (bruijn ##.%k.466 2 0) (bruijn ##.expr.102.295 5 1) (bruijn ##.%x.467 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k116(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 32 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k117) (bruijn ##.xs-vals.99.296 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k117, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs-vals.924 ##.%x.925 ##.%x.926) ((##vcore.car (bruijn ##.expr.102.295 4 1)) (##vcore.cdr (bruijn ##.expr.102.295 4 1)) (##vcore.cons (bruijn ##.xs-vals.924 0 0) (bruijn ##.xs-vals.99.296 4 2))) ((bruijn ##.kk.101.297 1 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k116) (bruijn ##.%x.925 0 1) (bruijn ##.%x.926 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k116, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.465 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda54))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda54, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k115(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.464 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda53) (bruijn ##.loop.294 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0lambda53, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.922 ##.%p.923) ((##vcore.pair? (bruijn ##.expr.102.295 1 1)) (##vcore.not (bruijn ##.%x.922 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k113) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k115)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k113, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294_V0k115, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.294) #f (bruijn ##.loop.294 0 0) (bruijn ##.%k.463 1 0) (bruijn ##.head.96.290 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D294(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda50) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda52))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda50, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda52, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.914) ((##vcore.< (bruijn ##.%x.474 1 0) 1)) (if (bruijn ##.%p.914 0 0) ((bruijn ##.%k.449 6 0) #f) ((bruijn ##.split-at-right.124 24 4) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda49) (bruijn ##.expr.95.913 2 1) 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda49, self)))),
      statics->up->vars[1],
      VEncodeInt(1l));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.450 0 0) (basic-block 2 2 (##.expr.94.910 ##.%p.911) ((##vcore.cdr (bruijn ##.expr.150 17 3)) (##vcore.pair? (bruijn ##.expr.94.910 0 0))) (if (bruijn ##.%p.911 0 1) (basic-block 2 2 (##.cost.912 ##.expr.95.913) ((##vcore.car (bruijn ##.expr.94.910 1 0)) (##vcore.cdr (bruijn ##.expr.94.910 1 0))) ((bruijn ##.num-pairs.121 22 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k108) (bruijn ##.expr.95.913 0 1))) ((bruijn ##.%k.449 3 0) #f))) ((bruijn ##.%k.449 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k108, self)))),
      self->vars[1]);
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.877 1 0) (basic-block 1 1 (##.%x.909) ((##vcore.car (bruijn ##.expr.150 15 3))) ((bruijn ##.equal?.120 19 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k107) 'basic-block (bruijn ##.%x.909 0 0))) ((bruijn ##.%k.449 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k107, self)))),
      _V0basic__block,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.445 0 0) (bruijn ##.%k.443 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.446 0 0) (bruijn ##.expr.150 18 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 18-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.444 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k121) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda55) (bruijn ##.kk.22.151 16 1)) ((bruijn ##.%k.443 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k121, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda55, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.878 1 0) (basic-block 1 1 (##.%x.908) ((##vcore.car (bruijn ##.expr.150 16 3))) ((bruijn ##.equal?.120 20 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k120) '##intrinsic (bruijn ##.%x.908 0 0))) ((bruijn ##.%k.443 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k120, self)))),
      _V10intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.439 0 0) (bruijn ##.%k.437 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.440 0 0) (bruijn ##.expr.150 19 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 19-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.438 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k125) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda56) (bruijn ##.kk.22.151 17 1)) ((bruijn ##.%k.437 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k125, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda56, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.879 1 0) (basic-block 1 1 (##.%x.907) ((##vcore.car (bruijn ##.expr.150 17 3))) ((bruijn ##.equal?.120 21 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k124) '##basic-intrinsic (bruijn ##.%x.907 0 0))) ((bruijn ##.%k.437 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k124, self)))),
      _V10basic__intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.433 0 0) (bruijn ##.%k.431 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.434 0 0) (bruijn ##.expr.150 20 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 20-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.432 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k129) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda57) (bruijn ##.kk.22.151 18 1)) ((bruijn ##.%k.431 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k129, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda57, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.880 1 0) (basic-block 1 1 (##.%x.906) ((##vcore.car (bruijn ##.expr.150 18 3))) ((bruijn ##.equal?.120 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k128) '##foreign.function (bruijn ##.%x.906 0 0))) ((bruijn ##.%k.431 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k128, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.427 0 0) (bruijn ##.%k.425 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.428 0 0) (bruijn ##.expr.150 21 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 21-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.426 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k133) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda58) (bruijn ##.kk.22.151 19 1)) ((bruijn ##.%k.425 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k133, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda58, self)))),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.881 1 0) (basic-block 1 1 (##.%x.905) ((##vcore.car (bruijn ##.expr.150 19 3))) ((bruijn ##.equal?.120 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k132) 'quote (bruijn ##.%x.905 0 0))) ((bruijn ##.%k.425 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 19-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k132, self)))),
      _V0quote,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.418 0 0) (bruijn ##.%k.415 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.903 ##.%r.904) ((##vcore.cons (bruijn ##.f.901 3 0) (bruijn ##.%x.421 1 0)) (##vcore.cons '##inline (bruijn ##.%x.903 0 0))) ((bruijn ##.%k.419 2 0) (bruijn ##.%r.904 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10inline,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 26 0) (bruijn ##.%k.422 0 0) (bruijn ##.current-qualname.148 25 1) (bruijn ##.qualified-funcs.149 25 2) (bruijn ##.x.116.311 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 25-1, 2);
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.128 28 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k138) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda60) (bruijn ##.xs.902 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k138, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda60, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.416 0 0) (basic-block 2 2 (##.expr.109.899 ##.%p.900) ((##vcore.cdr (bruijn ##.expr.150 22 3)) (##vcore.pair? (bruijn ##.expr.109.899 0 0))) (if (bruijn ##.%p.900 0 1) (basic-block 2 2 (##.f.901 ##.xs.902) ((##vcore.car (bruijn ##.expr.109.899 1 0)) (##vcore.cdr (bruijn ##.expr.109.899 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k137) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda59) (bruijn ##.kk.22.151 22 1))) ((bruijn ##.%k.415 3 0) #f))) ((bruijn ##.%k.415 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 22-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k137, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda59, self)))),
      VGetArg(statics, 22-1, 1));
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.882 1 0) (basic-block 1 1 (##.%x.898) ((##vcore.car (bruijn ##.expr.150 20 3))) ((bruijn ##.equal?.120 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k136) '##inline (bruijn ##.%x.898 0 0))) ((bruijn ##.%k.415 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 20-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k136, self)))),
      _V10inline,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.389 0 0) (bruijn ##.%k.387 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.887 1 0) ((bruijn ##.assv.125 30 5) (bruijn ##.%k.402 0 0) (bruijn ##.f.884 5 0) (bruijn ##.qualified-funcs.149 26 2)) ((bruijn ##.%k.402 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 5)), 3,
      _var0,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 26-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.888 ##.%x.889 ##.%x.890 ##.%r.891) ((##vcore.cons (bruijn ##.f.884 9 0) (bruijn ##.%x.396 1 0)) (##vcore.cons (bruijn ##.%x.394 2 0) (bruijn ##.%x.888 0 0)) (##vcore.cons (bruijn ##.%x.392 3 0) (bruijn ##.%x.889 0 1)) (##vcore.cons '##qualified-call (bruijn ##.%x.890 0 2))) ((bruijn ##.%k.390 6 0) (bruijn ##.%r.891 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__call,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 30 0) (bruijn ##.%k.397 0 0) (bruijn ##.current-qualname.148 29 1) (bruijn ##.qualified-funcs.149 29 2) (bruijn ##.x.118.325 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 30-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 29-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 29-1, 2);
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.128 32 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k146) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda63) (bruijn ##.xs.322 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k146, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda63, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.126 31 6) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k145) (bruijn ##.x.117.323 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k145, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.892) ((##vcore.cons (bruijn ##.%x.398 2 0) (bruijn ##.%x.399 1 0))) ((bruijn ##.%k.390 5 0) (bruijn ##.%r.892 0 0)))
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 29 0) (bruijn ##.%k.400 0 0) (bruijn ##.current-qualname.148 28 1) (bruijn ##.qualified-funcs.149 28 2) (bruijn ##.x.119.326 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 29-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 28-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 28-1, 2);
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.128 31 8) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k148) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda64) (bruijn ##.xs.322 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k148, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda64, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.117.323 0 0) ((bruijn ##.caddr.127 30 7) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k144) (bruijn ##.x.117.323 0 0)) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k147) (bruijn ##.current-qualname.148 26 1) (bruijn ##.qualified-funcs.149 26 2) (bruijn ##.f.884 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k144, self)))),
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k147, self))));
    VWORD _arg1 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.887) ((##vcore.symbol? (bruijn ##.f.884 4 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k142) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k143)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k142, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k143, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.886) ((##vcore.null? (bruijn ##.tail-expr.321 1 0))) (if (bruijn ##.%p.886 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k141) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda62) (bruijn ##.kk.22.151 22 1)) ((bruijn ##.%k.387 3 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k141, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda62, self)))),
      VGetArg(statics, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.113.315 5 1) (bruijn ##.%k.411 1 0) (bruijn ##.expr.115.317 3 1) (bruijn ##.%x.412 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.894 1 1) ((bruijn ##.reverse.129 30 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k150) (bruijn ##.xs.112.318 2 2)) ((bruijn ##.%k.411 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k150, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.113.315 7 1) (bruijn ##.%k.406 2 0) (bruijn ##.expr.115.317 5 1) (bruijn ##.%x.407 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k152(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.129 32 9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k153) (bruijn ##.xs.112.318 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k153, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs.895 ##.%x.896 ##.%x.897) ((##vcore.car (bruijn ##.expr.115.317 4 1)) (##vcore.cdr (bruijn ##.expr.115.317 4 1)) (##vcore.cons (bruijn ##.xs.895 0 0) (bruijn ##.xs.112.318 4 2))) ((bruijn ##.kk.114.319 1 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k152) (bruijn ##.%x.896 0 1) (bruijn ##.%x.897 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k152, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.405 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda67))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda67, self)))));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k151(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.404 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda66) (bruijn ##.loop.316 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0lambda66, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.893 ##.%p.894) ((##vcore.pair? (bruijn ##.expr.115.317 1 1)) (##vcore.not (bruijn ##.%x.893 0 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k149) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k151)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k149, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316_V0k151, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147 ##.loop.316) #f (bruijn ##.loop.316 0 0) (bruijn ##.%k.403 1 0) (bruijn ##.expr.111.885 2 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V10_Dloop_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.883 1 0) (basic-block 2 2 (##.f.884 ##.expr.111.885) ((##vcore.car (bruijn ##.expr.150 21 3)) (##vcore.cdr (bruijn ##.expr.150 21 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda61) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda65))) ((bruijn ##.%k.387 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 21-1, 3));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 21-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda65, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.130 25 10) (bruijn ##.%k.383 0 0) (##string ##.string.1228) (bruijn ##.expr.150 21 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 10)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1228.sym, VPOINTER_OTHER),
      VGetArg(statics, 21-1, 3));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k156(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.382 19 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda68) (bruijn ##.kk.22.151 19 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 19-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda68, self)))),
      VGetArg(statics, 19-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.384 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k156))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k156, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.385 0 0) (bruijn ##.expr.150 20 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 20-1, 3));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k154(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k155) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda69) (bruijn ##.kk.22.151 18 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k155, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda69, self)))),
      VGetArg(statics, 18-1, 1));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.883) ((##vcore.pair? (bruijn ##.expr.150 19 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k140) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k154)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 19-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k154, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k134(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.882) ((##vcore.pair? (bruijn ##.expr.150 18 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k135) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k139)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 18-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k135, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k139, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k130(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.881) ((##vcore.pair? (bruijn ##.expr.150 17 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k131) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k134)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k131, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k134, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k126(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.880) ((##vcore.pair? (bruijn ##.expr.150 16 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k127) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k130)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k127, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k130, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k122(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.879) ((##vcore.pair? (bruijn ##.expr.150 15 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k123) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k126)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k123, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k126, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k118(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.878) ((##vcore.pair? (bruijn ##.expr.150 14 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k119) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k122)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k122, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k105(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.877) ((##vcore.pair? (bruijn ##.expr.150 13 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k106) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k118)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k106, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k118, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.876) ((##vcore.pair? (bruijn ##.expr.150 12 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k91) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k105)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k105, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k75(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.875) ((##vcore.pair? (bruijn ##.expr.150 11 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k76) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k90)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k76, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k90, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.874) ((##vcore.pair? (bruijn ##.expr.150 10 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k65) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k75)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k65, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k75, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k53(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.873) ((##vcore.pair? (bruijn ##.expr.150 9 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k54) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k64)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k54, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k64, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.872) ((##vcore.pair? (bruijn ##.expr.150 8 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k43) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k53)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k53, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.871) ((##vcore.pair? (bruijn ##.expr.150 7 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k38) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k42)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k38, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k42, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.870) ((##vcore.pair? (bruijn ##.expr.150 6 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k33) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k37)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k33, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k37, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.869) ((##vcore.pair? (bruijn ##.expr.150 5 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k26) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k32)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k32, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.868) ((##vcore.pair? (bruijn ##.expr.150 4 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k19) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k25)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k19, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k25, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k13(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.867) ((##vcore.pair? (bruijn ##.expr.150 3 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k14) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k18)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k14, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k18, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.866) ((##vcore.pair? (bruijn ##.expr.150 2 3))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k9) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k13)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0k13, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.%k.381 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147_V0lambda3, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.748 0 0) (bruijn ##.%k.746 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.749 0 0) (bruijn ##.expr.146 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.747 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k159) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda71) (bruijn ##.kk.16.328 4 1)) ((bruijn ##.%k.746 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k159, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda71, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1129 1 0) (basic-block 1 1 (##.%x.1143) ((##vcore.car (bruijn ##.expr.146 5 1))) ((bruijn ##.equal?.120 7 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k158) '##foreign.declare (bruijn ##.%x.1143 0 0))) ((bruijn ##.%k.746 0 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k158, self)))),
      _V10foreign_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.738 0 0) (bruijn ##.%k.733 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1140 ##.%x.1141 ##.%r.1142) ((##vcore.cons (bruijn ##.%x.742 1 0) '()) (##vcore.cons (bruijn ##.f.1134 4 0) (bruijn ##.%x.1140 0 0)) (##vcore.cons '##vcore.declare (bruijn ##.%x.1141 0 1))) ((bruijn ##.%k.739 2 0) (bruijn ##.%r.1142 0 2)))
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 10 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k164) '() '() (bruijn ##.l.1137 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k164, self))));
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.734 0 0) (basic-block 2 2 (##.expr.20.1132 ##.%p.1133) ((##vcore.cdr (bruijn ##.expr.146 8 1)) (##vcore.pair? (bruijn ##.expr.20.1132 0 0))) (if (bruijn ##.%p.1133 0 1) (basic-block 3 3 (##.f.1134 ##.expr.21.1135 ##.%p.1136) ((##vcore.car (bruijn ##.expr.20.1132 1 0)) (##vcore.cdr (bruijn ##.expr.20.1132 1 0)) (##vcore.pair? (bruijn ##.expr.21.1135 0 1))) (if (bruijn ##.%p.1136 0 2) (basic-block 3 3 (##.l.1137 ##.%x.1138 ##.%p.1139) ((##vcore.car (bruijn ##.expr.21.1135 1 1)) (##vcore.cdr (bruijn ##.expr.21.1135 1 1)) (##vcore.null? (bruijn ##.%x.1138 0 1))) (if (bruijn ##.%p.1139 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k163) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda72) (bruijn ##.kk.16.328 8 1)) ((bruijn ##.%k.733 5 0) #f))) ((bruijn ##.%k.733 4 0) #f))) ((bruijn ##.%k.733 3 0) #f))) ((bruijn ##.%k.733 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k163, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda72, self)))),
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
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1130 1 0) (basic-block 1 1 (##.%x.1131) ((##vcore.car (bruijn ##.expr.146 6 1))) ((bruijn ##.equal?.120 8 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k162) '##vcore.declare (bruijn ##.%x.1131 0 0))) ((bruijn ##.%k.733 0 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k162, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.147) #f (bruijn ##.qualify-iter.147 4 0) (bruijn ##.%k.731 0 0) '() '() (bruijn ##.expr.146 5 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k165(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.730 2 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73) (bruijn ##.kk.16.328 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k160(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1130) ((##vcore.pair? (bruijn ##.expr.146 4 1))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k161) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k165)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k161, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k165, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1129) ((##vcore.pair? (bruijn ##.expr.146 3 1))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k157) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k160)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k157, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k160, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147")) (##vcore.call/cc (bruijn ##.%k.380 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda70)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D147, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda70, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1144 1 0) (basic-block 1 1 (##.%x.1154) ((##vcore.car (bruijn ##.xs.345 5 3))) ((bruijn ##.variable-pure?.131 9 11) (bruijn ##.%k.772 1 0) (bruijn ##.%x.1154 0 0) (bruijn ##.body.340 7 5))) ((bruijn ##.%k.772 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 11)), 3,
      statics->vars[0],
      self->vars[0],
      VGetArg(statics, 7-1, 5));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1151) ((##vcore.not (bruijn ##.%x.766 1 0))) ((bruijn ##.%k.764 4 0) (bruijn ##.%r.1151 0 0)))
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
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1153) ((##vcore.not (bruijn ##.%x.768 1 0))) ((bruijn ##.%k.767 3 0) (bruijn ##.%r.1153 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1152) ((##vcore.car (bruijn ##.xs.345 9 3))) ((bruijn ##.variable-pure?.131 13 11) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k171) (bruijn ##.%x.1152 0 0) (bruijn ##.x.350 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k171, self)))),
      self->vars[0],
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.765 0 0) ((bruijn ##.any?.132 11 12) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k170) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0lambda74) (bruijn ##.vals.339 9 4)) ((bruijn ##.%k.764 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 12)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k170, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0lambda74, self)))),
      VGetArg(statics, 9-1, 4));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.763 1 0) ((bruijn ##.%k.764 0 0) (bruijn ##.%p.763 1 0)) (if (bruijn ##.letrec?.341 7 6) (basic-block 1 1 (##.%x.1150) ((##vcore.car (bruijn ##.xs.345 6 3))) ((bruijn ##.variable-pure?.131 10 11) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k169) (bruijn ##.%x.1150 0 0) (bruijn ##.body.340 8 5))) ((bruijn ##.%k.764 0 0) #f)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
if(VDecodeBool(
VGetArg(statics, 7-1, 6))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k169, self)))),
      self->vars[0],
      VGetArg(statics, 8-1, 5));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1145 1 0) ((bruijn ##.%k.762 0 0) '##qualified-lambda) ((bruijn ##.%k.762 0 0) '##qualified-case-lambda))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V10qualified__lambda);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V10qualified__case__lambda);
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1147 ##.%x.1148 ##.%r.1149) ((##vcore.cons '#f (bruijn ##.lambda-rest.349 9 2)) (##vcore.cons (bruijn ##.%x.757 1 0) (bruijn ##.%x.1147 0 0)) (##vcore.cons (bruijn ##.%x.755 4 0) (bruijn ##.%x.1148 0 1))) ((bruijn ##.%k.753 9 0) (bruijn ##.%r.1149 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      VGetArg(statics, 9-1, 2));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.123 13 3) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k176) (bruijn ##.current-qualname.336 11 1) (bruijn ##.%x.759 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k176, self)))),
      VGetArg(statics, 11-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1146) ((##vcore.car (bruijn ##.xs.345 8 3))) ((bruijn ##.list.122 12 2) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k175) (bruijn ##.%x.1146 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k175, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.754 0 0) (basic-block 1 1 (##.%p.1145) ((##vcore.eq? (bruijn ##.lamb.348 4 1) 'lambda)) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k173) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k174))) ((bruijn ##.%k.753 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->up->vars[1],
      _V0lambda);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k173, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k174, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k168) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k172))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k168, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k172, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1144) ((##vcore.not (bruijn ##.letrec?.341 5 6))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k166) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k167)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      VGetArg(statics, 5-1, 6));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k166, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347_V0k167, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.134 7 14) (bruijn ##.%k.752 3 0) (bruijn ##.%x.775 0 0) (bruijn ##.qualified-funcs.343 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 14)), 3,
      statics->up->up->vars[0],
      _var0,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.846 0 0) (bruijn ##.%k.841 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1221 ##.%x.1222 ##.%x.1223 ##.%x.1224 ##.%x.1225) ((##vcore.cons (bruijn ##.%x.853 1 0) (bruijn ##.qualified-funcs.343 15 1)) (##vcore.car (bruijn ##.rest-vals.346 15 4)) (##vcore.cons (bruijn ##.%x.1222 0 1) (bruijn ##.new-vals.344 15 2)) (##vcore.cdr (bruijn ##.xs.345 15 3)) (##vcore.cdr (bruijn ##.rest-vals.346 15 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 16 0) (bruijn ##.%k.847 3 0) (bruijn ##.%x.1221 0 0) (bruijn ##.%x.1223 0 2) (bruijn ##.%x.1224 0 3) (bruijn ##.%x.1225 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 15-1, 1));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 4));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VGetArg(statics, 15-1, 2));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    self->vars[4] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      self->vars[3];
    VWORD _arg4 = 
      self->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1220) ((##vcore.car (bruijn ##.xs.345 13 3))) ((bruijn ##.list.122 17 2) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k181) (bruijn ##.%x.1220 0 0) (bruijn ##.static?.1218 2 0) (bruijn ##.name.1215 3 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k181, self)))),
      self->vars[0],
      statics->up->vars[0],
      statics->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.843 0 0) (basic-block 2 2 (##.expr.5.1213 ##.%p.1214) ((##vcore.cdr (bruijn ##.expr.4.1210 3 0)) (##vcore.pair? (bruijn ##.expr.5.1213 0 0))) (if (bruijn ##.%p.1214 0 1) (basic-block 3 3 (##.name.1215 ##.expr.6.1216 ##.%p.1217) ((##vcore.car (bruijn ##.expr.5.1213 1 0)) (##vcore.cdr (bruijn ##.expr.5.1213 1 0)) (##vcore.pair? (bruijn ##.expr.6.1216 0 1))) (if (bruijn ##.%p.1217 0 2) (basic-block 2 2 (##.static?.1218 ##.rest.1219) ((##vcore.car (bruijn ##.expr.6.1216 1 1)) (##vcore.cdr (bruijn ##.rest-vals.346 11 4))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k180) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda76) (bruijn ##.kk.1.351 8 1))) ((bruijn ##.%k.841 5 0) #f))) ((bruijn ##.%k.841 4 0) #f))) ((bruijn ##.%k.841 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
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
      VGetArg(statics, 11-1, 4));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k180, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda76, self)))),
      VGetArg(statics, 8-1, 1));
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
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1157 1 0) (basic-block 2 2 (##.expr.4.1210 ##.%p.1211) ((##vcore.car (bruijn ##.rest-vals.346 6 4)) (##vcore.pair? (bruijn ##.expr.4.1210 0 0))) (if (bruijn ##.%p.1211 0 1) (basic-block 1 1 (##.%x.1212) ((##vcore.car (bruijn ##.expr.4.1210 1 0))) ((bruijn ##.equal?.120 11 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k179) '##qualified-lambda (bruijn ##.%x.1212 0 0))) ((bruijn ##.%k.841 1 0) #f))) ((bruijn ##.%k.841 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 4));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k179, self)))),
      _V10qualified__lambda,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.830 0 0) (bruijn ##.%k.825 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1205 ##.%x.1206 ##.%x.1207 ##.%x.1208 ##.%x.1209) ((##vcore.cons (bruijn ##.%x.837 1 0) (bruijn ##.qualified-funcs.343 16 1)) (##vcore.car (bruijn ##.rest-vals.346 16 4)) (##vcore.cons (bruijn ##.%x.1206 0 1) (bruijn ##.new-vals.344 16 2)) (##vcore.cdr (bruijn ##.xs.345 16 3)) (##vcore.cdr (bruijn ##.rest-vals.346 16 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 17 0) (bruijn ##.%k.831 3 0) (bruijn ##.%x.1205 0 0) (bruijn ##.%x.1207 0 2) (bruijn ##.%x.1208 0 3) (bruijn ##.%x.1209 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 16-1, 1));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 4));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VGetArg(statics, 16-1, 2));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
    self->vars[4] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      self->vars[3];
    VWORD _arg4 = 
      self->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1204) ((##vcore.car (bruijn ##.xs.345 14 3))) ((bruijn ##.list.122 18 2) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k186) (bruijn ##.%x.1204 0 0) (bruijn ##.static?.1202 2 0) (bruijn ##.name.1199 3 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k186, self)))),
      self->vars[0],
      statics->up->vars[0],
      statics->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.827 0 0) (basic-block 2 2 (##.expr.9.1197 ##.%p.1198) ((##vcore.cdr (bruijn ##.expr.8.1194 3 0)) (##vcore.pair? (bruijn ##.expr.9.1197 0 0))) (if (bruijn ##.%p.1198 0 1) (basic-block 3 3 (##.name.1199 ##.expr.10.1200 ##.%p.1201) ((##vcore.car (bruijn ##.expr.9.1197 1 0)) (##vcore.cdr (bruijn ##.expr.9.1197 1 0)) (##vcore.pair? (bruijn ##.expr.10.1200 0 1))) (if (bruijn ##.%p.1201 0 2) (basic-block 2 2 (##.static?.1202 ##.rest.1203) ((##vcore.car (bruijn ##.expr.10.1200 1 1)) (##vcore.cdr (bruijn ##.rest-vals.346 12 4))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k185) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda77) (bruijn ##.kk.1.351 9 1))) ((bruijn ##.%k.825 5 0) #f))) ((bruijn ##.%k.825 4 0) #f))) ((bruijn ##.%k.825 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
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
      VGetArg(statics, 12-1, 4));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k185, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda77, self)))),
      VGetArg(statics, 9-1, 1));
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
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1158 1 0) (basic-block 2 2 (##.expr.8.1194 ##.%p.1195) ((##vcore.car (bruijn ##.rest-vals.346 7 4)) (##vcore.pair? (bruijn ##.expr.8.1194 0 0))) (if (bruijn ##.%p.1195 0 1) (basic-block 1 1 (##.%x.1196) ((##vcore.car (bruijn ##.expr.8.1194 1 0))) ((bruijn ##.equal?.120 12 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k184) '##qualified-case-lambda (bruijn ##.%x.1196 0 0))) ((bruijn ##.%k.825 1 0) #f))) ((bruijn ##.%k.825 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 4));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k184, self)))),
      _V10qualified__case__lambda,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.810 0 0) (bruijn ##.%k.807 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1186 ##.%x.1187 ##.%x.1188 ##.%x.1189) ((##vcore.cons (bruijn ##.%x.816 1 0) (bruijn ##.qualified-funcs.343 17 1)) (##vcore.cons (bruijn ##.new-lambda.371 4 0) (bruijn ##.new-vals.344 17 2)) (##vcore.cdr (bruijn ##.xs.345 17 3)) (##vcore.cdr (bruijn ##.rest-vals.346 17 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 18 0) (bruijn ##.%k.811 5 0) (bruijn ##.%x.1186 0 0) (bruijn ##.%x.1187 0 1) (bruijn ##.%x.1188 0 2) (bruijn ##.%x.1189 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 17-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VGetArg(statics, 17-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    VWORD _arg4 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.122 19 2) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k193) (bruijn ##.%x.1185 1 0) #f (bruijn ##.%x.818 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k193, self)))),
      statics->vars[0],
      VEncodeBool(false),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.new-lambda.371 0 0) (basic-block 1 1 (##.%x.1185) ((##vcore.car (bruijn ##.xs.345 14 3))) ((bruijn ##.cadr.126 18 6) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k192) (bruijn ##.new-lambda.371 1 0))) (basic-block 4 4 (##.%x.1190 ##.%x.1191 ##.%x.1192 ##.%x.1193) ((##vcore.car (bruijn ##.rest-vals.346 14 4)) (##vcore.cons (bruijn ##.%x.1190 0 0) (bruijn ##.new-vals.344 14 2)) (##vcore.cdr (bruijn ##.xs.345 14 3)) (##vcore.cdr (bruijn ##.rest-vals.346 14 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 15 0) (bruijn ##.%k.811 2 0) (bruijn ##.qualified-funcs.343 14 1) (bruijn ##.%x.1191 0 1) (bruijn ##.%x.1192 0 2) (bruijn ##.%x.1193 0 3))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k192, self)))),
      statics->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 4));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 14-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    VWORD _arg4 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342 ##.qualify-lambda.347) #f (bruijn ##.qualify-lambda.347 11 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k191) 'lambda (bruijn ##.lambda-rest.1183 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k191, self))));
    VWORD _arg1 = 
      _V0lambda;
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.809 0 0) (basic-block 2 2 (##.lambda-rest.1183 ##.rest.1184) ((##vcore.cdr (bruijn ##.expr.12.1180 3 0)) (##vcore.cdr (bruijn ##.rest-vals.346 11 4))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k190) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda78) (bruijn ##.kk.1.351 8 1))) ((bruijn ##.%k.807 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 4));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k190, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda78, self)))),
      VGetArg(statics, 8-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1159 1 0) (basic-block 2 2 (##.expr.12.1180 ##.%p.1181) ((##vcore.car (bruijn ##.rest-vals.346 8 4)) (##vcore.pair? (bruijn ##.expr.12.1180 0 0))) (if (bruijn ##.%p.1181 0 1) (basic-block 1 1 (##.%x.1182) ((##vcore.car (bruijn ##.expr.12.1180 1 0))) ((bruijn ##.equal?.120 13 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k189) 'lambda (bruijn ##.%x.1182 0 0))) ((bruijn ##.%k.807 1 0) #f))) ((bruijn ##.%k.807 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 4));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k189, self)))),
      _V0lambda,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.792 0 0) (bruijn ##.%k.789 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1172 ##.%x.1173 ##.%x.1174 ##.%x.1175) ((##vcore.cons (bruijn ##.%x.798 1 0) (bruijn ##.qualified-funcs.343 18 1)) (##vcore.cons (bruijn ##.new-lambda.376 4 0) (bruijn ##.new-vals.344 18 2)) (##vcore.cdr (bruijn ##.xs.345 18 3)) (##vcore.cdr (bruijn ##.rest-vals.346 18 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 19 0) (bruijn ##.%k.793 5 0) (bruijn ##.%x.1172 0 0) (bruijn ##.%x.1173 0 1) (bruijn ##.%x.1174 0 2) (bruijn ##.%x.1175 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 18-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VGetArg(statics, 18-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 3));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    VWORD _arg4 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.122 20 2) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k200) (bruijn ##.%x.1171 1 0) #f (bruijn ##.%x.800 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k200, self)))),
      statics->vars[0],
      VEncodeBool(false),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.new-lambda.376 0 0) (basic-block 1 1 (##.%x.1171) ((##vcore.car (bruijn ##.xs.345 15 3))) ((bruijn ##.cadr.126 19 6) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k199) (bruijn ##.new-lambda.376 1 0))) (basic-block 4 4 (##.%x.1176 ##.%x.1177 ##.%x.1178 ##.%x.1179) ((##vcore.car (bruijn ##.rest-vals.346 15 4)) (##vcore.cons (bruijn ##.%x.1176 0 0) (bruijn ##.new-vals.344 15 2)) (##vcore.cdr (bruijn ##.xs.345 15 3)) (##vcore.cdr (bruijn ##.rest-vals.346 15 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 16 0) (bruijn ##.%k.793 2 0) (bruijn ##.qualified-funcs.343 15 1) (bruijn ##.%x.1177 0 1) (bruijn ##.%x.1178 0 2) (bruijn ##.%x.1179 0 3))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k199, self)))),
      statics->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 4));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 15-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    VWORD _arg4 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342 ##.qualify-lambda.347) #f (bruijn ##.qualify-lambda.347 12 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k198) 'case-lambda (bruijn ##.lambda-rest.1169 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k198, self))));
    VWORD _arg1 = 
      _V0case__lambda;
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.791 0 0) (basic-block 2 2 (##.lambda-rest.1169 ##.rest.1170) ((##vcore.cdr (bruijn ##.expr.14.1166 3 0)) (##vcore.cdr (bruijn ##.rest-vals.346 12 4))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k197) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda79) (bruijn ##.kk.1.351 9 1))) ((bruijn ##.%k.789 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 4));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k197, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda79, self)))),
      VGetArg(statics, 9-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1160 1 0) (basic-block 2 2 (##.expr.14.1166 ##.%p.1167) ((##vcore.car (bruijn ##.rest-vals.346 9 4)) (##vcore.pair? (bruijn ##.expr.14.1166 0 0))) (if (bruijn ##.%p.1167 0 1) (basic-block 1 1 (##.%x.1168) ((##vcore.car (bruijn ##.expr.14.1166 1 0))) ((bruijn ##.equal?.120 14 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k196) 'case-lambda (bruijn ##.%x.1168 0 0))) ((bruijn ##.%k.789 1 0) #f))) ((bruijn ##.%k.789 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 4));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k196, self)))),
      _V0case__lambda,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.782 0 0) (bruijn ##.%k.781 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1162 ##.%x.1163 ##.%x.1164 ##.%x.1165) ((##vcore.car (bruijn ##.rest-vals.346 11 4)) (##vcore.cons (bruijn ##.%x.1162 0 0) (bruijn ##.new-vals.344 11 2)) (##vcore.cdr (bruijn ##.xs.345 11 3)) (##vcore.cdr (bruijn ##.rest-vals.346 11 4))) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 12 0) (bruijn ##.%k.783 1 0) (bruijn ##.qualified-funcs.343 11 1) (bruijn ##.%x.1163 0 1) (bruijn ##.%x.1164 0 2) (bruijn ##.%x.1165 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 4));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 11-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 3));
    self->vars[3] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 4));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    VWORD _arg4 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1161 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k203) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda80) (bruijn ##.kk.1.351 6 1)) ((bruijn ##.%k.781 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k203, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda80, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k206(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.135 13 15) (bruijn ##.%k.776 6 0) (##string ##.string.1229))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 15)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1229.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.777 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k206))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k206, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.134 14 14) (bruijn ##.%k.778 1 0) (bruijn ##.%x.779 0 0) (bruijn ##.qualified-funcs.343 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 14)), 3,
      statics->vars[0],
      _var0,
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.133 13 13) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k207) (##intrinsic ##vcore.cons) (bruijn ##.rest-vals.346 9 4) (bruijn ##.new-vals.344 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 13)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k207, self)))),
      _V40_V10vcore_Dcons,
      VGetArg(statics, 9-1, 4),
      VGetArg(statics, 9-1, 2));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k204(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k205) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda81) (bruijn ##.kk.1.351 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k205, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda81, self)))),
      VGetArg(statics, 5-1, 1));
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k201(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1161) ((##vcore.pair? (bruijn ##.rest-vals.346 8 4))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k202) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k204)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 4));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k202, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k204, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k194(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1160) ((##vcore.pair? (bruijn ##.rest-vals.346 7 4))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k195) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k201)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 4));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k195, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k201, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k187(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1159) ((##vcore.pair? (bruijn ##.rest-vals.346 6 4))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k188) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k194)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 4));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k188, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k194, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k182(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1158) ((##vcore.pair? (bruijn ##.rest-vals.346 5 4))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k183) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k187)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 4));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k183, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k187, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1157) ((##vcore.pair? (bruijn ##.rest-vals.346 4 4))) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k178) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k182)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[4]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k178, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k182, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342, got ~D~N"
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347")) (basic-block 2 2 (##.%x.1155 ##.%p.1156) ((##vcore.pair? (bruijn ##.xs.345 2 3)) (##vcore.not (bruijn ##.%x.1155 0 0))) (if (bruijn ##.%p.1156 0 1) ((bruijn ##.fold.133 6 13) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k177) (##intrinsic ##vcore.cons) (bruijn ##.rest-vals.346 2 4) (bruijn ##.new-vals.344 2 2)) (##vcore.call/cc (bruijn ##.%k.752 2 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda75)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V10_Dqualify__lambda_D347, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[3]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 13)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0k177, self)))),
      _V40_V10vcore_Dcons,
      statics->up->vars[4],
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342_V0lambda75, self)))));
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 if(argc != 7) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, got ~D~N"
  "-- expected 7~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[7]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 7, 7, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342")) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.342) #f (bruijn ##.scan-bindings-loop.342 0 0) (bruijn ##.%k.751 1 0) (bruijn ##.qualified-funcs.337 1 2) '() (bruijn ##.xs.338 1 3) (bruijn ##.vals.339 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      statics->vars[3];
    VWORD _arg4 = 
      statics->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D342(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
static void _V0vanity_V0compiler_V0optimize_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15) {
 if(argc != 16) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0lambda2, got ~D~N"
  "-- expected 16~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[16]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 16, 16, statics);
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
  self->vars[12] = _var12;
  self->vars[13] = _var13;
  self->vars[14] = _var14;
  self->vars[15] = _var15;
  // (##letrec (vanity compiler optimize) 2 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites" (vanity compiler optimize)) (close "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings" (vanity compiler optimize))) (basic-block 2 2 (##.%x.1226 ##.%r.1227) ((##vcore.cons 'qualify-callsites (bruijn ##.qualify-callsites.144 1 0)) (##vcore.cons (bruijn ##.%x.1226 0 0) '())) ((bruijn ##.%k.379 11 0) (bruijn ##.%r.1227 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0optimize = self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites, _V60_V0vanity_V0compiler_V0optimize))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _V60_V0vanity_V0compiler_V0optimize))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0optimize_V20", &_V60_V0vanity_V0compiler_V0optimize);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0qualify__callsites,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      self->vars[1]);
    }
    }
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0optimize_V20_V0lambda2) (##string ##.string.1230) (bruijn ##.%x.858 0 0) 'equal? 'num-pairs 'list 'append 'split-at-right 'assv 'cadr 'caddr 'map 'reverse 'compiler-error 'variable-pure? 'any? 'fold 'values 'error)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 19,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D1230.sym, VPOINTER_OTHER),
      _var0,
      _V0equal_Q,
      _V0num__pairs,
      _V0list,
      _V0append,
      _V0split__at__right,
      _V0assv,
      _V0cadr,
      _V0caddr,
      _V0map,
      _V0reverse,
      _V0compiler__error,
      _V0variable__pure_Q,
      _V0any_Q,
      _V0fold,
      _V0values,
      _V0error);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0optimize_V20_V0k8) (bruijn ##.%x.859 6 0) (bruijn ##.%x.860 5 0) (bruijn ##.%x.861 4 0) (bruijn ##.%x.862 3 0) (bruijn ##.%x.863 2 0) (bruijn ##.%x.864 1 0) (bruijn ##.%x.865 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 8,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k8, self)))),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k7) (##string ##.string.1231))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D1231.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k6) (##string ##.string.1232))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D1232.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k5) (##string ##.string.1233))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1233.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k4) (##string ##.string.1234))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1234.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k3) (##string ##.string.1235))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1235.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k2) (##string ##.string.1236))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1236.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0optimize_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k1) (##string ##.string.1237))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1237.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0optimize_V20 = (VFunc)_V0vanity_V0compiler_V0optimize_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0any_Q = VEncodePointer(VInternSymbol(-147461932, &_VW_V0any_Q.sym), VPOINTER_OTHER);
  _V0variable__pure_Q = VEncodePointer(VInternSymbol(426375154, &_VW_V0variable__pure_Q.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VInternSymbol(-1001750904, &_VW_V0split__at__right.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VInternSymbol(67164350, &_VW_V0num__pairs.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0qualify__callsites = VEncodePointer(VInternSymbol(1657397746, &_VW_V0qualify__callsites.sym), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V10qualified__call = VEncodePointer(VInternSymbol(1058881829, &_VW_V10qualified__call.sym), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VInternSymbol(-1641713520, &_VW_V10inline.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V0basic__block = VEncodePointer(VInternSymbol(200115236, &_VW_V0basic__block.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VInternSymbol(871318520, &_VW_V0continuation.sym), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VInternSymbol(-473367874, &_VW_V10qualified__case__lambda.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VInternSymbol(905832333, &_VW_V10qualified__lambda.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
