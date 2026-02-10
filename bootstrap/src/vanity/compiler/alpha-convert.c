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

VWEAK VWORD _V0alpha__convert;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0alpha__convert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "alpha-convert" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D765 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D763 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D762 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D761 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D759 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D758 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
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
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D757 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0alpha__convert = VEncodePointer(VInternSymbol(-1170573105, &_VW_V0alpha__convert.sym), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VInternSymbol(471311928, &_VW_V0define__constant.sym), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
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
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D131, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128, _var0, _var1, _var2, _var3, _var4, _var5);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D124, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert, _var0, _var1);
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0alpha__convert_V20_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.344 7 0) (##string ##.string.757) (bruijn ##.x.345 0 0) 'equal? 'list 'lookup-intrinsic 'append 'compiler-error 'reverse 'values 'map 'gensym 'error 'assv 'memv)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 15,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D757.sym, VPOINTER_OTHER),
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
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0alpha__convert_V20_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k7) (bruijn ##.x.346 5 0) (bruijn ##.x.347 4 0) (bruijn ##.x.348 3 0) (bruijn ##.x.349 2 0) (bruijn ##.x.350 1 0) (bruijn ##.x.351 0 0))
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
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0alpha__convert_V20_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k6) (##string ##.string.758))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D758.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0alpha__convert_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k5) (##string ##.string.759))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D759.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0alpha__convert_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k4) (##string ##.string.760))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D760.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0alpha__convert_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k3) (##string ##.string.761))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D761.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0alpha__convert_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k2) (##string ##.string.762))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D762.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0alpha__convert_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_V0k1) (##string ##.string.763))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D763.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.354 1 0) (##inline ##vcore.not (bruijn ##.x.356 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.x.132 0 1)) ((bruijn ##.memv.112 4 12) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123_V0k8) (##inline ##vcore.car (bruijn ##.x.132 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons '##qualified-lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##qualified-case-lambda (##inline ##vcore.qcons '##instrinsic (##inline ##vcore.qcons '##basic-intrinsic (##inline ##vcore.qcons '##foreign.function '()))))))))) ((bruijn ##.k.354 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123_V0k8, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D124_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D124_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D124_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.366 1 0) (##inline ##vcore.not (bruijn ##.x.368 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.x.133 0 1)) ((bruijn ##.memv.112 4 12) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D124_V0k9) (##inline ##vcore.car (bruijn ##.x.133 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons '##qualified-lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##qualified-case-lambda (##inline ##vcore.qcons '##instrinsic (##inline ##vcore.qcons '##basic-intrinsic (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'or (##inline ##vcore.qcons 'letrec (##inline ##vcore.qcons '##letrec '())))))))))))))) ((bruijn ##.k.366 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D124_V0k9, self)))),
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
        VInlineCons2(runtime,
        _V10letrec,
        VNULL))))))))))))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.12.136 0 0) ((bruijn ##.k.383 1 0) (bruijn ##.x.12.136 0 0)) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.lookup-env.125) #f (bruijn ##.lookup-env.125 2 2) (bruijn ##.k.383 1 0) (bruijn ##.sym.134 1 1) (##inline ##vcore.cdr (bruijn ##.env.135 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.env.135 0 2)) ((bruijn ##.k.383 0 0) #f) ((bruijn ##.assv.111 4 11) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125_V0k10) (bruijn ##.sym.134 0 1) (##inline ##vcore.car (bruijn ##.env.135 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125_V0k10, self)))),
      _var1,
      VInlineCar2(runtime,
        _var2));
}
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k11(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.110 5 10) (bruijn ##.k.388 0 0) (##string ##.string.764))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 10)), 2,
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.18.143 5 1) (bruijn ##.k.406 2 0) (bruijn ##.expr.20.145 3 1) (bruijn ##.x.407 1 0) (bruijn ##.x.408 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.106 11 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k14) (bruijn ##.vals.17.147 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k14, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.20.145 1 1))) ((bruijn ##.reverse.106 10 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k13) (bruijn ##.xs.16.146 1 2)) ((bruijn ##.k.406 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k13, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.152 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.152 0 0))) ((bruijn ##.kk.19.148 4 1) (bruijn ##.k.397 2 0) (##inline ##vcore.cdr (bruijn ##.expr.20.145 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.22.150 1 0)) (bruijn ##.xs.16.146 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.23.152 0 0)) (bruijn ##.vals.17.147 6 3))) ((bruijn ##.k.397 2 0) #f)) ((bruijn ##.k.397 2 0) #f))
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
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[0]),
        VGetArg(statics, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.150 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k19) (##inline ##vcore.cdr (bruijn ##.expr.22.150 0 0))) ((bruijn ##.k.397 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k19, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.149 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k18) (##inline ##vcore.cdr (bruijn ##.expr.21.149 1 0))) ((bruijn ##.k.397 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k18, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.18.143 7 1) (bruijn ##.k.393 3 0) (bruijn ##.expr.20.145 5 1) (bruijn ##.x.394 1 0) (bruijn ##.x.395 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.106 13 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k22) (bruijn ##.vals.17.147 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k22, self)))),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k20(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.106 12 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k21) (bruijn ##.xs.16.146 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k21, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k17) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k20))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k17, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k20, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k16) (##inline ##vcore.car (bruijn ##.expr.20.145 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k16, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.392 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0lambda8))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0lambda8, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k15(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.391 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0lambda7) (bruijn ##.loop.144 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0lambda7, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k12) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k15))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k12, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144_V0k15, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-defines.126 ##.loop.144) #f (bruijn ##.loop.144 0 0) (bruijn ##.k.390 1 0) (bruijn ##.defines.138 4 1) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V10_Dloop_D144(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.389 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda6))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda6, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.412 0 0) (bruijn ##.k.410 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.107 12 7) (bruijn ##.k.413 5 0) (bruijn ##.x.414 0 0) (bruijn ##.env.158 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 7)), 3,
      VGetArg(statics, 5-1, 0),
      _var0,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.k.415 0 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.x.160 0 1) (##inline ##vcore.cons (bruijn ##.val.161 0 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        _var2,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.108 11 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k28) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda11) (bruijn ##.new-xs.157 3 0) (bruijn ##.vals.159 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k28, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda11, self)))),
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 8 7) (bruijn ##.k.418 0 0) (bruijn ##.val.162 0 1) (bruijn ##.env.158 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 7));
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.108 10 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k27) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda12) (bruijn ##.vals.156 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k27, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda12, self)))),
      statics->up->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k26) (##inline ##vcore.cons (bruijn ##.x.419 0 0) (bruijn ##.env.139 5 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k26, self)), 1,
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 5-1, 2)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.108 8 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k25) (##intrinsic ##vcore.cons) (bruijn ##.xs.155 2 2) (bruijn ##.new-xs.157 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k25, self)))),
      _V40_V10vcore_Dcons,
      statics->up->vars[2],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.108 7 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k24) (bruijn ##.gensym.109 7 9) (bruijn ##.xs.155 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k24, self)))),
      VGetArg(statics, 7-1, 9),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda9, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.154 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k23) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda10) (bruijn ##.kk.13.140 1 1)) ((bruijn ##.k.410 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k23, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda10, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k11) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda9))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0k11, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda5, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda9, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.387 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.422 0 0) ((bruijn ##.k.421 2 0) (bruijn ##.sym.167 2 1)) ((bruijn ##.k.421 2 0) (bruijn ##.sym.167 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.59.169 0 0) ((bruijn ##.k.421 1 0) (##inline ##vcore.cdr (bruijn ##.x.59.169 0 0))) ((bruijn ##.lookup-intrinsic.103 7 3) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165_V0k30) (bruijn ##.sym.167 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165_V0k30, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.lookup-env.125) #f (bruijn ##.lookup-env.125 3 2) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165_V0k29) (bruijn ##.sym.167 0 1) (bruijn ##.env.168 0 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165_V0k29, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.424 2 0) (##inline ##vcore.cons (bruijn ##.x.427 1 0) (bruijn ##.x.428 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.iter-lambda.166 ##.genargs.175) #f (bruijn ##.genargs.175 2 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175_V0k32) (##inline ##vcore.cdr (bruijn ##.args.177 1 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175_V0k32, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.177 0 1)) ((bruijn ##.k.424 0 0) '()) (if (##inline ##vcore.pair? (bruijn ##.args.177 0 1)) ((bruijn ##.gensym.109 8 9) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175_V0k31) (##inline ##vcore.car (bruijn ##.args.177 0 1))) ((bruijn ##.gensym.109 8 9) (bruijn ##.k.424 0 0) (bruijn ##.args.177 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175_V0k31, self)))),
      VInlineCar2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 9)), 2,
      _var0,
      _var1);
}
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.431 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.args.178 1 1)) (bruijn ##.x.435 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.178 0 1)) ((bruijn ##.k.431 0 0) '()) (if (##inline ##vcore.pair? (bruijn ##.args.178 0 1)) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.iter-lambda.166 ##.dedot.176) #f (bruijn ##.dedot.176 1 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176_V0k33) (##inline ##vcore.cdr (bruijn ##.args.178 0 1))) ((bruijn ##.k.431 0 0) (##inline ##vcore.cons (bruijn ##.args.178 0 1) '()))))
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
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176_V0k33, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176(runtime, _closure_env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.423 9 0) (##inline ##vcore.cons (bruijn ##.newargs.179 7 0) (bruijn ##.x.437 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.104 14 4) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k41) (bruijn ##.new-defines.181 2 0) (##inline ##vcore.cons (bruijn ##.x.439 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k41, self)))),
      statics->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k39(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 10 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k40) (bruijn ##.body.173 7 3) (bruijn ##.new-env.182 1 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k40, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 3);
    VWORD _arg2 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k39) (bruijn ##.dummy.62.183 1 2) (bruijn ##.x.440 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k39, self)))),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.107 13 7) (bruijn ##.k.441 0 0) (bruijn ##.defines.172 7 2) (##inline ##vcore.cons (bruijn ##.x.443 2 0) (bruijn ##.env.174 7 4)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 7)), 3,
      _var0,
      VGetArg(statics, 7-1, 2),
      VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 7-1, 4)));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (bruijn ##.k.442 0 0) (bruijn ##.new-env.182 1 1) (bruijn ##.new-env.61.185 0 2))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      self->vars[0],
      VEncodeInt(1l), VEncodeInt(1l),
      self->vars[2]
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k42) (bruijn ##.new-defines.181 1 0) (bruijn ##.new-defines.60.184 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k42, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k38) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0lambda13) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0lambda14)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k38, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0lambda13, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0lambda14, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.108 10 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k37) (##intrinsic ##vcore.cons) (bruijn ##.x.444 1 0) (bruijn ##.x.445 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k37, self)))),
      _V40_V10vcore_Dcons,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.iter-lambda.166 ##.dedot.176) #f (bruijn ##.dedot.176 2 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k36) (bruijn ##.newargs.179 1 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k36, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.iter-lambda.166 ##.dedot.176) #f (bruijn ##.dedot.176 1 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k35) (bruijn ##.args.171 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k35, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166, got ~D~N"
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
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.iter-lambda.166 ##.genargs.175) #f (bruijn ##.genargs.175 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k34) (bruijn ##.args.171 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Ddedot_D176, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V0k34, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166_V10_Dgenargs_D175(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.565 0 0) (bruijn ##.k.560 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.566 1 0) (##inline ##vcore.cons 'lambda (bruijn ##.x.567 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.iter-lambda.166) #f (bruijn ##.iter-lambda.166 6 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k48) (##inline ##vcore.car (bruijn ##.expr.27.189 2 0)) '() (##inline ##vcore.car (bruijn ##.expr.28.191 1 0)) (bruijn ##.env.164 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k48, self))));
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.191 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.191 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k47) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda16) (bruijn ##.kk.24.186 4 1)) ((bruijn ##.k.560 3 0) #f)) ((bruijn ##.k.560 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda16, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.189 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k46) (##inline ##vcore.cdr (bruijn ##.expr.27.189 0 0))) ((bruijn ##.k.560 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k46, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.561 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k45) (##inline ##vcore.cdr (bruijn ##.x.163 4 1))) ((bruijn ##.k.560 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k45, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.163 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k44) 'lambda (##inline ##vcore.car (bruijn ##.x.163 3 1))) ((bruijn ##.k.560 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k44, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.552 0 0) (bruijn ##.k.545 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.553 1 0) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.30.194 5 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.31.196 4 0)) (bruijn ##.x.556 0 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        _var0))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.iter-lambda.166) #f (bruijn ##.iter-lambda.166 8 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k57) (##inline ##vcore.car (bruijn ##.expr.32.198 2 0)) '() (##inline ##vcore.car (bruijn ##.expr.33.200 1 0)) (bruijn ##.env.164 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k57, self))));
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.200 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.200 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k56) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda17) (bruijn ##.kk.24.186 6 1)) ((bruijn ##.k.545 5 0) #f)) ((bruijn ##.k.545 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k56, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda17, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.198 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k55) (##inline ##vcore.cdr (bruijn ##.expr.32.198 0 0))) ((bruijn ##.k.545 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k55, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.196 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k54) (##inline ##vcore.cdr (bruijn ##.expr.31.196 0 0))) ((bruijn ##.k.545 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k54, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.194 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k53) (##inline ##vcore.cdr (bruijn ##.expr.30.194 0 0))) ((bruijn ##.k.545 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k53, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.546 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k52) (##inline ##vcore.cdr (bruijn ##.x.163 4 1))) ((bruijn ##.k.545 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k52, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.163 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k51) '##qualified-lambda (##inline ##vcore.car (bruijn ##.x.163 3 1))) ((bruijn ##.k.545 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k51, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.38.204 5 1) (bruijn ##.k.533 2 0) (bruijn ##.expr.40.206 3 1) (bruijn ##.x.534 1 0) (bruijn ##.x.535 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.106 14 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k63) (bruijn ##.bodies.37.208 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k63, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.40.206 1 1))) ((bruijn ##.reverse.106 13 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k62) (bruijn ##.args.36.207 1 2)) ((bruijn ##.k.533 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k62, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.212 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.212 0 0))) ((bruijn ##.kk.39.209 3 1) (bruijn ##.k.525 1 0) (##inline ##vcore.cdr (bruijn ##.expr.40.206 5 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.41.210 2 0)) (bruijn ##.args.36.207 5 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.42.212 0 0)) (bruijn ##.bodies.37.208 5 3))) ((bruijn ##.k.525 1 0) #f)) ((bruijn ##.k.525 1 0) #f))
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
        VGetArg(statics, 5-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 5-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 5-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.210 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k67) (##inline ##vcore.cdr (bruijn ##.expr.41.210 1 0))) ((bruijn ##.k.525 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k67, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.38.204 7 1) (bruijn ##.k.521 3 0) (bruijn ##.expr.40.206 5 1) (bruijn ##.x.522 1 0) (bruijn ##.x.523 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.106 16 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k70) (bruijn ##.bodies.37.208 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k70, self)))),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k68(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.106 15 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k69) (bruijn ##.args.36.207 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k69, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k66) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k68))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k66, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k68, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k65) (##inline ##vcore.car (bruijn ##.expr.40.206 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k65, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.520 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0lambda21))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0lambda21, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.519 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0lambda20) (bruijn ##.loop.205 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0lambda20, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k61) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k64))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k61, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205_V0k64, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.loop.205) #f (bruijn ##.loop.205 0 0) (bruijn ##.k.518 1 0) (##inline ##vcore.cdr (bruijn ##.x.163 7 1)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1));
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D205(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.517 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda19))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda19, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.539 0 0) (bruijn ##.k.537 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.540 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.541 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.iter-lambda.166) #f (bruijn ##.iter-lambda.166 6 1) (bruijn ##.k.542 0 0) (bruijn ##.arg.217 0 1) '() (bruijn ##.body.218 0 2) (bruijn ##.env.164 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
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
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.108 10 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k72) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda24) (bruijn ##.args.215 1 2) (bruijn ##.bodies.216 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k72, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda24, self)))),
      statics->vars[2],
      statics->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda22, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.214 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k71) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda23) (bruijn ##.kk.24.186 3 1)) ((bruijn ##.k.537 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k71, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda23, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.516 0 0) (##vcore.call-with-values (bruijn ##.k.515 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda18) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda22)) ((bruijn ##.k.515 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda18, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda22, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.163 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k60) 'case-lambda (##inline ##vcore.car (bruijn ##.x.163 3 1))) ((bruijn ##.k.515 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k60, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.49.225 5 1) (bruijn ##.k.501 2 0) (bruijn ##.expr.51.227 3 1) (bruijn ##.x.502 1 0) (bruijn ##.x.503 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.106 16 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k80) (bruijn ##.bodies.48.229 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k80, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.51.227 1 1))) ((bruijn ##.reverse.106 15 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k79) (bruijn ##.args.47.228 1 2)) ((bruijn ##.k.501 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k79, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.233 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.53.233 0 0))) ((bruijn ##.kk.50.230 3 1) (bruijn ##.k.493 1 0) (##inline ##vcore.cdr (bruijn ##.expr.51.227 5 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.52.231 2 0)) (bruijn ##.args.47.228 5 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.53.233 0 0)) (bruijn ##.bodies.48.229 5 3))) ((bruijn ##.k.493 1 0) #f)) ((bruijn ##.k.493 1 0) #f))
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
        VGetArg(statics, 5-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 5-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 5-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.231 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k84) (##inline ##vcore.cdr (bruijn ##.expr.52.231 1 0))) ((bruijn ##.k.493 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k84, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.49.225 7 1) (bruijn ##.k.489 3 0) (bruijn ##.expr.51.227 5 1) (bruijn ##.x.490 1 0) (bruijn ##.x.491 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.106 18 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k87) (bruijn ##.bodies.48.229 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k87, self)))),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k85(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.106 17 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k86) (bruijn ##.args.47.228 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k86, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k83) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k85))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k83, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k85, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k82) (##inline ##vcore.car (bruijn ##.expr.51.227 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k82, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.488 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0lambda28))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0lambda28, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k81(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.487 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0lambda27) (bruijn ##.loop.226 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0lambda27, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k78) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k81))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k78, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226_V0k81, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.loop.226) #f (bruijn ##.loop.226 0 0) (bruijn ##.k.486 1 0) (##inline ##vcore.cdr (bruijn ##.expr.45.222 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Dloop_D226(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.485 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda26))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda26, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.507 0 0) (bruijn ##.k.505 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.508 1 0) (##inline ##vcore.cons '##qualified-case-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.44.220 4 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.45.222 3 0)) (bruijn ##.x.511 0 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__case__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        _var0))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda31, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.iter-lambda.166) #f (bruijn ##.iter-lambda.166 8 1) (bruijn ##.k.512 0 0) (bruijn ##.arg.238 0 1) '() (bruijn ##.body.239 0 2) (bruijn ##.env.164 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 1));
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
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.108 12 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k89) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda31) (bruijn ##.args.236 1 2) (bruijn ##.bodies.237 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k89, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda31, self)))),
      statics->vars[2],
      statics->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda29, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.235 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k88) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda30) (bruijn ##.kk.24.186 5 1)) ((bruijn ##.k.505 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k88, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda30, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.222 0 0)) (##vcore.call-with-values (bruijn ##.k.481 3 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda25) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda29)) ((bruijn ##.k.481 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda25, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda29, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.220 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k77) (##inline ##vcore.cdr (bruijn ##.expr.44.220 0 0))) ((bruijn ##.k.481 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k77, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.482 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k76) (##inline ##vcore.cdr (bruijn ##.x.163 4 1))) ((bruijn ##.k.481 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k76, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.163 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k75) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.x.163 3 1))) ((bruijn ##.k.481 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k75, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.477 0 0) (bruijn ##.k.475 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.478 0 0) (bruijn ##.x.163 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.476 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k93) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda32) (bruijn ##.kk.24.186 2 1)) ((bruijn ##.k.475 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k93, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda32, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.163 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k92) '##foreign.function (##inline ##vcore.car (bruijn ##.x.163 3 1))) ((bruijn ##.k.475 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k92, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.471 0 0) (bruijn ##.k.469 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.472 0 0) (bruijn ##.x.163 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.470 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k97) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda33) (bruijn ##.kk.24.186 2 1)) ((bruijn ##.k.469 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k97, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda33, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.163 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k96) '##intrinsic (##inline ##vcore.car (bruijn ##.x.163 3 1))) ((bruijn ##.k.469 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k96, self)))),
      _V10intrinsic,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.465 0 0) (bruijn ##.k.463 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.466 0 0) (bruijn ##.x.163 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.464 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k101) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda34) (bruijn ##.kk.24.186 2 1)) ((bruijn ##.k.463 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k101, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda34, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.163 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k100) '##basic-intrinsic (##inline ##vcore.car (bruijn ##.x.163 3 1))) ((bruijn ##.k.463 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k100, self)))),
      _V10basic__intrinsic,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.458 0 0) (bruijn ##.k.454 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.459 0 0) (bruijn ##.x.163 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.58.244 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.58.244 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k106) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda35) (bruijn ##.kk.24.186 3 1)) ((bruijn ##.k.454 2 0) #f)) ((bruijn ##.k.454 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k106, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda35, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.455 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k105) (##inline ##vcore.cdr (bruijn ##.x.163 4 1))) ((bruijn ##.k.454 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k105, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.163 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k104) 'quote (##inline ##vcore.car (bruijn ##.x.163 3 1))) ((bruijn ##.k.454 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k104, self)))),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.451 0 0) (bruijn ##.k.450 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.105 8 5) (bruijn ##.k.452 0 0) (##string ##.string.765))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 5)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D765.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.x.163 3 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k109) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda36) (bruijn ##.kk.24.186 1 1)) ((bruijn ##.k.450 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->up->vars[1]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k109, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda36, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.756) ((##vcore.symbol? (bruijn ##.x.163 4 1))) (if (bruijn ##.reg.756 0 0) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127 ##.iter-symbol.165) #f (bruijn ##.iter-symbol.165 3 0) (bruijn ##.k.447 1 0) (bruijn ##.x.163 4 1) (bruijn ##.env.164 4 2)) ((bruijn ##.k.447 1 0) (bruijn ##.x.163 4 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->up->vars[1]);
}
    }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k110(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.446 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda37) (bruijn ##.kk.24.186 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda37, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k107(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k108) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k110))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k108, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k110, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k102(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k103) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k107))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k107, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k98(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k99) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k102))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k99, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k102, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k95) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k98))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k98, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k91) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k94))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k94, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k73(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k74) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k90))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k90, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k59) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k73))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k59, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k73, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k49(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k50) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k58))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k50, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k58, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k43) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k49))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0k49, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166")) (##vcore.call/cc (bruijn ##.k.420 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda15)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__symbol_D165, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V10_Diter__lambda_D166, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127_V0lambda15, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.570 9 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.572 2 0) (bruijn ##.x.573 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->up->vars[0],
        _var0)));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.104 12 4) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k119) (bruijn ##.new-defines.253 3 0) (##inline ##vcore.cons (bruijn ##.x.575 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k119, self)))),
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 8 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k118) (bruijn ##.body.247 7 3) (bruijn ##.new-env.254 2 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k118, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 3);
    VWORD _arg2 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k116(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.108 10 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k117) (bruijn ##.list.102 10 2) (bruijn ##.new-args.250 5 0) (bruijn ##.vals.252 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k117, self)))),
      VGetArg(statics, 10-1, 2),
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k116) (bruijn ##.dummy.65.255 1 2) (bruijn ##.x.576 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k116, self)))),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.107 10 7) (bruijn ##.k.577 0 0) (bruijn ##.defines.246 6 2) (bruijn ##.env.251 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 3,
      _var0,
      VGetArg(statics, 6-1, 2),
      statics->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k120(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (bruijn ##.k.578 0 0) (bruijn ##.new-env.254 1 1) (bruijn ##.new-env.64.257 0 2))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      self->vars[0],
      VEncodeInt(1l), VEncodeInt(1l),
      self->vars[2]
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda39, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k120) (bruijn ##.new-defines.253 1 0) (bruijn ##.new-defines.63.256 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k120, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k115) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda38) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda39)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k115, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda38, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda39, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 5 7) (bruijn ##.k.579 0 0) (bruijn ##.val.258 0 1) (bruijn ##.env.251 1 0))
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.108 7 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k114) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda40) (bruijn ##.vals.248 3 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k114, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0lambda40, self)))),
      statics->up->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k113) (##inline ##vcore.cons (bruijn ##.x.580 0 0) (bruijn ##.env.249 2 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k113, self)), 1,
      VInlineCons2(runtime,
        _var0,
        statics->up->vars[5]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.108 5 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k112) (##intrinsic ##vcore.cons) (bruijn ##.args.245 1 1) (bruijn ##.new-args.250 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k112, self)))),
      _V40_V10vcore_Dcons,
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128, got ~D~N"
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
  // ((bruijn ##.map.108 4 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k111) (bruijn ##.gensym.109 4 9) (bruijn ##.args.245 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128_V0k111, self)))),
      statics->up->up->up->vars[9],
      _var1);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129_V0lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 2 7) (bruijn ##.k.582 0 0) (bruijn ##.arg.261 0 1) (bruijn ##.env.260 1 2))
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.map.108 4 8) (bruijn ##.k.581 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129_V0lambda41) (bruijn ##.args.259 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129_V0lambda41, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.693 0 0) (bruijn ##.k.688 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.694 2 0) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (bruijn ##.x.696 1 0) (##inline ##vcore.cons (bruijn ##.x.698 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 9 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k128) (##inline ##vcore.car (bruijn ##.expr.70.269 2 0)) (bruijn ##.env.263 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k128, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 8 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k127) (##inline ##vcore.car (bruijn ##.expr.69.267 2 0)) (bruijn ##.env.263 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k127, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.269 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.70.269 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k126) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda43) (bruijn ##.kk.66.264 4 1)) ((bruijn ##.k.688 3 0) #f)) ((bruijn ##.k.688 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k126, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda43, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.267 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k125) (##inline ##vcore.cdr (bruijn ##.expr.69.267 0 0))) ((bruijn ##.k.688 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k125, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.689 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k124) (##inline ##vcore.cdr (bruijn ##.expr.262 4 1))) ((bruijn ##.k.688 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k124, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.262 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k123) 'begin (##inline ##vcore.car (bruijn ##.expr.262 3 1))) ((bruijn ##.k.688 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k123, self)))),
      _V0begin,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.677 0 0) (bruijn ##.k.671 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.678 3 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.680 2 0) (##inline ##vcore.cons (bruijn ##.x.682 1 0) (##inline ##vcore.cons (bruijn ##.x.684 0 0) '())))))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 11 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k138) (##inline ##vcore.car (bruijn ##.expr.74.276 3 0)) (bruijn ##.env.263 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k138, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 10 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k137) (##inline ##vcore.car (bruijn ##.expr.73.274 3 0)) (bruijn ##.env.263 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k137, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 9 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k136) (##inline ##vcore.car (bruijn ##.expr.72.272 3 0)) (bruijn ##.env.263 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k136, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.276 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.74.276 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k135) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda44) (bruijn ##.kk.66.264 5 1)) ((bruijn ##.k.671 4 0) #f)) ((bruijn ##.k.671 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k135, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda44, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.274 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k134) (##inline ##vcore.cdr (bruijn ##.expr.73.274 0 0))) ((bruijn ##.k.671 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k134, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.272 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k133) (##inline ##vcore.cdr (bruijn ##.expr.72.272 0 0))) ((bruijn ##.k.671 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k133, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.672 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k132) (##inline ##vcore.cdr (bruijn ##.expr.262 4 1))) ((bruijn ##.k.671 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k132, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.262 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k131) 'if (##inline ##vcore.car (bruijn ##.expr.262 3 1))) ((bruijn ##.k.671 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k131, self)))),
      _V0if,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.662 0 0) (bruijn ##.k.657 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.663 2 0) (##inline ##vcore.cons 'or (##inline ##vcore.cons (bruijn ##.x.665 1 0) (##inline ##vcore.cons (bruijn ##.x.667 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 9 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k146) (##inline ##vcore.car (bruijn ##.expr.77.281 2 0)) (bruijn ##.env.263 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k146, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 8 7) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k145) (##inline ##vcore.car (bruijn ##.expr.76.279 2 0)) (bruijn ##.env.263 7 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 7));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k145, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.281 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.281 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k144) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda45) (bruijn ##.kk.66.264 4 1)) ((bruijn ##.k.657 3 0) #f)) ((bruijn ##.k.657 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k144, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda45, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.279 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k143) (##inline ##vcore.cdr (bruijn ##.expr.76.279 0 0))) ((bruijn ##.k.657 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k143, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.658 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k142) (##inline ##vcore.cdr (bruijn ##.expr.262 4 1))) ((bruijn ##.k.657 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k142, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.262 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k141) 'or (##inline ##vcore.car (bruijn ##.expr.262 3 1))) ((bruijn ##.k.657 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k141, self)))),
      _V0or,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.83.286 5 1) (bruijn ##.k.644 2 0) (bruijn ##.expr.85.288 3 1) (bruijn ##.x.645 1 0) (bruijn ##.x.646 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.106 15 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k153) (bruijn ##.vals.82.290 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k153, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.85.288 1 1))) ((bruijn ##.reverse.106 14 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k152) (bruijn ##.xs.81.289 1 2)) ((bruijn ##.k.644 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k152, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.294 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.87.294 0 0))) ((bruijn ##.kk.84.291 3 1) (bruijn ##.k.636 1 0) (##inline ##vcore.cdr (bruijn ##.expr.85.288 5 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.86.292 2 0)) (bruijn ##.xs.81.289 5 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.87.294 0 0)) (bruijn ##.vals.82.290 5 3))) ((bruijn ##.k.636 1 0) #f)) ((bruijn ##.k.636 1 0) #f))
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
        VGetArg(statics, 5-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 5-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 5-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.292 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k157) (##inline ##vcore.cdr (bruijn ##.expr.86.292 1 0))) ((bruijn ##.k.636 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k157, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.83.286 7 1) (bruijn ##.k.632 3 0) (bruijn ##.expr.85.288 5 1) (bruijn ##.x.633 1 0) (bruijn ##.x.634 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.106 17 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k160) (bruijn ##.vals.82.290 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k160, self)))),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k158(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.106 16 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k159) (bruijn ##.xs.81.289 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k159, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k156) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k158))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k156, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k158, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k155) (##inline ##vcore.car (bruijn ##.expr.85.288 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k155, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.631 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0lambda49))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0lambda49, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k154(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.630 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0lambda48) (bruijn ##.loop.287 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0lambda48, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k151) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k154))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k151, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287_V0k154, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130 ##.loop.287) #f (bruijn ##.loop.287 0 0) (bruijn ##.k.629 1 0) (##inline ##vcore.car (bruijn ##.expr.79.284 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D287(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.628 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda47))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda47, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.652 0 0) (bruijn ##.k.648 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-letrec.128) #f (bruijn ##.iter-letrec.128 9 5) (bruijn ##.k.653 0 0) (bruijn ##.xs.297 2 2) '() (##inline ##vcore.car (bruijn ##.expr.88.299 1 0)) (bruijn ##.vals.298 2 3) (bruijn ##.env.263 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 5));
   VEnv * _closure_env = _closure->env;
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
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.88.299 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.88.299 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k162) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda51) (bruijn ##.kk.66.264 5 1)) ((bruijn ##.k.648 1 0) #f)) ((bruijn ##.k.648 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k162, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda51, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda50, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.296 0 1)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k161) (##inline ##vcore.cdr (bruijn ##.expr.79.284 1 0))) ((bruijn ##.k.648 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k161, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.284 0 0)) (##vcore.call-with-values (bruijn ##.k.625 2 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda46) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda50)) ((bruijn ##.k.625 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda46, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda50, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.626 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k150) (##inline ##vcore.cdr (bruijn ##.expr.262 4 1))) ((bruijn ##.k.625 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k150, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.262 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k149) 'letrec (##inline ##vcore.car (bruijn ##.expr.262 3 1))) ((bruijn ##.k.625 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k149, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.95.306 5 1) (bruijn ##.k.608 2 0) (bruijn ##.expr.97.308 3 1) (bruijn ##.x.609 1 0) (bruijn ##.x.610 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.106 16 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k170) (bruijn ##.vals.94.310 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k170, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.97.308 1 1))) ((bruijn ##.reverse.106 15 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k169) (bruijn ##.xs.93.309 1 2)) ((bruijn ##.k.608 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k169, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.99.314 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.99.314 0 0))) ((bruijn ##.kk.96.311 3 1) (bruijn ##.k.600 1 0) (##inline ##vcore.cdr (bruijn ##.expr.97.308 5 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.98.312 2 0)) (bruijn ##.xs.93.309 5 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.99.314 0 0)) (bruijn ##.vals.94.310 5 3))) ((bruijn ##.k.600 1 0) #f)) ((bruijn ##.k.600 1 0) #f))
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
        VGetArg(statics, 5-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 5-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 5-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.312 1 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k174) (##inline ##vcore.cdr (bruijn ##.expr.98.312 1 0))) ((bruijn ##.k.600 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k174, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.95.306 7 1) (bruijn ##.k.596 3 0) (bruijn ##.expr.97.308 5 1) (bruijn ##.x.597 1 0) (bruijn ##.x.598 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.106 18 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k177) (bruijn ##.vals.94.310 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k177, self)))),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k175(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.106 17 6) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k176) (bruijn ##.xs.93.309 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k176, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k173) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k175))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k173, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k175, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k172) (##inline ##vcore.car (bruijn ##.expr.97.308 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k172, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.595 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0lambda55))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0lambda55, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k171(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.594 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0lambda54) (bruijn ##.loop.307 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0lambda54, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k168) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k171))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k168, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307_V0k171, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307")) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130 ##.loop.307) #f (bruijn ##.loop.307 0 0) (bruijn ##.k.593 1 0) (##inline ##vcore.car (bruijn ##.expr.91.304 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V10_Dloop_D307(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.592 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda53))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda53, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.616 0 0) (bruijn ##.k.612 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.104 14 4) (bruijn ##.k.617 1 0) (##inline ##vcore.cons '##letrec (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.90.302 5 0)) '())) (##inline ##vcore.cdr (bruijn ##.x.620 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 3,
      statics->vars[0],
      VInlineCons2(runtime,
        _V10letrec,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
        VNULL)),
      VInlineCdr2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-letrec.128) #f (bruijn ##.iter-letrec.128 10 5) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k180) (bruijn ##.xs.317 2 2) '() (##inline ##vcore.car (bruijn ##.expr.100.319 1 0)) (bruijn ##.vals.318 2 3) (bruijn ##.env.263 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k180, self))));
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
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.100.319 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.100.319 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k179) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda57) (bruijn ##.kk.66.264 6 1)) ((bruijn ##.k.612 1 0) #f)) ((bruijn ##.k.612 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k179, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda57, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda56, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.316 0 1)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k178) (##inline ##vcore.cdr (bruijn ##.expr.91.304 1 0))) ((bruijn ##.k.612 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k178, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.304 0 0)) (##vcore.call-with-values (bruijn ##.k.588 3 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda52) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda56)) ((bruijn ##.k.588 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda52, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda56, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.302 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k167) (##inline ##vcore.cdr (bruijn ##.expr.90.302 0 0))) ((bruijn ##.k.588 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k167, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.589 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k166) (##inline ##vcore.cdr (bruijn ##.expr.262 4 1))) ((bruijn ##.k.588 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k166, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.262 3 1)) ((bruijn ##.equal?.101 7 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k165) '##letrec (##inline ##vcore.car (bruijn ##.expr.262 3 1))) ((bruijn ##.k.588 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k165, self)))),
      _V10letrec,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-combination.129) #f (bruijn ##.iter-combination.129 4 6) (bruijn ##.k.586 0 0) (bruijn ##.expr.262 3 1) (bruijn ##.env.263 3 2))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[6]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k181(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.585 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda58) (bruijn ##.kk.66.264 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda58, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k163(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k164) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k181))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k164, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k181, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k147(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k148) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k163))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k148, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k163, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k140) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k147))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k147, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k129(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k130) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k139))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k130, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k139, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k122) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k129))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k122, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k129, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.584 0 0) (##vcore.call/cc (bruijn ##.k.583 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda42)) (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter-atom.127) #f (bruijn ##.iter-atom.127 2 4) (bruijn ##.k.583 1 0) (bruijn ##.expr.262 1 1) (bruijn ##.env.263 1 2)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0lambda42, self)))));
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.application?.123) #f (bruijn ##.application?.123 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k121) (bruijn ##.expr.262 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130_V0k121, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.iter.130) #f (bruijn ##.iter.130 1 7) (bruijn ##.k.701 0 0) (bruijn ##.expr.321 0 1) '())
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
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.746 0 0) (bruijn ##.k.744 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.747 0 0) (bruijn ##.expr.122 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.745 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda60) (bruijn ##.kk.0.322 2 1)) ((bruijn ##.k.744 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k184, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda60, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122 3 1)) ((bruijn ##.equal?.101 5 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.122 3 1))) ((bruijn ##.k.744 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k183, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.736 0 0) (bruijn ##.k.731 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.737 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.326 3 0)) (##inline ##vcore.cons (bruijn ##.x.740 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.131) #f (bruijn ##.alpha-convert-impl.131 6 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191) (##inline ##vcore.car (bruijn ##.expr.5.328 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k191, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D131(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.328 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.328 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda61) (bruijn ##.kk.0.322 4 1)) ((bruijn ##.k.731 3 0) #f)) ((bruijn ##.k.731 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k190, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda61, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.326 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k189) (##inline ##vcore.cdr (bruijn ##.expr.4.326 0 0))) ((bruijn ##.k.731 2 0) #f))
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
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.732 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k188) (##inline ##vcore.cdr (bruijn ##.expr.122 4 1))) ((bruijn ##.k.731 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k188, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122 3 1)) ((bruijn ##.equal?.101 5 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k187) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.122 3 1))) ((bruijn ##.k.731 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k187, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.723 0 0) (bruijn ##.k.718 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.724 1 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.7.331 3 0)) (##inline ##vcore.cons (bruijn ##.x.727 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.131) #f (bruijn ##.alpha-convert-impl.131 6 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k198) (##inline ##vcore.car (bruijn ##.expr.8.333 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k198, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D131(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.333 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.8.333 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k197) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda62) (bruijn ##.kk.0.322 4 1)) ((bruijn ##.k.718 3 0) #f)) ((bruijn ##.k.718 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k197, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda62, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.331 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k196) (##inline ##vcore.cdr (bruijn ##.expr.7.331 0 0))) ((bruijn ##.k.718 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k196, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.719 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k195) (##inline ##vcore.cdr (bruijn ##.expr.122 4 1))) ((bruijn ##.k.718 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k195, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122 3 1)) ((bruijn ##.equal?.101 5 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k194) 'define (##inline ##vcore.car (bruijn ##.expr.122 3 1))) ((bruijn ##.k.718 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k194, self)))),
      _V0define,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.710 0 0) (bruijn ##.k.705 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.711 1 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.10.336 3 0)) (##inline ##vcore.cons (bruijn ##.x.714 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.131) #f (bruijn ##.alpha-convert-impl.131 6 8) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k205) (##inline ##vcore.car (bruijn ##.expr.11.338 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 8));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k205, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D131(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.338 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.338 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k204) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda63) (bruijn ##.kk.0.322 4 1)) ((bruijn ##.k.705 3 0) #f)) ((bruijn ##.k.705 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k204, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda63, self)))),
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
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.336 0 0)) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k203) (##inline ##vcore.cdr (bruijn ##.expr.10.336 0 0))) ((bruijn ##.k.705 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k203, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.706 0 0) ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k202) (##inline ##vcore.cdr (bruijn ##.expr.122 4 1))) ((bruijn ##.k.705 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k202, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122 3 1)) ((bruijn ##.equal?.101 5 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k201) 'define-constant (##inline ##vcore.car (bruijn ##.expr.122 3 1))) ((bruijn ##.k.705 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k201, self)))),
      _V0define__constant,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler alpha-convert alpha-convert ##.alpha-convert-impl.131) #f (bruijn ##.alpha-convert-impl.131 2 8) (bruijn ##.k.703 0 0) (bruijn ##.expr.122 3 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[8]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D131(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k206(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.702 0 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda64) (bruijn ##.kk.0.322 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda64, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k199(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k200) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k206))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k200, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k206, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k192(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k193) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k199))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k193, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k199, self)))));
}
static void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k185(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k186) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k192))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k186, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k192, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k182) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k185))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k182, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0k185, self)))));
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 9 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D124") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D131")) (##vcore.call/cc (bruijn ##.k.353 1 0) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda59)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dapplication_Q_D123, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dcombination_Q_D124, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dlookup__env_D125, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__defines_D126, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__atom_D127, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__letrec_D128, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter__combination_D129, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Diter_D130, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V10_Dalpha__convert__impl_D131, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert_V0lambda59, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.751 0 0) ((bruijn ##.k.749 1 0) (bruijn ##.lst.341 1 2)) (##qualified-call (vanity compiler alpha-convert memtail) #t (bruijn ##.memtail.121 2 1) (bruijn ##.k.749 1 0) (bruijn ##.x.340 1 1) (##inline ##vcore.cdr (bruijn ##.lst.341 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0alpha__convert;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail, _V60_V0vanity_V0compiler_V0alpha__convert)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.754 0 0) ((bruijn ##.k.749 1 0) (bruijn ##.lst.341 1 2)) ((bruijn ##.k.749 1 0) #f))
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
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.pair? (bruijn ##.lst.341 0 2)) ((bruijn ##.equal?.101 2 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k207) (bruijn ##.x.340 0 1) (##inline ##vcore.car (bruijn ##.lst.341 0 2))) ((bruijn ##.equal?.101 2 1) (close _V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k208) (bruijn ##.x.340 0 1) (bruijn ##.lst.341 0 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k207, self)))),
      _var1,
      VInlineCar2(runtime,
        _var2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail_V0k208, self)))),
      _var1,
      _var2);
}
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0alpha__convert_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 13) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda3, got ~D~N"
  "-- expected 13~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[13]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 13, 13, statics);
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
  // (##letrec (vanity compiler alpha-convert) 2 ((close "_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert" "_V60_V0vanity_V0compiler_V0alpha__convert") (close "_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail" "_V60_V0vanity_V0compiler_V0alpha__convert")) ((bruijn ##.k.352 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'alpha-convert (bruijn ##.alpha-convert.120 0 0)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0alpha__convert = self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0alpha__convert, _V60_V0vanity_V0compiler_V0alpha__convert))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0alpha__convert_V0memtail, _V60_V0vanity_V0compiler_V0alpha__convert))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0alpha__convert_V20", &_V60_V0vanity_V0compiler_V0alpha__convert);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0alpha__convert,
        self->vars[0]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0alpha__convert_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.343 0 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda2) (close _V0vanity_V0compiler_V0alpha__convert_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0alpha__convert_V20 = (VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_V0lambda1;
