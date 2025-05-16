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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D610 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D609 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D608 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D607 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D606 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D605 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D604 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0alpha__convert;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0alpha__convert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "alpha-convert" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D603 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
VWEAK VWORD _V40_V10vcore_Dcons;VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D602 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static __attribute__((constructor)) void VDllMain1() {
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VLookupConstant("_V0lookup__intrinsic", &_VW_V0lookup__intrinsic), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0alpha__convert = VEncodePointer(VLookupConstant("_V0alpha__convert", &_VW_V0alpha__convert), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VLookupConstant("_V0define__constant", &_VW_V0define__constant), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VLookupConstant("_V10vcore_Ddeclare", &_VW_V10vcore_Ddeclare), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0or = VEncodePointer(VLookupConstant("_V0or", &_VW_V0or), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VLookupConstant("_V0begin", &_VW_V0begin), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
}
static void _V10_Dmemtail_D91_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D91_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.277 0 0) ((bruijn ##.k.275 1 0) (bruijn ##.lst.94 1 2)) ((bruijn ##.memtail.91 2 0) (bruijn ##.k.275 1 0) (bruijn ##.x.93 1 1) (##inline ##vcore.cdr (bruijn ##.lst.94 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dmemtail_D91_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D91_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.280 0 0) ((bruijn ##.k.275 1 0) (bruijn ##.lst.94 1 2)) ((bruijn ##.k.275 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmemtail_D91_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D91_lambda2, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.94 0 2)) ((bruijn ##.x.263 13 0) (close _V10_Dmemtail_D91_k20) (bruijn ##.x.93 0 1) (##inline ##vcore.car (bruijn ##.lst.94 0 2))) ((bruijn ##.x.263 13 0) (close _V10_Dmemtail_D91_k21) (bruijn ##.x.93 0 1) (bruijn ##.lst.94 0 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D91_k20, self)})),
      _var1,
      VInlineCar2(runtime,
        _var2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D91_k21, self)})),
      _var1,
      _var2);
}
}
static void _V10_Dapplication_Q_D96_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D96_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.282 1 0) (##inline ##vcore.not (bruijn ##.x.284 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Dapplication_Q_D96_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D96_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.x.105 0 1)) ((bruijn ##.x.264 14 0) (close _V10_Dapplication_Q_D96_k22) (##inline ##vcore.car (bruijn ##.x.105 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function '()))))) ((bruijn ##.k.282 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D96_k22, self)})),
      VInlineCar2(runtime,
        _var1),
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VNULL)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcombination_Q_D97_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D97_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.290 1 0) (##inline ##vcore.not (bruijn ##.x.292 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Dcombination_Q_D97_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D97_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.x.106 0 1)) ((bruijn ##.x.264 14 0) (close _V10_Dcombination_Q_D97_k23) (##inline ##vcore.car (bruijn ##.x.106 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'or (##inline ##vcore.qcons 'letrec '()))))))))) ((bruijn ##.k.290 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D97_k23, self)})),
      VInlineCar2(runtime,
        _var1),
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        _V0letrec,
        VNULL)))))))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlookup__env_D98_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__env_D98_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.12.109 0 0) ((bruijn ##.k.302 1 0) (bruijn ##.x.12.109 0 0)) ((bruijn ##.lookup-env.98 2 2) (bruijn ##.k.302 1 0) (bruijn ##.sym.107 1 1) (##inline ##vcore.cdr (bruijn ##.env.108 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dlookup__env_D98_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__env_D98_lambda6, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.env.108 0 2)) ((bruijn ##.k.302 0 0) #f) ((bruijn ##.x.265 13 0) (close _V10_Dlookup__env_D98_k24) (bruijn ##.sym.107 0 1) (##inline ##vcore.car (bruijn ##.env.108 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__env_D98_k24, self)})),
      _var1,
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Diter__defines_D99_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.266 14 0) (bruijn ##.k.307 1 0) (##string ##.string.602))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D602.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D117_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.18.116 5 1) (bruijn ##.k.328 2 0) (bruijn ##.expr.20.118 3 1) (bruijn ##.x.329 1 0) (bruijn ##.x.330 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D117_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.274 11 0) (close _V10_Dloop_D117_k28) (bruijn ##.vals.17.120 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k28, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D117_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.20.118 1 1))) ((bruijn ##.x.274 10 0) (close _V10_Dloop_D117_k27) (bruijn ##.xs.16.119 1 2)) ((bruijn ##.k.328 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k27, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D117_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.125 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.125 0 0))) ((bruijn ##.kk.19.121 4 1) (bruijn ##.k.319 2 0) (##inline ##vcore.cdr (bruijn ##.expr.20.118 7 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.22.123 1 0)) (bruijn ##.xs.16.119 7 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.23.125 0 0)) (bruijn ##.vals.17.120 7 3))) ((bruijn ##.k.319 2 0) #f)) ((bruijn ##.k.319 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[0]),
        VGetArg(statics, 7-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 7-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D117_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.123 0 0)) ((close _V10_Dloop_D117_k33) (##inline ##vcore.cdr (bruijn ##.expr.22.123 0 0))) ((bruijn ##.k.319 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D117_k33, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D117_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.122 1 0)) ((close _V10_Dloop_D117_k32) (##inline ##vcore.cdr (bruijn ##.expr.21.122 1 0))) ((bruijn ##.k.319 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D117_k32, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D117_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.18.116 9 1) (bruijn ##.k.314 4 0) (bruijn ##.expr.20.118 7 1) (bruijn ##.x.316 1 0) (bruijn ##.x.317 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D117_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.274 15 0) (close _V10_Dloop_D117_k36) (bruijn ##.vals.17.120 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k36, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D117_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.274 14 0) (close _V10_Dloop_D117_k35) (bruijn ##.xs.16.119 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k35, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D117_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D117_k31) (close _V10_Dloop_D117_k34))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D117_k31, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k34, self)})));
}
static void _V10_Dloop_D117_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D117_k30) (##inline ##vcore.car (bruijn ##.expr.20.118 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D117_k30, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D117_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.313 0 0) (close _V10_Dloop_D117_lambda13))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_lambda13, self)})));
}
static void _V10_Dloop_D117_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.311 1 0) (close _V10_Dloop_D117_lambda12) (bruijn ##.loop.117 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_lambda12, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D117_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_lambda11, got ~D~N"
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
  // ((close _V10_Dloop_D117_k26) (close _V10_Dloop_D117_k29))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D117_k26, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k29, self)})));
}
static void _V10_Diter__defines_D99_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D117_lambda11)) ((bruijn ##.loop.117 0 0) (bruijn ##.k.310 1 0) (bruijn ##.defines.111 4 1) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_lambda11, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      statics->up->up->up->vars[1],
      VNULL,
      VNULL);
    }
}
static void _V10_Diter__defines_D99_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.309 0 0) (close _V10_Diter__defines_D99_lambda10))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda10, self)})));
}
static void _V10_Diter__defines_D99_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.334 0 0) (bruijn ##.k.332 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter__defines_D99_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.269 17 0) (bruijn ##.k.335 5 0) (bruijn ##.x.336 0 0) (bruijn ##.env.131 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      _var0,
      statics->up->vars[0]);
}
static void _V10_Diter__defines_D99_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.k.337 0 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.x.133 0 1) (##inline ##vcore.cons (bruijn ##.val.134 0 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        _var2,
        VNULL))));
}
static void _V10_Diter__defines_D99_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.273 12 0) (close _V10_Diter__defines_D99_k42) (close _V10_Diter__defines_D99_lambda16) (bruijn ##.new-xs.130 3 0) (bruijn ##.vals.132 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k42, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda16, self)})),
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Diter__defines_D99_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.103 8 7) (bruijn ##.k.340 0 0) (bruijn ##.val.135 0 1) (bruijn ##.env.131 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 7)), 3,
      _var0,
      _var1,
      statics->vars[0]);
}
static void _V10_Diter__defines_D99_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.273 11 0) (close _V10_Diter__defines_D99_k41) (close _V10_Diter__defines_D99_lambda17) (bruijn ##.vals.129 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k41, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda17, self)})),
      statics->up->up->up->vars[3]);
}
static void _V10_Diter__defines_D99_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__defines_D99_k40) (##inline ##vcore.cons (bruijn ##.x.341 0 0) (bruijn ##.env.112 5 2)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__defines_D99_k40, .env = self }, }, 1,
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 5-1, 2)));
}
static void _V10_Diter__defines_D99_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.273 9 0) (close _V10_Diter__defines_D99_k39) (##intrinsic ##vcore.cons) (bruijn ##.xs.128 2 2) (bruijn ##.new-xs.130 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k39, self)})),
      _V40_V10vcore_Dcons,
      statics->up->vars[2],
      _var0);
}
static void _V10_Diter__defines_D99_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.273 8 0) (close _V10_Diter__defines_D99_k38) (bruijn ##.x.272 9 0) (bruijn ##.xs.128 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k38, self)})),
      VGetArg(statics, 9-1, 0),
      statics->vars[2]);
}
static void _V10_Diter__defines_D99_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda14, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.127 0 1)) (##vcore.call-with-values (close _V10_Diter__defines_D99_k37) (close _V10_Diter__defines_D99_lambda15) (bruijn ##.kk.13.113 1 1)) ((bruijn ##.k.332 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k37, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda15, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__defines_D99_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (close _V10_Diter__defines_D99_k25) (close _V10_Diter__defines_D99_lambda9) (close _V10_Diter__defines_D99_lambda14))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k25, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda9, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda14, self)})));
}
static void _V10_Diter__defines_D99_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.306 0 0) (close _V10_Diter__defines_D99_lambda8))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda8, self)})));
}
static void _V10_Diter__symbol_D138_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__symbol_D138_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.344 0 0) ((bruijn ##.k.343 2 0) (bruijn ##.sym.140 2 1)) ((bruijn ##.k.343 2 0) (bruijn ##.sym.140 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
static void _V10_Diter__symbol_D138_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__symbol_D138_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.41.142 0 0) ((bruijn ##.k.343 1 0) (##inline ##vcore.cdr (bruijn ##.x.41.142 0 0))) ((bruijn ##.x.267 14 0) (close _V10_Diter__symbol_D138_k44) (bruijn ##.sym.140 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__symbol_D138_k44, self)})),
      statics->vars[1]);
}
}
static void _V10_Diter__symbol_D138_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__symbol_D138_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.lookup-env.98 3 2) (close _V10_Diter__symbol_D138_k43) (bruijn ##.sym.140 0 1) (bruijn ##.env.141 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__symbol_D138_k43, self)})),
      _var1,
      _var2);
}
static void _V10_Dgenargs_D148_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenargs_D148_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.346 2 0) (##inline ##vcore.cons (bruijn ##.x.349 1 0) (bruijn ##.x.350 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dgenargs_D148_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenargs_D148_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.genargs.148 2 0) (close _V10_Dgenargs_D148_k46) (##inline ##vcore.cdr (bruijn ##.args.150 1 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenargs_D148_k46, self)})),
      VInlineCdr2(runtime,
        statics->vars[1]));
}
static void _V10_Dgenargs_D148_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenargs_D148_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.150 0 1)) ((bruijn ##.k.346 0 0) '()) (if (##inline ##vcore.pair? (bruijn ##.args.150 0 1)) ((bruijn ##.x.272 10 0) (close _V10_Dgenargs_D148_k45) (##inline ##vcore.car (bruijn ##.args.150 0 1))) ((bruijn ##.x.272 10 0) (bruijn ##.k.346 0 0) (bruijn ##.args.150 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenargs_D148_k45, self)})),
      VInlineCar2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      _var0,
      _var1);
}
}
}
static void _V10_Ddedot_D149_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddedot_D149_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.353 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.args.151 1 1)) (bruijn ##.x.357 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
static void _V10_Ddedot_D149_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddedot_D149_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.151 0 1)) ((bruijn ##.k.353 0 0) '()) (if (##inline ##vcore.pair? (bruijn ##.args.151 0 1)) ((bruijn ##.dedot.149 1 1) (close _V10_Ddedot_D149_k47) (##inline ##vcore.cdr (bruijn ##.args.151 0 1))) ((bruijn ##.k.353 0 0) (##inline ##vcore.cons (bruijn ##.args.151 0 1) '()))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddedot_D149_k47, self)})),
      VInlineCdr2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var1,
        VNULL));
}
}
}
static void _V10_Diter__lambda_D139_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.345 10 0) (##inline ##vcore.cons (bruijn ##.newargs.152 8 0) (bruijn ##.x.360 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        _var0));
}
static void _V10_Diter__lambda_D139_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.270 19 0) (close _V10_Diter__lambda_D139_k55) (bruijn ##.new-defines.154 3 0) (##inline ##vcore.cons (bruijn ##.x.362 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k55, self)})),
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
static void _V10_Diter__lambda_D139_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.103 11 7) (close _V10_Diter__lambda_D139_k54) (bruijn ##.body.146 8 3) (bruijn ##.new-env.155 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 7)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k54, self)})),
      VGetArg(statics, 8-1, 3),
      statics->up->vars[1]);
}
static void _V10_Diter__lambda_D139_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Diter__lambda_D139_k53) (bruijn ##.dummy.44.156 1 2) (bruijn ##.x.363 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k53, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Diter__lambda_D139_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.269 18 0) (bruijn ##.k.364 0 0) (bruijn ##.defines.145 7 2) (##inline ##vcore.cons (bruijn ##.x.367 2 0) (bruijn ##.env.147 7 4)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      _var0,
      VGetArg(statics, 7-1, 2),
      VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 7-1, 4)));
}
static void _V10_Diter__lambda_D139_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.365 1 0) (bruijn ##.new-env.155 2 1) (bruijn ##.new-env.43.158 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Diter__lambda_D139_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Diter__lambda_D139_k56) (bruijn ##.new-defines.154 1 0) (bruijn ##.new-defines.42.157 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k56, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Diter__lambda_D139_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Diter__lambda_D139_k52) (close _V10_Diter__lambda_D139_lambda23) (close _V10_Diter__lambda_D139_lambda24)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k52, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_lambda23, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_lambda24, self)})));
    }
}
static void _V10_Diter__lambda_D139_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.273 11 0) (close _V10_Diter__lambda_D139_k51) (##intrinsic ##vcore.cons) (bruijn ##.x.368 1 0) (bruijn ##.x.369 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k51, self)})),
      _V40_V10vcore_Dcons,
      statics->vars[0],
      _var0);
}
static void _V10_Diter__lambda_D139_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.dedot.149 2 1) (close _V10_Diter__lambda_D139_k50) (bruijn ##.newargs.152 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k50, self)})),
      statics->vars[0]);
}
static void _V10_Diter__lambda_D139_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.dedot.149 1 1) (close _V10_Diter__lambda_D139_k49) (bruijn ##.args.144 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k49, self)})),
      statics->up->vars[1]);
}
static void _V10_Diter__lambda_D139_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_lambda20, got ~D~N"
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
  // (letrec 2 ((close _V10_Dgenargs_D148_lambda21) (close _V10_Ddedot_D149_lambda22)) ((bruijn ##.genargs.148 0 0) (close _V10_Diter__lambda_D139_k48) (bruijn ##.args.144 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenargs_D148_lambda21, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddedot_D149_lambda22, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k48, self)})),
      statics->vars[1]);
    }
}
static void _V10_Diter__atom_D100_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.435 0 0) (bruijn ##.k.430 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Diter__atom_D100_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.436 1 0) (##inline ##vcore.cons 'lambda (bruijn ##.x.437 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        _var0));
}
static void _V10_Diter__atom_D100_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter-lambda.139 6 1) (close _V10_Diter__atom_D100_k62) (##inline ##vcore.car (bruijn ##.expr.27.162 2 0)) '() (##inline ##vcore.car (bruijn ##.expr.28.164 1 0)) (bruijn ##.env.137 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k62, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VNULL,
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Diter__atom_D100_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.164 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.164 0 0))) (##vcore.call-with-values (close _V10_Diter__atom_D100_k61) (close _V10_Diter__atom_D100_lambda26) (bruijn ##.kk.24.159 4 1)) ((bruijn ##.k.430 3 0) #f)) ((bruijn ##.k.430 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k61, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda26, self)})),
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
static void _V10_Diter__atom_D100_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.162 0 0)) ((close _V10_Diter__atom_D100_k60) (##inline ##vcore.cdr (bruijn ##.expr.27.162 0 0))) ((bruijn ##.k.430 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k60, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.431 0 0) ((close _V10_Diter__atom_D100_k59) (##inline ##vcore.cdr (bruijn ##.x.136 4 1))) ((bruijn ##.k.430 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k59, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.136 3 1)) ((bruijn ##.x.263 18 0) (close _V10_Diter__atom_D100_k58) 'lambda (##inline ##vcore.car (bruijn ##.x.136 3 1))) ((bruijn ##.k.430 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k58, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D169_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.33.168 5 1) (bruijn ##.k.418 2 0) (bruijn ##.expr.35.170 3 1) (bruijn ##.x.419 1 0) (bruijn ##.x.420 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D169_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.274 15 0) (close _V10_Dloop_D169_k68) (bruijn ##.bodies.32.172 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k68, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D169_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.35.170 1 1))) ((bruijn ##.x.274 14 0) (close _V10_Dloop_D169_k67) (bruijn ##.args.31.171 1 2)) ((bruijn ##.k.418 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k67, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D169_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.176 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.176 0 0))) ((bruijn ##.kk.34.173 3 1) (bruijn ##.k.410 1 0) (##inline ##vcore.cdr (bruijn ##.expr.35.170 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.36.174 2 0)) (bruijn ##.args.31.171 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.37.176 0 0)) (bruijn ##.bodies.32.172 6 3))) ((bruijn ##.k.410 1 0) #f)) ((bruijn ##.k.410 1 0) #f))
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
static void _V10_Dloop_D169_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.174 1 0)) ((close _V10_Dloop_D169_k72) (##inline ##vcore.cdr (bruijn ##.expr.36.174 1 0))) ((bruijn ##.k.410 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D169_k72, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D169_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.33.168 9 1) (bruijn ##.k.405 4 0) (bruijn ##.expr.35.170 7 1) (bruijn ##.x.407 1 0) (bruijn ##.x.408 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D169_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.274 19 0) (close _V10_Dloop_D169_k75) (bruijn ##.bodies.32.172 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k75, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D169_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.274 18 0) (close _V10_Dloop_D169_k74) (bruijn ##.args.31.171 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k74, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D169_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D169_k71) (close _V10_Dloop_D169_k73))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D169_k71, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k73, self)})));
}
static void _V10_Dloop_D169_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D169_k70) (##inline ##vcore.car (bruijn ##.expr.35.170 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D169_k70, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D169_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.404 0 0) (close _V10_Dloop_D169_lambda31))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_lambda31, self)})));
}
static void _V10_Dloop_D169_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.402 1 0) (close _V10_Dloop_D169_lambda30) (bruijn ##.loop.169 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_lambda30, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D169_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_lambda29, got ~D~N"
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
  // ((close _V10_Dloop_D169_k66) (close _V10_Dloop_D169_k69))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D169_k66, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k69, self)})));
}
static void _V10_Diter__atom_D100_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D169_lambda29)) ((bruijn ##.loop.169 0 0) (bruijn ##.k.401 1 0) (##inline ##vcore.cdr (bruijn ##.x.136 8 1)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_lambda29, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter__atom_D100_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.400 0 0) (close _V10_Diter__atom_D100_lambda28))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda28, self)})));
}
static void _V10_Diter__atom_D100_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.424 0 0) (bruijn ##.k.422 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter__atom_D100_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.425 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.426 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
static void _V10_Diter__atom_D100_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.iter-lambda.139 7 1) (bruijn ##.k.427 0 0) (bruijn ##.arg.181 0 1) '() (bruijn ##.body.182 0 2) (bruijn ##.env.137 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 5,
      _var0,
      _var1,
      VNULL,
      _var2,
      VGetArg(statics, 8-1, 2));
}
static void _V10_Diter__atom_D100_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.273 12 0) (close _V10_Diter__atom_D100_k77) (close _V10_Diter__atom_D100_lambda34) (bruijn ##.args.179 1 2) (bruijn ##.bodies.180 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k77, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda34, self)})),
      statics->vars[2],
      statics->vars[3]);
}
static void _V10_Diter__atom_D100_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda32, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.178 0 1)) (##vcore.call-with-values (close _V10_Diter__atom_D100_k76) (close _V10_Diter__atom_D100_lambda33) (bruijn ##.kk.24.159 4 1)) ((bruijn ##.k.422 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k76, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda33, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.399 0 0) (##vcore.call-with-values (bruijn ##.k.398 1 0) (close _V10_Diter__atom_D100_lambda27) (close _V10_Diter__atom_D100_lambda32)) ((bruijn ##.k.398 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda27, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda32, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.136 4 1)) ((bruijn ##.x.263 19 0) (close _V10_Diter__atom_D100_k65) 'case-lambda (##inline ##vcore.car (bruijn ##.x.136 4 1))) ((bruijn ##.k.398 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k65, self)})),
      _V0case__lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.394 0 0) (bruijn ##.k.392 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter__atom_D100_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.395 0 0) (bruijn ##.x.136 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 1));
}
static void _V10_Diter__atom_D100_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.393 0 0) (##vcore.call-with-values (close _V10_Diter__atom_D100_k81) (close _V10_Diter__atom_D100_lambda35) (bruijn ##.kk.24.159 4 1)) ((bruijn ##.k.392 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k81, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda35, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.136 5 1)) ((bruijn ##.x.263 20 0) (close _V10_Diter__atom_D100_k80) '##foreign.function (##inline ##vcore.car (bruijn ##.x.136 5 1))) ((bruijn ##.k.392 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k80, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.387 0 0) (bruijn ##.k.383 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Diter__atom_D100_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.388 0 0) (bruijn ##.x.136 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 1));
}
static void _V10_Diter__atom_D100_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.185 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.40.185 0 0))) (##vcore.call-with-values (close _V10_Diter__atom_D100_k86) (close _V10_Diter__atom_D100_lambda36) (bruijn ##.kk.24.159 6 1)) ((bruijn ##.k.383 2 0) #f)) ((bruijn ##.k.383 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k86, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda36, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.384 0 0) ((close _V10_Diter__atom_D100_k85) (##inline ##vcore.cdr (bruijn ##.x.136 7 1))) ((bruijn ##.k.383 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k85, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.136 6 1)) ((bruijn ##.x.263 21 0) (close _V10_Diter__atom_D100_k84) 'quote (##inline ##vcore.car (bruijn ##.x.136 6 1))) ((bruijn ##.k.383 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k84, self)})),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.380 0 0) (bruijn ##.k.379 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter__atom_D100_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.268 18 0) (bruijn ##.k.381 0 0) (##string ##.string.603))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D603.sym, VPOINTER_OTHER));
}
static void _V10_Diter__atom_D100_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.x.136 7 1)) (##vcore.call-with-values (close _V10_Diter__atom_D100_k89) (close _V10_Diter__atom_D100_lambda37) (bruijn ##.kk.24.159 5 1)) ((bruijn ##.k.379 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k89, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda37, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.601) ((##vcore.symbol? (bruijn ##.x.136 9 1))) (if (bruijn ##.reg.601 0 0) ((bruijn ##.iter-symbol.138 8 0) (bruijn ##.k.376 1 0) (bruijn ##.x.136 9 1) (bruijn ##.env.137 9 2)) ((bruijn ##.k.376 1 0) (bruijn ##.x.136 9 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      statics->vars[0],
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 9-1, 1));
}
    }
}
static void _V10_Diter__atom_D100_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.370 5 0) (close _V10_Diter__atom_D100_lambda38) (bruijn ##.kk.24.159 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda38, self)})),
      VGetArg(statics, 5-1, 1));
}
static void _V10_Diter__atom_D100_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_k88) (close _V10_Diter__atom_D100_k90))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k88, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k90, self)})));
}
static void _V10_Diter__atom_D100_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_k83) (close _V10_Diter__atom_D100_k87))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k83, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k87, self)})));
}
static void _V10_Diter__atom_D100_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_k79) (close _V10_Diter__atom_D100_k82))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k79, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k82, self)})));
}
static void _V10_Diter__atom_D100_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_k64) (close _V10_Diter__atom_D100_k78))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k64, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k78, self)})));
}
static void _V10_Diter__atom_D100_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Diter__atom_D100_k57) (close _V10_Diter__atom_D100_k63))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k57, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k63, self)})));
}
static void _V10_Diter__atom_D100_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda18, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 2 ((close _V10_Diter__symbol_D138_lambda19) (close _V10_Diter__lambda_D139_lambda20)) (##vcore.call/cc (bruijn ##.k.342 1 0) (close _V10_Diter__atom_D100_lambda25)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__symbol_D138_lambda19, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_lambda20, self)}));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda25, self)})));
    }
}
static void _V10_Diter__letrec_D101_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.440 10 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.443 2 0) (bruijn ##.x.444 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->up->vars[0],
        _var0)));
}
static void _V10_Diter__letrec_D101_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.270 17 0) (close _V10_Diter__letrec_D101_k99) (bruijn ##.new-defines.194 4 0) (##inline ##vcore.cons (bruijn ##.x.446 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k99, self)})),
      statics->up->up->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
static void _V10_Diter__letrec_D101_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.103 9 7) (close _V10_Diter__letrec_D101_k98) (bruijn ##.body.188 8 3) (bruijn ##.new-env.195 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 7)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k98, self)})),
      VGetArg(statics, 8-1, 3),
      statics->up->up->vars[1]);
}
static void _V10_Diter__letrec_D101_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.273 12 0) (close _V10_Diter__letrec_D101_k97) (bruijn ##.x.271 14 0) (bruijn ##.new-args.191 6 0) (bruijn ##.vals.193 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k97, self)})),
      VGetArg(statics, 14-1, 0),
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[0]);
}
static void _V10_Diter__letrec_D101_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Diter__letrec_D101_k96) (bruijn ##.dummy.47.196 1 2) (bruijn ##.x.447 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k96, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Diter__letrec_D101_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.269 15 0) (bruijn ##.k.448 0 0) (bruijn ##.defines.187 6 2) (bruijn ##.env.192 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      _var0,
      VGetArg(statics, 6-1, 2),
      statics->up->up->vars[0]);
}
static void _V10_Diter__letrec_D101_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.449 1 0) (bruijn ##.new-env.195 2 1) (bruijn ##.new-env.46.198 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Diter__letrec_D101_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Diter__letrec_D101_k100) (bruijn ##.new-defines.194 1 0) (bruijn ##.new-defines.45.197 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k100, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Diter__letrec_D101_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Diter__letrec_D101_k95) (close _V10_Diter__letrec_D101_lambda40) (close _V10_Diter__letrec_D101_lambda41)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k95, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_lambda40, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_lambda41, self)})));
    }
}
static void _V10_Diter__letrec_D101_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.103 5 7) (bruijn ##.k.451 0 0) (bruijn ##.val.199 0 1) (bruijn ##.env.192 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 7)), 3,
      _var0,
      _var1,
      statics->vars[0]);
}
static void _V10_Diter__letrec_D101_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.273 8 0) (close _V10_Diter__letrec_D101_k94) (close _V10_Diter__letrec_D101_lambda42) (bruijn ##.vals.189 3 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k94, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_lambda42, self)})),
      statics->up->up->vars[4]);
}
static void _V10_Diter__letrec_D101_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__letrec_D101_k93) (##inline ##vcore.cons (bruijn ##.x.452 0 0) (bruijn ##.env.190 2 5)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__letrec_D101_k93, .env = self }, }, 1,
      VInlineCons2(runtime,
        _var0,
        statics->up->vars[5]));
}
static void _V10_Diter__letrec_D101_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.273 6 0) (close _V10_Diter__letrec_D101_k92) (##intrinsic ##vcore.cons) (bruijn ##.args.186 1 1) (bruijn ##.new-args.191 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k92, self)})),
      _V40_V10vcore_Dcons,
      statics->vars[1],
      _var0);
}
static void _V10_Diter__letrec_D101_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_lambda39, got ~D~N"
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
  // ((bruijn ##.x.273 5 0) (close _V10_Diter__letrec_D101_k91) (bruijn ##.x.272 6 0) (bruijn ##.args.186 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k91, self)})),
      VGetArg(statics, 6-1, 0),
      _var1);
}
static void _V10_Diter__combination_D102_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__combination_D102_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.103 2 7) (bruijn ##.k.454 0 0) (bruijn ##.arg.202 0 1) (bruijn ##.env.201 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      _var0,
      _var1,
      statics->vars[2]);
}
static void _V10_Diter__combination_D102_lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__combination_D102_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.273 5 0) (bruijn ##.k.453 0 0) (close _V10_Diter__combination_D102_lambda44) (bruijn ##.args.200 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__combination_D102_lambda44, self)})),
      _var1);
}
static void _V10_Diter_D103_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.534 0 0) (bruijn ##.k.529 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Diter_D103_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.535 2 0) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (bruijn ##.x.537 1 0) (##inline ##vcore.cons (bruijn ##.x.539 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter_D103_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.103 9 7) (close _V10_Diter_D103_k108) (##inline ##vcore.car (bruijn ##.expr.52.210 2 0)) (bruijn ##.env.204 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 7)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k108, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VGetArg(statics, 8-1, 2));
}
static void _V10_Diter_D103_lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.103 8 7) (close _V10_Diter_D103_k107) (##inline ##vcore.car (bruijn ##.expr.51.208 2 0)) (bruijn ##.env.204 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 7)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k107, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Diter_D103_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.210 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.210 0 0))) (##vcore.call-with-values (close _V10_Diter_D103_k106) (close _V10_Diter_D103_lambda47) (bruijn ##.kk.48.205 4 1)) ((bruijn ##.k.529 3 0) #f)) ((bruijn ##.k.529 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k106, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda47, self)})),
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
static void _V10_Diter_D103_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.208 0 0)) ((close _V10_Diter_D103_k105) (##inline ##vcore.cdr (bruijn ##.expr.51.208 0 0))) ((bruijn ##.k.529 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k105, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.530 0 0) ((close _V10_Diter_D103_k104) (##inline ##vcore.cdr (bruijn ##.expr.203 4 1))) ((bruijn ##.k.529 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k104, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.203 3 1)) ((bruijn ##.x.263 18 0) (close _V10_Diter_D103_k103) 'begin (##inline ##vcore.car (bruijn ##.expr.203 3 1))) ((bruijn ##.k.529 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k103, self)})),
      _V0begin,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.518 0 0) (bruijn ##.k.512 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Diter_D103_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.519 3 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.521 2 0) (##inline ##vcore.cons (bruijn ##.x.523 1 0) (##inline ##vcore.cons (bruijn ##.x.525 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
static void _V10_Diter_D103_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.103 12 7) (close _V10_Diter_D103_k118) (##inline ##vcore.car (bruijn ##.expr.56.217 3 0)) (bruijn ##.env.204 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 7)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k118, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VGetArg(statics, 11-1, 2));
}
static void _V10_Diter_D103_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.103 11 7) (close _V10_Diter_D103_k117) (##inline ##vcore.car (bruijn ##.expr.55.215 3 0)) (bruijn ##.env.204 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 7)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k117, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VGetArg(statics, 10-1, 2));
}
static void _V10_Diter_D103_lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.103 10 7) (close _V10_Diter_D103_k116) (##inline ##vcore.car (bruijn ##.expr.54.213 3 0)) (bruijn ##.env.204 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k116, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VGetArg(statics, 9-1, 2));
}
static void _V10_Diter_D103_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.217 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.56.217 0 0))) (##vcore.call-with-values (close _V10_Diter_D103_k115) (close _V10_Diter_D103_lambda48) (bruijn ##.kk.48.205 6 1)) ((bruijn ##.k.512 4 0) #f)) ((bruijn ##.k.512 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k115, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda48, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.215 0 0)) ((close _V10_Diter_D103_k114) (##inline ##vcore.cdr (bruijn ##.expr.55.215 0 0))) ((bruijn ##.k.512 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k114, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.213 0 0)) ((close _V10_Diter_D103_k113) (##inline ##vcore.cdr (bruijn ##.expr.54.213 0 0))) ((bruijn ##.k.512 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k113, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.513 0 0) ((close _V10_Diter_D103_k112) (##inline ##vcore.cdr (bruijn ##.expr.203 5 1))) ((bruijn ##.k.512 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k112, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.203 4 1)) ((bruijn ##.x.263 19 0) (close _V10_Diter_D103_k111) 'if (##inline ##vcore.car (bruijn ##.expr.203 4 1))) ((bruijn ##.k.512 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k111, self)})),
      _V0if,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.503 0 0) (bruijn ##.k.498 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Diter_D103_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.504 2 0) (##inline ##vcore.cons 'or (##inline ##vcore.cons (bruijn ##.x.506 1 0) (##inline ##vcore.cons (bruijn ##.x.508 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter_D103_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.103 11 7) (close _V10_Diter_D103_k126) (##inline ##vcore.car (bruijn ##.expr.59.222 2 0)) (bruijn ##.env.204 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 7)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k126, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VGetArg(statics, 10-1, 2));
}
static void _V10_Diter_D103_lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.103 10 7) (close _V10_Diter_D103_k125) (##inline ##vcore.car (bruijn ##.expr.58.220 2 0)) (bruijn ##.env.204 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k125, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VGetArg(statics, 9-1, 2));
}
static void _V10_Diter_D103_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.222 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.59.222 0 0))) (##vcore.call-with-values (close _V10_Diter_D103_k124) (close _V10_Diter_D103_lambda49) (bruijn ##.kk.48.205 6 1)) ((bruijn ##.k.498 3 0) #f)) ((bruijn ##.k.498 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k124, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda49, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.58.220 0 0)) ((close _V10_Diter_D103_k123) (##inline ##vcore.cdr (bruijn ##.expr.58.220 0 0))) ((bruijn ##.k.498 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k123, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.499 0 0) ((close _V10_Diter_D103_k122) (##inline ##vcore.cdr (bruijn ##.expr.203 6 1))) ((bruijn ##.k.498 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k122, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.203 5 1)) ((bruijn ##.x.263 20 0) (close _V10_Diter_D103_k121) 'or (##inline ##vcore.car (bruijn ##.expr.203 5 1))) ((bruijn ##.k.498 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k121, self)})),
      _V0or,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D228_k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.65.227 5 1) (bruijn ##.k.485 2 0) (bruijn ##.expr.67.229 3 1) (bruijn ##.x.486 1 0) (bruijn ##.x.487 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D228_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.274 18 0) (close _V10_Dloop_D228_k133) (bruijn ##.vals.64.231 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k133, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D228_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.67.229 1 1))) ((bruijn ##.x.274 17 0) (close _V10_Dloop_D228_k132) (bruijn ##.xs.63.230 1 2)) ((bruijn ##.k.485 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k132, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D228_k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.235 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.69.235 0 0))) ((bruijn ##.kk.66.232 3 1) (bruijn ##.k.477 1 0) (##inline ##vcore.cdr (bruijn ##.expr.67.229 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.68.233 2 0)) (bruijn ##.xs.63.230 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.69.235 0 0)) (bruijn ##.vals.64.231 6 3))) ((bruijn ##.k.477 1 0) #f)) ((bruijn ##.k.477 1 0) #f))
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
static void _V10_Dloop_D228_k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.68.233 1 0)) ((close _V10_Dloop_D228_k137) (##inline ##vcore.cdr (bruijn ##.expr.68.233 1 0))) ((bruijn ##.k.477 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D228_k137, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D228_k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.65.227 9 1) (bruijn ##.k.472 4 0) (bruijn ##.expr.67.229 7 1) (bruijn ##.x.474 1 0) (bruijn ##.x.475 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D228_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.274 22 0) (close _V10_Dloop_D228_k140) (bruijn ##.vals.64.231 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k140, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D228_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.274 21 0) (close _V10_Dloop_D228_k139) (bruijn ##.xs.63.230 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k139, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D228_k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D228_k136) (close _V10_Dloop_D228_k138))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D228_k136, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k138, self)})));
}
static void _V10_Dloop_D228_lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D228_k135) (##inline ##vcore.car (bruijn ##.expr.67.229 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D228_k135, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D228_lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.471 0 0) (close _V10_Dloop_D228_lambda54))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_lambda54, self)})));
}
static void _V10_Dloop_D228_k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.469 1 0) (close _V10_Dloop_D228_lambda53) (bruijn ##.loop.228 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_lambda53, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D228_lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_lambda52, got ~D~N"
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
  // ((close _V10_Dloop_D228_k131) (close _V10_Dloop_D228_k134))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D228_k131, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k134, self)})));
}
static void _V10_Diter_D103_lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D228_lambda52)) ((bruijn ##.loop.228 0 0) (bruijn ##.k.468 1 0) (##inline ##vcore.car (bruijn ##.expr.61.225 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_lambda52, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter_D103_lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.467 0 0) (close _V10_Diter_D103_lambda51))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda51, self)})));
}
static void _V10_Diter_D103_k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.493 0 0) (bruijn ##.k.489 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter_D103_lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-letrec.101 12 5) (bruijn ##.k.494 0 0) (bruijn ##.xs.238 2 2) '() (##inline ##vcore.car (bruijn ##.expr.70.240 1 0)) (bruijn ##.vals.239 2 3) (bruijn ##.env.204 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 6,
      _var0,
      statics->up->vars[2],
      VNULL,
      VInlineCar2(runtime,
        statics->vars[0]),
      statics->up->vars[3],
      VGetArg(statics, 11-1, 2));
}
static void _V10_Diter_D103_k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.240 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.70.240 0 0))) (##vcore.call-with-values (close _V10_Diter_D103_k142) (close _V10_Diter_D103_lambda56) (bruijn ##.kk.48.205 8 1)) ((bruijn ##.k.489 1 0) #f)) ((bruijn ##.k.489 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k142, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda56, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda55, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.237 0 1)) ((close _V10_Diter_D103_k141) (##inline ##vcore.cdr (bruijn ##.expr.61.225 1 0))) ((bruijn ##.k.489 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k141, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.225 0 0)) (##vcore.call-with-values (bruijn ##.k.464 2 0) (close _V10_Diter_D103_lambda50) (close _V10_Diter_D103_lambda55)) ((bruijn ##.k.464 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda50, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda55, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.465 0 0) ((close _V10_Diter_D103_k130) (##inline ##vcore.cdr (bruijn ##.expr.203 7 1))) ((bruijn ##.k.464 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k130, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.203 6 1)) ((bruijn ##.x.263 21 0) (close _V10_Diter_D103_k129) 'letrec (##inline ##vcore.car (bruijn ##.expr.203 6 1))) ((bruijn ##.k.464 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k129, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-combination.102 8 6) (bruijn ##.k.462 0 0) (bruijn ##.expr.203 7 1) (bruijn ##.env.204 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 6)), 3,
      _var0,
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Diter_D103_k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.457 4 0) (close _V10_Diter_D103_lambda57) (bruijn ##.kk.48.205 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda57, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Diter_D103_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D103_k128) (close _V10_Diter_D103_k143))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k128, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k143, self)})));
}
static void _V10_Diter_D103_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D103_k120) (close _V10_Diter_D103_k127))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k120, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k127, self)})));
}
static void _V10_Diter_D103_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D103_k110) (close _V10_Diter_D103_k119))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k110, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k119, self)})));
}
static void _V10_Diter_D103_lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Diter_D103_k102) (close _V10_Diter_D103_k109))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k102, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k109, self)})));
}
static void _V10_Diter_D103_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.456 0 0) (##vcore.call/cc (bruijn ##.k.455 1 0) (close _V10_Diter_D103_lambda46)) ((bruijn ##.iter-atom.100 2 4) (bruijn ##.k.455 1 0) (bruijn ##.expr.203 1 1) (bruijn ##.env.204 1 2)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda46, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
}
}
static void _V10_Diter_D103_lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.application?.96 1 0) (close _V10_Diter_D103_k101) (bruijn ##.expr.203 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k101, self)})),
      _var1);
}
static void _V10_Dalpha__convert__impl_D104_lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert__impl_D104_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.103 1 7) (bruijn ##.k.542 0 0) (bruijn ##.expr.242 0 1) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[7]), 3,
      _var0,
      _var1,
      VNULL);
}
static void _V10_Dalpha__convert_D92_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.591 0 0) (bruijn ##.k.589 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dalpha__convert_D92_lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.592 0 0) (bruijn ##.expr.95 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dalpha__convert_D92_k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.590 0 0) (##vcore.call-with-values (close _V10_Dalpha__convert_D92_k146) (close _V10_Dalpha__convert_D92_lambda60) (bruijn ##.kk.0.243 2 1)) ((bruijn ##.k.589 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k146, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda60, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95 3 1)) ((bruijn ##.x.263 16 0) (close _V10_Dalpha__convert_D92_k145) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.95 3 1))) ((bruijn ##.k.589 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k145, self)})),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.581 0 0) (bruijn ##.k.576 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dalpha__convert_D92_k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.582 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.247 3 0)) (##inline ##vcore.cons (bruijn ##.x.585 0 0) '()))))
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
static void _V10_Dalpha__convert_D92_lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.alpha-convert-impl.104 7 8) (close _V10_Dalpha__convert_D92_k153) (##inline ##vcore.car (bruijn ##.expr.5.249 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k153, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dalpha__convert_D92_k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.249 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.249 0 0))) (##vcore.call-with-values (close _V10_Dalpha__convert_D92_k152) (close _V10_Dalpha__convert_D92_lambda61) (bruijn ##.kk.0.243 5 1)) ((bruijn ##.k.576 3 0) #f)) ((bruijn ##.k.576 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k152, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda61, self)})),
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
static void _V10_Dalpha__convert_D92_k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.247 0 0)) ((close _V10_Dalpha__convert_D92_k151) (##inline ##vcore.cdr (bruijn ##.expr.4.247 0 0))) ((bruijn ##.k.576 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k151, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.577 0 0) ((close _V10_Dalpha__convert_D92_k150) (##inline ##vcore.cdr (bruijn ##.expr.95 5 1))) ((bruijn ##.k.576 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k150, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95 4 1)) ((bruijn ##.x.263 17 0) (close _V10_Dalpha__convert_D92_k149) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.95 4 1))) ((bruijn ##.k.576 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k149, self)})),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.568 0 0) (bruijn ##.k.563 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dalpha__convert_D92_k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.569 1 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.7.252 3 0)) (##inline ##vcore.cons (bruijn ##.x.572 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dalpha__convert_D92_lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.alpha-convert-impl.104 8 8) (close _V10_Dalpha__convert_D92_k160) (##inline ##vcore.car (bruijn ##.expr.8.254 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k160, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dalpha__convert_D92_k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.254 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.8.254 0 0))) (##vcore.call-with-values (close _V10_Dalpha__convert_D92_k159) (close _V10_Dalpha__convert_D92_lambda62) (bruijn ##.kk.0.243 6 1)) ((bruijn ##.k.563 3 0) #f)) ((bruijn ##.k.563 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k159, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda62, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.252 0 0)) ((close _V10_Dalpha__convert_D92_k158) (##inline ##vcore.cdr (bruijn ##.expr.7.252 0 0))) ((bruijn ##.k.563 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k158, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.564 0 0) ((close _V10_Dalpha__convert_D92_k157) (##inline ##vcore.cdr (bruijn ##.expr.95 6 1))) ((bruijn ##.k.563 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k157, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95 5 1)) ((bruijn ##.x.263 18 0) (close _V10_Dalpha__convert_D92_k156) 'define (##inline ##vcore.car (bruijn ##.expr.95 5 1))) ((bruijn ##.k.563 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k156, self)})),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 0 0) (bruijn ##.k.550 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dalpha__convert_D92_k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.556 1 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.10.257 3 0)) (##inline ##vcore.cons (bruijn ##.x.559 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dalpha__convert_D92_lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.alpha-convert-impl.104 9 8) (close _V10_Dalpha__convert_D92_k167) (##inline ##vcore.car (bruijn ##.expr.11.259 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k167, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dalpha__convert_D92_k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.259 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.259 0 0))) (##vcore.call-with-values (close _V10_Dalpha__convert_D92_k166) (close _V10_Dalpha__convert_D92_lambda63) (bruijn ##.kk.0.243 7 1)) ((bruijn ##.k.550 3 0) #f)) ((bruijn ##.k.550 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k166, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda63, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.257 0 0)) ((close _V10_Dalpha__convert_D92_k165) (##inline ##vcore.cdr (bruijn ##.expr.10.257 0 0))) ((bruijn ##.k.550 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k165, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.551 0 0) ((close _V10_Dalpha__convert_D92_k164) (##inline ##vcore.cdr (bruijn ##.expr.95 7 1))) ((bruijn ##.k.550 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k164, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95 6 1)) ((bruijn ##.x.263 19 0) (close _V10_Dalpha__convert_D92_k163) 'define-constant (##inline ##vcore.car (bruijn ##.expr.95 6 1))) ((bruijn ##.k.550 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k163, self)})),
      _V0define__constant,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.alpha-convert-impl.104 6 8) (bruijn ##.k.548 0 0) (bruijn ##.expr.95 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 8)), 2,
      _var0,
      VGetArg(statics, 7-1, 1));
}
static void _V10_Dalpha__convert_D92_k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.543 4 0) (close _V10_Dalpha__convert_D92_lambda64) (bruijn ##.kk.0.243 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda64, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dalpha__convert_D92_k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dalpha__convert_D92_k162) (close _V10_Dalpha__convert_D92_k168))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k162, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k168, self)})));
}
static void _V10_Dalpha__convert_D92_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dalpha__convert_D92_k155) (close _V10_Dalpha__convert_D92_k161))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k155, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k161, self)})));
}
static void _V10_Dalpha__convert_D92_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dalpha__convert_D92_k148) (close _V10_Dalpha__convert_D92_k154))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k148, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k154, self)})));
}
static void _V10_Dalpha__convert_D92_lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dalpha__convert_D92_k144) (close _V10_Dalpha__convert_D92_k147))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k144, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k147, self)})));
}
static void _V10_Dalpha__convert_D92_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 9 ((close _V10_Dapplication_Q_D96_lambda4) (close _V10_Dcombination_Q_D97_lambda5) (close _V10_Dlookup__env_D98_lambda6) (close _V10_Diter__defines_D99_lambda7) (close _V10_Diter__atom_D100_lambda18) (close _V10_Diter__letrec_D101_lambda39) (close _V10_Diter__combination_D102_lambda43) (close _V10_Diter_D103_lambda45) (close _V10_Dalpha__convert__impl_D104_lambda58)) (##vcore.call/cc (bruijn ##.k.281 1 0) (close _V10_Dalpha__convert_D92_lambda59)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D96_lambda4, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D97_lambda5, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__env_D98_lambda6, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda7, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda18, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_lambda39, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__combination_D102_lambda43, self)}));
    self->vars[7] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda45, self)}));
    self->vars[8] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert__impl_D104_lambda58, self)}));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda59, self)})));
    }
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((close _V10_Dmemtail_D91_lambda2) (close _V10_Dalpha__convert_D92_lambda3)) ((bruijn ##.k.262 20 0) (##inline ##vcore.cons (##inline ##vcore.cons 'alpha-convert (bruijn ##.alpha-convert.92 0 1)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D91_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda3, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0alpha__convert,
        self->vars[1]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 11 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k19) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k19, self)})),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 10 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k18) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k18, self)})),
      _V0map);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 9 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k17) 'gensym)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k17, self)})),
      _V0gensym);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 8 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k16) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k16, self)})),
      _V0list);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 7 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k15) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k15, self)})),
      _V0append);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 6 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k14) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k14, self)})),
      _V0values);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 5 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k13) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k13, self)})),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 4 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k12) 'lookup-intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k12, self)})),
      _V0lookup__intrinsic);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 3 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k11) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k11, self)})),
      _V0error);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 2 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k10) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k10, self)})),
      _V0assv);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 1 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k9) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k9, self)})),
      _V0memv);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 0 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k8) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k8, self)})),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0alpha__convert_V20_k7) (##string ##.string.604) (bruijn ##.x.595 5 0) (bruijn ##.x.596 4 0) (bruijn ##.x.597 3 0) (bruijn ##.x.598 2 0) (bruijn ##.x.599 1 0) (bruijn ##.x.600 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 8,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k7, self)})),
      VEncodePointer(&_V10_Dstring_D604.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k6) (##string ##.string.605))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k6, self)})),
      VEncodePointer(&_V10_Dstring_D605.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k5) (##string ##.string.606))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k5, self)})),
      VEncodePointer(&_V10_Dstring_D606.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k4) (##string ##.string.607))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k4, self)})),
      VEncodePointer(&_V10_Dstring_D607.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k3) (##string ##.string.608))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D608.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k2) (##string ##.string.609))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D609.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k1) (##string ##.string.610))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D610.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0alpha__convert_V20 = (VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_lambda1;
