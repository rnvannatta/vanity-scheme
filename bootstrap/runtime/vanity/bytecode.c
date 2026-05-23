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

V_DECLARE_FUNC(VFunction3, _var0, _var1);
V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0bytecode;

static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VMakeVasmLambda" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEvalVasmToplevel" };
VWEAK VWORD _V0eval__vasm;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0eval__vasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "eval-vasm" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm: unknown or malformed line" };
VWEAK VWORD _V0letrec__end;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0letrec__end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "letrec-end" };
VWEAK VWORD _V0letrec__begin;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0letrec__begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "letrec-begin" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D691 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm letrec-begin: malformed" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D690 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "vasm bf: not an integer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D689 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "vasm bf: unknown label" };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
VWEAK VWORD _V0push__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0push__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "push-set!" };
VWEAK VWORD _V0declare__foreign;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0declare__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "declare-foreign" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm declare: not a nonnegative integer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "vasm declare: unknown label" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vasm declare: not a string" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D685 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "vasm foreign-function: not a nonnegative integer" };
VWEAK VWORD _V0foreign__function;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D684 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "vasm close: not a nonnegative integer" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D683 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm close: unknown label" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D682 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "vasm close: malformed env name" };
VWEAK VWORD _V0case__lambda__error;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0case__lambda__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "case-lambda-error" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D681 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "vasm case-lambda+: not an integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D680 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda+: unknown label" };
VWEAK VWORD _V0case__lambda_P;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0case__lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "case-lambda+" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D679 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "vasm case-lambda+: not a nonnegative integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D678 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda: not an integer" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D677 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm case-lambda: unknown label" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D676 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "vasm case-lambda: not a nonnegative integer" };
VWEAK VWORD _V0lambda_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "lambda+" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D675 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm lambda+: not a nonnegative integer" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D674 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vasm lambda: not a nonnegative integer" };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D673 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "vasm call: not a nonnegative integer" };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D672 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm lookup: not a symbol" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D671 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm bruijn: not both nonnegative integers" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D670 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm intrinsic: not a recognized intrinsic" };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
VWEAK VWORD _V40VFunction3;
VWEAK VClosure _VW_V40VFunction3 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFunction3, NULL };
VWEAK VWORD _V0push;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0push = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "push" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D669 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm label: label declared twice" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D668 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "vasm label: not a symbol" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D667 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "declare not declare\?" };
VWEAK VWORD _V0declare;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "declare" };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D666 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D665 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D664 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D663 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_V0vanity_V0bytecode_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0eval__vasm = VEncodePointer(VInternSymbol(-229856296, &_VW_V0eval__vasm.sym), VPOINTER_OTHER);
  _V0letrec__end = VEncodePointer(VInternSymbol(1680038956, &_VW_V0letrec__end.sym), VPOINTER_OTHER);
  _V0letrec__begin = VEncodePointer(VInternSymbol(1445174670, &_VW_V0letrec__begin.sym), VPOINTER_OTHER);
  _V0bf = VEncodePointer(VInternSymbol(1139667182, &_VW_V0bf.sym), VPOINTER_OTHER);
  _V0push__set_B = VEncodePointer(VInternSymbol(1593164417, &_VW_V0push__set_B.sym), VPOINTER_OTHER);
  _V0declare__foreign = VEncodePointer(VInternSymbol(-1354590835, &_VW_V0declare__foreign.sym), VPOINTER_OTHER);
  _V0foreign__function = VEncodePointer(VInternSymbol(1036213076, &_VW_V0foreign__function.sym), VPOINTER_OTHER);
  _V0close = VEncodePointer(VInternSymbol(-786291330, &_VW_V0close.sym), VPOINTER_OTHER);
  _V0case__lambda__error = VEncodePointer(VInternSymbol(-197562183, &_VW_V0case__lambda__error.sym), VPOINTER_OTHER);
  _V0case__lambda_P = VEncodePointer(VInternSymbol(-1941514912, &_VW_V0case__lambda_P.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V0lambda_P = VEncodePointer(VInternSymbol(1006106366, &_VW_V0lambda_P.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0call = VEncodePointer(VInternSymbol(-822823338, &_VW_V0call.sym), VPOINTER_OTHER);
  _V0lookup = VEncodePointer(VInternSymbol(362294115, &_VW_V0lookup.sym), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VInternSymbol(-996132237, &_VW_V0bruijn.sym), VPOINTER_OTHER);
  _V0intrinsic = VEncodePointer(VInternSymbol(1953518893, &_VW_V0intrinsic.sym), VPOINTER_OTHER);
  _V0push = VEncodePointer(VInternSymbol(-1491894077, &_VW_V0push.sym), VPOINTER_OTHER);
  _V0label = VEncodePointer(VInternSymbol(619689535, &_VW_V0label.sym), VPOINTER_OTHER);
  _V0declare = VEncodePointer(VInternSymbol(1810290051, &_VW_V0declare.sym), VPOINTER_OTHER);
  _V0toplevel = VEncodePointer(VInternSymbol(1376451653, &_VW_V0toplevel.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VInternSymbol(1810441535, &_VW_V0lookup__intrinsic.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V40VFunction3 = VEncodePointer(VLookupConstant("_V40VFunction3", &_VW_V40VFunction3), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0find__declare, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0set__declares_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0find__toplevel, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0eval__vasm, _var0, _var1);
static void _V0vanity_V0bytecode_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.234 4 0) (##string ##.string.663) (bruijn ##.x.235 0 0) 'values 'equal? 'error 'lookup-intrinsic 'reverse 'assv)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 9,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D663.sym, VPOINTER_OTHER),
      _var0,
      _V0values,
      _V0equal_Q,
      _V0error,
      _V0lookup__intrinsic,
      _V0reverse,
      _V0assv);
}
static void _V0vanity_V0bytecode_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0bytecode_V20_V0k4) (bruijn ##.x.236 2 0) (bruijn ##.x.237 1 0) (bruijn ##.x.238 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k4, self)))),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0bytecode_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k3) (##string ##.string.664))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D664.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k2) (##string ##.string.665))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D665.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k1) (##string ##.string.666))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D666.sym, VPOINTER_OTHER));
}
static void _V10_Deval__loop_D101_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Deval__loop_D101_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D101_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.244 1 0) (bruijn ##.program-counter.100 3 1) (bruijn ##.x.245 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
}
static void _V10_Deval__loop_D101_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Deval__loop_D101_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D101_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.program-counter.100 2 1) ((bruijn ##.find-toplevel.92 5 1) (close _V10_Deval__loop_D101_V0k7) (bruijn ##.tape.99 2 0) (bruijn ##.program-counter.100 2 1)) ((bruijn ##.k.244 0 0) #f))
if(VDecodeBool(
statics->up->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Deval__loop_D101_V0k7, self)))),
      statics->up->vars[0],
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Deval__loop_D101_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Deval__loop_D101_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D101_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval-vasm-toplevel.94 5 3) (bruijn ##.k.243 0 0) (bruijn ##.tape.99 2 0) (bruijn ##.program-counter.100 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 3,
      _var0,
      statics->up->vars[0],
      statics->up->vars[1]);
}
static void _V10_Deval__loop_D101_V0k8(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (bruijn ##.program-counter.100 1 1) (##vcore.call-with-values (bruijn ##.k.242 0 0) (close _V10_Deval__loop_D101_V0lambda5) (bruijn ##.eval-loop.101 1 2)) (##vcore.apply (bruijn ##.k.242 0 0) (bruijn ##.values.66 5 1) (bruijn ##.rets.102 0 1)))
if(VDecodeBool(
statics->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Deval__loop_D101_V0lambda5, self)))),
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      self->vars[0],
      VGetArg(statics, 5-1, 1),
      self->vars[1]);
}
}
static void _V10_Deval__loop_D101_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V10_Deval__loop_D101_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D101_V0lambda4, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _varargs;
  // ((close _V10_Deval__loop_D101_V0k6) (close _V10_Deval__loop_D101_V0k8))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Deval__loop_D101_V0k6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Deval__loop_D101_V0k8, self)))));
}
static void _V50_V0vanity_V0bytecode_V0eval__vasm_V0k9(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.eval-loop.101 0 2) (bruijn ##.k.240 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[2]), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.241 1 0) 0 (close _V10_Deval__loop_D101_V0lambda4)) ((bruijn ##.set-declares!.93 3 2) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V0k9) (bruijn ##.tape.99 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeInt(0l);
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Deval__loop_D101_V0lambda4, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V0k9, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0bytecode_V0eval__vasm(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.preprocess-vasm.97 1 6) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V0k5) (bruijn ##.vasm.98 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[6]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V0k5, self)))),
      _var1);
}
void _V50_V0vanity_V0bytecode_V0find__toplevel(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0find__toplevel" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0find__toplevel, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.596 ##.reg.597) ((##vcore.vector-length (bruijn ##.tape.103 1 1)) (##vcore.>= (bruijn ##.program-counter.104 1 2) (bruijn ##.reg.596 0 0))) (if (bruijn ##.reg.597 0 1) ((bruijn ##.k.246 1 0) #f) (basic-block 1 1 (##.reg.598) ((##vcore.vector-ref (bruijn ##.tape.103 2 1) (bruijn ##.program-counter.104 2 2))) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.reg.598 0 0)) 'toplevel) (basic-block 1 1 (##.reg.599) ((##vcore.+ (bruijn ##.program-counter.104 3 2) 1)) ((bruijn ##.k.246 3 0) (bruijn ##.reg.599 0 0))) (basic-block 1 1 (##.reg.600) ((##vcore.+ 1 (bruijn ##.program-counter.104 3 2))) ((bruijn ##.find-toplevel.92 4 1) (bruijn ##.k.246 3 0) (bruijn ##.tape.103 3 1) (bruijn ##.reg.600 0 0)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCmpGe(runtime, NULL,
      statics->vars[2],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->vars[1],
      statics->up->vars[2]);
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        self->vars[0]),
        _V0toplevel))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      self->vars[0]);
    }
}
    }
}
    }
}
static void _V10_Dset__declare__loop_D106_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D106_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D106_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.set-declare-loop.106 2 0) (bruijn ##.k.254 1 0) (bruijn ##.x.255 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dset__declare__loop_D106_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.find-declare.96 3 5) (close _V10_Dset__declare__loop_D106_V0k11) (bruijn ##.tape.105 2 1) (bruijn ##.pc.107 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0k11, self)))),
      statics->up->vars[1],
      self->vars[1]);
}
static void _V10_Dset__declare__loop_D106_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D106_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D106_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.265 0 0) (bruijn ##.k.260 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dset__declare__loop_D106_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D106_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D106_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-declare! (bruijn ##.k.266 1 0) (##inline ##vcore.car (bruijn ##.expr.64.111 3 0)) (bruijn ##.x.267 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetDeclare, 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      _var0);
}
static void _V10_Dset__declare__loop_D106_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D106_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D106_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vasm-lambda.95 10 4) (close _V10_Dset__declare__loop_D106_V0k17) (bruijn ##.tape.105 9 1) (##inline ##vcore.car (bruijn ##.expr.65.113 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0k17, self)))),
      VGetArg(statics, 9-1, 1),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dset__declare__loop_D106_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D106_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D106_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.113 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.65.113 0 0))) (##vcore.call-with-values (close _V10_Dset__declare__loop_D106_V0k16) (close _V10_Dset__declare__loop_D106_V0lambda8) (bruijn ##.kk.61.108 5 1)) ((bruijn ##.k.260 3 0) #f)) ((bruijn ##.k.260 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0k16, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0lambda8, self)))),
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
static void _V10_Dset__declare__loop_D106_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D106_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D106_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.111 0 0)) ((close _V10_Dset__declare__loop_D106_V0k15) (##inline ##vcore.cdr (bruijn ##.expr.64.111 0 0))) ((bruijn ##.k.260 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0k15, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declare__loop_D106_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D106_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D106_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.261 0 0) ((close _V10_Dset__declare__loop_D106_V0k14) (##inline ##vcore.cdr (bruijn ##.reg.601 2 0))) ((bruijn ##.k.260 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0k14, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declare__loop_D106_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D106_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D106_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.reg.601 1 0)) ((bruijn ##.equal?.67 7 2) (close _V10_Dset__declare__loop_D106_V0k13) 'declare (##inline ##vcore.car (bruijn ##.reg.601 1 0))) ((bruijn ##.k.260 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0k13, self)))),
      _V0declare,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declare__loop_D106_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D106_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D106_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.602) ((##vcore.vector-ref (bruijn ##.tape.105 6 1) (bruijn ##.pc.107 4 1))) ((bruijn ##.error.68 8 3) (bruijn ##.k.257 1 0) (##string ##.string.667) (bruijn ##.reg.602 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 3)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D667.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
static void _V10_Dset__declare__loop_D106_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.256 1 0) (close _V10_Dset__declare__loop_D106_V0lambda9) (bruijn ##.kk.61.108 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0lambda9, self)))),
      statics->vars[1]);
}
static void _V10_Dset__declare__loop_D106_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D106_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D106_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.601) ((##vcore.vector-ref (bruijn ##.tape.105 4 1) (bruijn ##.pc.107 2 1))) ((close _V10_Dset__declare__loop_D106_V0k12) (close _V10_Dset__declare__loop_D106_V0k18)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0k12, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0k18, self)))));
    }
}
static void _V10_Dset__declare__loop_D106_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D106_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D106_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.pc.107 0 1) (##vcore.call/cc (close _V10_Dset__declare__loop_D106_V0k10) (close _V10_Dset__declare__loop_D106_V0lambda7)) ((bruijn ##.k.254 0 0) #f))
if(VDecodeBool(
_var1)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0k10, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0lambda7, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.set-declare-loop.106 1 0) (bruijn ##.k.253 2 0) (bruijn ##.x.270 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dset__declare__loop_D106_V0lambda6)) ((bruijn ##.find-declare.96 2 5) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V0k19) (bruijn ##.tape.105 1 1) -1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dset__declare__loop_D106_V0lambda6, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V0k19, self)))),
      statics->vars[1],
      VEncodeInt(-1l));
    }
}
void _V50_V0vanity_V0bytecode_V0find__declare(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0find__declare" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0find__declare, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 3 3 (##.reg.603 ##.reg.604 ##.reg.605) ((##vcore.+ (bruijn ##.program-counter.116 1 2) 1) (##vcore.vector-length (bruijn ##.tape.115 1 1)) (##vcore.>= (bruijn ##.reg.603 0 0) (bruijn ##.reg.604 0 1))) (if (bruijn ##.reg.605 0 2) ((bruijn ##.k.271 1 0) #f) (basic-block 1 1 (##.reg.606) ((##vcore.vector-ref (bruijn ##.tape.115 2 1) (bruijn ##.reg.603 1 0))) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.reg.606 0 0)) 'declare) ((bruijn ##.k.271 2 0) (bruijn ##.reg.603 1 0)) ((bruijn ##.find-declare.96 3 5) (bruijn ##.k.271 2 0) (bruijn ##.tape.115 2 1) (bruijn ##.reg.603 1 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VCmpGe(runtime, NULL,
      self->vars[0],
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        self->vars[0]),
        _V0declare))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->vars[0]);
}
    }
}
    }
}
static void _V10_Dpeel__loop_D124_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.290 0 0) (bruijn ##.k.285 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dpeel__loop_D124_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.reg.611 1 0)) ((bruijn ##.error.68 18 3) (bruijn ##.k.298 0 0) (##string ##.string.668) (bruijn ##.label.130 4 0)) ((bruijn ##.k.298 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D668.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D124_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.295 1 0) ((bruijn ##.error.68 19 3) (bruijn ##.k.296 0 0) (##string ##.string.669) (bruijn ##.label.130 5 0)) ((bruijn ##.k.296 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D669.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D124_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.612) ((##vcore.+ (bruijn ##.pc.125 12 1) 1)) ((bruijn ##.peel-loop.124 13 0) (bruijn ##.k.291 3 0) (bruijn ##.reg.612 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 12-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      statics->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dpeel__loop_D124_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.vector-set! (close _V10_Dpeel__loop_D124_V0k32) (bruijn ##.tape.122 14 1) (bruijn ##.pc.125 11 1) (##inline ##vcore.car (bruijn ##.expr.4.131 3 0)))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k32, self)))),
      VGetArg(statics, 14-1, 1),
      VGetArg(statics, 11-1, 1),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dpeel__loop_D124_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V10_Dpeel__loop_D124_V0k31) (bruijn ##.labels.119 15 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.label.130 4 0) (bruijn ##.pc.125 11 1)) (bruijn ##.labels.119 15 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k31, self)))),
      VEncodeInt(15l), VEncodeInt(0l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VGetArg(statics, 11-1, 1)),
        VGetArg(statics, 15-1, 0))
    );
}
static void _V10_Dpeel__loop_D124_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D124_V0k29) (close _V10_Dpeel__loop_D124_V0k30))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k30, self)))));
}
static void _V10_Dpeel__loop_D124_V0k27(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.assv.71 17 6) (close _V10_Dpeel__loop_D124_V0k28) (bruijn ##.label.130 3 0) (bruijn ##.labels.119 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k28, self)))),
      statics->up->up->vars[0],
      VGetArg(statics, 14-1, 0));
}
static void _V10_Dpeel__loop_D124_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.611) ((##vcore.symbol? (bruijn ##.label.130 3 0))) ((close _V10_Dpeel__loop_D124_V0k26) (close _V10_Dpeel__loop_D124_V0k27)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k27, self)))));
    }
}
static void _V10_Dpeel__loop_D124_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.131 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.4.131 0 0))) (##vcore.call-with-values (close _V10_Dpeel__loop_D124_V0k25) (close _V10_Dpeel__loop_D124_V0lambda13) (bruijn ##.kk.0.126 6 1)) ((bruijn ##.k.285 4 0) #f)) ((bruijn ##.k.285 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k25, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0lambda13, self)))),
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
static void _V10_Dpeel__loop_D124_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D124_V0k24) (##inline ##vcore.cdr (bruijn ##.expr.3.129 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k24, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpeel__loop_D124_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.129 0 0)) ((close _V10_Dpeel__loop_D124_V0k23) (##inline ##vcore.car (bruijn ##.expr.3.129 0 0))) ((bruijn ##.k.285 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k23, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D124_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.286 0 0) ((close _V10_Dpeel__loop_D124_V0k22) (##inline ##vcore.cdr (bruijn ##.reg.609 2 0))) ((bruijn ##.k.285 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k22, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D124_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.reg.609 1 0)) ((bruijn ##.equal?.67 11 2) (close _V10_Dpeel__loop_D124_V0k21) 'label (##inline ##vcore.car (bruijn ##.reg.609 1 0))) ((bruijn ##.k.285 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k21, self)))),
      _V0label,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D124_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.610) ((##vcore.+ (bruijn ##.pc.125 5 1) 1)) ((bruijn ##.peel-loop.124 6 0) (bruijn ##.k.282 1 0) (bruijn ##.reg.610 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      statics->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dpeel__loop_D124_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.281 1 0) (close _V10_Dpeel__loop_D124_V0lambda14) (bruijn ##.kk.0.126 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0lambda14, self)))),
      statics->vars[1]);
}
static void _V10_Dpeel__loop_D124_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.609) ((##vcore.vector-ref (bruijn ##.tape.122 6 1) (bruijn ##.pc.125 3 1))) ((close _V10_Dpeel__loop_D124_V0k20) (close _V10_Dpeel__loop_D124_V0k33)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k20, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0k33, self)))));
    }
}
static void _V10_Dpeel__loop_D124_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D124_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D124_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.608) ((##vcore.>= (bruijn ##.pc.125 1 1) (bruijn ##.reg.607 3 0))) (if (bruijn ##.reg.608 0 0) ((bruijn ##.k.279 1 0) (bruijn ##.tape.122 4 1)) (##vcore.call/cc (bruijn ##.k.279 1 0) (close _V10_Dpeel__loop_D124_V0lambda12))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0lambda12, self)))));
}
    }
}
static void _V10_Dpeel__labels_D120_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpeel__labels_D120_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__labels_D120_V0lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.607) ((##vcore.vector-length (bruijn ##.tape.122 1 1))) (letrec 1 ((close _V10_Dpeel__loop_D124_V0lambda11)) ((bruijn ##.peel-loop.124 0 0) (bruijn ##.k.278 2 0) 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__loop_D124_V0lambda11, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      VEncodeInt(0l));
    }
    }
}
static void _V10_Dpreprocess__expr_D121_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.580 0 0) (bruijn ##.k.577 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.581 0 0) (bruijn ##.expr.133 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
static void _V10_Dpreprocess__expr_D121_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.578 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k36) (close _V10_Dpreprocess__expr_D121_V0lambda17) (bruijn ##.kk.5.135 2 1)) ((bruijn ##.k.577 1 0) #f)) ((bruijn ##.k.577 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k36, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda17, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k35) 'toplevel (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.577 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k35, self)))),
      _V0toplevel,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.572 0 0) (bruijn ##.k.568 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.573 0 0) (bruijn ##.expr.133 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dpreprocess__expr_D121_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.139 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.9.139 0 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k41) (close _V10_Dpreprocess__expr_D121_V0lambda18) (bruijn ##.kk.5.135 3 1)) ((bruijn ##.k.568 2 0) #f)) ((bruijn ##.k.568 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda18, self)))),
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
static void _V10_Dpreprocess__expr_D121_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.569 0 0) ((close _V10_Dpreprocess__expr_D121_V0k40) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.568 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k40, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k39) 'push (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.568 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k39, self)))),
      _V0push,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.559 0 0) (bruijn ##.k.555 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.560 2 0) (##inline ##vcore.cons 'intrinsic (##inline ##vcore.cons (bruijn ##.x.563 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0intrinsic,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Dpreprocess__expr_D121_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.54.144 0 0) ((bruijn ##.k.560 2 0) (##inline ##vcore.cons 'intrinsic (##inline ##vcore.cons (bruijn ##.x.54.144 0 0) '()))) ((bruijn ##.error.68 12 3) (bruijn ##.k.560 2 0) (##string ##.string.670) (bruijn ##.x.143 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0intrinsic,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D670.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D121_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.657) ((##vcore.string? (bruijn ##.x.143 2 0))) (if (bruijn ##.reg.657 0 0) ((##intrinsic "VFunction3") (close _V10_Dpreprocess__expr_D121_V0k48) (bruijn ##.x.143 2 0)) ((bruijn ##.lookup-intrinsic.69 11 4) (close _V10_Dpreprocess__expr_D121_V0k49) (bruijn ##.x.143 2 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VFunction3, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k48, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k49, self)))),
      statics->up->vars[0]);
}
    }
}
static void _V10_Dpreprocess__expr_D121_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.142 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k47) (close _V10_Dpreprocess__expr_D121_V0lambda19) (bruijn ##.kk.5.135 4 1)) ((bruijn ##.k.555 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda19, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.142 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k46) (##inline ##vcore.car (bruijn ##.expr.11.142 0 0))) ((bruijn ##.k.555 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k46, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.556 0 0) ((close _V10_Dpreprocess__expr_D121_V0k45) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.555 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k45, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k44) 'intrinsic (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.555 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k44, self)))),
      _V0intrinsic,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.545 0 0) (bruijn ##.k.540 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D121_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.653 1 0) (basic-block 1 1 (##.reg.654) ((##vcore.int? (bruijn ##.right.150 4 0))) (if (bruijn ##.reg.654 0 0) (basic-block 1 1 (##.reg.655) ((##vcore.>= (bruijn ##.up.148 7 0) 0)) (if (bruijn ##.reg.655 0 0) (basic-block 1 1 (##.reg.656) ((##vcore.>= (bruijn ##.right.150 6 0) 0)) ((bruijn ##.k.549 3 0) (bruijn ##.reg.656 0 0))) ((bruijn ##.k.549 2 0) #f))) ((bruijn ##.k.549 1 0) #f))) ((bruijn ##.k.549 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
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
static void _V10_Dpreprocess__expr_D121_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.547 0 0) ((bruijn ##.k.546 2 0) (bruijn ##.expr.133 10 1)) ((bruijn ##.error.68 14 3) (bruijn ##.k.546 2 0) (##string ##.string.671) (bruijn ##.up.148 5 0) (bruijn ##.right.150 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D671.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D121_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.653) ((##vcore.int? (bruijn ##.up.148 4 0))) ((close _V10_Dpreprocess__expr_D121_V0k58) (close _V10_Dpreprocess__expr_D121_V0k59)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k58, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k59, self)))));
    }
}
static void _V10_Dpreprocess__expr_D121_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.14.149 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k57) (close _V10_Dpreprocess__expr_D121_V0lambda20) (bruijn ##.kk.5.135 6 1)) ((bruijn ##.k.540 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k57, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda20, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.149 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k56) (##inline ##vcore.car (bruijn ##.expr.14.149 0 0))) ((bruijn ##.k.540 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k56, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k55) (##inline ##vcore.cdr (bruijn ##.expr.13.147 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k55, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpreprocess__expr_D121_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.147 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k54) (##inline ##vcore.car (bruijn ##.expr.13.147 0 0))) ((bruijn ##.k.540 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k54, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.541 0 0) ((close _V10_Dpreprocess__expr_D121_V0k53) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.540 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k53, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k52) 'bruijn (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.540 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k52, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.534 0 0) (bruijn ##.k.530 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.652) ((##vcore.symbol? (bruijn ##.x.153 2 0))) (if (bruijn ##.reg.652 0 0) ((bruijn ##.k.535 1 0) (bruijn ##.expr.133 7 1)) ((bruijn ##.error.68 11 3) (bruijn ##.k.535 1 0) (##string ##.string.672) (bruijn ##.x.153 2 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D672.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
    }
}
static void _V10_Dpreprocess__expr_D121_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.16.152 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k65) (close _V10_Dpreprocess__expr_D121_V0lambda21) (bruijn ##.kk.5.135 4 1)) ((bruijn ##.k.530 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda21, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.152 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k64) (##inline ##vcore.car (bruijn ##.expr.16.152 0 0))) ((bruijn ##.k.530 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k64, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.531 0 0) ((close _V10_Dpreprocess__expr_D121_V0k63) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.530 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k63, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k62) 'lookup (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.530 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k62, self)))),
      _V0lookup,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.522 0 0) (bruijn ##.k.518 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.650 1 0) (basic-block 1 1 (##.reg.651) ((##vcore.>= (bruijn ##.x.156 4 0) 0)) ((bruijn ##.k.526 1 0) (bruijn ##.reg.651 0 0))) ((bruijn ##.k.526 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->up->up->up->vars[0],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.524 0 0) ((bruijn ##.k.523 2 0) (bruijn ##.expr.133 8 1)) ((bruijn ##.error.68 12 3) (bruijn ##.k.523 2 0) (##string ##.string.673) (bruijn ##.x.156 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D673.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D121_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.650) ((##vcore.int? (bruijn ##.x.156 2 0))) ((close _V10_Dpreprocess__expr_D121_V0k72) (close _V10_Dpreprocess__expr_D121_V0k73)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k72, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k73, self)))));
    }
}
static void _V10_Dpreprocess__expr_D121_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.155 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k71) (close _V10_Dpreprocess__expr_D121_V0lambda22) (bruijn ##.kk.5.135 4 1)) ((bruijn ##.k.518 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k71, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda22, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.155 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k70) (##inline ##vcore.car (bruijn ##.expr.18.155 0 0))) ((bruijn ##.k.518 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k70, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.519 0 0) ((close _V10_Dpreprocess__expr_D121_V0k69) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.518 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k69, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k68) 'call (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.518 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k68, self)))),
      _V0call,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.509 0 0) (bruijn ##.k.505 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.512 1 0) ((bruijn ##.k.513 0 0) (bruijn ##.p.512 1 0)) (basic-block 1 1 (##.reg.648) ((##vcore.int? (bruijn ##.x.159 4 0))) (if (bruijn ##.reg.648 0 0) (basic-block 1 1 (##.reg.649) ((##vcore.>= (bruijn ##.x.159 5 0) 0)) ((bruijn ##.k.513 2 0) (bruijn ##.reg.649 0 0))) ((bruijn ##.k.513 1 0) #f))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
}
static void _V10_Dpreprocess__expr_D121_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.511 0 0) ((bruijn ##.k.510 2 0) (bruijn ##.expr.133 8 1)) ((bruijn ##.error.68 12 3) (bruijn ##.k.510 2 0) (##string ##.string.674) (bruijn ##.x.159 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D674.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D121_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k81) (close _V10_Dpreprocess__expr_D121_V0k82))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k82, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k80) (##inline ##vcore.not (bruijn ##.x.159 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k80, self)), 1,
      VInlineNot2(runtime,
        statics->vars[0]));
}
static void _V10_Dpreprocess__expr_D121_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.20.158 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k79) (close _V10_Dpreprocess__expr_D121_V0lambda23) (bruijn ##.kk.5.135 4 1)) ((bruijn ##.k.505 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k79, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda23, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.158 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k78) (##inline ##vcore.car (bruijn ##.expr.20.158 0 0))) ((bruijn ##.k.505 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k78, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.506 0 0) ((close _V10_Dpreprocess__expr_D121_V0k77) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.505 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k77, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k76) 'lambda (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.505 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k76, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.497 0 0) (bruijn ##.k.493 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.646 1 0) (basic-block 1 1 (##.reg.647) ((##vcore.>= (bruijn ##.x.162 4 0) 0)) ((bruijn ##.k.501 1 0) (bruijn ##.reg.647 0 0))) ((bruijn ##.k.501 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->up->up->up->vars[0],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.499 0 0) ((bruijn ##.k.498 2 0) (bruijn ##.expr.133 8 1)) ((bruijn ##.error.68 12 3) (bruijn ##.k.498 2 0) (##string ##.string.675) (bruijn ##.x.162 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D675.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D121_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.646) ((##vcore.int? (bruijn ##.x.162 2 0))) ((close _V10_Dpreprocess__expr_D121_V0k89) (close _V10_Dpreprocess__expr_D121_V0k90)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k89, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k90, self)))));
    }
}
static void _V10_Dpreprocess__expr_D121_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.161 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k88) (close _V10_Dpreprocess__expr_D121_V0lambda24) (bruijn ##.kk.5.135 4 1)) ((bruijn ##.k.493 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k88, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda24, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.161 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k87) (##inline ##vcore.car (bruijn ##.expr.22.161 0 0))) ((bruijn ##.k.493 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k87, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.494 0 0) ((close _V10_Dpreprocess__expr_D121_V0k86) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.493 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k86, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k85) 'lambda+ (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.493 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k85, self)))),
      _V0lambda_P,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.475 0 0) (bruijn ##.k.470 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D121_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.640 1 0) (basic-block 1 1 (##.reg.645) ((##vcore.>= (bruijn ##.x.165 6 0) 0)) ((bruijn ##.k.489 1 0) (bruijn ##.reg.645 0 0))) ((bruijn ##.k.489 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.487 1 0)) ((bruijn ##.error.68 15 3) (bruijn ##.k.486 0 0) (##string ##.string.676) (bruijn ##.x.165 6 0)) ((bruijn ##.k.486 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D676.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.642 1 0) ((bruijn ##.assv.71 17 6) (bruijn ##.k.484 0 0) (bruijn ##.b.167 6 0) (bruijn ##.labels.119 14 0)) ((bruijn ##.k.484 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 6)), 3,
      _var0,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 14-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.55.168 0 0) (basic-block 1 1 (##.reg.643) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.55.168 1 0)) (bruijn ##.pc.134 14 2) 1)) ((bruijn ##.k.476 6 0) (##inline ##vcore.cons 'case-lambda (##inline ##vcore.cons (bruijn ##.x.165 9 0) (##inline ##vcore.cons (bruijn ##.reg.643 0 0) '()))))) (basic-block 1 1 (##.reg.644) ((##vcore.symbol? (bruijn ##.b.167 7 0))) (if (bruijn ##.reg.644 0 0) ((bruijn ##.error.68 18 3) (bruijn ##.k.476 6 0) (##string ##.string.677) (bruijn ##.b.167 7 0)) ((bruijn ##.error.68 18 3) (bruijn ##.k.476 6 0) (##string ##.string.678) (bruijn ##.b.167 7 0)))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VInlineCdr2(runtime,
        statics->vars[0]),
      VGetArg(statics, 14-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        VGetArg(statics, 9-1, 0),
        VInlineCons2(runtime,
        self->vars[0],
        VNULL))));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D677.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D678.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
    }
}
}
static void _V10_Dpreprocess__expr_D121_V0k102(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.641) ((##vcore.int? (bruijn ##.b.167 4 0))) (if (bruijn ##.reg.641 0 0) ((bruijn ##.k.476 3 0) (bruijn ##.expr.133 11 1)) (basic-block 1 1 (##.reg.642) ((##vcore.symbol? (bruijn ##.b.167 5 0))) ((close _V10_Dpreprocess__expr_D121_V0k103) (close _V10_Dpreprocess__expr_D121_V0k104)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VGetArg(statics, 11-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k104, self)))));
    }
}
    }
}
static void _V10_Dpreprocess__expr_D121_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k101) (close _V10_Dpreprocess__expr_D121_V0k102))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k101, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k102, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.640) ((##vcore.int? (bruijn ##.x.165 4 0))) ((close _V10_Dpreprocess__expr_D121_V0k99) (close _V10_Dpreprocess__expr_D121_V0k100)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k99, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k100, self)))));
    }
}
static void _V10_Dpreprocess__expr_D121_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.25.166 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k98) (close _V10_Dpreprocess__expr_D121_V0lambda25) (bruijn ##.kk.5.135 6 1)) ((bruijn ##.k.470 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k98, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda25, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.166 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k97) (##inline ##vcore.car (bruijn ##.expr.25.166 0 0))) ((bruijn ##.k.470 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k97, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k96) (##inline ##vcore.cdr (bruijn ##.expr.24.164 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k96, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpreprocess__expr_D121_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.164 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k95) (##inline ##vcore.car (bruijn ##.expr.24.164 0 0))) ((bruijn ##.k.470 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k95, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.471 0 0) ((close _V10_Dpreprocess__expr_D121_V0k94) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.470 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k94, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k93) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.470 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k93, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.452 0 0) (bruijn ##.k.447 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D121_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.634 1 0) (basic-block 1 1 (##.reg.639) ((##vcore.>= (bruijn ##.x.172 6 0) 0)) ((bruijn ##.k.466 1 0) (bruijn ##.reg.639 0 0))) ((bruijn ##.k.466 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.464 1 0)) ((bruijn ##.error.68 15 3) (bruijn ##.k.463 0 0) (##string ##.string.679) (bruijn ##.x.172 6 0)) ((bruijn ##.k.463 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D679.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.636 1 0) ((bruijn ##.assv.71 17 6) (bruijn ##.k.461 0 0) (bruijn ##.b.174 6 0) (bruijn ##.labels.119 14 0)) ((bruijn ##.k.461 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 6)), 3,
      _var0,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 14-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.56.175 0 0) (basic-block 1 1 (##.reg.637) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.56.175 1 0)) (bruijn ##.pc.134 14 2) 1)) ((bruijn ##.k.453 6 0) (##inline ##vcore.cons 'case-lambda+ (##inline ##vcore.cons (bruijn ##.x.172 9 0) (##inline ##vcore.cons (bruijn ##.reg.637 0 0) '()))))) (basic-block 1 1 (##.reg.638) ((##vcore.symbol? (bruijn ##.b.174 7 0))) (if (bruijn ##.reg.638 0 0) ((bruijn ##.error.68 18 3) (bruijn ##.k.453 6 0) (##string ##.string.680) (bruijn ##.b.174 7 0)) ((bruijn ##.error.68 18 3) (bruijn ##.k.453 6 0) (##string ##.string.681) (bruijn ##.b.174 7 0)))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VInlineCdr2(runtime,
        statics->vars[0]),
      VGetArg(statics, 14-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        _V0case__lambda_P,
        VInlineCons2(runtime,
        VGetArg(statics, 9-1, 0),
        VInlineCons2(runtime,
        self->vars[0],
        VNULL))));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D680.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D681.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
    }
}
}
static void _V10_Dpreprocess__expr_D121_V0k116(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.635) ((##vcore.int? (bruijn ##.b.174 4 0))) (if (bruijn ##.reg.635 0 0) ((bruijn ##.k.453 3 0) (bruijn ##.expr.133 11 1)) (basic-block 1 1 (##.reg.636) ((##vcore.symbol? (bruijn ##.b.174 5 0))) ((close _V10_Dpreprocess__expr_D121_V0k117) (close _V10_Dpreprocess__expr_D121_V0k118)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VGetArg(statics, 11-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k117, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k118, self)))));
    }
}
    }
}
static void _V10_Dpreprocess__expr_D121_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k115) (close _V10_Dpreprocess__expr_D121_V0k116))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k115, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k116, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.634) ((##vcore.int? (bruijn ##.x.172 4 0))) ((close _V10_Dpreprocess__expr_D121_V0k113) (close _V10_Dpreprocess__expr_D121_V0k114)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k113, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k114, self)))));
    }
}
static void _V10_Dpreprocess__expr_D121_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.173 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k112) (close _V10_Dpreprocess__expr_D121_V0lambda26) (bruijn ##.kk.5.135 6 1)) ((bruijn ##.k.447 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k112, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda26, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.173 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k111) (##inline ##vcore.car (bruijn ##.expr.28.173 0 0))) ((bruijn ##.k.447 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k111, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k110) (##inline ##vcore.cdr (bruijn ##.expr.27.171 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k110, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpreprocess__expr_D121_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.171 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k109) (##inline ##vcore.car (bruijn ##.expr.27.171 0 0))) ((bruijn ##.k.447 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k109, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.448 0 0) ((close _V10_Dpreprocess__expr_D121_V0k108) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.447 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k108, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k107) 'case-lambda+ (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.447 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k107, self)))),
      _V0case__lambda_P,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.442 0 0) (bruijn ##.k.437 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.443 0 0) (bruijn ##.expr.133 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dpreprocess__expr_D121_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.180 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.180 0 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k124) (close _V10_Dpreprocess__expr_D121_V0lambda27) (bruijn ##.kk.5.135 4 1)) ((bruijn ##.k.437 3 0) #f)) ((bruijn ##.k.437 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k124, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda27, self)))),
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
static void _V10_Dpreprocess__expr_D121_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.178 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k123) (##inline ##vcore.cdr (bruijn ##.expr.30.178 0 0))) ((bruijn ##.k.437 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k123, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.438 0 0) ((close _V10_Dpreprocess__expr_D121_V0k122) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.437 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k122, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k121) 'case-lambda-error (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.437 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k121, self)))),
      _V0case__lambda__error,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.416 0 0) (bruijn ##.k.413 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dpreprocess__expr_D121_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.name.185 3 0)) (basic-block 1 1 (##.reg.633) ((##vcore.string? (##inline ##vcore.car (bruijn ##.name.185 4 0)))) ((bruijn ##.k.432 1 0) (bruijn ##.reg.633 0 0))) ((bruijn ##.k.432 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[0]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.429 1 0) (##inline ##vcore.not (bruijn ##.x.430 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Dpreprocess__expr_D121_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.name.185 2 0))) ((close _V10_Dpreprocess__expr_D121_V0k133) (close _V10_Dpreprocess__expr_D121_V0k134)) ((bruijn ##.k.429 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        statics->up->vars[0])))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k133, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k134, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.426 1 0) ((bruijn ##.error.68 13 3) (bruijn ##.k.427 0 0) (##string ##.string.682)) ((bruijn ##.k.427 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D682.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.629 1 0) ((bruijn ##.assv.71 14 6) (bruijn ##.k.425 0 0) (bruijn ##.x.184 5 0) (bruijn ##.labels.119 11 0)) ((bruijn ##.k.425 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 6)), 3,
      _var0,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.631 1 0) (basic-block 1 1 (##.reg.632) ((##vcore.>= (bruijn ##.x.184 9 0) 0)) ((bruijn ##.k.423 1 0) (bruijn ##.reg.632 0 0))) ((bruijn ##.k.423 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.421 0 0) ((bruijn ##.k.417 6 0) (bruijn ##.expr.133 13 1)) ((bruijn ##.error.68 17 3) (bruijn ##.k.417 6 0) (##string ##.string.684) (bruijn ##.x.184 8 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 3)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D684.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
}
static void _V10_Dpreprocess__expr_D121_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.57.186 0 0) ((bruijn ##.k.417 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.57.186 0 0)) (bruijn ##.name.185 4 0)))) (basic-block 1 1 (##.reg.630) ((##vcore.symbol? (bruijn ##.x.184 6 0))) (if (bruijn ##.reg.630 0 0) ((bruijn ##.error.68 15 3) (bruijn ##.k.417 4 0) (##string ##.string.683) (bruijn ##.x.184 6 0)) (basic-block 1 1 (##.reg.631) ((##vcore.int? (bruijn ##.x.184 7 0))) ((close _V10_Dpreprocess__expr_D121_V0k140) (close _V10_Dpreprocess__expr_D121_V0k141))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        VInlineCdr2(runtime,
        _var0),
        statics->up->up->up->vars[0])));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D683.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k141, self)))));
    }
}
    }
}
}
static void _V10_Dpreprocess__expr_D121_V0k137(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.629) ((##vcore.symbol? (bruijn ##.x.184 4 0))) ((close _V10_Dpreprocess__expr_D121_V0k138) (close _V10_Dpreprocess__expr_D121_V0k139)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k138, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k139, self)))));
    }
}
static void _V10_Dpreprocess__expr_D121_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k136) (close _V10_Dpreprocess__expr_D121_V0k137))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k136, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k137, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k132) (close _V10_Dpreprocess__expr_D121_V0k135))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k132, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k135, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k131) (close _V10_Dpreprocess__expr_D121_V0lambda28) (bruijn ##.kk.5.135 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k131, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda28, self)))),
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dpreprocess__expr_D121_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k130) (##inline ##vcore.cdr (bruijn ##.expr.33.183 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k130, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpreprocess__expr_D121_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.183 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k129) (##inline ##vcore.car (bruijn ##.expr.33.183 0 0))) ((bruijn ##.k.413 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k129, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.414 0 0) ((close _V10_Dpreprocess__expr_D121_V0k128) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.413 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k128, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k127) 'close (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.413 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k127, self)))),
      _V0close,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.400 0 0) (bruijn ##.k.396 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.625 1 0) ((bruijn ##.assv.71 12 6) (bruijn ##.k.409 0 0) (bruijn ##.x.190 3 0) (bruijn ##.labels.119 9 0)) ((bruijn ##.k.409 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 6)), 3,
      _var0,
      statics->up->up->vars[0],
      VGetArg(statics, 9-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.627 1 0) (basic-block 1 1 (##.reg.628) ((##vcore.>= (bruijn ##.x.190 7 0) 0)) ((bruijn ##.k.407 1 0) (bruijn ##.reg.628 0 0))) ((bruijn ##.k.407 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.405 0 0) ((bruijn ##.k.401 5 0) (bruijn ##.expr.133 11 1)) ((bruijn ##.error.68 15 3) (bruijn ##.k.401 5 0) (##string ##.string.685) (bruijn ##.x.190 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D685.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
}
}
static void _V10_Dpreprocess__expr_D121_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.58.191 0 0) ((bruijn ##.k.401 2 0) (##inline ##vcore.cons 'foreign-function (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.58.191 0 0)) '()))) (basic-block 1 1 (##.reg.626) ((##vcore.symbol? (bruijn ##.x.190 4 0))) (if (bruijn ##.reg.626 0 0) ((bruijn ##.error.68 13 3) (bruijn ##.k.401 3 0) (##string ##.string.683) (bruijn ##.x.190 4 0)) (basic-block 1 1 (##.reg.627) ((##vcore.int? (bruijn ##.x.190 5 0))) ((close _V10_Dpreprocess__expr_D121_V0k150) (close _V10_Dpreprocess__expr_D121_V0k151))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0foreign__function,
        VInlineCons2(runtime,
        VInlineCdr2(runtime,
        _var0),
        VNULL)));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D683.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k150, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k151, self)))));
    }
}
    }
}
}
static void _V10_Dpreprocess__expr_D121_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.625) ((##vcore.symbol? (bruijn ##.x.190 2 0))) ((close _V10_Dpreprocess__expr_D121_V0k148) (close _V10_Dpreprocess__expr_D121_V0k149)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k148, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k149, self)))));
    }
}
static void _V10_Dpreprocess__expr_D121_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.35.189 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k147) (close _V10_Dpreprocess__expr_D121_V0lambda29) (bruijn ##.kk.5.135 4 1)) ((bruijn ##.k.396 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k147, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda29, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.189 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k146) (##inline ##vcore.car (bruijn ##.expr.35.189 0 0))) ((bruijn ##.k.396 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k146, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.397 0 0) ((close _V10_Dpreprocess__expr_D121_V0k145) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.396 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k145, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k144) 'foreign-function (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.396 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k144, self)))),
      _V0foreign__function,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.380 0 0) (bruijn ##.k.375 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D121_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.621 1 0) ((bruijn ##.assv.71 15 6) (bruijn ##.k.391 0 0) (bruijn ##.x.197 4 0) (bruijn ##.labels.119 12 0)) ((bruijn ##.k.391 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 6)), 3,
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 12-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.623 1 0) (basic-block 1 1 (##.reg.624) ((##vcore.>= (bruijn ##.x.197 8 0) 0)) ((bruijn ##.k.389 1 0) (bruijn ##.reg.624 0 0))) ((bruijn ##.k.389 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.387 0 0) ((bruijn ##.k.381 6 0) (bruijn ##.expr.133 14 1)) ((bruijn ##.error.68 18 3) (bruijn ##.k.381 6 0) (##string ##.string.688) (bruijn ##.x.197 7 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D688.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
}
static void _V10_Dpreprocess__expr_D121_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.59.198 0 0) ((bruijn ##.k.381 3 0) (##inline ##vcore.cons 'declare (##inline ##vcore.cons (bruijn ##.name.195 6 0) (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.59.198 0 0)) '())))) (basic-block 1 1 (##.reg.622) ((##vcore.symbol? (bruijn ##.x.197 5 0))) (if (bruijn ##.reg.622 0 0) ((bruijn ##.error.68 16 3) (bruijn ##.k.381 4 0) (##string ##.string.687) (bruijn ##.x.197 5 0)) (basic-block 1 1 (##.reg.623) ((##vcore.int? (bruijn ##.x.197 6 0))) ((close _V10_Dpreprocess__expr_D121_V0k162) (close _V10_Dpreprocess__expr_D121_V0k163))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0declare,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        VInlineCdr2(runtime,
        _var0),
        VNULL))));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 3)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D687.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k162, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k163, self)))));
    }
}
    }
}
}
static void _V10_Dpreprocess__expr_D121_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.620) ((##vcore.string? (bruijn ##.name.195 4 0))) (if (##inline ##vcore.not (bruijn ##.reg.620 0 0)) ((bruijn ##.error.68 13 3) (bruijn ##.k.381 1 0) (##string ##.string.686) (bruijn ##.x.197 2 0)) (basic-block 1 1 (##.reg.621) ((##vcore.symbol? (bruijn ##.x.197 3 0))) ((close _V10_Dpreprocess__expr_D121_V0k160) (close _V10_Dpreprocess__expr_D121_V0k161)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D686.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k160, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k161, self)))));
    }
}
    }
}
static void _V10_Dpreprocess__expr_D121_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.38.196 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k159) (close _V10_Dpreprocess__expr_D121_V0lambda30) (bruijn ##.kk.5.135 6 1)) ((bruijn ##.k.375 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k159, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda30, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.196 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k158) (##inline ##vcore.car (bruijn ##.expr.38.196 0 0))) ((bruijn ##.k.375 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k158, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k157) (##inline ##vcore.cdr (bruijn ##.expr.37.194 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k157, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpreprocess__expr_D121_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.194 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k156) (##inline ##vcore.car (bruijn ##.expr.37.194 0 0))) ((bruijn ##.k.375 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k156, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.376 0 0) ((close _V10_Dpreprocess__expr_D121_V0k155) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.375 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k155, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k154) 'declare (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.375 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k154, self)))),
      _V0declare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D209_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D209_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D209_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.45.208 4 1) (bruijn ##.k.366 1 0) (bruijn ##.expr.47.210 2 1) (bruijn ##.x.367 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D209_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D209_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D209_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.47.210 1 1))) ((bruijn ##.reverse.70 15 5) (close _V10_Dloop_D209_V0k171) (bruijn ##.args.44.211 1 2)) ((bruijn ##.k.366 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D209_V0k171, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D209_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D209_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D209_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.45.208 5 1) (bruijn ##.k.361 1 0) (bruijn ##.expr.47.210 3 1) (bruijn ##.x.362 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D209_V0k173(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.70 16 5) (close _V10_Dloop_D209_V0k174) (bruijn ##.args.44.211 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D209_V0k174, self)))),
      statics->up->vars[2]);
}
static void _V10_Dloop_D209_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D209_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D209_V0lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.46.212 0 1) (close _V10_Dloop_D209_V0k173) (##inline ##vcore.cdr (bruijn ##.expr.47.210 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.47.210 2 1)) (bruijn ##.args.44.211 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D209_V0k173, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
static void _V10_Dloop_D209_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D209_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D209_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.360 0 0) (close _V10_Dloop_D209_V0lambda35))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D209_V0lambda35, self)))));
}
static void _V10_Dloop_D209_V0k172(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.359 0 0) (close _V10_Dloop_D209_V0lambda34) (bruijn ##.loop.209 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D209_V0lambda34, self)))),
      statics->vars[0]);
}
static void _V10_Dloop_D209_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D209_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D209_V0lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D209_V0k170) (close _V10_Dloop_D209_V0k172))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D209_V0k170, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D209_V0k172, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D209_V0lambda33)) ((bruijn ##.loop.209 0 0) (bruijn ##.k.358 1 0) (##inline ##vcore.cdr (bruijn ##.expr.42.205 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D209_V0lambda33, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[0]),
      VNULL);
    }
}
static void _V10_Dpreprocess__expr_D121_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.357 0 0) (close _V10_Dpreprocess__expr_D121_V0lambda32))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda32, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.371 0 0) (bruijn ##.k.369 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.372 0 0) (bruijn ##.expr.133 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dpreprocess__expr_D121_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.214 0 1)) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k175) (close _V10_Dpreprocess__expr_D121_V0lambda37) (bruijn ##.kk.5.135 6 1)) ((bruijn ##.k.369 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k175, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda37, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.205 0 0)) (##vcore.call-with-values (bruijn ##.k.352 4 0) (close _V10_Dpreprocess__expr_D121_V0lambda31) (close _V10_Dpreprocess__expr_D121_V0lambda36)) ((bruijn ##.k.352 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda31, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda36, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.203 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k169) (##inline ##vcore.cdr (bruijn ##.expr.41.203 0 0))) ((bruijn ##.k.352 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k169, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.201 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k168) (##inline ##vcore.cdr (bruijn ##.expr.40.201 0 0))) ((bruijn ##.k.352 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k168, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.353 0 0) ((close _V10_Dpreprocess__expr_D121_V0k167) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.352 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k167, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k166) 'declare-foreign (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.352 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k166, self)))),
      _V0declare__foreign,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.347 0 0) (bruijn ##.k.344 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.348 0 0) (bruijn ##.expr.133 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
static void _V10_Dpreprocess__expr_D121_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.345 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k179) (close _V10_Dpreprocess__expr_D121_V0lambda38) (bruijn ##.kk.5.135 2 1)) ((bruijn ##.k.344 1 0) #f)) ((bruijn ##.k.344 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k179, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda38, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k178) 'push-set! (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.344 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k178, self)))),
      _V0push__set_B,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.332 0 0) (bruijn ##.k.328 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.617 1 0) ((bruijn ##.assv.71 13 6) (bruijn ##.k.340 0 0) (bruijn ##.x.219 4 0) (bruijn ##.labels.119 10 0)) ((bruijn ##.k.340 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 6)), 3,
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 10-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.60.220 0 0) (basic-block 1 1 (##.reg.618) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.60.220 1 0)) (bruijn ##.pc.134 10 2) 1)) ((bruijn ##.k.333 4 0) (##inline ##vcore.cons 'bf (##inline ##vcore.cons (bruijn ##.reg.618 0 0) '())))) (basic-block 1 1 (##.reg.619) ((##vcore.symbol? (bruijn ##.x.219 5 0))) (if (bruijn ##.reg.619 0 0) ((bruijn ##.error.68 14 3) (bruijn ##.k.333 4 0) (##string ##.string.689) (bruijn ##.x.219 5 0)) ((bruijn ##.error.68 14 3) (bruijn ##.k.333 4 0) (##string ##.string.690) (bruijn ##.x.219 5 0)))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VInlineCdr2(runtime,
        statics->vars[0]),
      VGetArg(statics, 10-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0bf,
        VInlineCons2(runtime,
        self->vars[0],
        VNULL)));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D689.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D690.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
}
    }
}
}
static void _V10_Dpreprocess__expr_D121_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.616) ((##vcore.int? (bruijn ##.x.219 2 0))) (if (bruijn ##.reg.616 0 0) ((bruijn ##.k.333 1 0) (bruijn ##.expr.133 7 1)) (basic-block 1 1 (##.reg.617) ((##vcore.symbol? (bruijn ##.x.219 3 0))) ((close _V10_Dpreprocess__expr_D121_V0k186) (close _V10_Dpreprocess__expr_D121_V0k187)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 7-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k186, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k187, self)))));
    }
}
    }
}
static void _V10_Dpreprocess__expr_D121_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.50.218 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k185) (close _V10_Dpreprocess__expr_D121_V0lambda39) (bruijn ##.kk.5.135 4 1)) ((bruijn ##.k.328 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k185, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda39, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.218 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k184) (##inline ##vcore.car (bruijn ##.expr.50.218 0 0))) ((bruijn ##.k.328 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k184, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.329 0 0) ((close _V10_Dpreprocess__expr_D121_V0k183) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.328 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k183, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k182) 'bf (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.328 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k182, self)))),
      _V0bf,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.317 0 0) (bruijn ##.k.314 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dpreprocess__expr_D121_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.323 0 0) ((bruijn ##.k.321 2 0) (bruijn ##.p.323 0 0)) (if (##inline ##vcore.pair? (bruijn ##.name.225 5 0)) (basic-block 1 1 (##.reg.615) ((##vcore.string? (##inline ##vcore.car (bruijn ##.name.225 6 0)))) ((bruijn ##.k.321 3 0) (bruijn ##.reg.615 0 0))) ((bruijn ##.k.321 2 0) #f)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 0)))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
}
static void _V10_Dpreprocess__expr_D121_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.613 1 0) (basic-block 1 1 (##.reg.614) ((##vcore.>= (bruijn ##.x.224 5 0) 0)) (if (bruijn ##.reg.614 0 0) ((close _V10_Dpreprocess__expr_D121_V0k196) (##inline ##vcore.null? (bruijn ##.name.225 4 0))) ((bruijn ##.k.321 1 0) #f))) ((bruijn ##.k.321 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k196, self)), 1,
      VInlineNullP2(runtime,
        statics->up->up->up->vars[0]));
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
static void _V10_Dpreprocess__expr_D121_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.319 0 0) ((bruijn ##.k.318 2 0) (bruijn ##.expr.133 9 1)) ((bruijn ##.error.68 13 3) (bruijn ##.k.318 2 0) (##string ##.string.691) (bruijn ##.expr.133 9 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D691.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 1));
}
}
static void _V10_Dpreprocess__expr_D121_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.613) ((##vcore.int? (bruijn ##.x.224 3 0))) ((close _V10_Dpreprocess__expr_D121_V0k195) (close _V10_Dpreprocess__expr_D121_V0k197)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k195, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k197, self)))));
    }
}
static void _V10_Dpreprocess__expr_D121_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k194) (close _V10_Dpreprocess__expr_D121_V0lambda40) (bruijn ##.kk.5.135 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k194, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda40, self)))),
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dpreprocess__expr_D121_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D121_V0k193) (##inline ##vcore.cdr (bruijn ##.expr.52.223 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k193, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpreprocess__expr_D121_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.223 0 0)) ((close _V10_Dpreprocess__expr_D121_V0k192) (##inline ##vcore.car (bruijn ##.expr.52.223 0 0))) ((bruijn ##.k.314 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k192, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.315 0 0) ((close _V10_Dpreprocess__expr_D121_V0k191) (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) ((bruijn ##.k.314 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k191, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k190) 'letrec-begin (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.314 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k190, self)))),
      _V0letrec__begin,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.309 0 0) (bruijn ##.k.306 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D121_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.310 0 0) (bruijn ##.expr.133 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
static void _V10_Dpreprocess__expr_D121_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.307 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.133 3 1))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D121_V0k201) (close _V10_Dpreprocess__expr_D121_V0lambda41) (bruijn ##.kk.5.135 2 1)) ((bruijn ##.k.306 1 0) #f)) ((bruijn ##.k.306 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k201, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda41, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133 2 1)) ((bruijn ##.equal?.67 6 2) (close _V10_Dpreprocess__expr_D121_V0k200) 'letrec-end (##inline ##vcore.car (bruijn ##.expr.133 2 1))) ((bruijn ##.k.306 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k200, self)))),
      _V0letrec__end,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D121_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.68 6 3) (bruijn ##.k.304 0 0) (##string ##.string.692) (bruijn ##.expr.133 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D692.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
static void _V10_Dpreprocess__expr_D121_V0k202(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.303 0 0) (close _V10_Dpreprocess__expr_D121_V0lambda42) (bruijn ##.kk.5.135 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda42, self)))),
      self->vars[1]);
}
static void _V10_Dpreprocess__expr_D121_V0k198(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k199) (close _V10_Dpreprocess__expr_D121_V0k202))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k199, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k202, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k188(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k189) (close _V10_Dpreprocess__expr_D121_V0k198))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k189, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k198, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k180(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k181) (close _V10_Dpreprocess__expr_D121_V0k188))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k181, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k188, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k176(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k177) (close _V10_Dpreprocess__expr_D121_V0k180))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k177, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k180, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k164(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k165) (close _V10_Dpreprocess__expr_D121_V0k176))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k165, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k176, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k152(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k153) (close _V10_Dpreprocess__expr_D121_V0k164))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k153, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k164, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k142(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k143) (close _V10_Dpreprocess__expr_D121_V0k152))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k143, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k152, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k125(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k126) (close _V10_Dpreprocess__expr_D121_V0k142))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k126, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k142, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k119(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k120) (close _V10_Dpreprocess__expr_D121_V0k125))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k120, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k125, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k105(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k106) (close _V10_Dpreprocess__expr_D121_V0k119))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k106, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k119, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k91(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k92) (close _V10_Dpreprocess__expr_D121_V0k105))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k92, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k105, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k83(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k84) (close _V10_Dpreprocess__expr_D121_V0k91))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k84, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k91, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k75) (close _V10_Dpreprocess__expr_D121_V0k83))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k83, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k67) (close _V10_Dpreprocess__expr_D121_V0k74))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k67, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k74, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k60(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k61) (close _V10_Dpreprocess__expr_D121_V0k66))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k61, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k66, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k50(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k51) (close _V10_Dpreprocess__expr_D121_V0k60))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k60, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k43) (close _V10_Dpreprocess__expr_D121_V0k50))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k50, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V10_Dpreprocess__expr_D121_V0k38) (close _V10_Dpreprocess__expr_D121_V0k42))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k38, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k42, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dpreprocess__expr_D121_V0k34) (close _V10_Dpreprocess__expr_D121_V0k37))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0k37, self)))));
}
static void _V10_Dpreprocess__expr_D121_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D121_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D121_V0lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.302 0 0) (close _V10_Dpreprocess__expr_D121_V0lambda16))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda16, self)))));
}
static void _V10_Dpreprocess__loop_D228_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D228_V0k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D228_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (##inline ##vcore.eq? (bruijn ##.e.231 2 0) (bruijn ##.reg.661 1 0))) (##vcore.vector-set! (bruijn ##.k.588 0 0) (bruijn ##.tape.229 5 1) (bruijn ##.pc.230 5 2) (bruijn ##.e.231 2 0)) ((bruijn ##.k.588 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineEq2(runtime,
        statics->up->vars[0],
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      _var0,
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 2),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__loop_D228_V0k205(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.662) ((##vcore.+ (bruijn ##.pc.230 5 2) 1)) ((bruijn ##.preprocess-loop.228 6 0) (bruijn ##.k.584 5 0) (bruijn ##.tape.229 5 1) (bruijn ##.reg.662 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 5-1, 1),
      self->vars[0]);
    }
}
static void _V10_Dpreprocess__loop_D228_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D228_V0k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D228_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.661) ((##vcore.vector-ref (bruijn ##.tape.229 4 1) (bruijn ##.pc.230 4 2))) ((close _V10_Dpreprocess__loop_D228_V0k204) (close _V10_Dpreprocess__loop_D228_V0k205)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D228_V0k204, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D228_V0k205, self)))));
    }
}
static void _V10_Dpreprocess__loop_D228_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D228_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D228_V0lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.659) ((##vcore.>= (bruijn ##.pc.230 1 2) (bruijn ##.reg.658 3 0))) (if (bruijn ##.reg.659 0 0) ((bruijn ##.k.584 1 0) (bruijn ##.tape.229 1 1)) (basic-block 1 1 (##.reg.660) ((##vcore.vector-ref (bruijn ##.tape.229 2 1) (bruijn ##.pc.230 2 2))) ((bruijn ##.preprocess-expr.121 5 2) (close _V10_Dpreprocess__loop_D228_V0k203) (bruijn ##.reg.660 0 0) (bruijn ##.pc.230 2 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->vars[2],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->vars[1],
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D228_V0k203, self)))),
      self->vars[0],
      statics->up->vars[2]);
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.preprocess-loop.228 1 0) (bruijn ##.k.277 4 0) (bruijn ##.x.592 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->up->vars[0],
      _var0,
      VEncodeInt(0l));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 3 ('() (close _V10_Dpeel__labels_D120_V0lambda10) (close _V10_Dpreprocess__expr_D121_V0lambda15)) (basic-block 1 1 (##.reg.658) ((##vcore.vector-length (bruijn ##.tape.118 2 1))) (letrec 1 ((close _V10_Dpreprocess__loop_D228_V0lambda43)) ((bruijn ##.peel-labels.120 2 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k206) (bruijn ##.tape.118 3 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VNULL;
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpeel__labels_D120_V0lambda10, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D121_V0lambda15, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D228_V0lambda43, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k206, self)))),
      statics->up->up->vars[1]);
    }
    }
    }
}
static void _V0vanity_V0bytecode_V20_V0k210(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.239 3 0) (##inline ##vcore.cons (##inline ##vcore.cons 'eval-vasm (bruijn ##.eval-vasm.91 2 0)) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eval__vasm,
        statics->up->vars[0]),
        VNULL));
}
static void _V0vanity_V0bytecode_V20_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0bytecode_V20_V0k210) (bruijn ##.eval-vasm-toplevel.94 2 3) (bruijn ##.x.594 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k210, self)))),
      VEncodeInt(2l), VEncodeInt(3l),
      _var0
    );
}
static void _V0vanity_V0bytecode_V20_V0k208(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.function (close _V0vanity_V0bytecode_V20_V0k209) (##string ##.string.693))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k209, self)))),
      VEncodePointer(&_V10_Dstring_D693.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0bytecode_V20_V0k208) (bruijn ##.make-vasm-lambda.95 1 4) (bruijn ##.x.595 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k208, self)))),
      VEncodeInt(1l), VEncodeInt(4l),
      _var0
    );
}
static void _V0vanity_V0bytecode_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 7) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0lambda3, got ~D~N"
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
  // (##letrec (vanity bytecode) 7 ((close "_V50_V0vanity_V0bytecode_V0eval__vasm" (vanity bytecode)) (close "_V50_V0vanity_V0bytecode_V0find__toplevel" (vanity bytecode)) (close "_V50_V0vanity_V0bytecode_V0set__declares_B" (vanity bytecode)) #f #f (close "_V50_V0vanity_V0bytecode_V0find__declare" (vanity bytecode)) (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm" (vanity bytecode))) (##vcore.function (close _V0vanity_V0bytecode_V20_V0k207) (##string ##.string.694)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    _V60_V0vanity_V0bytecode = self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm, _V60_V0vanity_V0bytecode))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__toplevel, _V60_V0vanity_V0bytecode))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B, _V60_V0vanity_V0bytecode))));
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__declare, _V60_V0vanity_V0bytecode))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm, _V60_V0vanity_V0bytecode))));
    VRegisterStaticEnv("_V0vanity_V0bytecode_V20", &_V60_V0vanity_V0bytecode);
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k207, self)))),
      VEncodePointer(&_V10_Dstring_D694.sym, VPOINTER_OTHER));
    }
}
static void _V0vanity_V0bytecode_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.233 0 0) (close _V0vanity_V0bytecode_V20_V0lambda2) (close _V0vanity_V0bytecode_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0bytecode_V20 = (VFunc)_V0vanity_V0bytecode_V20_V0lambda1;
