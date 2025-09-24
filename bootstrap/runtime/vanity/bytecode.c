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

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_V0vanity_V0bytecode_V20" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VMakeVasmLambda" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEvalVasmToplevel" };
VWEAK VWORD _V0eval__vasm;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0eval__vasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "eval-vasm" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "declare not declare\?" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm: unknown or malformed line" };
VWEAK VWORD _V0letrec__end;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0letrec__end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "letrec-end" };
VWEAK VWORD _V0letrec__begin;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0letrec__begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "letrec-begin" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm letrec-begin an integer" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "vasm bf: not an integer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "vasm bf: unknown label" };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
VWEAK VWORD _V0push__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0push__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "push-set!" };
VWEAK VWORD _V0declare__foreign;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0declare__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "declare-foreign" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm declare: not a nonnegative integer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "vasm declare: unknown label" };
VWEAK VWORD _V0declare;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "declare" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vasm declare: not a string" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "vasm foreign-function: not a nonnegative integer" };
VWEAK VWORD _V0foreign__function;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "vasm close: not a nonnegative integer" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm close: unknown label" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
VWEAK VWORD _V0case__lambda__error;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0case__lambda__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "case-lambda-error" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "vasm case-lambda+: not an integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda+: unknown label" };
VWEAK VWORD _V0case__lambda_P;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0case__lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "case-lambda+" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "vasm case-lambda+: not a nonnegative integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda: not an integer" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm case-lambda: unknown label" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "vasm case-lambda: not a nonnegative integer" };
VWEAK VWORD _V0lambda_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "lambda+" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D691 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm lambda+: not a nonnegative integer" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D690 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vasm lambda: not a nonnegative integer" };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D689 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "vasm call: not a nonnegative integer" };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm lookup: not a symbol" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm bruijn: not both nonnegative integers" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm intrinsic: not a recognized intrinsic" };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
VWEAK VWORD _V40VFunction3;
VWEAK VClosure _VW_V40VFunction3 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFunction3, NULL };
VWEAK VWORD _V0push;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0push = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "push" };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D685 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm label: label declared twice" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D684 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "vasm label: not a symbol" };
static __attribute__((constructor)) void VDllMain1() {
  _V0lookup__intrinsic = VEncodePointer(VInternSymbol(1810441535, &_VW_V0lookup__intrinsic.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0eval__vasm = VEncodePointer(VInternSymbol(-229856296, &_VW_V0eval__vasm.sym), VPOINTER_OTHER);
  _V0letrec__end = VEncodePointer(VInternSymbol(1680038956, &_VW_V0letrec__end.sym), VPOINTER_OTHER);
  _V0letrec__begin = VEncodePointer(VInternSymbol(1445174670, &_VW_V0letrec__begin.sym), VPOINTER_OTHER);
  _V0bf = VEncodePointer(VInternSymbol(1139667182, &_VW_V0bf.sym), VPOINTER_OTHER);
  _V0push__set_B = VEncodePointer(VInternSymbol(1593164417, &_VW_V0push__set_B.sym), VPOINTER_OTHER);
  _V0declare__foreign = VEncodePointer(VInternSymbol(-1354590835, &_VW_V0declare__foreign.sym), VPOINTER_OTHER);
  _V0declare = VEncodePointer(VInternSymbol(1810290051, &_VW_V0declare.sym), VPOINTER_OTHER);
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
  _V0toplevel = VEncodePointer(VInternSymbol(1376451653, &_VW_V0toplevel.sym), VPOINTER_OTHER);
  _V0label = VEncodePointer(VInternSymbol(619689535, &_VW_V0label.sym), VPOINTER_OTHER);
}
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0eval__vasm, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0find__toplevel, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0set__declares_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0find__declare, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm, _var0, _var1);
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.251 0 0) (bruijn ##.k.246 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.reg.623 1 0)) ((bruijn ##.x.235 21 0) (bruijn ##.k.263 0 0) (##string ##.string.684) (bruijn ##.label.109 4 0)) ((bruijn ##.k.263 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D684.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.260 1 0) ((bruijn ##.x.235 23 0) (bruijn ##.k.261 0 0) (##string ##.string.685) (bruijn ##.label.109 6 0)) ((bruijn ##.k.261 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D685.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.624) ((##vcore.+ (bruijn ##.pc.104 16 1) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.99 ##.peel-loop.103) (bruijn ##.peel-loop.103 17 0) (bruijn ##.k.252 7 0) (bruijn ##.reg.624 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 16-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k25) (bruijn ##.tape.101 17 1) (bruijn ##.pc.104 14 1) (##inline ##vcore.car (bruijn ##.expr.4.110 6 0)))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k25, self)))),
      VGetArg(statics, 17-1, 1),
      VGetArg(statics, 14-1, 1),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k24) (bruijn ##.labels.98 17 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.label.109 6 0) (bruijn ##.pc.104 13 1)) (bruijn ##.labels.98 17 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k24, self)))),
      VEncodeInt(17l), VEncodeInt(0l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VGetArg(statics, 13-1, 1)),
        VGetArg(statics, 17-1, 0))
    );
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k22) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k23))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k22, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k23, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.234 22 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k21) (bruijn ##.label.109 4 0) (bruijn ##.labels.98 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k21, self)))),
      statics->up->up->up->vars[0],
      VGetArg(statics, 15-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.623) ((##vcore.symbol? (bruijn ##.label.109 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k19) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k20)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k19, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k20, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.110 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.4.110 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k18) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda3) (bruijn ##.kk.0.105 6 1)) ((bruijn ##.k.246 4 0) #f)) ((bruijn ##.k.246 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k18, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda3, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k17) (##inline ##vcore.cdr (bruijn ##.expr.3.108 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k17, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.108 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k16) (##inline ##vcore.car (bruijn ##.expr.3.108 0 0))) ((bruijn ##.k.246 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k16, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.247 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k15) (##inline ##vcore.cdr (bruijn ##.reg.621 2 0))) ((bruijn ##.k.246 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k15, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.reg.621 1 0)) ((bruijn ##.x.233 16 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k14) 'label (##inline ##vcore.car (bruijn ##.reg.621 1 0))) ((bruijn ##.k.246 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k14, self)))),
      _V0label,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.622) ((##vcore.+ (bruijn ##.pc.104 6 1) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.99 ##.peel-loop.103) (bruijn ##.peel-loop.103 7 0) (bruijn ##.k.243 1 0) (bruijn ##.reg.622 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.241 2 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda4) (bruijn ##.kk.0.105 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda4, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.621) ((##vcore.vector-ref (bruijn ##.tape.101 6 1) (bruijn ##.pc.104 3 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k13) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k26)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k13, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0k26, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.620) ((##vcore.>= (bruijn ##.pc.104 1 1) (bruijn ##.reg.619 3 0))) (if (bruijn ##.reg.620 0 0) ((bruijn ##.k.239 1 0) (bruijn ##.tape.101 4 1)) (##vcore.call/cc (bruijn ##.k.239 1 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda2))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103_V0lambda2, self)))));
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.619) ((##vcore.vector-length (bruijn ##.tape.101 1 1))) (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103")) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.99 ##.peel-loop.103) (bruijn ##.peel-loop.103 0 0) (bruijn ##.k.238 2 0) 0)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99_V10_Dpeel__loop_D103(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.558 0 0) (bruijn ##.k.555 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.559 0 0) (bruijn ##.expr.112 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.556 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.112 3 1))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k29) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda6) (bruijn ##.kk.5.114 2 1)) ((bruijn ##.k.555 1 0) #f)) ((bruijn ##.k.555 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k29, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda6, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 2 1)) ((bruijn ##.x.233 11 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k28) 'toplevel (##inline ##vcore.car (bruijn ##.expr.112 2 1))) ((bruijn ##.k.555 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k28, self)))),
      _V0toplevel,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.550 0 0) (bruijn ##.k.546 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.551 0 0) (bruijn ##.expr.112 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.118 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.9.118 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k34) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda7) (bruijn ##.kk.5.114 4 1)) ((bruijn ##.k.546 2 0) #f)) ((bruijn ##.k.546 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k34, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda7, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.547 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k33) (##inline ##vcore.cdr (bruijn ##.expr.112 4 1))) ((bruijn ##.k.546 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k33, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 3 1)) ((bruijn ##.x.233 12 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k32) 'push (##inline ##vcore.car (bruijn ##.expr.112 3 1))) ((bruijn ##.k.546 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k32, self)))),
      _V0push,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.537 0 0) (bruijn ##.k.533 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.538 2 0) (##inline ##vcore.cons 'intrinsic (##inline ##vcore.cons (bruijn ##.x.541 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0intrinsic,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.54.123 0 0) ((bruijn ##.k.538 2 0) (##inline ##vcore.cons 'intrinsic (##inline ##vcore.cons (bruijn ##.x.54.123 0 0) '()))) ((bruijn ##.x.235 17 0) (bruijn ##.k.538 2 0) (##string ##.string.686) (bruijn ##.x.122 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0intrinsic,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D686.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.667) ((##vcore.string? (bruijn ##.x.122 2 0))) (if (bruijn ##.reg.667 0 0) ((##intrinsic "VFunction3") (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k41) (bruijn ##.x.122 2 0)) ((bruijn ##.x.231 20 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k42) (bruijn ##.x.122 2 0))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k41, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k42, self)))),
      statics->up->vars[0]);
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.121 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k40) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda8) (bruijn ##.kk.5.114 6 1)) ((bruijn ##.k.533 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda8, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.121 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k39) (##inline ##vcore.car (bruijn ##.expr.11.121 0 0))) ((bruijn ##.k.533 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k39, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.534 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k38) (##inline ##vcore.cdr (bruijn ##.expr.112 5 1))) ((bruijn ##.k.533 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k38, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 4 1)) ((bruijn ##.x.233 13 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k37) 'intrinsic (##inline ##vcore.car (bruijn ##.expr.112 4 1))) ((bruijn ##.k.533 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k37, self)))),
      _V0intrinsic,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.523 0 0) (bruijn ##.k.518 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.663 1 0) (basic-block 1 1 (##.reg.664) ((##vcore.int? (bruijn ##.right.129 4 0))) (if (bruijn ##.reg.664 0 0) (basic-block 1 1 (##.reg.665) ((##vcore.>= (bruijn ##.up.127 7 0) 0)) (if (bruijn ##.reg.665 0 0) (basic-block 1 1 (##.reg.666) ((##vcore.>= (bruijn ##.right.129 6 0) 0)) ((bruijn ##.k.527 3 0) (bruijn ##.reg.666 0 0))) ((bruijn ##.k.527 2 0) #f))) ((bruijn ##.k.527 1 0) #f))) ((bruijn ##.k.527 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.525 0 0) ((bruijn ##.k.524 2 0) (bruijn ##.expr.112 13 1)) ((bruijn ##.x.235 20 0) (bruijn ##.k.524 2 0) (##string ##.string.687) (bruijn ##.up.127 5 0) (bruijn ##.right.129 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D687.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.663) ((##vcore.int? (bruijn ##.up.127 4 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k51) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k52)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k52, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.14.128 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k50) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda9) (bruijn ##.kk.5.114 9 1)) ((bruijn ##.k.518 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k50, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda9, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.128 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k49) (##inline ##vcore.car (bruijn ##.expr.14.128 0 0))) ((bruijn ##.k.518 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k49, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k48) (##inline ##vcore.cdr (bruijn ##.expr.13.126 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k48, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.126 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k47) (##inline ##vcore.car (bruijn ##.expr.13.126 0 0))) ((bruijn ##.k.518 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k47, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.519 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k46) (##inline ##vcore.cdr (bruijn ##.expr.112 6 1))) ((bruijn ##.k.518 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k46, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 5 1)) ((bruijn ##.x.233 14 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k45) 'bruijn (##inline ##vcore.car (bruijn ##.expr.112 5 1))) ((bruijn ##.k.518 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k45, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.512 0 0) (bruijn ##.k.508 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.662) ((##vcore.symbol? (bruijn ##.x.132 2 0))) (if (bruijn ##.reg.662 0 0) ((bruijn ##.k.513 1 0) (bruijn ##.expr.112 11 1)) ((bruijn ##.x.235 18 0) (bruijn ##.k.513 1 0) (##string ##.string.688) (bruijn ##.x.132 2 0))))
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
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D688.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.16.131 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k58) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda10) (bruijn ##.kk.5.114 8 1)) ((bruijn ##.k.508 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k58, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda10, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.131 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k57) (##inline ##vcore.car (bruijn ##.expr.16.131 0 0))) ((bruijn ##.k.508 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k57, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.509 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k56) (##inline ##vcore.cdr (bruijn ##.expr.112 7 1))) ((bruijn ##.k.508 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k56, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 6 1)) ((bruijn ##.x.233 15 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k55) 'lookup (##inline ##vcore.car (bruijn ##.expr.112 6 1))) ((bruijn ##.k.508 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k55, self)))),
      _V0lookup,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.500 0 0) (bruijn ##.k.496 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.660 1 0) (basic-block 1 1 (##.reg.661) ((##vcore.>= (bruijn ##.x.135 4 0) 0)) ((bruijn ##.k.504 1 0) (bruijn ##.reg.661 0 0))) ((bruijn ##.k.504 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.502 0 0) ((bruijn ##.k.501 2 0) (bruijn ##.expr.112 13 1)) ((bruijn ##.x.235 20 0) (bruijn ##.k.501 2 0) (##string ##.string.689) (bruijn ##.x.135 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D689.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.660) ((##vcore.int? (bruijn ##.x.135 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k65) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k66)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k65, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k66, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.134 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k64) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda11) (bruijn ##.kk.5.114 9 1)) ((bruijn ##.k.496 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k64, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda11, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.134 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k63) (##inline ##vcore.car (bruijn ##.expr.18.134 0 0))) ((bruijn ##.k.496 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k63, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.497 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k62) (##inline ##vcore.cdr (bruijn ##.expr.112 8 1))) ((bruijn ##.k.496 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k62, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 7 1)) ((bruijn ##.x.233 16 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k61) 'call (##inline ##vcore.car (bruijn ##.expr.112 7 1))) ((bruijn ##.k.496 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k61, self)))),
      _V0call,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.488 0 0) (bruijn ##.k.484 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.658 1 0) (basic-block 1 1 (##.reg.659) ((##vcore.>= (bruijn ##.x.138 4 0) 0)) ((bruijn ##.k.492 1 0) (bruijn ##.reg.659 0 0))) ((bruijn ##.k.492 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.490 0 0) ((bruijn ##.k.489 2 0) (bruijn ##.expr.112 14 1)) ((bruijn ##.x.235 21 0) (bruijn ##.k.489 2 0) (##string ##.string.690) (bruijn ##.x.138 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D690.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.658) ((##vcore.int? (bruijn ##.x.138 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k73) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k74)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k73, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k74, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.20.137 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k72) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda12) (bruijn ##.kk.5.114 10 1)) ((bruijn ##.k.484 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k72, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda12, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.137 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k71) (##inline ##vcore.car (bruijn ##.expr.20.137 0 0))) ((bruijn ##.k.484 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k71, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.485 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k70) (##inline ##vcore.cdr (bruijn ##.expr.112 9 1))) ((bruijn ##.k.484 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k70, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 8 1)) ((bruijn ##.x.233 17 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k69) 'lambda (##inline ##vcore.car (bruijn ##.expr.112 8 1))) ((bruijn ##.k.484 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k69, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.476 0 0) (bruijn ##.k.472 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.656 1 0) (basic-block 1 1 (##.reg.657) ((##vcore.>= (bruijn ##.x.141 4 0) 0)) ((bruijn ##.k.480 1 0) (bruijn ##.reg.657 0 0))) ((bruijn ##.k.480 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.478 0 0) ((bruijn ##.k.477 2 0) (bruijn ##.expr.112 15 1)) ((bruijn ##.x.235 22 0) (bruijn ##.k.477 2 0) (##string ##.string.691) (bruijn ##.x.141 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D691.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.656) ((##vcore.int? (bruijn ##.x.141 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k81) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k82)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k82, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.140 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k80) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda13) (bruijn ##.kk.5.114 11 1)) ((bruijn ##.k.472 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k80, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda13, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.140 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k79) (##inline ##vcore.car (bruijn ##.expr.22.140 0 0))) ((bruijn ##.k.472 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k79, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.473 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k78) (##inline ##vcore.cdr (bruijn ##.expr.112 10 1))) ((bruijn ##.k.472 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k78, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 9 1)) ((bruijn ##.x.233 18 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k77) 'lambda+ (##inline ##vcore.car (bruijn ##.expr.112 9 1))) ((bruijn ##.k.472 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k77, self)))),
      _V0lambda_P,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.453 0 0) (bruijn ##.k.448 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.650 1 0) (basic-block 1 1 (##.reg.655) ((##vcore.>= (bruijn ##.x.144 6 0) 0)) ((bruijn ##.k.468 1 0) (bruijn ##.reg.655 0 0))) ((bruijn ##.k.468 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.466 1 0)) ((bruijn ##.x.235 26 0) (bruijn ##.k.465 0 0) (##string ##.string.692) (bruijn ##.x.144 6 0)) ((bruijn ##.k.465 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D692.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.652 1 0) ((bruijn ##.x.234 30 0) (bruijn ##.k.463 0 0) (bruijn ##.b.146 7 0) (bruijn ##.labels.98 23 0)) ((bruijn ##.k.463 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      _var0,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 23-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.55.147 0 0) (basic-block 1 1 (##.reg.653) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.55.147 1 0)) (bruijn ##.pc.113 23 2) 1)) ((bruijn ##.k.454 7 0) (##inline ##vcore.cons 'case-lambda (##inline ##vcore.cons (bruijn ##.x.144 10 0) (##inline ##vcore.cons (bruijn ##.reg.653 0 0) '()))))) (basic-block 1 1 (##.reg.654) ((##vcore.symbol? (bruijn ##.b.146 8 0))) (if (bruijn ##.reg.654 0 0) ((bruijn ##.x.235 30 0) (bruijn ##.k.454 7 0) (##string ##.string.693) (bruijn ##.b.146 8 0)) ((bruijn ##.x.235 30 0) (bruijn ##.k.454 7 0) (##string ##.string.694) (bruijn ##.b.146 8 0)))))
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
      VGetArg(statics, 23-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
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
      VGetArg(statics, 8-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D693.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D694.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.651) ((##vcore.int? (bruijn ##.b.146 5 0))) (if (bruijn ##.reg.651 0 0) ((bruijn ##.k.454 4 0) (bruijn ##.expr.112 20 1)) (basic-block 1 1 (##.reg.652) ((##vcore.symbol? (bruijn ##.b.146 6 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k95) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k96)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VGetArg(statics, 20-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k96, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k93) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k94))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k94, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.650) ((##vcore.int? (bruijn ##.x.144 4 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k91) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k92)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k92, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.25.145 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k90) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda14) (bruijn ##.kk.5.114 14 1)) ((bruijn ##.k.448 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k90, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda14, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.145 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k89) (##inline ##vcore.car (bruijn ##.expr.25.145 0 0))) ((bruijn ##.k.448 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k89, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k88) (##inline ##vcore.cdr (bruijn ##.expr.24.143 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k88, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.143 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k87) (##inline ##vcore.car (bruijn ##.expr.24.143 0 0))) ((bruijn ##.k.448 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k87, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.449 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k86) (##inline ##vcore.cdr (bruijn ##.expr.112 11 1))) ((bruijn ##.k.448 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k86, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 10 1)) ((bruijn ##.x.233 19 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k85) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.112 10 1))) ((bruijn ##.k.448 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k85, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.429 0 0) (bruijn ##.k.424 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.644 1 0) (basic-block 1 1 (##.reg.649) ((##vcore.>= (bruijn ##.x.151 6 0) 0)) ((bruijn ##.k.444 1 0) (bruijn ##.reg.649 0 0))) ((bruijn ##.k.444 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.442 1 0)) ((bruijn ##.x.235 27 0) (bruijn ##.k.441 0 0) (##string ##.string.695) (bruijn ##.x.151 6 0)) ((bruijn ##.k.441 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D695.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.646 1 0) ((bruijn ##.x.234 31 0) (bruijn ##.k.439 0 0) (bruijn ##.b.153 7 0) (bruijn ##.labels.98 24 0)) ((bruijn ##.k.439 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 24-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.56.154 0 0) (basic-block 1 1 (##.reg.647) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.56.154 1 0)) (bruijn ##.pc.113 24 2) 1)) ((bruijn ##.k.430 7 0) (##inline ##vcore.cons 'case-lambda+ (##inline ##vcore.cons (bruijn ##.x.151 10 0) (##inline ##vcore.cons (bruijn ##.reg.647 0 0) '()))))) (basic-block 1 1 (##.reg.648) ((##vcore.symbol? (bruijn ##.b.153 8 0))) (if (bruijn ##.reg.648 0 0) ((bruijn ##.x.235 31 0) (bruijn ##.k.430 7 0) (##string ##.string.696) (bruijn ##.b.153 8 0)) ((bruijn ##.x.235 31 0) (bruijn ##.k.430 7 0) (##string ##.string.697) (bruijn ##.b.153 8 0)))))
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
      VGetArg(statics, 24-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        _V0case__lambda_P,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
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
      VGetArg(statics, 8-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D696.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D697.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.645) ((##vcore.int? (bruijn ##.b.153 5 0))) (if (bruijn ##.reg.645 0 0) ((bruijn ##.k.430 4 0) (bruijn ##.expr.112 21 1)) (basic-block 1 1 (##.reg.646) ((##vcore.symbol? (bruijn ##.b.153 6 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k109) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k110)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VGetArg(statics, 21-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k109, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k110, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k107) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k108))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k107, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k108, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.644) ((##vcore.int? (bruijn ##.x.151 4 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k105) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k106)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k105, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k106, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.152 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k104) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda15) (bruijn ##.kk.5.114 15 1)) ((bruijn ##.k.424 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k104, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda15, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.152 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k103) (##inline ##vcore.car (bruijn ##.expr.28.152 0 0))) ((bruijn ##.k.424 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k103, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k102) (##inline ##vcore.cdr (bruijn ##.expr.27.150 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k102, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.150 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k101) (##inline ##vcore.car (bruijn ##.expr.27.150 0 0))) ((bruijn ##.k.424 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k101, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.425 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k100) (##inline ##vcore.cdr (bruijn ##.expr.112 12 1))) ((bruijn ##.k.424 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k100, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 11 1)) ((bruijn ##.x.233 20 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k99) 'case-lambda+ (##inline ##vcore.car (bruijn ##.expr.112 11 1))) ((bruijn ##.k.424 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k99, self)))),
      _V0case__lambda_P,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.419 0 0) (bruijn ##.k.414 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.420 0 0) (bruijn ##.expr.112 16 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 16-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.159 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.159 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k116) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda16) (bruijn ##.kk.5.114 14 1)) ((bruijn ##.k.414 3 0) #f)) ((bruijn ##.k.414 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k116, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda16, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.157 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k115) (##inline ##vcore.cdr (bruijn ##.expr.30.157 0 0))) ((bruijn ##.k.414 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k115, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.415 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k114) (##inline ##vcore.cdr (bruijn ##.expr.112 13 1))) ((bruijn ##.k.414 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k114, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 12 1)) ((bruijn ##.x.233 21 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k113) 'case-lambda-error (##inline ##vcore.car (bruijn ##.expr.112 12 1))) ((bruijn ##.k.414 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k113, self)))),
      _V0case__lambda__error,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.401 0 0) (bruijn ##.k.397 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.640 1 0) ((bruijn ##.x.234 27 0) (bruijn ##.k.410 0 0) (bruijn ##.x.163 3 0) (bruijn ##.labels.98 20 0)) ((bruijn ##.k.410 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VGetArg(statics, 20-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.642 1 0) (basic-block 1 1 (##.reg.643) ((##vcore.>= (bruijn ##.x.163 7 0) 0)) ((bruijn ##.k.408 1 0) (bruijn ##.reg.643 0 0))) ((bruijn ##.k.408 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.406 0 0) ((bruijn ##.k.402 5 0) (bruijn ##.expr.112 22 1)) ((bruijn ##.x.235 29 0) (bruijn ##.k.402 5 0) (##string ##.string.699) (bruijn ##.x.163 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D699.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.57.164 0 0) ((bruijn ##.k.402 2 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.57.164 0 0)) '()))) (basic-block 1 1 (##.reg.641) ((##vcore.symbol? (bruijn ##.x.163 4 0))) (if (bruijn ##.reg.641 0 0) ((bruijn ##.x.235 27 0) (bruijn ##.k.402 3 0) (##string ##.string.698) (bruijn ##.x.163 4 0)) (basic-block 1 1 (##.reg.642) ((##vcore.int? (bruijn ##.x.163 5 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k125) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k126))))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D698.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k125, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k126, self)))));
    }
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.640) ((##vcore.symbol? (bruijn ##.x.163 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k123) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k124)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k123, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k124, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.162 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k122) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda17) (bruijn ##.kk.5.114 15 1)) ((bruijn ##.k.397 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k122, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda17, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.162 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k121) (##inline ##vcore.car (bruijn ##.expr.33.162 0 0))) ((bruijn ##.k.397 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k121, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.398 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k120) (##inline ##vcore.cdr (bruijn ##.expr.112 14 1))) ((bruijn ##.k.397 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k120, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 13 1)) ((bruijn ##.x.233 22 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k119) 'close (##inline ##vcore.car (bruijn ##.expr.112 13 1))) ((bruijn ##.k.397 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k119, self)))),
      _V0close,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.384 0 0) (bruijn ##.k.380 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.636 1 0) ((bruijn ##.x.234 28 0) (bruijn ##.k.393 0 0) (bruijn ##.x.168 3 0) (bruijn ##.labels.98 21 0)) ((bruijn ##.k.393 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VGetArg(statics, 21-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.638 1 0) (basic-block 1 1 (##.reg.639) ((##vcore.>= (bruijn ##.x.168 7 0) 0)) ((bruijn ##.k.391 1 0) (bruijn ##.reg.639 0 0))) ((bruijn ##.k.391 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.389 0 0) ((bruijn ##.k.385 5 0) (bruijn ##.expr.112 23 1)) ((bruijn ##.x.235 30 0) (bruijn ##.k.385 5 0) (##string ##.string.700) (bruijn ##.x.168 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 23-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D700.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.58.169 0 0) ((bruijn ##.k.385 2 0) (##inline ##vcore.cons 'foreign-function (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.58.169 0 0)) '()))) (basic-block 1 1 (##.reg.637) ((##vcore.symbol? (bruijn ##.x.168 4 0))) (if (bruijn ##.reg.637 0 0) ((bruijn ##.x.235 28 0) (bruijn ##.k.385 3 0) (##string ##.string.698) (bruijn ##.x.168 4 0)) (basic-block 1 1 (##.reg.638) ((##vcore.int? (bruijn ##.x.168 5 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k135) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k136))))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D698.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k135, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k136, self)))));
    }
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.636) ((##vcore.symbol? (bruijn ##.x.168 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k133) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k134)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k133, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k134, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.35.167 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k132) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda18) (bruijn ##.kk.5.114 16 1)) ((bruijn ##.k.380 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k132, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda18, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.167 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k131) (##inline ##vcore.car (bruijn ##.expr.35.167 0 0))) ((bruijn ##.k.380 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k131, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.381 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k130) (##inline ##vcore.cdr (bruijn ##.expr.112 15 1))) ((bruijn ##.k.380 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k130, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 14 1)) ((bruijn ##.x.233 23 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k129) 'foreign-function (##inline ##vcore.car (bruijn ##.expr.112 14 1))) ((bruijn ##.k.380 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k129, self)))),
      _V0foreign__function,
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.364 0 0) (bruijn ##.k.359 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.632 1 0) ((bruijn ##.x.234 32 0) (bruijn ##.k.375 0 0) (bruijn ##.x.175 4 0) (bruijn ##.labels.98 25 0)) ((bruijn ##.k.375 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 25-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.634 1 0) (basic-block 1 1 (##.reg.635) ((##vcore.>= (bruijn ##.x.175 8 0) 0)) ((bruijn ##.k.373 1 0) (bruijn ##.reg.635 0 0))) ((bruijn ##.k.373 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.371 0 0) ((bruijn ##.k.365 6 0) (bruijn ##.expr.112 27 1)) ((bruijn ##.x.235 34 0) (bruijn ##.k.365 6 0) (##string ##.string.703) (bruijn ##.x.175 7 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 27-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D703.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.59.176 0 0) ((bruijn ##.k.365 3 0) (##inline ##vcore.cons 'declare (##inline ##vcore.cons (bruijn ##.name.173 6 0) (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.59.176 0 0)) '())))) (basic-block 1 1 (##.reg.633) ((##vcore.symbol? (bruijn ##.x.175 5 0))) (if (bruijn ##.reg.633 0 0) ((bruijn ##.x.235 32 0) (bruijn ##.k.365 4 0) (##string ##.string.702) (bruijn ##.x.175 5 0)) (basic-block 1 1 (##.reg.634) ((##vcore.int? (bruijn ##.x.175 6 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k147) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k148))))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D702.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k147, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k148, self)))));
    }
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.631) ((##vcore.string? (bruijn ##.name.173 4 0))) (if (##inline ##vcore.not (bruijn ##.reg.631 0 0)) ((bruijn ##.x.235 29 0) (bruijn ##.k.365 1 0) (##string ##.string.701) (bruijn ##.x.175 2 0)) (basic-block 1 1 (##.reg.632) ((##vcore.symbol? (bruijn ##.x.175 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k145) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k146)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D701.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k145, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k146, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.38.174 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k144) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda19) (bruijn ##.kk.5.114 19 1)) ((bruijn ##.k.359 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k144, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda19, self)))),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.174 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k143) (##inline ##vcore.car (bruijn ##.expr.38.174 0 0))) ((bruijn ##.k.359 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k143, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k142) (##inline ##vcore.cdr (bruijn ##.expr.37.172 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k142, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.172 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k141) (##inline ##vcore.car (bruijn ##.expr.37.172 0 0))) ((bruijn ##.k.359 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k141, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.360 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k140) (##inline ##vcore.cdr (bruijn ##.expr.112 16 1))) ((bruijn ##.k.359 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k140, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 15 1)) ((bruijn ##.x.233 24 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k139) 'declare (##inline ##vcore.car (bruijn ##.expr.112 15 1))) ((bruijn ##.k.359 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 15-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k139, self)))),
      _V0declare,
      VInlineCar2(runtime,
        VGetArg(statics, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.45.186 4 1) (bruijn ##.k.350 1 0) (bruijn ##.expr.47.188 2 1) (bruijn ##.x.351 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.47.188 1 1))) ((bruijn ##.x.232 35 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k156) (bruijn ##.args.44.189 1 2)) ((bruijn ##.k.350 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k156, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.45.186 7 1) (bruijn ##.k.344 2 0) (bruijn ##.expr.47.188 5 1) (bruijn ##.x.346 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.232 38 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k159) (bruijn ##.args.44.189 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k159, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.46.190 0 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k158) (##inline ##vcore.cdr (bruijn ##.expr.47.188 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.47.188 3 1)) (bruijn ##.args.44.189 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k158, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.343 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0lambda23))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0lambda23, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.341 1 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0lambda22) (bruijn ##.loop.187 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0lambda22, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k155) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k157))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k155, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187_V0k157, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187")) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-expr.100 ##.loop.187) (bruijn ##.loop.187 0 0) (bruijn ##.k.340 1 0) (##inline ##vcore.cdr (bruijn ##.expr.42.183 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V10_Dloop_D187(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.339 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda21))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda21, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.355 0 0) (bruijn ##.k.353 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.356 0 0) (bruijn ##.expr.112 22 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 22-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.192 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k160) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda25) (bruijn ##.kk.5.114 20 1)) ((bruijn ##.k.353 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k160, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda25, self)))),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.183 0 0)) (##vcore.call-with-values (bruijn ##.k.334 4 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda20) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda24)) ((bruijn ##.k.334 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda20, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda24, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.181 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k154) (##inline ##vcore.cdr (bruijn ##.expr.41.181 0 0))) ((bruijn ##.k.334 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k154, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.179 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k153) (##inline ##vcore.cdr (bruijn ##.expr.40.179 0 0))) ((bruijn ##.k.334 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k153, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.335 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k152) (##inline ##vcore.cdr (bruijn ##.expr.112 17 1))) ((bruijn ##.k.334 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k152, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 17-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 16 1)) ((bruijn ##.x.233 25 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k151) 'declare-foreign (##inline ##vcore.car (bruijn ##.expr.112 16 1))) ((bruijn ##.k.334 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 16-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k151, self)))),
      _V0declare__foreign,
      VInlineCar2(runtime,
        VGetArg(statics, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.329 0 0) (bruijn ##.k.326 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.330 0 0) (bruijn ##.expr.112 19 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 19-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.327 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.112 18 1))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k164) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda26) (bruijn ##.kk.5.114 17 1)) ((bruijn ##.k.326 1 0) #f)) ((bruijn ##.k.326 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 18-1, 1))))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k164, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda26, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 17 1)) ((bruijn ##.x.233 26 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k163) 'push-set! (##inline ##vcore.car (bruijn ##.expr.112 17 1))) ((bruijn ##.k.326 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 17-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k163, self)))),
      _V0push__set_B,
      VInlineCar2(runtime,
        VGetArg(statics, 17-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.314 0 0) (bruijn ##.k.310 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.628 1 0) ((bruijn ##.x.234 33 0) (bruijn ##.k.322 0 0) (bruijn ##.x.197 4 0) (bruijn ##.labels.98 26 0)) ((bruijn ##.k.322 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 26-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.60.198 0 0) (basic-block 1 1 (##.reg.629) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.60.198 1 0)) (bruijn ##.pc.113 26 2) 1)) ((bruijn ##.k.315 4 0) (##inline ##vcore.cons 'bf (##inline ##vcore.cons (bruijn ##.reg.629 0 0) '())))) (basic-block 1 1 (##.reg.630) ((##vcore.symbol? (bruijn ##.x.197 5 0))) (if (bruijn ##.reg.630 0 0) ((bruijn ##.x.235 33 0) (bruijn ##.k.315 4 0) (##string ##.string.704) (bruijn ##.x.197 5 0)) ((bruijn ##.x.235 33 0) (bruijn ##.k.315 4 0) (##string ##.string.705) (bruijn ##.x.197 5 0)))))
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
      VGetArg(statics, 26-1, 2),
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D704.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D705.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.627) ((##vcore.int? (bruijn ##.x.197 2 0))) (if (bruijn ##.reg.627 0 0) ((bruijn ##.k.315 1 0) (bruijn ##.expr.112 23 1)) (basic-block 1 1 (##.reg.628) ((##vcore.symbol? (bruijn ##.x.197 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k171) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k172)))))
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
      VGetArg(statics, 23-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k171, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k172, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.50.196 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k170) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda27) (bruijn ##.kk.5.114 20 1)) ((bruijn ##.k.310 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k170, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda27, self)))),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.196 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k169) (##inline ##vcore.car (bruijn ##.expr.50.196 0 0))) ((bruijn ##.k.310 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k169, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.311 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k168) (##inline ##vcore.cdr (bruijn ##.expr.112 19 1))) ((bruijn ##.k.310 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k168, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 18 1)) ((bruijn ##.x.233 27 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k167) 'bf (##inline ##vcore.car (bruijn ##.expr.112 18 1))) ((bruijn ##.k.310 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 18-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k167, self)))),
      _V0bf,
      VInlineCar2(runtime,
        VGetArg(statics, 18-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.302 0 0) (bruijn ##.k.298 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.625 1 0) (basic-block 1 1 (##.reg.626) ((##vcore.>= (bruijn ##.x.202 4 0) 0)) ((bruijn ##.k.306 1 0) (bruijn ##.reg.626 0 0))) ((bruijn ##.k.306 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.304 0 0) ((bruijn ##.k.303 2 0) (bruijn ##.expr.112 25 1)) ((bruijn ##.x.235 32 0) (bruijn ##.k.303 2 0) (##string ##.string.706) (bruijn ##.x.202 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 25-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D706.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.625) ((##vcore.int? (bruijn ##.x.202 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k179) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k180)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k179, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k180, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.201 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k178) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda28) (bruijn ##.kk.5.114 21 1)) ((bruijn ##.k.298 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k178, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda28, self)))),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.201 0 0)) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k177) (##inline ##vcore.car (bruijn ##.expr.52.201 0 0))) ((bruijn ##.k.298 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k177, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.299 0 0) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k176) (##inline ##vcore.cdr (bruijn ##.expr.112 20 1))) ((bruijn ##.k.298 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k176, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 20-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 19 1)) ((bruijn ##.x.233 28 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k175) 'letrec-begin (##inline ##vcore.car (bruijn ##.expr.112 19 1))) ((bruijn ##.k.298 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 19-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k175, self)))),
      _V0letrec__begin,
      VInlineCar2(runtime,
        VGetArg(statics, 19-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.293 0 0) (bruijn ##.k.290 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.294 0 0) (bruijn ##.expr.112 22 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 22-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.291 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.112 21 1))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k184) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda29) (bruijn ##.kk.5.114 20 1)) ((bruijn ##.k.290 1 0) #f)) ((bruijn ##.k.290 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 21-1, 1))))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k184, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda29, self)))),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 20 1)) ((bruijn ##.x.233 29 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k183) 'letrec-end (##inline ##vcore.car (bruijn ##.expr.112 20 1))) ((bruijn ##.k.290 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 20-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k183, self)))),
      _V0letrec__end,
      VInlineCar2(runtime,
        VGetArg(statics, 20-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.235 28 0) (bruijn ##.k.288 0 0) (##string ##.string.707) (bruijn ##.expr.112 21 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D707.sym, VPOINTER_OTHER),
      VGetArg(statics, 21-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.268 19 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda30) (bruijn ##.kk.5.114 19 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 19-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda30, self)))),
      VGetArg(statics, 19-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k182) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k185))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k182, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k185, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k174) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k181))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k174, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k181, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k166) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k173))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k166, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k173, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k162) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k165))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k162, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k165, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k150) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k161))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k150, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k161, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k138) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k149))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k138, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k149, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k128) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k137))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k128, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k137, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k118) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k127))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k118, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k127, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k112) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k117))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k112, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k117, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k98) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k111))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k98, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k111, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k84) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k97))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k84, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k97, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k76) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k83))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k76, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k83, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k68) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k75))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k68, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k75, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k60) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k67))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k60, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k67, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k54) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k59))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k54, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k59, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k44) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k53))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k44, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k53, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k36) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k43))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k36, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k43, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k31) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k35))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k31, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k35, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k27) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k30))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0k30, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.267 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda5))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100_V0lambda5, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (##inline ##vcore.eq? (bruijn ##.e.208 2 0) (bruijn ##.reg.671 1 0))) (##vcore.vector-set! (bruijn ##.k.567 0 0) (bruijn ##.tape.206 5 1) (bruijn ##.pc.207 5 2) (bruijn ##.e.208 2 0)) ((bruijn ##.k.567 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.672) ((##vcore.+ (bruijn ##.pc.207 6 2) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-loop.205) (bruijn ##.preprocess-loop.205 7 0) (bruijn ##.k.562 6 0) (bruijn ##.tape.206 6 1) (bruijn ##.reg.672 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.671) ((##vcore.vector-ref (bruijn ##.tape.206 4 1) (bruijn ##.pc.207 4 2))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k187) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k188)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k187, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k188, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.669) ((##vcore.>= (bruijn ##.pc.207 1 2) (bruijn ##.reg.668 3 0))) (if (bruijn ##.reg.669 0 0) ((bruijn ##.k.562 1 0) (bruijn ##.tape.206 1 1)) (basic-block 1 1 (##.reg.670) ((##vcore.vector-ref (bruijn ##.tape.206 2 1) (bruijn ##.pc.207 2 2))) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-expr.100) (bruijn ##.preprocess-expr.100 5 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k186) (bruijn ##.reg.670 0 0) (bruijn ##.pc.207 2 2)))))
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
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205_V0k186, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-loop.205) (bruijn ##.preprocess-loop.205 1 0) (bruijn ##.k.237 4 0) (bruijn ##.x.571 0 0) 0)
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (letrec 3 ('() (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99") (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100")) (basic-block 1 1 (##.reg.668) ((##vcore.vector-length (bruijn ##.tape.97 2 1))) (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205")) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.99) (bruijn ##.peel-labels.99 2 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k189) (bruijn ##.tape.97 3 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VNULL;
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D100, self))));
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D205, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k189, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D99(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
    }
    }
}
void _V50_V0vanity_V0bytecode_V0find__declare_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0find__declare_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.574 0 0) ((bruijn ##.k.572 3 0) (bruijn ##.reg.673 2 0)) (##qualified-call (vanity bytecode find-declare) (bruijn ##.find-declare.91 4 1) (bruijn ##.k.572 3 0) (bruijn ##.tape.209 3 1) (bruijn ##.reg.673 2 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->vars[0]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__declare(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0bytecode_V0find__declare(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (basic-block 3 3 (##.reg.673 ##.reg.674 ##.reg.675) ((##vcore.+ (bruijn ##.program-counter.210 1 2) 1) (##vcore.vector-length (bruijn ##.tape.209 1 1)) (##vcore.>= (bruijn ##.reg.673 0 0) (bruijn ##.reg.674 0 1))) (if (bruijn ##.reg.675 0 2) ((bruijn ##.k.572 1 0) #f) (basic-block 1 1 (##.reg.676) ((##vcore.vector-ref (bruijn ##.tape.209 2 1) (bruijn ##.reg.673 1 0))) (##vcore.eqv? (close _V50_V0vanity_V0bytecode_V0find__declare_V0k190) (##inline ##vcore.car (bruijn ##.reg.676 0 0)) 'declare))))
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
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__declare_V0k190, self)))),
      VInlineCar2(runtime,
        self->vars[0]),
      _V0declare);
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode set-declares! ##.set-declare-loop.213) (bruijn ##.set-declare-loop.213 3 0) (bruijn ##.k.581 2 0) (bruijn ##.x.583 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity bytecode find-declare) (bruijn ##.find-declare.91 4 1) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k192) (bruijn ##.tape.212 3 1) (bruijn ##.pc.214 1 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k192, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__declare(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.594 0 0) (bruijn ##.k.589 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-declare! (bruijn ##.k.595 1 0) (##inline ##vcore.car (bruijn ##.expr.64.218 3 0)) (bruijn ##.x.596 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetDeclare, 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      _var0);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vasm-lambda.92 10 2) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k198) (bruijn ##.tape.212 9 1) (##inline ##vcore.car (bruijn ##.expr.65.220 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k198, self)))),
      VGetArg(statics, 9-1, 1),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.220 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.65.220 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k197) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda32) (bruijn ##.kk.61.215 5 1)) ((bruijn ##.k.589 3 0) #f)) ((bruijn ##.k.589 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k197, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda32, self)))),
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
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.218 0 0)) ((close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k196) (##inline ##vcore.cdr (bruijn ##.expr.64.218 0 0))) ((bruijn ##.k.589 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k196, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.590 0 0) ((close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k195) (##inline ##vcore.cdr (bruijn ##.reg.677 2 0))) ((bruijn ##.k.589 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k195, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.reg.677 1 0)) ((bruijn ##.x.233 12 0) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k194) 'declare (##inline ##vcore.car (bruijn ##.reg.677 1 0))) ((bruijn ##.k.589 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k194, self)))),
      _V0declare,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.678) ((##vcore.vector-ref (bruijn ##.tape.212 7 1) (bruijn ##.pc.214 5 1))) ((bruijn ##.x.235 12 0) (bruijn ##.k.586 1 0) (##string ##.string.708) (bruijn ##.reg.678 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D708.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.584 2 0) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda33) (bruijn ##.kk.61.215 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda33, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.677) ((##vcore.vector-ref (bruijn ##.tape.212 4 1) (bruijn ##.pc.214 2 1))) ((close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k193) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k199)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k193, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k199, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.pc.214 0 1) (##vcore.call/cc (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k191) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda31)) ((bruijn ##.k.581 0 0) #f))
if(VDecodeBool(
_var1)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0k191, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213_V0lambda31, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode set-declares! ##.set-declare-loop.213) (bruijn ##.set-declare-loop.213 1 0) (bruijn ##.k.580 2 0) (bruijn ##.x.599 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213")) (##qualified-call (vanity bytecode find-declare) (bruijn ##.find-declare.91 2 1) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V0k200) (bruijn ##.tape.212 1 1) -1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D213, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V0k200, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(-1l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__declare(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0find__toplevel_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0find__toplevel_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.602 0 0) (basic-block 1 1 (##.reg.682) ((##vcore.+ (bruijn ##.program-counter.223 4 2) 1)) ((bruijn ##.k.600 4 0) (bruijn ##.reg.682 0 0))) (basic-block 1 1 (##.reg.683) ((##vcore.+ 1 (bruijn ##.program-counter.223 4 2))) (##qualified-call (vanity bytecode find-toplevel) (bruijn ##.find-toplevel.95 5 5) (bruijn ##.k.600 4 0) (bruijn ##.tape.222 4 1) (bruijn ##.reg.683 0 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
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
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 5));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__toplevel(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0bytecode_V0find__toplevel(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (basic-block 2 2 (##.reg.679 ##.reg.680) ((##vcore.vector-length (bruijn ##.tape.222 1 1)) (##vcore.>= (bruijn ##.program-counter.223 1 2) (bruijn ##.reg.679 0 0))) (if (bruijn ##.reg.680 0 1) ((bruijn ##.k.600 1 0) #f) (basic-block 1 1 (##.reg.681) ((##vcore.vector-ref (bruijn ##.tape.222 2 1) (bruijn ##.program-counter.223 2 2))) (##vcore.eqv? (close _V50_V0vanity_V0bytecode_V0find__toplevel_V0k201) (##inline ##vcore.car (bruijn ##.reg.681 0 0)) 'toplevel))))
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
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__toplevel_V0k201, self)))),
      VInlineCar2(runtime,
        self->vars[0]),
      _V0toplevel);
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.612 1 0) (bruijn ##.program-counter.226 3 1) (bruijn ##.x.613 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.program-counter.226 2 1) (##qualified-call (vanity bytecode find-toplevel) (bruijn ##.find-toplevel.95 5 5) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k204) (bruijn ##.tape.225 2 0) (bruijn ##.program-counter.226 2 1)) ((bruijn ##.k.612 0 0) #f))
if(VDecodeBool(
statics->up->vars[1])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 5));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k204, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0find__toplevel(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval-vasm-toplevel.93 6 3) (bruijn ##.k.611 0 0) (bruijn ##.tape.225 3 0) (bruijn ##.program-counter.226 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 3,
      _var0,
      statics->up->up->vars[0],
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.program-counter.226 2 1) (##vcore.call-with-values (bruijn ##.k.609 1 0) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0lambda34) (bruijn ##.eval-loop.227 2 2)) (##vcore.apply (bruijn ##.k.609 1 0) (bruijn ##.x.236 8 0) (bruijn ##.rets.228 1 1)))
if(VDecodeBool(
statics->up->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0lambda34, self)))),
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->vars[0],
      VGetArg(statics, 8-1, 0),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227, got ~D~N"
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
  // ((close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k203) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k205))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k203, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227_V0k205, self)))));
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode eval-vasm ##.eval-loop.227) (bruijn ##.eval-loop.227 1 2) (bruijn ##.k.607 3 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[2]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227(runtime, _closure->env, 1, _arg0);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.608 1 0) 0 (close "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227")) (##qualified-call (vanity bytecode set-declares!) (bruijn ##.set-declares!.94 3 4) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V0k206) (bruijn ##.tape.225 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeInt(0l);
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D227, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[4]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V0k206, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0set__declares_B(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0eval__vasm(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (##qualified-call (vanity bytecode preprocess-vasm) (bruijn ##.preprocess-vasm.90 1 0) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V0k202) (bruijn ##.vasm.224 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V0k202, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
static void _V0vanity_V0bytecode_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 7 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm") (close "_V50_V0vanity_V0bytecode_V0find__declare") (bruijn ##.x.578 2 0) (bruijn ##.x.579 1 0) (close "_V50_V0vanity_V0bytecode_V0set__declares_B") (close "_V50_V0vanity_V0bytecode_V0find__toplevel") (close "_V50_V0vanity_V0bytecode_V0eval__vasm")) ((bruijn ##.k.230 13 0) (##inline ##vcore.cons (##inline ##vcore.cons 'eval-vasm (bruijn ##.eval-vasm.96 0 6)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__declare, self))));
    self->vars[2] = statics->up->vars[0];
    self->vars[3] = statics->vars[0];
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0find__toplevel, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eval__vasm,
        self->vars[6]),
        VNULL));
    }
}
static void _V0vanity_V0bytecode_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.function (close _V0vanity_V0bytecode_V20_V0k12) (##string ##.string.709))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k12, self)))),
      VEncodePointer(&_V10_Dstring_D709.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.function (close _V0vanity_V0bytecode_V20_V0k11) (##string ##.string.710))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k11, self)))),
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 5 0) (close _V0vanity_V0bytecode_V20_V0k10) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k10, self)))),
      _V0values);
}
static void _V0vanity_V0bytecode_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 4 0) (close _V0vanity_V0bytecode_V20_V0k9) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k9, self)))),
      _V0error);
}
static void _V0vanity_V0bytecode_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 3 0) (close _V0vanity_V0bytecode_V20_V0k8) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k8, self)))),
      _V0assv);
}
static void _V0vanity_V0bytecode_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 2 0) (close _V0vanity_V0bytecode_V20_V0k7) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k7, self)))),
      _V0equal_Q);
}
static void _V0vanity_V0bytecode_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 1 0) (close _V0vanity_V0bytecode_V20_V0k6) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k6, self)))),
      _V0reverse);
}
static void _V0vanity_V0bytecode_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 0 0) (close _V0vanity_V0bytecode_V20_V0k5) 'lookup-intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k5, self)))),
      _V0lookup__intrinsic);
}
static void _V0vanity_V0bytecode_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0bytecode_V20_V0k4) (##string ##.string.711) (bruijn ##.x.616 2 0) (bruijn ##.x.617 1 0) (bruijn ##.x.618 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D711.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0bytecode_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k3) (##string ##.string.712))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D712.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k2) (##string ##.string.713))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D713.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k1) (##string ##.string.714))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D714.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0bytecode_V20 = (VFunc)_V0vanity_V0bytecode_V20_V0lambda1;
