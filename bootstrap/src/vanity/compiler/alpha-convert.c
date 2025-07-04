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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0alpha__convert;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0alpha__convert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "alpha-convert" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
VWEAK VWORD _V40_V10vcore_Dcons;VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static __attribute__((constructor)) void VDllMain1() {
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VLookupConstant("_V0lookup__intrinsic", &_VW_V0lookup__intrinsic), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
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
  _V10qualified__case__lambda = VEncodePointer(VLookupConstant("_V10qualified__case__lambda", &_VW_V10qualified__case__lambda), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VLookupConstant("_V10qualified__lambda", &_VW_V10qualified__lambda), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D118, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D116, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115, _var0, _var1, _var2, _var3, _var4, _var5);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D112, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D111, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D110, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail, _var0, _var1, _var2);
void _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.317 0 0) ((bruijn ##.k.315 1 0) (bruijn ##.lst.108 1 2)) (##qualified-call (vanity compiler alpha-convert memtail) (bruijn ##.memtail.105 2 0) (bruijn ##.k.315 1 0) (bruijn ##.x.107 1 1) (##inline ##vcore.cdr (bruijn ##.lst.108 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.320 0 0) ((bruijn ##.k.315 1 0) (bruijn ##.lst.108 1 2)) ((bruijn ##.k.315 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.lst.108 0 2)) ((bruijn ##.x.303 13 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k20) (bruijn ##.x.107 0 1) (##inline ##vcore.car (bruijn ##.lst.108 0 2))) ((bruijn ##.x.303 13 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k21) (bruijn ##.x.107 0 1) (bruijn ##.lst.108 0 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k20, self)))),
      _var1,
      VInlineCar2(runtime,
        _var2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k21, self)))),
      _var1,
      _var2);
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D110_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D110_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.322 1 0) (##inline ##vcore.not (bruijn ##.x.324 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.x.119 0 1)) ((bruijn ##.x.314 4 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D110_V0k22) (##inline ##vcore.car (bruijn ##.x.119 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons '##qualified-lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##qualified-case-lambda (##inline ##vcore.qcons '##foreign.function '()))))))) ((bruijn ##.k.322 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D110_V0k22, self)))),
      VInlineCar2(runtime,
        _var1),
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        _V10qualified__case__lambda,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VNULL)))))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D111_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D111_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.332 1 0) (##inline ##vcore.not (bruijn ##.x.334 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.x.120 0 1)) ((bruijn ##.x.314 4 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D111_V0k23) (##inline ##vcore.car (bruijn ##.x.120 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons '##qualified-lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##qualified-case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'or (##inline ##vcore.qcons 'letrec '()))))))))))) ((bruijn ##.k.332 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D111_V0k23, self)))),
      VInlineCar2(runtime,
        _var1),
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        _V10qualified__case__lambda,
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
        VNULL)))))))))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D112_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D112_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.12.123 0 0) ((bruijn ##.k.346 1 0) (bruijn ##.x.12.123 0 0)) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.lookup-env.112) (bruijn ##.lookup-env.112 2 2) (bruijn ##.k.346 1 0) (bruijn ##.sym.121 1 1) (##inline ##vcore.cdr (bruijn ##.env.122 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[2]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D112(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D112, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.env.122 0 2)) ((bruijn ##.k.346 0 0) #f) ((bruijn ##.x.313 5 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D112_V0k24) (bruijn ##.sym.121 0 1) (##inline ##vcore.car (bruijn ##.env.122 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D112_V0k24, self)))),
      _var1,
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.312 8 0) (bruijn ##.k.351 1 0) (##string ##.string.695))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D695.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.18.130 5 1) (bruijn ##.k.372 2 0) (bruijn ##.expr.20.132 3 1) (bruijn ##.x.373 1 0) (bruijn ##.x.374 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 17 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k28) (bruijn ##.vals.17.134 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k28, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.20.132 1 1))) ((bruijn ##.x.308 16 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k27) (bruijn ##.xs.16.133 1 2)) ((bruijn ##.k.372 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k27, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.139 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.139 0 0))) ((bruijn ##.kk.19.135 4 1) (bruijn ##.k.363 2 0) (##inline ##vcore.cdr (bruijn ##.expr.20.132 7 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.22.137 1 0)) (bruijn ##.xs.16.133 7 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.23.139 0 0)) (bruijn ##.vals.17.134 7 3))) ((bruijn ##.k.363 2 0) #f)) ((bruijn ##.k.363 2 0) #f))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.137 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k33) (##inline ##vcore.cdr (bruijn ##.expr.22.137 0 0))) ((bruijn ##.k.363 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k33, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.136 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k32) (##inline ##vcore.cdr (bruijn ##.expr.21.136 1 0))) ((bruijn ##.k.363 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k32, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.18.130 9 1) (bruijn ##.k.358 4 0) (bruijn ##.expr.20.132 7 1) (bruijn ##.x.360 1 0) (bruijn ##.x.361 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 21 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k36) (bruijn ##.vals.17.134 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k36, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 20 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k35) (bruijn ##.xs.16.133 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k35, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k31) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k34))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k31, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k34, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k30) (##inline ##vcore.car (bruijn ##.expr.20.132 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k30, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.357 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0lambda6))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0lambda6, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.355 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0lambda5) (bruijn ##.loop.131 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0lambda5, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k26) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k29))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131_V0k29, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-defines.113 ##.loop.131) (bruijn ##.loop.131 0 0) (bruijn ##.k.354 1 0) (bruijn ##.defines.125 4 1) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V10_Dloop_D131(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.353 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.378 0 0) (bruijn ##.k.376 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.309 17 0) (bruijn ##.k.379 5 0) (bruijn ##.x.380 0 0) (bruijn ##.env.145 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      _var0,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.k.381 0 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.x.147 0 1) (##inline ##vcore.cons (bruijn ##.val.148 0 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        _var2,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 15 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k42) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda9) (bruijn ##.new-xs.144 3 0) (bruijn ##.vals.146 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k42, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda9, self)))),
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 8 7) (bruijn ##.k.384 0 0) (bruijn ##.val.149 0 1) (bruijn ##.env.145 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 7));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 14 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k41) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda10) (bruijn ##.vals.143 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda10, self)))),
      statics->up->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k40) (##inline ##vcore.cons (bruijn ##.x.385 0 0) (bruijn ##.env.126 5 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k40, self)), 1,
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 5-1, 2)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 12 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k39) (##intrinsic ##vcore.cons) (bruijn ##.xs.142 2 2) (bruijn ##.new-xs.144 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k39, self)))),
      _V40_V10vcore_Dcons,
      statics->up->vars[2],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 11 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k38) (bruijn ##.x.311 10 0) (bruijn ##.xs.142 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k38, self)))),
      VGetArg(statics, 10-1, 0),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda7, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.141 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k37) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda8) (bruijn ##.kk.13.127 1 1)) ((bruijn ##.k.376 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k37, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda8, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k25) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda3) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda7))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0k25, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda3, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda7, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.350 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda2))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113_V0lambda2, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.388 0 0) ((bruijn ##.k.387 2 0) (bruijn ##.sym.154 2 1)) ((bruijn ##.k.387 2 0) (bruijn ##.sym.154 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.55.156 0 0) ((bruijn ##.k.387 1 0) (##inline ##vcore.cdr (bruijn ##.x.55.156 0 0))) ((bruijn ##.x.305 16 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152_V0k44) (bruijn ##.sym.154 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152_V0k44, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.lookup-env.112) (bruijn ##.lookup-env.112 3 2) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152_V0k43) (bruijn ##.sym.154 0 1) (bruijn ##.env.155 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[2]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152_V0k43, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D112(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.390 2 0) (##inline ##vcore.cons (bruijn ##.x.393 1 0) (bruijn ##.x.394 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.iter-lambda.153 ##.genargs.162) (bruijn ##.genargs.162 2 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162_V0k46) (##inline ##vcore.cdr (bruijn ##.args.164 1 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162_V0k46, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.164 0 1)) ((bruijn ##.k.390 0 0) '()) (if (##inline ##vcore.pair? (bruijn ##.args.164 0 1)) ((bruijn ##.x.311 11 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162_V0k45) (##inline ##vcore.car (bruijn ##.args.164 0 1))) ((bruijn ##.x.311 11 0) (bruijn ##.k.390 0 0) (bruijn ##.args.164 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162_V0k45, self)))),
      VInlineCar2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      _var0,
      _var1);
}
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.397 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.args.165 1 1)) (bruijn ##.x.401 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.165 0 1)) ((bruijn ##.k.397 0 0) '()) (if (##inline ##vcore.pair? (bruijn ##.args.165 0 1)) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.iter-lambda.153 ##.dedot.163) (bruijn ##.dedot.163 1 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163_V0k47) (##inline ##vcore.cdr (bruijn ##.args.165 0 1))) ((bruijn ##.k.397 0 0) (##inline ##vcore.cons (bruijn ##.args.165 0 1) '()))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163_V0k47, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var1,
        VNULL));
}
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.389 10 0) (##inline ##vcore.cons (bruijn ##.newargs.166 8 0) (bruijn ##.x.404 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.306 23 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k55) (bruijn ##.new-defines.168 3 0) (##inline ##vcore.cons (bruijn ##.x.406 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k55, self)))),
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 11 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k54) (bruijn ##.body.160 8 3) (bruijn ##.new-env.169 2 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k54, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg2 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k53) (bruijn ##.dummy.58.170 1 2) (bruijn ##.x.407 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k53, self)))),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.309 18 0) (bruijn ##.k.408 0 0) (bruijn ##.defines.159 7 2) (##inline ##vcore.cons (bruijn ##.x.411 2 0) (bruijn ##.env.161 7 4)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      _var0,
      VGetArg(statics, 7-1, 2),
      VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 7-1, 4)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.409 1 0) (bruijn ##.new-env.169 2 1) (bruijn ##.new-env.57.172 1 2))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k56) (bruijn ##.new-defines.168 1 0) (bruijn ##.new-defines.56.171 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k56, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k52) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0lambda11) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0lambda12)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k52, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0lambda11, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0lambda12, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 14 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k51) (##intrinsic ##vcore.cons) (bruijn ##.x.412 1 0) (bruijn ##.x.413 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k51, self)))),
      _V40_V10vcore_Dcons,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.iter-lambda.153 ##.dedot.163) (bruijn ##.dedot.163 2 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k50) (bruijn ##.newargs.166 1 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k50, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.iter-lambda.153 ##.dedot.163) (bruijn ##.dedot.163 1 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k49) (bruijn ##.args.158 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k49, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153, got ~D~N"
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
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.iter-lambda.153 ##.genargs.162) (bruijn ##.genargs.162 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k48) (bruijn ##.args.158 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Ddedot_D163, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V0k48, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153_V10_Dgenargs_D162(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.528 0 0) (bruijn ##.k.523 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.529 1 0) (##inline ##vcore.cons 'lambda (bruijn ##.x.530 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.iter-lambda.153) (bruijn ##.iter-lambda.153 6 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k62) (##inline ##vcore.car (bruijn ##.expr.27.176 2 0)) '() (##inline ##vcore.car (bruijn ##.expr.28.178 1 0)) (bruijn ##.env.151 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k62, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg4 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.178 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.178 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k61) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda14) (bruijn ##.kk.24.173 4 1)) ((bruijn ##.k.523 3 0) #f)) ((bruijn ##.k.523 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda14, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.176 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k60) (##inline ##vcore.cdr (bruijn ##.expr.27.176 0 0))) ((bruijn ##.k.523 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k60, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.524 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k59) (##inline ##vcore.cdr (bruijn ##.x.150 4 1))) ((bruijn ##.k.523 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k59, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.150 3 1)) ((bruijn ##.x.303 18 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k58) 'lambda (##inline ##vcore.car (bruijn ##.x.150 3 1))) ((bruijn ##.k.523 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k58, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.516 0 0) (bruijn ##.k.510 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.517 1 0) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.30.181 4 0)) (bruijn ##.x.519 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.iter-lambda.153) (bruijn ##.iter-lambda.153 8 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k70) (##inline ##vcore.car (bruijn ##.expr.31.183 2 0)) '() (##inline ##vcore.car (bruijn ##.expr.32.185 1 0)) (bruijn ##.env.151 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k70, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg4 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.185 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.32.185 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k69) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda15) (bruijn ##.kk.24.173 6 1)) ((bruijn ##.k.510 4 0) #f)) ((bruijn ##.k.510 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k69, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda15, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.183 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k68) (##inline ##vcore.cdr (bruijn ##.expr.31.183 0 0))) ((bruijn ##.k.510 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k68, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.181 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k67) (##inline ##vcore.cdr (bruijn ##.expr.30.181 0 0))) ((bruijn ##.k.510 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k67, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.511 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k66) (##inline ##vcore.cdr (bruijn ##.x.150 5 1))) ((bruijn ##.k.510 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k66, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.150 4 1)) ((bruijn ##.x.303 19 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k65) '##qualified-lambda (##inline ##vcore.car (bruijn ##.x.150 4 1))) ((bruijn ##.k.510 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k65, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.37.189 5 1) (bruijn ##.k.498 2 0) (bruijn ##.expr.39.191 3 1) (bruijn ##.x.499 1 0) (bruijn ##.x.500 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 22 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k76) (bruijn ##.bodies.36.193 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k76, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.39.191 1 1))) ((bruijn ##.x.308 21 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k75) (bruijn ##.args.35.192 1 2)) ((bruijn ##.k.498 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k75, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.197 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.41.197 0 0))) ((bruijn ##.kk.38.194 3 1) (bruijn ##.k.490 1 0) (##inline ##vcore.cdr (bruijn ##.expr.39.191 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.40.195 2 0)) (bruijn ##.args.35.192 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.41.197 0 0)) (bruijn ##.bodies.36.193 6 3))) ((bruijn ##.k.490 1 0) #f)) ((bruijn ##.k.490 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.195 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k80) (##inline ##vcore.cdr (bruijn ##.expr.40.195 1 0))) ((bruijn ##.k.490 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k80, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.37.189 9 1) (bruijn ##.k.485 4 0) (bruijn ##.expr.39.191 7 1) (bruijn ##.x.487 1 0) (bruijn ##.x.488 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 26 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k83) (bruijn ##.bodies.36.193 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k83, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 25 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k82) (bruijn ##.args.35.192 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k82, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k79) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k81))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k79, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k81, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k78) (##inline ##vcore.car (bruijn ##.expr.39.191 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k78, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.484 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0lambda19))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0lambda19, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.482 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0lambda18) (bruijn ##.loop.190 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0lambda18, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k74) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k77))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190_V0k77, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.loop.190) (bruijn ##.loop.190 0 0) (bruijn ##.k.481 1 0) (##inline ##vcore.cdr (bruijn ##.x.150 9 1)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1));
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D190(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.480 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda17))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda17, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.504 0 0) (bruijn ##.k.502 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.505 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.506 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.iter-lambda.153) (bruijn ##.iter-lambda.153 8 1) (bruijn ##.k.507 0 0) (bruijn ##.arg.202 0 1) '() (bruijn ##.body.203 0 2) (bruijn ##.env.151 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 1));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      _var2;
    VWORD _arg4 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 16 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k85) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda22) (bruijn ##.args.200 1 2) (bruijn ##.bodies.201 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k85, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda22, self)))),
      statics->vars[2],
      statics->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda20, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.199 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k84) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda21) (bruijn ##.kk.24.173 5 1)) ((bruijn ##.k.502 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k84, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda21, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.479 0 0) (##vcore.call-with-values (bruijn ##.k.478 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda16) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda20)) ((bruijn ##.k.478 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda16, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda20, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.150 5 1)) ((bruijn ##.x.303 20 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k73) 'case-lambda (##inline ##vcore.car (bruijn ##.x.150 5 1))) ((bruijn ##.k.478 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k73, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.47.208 5 1) (bruijn ##.k.465 2 0) (bruijn ##.expr.49.210 3 1) (bruijn ##.x.466 1 0) (bruijn ##.x.467 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 24 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k92) (bruijn ##.bodies.46.212 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k92, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.49.210 1 1))) ((bruijn ##.x.308 23 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k91) (bruijn ##.args.45.211 1 2)) ((bruijn ##.k.465 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k91, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.216 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.51.216 0 0))) ((bruijn ##.kk.48.213 3 1) (bruijn ##.k.457 1 0) (##inline ##vcore.cdr (bruijn ##.expr.49.210 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.50.214 2 0)) (bruijn ##.args.45.211 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.51.216 0 0)) (bruijn ##.bodies.46.212 6 3))) ((bruijn ##.k.457 1 0) #f)) ((bruijn ##.k.457 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.214 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k96) (##inline ##vcore.cdr (bruijn ##.expr.50.214 1 0))) ((bruijn ##.k.457 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k96, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.47.208 9 1) (bruijn ##.k.452 4 0) (bruijn ##.expr.49.210 7 1) (bruijn ##.x.454 1 0) (bruijn ##.x.455 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 28 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k99) (bruijn ##.bodies.46.212 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k99, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 27 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k98) (bruijn ##.args.45.211 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k98, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k95) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k97))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k97, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k94) (##inline ##vcore.car (bruijn ##.expr.49.210 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k94, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.451 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0lambda26))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0lambda26, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.449 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0lambda25) (bruijn ##.loop.209 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0lambda25, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k90) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k93))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k90, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209_V0k93, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.loop.209) (bruijn ##.loop.209 0 0) (bruijn ##.k.448 1 0) (##inline ##vcore.cdr (bruijn ##.expr.43.205 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Dloop_D209(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.447 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda24))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda24, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.471 0 0) (bruijn ##.k.469 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.472 1 0) (##inline ##vcore.cons '##qualified-case-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.43.205 3 0)) (bruijn ##.x.474 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__case__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.iter-lambda.153) (bruijn ##.iter-lambda.153 10 1) (bruijn ##.k.475 0 0) (bruijn ##.arg.221 0 1) '() (bruijn ##.body.222 0 2) (bruijn ##.env.151 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 1));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      _var2;
    VWORD _arg4 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 18 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k101) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda29) (bruijn ##.args.219 1 2) (bruijn ##.bodies.220 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k101, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda29, self)))),
      statics->vars[2],
      statics->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda27, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.218 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k100) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda28) (bruijn ##.kk.24.173 7 1)) ((bruijn ##.k.469 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k100, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda28, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.205 0 0)) (##vcore.call-with-values (bruijn ##.k.444 2 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda23) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda27)) ((bruijn ##.k.444 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda23, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda27, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.445 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k89) (##inline ##vcore.cdr (bruijn ##.x.150 7 1))) ((bruijn ##.k.444 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k89, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.150 6 1)) ((bruijn ##.x.303 21 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k88) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.x.150 6 1))) ((bruijn ##.k.444 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k88, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.440 0 0) (bruijn ##.k.438 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.441 0 0) (bruijn ##.x.150 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.439 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k105) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda30) (bruijn ##.kk.24.173 6 1)) ((bruijn ##.k.438 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k105, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda30, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.150 7 1)) ((bruijn ##.x.303 22 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k104) '##foreign.function (##inline ##vcore.car (bruijn ##.x.150 7 1))) ((bruijn ##.k.438 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k104, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.433 0 0) (bruijn ##.k.429 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.434 0 0) (bruijn ##.x.150 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.225 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.54.225 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k110) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda31) (bruijn ##.kk.24.173 8 1)) ((bruijn ##.k.429 2 0) #f)) ((bruijn ##.k.429 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k110, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda31, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.430 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k109) (##inline ##vcore.cdr (bruijn ##.x.150 9 1))) ((bruijn ##.k.429 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k109, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.150 8 1)) ((bruijn ##.x.303 23 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k108) 'quote (##inline ##vcore.car (bruijn ##.x.150 8 1))) ((bruijn ##.k.429 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k108, self)))),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.426 0 0) (bruijn ##.k.425 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.307 21 0) (bruijn ##.k.427 0 0) (##string ##.string.696))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D696.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.x.150 9 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k113) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda32) (bruijn ##.kk.24.173 7 1)) ((bruijn ##.k.425 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k113, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda32, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.694) ((##vcore.symbol? (bruijn ##.x.150 11 1))) (if (bruijn ##.reg.694 0 0) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114 ##.iter-symbol.152) (bruijn ##.iter-symbol.152 10 0) (bruijn ##.k.422 1 0) (bruijn ##.x.150 11 1) (bruijn ##.env.151 11 2)) ((bruijn ##.k.422 1 0) (bruijn ##.x.150 11 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 11-1, 1));
}
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.414 7 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda33) (bruijn ##.kk.24.173 7 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda33, self)))),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k112) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k114))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k112, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k114, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k107) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k111))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k107, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k111, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k103) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k106))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k106, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k87) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k102))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k87, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k102, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k72) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k86))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k72, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k86, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k64) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k71))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k64, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k71, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k57) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k63))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0k63, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153")) (##vcore.call/cc (bruijn ##.k.386 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda13)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__symbol_D152, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V10_Diter__lambda_D153, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114_V0lambda13, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.533 10 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.536 2 0) (bruijn ##.x.537 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->up->vars[0],
        _var0)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.306 21 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k123) (bruijn ##.new-defines.234 4 0) (##inline ##vcore.cons (bruijn ##.x.539 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k123, self)))),
      statics->up->up->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 9 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k122) (bruijn ##.body.228 8 3) (bruijn ##.new-env.235 3 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k122, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 15 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k121) (bruijn ##.x.304 21 0) (bruijn ##.new-args.231 6 0) (bruijn ##.vals.233 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k121, self)))),
      VGetArg(statics, 21-1, 0),
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k120) (bruijn ##.dummy.61.236 1 2) (bruijn ##.x.540 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k120, self)))),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.309 15 0) (bruijn ##.k.541 0 0) (bruijn ##.defines.227 6 2) (bruijn ##.env.232 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      _var0,
      VGetArg(statics, 6-1, 2),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.542 1 0) (bruijn ##.new-env.235 2 1) (bruijn ##.new-env.60.238 1 2))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k124) (bruijn ##.new-defines.234 1 0) (bruijn ##.new-defines.59.237 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k124, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k119) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda34) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda35)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k119, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda34, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda35, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 5 7) (bruijn ##.k.544 0 0) (bruijn ##.val.239 0 1) (bruijn ##.env.232 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 7));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 11 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k118) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda36) (bruijn ##.vals.229 3 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k118, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0lambda36, self)))),
      statics->up->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k117) (##inline ##vcore.cons (bruijn ##.x.545 0 0) (bruijn ##.env.230 2 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k117, self)), 1,
      VInlineCons2(runtime,
        _var0,
        statics->up->vars[5]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 9 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k116) (##intrinsic ##vcore.cons) (bruijn ##.args.226 1 1) (bruijn ##.new-args.231 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k116, self)))),
      _V40_V10vcore_Dcons,
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115, got ~D~N"
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
  // ((bruijn ##.x.310 8 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k115) (bruijn ##.x.311 7 0) (bruijn ##.args.226 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115_V0k115, self)))),
      VGetArg(statics, 7-1, 0),
      _var1);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D116_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D116_V0lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 2 7) (bruijn ##.k.547 0 0) (bruijn ##.arg.242 0 1) (bruijn ##.env.241 1 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[7]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D116, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.310 8 0) (bruijn ##.k.546 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D116_V0lambda37) (bruijn ##.args.240 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D116_V0lambda37, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.627 0 0) (bruijn ##.k.622 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.628 2 0) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (bruijn ##.x.630 1 0) (##inline ##vcore.cons (bruijn ##.x.632 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 9 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k132) (##inline ##vcore.car (bruijn ##.expr.66.250 2 0)) (bruijn ##.env.244 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k132, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 8 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k131) (##inline ##vcore.car (bruijn ##.expr.65.248 2 0)) (bruijn ##.env.244 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k131, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.250 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.66.250 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k130) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda39) (bruijn ##.kk.62.245 4 1)) ((bruijn ##.k.622 3 0) #f)) ((bruijn ##.k.622 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k130, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda39, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.248 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k129) (##inline ##vcore.cdr (bruijn ##.expr.65.248 0 0))) ((bruijn ##.k.622 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k129, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.623 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k128) (##inline ##vcore.cdr (bruijn ##.expr.243 4 1))) ((bruijn ##.k.622 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k128, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.243 3 1)) ((bruijn ##.x.303 18 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k127) 'begin (##inline ##vcore.car (bruijn ##.expr.243 3 1))) ((bruijn ##.k.622 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k127, self)))),
      _V0begin,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.611 0 0) (bruijn ##.k.605 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.612 3 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.614 2 0) (##inline ##vcore.cons (bruijn ##.x.616 1 0) (##inline ##vcore.cons (bruijn ##.x.618 0 0) '())))))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 12 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k142) (##inline ##vcore.car (bruijn ##.expr.70.257 3 0)) (bruijn ##.env.244 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k142, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 11 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k141) (##inline ##vcore.car (bruijn ##.expr.69.255 3 0)) (bruijn ##.env.244 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k141, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 10 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k140) (##inline ##vcore.car (bruijn ##.expr.68.253 3 0)) (bruijn ##.env.244 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k140, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.257 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.70.257 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k139) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda40) (bruijn ##.kk.62.245 6 1)) ((bruijn ##.k.605 4 0) #f)) ((bruijn ##.k.605 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k139, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda40, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.255 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k138) (##inline ##vcore.cdr (bruijn ##.expr.69.255 0 0))) ((bruijn ##.k.605 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k138, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.68.253 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k137) (##inline ##vcore.cdr (bruijn ##.expr.68.253 0 0))) ((bruijn ##.k.605 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k137, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.606 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k136) (##inline ##vcore.cdr (bruijn ##.expr.243 5 1))) ((bruijn ##.k.605 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k136, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.243 4 1)) ((bruijn ##.x.303 19 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k135) 'if (##inline ##vcore.car (bruijn ##.expr.243 4 1))) ((bruijn ##.k.605 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k135, self)))),
      _V0if,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.596 0 0) (bruijn ##.k.591 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.597 2 0) (##inline ##vcore.cons 'or (##inline ##vcore.cons (bruijn ##.x.599 1 0) (##inline ##vcore.cons (bruijn ##.x.601 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 11 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k150) (##inline ##vcore.car (bruijn ##.expr.73.262 2 0)) (bruijn ##.env.244 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k150, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 10 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k149) (##inline ##vcore.car (bruijn ##.expr.72.260 2 0)) (bruijn ##.env.244 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k149, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.262 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.73.262 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k148) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda41) (bruijn ##.kk.62.245 6 1)) ((bruijn ##.k.591 3 0) #f)) ((bruijn ##.k.591 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k148, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda41, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.260 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k147) (##inline ##vcore.cdr (bruijn ##.expr.72.260 0 0))) ((bruijn ##.k.591 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k147, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.592 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k146) (##inline ##vcore.cdr (bruijn ##.expr.243 6 1))) ((bruijn ##.k.591 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k146, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.243 5 1)) ((bruijn ##.x.303 20 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k145) 'or (##inline ##vcore.car (bruijn ##.expr.243 5 1))) ((bruijn ##.k.591 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k145, self)))),
      _V0or,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.79.267 5 1) (bruijn ##.k.578 2 0) (bruijn ##.expr.81.269 3 1) (bruijn ##.x.579 1 0) (bruijn ##.x.580 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 24 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k157) (bruijn ##.vals.78.271 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k157, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.81.269 1 1))) ((bruijn ##.x.308 23 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k156) (bruijn ##.xs.77.270 1 2)) ((bruijn ##.k.578 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k156, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.83.275 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.83.275 0 0))) ((bruijn ##.kk.80.272 3 1) (bruijn ##.k.570 1 0) (##inline ##vcore.cdr (bruijn ##.expr.81.269 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.82.273 2 0)) (bruijn ##.xs.77.270 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.83.275 0 0)) (bruijn ##.vals.78.271 6 3))) ((bruijn ##.k.570 1 0) #f)) ((bruijn ##.k.570 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.273 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k161) (##inline ##vcore.cdr (bruijn ##.expr.82.273 1 0))) ((bruijn ##.k.570 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k161, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.79.267 9 1) (bruijn ##.k.565 4 0) (bruijn ##.expr.81.269 7 1) (bruijn ##.x.567 1 0) (bruijn ##.x.568 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 28 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k164) (bruijn ##.vals.78.271 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k164, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.308 27 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k163) (bruijn ##.xs.77.270 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k163, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k160) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k162))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k160, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k162, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k159) (##inline ##vcore.car (bruijn ##.expr.81.269 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k159, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.564 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0lambda45))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0lambda45, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.562 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0lambda44) (bruijn ##.loop.268 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0lambda44, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k155) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k158))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k155, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268_V0k158, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117 ##.loop.268) (bruijn ##.loop.268 0 0) (bruijn ##.k.561 1 0) (##inline ##vcore.car (bruijn ##.expr.75.265 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268, self))));
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V10_Dloop_D268(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.560 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda43))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda43, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.586 0 0) (bruijn ##.k.582 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-letrec.115) (bruijn ##.iter-letrec.115 12 5) (bruijn ##.k.587 0 0) (bruijn ##.xs.278 2 2) '() (##inline ##vcore.car (bruijn ##.expr.84.280 1 0)) (bruijn ##.vals.279 2 3) (bruijn ##.env.244 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 5));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[2];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg4 = 
      statics->up->vars[3];
    VWORD _arg5 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115(runtime, _closure->env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.280 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.84.280 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k166) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda47) (bruijn ##.kk.62.245 8 1)) ((bruijn ##.k.582 1 0) #f)) ((bruijn ##.k.582 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k166, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda47, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda46, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.277 0 1)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k165) (##inline ##vcore.cdr (bruijn ##.expr.75.265 1 0))) ((bruijn ##.k.582 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k165, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.265 0 0)) (##vcore.call-with-values (bruijn ##.k.557 2 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda42) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda46)) ((bruijn ##.k.557 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda42, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda46, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.558 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k154) (##inline ##vcore.cdr (bruijn ##.expr.243 7 1))) ((bruijn ##.k.557 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k154, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.243 6 1)) ((bruijn ##.x.303 21 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k153) 'letrec (##inline ##vcore.car (bruijn ##.expr.243 6 1))) ((bruijn ##.k.557 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k153, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-combination.116) (bruijn ##.iter-combination.116 8 6) (bruijn ##.k.555 0 0) (bruijn ##.expr.243 7 1) (bruijn ##.env.244 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 6));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D116(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.550 4 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda48) (bruijn ##.kk.62.245 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda48, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k152) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k167))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k152, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k167, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k144) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k151))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k144, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k151, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k134) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k143))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k134, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k143, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k126) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k133))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k126, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k133, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.549 0 0) (##vcore.call/cc (bruijn ##.k.548 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda38)) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.114) (bruijn ##.iter-atom.114 2 4) (bruijn ##.k.548 1 0) (bruijn ##.expr.243 1 1) (bruijn ##.env.244 1 2)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0lambda38, self)))));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[4]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.application?.110) (bruijn ##.application?.110 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k125) (bruijn ##.expr.243 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117_V0k125, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D110(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D118, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.117) (bruijn ##.iter.117 1 7) (bruijn ##.k.635 0 0) (bruijn ##.expr.282 0 1) '())
  {
    VClosure * _closure = VDecodeClosure(statics->vars[7]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.684 0 0) (bruijn ##.k.682 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.685 0 0) (bruijn ##.expr.109 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.683 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k170) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda50) (bruijn ##.kk.0.283 2 1)) ((bruijn ##.k.682 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k170, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda50, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109 3 1)) ((bruijn ##.x.303 16 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k169) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.109 3 1))) ((bruijn ##.k.682 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k169, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.674 0 0) (bruijn ##.k.669 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.675 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.287 3 0)) (##inline ##vcore.cons (bruijn ##.x.678 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.118) (bruijn ##.alpha-convert-impl.118 7 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k177) (##inline ##vcore.car (bruijn ##.expr.5.289 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k177, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D118(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.289 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.289 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k176) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda51) (bruijn ##.kk.0.283 5 1)) ((bruijn ##.k.669 3 0) #f)) ((bruijn ##.k.669 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k176, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda51, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.287 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k175) (##inline ##vcore.cdr (bruijn ##.expr.4.287 0 0))) ((bruijn ##.k.669 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k175, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.670 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k174) (##inline ##vcore.cdr (bruijn ##.expr.109 5 1))) ((bruijn ##.k.669 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k174, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109 4 1)) ((bruijn ##.x.303 17 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k173) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.109 4 1))) ((bruijn ##.k.669 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k173, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.661 0 0) (bruijn ##.k.656 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.662 1 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.7.292 3 0)) (##inline ##vcore.cons (bruijn ##.x.665 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.118) (bruijn ##.alpha-convert-impl.118 8 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184) (##inline ##vcore.car (bruijn ##.expr.8.294 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D118(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.294 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.8.294 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52) (bruijn ##.kk.0.283 6 1)) ((bruijn ##.k.656 3 0) #f)) ((bruijn ##.k.656 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.292 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k182) (##inline ##vcore.cdr (bruijn ##.expr.7.292 0 0))) ((bruijn ##.k.656 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k182, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.657 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k181) (##inline ##vcore.cdr (bruijn ##.expr.109 6 1))) ((bruijn ##.k.656 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k181, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109 5 1)) ((bruijn ##.x.303 18 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k180) 'define (##inline ##vcore.car (bruijn ##.expr.109 5 1))) ((bruijn ##.k.656 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k180, self)))),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 0 0) (bruijn ##.k.643 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.649 1 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.10.297 3 0)) (##inline ##vcore.cons (bruijn ##.x.652 0 0) '()))))
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
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.118) (bruijn ##.alpha-convert-impl.118 9 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191) (##inline ##vcore.car (bruijn ##.expr.11.299 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D118(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.299 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.299 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda53) (bruijn ##.kk.0.283 7 1)) ((bruijn ##.k.643 3 0) #f)) ((bruijn ##.k.643 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda53, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.297 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k189) (##inline ##vcore.cdr (bruijn ##.expr.10.297 0 0))) ((bruijn ##.k.643 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k189, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.644 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k188) (##inline ##vcore.cdr (bruijn ##.expr.109 7 1))) ((bruijn ##.k.643 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k188, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109 6 1)) ((bruijn ##.x.303 19 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k187) 'define-constant (##inline ##vcore.car (bruijn ##.expr.109 6 1))) ((bruijn ##.k.643 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k187, self)))),
      _V0define__constant,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.118) (bruijn ##.alpha-convert-impl.118 6 8) (bruijn ##.k.641 0 0) (bruijn ##.expr.109 7 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 8));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D118(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.636 4 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda54) (bruijn ##.kk.0.283 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda54, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k186) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k192))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k186, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k192, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k179) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k185))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k179, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k185, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k172) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k178))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k172, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k178, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k168) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k171))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k168, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k171, self)))));
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
  // (letrec 9 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D110") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D111") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D112") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D116") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D118")) (##vcore.call/cc (bruijn ##.k.321 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda49)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D110, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D111, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D112, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D113, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D114, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D115, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D116, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D117, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D118, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda49, self)))));
    }
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert")) ((bruijn ##.k.302 20 0) (##inline ##vcore.cons (##inline ##vcore.cons 'alpha-convert (bruijn ##.alpha-convert.106 0 1)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0alpha__convert,
        self->vars[1]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.85 11 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k19) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k19, self)))),
      _V0memv);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.85 10 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k18) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k18, self)))),
      _V0assv);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.85 9 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k17) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k17, self)))),
      _V0error);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.85 8 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k16) 'gensym)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k16, self)))),
      _V0gensym);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.85 7 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k15) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k15, self)))),
      _V0map);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.85 6 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k14) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k14, self)))),
      _V0values);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.85 5 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k13) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k13, self)))),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.85 4 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k12) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k12, self)))),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.85 3 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k11) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k11, self)))),
      _V0append);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.85 2 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k10) 'lookup-intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k10, self)))),
      _V0lookup__intrinsic);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.85 1 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k9) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k9, self)))),
      _V0list);
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
  // ((bruijn ##..vcore.import.85 0 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k8) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k8, self)))),
      _V0equal_Q);
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k7) (##string ##.string.697) (bruijn ##.x.688 5 0) (bruijn ##.x.689 4 0) (bruijn ##.x.690 3 0) (bruijn ##.x.691 2 0) (bruijn ##.x.692 1 0) (bruijn ##.x.693 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 8,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D697.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k6) (##string ##.string.698))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D698.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k5) (##string ##.string.699))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D699.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k4) (##string ##.string.700))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D700.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k3) (##string ##.string.701))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D701.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k2) (##string ##.string.702))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D702.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k1) (##string ##.string.703))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D703.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0alpha__convert_V20 = (VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0lambda1;
