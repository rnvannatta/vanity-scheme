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

static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D678 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VMakeVasmLambda" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D677 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEvalVasmToplevel" };
VWEAK VWORD _V0eval__vasm;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0eval__vasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "eval-vasm" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D676 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm: unknown or malformed line" };
VWEAK VWORD _V0letrec__end;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0letrec__end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "letrec-end" };
VWEAK VWORD _V0letrec__begin;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0letrec__begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "letrec-begin" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D675 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm letrec-begin an integer" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D674 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "vasm bf: not an integer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D673 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "vasm bf: unknown label" };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
VWEAK VWORD _V0push__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0push__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "push-set!" };
VWEAK VWORD _V0declare__foreign;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0declare__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "declare-foreign" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D672 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm declare: not a nonnegative integer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D671 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "vasm declare: unknown label" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D670 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vasm declare: not a string" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D669 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "vasm foreign-function: not a nonnegative integer" };
VWEAK VWORD _V0foreign__function;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D668 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "vasm close: not a nonnegative integer" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D667 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm close: unknown label" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
VWEAK VWORD _V0case__lambda__error;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0case__lambda__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "case-lambda-error" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D666 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "vasm case-lambda+: not an integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D665 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda+: unknown label" };
VWEAK VWORD _V0case__lambda_P;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0case__lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "case-lambda+" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D664 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "vasm case-lambda+: not a nonnegative integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D663 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda: not an integer" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D662 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm case-lambda: unknown label" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D661 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "vasm case-lambda: not a nonnegative integer" };
VWEAK VWORD _V0lambda_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "lambda+" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D660 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm lambda+: not a nonnegative integer" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D659 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vasm lambda: not a nonnegative integer" };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D658 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "vasm call: not a nonnegative integer" };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D657 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm lookup: not a symbol" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D656 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm bruijn: not both nonnegative integers" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D655 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm intrinsic: not a recognized intrinsic" };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
VWEAK VWORD _V40VFunction3;
VWEAK VClosure _VW_V40VFunction3 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFunction3, NULL };
VWEAK VWORD _V0push;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0push = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "push" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D654 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm label: label declared twice" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D653 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "vasm label: not a symbol" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D652 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "declare not declare\?" };
VWEAK VWORD _V0declare;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "declare" };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D651 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D650 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D649 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D648 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_V0vanity_V0bytecode_V20" };
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
  _V40VFunction3 = VEncodePointer(VLookupConstant("_V40VFunction3", &_VW_V40VFunction3), VPOINTER_CLOSURE);
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
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0find__declare, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0set__declares_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0find__toplevel, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0eval__vasm, _var0, _var1);
static void _V0vanity_V0bytecode_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.230 4 0) (##string ##.string.648) (bruijn ##.x.231 0 0) 'values 'equal? 'error 'lookup-intrinsic 'reverse 'assv)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 9,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D648.sym, VPOINTER_OTHER),
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
  // (##vcore.vector (close _V0vanity_V0bytecode_V20_V0k4) (bruijn ##.x.232 2 0) (bruijn ##.x.233 1 0) (bruijn ##.x.234 0 0))
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
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k3) (##string ##.string.649))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D649.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k2) (##string ##.string.650))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D650.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k1) (##string ##.string.651))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D651.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.240 1 0) (bruijn ##.program-counter.98 3 1) (bruijn ##.x.241 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.program-counter.98 2 1) (##qualified-call (vanity bytecode find-toplevel) #t (bruijn ##.find-toplevel.90 5 1) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k7) (bruijn ##.tape.97 2 0) (bruijn ##.program-counter.98 2 1)) ((bruijn ##.k.240 0 0) #f))
if(VDecodeBool(
statics->up->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k7, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__toplevel, _V60_V0vanity_V0bytecode)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__toplevel(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval-vasm-toplevel.92 5 3) (bruijn ##.k.239 0 0) (bruijn ##.tape.97 2 0) (bruijn ##.program-counter.98 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 3,
      _var0,
      statics->up->vars[0],
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k8(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (bruijn ##.program-counter.98 1 1) (##vcore.call-with-values (bruijn ##.k.238 0 0) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0lambda4) (bruijn ##.eval-loop.99 1 2)) (##vcore.apply (bruijn ##.k.238 0 0) (bruijn ##.values.66 5 1) (bruijn ##.rets.100 0 1)))
if(VDecodeBool(
statics->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0lambda4, self)))),
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      self->vars[0],
      VGetArg(statics, 5-1, 1),
      self->vars[1]);
}
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99, got ~D~N"
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
  // ((close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k6) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k8))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99_V0k8, self)))));
}
static void _V50_V0vanity_V0bytecode_V0eval__vasm_V0k9(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity bytecode eval-vasm ##.eval-loop.99) #f (bruijn ##.eval-loop.99 0 2) (bruijn ##.k.236 2 0))
  {
    VClosure * _closure = VDecodeClosure(self->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99(runtime, _closure_env, 1, _arg0);
    }
  }
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
  // (letrec 3 ((bruijn ##.x.237 1 0) 0 (close "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99")) (##qualified-call (vanity bytecode set-declares!) #t (bruijn ##.set-declares!.91 3 2) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V0k9) (bruijn ##.tape.97 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeInt(0l);
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D99, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V0k9, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B, _V60_V0vanity_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0set__declares_B(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
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
  // (##qualified-call (vanity bytecode preprocess-vasm) #t (bruijn ##.preprocess-vasm.95 1 6) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V0k5) (bruijn ##.vasm.96 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V0k5, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm, _V60_V0vanity_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
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
  // (basic-block 2 2 (##.reg.583 ##.reg.584) ((##vcore.vector-length (bruijn ##.tape.101 1 1)) (##vcore.>= (bruijn ##.program-counter.102 1 2) (bruijn ##.reg.583 0 0))) (if (bruijn ##.reg.584 0 1) ((bruijn ##.k.242 1 0) #f) (basic-block 1 1 (##.reg.585) ((##vcore.vector-ref (bruijn ##.tape.101 2 1) (bruijn ##.program-counter.102 2 2))) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.reg.585 0 0)) 'toplevel) (basic-block 1 1 (##.reg.586) ((##vcore.+ (bruijn ##.program-counter.102 3 2) 1)) ((bruijn ##.k.242 3 0) (bruijn ##.reg.586 0 0))) (basic-block 1 1 (##.reg.587) ((##vcore.+ 1 (bruijn ##.program-counter.102 3 2))) (##qualified-call (vanity bytecode find-toplevel) #t (bruijn ##.find-toplevel.90 4 1) (bruijn ##.k.242 3 0) (bruijn ##.tape.101 3 1) (bruijn ##.reg.587 0 0)))))))
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
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__toplevel, _V60_V0vanity_V0bytecode)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__toplevel(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode set-declares! ##.set-declare-loop.104) #f (bruijn ##.set-declare-loop.104 2 0) (bruijn ##.k.250 1 0) (bruijn ##.x.251 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity bytecode find-declare) #t (bruijn ##.find-declare.94 3 5) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k11) (bruijn ##.tape.103 2 1) (bruijn ##.pc.105 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k11, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__declare, _V60_V0vanity_V0bytecode)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__declare(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.261 0 0) (bruijn ##.k.256 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-declare! (bruijn ##.k.262 1 0) (##inline ##vcore.car (bruijn ##.expr.64.109 3 0)) (bruijn ##.x.263 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetDeclare, 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      _var0);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vasm-lambda.93 10 4) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k17) (bruijn ##.tape.103 9 1) (##inline ##vcore.car (bruijn ##.expr.65.111 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k17, self)))),
      VGetArg(statics, 9-1, 1),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.111 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.65.111 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k16) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda6) (bruijn ##.kk.61.106 5 1)) ((bruijn ##.k.256 3 0) #f)) ((bruijn ##.k.256 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k16, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda6, self)))),
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
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.109 0 0)) ((close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k15) (##inline ##vcore.cdr (bruijn ##.expr.64.109 0 0))) ((bruijn ##.k.256 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k15, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.257 0 0) ((close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k14) (##inline ##vcore.cdr (bruijn ##.reg.588 2 0))) ((bruijn ##.k.256 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k14, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.reg.588 1 0)) ((bruijn ##.equal?.67 7 2) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k13) 'declare (##inline ##vcore.car (bruijn ##.reg.588 1 0))) ((bruijn ##.k.256 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k13, self)))),
      _V0declare,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.589) ((##vcore.vector-ref (bruijn ##.tape.103 6 1) (bruijn ##.pc.105 4 1))) ((bruijn ##.error.68 8 3) (bruijn ##.k.253 1 0) (##string ##.string.652) (bruijn ##.reg.589 0 0)))
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
      VEncodePointer(&_V10_Dstring_D652.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.252 1 0) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda7) (bruijn ##.kk.61.106 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda7, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.588) ((##vcore.vector-ref (bruijn ##.tape.103 4 1) (bruijn ##.pc.105 2 1))) ((close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k12) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k18)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k12, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k18, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.pc.105 0 1) (##vcore.call/cc (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k10) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda5)) ((bruijn ##.k.250 0 0) #f))
if(VDecodeBool(
_var1)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0k10, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104_V0lambda5, self)))));
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
  // (##qualified-call (vanity bytecode set-declares! ##.set-declare-loop.104) #f (bruijn ##.set-declare-loop.104 1 0) (bruijn ##.k.249 2 0) (bruijn ##.x.266 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
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
  // (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104")) (##qualified-call (vanity bytecode find-declare) #t (bruijn ##.find-declare.94 2 5) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V0k19) (bruijn ##.tape.103 1 1) -1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D104, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V0k19, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(-1l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__declare, _V60_V0vanity_V0bytecode)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__declare(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
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
  // (basic-block 3 3 (##.reg.590 ##.reg.591 ##.reg.592) ((##vcore.+ (bruijn ##.program-counter.114 1 2) 1) (##vcore.vector-length (bruijn ##.tape.113 1 1)) (##vcore.>= (bruijn ##.reg.590 0 0) (bruijn ##.reg.591 0 1))) (if (bruijn ##.reg.592 0 2) ((bruijn ##.k.267 1 0) #f) (basic-block 1 1 (##.reg.593) ((##vcore.vector-ref (bruijn ##.tape.113 2 1) (bruijn ##.reg.590 1 0))) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.reg.593 0 0)) 'declare) ((bruijn ##.k.267 2 0) (bruijn ##.reg.590 1 0)) (##qualified-call (vanity bytecode find-declare) #t (bruijn ##.find-declare.94 3 5) (bruijn ##.k.267 2 0) (bruijn ##.tape.113 2 1) (bruijn ##.reg.590 1 0))))))
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
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__declare, _V60_V0vanity_V0bytecode)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__declare(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.286 0 0) (bruijn ##.k.281 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.reg.598 1 0)) ((bruijn ##.error.68 18 3) (bruijn ##.k.294 0 0) (##string ##.string.653) (bruijn ##.label.128 4 0)) ((bruijn ##.k.294 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D653.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.291 1 0) ((bruijn ##.error.68 19 3) (bruijn ##.k.292 0 0) (##string ##.string.654) (bruijn ##.label.128 5 0)) ((bruijn ##.k.292 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D654.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.599) ((##vcore.+ (bruijn ##.pc.123 12 1) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.118 ##.peel-loop.122) #f (bruijn ##.peel-loop.122 13 0) (bruijn ##.k.287 3 0) (bruijn ##.reg.599 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 12-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.vector-set! (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k32) (bruijn ##.tape.120 14 1) (bruijn ##.pc.123 11 1) (##inline ##vcore.car (bruijn ##.expr.4.129 3 0)))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k32, self)))),
      VGetArg(statics, 14-1, 1),
      VGetArg(statics, 11-1, 1),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k31) (bruijn ##.labels.117 15 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.label.128 4 0) (bruijn ##.pc.123 11 1)) (bruijn ##.labels.117 15 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k31, self)))),
      VEncodeInt(15l), VEncodeInt(0l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VGetArg(statics, 11-1, 1)),
        VGetArg(statics, 15-1, 0))
    );
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k29) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k30))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k30, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k27(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.assv.71 17 6) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k28) (bruijn ##.label.128 3 0) (bruijn ##.labels.117 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k28, self)))),
      statics->up->up->vars[0],
      VGetArg(statics, 14-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.598) ((##vcore.symbol? (bruijn ##.label.128 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k26) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k27)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k27, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.129 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.4.129 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k25) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda9) (bruijn ##.kk.0.124 6 1)) ((bruijn ##.k.281 4 0) #f)) ((bruijn ##.k.281 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k25, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda9, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k24) (##inline ##vcore.cdr (bruijn ##.expr.3.127 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k24, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.127 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k23) (##inline ##vcore.car (bruijn ##.expr.3.127 0 0))) ((bruijn ##.k.281 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k23, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.282 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k22) (##inline ##vcore.cdr (bruijn ##.reg.596 2 0))) ((bruijn ##.k.281 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k22, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.reg.596 1 0)) ((bruijn ##.equal?.67 11 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k21) 'label (##inline ##vcore.car (bruijn ##.reg.596 1 0))) ((bruijn ##.k.281 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k21, self)))),
      _V0label,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.597) ((##vcore.+ (bruijn ##.pc.123 5 1) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.118 ##.peel-loop.122) #f (bruijn ##.peel-loop.122 6 0) (bruijn ##.k.278 1 0) (bruijn ##.reg.597 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.277 1 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda10) (bruijn ##.kk.0.124 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda10, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.596) ((##vcore.vector-ref (bruijn ##.tape.120 6 1) (bruijn ##.pc.123 3 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k20) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k33)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k20, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0k33, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.595) ((##vcore.>= (bruijn ##.pc.123 1 1) (bruijn ##.reg.594 3 0))) (if (bruijn ##.reg.595 0 0) ((bruijn ##.k.275 1 0) (bruijn ##.tape.120 4 1)) (##vcore.call/cc (bruijn ##.k.275 1 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda8))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122_V0lambda8, self)))));
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.594) ((##vcore.vector-length (bruijn ##.tape.120 1 1))) (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122")) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.118 ##.peel-loop.122) #f (bruijn ##.peel-loop.122 0 0) (bruijn ##.k.274 2 0) 0)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118_V10_Dpeel__loop_D122(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.567 0 0) (bruijn ##.k.564 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.568 0 0) (bruijn ##.expr.131 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.565 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k36) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda12) (bruijn ##.kk.5.133 2 1)) ((bruijn ##.k.564 1 0) #f)) ((bruijn ##.k.564 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k36, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda12, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k35) 'toplevel (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.564 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k35, self)))),
      _V0toplevel,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.559 0 0) (bruijn ##.k.555 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.560 0 0) (bruijn ##.expr.131 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.137 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.9.137 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k41) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda13) (bruijn ##.kk.5.133 3 1)) ((bruijn ##.k.555 2 0) #f)) ((bruijn ##.k.555 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda13, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.556 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k40) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.555 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k40, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k39) 'push (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.555 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k39, self)))),
      _V0push,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.546 0 0) (bruijn ##.k.542 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.547 2 0) (##inline ##vcore.cons 'intrinsic (##inline ##vcore.cons (bruijn ##.x.550 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0intrinsic,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.54.142 0 0) ((bruijn ##.k.547 2 0) (##inline ##vcore.cons 'intrinsic (##inline ##vcore.cons (bruijn ##.x.54.142 0 0) '()))) ((bruijn ##.error.68 12 3) (bruijn ##.k.547 2 0) (##string ##.string.655) (bruijn ##.x.141 3 0)))
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
      VEncodePointer(&_V10_Dstring_D655.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.642) ((##vcore.string? (bruijn ##.x.141 2 0))) (if (bruijn ##.reg.642 0 0) ((##intrinsic "VFunction3") (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k48) (bruijn ##.x.141 2 0)) ((bruijn ##.lookup-intrinsic.69 11 4) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k49) (bruijn ##.x.141 2 0))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k48, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k49, self)))),
      statics->up->vars[0]);
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.140 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k47) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda14) (bruijn ##.kk.5.133 4 1)) ((bruijn ##.k.542 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda14, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.140 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k46) (##inline ##vcore.car (bruijn ##.expr.11.140 0 0))) ((bruijn ##.k.542 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k46, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.543 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k45) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.542 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k45, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k44) 'intrinsic (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.542 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k44, self)))),
      _V0intrinsic,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.532 0 0) (bruijn ##.k.527 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.638 1 0) (basic-block 1 1 (##.reg.639) ((##vcore.int? (bruijn ##.right.148 4 0))) (if (bruijn ##.reg.639 0 0) (basic-block 1 1 (##.reg.640) ((##vcore.>= (bruijn ##.up.146 7 0) 0)) (if (bruijn ##.reg.640 0 0) (basic-block 1 1 (##.reg.641) ((##vcore.>= (bruijn ##.right.148 6 0) 0)) ((bruijn ##.k.536 3 0) (bruijn ##.reg.641 0 0))) ((bruijn ##.k.536 2 0) #f))) ((bruijn ##.k.536 1 0) #f))) ((bruijn ##.k.536 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.534 0 0) ((bruijn ##.k.533 2 0) (bruijn ##.expr.131 10 1)) ((bruijn ##.error.68 14 3) (bruijn ##.k.533 2 0) (##string ##.string.656) (bruijn ##.up.146 5 0) (bruijn ##.right.148 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D656.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.638) ((##vcore.int? (bruijn ##.up.146 4 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k58) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k59)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k58, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k59, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.14.147 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k57) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda15) (bruijn ##.kk.5.133 6 1)) ((bruijn ##.k.527 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k57, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda15, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.147 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k56) (##inline ##vcore.car (bruijn ##.expr.14.147 0 0))) ((bruijn ##.k.527 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k56, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k55) (##inline ##vcore.cdr (bruijn ##.expr.13.145 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k55, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.145 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k54) (##inline ##vcore.car (bruijn ##.expr.13.145 0 0))) ((bruijn ##.k.527 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k54, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.528 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k53) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.527 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k53, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k52) 'bruijn (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.527 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k52, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.521 0 0) (bruijn ##.k.517 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.637) ((##vcore.symbol? (bruijn ##.x.151 2 0))) (if (bruijn ##.reg.637 0 0) ((bruijn ##.k.522 1 0) (bruijn ##.expr.131 7 1)) ((bruijn ##.error.68 11 3) (bruijn ##.k.522 1 0) (##string ##.string.657) (bruijn ##.x.151 2 0))))
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
      VEncodePointer(&_V10_Dstring_D657.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.16.150 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k65) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda16) (bruijn ##.kk.5.133 4 1)) ((bruijn ##.k.517 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda16, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.150 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k64) (##inline ##vcore.car (bruijn ##.expr.16.150 0 0))) ((bruijn ##.k.517 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k64, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.518 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k63) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.517 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k63, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k62) 'lookup (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.517 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k62, self)))),
      _V0lookup,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.509 0 0) (bruijn ##.k.505 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.635 1 0) (basic-block 1 1 (##.reg.636) ((##vcore.>= (bruijn ##.x.154 4 0) 0)) ((bruijn ##.k.513 1 0) (bruijn ##.reg.636 0 0))) ((bruijn ##.k.513 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.511 0 0) ((bruijn ##.k.510 2 0) (bruijn ##.expr.131 8 1)) ((bruijn ##.error.68 12 3) (bruijn ##.k.510 2 0) (##string ##.string.658) (bruijn ##.x.154 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D658.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.635) ((##vcore.int? (bruijn ##.x.154 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k72) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k73)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k72, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k73, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.153 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k71) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda17) (bruijn ##.kk.5.133 4 1)) ((bruijn ##.k.505 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k71, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda17, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.153 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k70) (##inline ##vcore.car (bruijn ##.expr.18.153 0 0))) ((bruijn ##.k.505 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k70, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.506 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k69) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.505 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k69, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k68) 'call (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.505 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k68, self)))),
      _V0call,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.496 0 0) (bruijn ##.k.492 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.499 1 0) ((bruijn ##.k.500 0 0) (bruijn ##.p.499 1 0)) (basic-block 1 1 (##.reg.633) ((##vcore.int? (bruijn ##.x.157 4 0))) (if (bruijn ##.reg.633 0 0) (basic-block 1 1 (##.reg.634) ((##vcore.>= (bruijn ##.x.157 5 0) 0)) ((bruijn ##.k.500 2 0) (bruijn ##.reg.634 0 0))) ((bruijn ##.k.500 1 0) #f))))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.498 0 0) ((bruijn ##.k.497 2 0) (bruijn ##.expr.131 8 1)) ((bruijn ##.error.68 12 3) (bruijn ##.k.497 2 0) (##string ##.string.659) (bruijn ##.x.157 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k81) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k82))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k82, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k80) (##inline ##vcore.not (bruijn ##.x.157 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k80, self)), 1,
      VInlineNot2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.20.156 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k79) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda18) (bruijn ##.kk.5.133 4 1)) ((bruijn ##.k.492 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k79, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda18, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.156 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k78) (##inline ##vcore.car (bruijn ##.expr.20.156 0 0))) ((bruijn ##.k.492 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k78, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.493 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k77) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.492 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k77, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k76) 'lambda (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.492 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k76, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.484 0 0) (bruijn ##.k.480 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.631 1 0) (basic-block 1 1 (##.reg.632) ((##vcore.>= (bruijn ##.x.160 4 0) 0)) ((bruijn ##.k.488 1 0) (bruijn ##.reg.632 0 0))) ((bruijn ##.k.488 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.486 0 0) ((bruijn ##.k.485 2 0) (bruijn ##.expr.131 8 1)) ((bruijn ##.error.68 12 3) (bruijn ##.k.485 2 0) (##string ##.string.660) (bruijn ##.x.160 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D660.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.631) ((##vcore.int? (bruijn ##.x.160 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k89) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k90)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k89, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k90, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.159 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k88) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda19) (bruijn ##.kk.5.133 4 1)) ((bruijn ##.k.480 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k88, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda19, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.159 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k87) (##inline ##vcore.car (bruijn ##.expr.22.159 0 0))) ((bruijn ##.k.480 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k87, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.481 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k86) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.480 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k86, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k85) 'lambda+ (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.480 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k85, self)))),
      _V0lambda_P,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.462 0 0) (bruijn ##.k.457 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.625 1 0) (basic-block 1 1 (##.reg.630) ((##vcore.>= (bruijn ##.x.163 6 0) 0)) ((bruijn ##.k.476 1 0) (bruijn ##.reg.630 0 0))) ((bruijn ##.k.476 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.474 1 0)) ((bruijn ##.error.68 15 3) (bruijn ##.k.473 0 0) (##string ##.string.661) (bruijn ##.x.163 6 0)) ((bruijn ##.k.473 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D661.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.627 1 0) ((bruijn ##.assv.71 17 6) (bruijn ##.k.471 0 0) (bruijn ##.b.165 6 0) (bruijn ##.labels.117 14 0)) ((bruijn ##.k.471 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.55.166 0 0) (basic-block 1 1 (##.reg.628) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.55.166 1 0)) (bruijn ##.pc.132 14 2) 1)) ((bruijn ##.k.463 6 0) (##inline ##vcore.cons 'case-lambda (##inline ##vcore.cons (bruijn ##.x.163 9 0) (##inline ##vcore.cons (bruijn ##.reg.628 0 0) '()))))) (basic-block 1 1 (##.reg.629) ((##vcore.symbol? (bruijn ##.b.165 7 0))) (if (bruijn ##.reg.629 0 0) ((bruijn ##.error.68 18 3) (bruijn ##.k.463 6 0) (##string ##.string.662) (bruijn ##.b.165 7 0)) ((bruijn ##.error.68 18 3) (bruijn ##.k.463 6 0) (##string ##.string.663) (bruijn ##.b.165 7 0)))))
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
      VEncodePointer(&_V10_Dstring_D662.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D663.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
    }
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k102(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.626) ((##vcore.int? (bruijn ##.b.165 4 0))) (if (bruijn ##.reg.626 0 0) ((bruijn ##.k.463 3 0) (bruijn ##.expr.131 11 1)) (basic-block 1 1 (##.reg.627) ((##vcore.symbol? (bruijn ##.b.165 5 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k103) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k104)))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k104, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k101) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k102))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k101, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k102, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.625) ((##vcore.int? (bruijn ##.x.163 4 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k99) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k100)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k99, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k100, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.25.164 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k98) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda20) (bruijn ##.kk.5.133 6 1)) ((bruijn ##.k.457 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k98, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda20, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.164 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k97) (##inline ##vcore.car (bruijn ##.expr.25.164 0 0))) ((bruijn ##.k.457 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k97, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k96) (##inline ##vcore.cdr (bruijn ##.expr.24.162 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k96, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.162 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k95) (##inline ##vcore.car (bruijn ##.expr.24.162 0 0))) ((bruijn ##.k.457 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k95, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.458 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k94) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.457 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k94, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k93) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.457 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k93, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.439 0 0) (bruijn ##.k.434 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.619 1 0) (basic-block 1 1 (##.reg.624) ((##vcore.>= (bruijn ##.x.170 6 0) 0)) ((bruijn ##.k.453 1 0) (bruijn ##.reg.624 0 0))) ((bruijn ##.k.453 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.451 1 0)) ((bruijn ##.error.68 15 3) (bruijn ##.k.450 0 0) (##string ##.string.664) (bruijn ##.x.170 6 0)) ((bruijn ##.k.450 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D664.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.621 1 0) ((bruijn ##.assv.71 17 6) (bruijn ##.k.448 0 0) (bruijn ##.b.172 6 0) (bruijn ##.labels.117 14 0)) ((bruijn ##.k.448 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.56.173 0 0) (basic-block 1 1 (##.reg.622) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.56.173 1 0)) (bruijn ##.pc.132 14 2) 1)) ((bruijn ##.k.440 6 0) (##inline ##vcore.cons 'case-lambda+ (##inline ##vcore.cons (bruijn ##.x.170 9 0) (##inline ##vcore.cons (bruijn ##.reg.622 0 0) '()))))) (basic-block 1 1 (##.reg.623) ((##vcore.symbol? (bruijn ##.b.172 7 0))) (if (bruijn ##.reg.623 0 0) ((bruijn ##.error.68 18 3) (bruijn ##.k.440 6 0) (##string ##.string.665) (bruijn ##.b.172 7 0)) ((bruijn ##.error.68 18 3) (bruijn ##.k.440 6 0) (##string ##.string.666) (bruijn ##.b.172 7 0)))))
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
      VEncodePointer(&_V10_Dstring_D665.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D666.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
    }
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k116(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.620) ((##vcore.int? (bruijn ##.b.172 4 0))) (if (bruijn ##.reg.620 0 0) ((bruijn ##.k.440 3 0) (bruijn ##.expr.131 11 1)) (basic-block 1 1 (##.reg.621) ((##vcore.symbol? (bruijn ##.b.172 5 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k117) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k118)))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k117, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k118, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k115) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k116))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k115, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k116, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.619) ((##vcore.int? (bruijn ##.x.170 4 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k113) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k114)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k113, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k114, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.171 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k112) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda21) (bruijn ##.kk.5.133 6 1)) ((bruijn ##.k.434 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k112, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda21, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.171 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k111) (##inline ##vcore.car (bruijn ##.expr.28.171 0 0))) ((bruijn ##.k.434 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k111, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k110) (##inline ##vcore.cdr (bruijn ##.expr.27.169 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k110, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.169 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k109) (##inline ##vcore.car (bruijn ##.expr.27.169 0 0))) ((bruijn ##.k.434 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k109, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.435 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k108) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.434 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k108, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k107) 'case-lambda+ (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.434 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k107, self)))),
      _V0case__lambda_P,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.429 0 0) (bruijn ##.k.424 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.430 0 0) (bruijn ##.expr.131 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.178 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.178 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k124) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda22) (bruijn ##.kk.5.133 4 1)) ((bruijn ##.k.424 3 0) #f)) ((bruijn ##.k.424 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k124, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda22, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.176 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k123) (##inline ##vcore.cdr (bruijn ##.expr.30.176 0 0))) ((bruijn ##.k.424 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k123, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.425 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k122) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.424 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k122, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k121) 'case-lambda-error (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.424 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k121, self)))),
      _V0case__lambda__error,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.411 0 0) (bruijn ##.k.407 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.615 1 0) ((bruijn ##.assv.71 12 6) (bruijn ##.k.420 0 0) (bruijn ##.x.182 3 0) (bruijn ##.labels.117 9 0)) ((bruijn ##.k.420 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.617 1 0) (basic-block 1 1 (##.reg.618) ((##vcore.>= (bruijn ##.x.182 7 0) 0)) ((bruijn ##.k.418 1 0) (bruijn ##.reg.618 0 0))) ((bruijn ##.k.418 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.416 0 0) ((bruijn ##.k.412 5 0) (bruijn ##.expr.131 11 1)) ((bruijn ##.error.68 15 3) (bruijn ##.k.412 5 0) (##string ##.string.668) (bruijn ##.x.182 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D668.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.57.183 0 0) ((bruijn ##.k.412 2 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.57.183 0 0)) '()))) (basic-block 1 1 (##.reg.616) ((##vcore.symbol? (bruijn ##.x.182 4 0))) (if (bruijn ##.reg.616 0 0) ((bruijn ##.error.68 13 3) (bruijn ##.k.412 3 0) (##string ##.string.667) (bruijn ##.x.182 4 0)) (basic-block 1 1 (##.reg.617) ((##vcore.int? (bruijn ##.x.182 5 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k133) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k134))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
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
      VEncodePointer(&_V10_Dstring_D667.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k133, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k134, self)))));
    }
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.615) ((##vcore.symbol? (bruijn ##.x.182 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k131) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k132)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k131, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k132, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.181 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k130) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda23) (bruijn ##.kk.5.133 4 1)) ((bruijn ##.k.407 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k130, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda23, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.181 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k129) (##inline ##vcore.car (bruijn ##.expr.33.181 0 0))) ((bruijn ##.k.407 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k129, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.408 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k128) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.407 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k128, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k127) 'close (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.407 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k127, self)))),
      _V0close,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.394 0 0) (bruijn ##.k.390 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.611 1 0) ((bruijn ##.assv.71 12 6) (bruijn ##.k.403 0 0) (bruijn ##.x.187 3 0) (bruijn ##.labels.117 9 0)) ((bruijn ##.k.403 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.613 1 0) (basic-block 1 1 (##.reg.614) ((##vcore.>= (bruijn ##.x.187 7 0) 0)) ((bruijn ##.k.401 1 0) (bruijn ##.reg.614 0 0))) ((bruijn ##.k.401 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.399 0 0) ((bruijn ##.k.395 5 0) (bruijn ##.expr.131 11 1)) ((bruijn ##.error.68 15 3) (bruijn ##.k.395 5 0) (##string ##.string.669) (bruijn ##.x.187 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D669.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.58.188 0 0) ((bruijn ##.k.395 2 0) (##inline ##vcore.cons 'foreign-function (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.58.188 0 0)) '()))) (basic-block 1 1 (##.reg.612) ((##vcore.symbol? (bruijn ##.x.187 4 0))) (if (bruijn ##.reg.612 0 0) ((bruijn ##.error.68 13 3) (bruijn ##.k.395 3 0) (##string ##.string.667) (bruijn ##.x.187 4 0)) (basic-block 1 1 (##.reg.613) ((##vcore.int? (bruijn ##.x.187 5 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k143) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k144))))))
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
      VEncodePointer(&_V10_Dstring_D667.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k143, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k144, self)))));
    }
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.611) ((##vcore.symbol? (bruijn ##.x.187 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k141) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k142)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k141, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k142, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.35.186 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k140) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda24) (bruijn ##.kk.5.133 4 1)) ((bruijn ##.k.390 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k140, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda24, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.186 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k139) (##inline ##vcore.car (bruijn ##.expr.35.186 0 0))) ((bruijn ##.k.390 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k139, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.391 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k138) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.390 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k138, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k137) 'foreign-function (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.390 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k137, self)))),
      _V0foreign__function,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.374 0 0) (bruijn ##.k.369 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.607 1 0) ((bruijn ##.assv.71 15 6) (bruijn ##.k.385 0 0) (bruijn ##.x.194 4 0) (bruijn ##.labels.117 12 0)) ((bruijn ##.k.385 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.609 1 0) (basic-block 1 1 (##.reg.610) ((##vcore.>= (bruijn ##.x.194 8 0) 0)) ((bruijn ##.k.383 1 0) (bruijn ##.reg.610 0 0))) ((bruijn ##.k.383 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.381 0 0) ((bruijn ##.k.375 6 0) (bruijn ##.expr.131 14 1)) ((bruijn ##.error.68 18 3) (bruijn ##.k.375 6 0) (##string ##.string.672) (bruijn ##.x.194 7 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D672.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.59.195 0 0) ((bruijn ##.k.375 3 0) (##inline ##vcore.cons 'declare (##inline ##vcore.cons (bruijn ##.name.192 6 0) (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.59.195 0 0)) '())))) (basic-block 1 1 (##.reg.608) ((##vcore.symbol? (bruijn ##.x.194 5 0))) (if (bruijn ##.reg.608 0 0) ((bruijn ##.error.68 16 3) (bruijn ##.k.375 4 0) (##string ##.string.671) (bruijn ##.x.194 5 0)) (basic-block 1 1 (##.reg.609) ((##vcore.int? (bruijn ##.x.194 6 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k155) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k156))))))
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
      VEncodePointer(&_V10_Dstring_D671.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k155, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k156, self)))));
    }
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.606) ((##vcore.string? (bruijn ##.name.192 4 0))) (if (##inline ##vcore.not (bruijn ##.reg.606 0 0)) ((bruijn ##.error.68 13 3) (bruijn ##.k.375 1 0) (##string ##.string.670) (bruijn ##.x.194 2 0)) (basic-block 1 1 (##.reg.607) ((##vcore.symbol? (bruijn ##.x.194 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k153) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k154)))))
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
      VEncodePointer(&_V10_Dstring_D670.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k153, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k154, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.38.193 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k152) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda25) (bruijn ##.kk.5.133 6 1)) ((bruijn ##.k.369 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k152, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda25, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.193 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k151) (##inline ##vcore.car (bruijn ##.expr.38.193 0 0))) ((bruijn ##.k.369 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k151, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k150) (##inline ##vcore.cdr (bruijn ##.expr.37.191 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k150, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.191 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k149) (##inline ##vcore.car (bruijn ##.expr.37.191 0 0))) ((bruijn ##.k.369 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k149, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.370 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k148) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.369 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k148, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k147) 'declare (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.369 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k147, self)))),
      _V0declare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.45.205 4 1) (bruijn ##.k.360 1 0) (bruijn ##.expr.47.207 2 1) (bruijn ##.x.361 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.47.207 1 1))) ((bruijn ##.reverse.70 15 5) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k164) (bruijn ##.args.44.208 1 2)) ((bruijn ##.k.360 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k164, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.45.205 5 1) (bruijn ##.k.355 1 0) (bruijn ##.expr.47.207 3 1) (bruijn ##.x.356 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k166(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.70 16 5) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k167) (bruijn ##.args.44.208 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k167, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.46.209 0 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k166) (##inline ##vcore.cdr (bruijn ##.expr.47.207 2 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.47.207 2 1)) (bruijn ##.args.44.208 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k166, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        statics->up->vars[2]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.354 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0lambda29, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k165(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.353 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0lambda28) (bruijn ##.loop.206 1 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0lambda28, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k163) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k165))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k163, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206_V0k165, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206")) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-expr.119 ##.loop.206) #f (bruijn ##.loop.206 0 0) (bruijn ##.k.352 1 0) (##inline ##vcore.cdr (bruijn ##.expr.42.202 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206, self))));
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V10_Dloop_D206(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.351 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda27))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda27, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.365 0 0) (bruijn ##.k.363 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.366 0 0) (bruijn ##.expr.131 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.211 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k168) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda31) (bruijn ##.kk.5.133 6 1)) ((bruijn ##.k.363 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k168, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda31, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.202 0 0)) (##vcore.call-with-values (bruijn ##.k.346 4 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda26) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda30)) ((bruijn ##.k.346 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda26, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda30, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.200 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k162) (##inline ##vcore.cdr (bruijn ##.expr.41.200 0 0))) ((bruijn ##.k.346 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k162, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.198 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k161) (##inline ##vcore.cdr (bruijn ##.expr.40.198 0 0))) ((bruijn ##.k.346 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k161, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.347 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k160) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.346 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k160, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k159) 'declare-foreign (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.346 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k159, self)))),
      _V0declare__foreign,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.341 0 0) (bruijn ##.k.338 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.342 0 0) (bruijn ##.expr.131 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.339 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k172) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda32) (bruijn ##.kk.5.133 2 1)) ((bruijn ##.k.338 1 0) #f)) ((bruijn ##.k.338 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k172, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda32, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k171) 'push-set! (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.338 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k171, self)))),
      _V0push__set_B,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.326 0 0) (bruijn ##.k.322 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.603 1 0) ((bruijn ##.assv.71 13 6) (bruijn ##.k.334 0 0) (bruijn ##.x.216 4 0) (bruijn ##.labels.117 10 0)) ((bruijn ##.k.334 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.60.217 0 0) (basic-block 1 1 (##.reg.604) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.60.217 1 0)) (bruijn ##.pc.132 10 2) 1)) ((bruijn ##.k.327 4 0) (##inline ##vcore.cons 'bf (##inline ##vcore.cons (bruijn ##.reg.604 0 0) '())))) (basic-block 1 1 (##.reg.605) ((##vcore.symbol? (bruijn ##.x.216 5 0))) (if (bruijn ##.reg.605 0 0) ((bruijn ##.error.68 14 3) (bruijn ##.k.327 4 0) (##string ##.string.673) (bruijn ##.x.216 5 0)) ((bruijn ##.error.68 14 3) (bruijn ##.k.327 4 0) (##string ##.string.674) (bruijn ##.x.216 5 0)))))
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
      VEncodePointer(&_V10_Dstring_D673.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D674.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.602) ((##vcore.int? (bruijn ##.x.216 2 0))) (if (bruijn ##.reg.602 0 0) ((bruijn ##.k.327 1 0) (bruijn ##.expr.131 7 1)) (basic-block 1 1 (##.reg.603) ((##vcore.symbol? (bruijn ##.x.216 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k179) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k180)))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k179, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k180, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.50.215 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k178) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda33) (bruijn ##.kk.5.133 4 1)) ((bruijn ##.k.322 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k178, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda33, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.215 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k177) (##inline ##vcore.car (bruijn ##.expr.50.215 0 0))) ((bruijn ##.k.322 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k177, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.323 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k176) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.322 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k176, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k175) 'bf (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.322 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k175, self)))),
      _V0bf,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.314 0 0) (bruijn ##.k.310 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.600 1 0) (basic-block 1 1 (##.reg.601) ((##vcore.>= (bruijn ##.x.221 4 0) 0)) ((bruijn ##.k.318 1 0) (bruijn ##.reg.601 0 0))) ((bruijn ##.k.318 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.316 0 0) ((bruijn ##.k.315 2 0) (bruijn ##.expr.131 8 1)) ((bruijn ##.error.68 12 3) (bruijn ##.k.315 2 0) (##string ##.string.675) (bruijn ##.x.221 3 0)))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.600) ((##vcore.int? (bruijn ##.x.221 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k187) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k188)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k187, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k188, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.220 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k186) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda34) (bruijn ##.kk.5.133 4 1)) ((bruijn ##.k.310 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k186, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda34, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.220 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k185) (##inline ##vcore.car (bruijn ##.expr.52.220 0 0))) ((bruijn ##.k.310 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k185, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.311 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k184) (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) ((bruijn ##.k.310 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k184, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k183) 'letrec-begin (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.310 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k183, self)))),
      _V0letrec__begin,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.305 0 0) (bruijn ##.k.302 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.306 0 0) (bruijn ##.expr.131 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.303 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.131 3 1))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k192) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda35) (bruijn ##.kk.5.133 2 1)) ((bruijn ##.k.302 1 0) #f)) ((bruijn ##.k.302 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k192, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda35, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131 2 1)) ((bruijn ##.equal?.67 6 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k191) 'letrec-end (##inline ##vcore.car (bruijn ##.expr.131 2 1))) ((bruijn ##.k.302 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k191, self)))),
      _V0letrec__end,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.68 6 3) (bruijn ##.k.300 0 0) (##string ##.string.676) (bruijn ##.expr.131 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D676.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k193(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.299 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda36) (bruijn ##.kk.5.133 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda36, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k189(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k190) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k193))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k190, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k193, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k181(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k182) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k189))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k182, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k189, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k173(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k174) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k181))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k174, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k181, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k169(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k170) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k173))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k170, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k173, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k157(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k158) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k169))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k158, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k169, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k145(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k146) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k157))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k146, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k157, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k135(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k136) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k145))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k136, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k145, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k125(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k126) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k135))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k126, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k135, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k119(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k120) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k125))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k120, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k125, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k105(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k106) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k119))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k106, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k119, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k91(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k92) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k105))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k92, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k105, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k83(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k84) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k91))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k84, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k91, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k75) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k83))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k83, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k67) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k74))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k67, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k74, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k60(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k61) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k66))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k61, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k66, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k50(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k51) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k60))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k60, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k43) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k50))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k50, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k38) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k42))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k38, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k42, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k34) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k37))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0k37, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.298 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda11))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119_V0lambda11, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (##inline ##vcore.eq? (bruijn ##.e.227 2 0) (bruijn ##.reg.646 1 0))) (##vcore.vector-set! (bruijn ##.k.575 0 0) (bruijn ##.tape.225 5 1) (bruijn ##.pc.226 5 2) (bruijn ##.e.227 2 0)) ((bruijn ##.k.575 0 0) #f))
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
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k196(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.reg.647) ((##vcore.+ (bruijn ##.pc.226 5 2) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-loop.224) #f (bruijn ##.preprocess-loop.224 6 0) (bruijn ##.k.571 5 0) (bruijn ##.tape.225 5 1) (bruijn ##.reg.647 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.646) ((##vcore.vector-ref (bruijn ##.tape.225 4 1) (bruijn ##.pc.226 4 2))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k195) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k196)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k195, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k196, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.644) ((##vcore.>= (bruijn ##.pc.226 1 2) (bruijn ##.reg.643 3 0))) (if (bruijn ##.reg.644 0 0) ((bruijn ##.k.571 1 0) (bruijn ##.tape.225 1 1)) (basic-block 1 1 (##.reg.645) ((##vcore.vector-ref (bruijn ##.tape.225 2 1) (bruijn ##.pc.226 2 2))) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-expr.119) #f (bruijn ##.preprocess-expr.119 5 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k194) (bruijn ##.reg.645 0 0) (bruijn ##.pc.226 2 2)))))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224_V0k194, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-loop.224) #f (bruijn ##.preprocess-loop.224 1 0) (bruijn ##.k.273 4 0) (bruijn ##.x.579 0 0) 0)
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
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
  // (letrec 3 ('() (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118") (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119")) (basic-block 1 1 (##.reg.643) ((##vcore.vector-length (bruijn ##.tape.116 2 1))) (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224")) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.118) #f (bruijn ##.peel-labels.118 2 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k197) (bruijn ##.tape.116 3 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VNULL;
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D119, self))));
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D224, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k197, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D118(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
    }
}
static void _V0vanity_V0bytecode_V20_V0k201(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.235 3 0) (##inline ##vcore.cons (##inline ##vcore.cons 'eval-vasm (bruijn ##.eval-vasm.89 2 0)) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eval__vasm,
        statics->up->vars[0]),
        VNULL));
}
static void _V0vanity_V0bytecode_V20_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0bytecode_V20_V0k201) (bruijn ##.eval-vasm-toplevel.92 2 3) (bruijn ##.x.581 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k201, self)))),
      VEncodeInt(2l), VEncodeInt(3l),
      _var0
    );
}
static void _V0vanity_V0bytecode_V20_V0k199(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.function (close _V0vanity_V0bytecode_V20_V0k200) (##string ##.string.677))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k200, self)))),
      VEncodePointer(&_V10_Dstring_D677.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_V0k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0bytecode_V20_V0k199) (bruijn ##.make-vasm-lambda.93 1 4) (bruijn ##.x.582 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k199, self)))),
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
  // (##letrec (vanity bytecode) 7 ((close "_V50_V0vanity_V0bytecode_V0eval__vasm" "_V60_V0vanity_V0bytecode") (close "_V50_V0vanity_V0bytecode_V0find__toplevel" "_V60_V0vanity_V0bytecode") (close "_V50_V0vanity_V0bytecode_V0set__declares_B" "_V60_V0vanity_V0bytecode") #f #f (close "_V50_V0vanity_V0bytecode_V0find__declare" "_V60_V0vanity_V0bytecode") (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm" "_V60_V0vanity_V0bytecode")) (##vcore.function (close _V0vanity_V0bytecode_V20_V0k198) (##string ##.string.678)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k198, self)))),
      VEncodePointer(&_V10_Dstring_D678.sym, VPOINTER_OTHER));
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
  // (##vcore.call-with-values (bruijn ##.k.229 0 0) (close _V0vanity_V0bytecode_V20_V0lambda2) (close _V0vanity_V0bytecode_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0bytecode_V20 = (VFunc)_V0vanity_V0bytecode_V20_V0lambda1;
