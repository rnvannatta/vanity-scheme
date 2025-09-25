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


static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
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
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V10instrinsic;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10instrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##instrinsic" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static __attribute__((constructor)) void VDllMain1() {
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VInternSymbol(1810441535, &_VW_V0lookup__intrinsic.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0alpha__convert = VEncodePointer(VInternSymbol(-1170573105, &_VW_V0alpha__convert.sym), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VInternSymbol(471311928, &_VW_V0define__constant.sym), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
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
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D120, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D118, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117, _var0, _var1, _var2, _var3, _var4, _var5);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D114, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D113, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D112, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail, _var0, _var1, _var2);
void _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.321 0 0) ((bruijn ##.k.319 1 0) (bruijn ##.lst.110 1 2)) (##qualified-call (vanity compiler alpha-convert memtail) (bruijn ##.memtail.107 2 0) (bruijn ##.k.319 1 0) (bruijn ##.x.109 1 1) (##inline ##vcore.cdr (bruijn ##.lst.110 1 2))))
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
  // (if (bruijn ##.p.324 0 0) ((bruijn ##.k.319 1 0) (bruijn ##.lst.110 1 2)) ((bruijn ##.k.319 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.lst.110 0 2)) ((bruijn ##.x.307 13 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k20) (bruijn ##.x.109 0 1) (##inline ##vcore.car (bruijn ##.lst.110 0 2))) ((bruijn ##.x.307 13 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k21) (bruijn ##.x.109 0 1) (bruijn ##.lst.110 0 2)))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D112_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D112_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.326 1 0) (##inline ##vcore.not (bruijn ##.x.328 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.x.121 0 1)) ((bruijn ##.x.318 4 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D112_V0k22) (##inline ##vcore.car (bruijn ##.x.121 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons '##qualified-lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##qualified-case-lambda (##inline ##vcore.qcons '##instrinsic (##inline ##vcore.qcons '##basic-intrinsic (##inline ##vcore.qcons '##foreign.function '()))))))))) ((bruijn ##.k.326 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D112_V0k22, self)))),
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
        _V10instrinsic,
        VInlineCons2(runtime,
        _V10basic__intrinsic,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VNULL)))))))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D113_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D113_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.338 1 0) (##inline ##vcore.not (bruijn ##.x.340 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D113, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.x.122 0 1)) ((bruijn ##.x.318 4 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D113_V0k23) (##inline ##vcore.car (bruijn ##.x.122 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons '##qualified-lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##qualified-case-lambda (##inline ##vcore.qcons '##instrinsic (##inline ##vcore.qcons '##basic-intrinsic (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'or (##inline ##vcore.qcons 'letrec '()))))))))))))) ((bruijn ##.k.338 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D113_V0k23, self)))),
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
        _V10instrinsic,
        VInlineCons2(runtime,
        _V10basic__intrinsic,
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
        VNULL)))))))))))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D114_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D114_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.12.125 0 0) ((bruijn ##.k.354 1 0) (bruijn ##.x.12.125 0 0)) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.lookup-env.114) (bruijn ##.lookup-env.114 2 2) (bruijn ##.k.354 1 0) (bruijn ##.sym.123 1 1) (##inline ##vcore.cdr (bruijn ##.env.124 1 2))))
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D114(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D114, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.env.124 0 2)) ((bruijn ##.k.354 0 0) #f) ((bruijn ##.x.317 5 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D114_V0k24) (bruijn ##.sym.123 0 1) (##inline ##vcore.car (bruijn ##.env.124 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D114_V0k24, self)))),
      _var1,
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.316 8 0) (bruijn ##.k.359 1 0) (##string ##.string.717))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D717.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.18.132 5 1) (bruijn ##.k.380 2 0) (bruijn ##.expr.20.134 3 1) (bruijn ##.x.381 1 0) (bruijn ##.x.382 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 17 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k28) (bruijn ##.vals.17.136 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k28, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.20.134 1 1))) ((bruijn ##.x.312 16 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k27) (bruijn ##.xs.16.135 1 2)) ((bruijn ##.k.380 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k27, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.141 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.141 0 0))) ((bruijn ##.kk.19.137 4 1) (bruijn ##.k.371 2 0) (##inline ##vcore.cdr (bruijn ##.expr.20.134 7 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.22.139 1 0)) (bruijn ##.xs.16.135 7 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.23.141 0 0)) (bruijn ##.vals.17.136 7 3))) ((bruijn ##.k.371 2 0) #f)) ((bruijn ##.k.371 2 0) #f))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.139 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k33) (##inline ##vcore.cdr (bruijn ##.expr.22.139 0 0))) ((bruijn ##.k.371 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k33, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.138 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k32) (##inline ##vcore.cdr (bruijn ##.expr.21.138 1 0))) ((bruijn ##.k.371 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k32, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.18.132 9 1) (bruijn ##.k.366 4 0) (bruijn ##.expr.20.134 7 1) (bruijn ##.x.368 1 0) (bruijn ##.x.369 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 21 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k36) (bruijn ##.vals.17.136 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k36, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 20 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k35) (bruijn ##.xs.16.135 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k35, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k31) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k34))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k31, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k34, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k30) (##inline ##vcore.car (bruijn ##.expr.20.134 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k30, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.365 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0lambda6))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0lambda6, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.363 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0lambda5) (bruijn ##.loop.133 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0lambda5, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k26) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k29))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133_V0k29, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-defines.115 ##.loop.133) (bruijn ##.loop.133 0 0) (bruijn ##.k.362 1 0) (bruijn ##.defines.127 4 1) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133, self))));
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V10_Dloop_D133(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.361 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.386 0 0) (bruijn ##.k.384 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.313 17 0) (bruijn ##.k.387 5 0) (bruijn ##.x.388 0 0) (bruijn ##.env.147 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      _var0,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.k.389 0 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.x.149 0 1) (##inline ##vcore.cons (bruijn ##.val.150 0 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        _var2,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.314 15 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k42) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda9) (bruijn ##.new-xs.146 3 0) (bruijn ##.vals.148 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k42, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda9, self)))),
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 8 7) (bruijn ##.k.392 0 0) (bruijn ##.val.151 0 1) (bruijn ##.env.147 1 0))
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.314 14 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k41) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda10) (bruijn ##.vals.145 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda10, self)))),
      statics->up->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k40) (##inline ##vcore.cons (bruijn ##.x.393 0 0) (bruijn ##.env.128 5 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k40, self)), 1,
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 5-1, 2)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.314 12 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k39) (##intrinsic ##vcore.cons) (bruijn ##.xs.144 2 2) (bruijn ##.new-xs.146 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k39, self)))),
      _V40_V10vcore_Dcons,
      statics->up->vars[2],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.314 11 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k38) (bruijn ##.x.315 10 0) (bruijn ##.xs.144 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k38, self)))),
      VGetArg(statics, 10-1, 0),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda7, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.143 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k37) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda8) (bruijn ##.kk.13.129 1 1)) ((bruijn ##.k.384 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k37, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda8, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k25) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda3) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda7))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0k25, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda3, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda7, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.358 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda2))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115_V0lambda2, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.396 0 0) ((bruijn ##.k.395 2 0) (bruijn ##.sym.156 2 1)) ((bruijn ##.k.395 2 0) (bruijn ##.sym.156 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.57.158 0 0) ((bruijn ##.k.395 1 0) (##inline ##vcore.cdr (bruijn ##.x.57.158 0 0))) ((bruijn ##.x.309 16 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154_V0k44) (bruijn ##.sym.156 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154_V0k44, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.lookup-env.114) (bruijn ##.lookup-env.114 3 2) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154_V0k43) (bruijn ##.sym.156 0 1) (bruijn ##.env.157 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[2]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154_V0k43, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D114(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.398 2 0) (##inline ##vcore.cons (bruijn ##.x.401 1 0) (bruijn ##.x.402 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.iter-lambda.155 ##.genargs.164) (bruijn ##.genargs.164 2 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164_V0k46) (##inline ##vcore.cdr (bruijn ##.args.166 1 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164_V0k46, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.166 0 1)) ((bruijn ##.k.398 0 0) '()) (if (##inline ##vcore.pair? (bruijn ##.args.166 0 1)) ((bruijn ##.x.315 11 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164_V0k45) (##inline ##vcore.car (bruijn ##.args.166 0 1))) ((bruijn ##.x.315 11 0) (bruijn ##.k.398 0 0) (bruijn ##.args.166 0 1))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164_V0k45, self)))),
      VInlineCar2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      _var0,
      _var1);
}
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.405 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.args.167 1 1)) (bruijn ##.x.409 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.167 0 1)) ((bruijn ##.k.405 0 0) '()) (if (##inline ##vcore.pair? (bruijn ##.args.167 0 1)) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.iter-lambda.155 ##.dedot.165) (bruijn ##.dedot.165 1 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165_V0k47) (##inline ##vcore.cdr (bruijn ##.args.167 0 1))) ((bruijn ##.k.405 0 0) (##inline ##vcore.cons (bruijn ##.args.167 0 1) '()))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165_V0k47, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165(runtime, _closure->env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.397 10 0) (##inline ##vcore.cons (bruijn ##.newargs.168 8 0) (bruijn ##.x.412 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 23 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k55) (bruijn ##.new-defines.170 3 0) (##inline ##vcore.cons (bruijn ##.x.414 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k55, self)))),
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 11 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k54) (bruijn ##.body.162 8 3) (bruijn ##.new-env.171 2 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k54, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg2 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k53) (bruijn ##.dummy.60.172 1 2) (bruijn ##.x.415 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k53, self)))),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.313 18 0) (bruijn ##.k.416 0 0) (bruijn ##.defines.161 7 2) (##inline ##vcore.cons (bruijn ##.x.419 2 0) (bruijn ##.env.163 7 4)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      _var0,
      VGetArg(statics, 7-1, 2),
      VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 7-1, 4)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.417 1 0) (bruijn ##.new-env.171 2 1) (bruijn ##.new-env.59.174 1 2))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k56) (bruijn ##.new-defines.170 1 0) (bruijn ##.new-defines.58.173 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k56, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k52) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0lambda11) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0lambda12)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k52, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0lambda11, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0lambda12, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.314 14 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k51) (##intrinsic ##vcore.cons) (bruijn ##.x.420 1 0) (bruijn ##.x.421 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k51, self)))),
      _V40_V10vcore_Dcons,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.iter-lambda.155 ##.dedot.165) (bruijn ##.dedot.165 2 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k50) (bruijn ##.newargs.168 1 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k50, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.iter-lambda.155 ##.dedot.165) (bruijn ##.dedot.165 1 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k49) (bruijn ##.args.160 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k49, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155, got ~D~N"
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
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.iter-lambda.155 ##.genargs.164) (bruijn ##.genargs.164 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k48) (bruijn ##.args.160 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Ddedot_D165, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V0k48, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155_V10_Dgenargs_D164(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.550 0 0) (bruijn ##.k.545 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.551 1 0) (##inline ##vcore.cons 'lambda (bruijn ##.x.552 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.iter-lambda.155) (bruijn ##.iter-lambda.155 6 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k62) (##inline ##vcore.car (bruijn ##.expr.27.178 2 0)) '() (##inline ##vcore.car (bruijn ##.expr.28.180 1 0)) (bruijn ##.env.153 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k62, self))));
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.180 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.180 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k61) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda14) (bruijn ##.kk.24.175 4 1)) ((bruijn ##.k.545 3 0) #f)) ((bruijn ##.k.545 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda14, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.178 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k60) (##inline ##vcore.cdr (bruijn ##.expr.27.178 0 0))) ((bruijn ##.k.545 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k60, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.546 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k59) (##inline ##vcore.cdr (bruijn ##.x.152 4 1))) ((bruijn ##.k.545 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k59, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.152 3 1)) ((bruijn ##.x.307 18 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k58) 'lambda (##inline ##vcore.car (bruijn ##.x.152 3 1))) ((bruijn ##.k.545 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k58, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.538 0 0) (bruijn ##.k.532 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.539 1 0) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.30.183 4 0)) (bruijn ##.x.541 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.iter-lambda.155) (bruijn ##.iter-lambda.155 8 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k70) (##inline ##vcore.car (bruijn ##.expr.31.185 2 0)) '() (##inline ##vcore.car (bruijn ##.expr.32.187 1 0)) (bruijn ##.env.153 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k70, self))));
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.187 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.32.187 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k69) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda15) (bruijn ##.kk.24.175 6 1)) ((bruijn ##.k.532 4 0) #f)) ((bruijn ##.k.532 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k69, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda15, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.185 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k68) (##inline ##vcore.cdr (bruijn ##.expr.31.185 0 0))) ((bruijn ##.k.532 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k68, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.183 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k67) (##inline ##vcore.cdr (bruijn ##.expr.30.183 0 0))) ((bruijn ##.k.532 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k67, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.533 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k66) (##inline ##vcore.cdr (bruijn ##.x.152 5 1))) ((bruijn ##.k.532 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k66, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.152 4 1)) ((bruijn ##.x.307 19 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k65) '##qualified-lambda (##inline ##vcore.car (bruijn ##.x.152 4 1))) ((bruijn ##.k.532 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k65, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.37.191 5 1) (bruijn ##.k.520 2 0) (bruijn ##.expr.39.193 3 1) (bruijn ##.x.521 1 0) (bruijn ##.x.522 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 22 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k76) (bruijn ##.bodies.36.195 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k76, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.39.193 1 1))) ((bruijn ##.x.312 21 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k75) (bruijn ##.args.35.194 1 2)) ((bruijn ##.k.520 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k75, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.199 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.41.199 0 0))) ((bruijn ##.kk.38.196 3 1) (bruijn ##.k.512 1 0) (##inline ##vcore.cdr (bruijn ##.expr.39.193 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.40.197 2 0)) (bruijn ##.args.35.194 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.41.199 0 0)) (bruijn ##.bodies.36.195 6 3))) ((bruijn ##.k.512 1 0) #f)) ((bruijn ##.k.512 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.197 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k80) (##inline ##vcore.cdr (bruijn ##.expr.40.197 1 0))) ((bruijn ##.k.512 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k80, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.37.191 9 1) (bruijn ##.k.507 4 0) (bruijn ##.expr.39.193 7 1) (bruijn ##.x.509 1 0) (bruijn ##.x.510 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 26 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k83) (bruijn ##.bodies.36.195 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k83, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 25 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k82) (bruijn ##.args.35.194 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k82, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k79) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k81))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k79, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k81, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k78) (##inline ##vcore.car (bruijn ##.expr.39.193 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k78, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.506 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0lambda19))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0lambda19, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.504 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0lambda18) (bruijn ##.loop.192 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0lambda18, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k74) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k77))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192_V0k77, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.loop.192) (bruijn ##.loop.192 0 0) (bruijn ##.k.503 1 0) (##inline ##vcore.cdr (bruijn ##.x.152 9 1)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192, self))));
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D192(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.502 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda17))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda17, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.526 0 0) (bruijn ##.k.524 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.527 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.528 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.iter-lambda.155) (bruijn ##.iter-lambda.155 8 1) (bruijn ##.k.529 0 0) (bruijn ##.arg.204 0 1) '() (bruijn ##.body.205 0 2) (bruijn ##.env.153 9 2))
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.314 16 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k85) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda22) (bruijn ##.args.202 1 2) (bruijn ##.bodies.203 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k85, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda22, self)))),
      statics->vars[2],
      statics->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda20, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.201 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k84) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda21) (bruijn ##.kk.24.175 5 1)) ((bruijn ##.k.524 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k84, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda21, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.501 0 0) (##vcore.call-with-values (bruijn ##.k.500 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda16) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda20)) ((bruijn ##.k.500 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda16, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda20, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.152 5 1)) ((bruijn ##.x.307 20 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k73) 'case-lambda (##inline ##vcore.car (bruijn ##.x.152 5 1))) ((bruijn ##.k.500 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k73, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.47.210 5 1) (bruijn ##.k.487 2 0) (bruijn ##.expr.49.212 3 1) (bruijn ##.x.488 1 0) (bruijn ##.x.489 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 24 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k92) (bruijn ##.bodies.46.214 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k92, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.49.212 1 1))) ((bruijn ##.x.312 23 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k91) (bruijn ##.args.45.213 1 2)) ((bruijn ##.k.487 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k91, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.218 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.51.218 0 0))) ((bruijn ##.kk.48.215 3 1) (bruijn ##.k.479 1 0) (##inline ##vcore.cdr (bruijn ##.expr.49.212 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.50.216 2 0)) (bruijn ##.args.45.213 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.51.218 0 0)) (bruijn ##.bodies.46.214 6 3))) ((bruijn ##.k.479 1 0) #f)) ((bruijn ##.k.479 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.216 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k96) (##inline ##vcore.cdr (bruijn ##.expr.50.216 1 0))) ((bruijn ##.k.479 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k96, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.47.210 9 1) (bruijn ##.k.474 4 0) (bruijn ##.expr.49.212 7 1) (bruijn ##.x.476 1 0) (bruijn ##.x.477 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 28 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k99) (bruijn ##.bodies.46.214 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k99, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 27 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k98) (bruijn ##.args.45.213 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k98, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k95) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k97))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k97, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k94) (##inline ##vcore.car (bruijn ##.expr.49.212 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k94, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.473 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0lambda26))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0lambda26, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.471 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0lambda25) (bruijn ##.loop.211 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0lambda25, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k90) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k93))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k90, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211_V0k93, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.loop.211) (bruijn ##.loop.211 0 0) (bruijn ##.k.470 1 0) (##inline ##vcore.cdr (bruijn ##.expr.43.207 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211, self))));
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Dloop_D211(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.469 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda24))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda24, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.493 0 0) (bruijn ##.k.491 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.494 1 0) (##inline ##vcore.cons '##qualified-case-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.43.207 3 0)) (bruijn ##.x.496 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__case__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.iter-lambda.155) (bruijn ##.iter-lambda.155 10 1) (bruijn ##.k.497 0 0) (bruijn ##.arg.223 0 1) '() (bruijn ##.body.224 0 2) (bruijn ##.env.153 11 2))
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.314 18 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k101) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda29) (bruijn ##.args.221 1 2) (bruijn ##.bodies.222 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k101, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda29, self)))),
      statics->vars[2],
      statics->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda27, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.220 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k100) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda28) (bruijn ##.kk.24.175 7 1)) ((bruijn ##.k.491 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k100, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda28, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.207 0 0)) (##vcore.call-with-values (bruijn ##.k.466 2 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda23) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda27)) ((bruijn ##.k.466 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda23, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda27, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.467 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k89) (##inline ##vcore.cdr (bruijn ##.x.152 7 1))) ((bruijn ##.k.466 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k89, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.152 6 1)) ((bruijn ##.x.307 21 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k88) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.x.152 6 1))) ((bruijn ##.k.466 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k88, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.462 0 0) (bruijn ##.k.460 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.463 0 0) (bruijn ##.x.152 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.461 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k105) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda30) (bruijn ##.kk.24.175 6 1)) ((bruijn ##.k.460 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k105, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda30, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.152 7 1)) ((bruijn ##.x.307 22 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k104) '##foreign.function (##inline ##vcore.car (bruijn ##.x.152 7 1))) ((bruijn ##.k.460 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k104, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.456 0 0) (bruijn ##.k.454 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.457 0 0) (bruijn ##.x.152 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.455 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k109) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda31) (bruijn ##.kk.24.175 7 1)) ((bruijn ##.k.454 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k109, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda31, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.152 8 1)) ((bruijn ##.x.307 23 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k108) '##intrinsic (##inline ##vcore.car (bruijn ##.x.152 8 1))) ((bruijn ##.k.454 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k108, self)))),
      _V10intrinsic,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.450 0 0) (bruijn ##.k.448 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.451 0 0) (bruijn ##.x.152 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.449 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k113) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda32) (bruijn ##.kk.24.175 8 1)) ((bruijn ##.k.448 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k113, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda32, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.152 9 1)) ((bruijn ##.x.307 24 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k112) '##basic-intrinsic (##inline ##vcore.car (bruijn ##.x.152 9 1))) ((bruijn ##.k.448 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k112, self)))),
      _V10basic__intrinsic,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.443 0 0) (bruijn ##.k.439 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.444 0 0) (bruijn ##.x.152 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.229 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.56.229 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k118) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda33) (bruijn ##.kk.24.175 10 1)) ((bruijn ##.k.439 2 0) #f)) ((bruijn ##.k.439 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k118, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda33, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.440 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k117) (##inline ##vcore.cdr (bruijn ##.x.152 11 1))) ((bruijn ##.k.439 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k117, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.152 10 1)) ((bruijn ##.x.307 25 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k116) 'quote (##inline ##vcore.car (bruijn ##.x.152 10 1))) ((bruijn ##.k.439 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k116, self)))),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.436 0 0) (bruijn ##.k.435 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.311 23 0) (bruijn ##.k.437 0 0) (##string ##.string.718))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D718.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.x.152 11 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k121) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda34) (bruijn ##.kk.24.175 9 1)) ((bruijn ##.k.435 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k121, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda34, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.716) ((##vcore.symbol? (bruijn ##.x.152 13 1))) (if (bruijn ##.reg.716 0 0) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116 ##.iter-symbol.154) (bruijn ##.iter-symbol.154 12 0) (bruijn ##.k.432 1 0) (bruijn ##.x.152 13 1) (bruijn ##.env.153 13 2)) ((bruijn ##.k.432 1 0) (bruijn ##.x.152 13 1))))
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
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 13-1, 1));
}
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.422 9 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda35) (bruijn ##.kk.24.175 9 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda35, self)))),
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k120) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k122))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k120, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k122, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k115) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k119))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k115, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k119, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k111) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k114))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k111, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k114, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k107) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k110))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k107, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k110, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k103) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k106))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k106, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k87) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k102))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k87, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k102, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k72) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k86))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k72, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k86, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k64) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k71))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k64, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k71, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k57) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k63))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0k63, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155")) (##vcore.call/cc (bruijn ##.k.394 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda13)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__symbol_D154, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V10_Diter__lambda_D155, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116_V0lambda13, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.555 10 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.558 2 0) (bruijn ##.x.559 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->up->vars[0],
        _var0)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.310 21 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k131) (bruijn ##.new-defines.238 4 0) (##inline ##vcore.cons (bruijn ##.x.561 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k131, self)))),
      statics->up->up->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 9 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k130) (bruijn ##.body.232 8 3) (bruijn ##.new-env.239 3 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k130, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.314 15 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k129) (bruijn ##.x.308 21 0) (bruijn ##.new-args.235 6 0) (bruijn ##.vals.237 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k129, self)))),
      VGetArg(statics, 21-1, 0),
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k128) (bruijn ##.dummy.63.240 1 2) (bruijn ##.x.562 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k128, self)))),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.313 15 0) (bruijn ##.k.563 0 0) (bruijn ##.defines.231 6 2) (bruijn ##.env.236 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      _var0,
      VGetArg(statics, 6-1, 2),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.564 1 0) (bruijn ##.new-env.239 2 1) (bruijn ##.new-env.62.242 1 2))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k132) (bruijn ##.new-defines.238 1 0) (bruijn ##.new-defines.61.241 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k132, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k127) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda36) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda37)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k127, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda36, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda37, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 5 7) (bruijn ##.k.566 0 0) (bruijn ##.val.243 0 1) (bruijn ##.env.236 1 0))
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.314 11 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k126) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda38) (bruijn ##.vals.233 3 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k126, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0lambda38, self)))),
      statics->up->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k125) (##inline ##vcore.cons (bruijn ##.x.567 0 0) (bruijn ##.env.234 2 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k125, self)), 1,
      VInlineCons2(runtime,
        _var0,
        statics->up->vars[5]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.314 9 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k124) (##intrinsic ##vcore.cons) (bruijn ##.args.230 1 1) (bruijn ##.new-args.235 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k124, self)))),
      _V40_V10vcore_Dcons,
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117, got ~D~N"
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
  // ((bruijn ##.x.314 8 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k123) (bruijn ##.x.315 7 0) (bruijn ##.args.230 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117_V0k123, self)))),
      VGetArg(statics, 7-1, 0),
      _var1);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D118_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D118_V0lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 2 7) (bruijn ##.k.569 0 0) (bruijn ##.arg.246 0 1) (bruijn ##.env.245 1 2))
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D118, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.314 8 0) (bruijn ##.k.568 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D118_V0lambda39) (bruijn ##.args.244 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D118_V0lambda39, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.649 0 0) (bruijn ##.k.644 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.650 2 0) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (bruijn ##.x.652 1 0) (##inline ##vcore.cons (bruijn ##.x.654 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 9 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k140) (##inline ##vcore.car (bruijn ##.expr.68.254 2 0)) (bruijn ##.env.248 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k140, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 8 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k139) (##inline ##vcore.car (bruijn ##.expr.67.252 2 0)) (bruijn ##.env.248 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k139, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.68.254 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.68.254 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k138) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda41) (bruijn ##.kk.64.249 4 1)) ((bruijn ##.k.644 3 0) #f)) ((bruijn ##.k.644 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k138, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda41, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.252 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k137) (##inline ##vcore.cdr (bruijn ##.expr.67.252 0 0))) ((bruijn ##.k.644 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k137, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.645 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k136) (##inline ##vcore.cdr (bruijn ##.expr.247 4 1))) ((bruijn ##.k.644 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k136, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.247 3 1)) ((bruijn ##.x.307 18 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k135) 'begin (##inline ##vcore.car (bruijn ##.expr.247 3 1))) ((bruijn ##.k.644 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k135, self)))),
      _V0begin,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.633 0 0) (bruijn ##.k.627 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.634 3 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.636 2 0) (##inline ##vcore.cons (bruijn ##.x.638 1 0) (##inline ##vcore.cons (bruijn ##.x.640 0 0) '())))))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 12 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k150) (##inline ##vcore.car (bruijn ##.expr.72.261 3 0)) (bruijn ##.env.248 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k150, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 11 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k149) (##inline ##vcore.car (bruijn ##.expr.71.259 3 0)) (bruijn ##.env.248 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k149, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 10 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k148) (##inline ##vcore.car (bruijn ##.expr.70.257 3 0)) (bruijn ##.env.248 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k148, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.261 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.72.261 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k147) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda42) (bruijn ##.kk.64.249 6 1)) ((bruijn ##.k.627 4 0) #f)) ((bruijn ##.k.627 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k147, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda42, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.259 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k146) (##inline ##vcore.cdr (bruijn ##.expr.71.259 0 0))) ((bruijn ##.k.627 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k146, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.257 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k145) (##inline ##vcore.cdr (bruijn ##.expr.70.257 0 0))) ((bruijn ##.k.627 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k145, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.628 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k144) (##inline ##vcore.cdr (bruijn ##.expr.247 5 1))) ((bruijn ##.k.627 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k144, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.247 4 1)) ((bruijn ##.x.307 19 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k143) 'if (##inline ##vcore.car (bruijn ##.expr.247 4 1))) ((bruijn ##.k.627 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k143, self)))),
      _V0if,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.618 0 0) (bruijn ##.k.613 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.619 2 0) (##inline ##vcore.cons 'or (##inline ##vcore.cons (bruijn ##.x.621 1 0) (##inline ##vcore.cons (bruijn ##.x.623 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 11 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k158) (##inline ##vcore.car (bruijn ##.expr.75.266 2 0)) (bruijn ##.env.248 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k158, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 10 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k157) (##inline ##vcore.car (bruijn ##.expr.74.264 2 0)) (bruijn ##.env.248 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k157, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.266 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.75.266 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k156) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda43) (bruijn ##.kk.64.249 6 1)) ((bruijn ##.k.613 3 0) #f)) ((bruijn ##.k.613 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k156, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda43, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.264 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k155) (##inline ##vcore.cdr (bruijn ##.expr.74.264 0 0))) ((bruijn ##.k.613 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k155, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.614 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k154) (##inline ##vcore.cdr (bruijn ##.expr.247 6 1))) ((bruijn ##.k.613 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k154, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.247 5 1)) ((bruijn ##.x.307 20 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k153) 'or (##inline ##vcore.car (bruijn ##.expr.247 5 1))) ((bruijn ##.k.613 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k153, self)))),
      _V0or,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.81.271 5 1) (bruijn ##.k.600 2 0) (bruijn ##.expr.83.273 3 1) (bruijn ##.x.601 1 0) (bruijn ##.x.602 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 24 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k165) (bruijn ##.vals.80.275 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k165, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.83.273 1 1))) ((bruijn ##.x.312 23 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k164) (bruijn ##.xs.79.274 1 2)) ((bruijn ##.k.600 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k164, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.85.279 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.85.279 0 0))) ((bruijn ##.kk.82.276 3 1) (bruijn ##.k.592 1 0) (##inline ##vcore.cdr (bruijn ##.expr.83.273 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.84.277 2 0)) (bruijn ##.xs.79.274 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.85.279 0 0)) (bruijn ##.vals.80.275 6 3))) ((bruijn ##.k.592 1 0) #f)) ((bruijn ##.k.592 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.277 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k169) (##inline ##vcore.cdr (bruijn ##.expr.84.277 1 0))) ((bruijn ##.k.592 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k169, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.81.271 9 1) (bruijn ##.k.587 4 0) (bruijn ##.expr.83.273 7 1) (bruijn ##.x.589 1 0) (bruijn ##.x.590 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 28 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k172) (bruijn ##.vals.80.275 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k172, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.312 27 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k171) (bruijn ##.xs.79.274 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k171, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k168) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k170))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k168, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k170, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k167) (##inline ##vcore.car (bruijn ##.expr.83.273 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k167, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.586 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0lambda47))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0lambda47, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.584 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0lambda46) (bruijn ##.loop.272 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0lambda46, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k163) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k166))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k163, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272_V0k166, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119 ##.loop.272) (bruijn ##.loop.272 0 0) (bruijn ##.k.583 1 0) (##inline ##vcore.car (bruijn ##.expr.77.269 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272, self))));
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V10_Dloop_D272(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.582 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda45))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda45, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.608 0 0) (bruijn ##.k.604 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-letrec.117) (bruijn ##.iter-letrec.117 12 5) (bruijn ##.k.609 0 0) (bruijn ##.xs.282 2 2) '() (##inline ##vcore.car (bruijn ##.expr.86.284 1 0)) (bruijn ##.vals.283 2 3) (bruijn ##.env.248 11 2))
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117(runtime, _closure->env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.284 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.86.284 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k174) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda49) (bruijn ##.kk.64.249 8 1)) ((bruijn ##.k.604 1 0) #f)) ((bruijn ##.k.604 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k174, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda49, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda48, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.281 0 1)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k173) (##inline ##vcore.cdr (bruijn ##.expr.77.269 1 0))) ((bruijn ##.k.604 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k173, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.269 0 0)) (##vcore.call-with-values (bruijn ##.k.579 2 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda44) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda48)) ((bruijn ##.k.579 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda44, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda48, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.580 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k162) (##inline ##vcore.cdr (bruijn ##.expr.247 7 1))) ((bruijn ##.k.579 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k162, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.247 6 1)) ((bruijn ##.x.307 21 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k161) 'letrec (##inline ##vcore.car (bruijn ##.expr.247 6 1))) ((bruijn ##.k.579 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k161, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-combination.118) (bruijn ##.iter-combination.118 8 6) (bruijn ##.k.577 0 0) (bruijn ##.expr.247 7 1) (bruijn ##.env.248 7 2))
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D118(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.572 4 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda50) (bruijn ##.kk.64.249 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda50, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k160) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k175))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k160, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k175, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k152) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k159))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k152, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k159, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k142) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k151))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k142, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k151, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k134) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k141))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k134, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k141, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.571 0 0) (##vcore.call/cc (bruijn ##.k.570 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda40)) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.116) (bruijn ##.iter-atom.116 2 4) (bruijn ##.k.570 1 0) (bruijn ##.expr.247 1 1) (bruijn ##.env.248 1 2)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0lambda40, self)))));
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.application?.112) (bruijn ##.application?.112 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k133) (bruijn ##.expr.247 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119_V0k133, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D112(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.119) (bruijn ##.iter.119 1 7) (bruijn ##.k.657 0 0) (bruijn ##.expr.286 0 1) '())
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.706 0 0) (bruijn ##.k.704 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.707 0 0) (bruijn ##.expr.111 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.705 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k178) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52) (bruijn ##.kk.0.287 2 1)) ((bruijn ##.k.704 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k178, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda52, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111 3 1)) ((bruijn ##.x.307 16 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k177) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.111 3 1))) ((bruijn ##.k.704 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k177, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.696 0 0) (bruijn ##.k.691 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.697 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.291 3 0)) (##inline ##vcore.cons (bruijn ##.x.700 0 0) '()))))
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
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.120) (bruijn ##.alpha-convert-impl.120 7 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k185) (##inline ##vcore.car (bruijn ##.expr.5.293 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k185, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D120(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.293 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.293 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda53) (bruijn ##.kk.0.287 5 1)) ((bruijn ##.k.691 3 0) #f)) ((bruijn ##.k.691 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda53, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.291 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183) (##inline ##vcore.cdr (bruijn ##.expr.4.291 0 0))) ((bruijn ##.k.691 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
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
  // (if (bruijn ##.p.692 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k182) (##inline ##vcore.cdr (bruijn ##.expr.111 5 1))) ((bruijn ##.k.691 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k182, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111 4 1)) ((bruijn ##.x.307 17 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k181) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.111 4 1))) ((bruijn ##.k.691 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k181, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.683 0 0) (bruijn ##.k.678 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.684 1 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.7.296 3 0)) (##inline ##vcore.cons (bruijn ##.x.687 0 0) '()))))
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
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.120) (bruijn ##.alpha-convert-impl.120 8 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k192) (##inline ##vcore.car (bruijn ##.expr.8.298 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k192, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D120(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.298 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.8.298 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda54) (bruijn ##.kk.0.287 6 1)) ((bruijn ##.k.678 3 0) #f)) ((bruijn ##.k.678 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda54, self)))),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.296 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190) (##inline ##vcore.cdr (bruijn ##.expr.7.296 0 0))) ((bruijn ##.k.678 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
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
  // (if (bruijn ##.p.679 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k189) (##inline ##vcore.cdr (bruijn ##.expr.111 6 1))) ((bruijn ##.k.678 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k189, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111 5 1)) ((bruijn ##.x.307 18 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k188) 'define (##inline ##vcore.car (bruijn ##.expr.111 5 1))) ((bruijn ##.k.678 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k188, self)))),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.670 0 0) (bruijn ##.k.665 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.671 1 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.10.301 3 0)) (##inline ##vcore.cons (bruijn ##.x.674 0 0) '()))))
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
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.120) (bruijn ##.alpha-convert-impl.120 9 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k199) (##inline ##vcore.car (bruijn ##.expr.11.303 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k199, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D120(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.303 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.303 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k198) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda55) (bruijn ##.kk.0.287 7 1)) ((bruijn ##.k.665 3 0) #f)) ((bruijn ##.k.665 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k198, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda55, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.301 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k197) (##inline ##vcore.cdr (bruijn ##.expr.10.301 0 0))) ((bruijn ##.k.665 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k197, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.666 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k196) (##inline ##vcore.cdr (bruijn ##.expr.111 7 1))) ((bruijn ##.k.665 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k196, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111 6 1)) ((bruijn ##.x.307 19 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k195) 'define-constant (##inline ##vcore.car (bruijn ##.expr.111 6 1))) ((bruijn ##.k.665 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k195, self)))),
      _V0define__constant,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
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
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.120) (bruijn ##.alpha-convert-impl.120 6 8) (bruijn ##.k.663 0 0) (bruijn ##.expr.111 7 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 8));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D120(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.658 4 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda56) (bruijn ##.kk.0.287 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda56, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k194) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k200))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k194, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k200, self)))));
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k187) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k193))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k187, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k193, self)))));
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k180) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k186))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k180, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k186, self)))));
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k176) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k179))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k176, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k179, self)))));
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
  // (letrec 9 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D112") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D113") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D114") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D118") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D120")) (##vcore.call/cc (bruijn ##.k.325 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda51)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D112, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D113, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D114, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D115, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D116, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D117, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D118, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D119, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D120, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda51, self)))));
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
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert")) ((bruijn ##.k.306 20 0) (##inline ##vcore.cons (##inline ##vcore.cons 'alpha-convert (bruijn ##.alpha-convert.108 0 1)) '())))
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
  // ((bruijn ##..vcore.import.87 11 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k19) 'memv)
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
  // ((bruijn ##..vcore.import.87 10 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k18) 'assv)
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
  // ((bruijn ##..vcore.import.87 9 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k17) 'error)
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
  // ((bruijn ##..vcore.import.87 8 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k16) 'gensym)
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
  // ((bruijn ##..vcore.import.87 7 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k15) 'map)
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
  // ((bruijn ##..vcore.import.87 6 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k14) 'values)
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
  // ((bruijn ##..vcore.import.87 5 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k13) 'reverse)
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
  // ((bruijn ##..vcore.import.87 4 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k12) 'compiler-error)
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
  // ((bruijn ##..vcore.import.87 3 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k11) 'append)
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
  // ((bruijn ##..vcore.import.87 2 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k10) 'lookup-intrinsic)
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
  // ((bruijn ##..vcore.import.87 1 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k9) 'list)
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
  // ((bruijn ##..vcore.import.87 0 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k8) 'equal?)
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k7) (##string ##.string.719) (bruijn ##.x.710 5 0) (bruijn ##.x.711 4 0) (bruijn ##.x.712 3 0) (bruijn ##.x.713 2 0) (bruijn ##.x.714 1 0) (bruijn ##.x.715 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 8,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D719.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k6) (##string ##.string.720))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k5) (##string ##.string.721))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D721.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k4) (##string ##.string.722))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D722.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k3) (##string ##.string.723))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D723.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k2) (##string ##.string.724))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D724.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k1) (##string ##.string.725))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D725.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0alpha__convert_V20 = (VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0lambda1;
