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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0optimize_V20" };
VWEAK VWORD _V0variable__pure_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0variable__pure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "variable-pure\?" };
VWEAK VWORD _V0any_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0any_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "any\?" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0qualify__callsites;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0qualify__callsites = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "qualify-callsites" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "qualify-callsites: NO matching case" };
VWEAK VWORD _V10qualified__call;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10qualified__call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##qualified-call" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0basic__block;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0basic__block = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "basic-block" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V40_V10vcore_Dcons;VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
static __attribute__((constructor)) void VDllMain1() {
  _V0variable__pure_Q = VEncodePointer(VLookupConstant("_V0variable__pure_Q", &_VW_V0variable__pure_Q), VPOINTER_OTHER);
  _V0any_Q = VEncodePointer(VLookupConstant("_V0any_Q", &_VW_V0any_Q), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VLookupConstant("_V0fold", &_VW_V0fold), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VLookupConstant("_V0num__pairs", &_VW_V0num__pairs), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VLookupConstant("_V0split__at__right", &_VW_V0split__at__right), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0qualify__callsites = VEncodePointer(VLookupConstant("_V0qualify__callsites", &_VW_V0qualify__callsites), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VLookupConstant("_V10vcore_Ddeclare", &_VW_V10vcore_Ddeclare), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V10qualified__call = VEncodePointer(VLookupConstant("_V10qualified__call", &_VW_V10qualified__call), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VLookupConstant("_V10inline", &_VW_V10inline), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0basic__block = VEncodePointer(VLookupConstant("_V0basic__block", &_VW_V0basic__block), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VLookupConstant("_V0continuation", &_VW_V0continuation), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VLookupConstant("_V10qualified__case__lambda", &_VW_V10qualified__case__lambda), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VLookupConstant("_V10qualified__lambda", &_VW_V10qualified__lambda), VPOINTER_OTHER);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, _var0, _var1, _var2, _var3, _var4, _var5, _var6);
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.letrec?.128 5 6)) ((bruijn ##.x.318 21 0) (bruijn ##.k.353 0 0) (##inline ##vcore.car (bruijn ##.xs.132 3 3)) (bruijn ##.body.127 5 5)) ((bruijn ##.k.353 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VGetArg(statics, 5-1, 6)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VInlineCar2(runtime,
        statics->up->up->vars[3]),
      VGetArg(statics, 5-1, 5));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.345 2 0) (##inline ##vcore.not (bruijn ##.x.347 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.348 1 0) (##inline ##vcore.not (bruijn ##.x.349 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.318 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k29) (##inline ##vcore.car (bruijn ##.xs.132 6 3)) (bruijn ##.x.137 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k29, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 3)),
      _var1);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.346 0 0) ((bruijn ##.x.319 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k28) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0lambda2) (bruijn ##.vals.126 7 4)) ((bruijn ##.k.345 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k28, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0lambda2, self)))),
      VGetArg(statics, 7-1, 4));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.344 1 0) ((bruijn ##.k.345 0 0) (bruijn ##.p.344 1 0)) (if (bruijn ##.letrec?.128 6 6) ((bruijn ##.x.318 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k27) (##inline ##vcore.car (bruijn ##.xs.132 4 3)) (bruijn ##.body.127 6 5)) ((bruijn ##.k.345 0 0) #f)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
if(VDecodeBool(
VGetArg(statics, 6-1, 6))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k27, self)))),
      VInlineCar2(runtime,
        statics->up->up->up->vars[3]),
      VGetArg(statics, 6-1, 5));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.342 1 0) ((bruijn ##.k.343 0 0) '##qualified-lambda) ((bruijn ##.k.343 0 0) '##qualified-case-lambda))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V10qualified__lambda);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V10qualified__case__lambda);
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.335 6 0) (##inline ##vcore.cons (bruijn ##.x.337 2 0) (##inline ##vcore.cons (bruijn ##.x.339 0 0) (bruijn ##.lambda-rest.136 6 2))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 6-1, 2))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.321 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k35) (bruijn ##.current-qualname.123 9 1) (bruijn ##.x.340 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k35, self)))),
      VGetArg(statics, 9-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.320 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k34) (##inline ##vcore.car (bruijn ##.xs.132 6 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k34, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 3)));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k32) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k33))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k32, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k33, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.336 0 0) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k31) (bruijn ##.lamb.135 2 1) 'lambda) ((bruijn ##.k.335 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k31, self)))),
      statics->up->vars[1],
      _V0lambda);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k26) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k30))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k30, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k24) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k25))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k24, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134_V0k25, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.429 0 0) (bruijn ##.k.425 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.129) (bruijn ##.scan-bindings-loop.129 8 0) (bruijn ##.k.430 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.xs.132 7 3)) (##inline ##vcore.car (bruijn ##.expr.4.142 1 0))) (bruijn ##.qualified-funcs.130 7 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.rest-vals.133 7 4)) (bruijn ##.new-vals.131 7 2)) (##inline ##vcore.cdr (bruijn ##.xs.132 7 3)) (##inline ##vcore.cdr (bruijn ##.rest-vals.133 7 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 3)),
        VInlineCar2(runtime,
        statics->vars[0])),
        VGetArg(statics, 7-1, 1));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 4)),
        VGetArg(statics, 7-1, 2));
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 3));
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 4));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.142 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k40) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda4) (bruijn ##.kk.0.138 4 1)) ((bruijn ##.k.425 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda4, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.427 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k39) (##inline ##vcore.cdr (bruijn ##.expr.3.141 1 0))) ((bruijn ##.k.425 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k39, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.141 0 0)) ((bruijn ##.x.322 18 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k38) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.3.141 0 0))) ((bruijn ##.k.425 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k38, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.rest-vals.133 3 4)) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k37) (##inline ##vcore.car (bruijn ##.rest-vals.133 3 4))) ((bruijn ##.k.425 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[4]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k37, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[4]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.414 0 0) (bruijn ##.k.410 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.129) (bruijn ##.scan-bindings-loop.129 9 0) (bruijn ##.k.415 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.xs.132 8 3)) (##inline ##vcore.car (bruijn ##.expr.7.147 1 0))) (bruijn ##.qualified-funcs.130 8 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.rest-vals.133 8 4)) (bruijn ##.new-vals.131 8 2)) (##inline ##vcore.cdr (bruijn ##.xs.132 8 3)) (##inline ##vcore.cdr (bruijn ##.rest-vals.133 8 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 3)),
        VInlineCar2(runtime,
        statics->vars[0])),
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 4)),
        VGetArg(statics, 8-1, 2));
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 3));
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 4));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.147 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k46) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda5) (bruijn ##.kk.0.138 5 1)) ((bruijn ##.k.410 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k46, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda5, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.412 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k45) (##inline ##vcore.cdr (bruijn ##.expr.6.146 1 0))) ((bruijn ##.k.410 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k45, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.6.146 0 0)) ((bruijn ##.x.322 19 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k44) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.6.146 0 0))) ((bruijn ##.k.410 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k44, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.rest-vals.133 4 4)) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k43) (##inline ##vcore.car (bruijn ##.rest-vals.133 4 4))) ((bruijn ##.k.410 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[4]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k43, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->up->vars[4]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.395 0 0) (bruijn ##.k.392 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.129) (bruijn ##.scan-bindings-loop.129 11 0) (bruijn ##.k.396 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.xs.132 10 3)) (bruijn ##.x.403 0 0)) (bruijn ##.qualified-funcs.130 10 1)) (##inline ##vcore.cons (bruijn ##.new-lambda.154 1 0) (bruijn ##.new-vals.131 10 2)) (##inline ##vcore.cdr (bruijn ##.xs.132 10 3)) (##inline ##vcore.cdr (bruijn ##.rest-vals.133 10 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 10-1, 3)),
        _var0),
        VGetArg(statics, 10-1, 1));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        statics->vars[0],
        VGetArg(statics, 10-1, 2));
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 3));
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 4));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.new-lambda.154 0 0) ((bruijn ##.x.323 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k53) (bruijn ##.new-lambda.154 0 0)) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.129) (bruijn ##.scan-bindings-loop.129 10 0) (bruijn ##.k.396 1 0) (bruijn ##.qualified-funcs.130 9 1) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.rest-vals.133 9 4)) (bruijn ##.new-vals.131 9 2)) (##inline ##vcore.cdr (bruijn ##.xs.132 9 3)) (##inline ##vcore.cdr (bruijn ##.rest-vals.133 9 4))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k53, self)))),
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 9-1, 4)),
        VGetArg(statics, 9-1, 2));
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 3));
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 4));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.129 ##.qualify-lambda.134) (bruijn ##.qualify-lambda.134 7 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k52) 'lambda (##inline ##vcore.cdr (bruijn ##.expr.9.151 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k52, self))));
    VWORD _arg1 = 
      _V0lambda;
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.394 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k51) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda6) (bruijn ##.kk.0.138 5 1)) ((bruijn ##.k.392 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k51, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda6, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.151 0 0)) ((bruijn ##.x.322 20 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k50) 'lambda (##inline ##vcore.car (bruijn ##.expr.9.151 0 0))) ((bruijn ##.k.392 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k50, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.rest-vals.133 5 4)) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k49) (##inline ##vcore.car (bruijn ##.rest-vals.133 5 4))) ((bruijn ##.k.392 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 4)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k49, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 4)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.377 0 0) (bruijn ##.k.374 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.129) (bruijn ##.scan-bindings-loop.129 12 0) (bruijn ##.k.378 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.xs.132 11 3)) (bruijn ##.x.385 0 0)) (bruijn ##.qualified-funcs.130 11 1)) (##inline ##vcore.cons (bruijn ##.new-lambda.159 1 0) (bruijn ##.new-vals.131 11 2)) (##inline ##vcore.cdr (bruijn ##.xs.132 11 3)) (##inline ##vcore.cdr (bruijn ##.rest-vals.133 11 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 11-1, 3)),
        _var0),
        VGetArg(statics, 11-1, 1));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        statics->vars[0],
        VGetArg(statics, 11-1, 2));
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 3));
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 4));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.new-lambda.159 0 0) ((bruijn ##.x.323 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k60) (bruijn ##.new-lambda.159 0 0)) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.129) (bruijn ##.scan-bindings-loop.129 11 0) (bruijn ##.k.378 1 0) (bruijn ##.qualified-funcs.130 10 1) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.rest-vals.133 10 4)) (bruijn ##.new-vals.131 10 2)) (##inline ##vcore.cdr (bruijn ##.xs.132 10 3)) (##inline ##vcore.cdr (bruijn ##.rest-vals.133 10 4))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k60, self)))),
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 10-1, 4)),
        VGetArg(statics, 10-1, 2));
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 3));
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 4));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.129 ##.qualify-lambda.134) (bruijn ##.qualify-lambda.134 8 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k59) 'case-lambda (##inline ##vcore.cdr (bruijn ##.expr.11.156 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k59, self))));
    VWORD _arg1 = 
      _V0case__lambda;
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.376 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k58) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda7) (bruijn ##.kk.0.138 6 1)) ((bruijn ##.k.374 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k58, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda7, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.156 0 0)) ((bruijn ##.x.322 21 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k57) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.11.156 0 0))) ((bruijn ##.k.374 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k57, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.rest-vals.133 6 4)) ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k56) (##inline ##vcore.car (bruijn ##.rest-vals.133 6 4))) ((bruijn ##.k.374 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 4)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k56, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 4)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.367 0 0) (bruijn ##.k.366 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.129) (bruijn ##.scan-bindings-loop.129 9 0) (bruijn ##.k.368 0 0) (bruijn ##.qualified-funcs.130 8 1) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.rest-vals.133 8 4)) (bruijn ##.new-vals.131 8 2)) (##inline ##vcore.cdr (bruijn ##.xs.132 8 3)) (##inline ##vcore.cdr (bruijn ##.rest-vals.133 8 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 4)),
        VGetArg(statics, 8-1, 2));
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 3));
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 4));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.rest-vals.133 7 4)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k63) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda8) (bruijn ##.kk.0.138 5 1)) ((bruijn ##.k.366 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 4)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k63, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda8, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.326 19 0) (bruijn ##.k.355 7 0) (##string ##.string.792))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D792.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.362 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k66))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k66, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.325 20 0) (bruijn ##.k.363 1 0) (bruijn ##.x.364 0 0) (bruijn ##.qualified-funcs.130 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      statics->vars[0],
      _var0,
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.324 20 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k67) (##intrinsic ##vcore.cons) (bruijn ##.rest-vals.133 8 4) (bruijn ##.new-vals.131 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k67, self)))),
      _V40_V10vcore_Dcons,
      VGetArg(statics, 8-1, 4),
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k65) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda9) (bruijn ##.kk.0.138 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda9, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k62) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k64))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k62, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k64, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k55) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k61))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k55, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k61, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k48) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k54))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k48, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k54, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k42) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k47))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k42, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k47, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k36) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k41))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k36, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0k41, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129, got ~D~N"
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134")) (##vcore.call/cc (bruijn ##.k.334 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V10_Dqualify__lambda_D134, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129_V0lambda3, self)))));
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129")) (##qualified-call (vanity compiler optimize scan-bindings ##.scan-bindings-loop.129) (bruijn ##.scan-bindings-loop.129 0 0) (bruijn ##.k.333 1 0) (bruijn ##.qualified-funcs.124 1 2) '() (bruijn ##.xs.125 1 3) (bruijn ##.vals.126 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
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
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings_V10_Dscan__bindings__loop_D129(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.753 0 0) (bruijn ##.k.748 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.754 1 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.22.169 3 0)) (##inline ##vcore.cons (bruijn ##.x.757 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 7 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k73) (bruijn ##.current-qualname.163 6 1) (bruijn ##.qualified-funcs.164 6 2) (##inline ##vcore.car (bruijn ##.expr.23.171 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k73, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.171 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.171 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k72) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda11) (bruijn ##.kk.19.166 4 1)) ((bruijn ##.k.748 3 0) #f)) ((bruijn ##.k.748 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k72, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda11, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.169 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k71) (##inline ##vcore.cdr (bruijn ##.expr.22.169 0 0))) ((bruijn ##.k.748 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k71, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.749 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k70) (##inline ##vcore.cdr (bruijn ##.expr.165 3 3))) ((bruijn ##.k.748 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k70, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[3]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 2 3)) ((bruijn ##.x.322 16 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k69) 'lambda (##inline ##vcore.car (bruijn ##.expr.165 2 3))) ((bruijn ##.k.748 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[3]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k69, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->vars[3]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.739 0 0) (bruijn ##.k.733 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.740 1 0) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (bruijn ##.name.175 4 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.26.176 3 0)) (##inline ##vcore.cons (bruijn ##.x.744 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 10 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k82) (bruijn ##.name.175 3 0) (bruijn ##.qualified-funcs.164 9 2) (##inline ##vcore.car (bruijn ##.expr.27.178 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k82, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.178 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.27.178 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k81) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda12) (bruijn ##.kk.19.166 7 1)) ((bruijn ##.k.733 5 0) #f)) ((bruijn ##.k.733 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k81, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda12, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.176 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k80) (##inline ##vcore.cdr (bruijn ##.expr.26.176 0 0))) ((bruijn ##.k.733 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k80, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k79) (##inline ##vcore.cdr (bruijn ##.expr.25.174 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k79, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.174 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k78) (##inline ##vcore.car (bruijn ##.expr.25.174 0 0))) ((bruijn ##.k.733 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k78, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.734 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k77) (##inline ##vcore.cdr (bruijn ##.expr.165 4 3))) ((bruijn ##.k.733 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k77, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[3]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 3 3)) ((bruijn ##.x.322 17 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k76) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.165 3 3))) ((bruijn ##.k.733 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[3]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k76, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[3]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.723 0 0) (bruijn ##.k.721 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.724 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.725 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.726 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.cases.182 2 1)) (##inline ##vcore.cons (bruijn ##.x.729 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 9 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k89) (bruijn ##.current-qualname.163 8 1) (bruijn ##.qualified-funcs.164 8 2) (bruijn ##.x.730 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k89, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    VWORD _arg3 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.323 20 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k88) (bruijn ##.cases.182 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k88, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.330 12 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k87) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda14) (##inline ##vcore.cdr (bruijn ##.expr.165 6 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k87, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda14, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 3)));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.722 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k86) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda13) (bruijn ##.kk.19.166 4 1)) ((bruijn ##.k.721 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k86, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda13, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 4 3)) ((bruijn ##.x.322 18 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k85) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.165 4 3))) ((bruijn ##.k.721 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[3]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k85, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[3]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.710 0 0) (bruijn ##.k.707 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.711 1 0) (##inline ##vcore.cons '##qualified-case-lambda (##inline ##vcore.cons (bruijn ##.name.185 2 0) (bruijn ##.x.713 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__case__lambda,
        VInlineCons2(runtime,
        statics->up->vars[0],
        _var0)));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.714 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.cases.187 2 1)) (##inline ##vcore.cons (bruijn ##.x.717 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 12 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k98) (bruijn ##.name.185 3 0) (bruijn ##.qualified-funcs.164 11 2) (bruijn ##.x.718 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k98, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    VWORD _arg3 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.323 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k97) (bruijn ##.cases.187 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k97, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.330 15 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k96) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda16) (##inline ##vcore.cdr (bruijn ##.expr.30.184 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k96, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda16, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k95) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda15) (bruijn ##.kk.19.166 7 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k95, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda15, self)))),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.184 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k94) (##inline ##vcore.car (bruijn ##.expr.30.184 0 0))) ((bruijn ##.k.707 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k94, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.708 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k93) (##inline ##vcore.cdr (bruijn ##.expr.165 6 3))) ((bruijn ##.k.707 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k93, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 5 3)) ((bruijn ##.x.322 19 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k92) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.165 5 3))) ((bruijn ##.k.707 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 3)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k92, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 0 0) (bruijn ##.k.694 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.700 1 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.32.189 3 0)) (##inline ##vcore.cons (bruijn ##.x.703 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 11 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k105) (bruijn ##.current-qualname.163 10 1) (bruijn ##.qualified-funcs.164 10 2) (##inline ##vcore.car (bruijn ##.expr.33.191 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k105, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.191 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.191 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k104) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda17) (bruijn ##.kk.19.166 8 1)) ((bruijn ##.k.694 3 0) #f)) ((bruijn ##.k.694 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k104, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda17, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.189 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k103) (##inline ##vcore.cdr (bruijn ##.expr.32.189 0 0))) ((bruijn ##.k.694 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k103, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.695 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k102) (##inline ##vcore.cdr (bruijn ##.expr.165 7 3))) ((bruijn ##.k.694 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k102, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 6 3)) ((bruijn ##.x.322 20 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k101) 'continuation (##inline ##vcore.car (bruijn ##.expr.165 6 3))) ((bruijn ##.k.694 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 3)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k101, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.40.200 4 1) (bruijn ##.k.677 1 0) (bruijn ##.expr.42.202 2 1) (bruijn ##.x.678 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.42.202 1 1))) ((bruijn ##.x.331 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k115) (bruijn ##.vals.39.203 1 2)) ((bruijn ##.k.677 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k115, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.40.200 7 1) (bruijn ##.k.671 2 0) (bruijn ##.expr.42.202 5 1) (bruijn ##.x.673 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.331 26 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k118) (bruijn ##.vals.39.203 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k118, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.41.204 0 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k117) (##inline ##vcore.cdr (bruijn ##.expr.42.202 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.42.202 3 1)) (bruijn ##.vals.39.203 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k117, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.670 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0lambda21))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0lambda21, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.668 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0lambda20) (bruijn ##.loop.201 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0lambda20, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k114) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k116))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k114, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201_V0k116, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162 ##.loop.201) (bruijn ##.loop.201 0 0) (bruijn ##.k.667 1 0) (##inline ##vcore.cdr (bruijn ##.expr.165 16 3)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 16-1, 3));
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D201(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.666 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda19))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda19, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.682 0 0) (bruijn ##.k.680 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) (bruijn ##.scan-bindings.121 19 0) (bruijn ##.k.684 0 0) (bruijn ##.current-qualname.163 16 1) (bruijn ##.qualified-funcs.164 16 2) (bruijn ##.xs.196 5 0) (bruijn ##.vals.207 2 2) (bruijn ##.body.198 3 0) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg4 = 
      statics->up->vars[2];
    VWORD _arg5 = 
      statics->up->up->vars[0];
    VWORD _arg6 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure->env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.685 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.xs.196 7 0) (##inline ##vcore.cons (bruijn ##.x.690 1 0) '()))) (bruijn ##.x.687 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL))),
        _var0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 18 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k121) (bruijn ##.current-qualname.163 17 1) (bruijn ##.qualified-funcs.164 17 2) (bruijn ##.new-vals.208 1 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k121, self))));
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 2);
    VWORD _arg3 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda25, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 17 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k120) (bruijn ##.current-qualname.163 16 1) (bruijn ##.new-qualified-funcs.209 0 2) (bruijn ##.body.198 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k120, self))));
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 1);
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.683 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda24) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda25))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda24, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda25, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.206 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k119) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda23) (bruijn ##.kk.19.166 13 1)) ((bruijn ##.k.680 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k119, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda23, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.197 1 0))) (##vcore.call-with-values (bruijn ##.k.660 6 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda18) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda22)) ((bruijn ##.k.660 6 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda18, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda22, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.197 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k113) (##inline ##vcore.car (bruijn ##.expr.37.197 0 0))) ((bruijn ##.k.660 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k113, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k112) (##inline ##vcore.cdr (bruijn ##.expr.36.195 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k112, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.195 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k111) (##inline ##vcore.car (bruijn ##.expr.36.195 0 0))) ((bruijn ##.k.660 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k111, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.662 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k110) (##inline ##vcore.cdr (bruijn ##.expr.35.194 1 0))) ((bruijn ##.k.660 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k110, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.194 0 0)) ((bruijn ##.x.322 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k109) 'lambda (##inline ##vcore.car (bruijn ##.expr.35.194 0 0))) ((bruijn ##.k.660 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k109, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 7 3)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k108) (##inline ##vcore.car (bruijn ##.expr.165 7 3))) ((bruijn ##.k.660 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 3)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k108, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.49.217 4 1) (bruijn ##.k.643 1 0) (bruijn ##.expr.51.219 2 1) (bruijn ##.x.644 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.51.219 1 1))) ((bruijn ##.x.331 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k131) (bruijn ##.vals.48.220 1 2)) ((bruijn ##.k.643 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k131, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.49.217 7 1) (bruijn ##.k.637 2 0) (bruijn ##.expr.51.219 5 1) (bruijn ##.x.639 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.331 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k134) (bruijn ##.vals.48.220 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k134, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.50.221 0 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k133) (##inline ##vcore.cdr (bruijn ##.expr.51.219 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.51.219 3 1)) (bruijn ##.vals.48.220 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k133, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.636 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0lambda29, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.634 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0lambda28) (bruijn ##.loop.218 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0lambda28, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k130) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k132))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k130, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218_V0k132, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162 ##.loop.218) (bruijn ##.loop.218 0 0) (bruijn ##.k.633 1 0) (##inline ##vcore.cdr (bruijn ##.expr.165 17 3)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 17-1, 3));
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D218(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.632 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda27))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda27, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 0 0) (bruijn ##.k.646 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) (bruijn ##.scan-bindings.121 20 0) (bruijn ##.k.650 0 0) (bruijn ##.current-qualname.163 17 1) (bruijn ##.qualified-funcs.164 17 2) (bruijn ##.xs.213 5 0) (bruijn ##.vals.224 2 2) (bruijn ##.body.215 3 0) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg4 = 
      statics->up->vars[2];
    VWORD _arg5 = 
      statics->up->up->vars[0];
    VWORD _arg6 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure->env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.651 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (bruijn ##.xs.213 7 0) (##inline ##vcore.cons (bruijn ##.x.656 1 0) '()))) (bruijn ##.x.653 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL))),
        _var0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 19 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k137) (bruijn ##.current-qualname.163 18 1) (bruijn ##.qualified-funcs.164 18 2) (bruijn ##.new-vals.225 1 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k137, self))));
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    VWORD _arg3 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 18 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k136) (bruijn ##.current-qualname.163 17 1) (bruijn ##.new-qualified-funcs.226 0 2) (bruijn ##.body.215 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k136, self))));
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.649 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda32) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda33))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda32, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda33, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.223 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k135) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda31) (bruijn ##.kk.19.166 14 1)) ((bruijn ##.k.646 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k135, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda31, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.46.214 1 0))) (##vcore.call-with-values (bruijn ##.k.626 6 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda26) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda30)) ((bruijn ##.k.626 6 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda26, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda30, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.214 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k129) (##inline ##vcore.car (bruijn ##.expr.46.214 0 0))) ((bruijn ##.k.626 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k129, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k128) (##inline ##vcore.cdr (bruijn ##.expr.45.212 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k128, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.212 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k127) (##inline ##vcore.car (bruijn ##.expr.45.212 0 0))) ((bruijn ##.k.626 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k127, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.628 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k126) (##inline ##vcore.cdr (bruijn ##.expr.44.211 1 0))) ((bruijn ##.k.626 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k126, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.211 0 0)) ((bruijn ##.x.322 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k125) 'continuation (##inline ##vcore.car (bruijn ##.expr.44.211 0 0))) ((bruijn ##.k.626 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k125, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 8 3)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k124) (##inline ##vcore.car (bruijn ##.expr.165 8 3))) ((bruijn ##.k.626 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 3)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k124, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.59.236 4 1) (bruijn ##.k.608 1 0) (bruijn ##.expr.61.238 2 1) (bruijn ##.x.609 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.61.238 1 1))) ((bruijn ##.x.331 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k149) (bruijn ##.vals.58.239 1 2)) ((bruijn ##.k.608 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k149, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.59.236 7 1) (bruijn ##.k.602 2 0) (bruijn ##.expr.61.238 5 1) (bruijn ##.x.604 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.331 30 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k152) (bruijn ##.vals.58.239 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k152, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.60.240 0 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k151) (##inline ##vcore.cdr (bruijn ##.expr.61.238 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.61.238 3 1)) (bruijn ##.vals.58.239 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k151, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.601 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0lambda37))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0lambda37, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.599 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0lambda36) (bruijn ##.loop.237 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0lambda36, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k148) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k150))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k148, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237_V0k150, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162 ##.loop.237) (bruijn ##.loop.237 0 0) (bruijn ##.k.598 1 0) (##inline ##vcore.cdr (bruijn ##.expr.165 20 3)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 20-1, 3));
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D237(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.597 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda35))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda35, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.613 0 0) (bruijn ##.k.611 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) (bruijn ##.scan-bindings.121 23 0) (bruijn ##.k.615 0 0) (bruijn ##.current-qualname.163 20 1) (bruijn ##.qualified-funcs.164 20 2) (bruijn ##.xs.232 5 0) (bruijn ##.vals.243 2 2) (bruijn ##.body.234 3 0) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 20-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg4 = 
      statics->up->vars[2];
    VWORD _arg5 = 
      statics->up->up->vars[0];
    VWORD _arg6 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure->env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.616 2 0) (##inline ##vcore.cons (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (bruijn ##.name.230 9 0) (##inline ##vcore.cons (bruijn ##.xs.232 7 0) (##inline ##vcore.cons (bruijn ##.x.622 1 0) '())))) (bruijn ##.x.618 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        VGetArg(statics, 9-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL)))),
        _var0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k155) (bruijn ##.current-qualname.163 21 1) (bruijn ##.qualified-funcs.164 21 2) (bruijn ##.new-vals.244 1 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k155, self))));
    VWORD _arg1 = 
      VGetArg(statics, 21-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 21-1, 2);
    VWORD _arg3 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 21 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k154) (bruijn ##.name.230 7 0) (bruijn ##.new-qualified-funcs.245 0 2) (bruijn ##.body.234 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k154, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.614 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda40) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda41))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda41, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda38, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.242 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k153) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda39) (bruijn ##.kk.19.166 17 1)) ((bruijn ##.k.611 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k153, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda39, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.56.233 1 0))) (##vcore.call-with-values (bruijn ##.k.590 8 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda34) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda38)) ((bruijn ##.k.590 8 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 8-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda34, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda38, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.233 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k147) (##inline ##vcore.car (bruijn ##.expr.56.233 0 0))) ((bruijn ##.k.590 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k147, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k146) (##inline ##vcore.cdr (bruijn ##.expr.55.231 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k146, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.231 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k145) (##inline ##vcore.car (bruijn ##.expr.55.231 0 0))) ((bruijn ##.k.590 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k145, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k144) (##inline ##vcore.cdr (bruijn ##.expr.54.229 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k144, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.229 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k143) (##inline ##vcore.car (bruijn ##.expr.54.229 0 0))) ((bruijn ##.k.590 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k143, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.592 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k142) (##inline ##vcore.cdr (bruijn ##.expr.53.228 1 0))) ((bruijn ##.k.590 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k142, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.228 0 0)) ((bruijn ##.x.322 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k141) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.53.228 0 0))) ((bruijn ##.k.590 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k141, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 9 3)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k140) (##inline ##vcore.car (bruijn ##.expr.165 9 3))) ((bruijn ##.k.590 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 3)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k140, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.67.249 5 1) (bruijn ##.k.569 2 0) (bruijn ##.expr.69.251 3 1) (bruijn ##.x.570 1 0) (bruijn ##.x.571 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.331 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k162) (bruijn ##.vals.66.253 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k162, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.69.251 1 1))) ((bruijn ##.x.331 22 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k161) (bruijn ##.xs.65.252 1 2)) ((bruijn ##.k.569 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k161, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.257 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.71.257 0 0))) ((bruijn ##.kk.68.254 3 1) (bruijn ##.k.561 1 0) (##inline ##vcore.cdr (bruijn ##.expr.69.251 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.70.255 2 0)) (bruijn ##.xs.65.252 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.71.257 0 0)) (bruijn ##.vals.66.253 6 3))) ((bruijn ##.k.561 1 0) #f)) ((bruijn ##.k.561 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.255 1 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k166) (##inline ##vcore.cdr (bruijn ##.expr.70.255 1 0))) ((bruijn ##.k.561 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k166, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.67.249 9 1) (bruijn ##.k.556 4 0) (bruijn ##.expr.69.251 7 1) (bruijn ##.x.558 1 0) (bruijn ##.x.559 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.331 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k169) (bruijn ##.vals.66.253 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k169, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.331 26 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k168) (bruijn ##.xs.65.252 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k168, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k165) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k167))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k165, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k167, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k164) (##inline ##vcore.car (bruijn ##.expr.69.251 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k164, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.555 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0lambda45))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0lambda45, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.553 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0lambda44) (bruijn ##.loop.250 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0lambda44, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k160) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k163))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k160, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250_V0k163, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162 ##.loop.250) (bruijn ##.loop.250 0 0) (bruijn ##.k.552 1 0) (##inline ##vcore.car (bruijn ##.expr.63.247 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D250(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.551 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda43))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda43, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.577 0 0) (bruijn ##.k.573 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize scan-bindings) (bruijn ##.scan-bindings.121 20 0) (bruijn ##.k.579 0 0) (bruijn ##.current-qualname.163 17 1) (bruijn ##.qualified-funcs.164 17 2) (bruijn ##.xs.260 4 2) (bruijn ##.vals.261 4 3) (bruijn ##.body.263 2 0) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 2);
    VWORD _arg3 = 
      statics->up->up->up->vars[2];
    VWORD _arg4 = 
      statics->up->up->up->vars[3];
    VWORD _arg5 = 
      statics->up->vars[0];
    VWORD _arg6 = 
      VEncodeBool(true);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0scan__bindings(runtime, _closure->env, 7, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.580 2 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.582 1 0) (##inline ##vcore.cons (bruijn ##.x.584 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 19 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k174) (bruijn ##.current-qualname.163 18 1) (bruijn ##.new-qualified-funcs.265 1 2) (bruijn ##.body.263 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k174, self))));
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.320 35 0) (bruijn ##.k.585 1 0) (bruijn ##.x.266 1 1) (bruijn ##.x.586 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda50, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 19 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k175) (bruijn ##.current-qualname.163 18 1) (bruijn ##.new-qualified-funcs.265 1 2) (bruijn ##.val.267 0 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k175, self))));
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda49, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.330 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k173) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda50) (bruijn ##.xs.260 4 2) (bruijn ##.new-vals.264 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k173, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda50, self)))),
      statics->up->up->up->vars[2],
      _var1);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.578 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda48) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda49))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda48, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda49, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.72.262 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k172) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda47) (bruijn ##.kk.19.166 14 1)) ((bruijn ##.k.573 2 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k172, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda47, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.262 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k171) (##inline ##vcore.car (bruijn ##.expr.72.262 0 0))) ((bruijn ##.k.573 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k171, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda46, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.259 0 1)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k170) (##inline ##vcore.cdr (bruijn ##.expr.63.247 1 0))) ((bruijn ##.k.573 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k170, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.247 0 0)) (##vcore.call-with-values (bruijn ##.k.548 2 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda42) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda46)) ((bruijn ##.k.548 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda42, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda46, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.549 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k159) (##inline ##vcore.cdr (bruijn ##.expr.165 11 3))) ((bruijn ##.k.548 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k159, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 10 3)) ((bruijn ##.x.322 24 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k158) 'letrec (##inline ##vcore.car (bruijn ##.expr.165 10 3))) ((bruijn ##.k.548 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 3)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k158, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.328 25 0) (bruijn ##.k.517 0 0) (bruijn ##.expr.75.271 3 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.80.275 4 1) (bruijn ##.k.530 1 0) (bruijn ##.expr.82.277 2 1) (bruijn ##.x.531 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.82.277 1 1))) ((bruijn ##.x.331 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k184) (bruijn ##.xs-vals.79.278 1 2)) ((bruijn ##.k.530 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k184, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.80.275 7 1) (bruijn ##.k.524 2 0) (bruijn ##.expr.82.277 5 1) (bruijn ##.x.526 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.331 30 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k187) (bruijn ##.xs-vals.79.278 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k187, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.81.279 0 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k186) (##inline ##vcore.cdr (bruijn ##.expr.82.277 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.82.277 3 1)) (bruijn ##.xs-vals.79.278 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k186, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.523 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0lambda56))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0lambda56, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.521 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0lambda55) (bruijn ##.loop.276 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0lambda55, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k183) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k185))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k183, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276_V0k185, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162 ##.loop.276) (bruijn ##.loop.276 0 0) (bruijn ##.k.520 1 0) (bruijn ##.head.76.272 3 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D276(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.519 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda54))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda54, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.537 0 0) (bruijn ##.k.533 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.538 3 0) (##inline ##vcore.cons 'basic-block (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.74.269 9 0)) (bruijn ##.x.540 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0basic__block,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 9-1, 0)),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.321 36 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k191) (bruijn ##.xs-vals.282 3 2) (bruijn ##.x.541 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k191, self)))),
      statics->up->up->vars[2],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.320 36 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k190) (bruijn ##.x.542 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k190, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 20 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k189) (bruijn ##.current-qualname.163 19 1) (bruijn ##.qualified-funcs.164 19 2) (##inline ##vcore.car (bruijn ##.tail.77.273 2 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k189, self))));
    VWORD _arg1 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 2);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda57, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.281 0 1)) (if (##inline ##vcore.pair? (bruijn ##.tail.77.273 1 2)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.tail.77.273 1 2))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k188) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda58) (bruijn ##.kk.19.166 17 1)) ((bruijn ##.k.533 0 0) #f)) ((bruijn ##.k.533 0 0) #f)) ((bruijn ##.k.533 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[2]))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[2])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k188, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda58, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda52, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.518 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda53) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda57))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda53, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda57, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.544 0 0) -1) ((bruijn ##.k.513 5 0) #f) (##vcore.call-with-values (bruijn ##.k.513 5 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda51) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda52)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(-1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda51, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda52, self)))));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k182) (bruijn ##.x.545 0 0) 1)
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k182, self)))),
      _var0,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.327 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k181) (bruijn ##.expr.75.271 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k181, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.269 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k180) (##inline ##vcore.cdr (bruijn ##.expr.74.269 0 0))) ((bruijn ##.k.513 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k180, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.514 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k179) (##inline ##vcore.cdr (bruijn ##.expr.165 12 3))) ((bruijn ##.k.513 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k179, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 11 3)) ((bruijn ##.x.322 25 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k178) 'basic-block (##inline ##vcore.car (bruijn ##.expr.165 11 3))) ((bruijn ##.k.513 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 3)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k178, self)))),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.509 0 0) (bruijn ##.k.507 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.510 0 0) (bruijn ##.expr.165 14 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 14-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.508 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k195) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda59) (bruijn ##.kk.19.166 12 1)) ((bruijn ##.k.507 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k195, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda59, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 12 3)) ((bruijn ##.x.322 26 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k194) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.165 12 3))) ((bruijn ##.k.507 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 3)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k194, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.503 0 0) (bruijn ##.k.501 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.504 0 0) (bruijn ##.expr.165 15 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 15-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.502 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k199) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda60) (bruijn ##.kk.19.166 13 1)) ((bruijn ##.k.501 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k199, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda60, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 13 3)) ((bruijn ##.x.322 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k198) 'quote (##inline ##vcore.car (bruijn ##.expr.165 13 3))) ((bruijn ##.k.501 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 3)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k198, self)))),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.494 0 0) (bruijn ##.k.491 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.495 1 0) (##inline ##vcore.cons '##inline (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.87.288 2 0)) (bruijn ##.x.497 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 19 0) (bruijn ##.k.498 0 0) (bruijn ##.current-qualname.163 18 1) (bruijn ##.qualified-funcs.164 18 2) (bruijn ##.x.94.291 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    VWORD _arg3 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.330 23 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k205) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda62) (##inline ##vcore.cdr (bruijn ##.expr.87.288 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k205, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda62, self)))),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.288 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k204) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda61) (bruijn ##.kk.19.166 15 1)) ((bruijn ##.k.491 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k204, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda61, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.492 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k203) (##inline ##vcore.cdr (bruijn ##.expr.165 15 3))) ((bruijn ##.k.491 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k203, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 15-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 14 3)) ((bruijn ##.x.322 28 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k202) '##inline (##inline ##vcore.car (bruijn ##.expr.165 14 3))) ((bruijn ##.k.491 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 3)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k202, self)))),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.91.295 4 1) (bruijn ##.k.473 1 0) (bruijn ##.expr.93.297 2 1) (bruijn ##.x.474 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.93.297 1 1))) ((bruijn ##.x.331 26 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k210) (bruijn ##.xs.90.298 1 2)) ((bruijn ##.k.473 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k210, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.91.295 7 1) (bruijn ##.k.467 2 0) (bruijn ##.expr.93.297 5 1) (bruijn ##.x.469 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.331 29 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k213) (bruijn ##.xs.90.298 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k213, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.92.299 0 1) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k212) (##inline ##vcore.cdr (bruijn ##.expr.93.297 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.93.297 3 1)) (bruijn ##.xs.90.298 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k212, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.466 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0lambda66))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0lambda66, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.464 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0lambda65) (bruijn ##.loop.296 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0lambda65, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k209) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k211))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k209, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296_V0k211, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296")) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162 ##.loop.296) (bruijn ##.loop.296 0 0) (bruijn ##.k.463 1 0) (##inline ##vcore.cdr (bruijn ##.expr.165 19 3)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 3));
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V10_Dloop_D296(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.462 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda64))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda64, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.478 0 0) (bruijn ##.k.476 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.791 1 0) ((bruijn ##.x.329 27 0) (bruijn ##.k.489 0 0) (bruijn ##.f.293 4 0) (bruijn ##.qualified-funcs.164 20 2)) ((bruijn ##.k.489 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 20-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.479 3 0) (##inline ##vcore.cons '##qualified-call (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.95.303 1 0)) (##inline ##vcore.cons (bruijn ##.f.293 5 0) (bruijn ##.x.483 0 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__call,
        VInlineCons2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0]),
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        _var0))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 22 0) (bruijn ##.k.484 0 0) (bruijn ##.current-qualname.163 21 1) (bruijn ##.qualified-funcs.164 21 2) (bruijn ##.x.96.305 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 21-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 21-1, 2);
    VWORD _arg3 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.479 4 0) (##inline ##vcore.cons (bruijn ##.x.485 1 0) (bruijn ##.x.486 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 23 0) (bruijn ##.k.487 0 0) (bruijn ##.current-qualname.163 22 1) (bruijn ##.qualified-funcs.164 22 2) (bruijn ##.x.97.306 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    VWORD _arg3 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.330 27 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k219) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda70) (bruijn ##.xs.302 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k219, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda70, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.95.303 0 0) ((bruijn ##.x.330 26 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k217) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda69) (bruijn ##.xs.302 3 2)) (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 21 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k218) (bruijn ##.current-qualname.163 20 1) (bruijn ##.qualified-funcs.164 20 2) (bruijn ##.f.293 4 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k217, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda69, self)))),
      statics->up->up->vars[2]);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k218, self))));
    VWORD _arg1 = 
      VGetArg(statics, 20-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 2);
    VWORD _arg3 = 
      statics->up->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.791) ((##vcore.symbol? (bruijn ##.f.293 3 0))) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k215) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k216)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k215, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k216, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda67, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.301 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k214) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda68) (bruijn ##.kk.19.166 16 1)) ((bruijn ##.k.476 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k214, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda68, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.461 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda63) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda67))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda63, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda67, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165 15 3)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k208) (##inline ##vcore.car (bruijn ##.expr.165 15 3))) ((bruijn ##.k.461 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 15-1, 3)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k208, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 15-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.332 22 0) (bruijn ##.k.457 0 0) (##string ##.string.793) (bruijn ##.expr.165 18 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D793.sym, VPOINTER_OTHER),
      VGetArg(statics, 18-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.441 16 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda71) (bruijn ##.kk.19.166 16 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 16-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda71, self)))),
      VGetArg(statics, 16-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.458 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k222))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k222, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.459 0 0) (bruijn ##.expr.165 16 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 16-1, 3));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k221) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda72) (bruijn ##.kk.19.166 14 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k221, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda72, self)))),
      VGetArg(statics, 14-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k207) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k220))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k207, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k220, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k201) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k206))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k201, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k206, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k197) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k200))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k197, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k200, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k193) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k196))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k193, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k196, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k177) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k192))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k177, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k192, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k157) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k176))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k157, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k176, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k139) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k156))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k139, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k156, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k123) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k138))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k123, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k138, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k107) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k122))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k107, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k122, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k100) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k106))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k100, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k106, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k91) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k99))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k99, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k84) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k90))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k84, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k90, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k75) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k83))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k83, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k68) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k74))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k68, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0k74, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.440 0 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda10))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162_V0lambda10, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.780 0 0) (bruijn ##.k.778 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.781 0 0) (bruijn ##.expr.161 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.779 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k225) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda74) (bruijn ##.kk.13.308 2 1)) ((bruijn ##.k.778 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k225, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda74, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.161 3 1)) ((bruijn ##.x.322 15 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k224) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.161 3 1))) ((bruijn ##.k.778 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k224, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.770 0 0) (bruijn ##.k.765 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.771 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.17.312 3 0)) (##inline ##vcore.cons (bruijn ##.x.774 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 7 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k232) '() '() (##inline ##vcore.car (bruijn ##.expr.18.314 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k232, self))));
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.314 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.314 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k231) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda75) (bruijn ##.kk.13.308 5 1)) ((bruijn ##.k.765 3 0) #f)) ((bruijn ##.k.765 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k231, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda75, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.312 0 0)) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k230) (##inline ##vcore.cdr (bruijn ##.expr.17.312 0 0))) ((bruijn ##.k.765 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k230, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.766 0 0) ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k229) (##inline ##vcore.cdr (bruijn ##.expr.161 5 1))) ((bruijn ##.k.765 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k229, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.161 4 1)) ((bruijn ##.x.322 16 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k228) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.161 4 1))) ((bruijn ##.k.765 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k228, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler optimize qualify-callsites ##.qualify-iter.162) (bruijn ##.qualify-iter.162 4 0) (bruijn ##.k.763 0 0) '() '() (bruijn ##.expr.161 5 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.760 2 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda76) (bruijn ##.kk.13.308 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda76, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k227) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k233))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k227, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k233, self)))));
}
void _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k223) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k226))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k223, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0k226, self)))));
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162")) (##vcore.call/cc (bruijn ##.k.439 1 0) (close _V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V10_Dqualify__iter_D162, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites_V0lambda73, self)))));
    }
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings") (close "_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites")) ((bruijn ##.k.317 24 0) (##inline ##vcore.cons (##inline ##vcore.cons 'qualify-callsites (bruijn ##.qualify-callsites.122 0 1)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0scan__bindings, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0optimize_V0qualify__callsites, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0qualify__callsites,
        self->vars[1]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 14 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k23) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k23, self)))),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 13 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k22) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k22, self)))),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 12 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k21) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k21, self)))),
      _V0map);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 11 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k20) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k20, self)))),
      _V0assv);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 10 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k19) 'split-at-right)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k19, self)))),
      _V0split__at__right);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 9 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k18) 'num-pairs)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k18, self)))),
      _V0num__pairs);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 8 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k17) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k17, self)))),
      _V0error);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 7 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k16) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k16, self)))),
      _V0values);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 6 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k15) 'fold)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k15, self)))),
      _V0fold);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 5 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k14) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k14, self)))),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 4 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k13) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k13, self)))),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 3 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k12) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k12, self)))),
      _V0append);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 2 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k11) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k11, self)))),
      _V0list);
}
static void _V0vanity_V0compiler_V0optimize_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0optimize_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.98 1 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k10) 'any?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k10, self)))),
      _V0any_Q);
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
  // ((bruijn ##..vcore.import.98 0 0) (close _V0vanity_V0compiler_V0optimize_V20_V0k9) 'variable-pure?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k9, self)))),
      _V0variable__pure_Q);
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0optimize_V20_V0k8) (##string ##.string.794) (bruijn ##.x.784 6 0) (bruijn ##.x.785 5 0) (bruijn ##.x.786 4 0) (bruijn ##.x.787 3 0) (bruijn ##.x.788 2 0) (bruijn ##.x.789 1 0) (bruijn ##.x.790 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 9,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D794.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k7) (##string ##.string.795))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D795.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k6) (##string ##.string.796))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D796.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k5) (##string ##.string.797))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D797.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k4) (##string ##.string.798))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D798.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k3) (##string ##.string.799))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D799.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k2) (##string ##.string.800))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D800.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0optimize_V20_V0k1) (##string ##.string.801))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0optimize_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D801.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0optimize_V20 = (VFunc)_V0vanity_V0compiler_V0optimize_V20_V0lambda1;
