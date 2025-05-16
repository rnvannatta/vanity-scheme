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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_V0vanity_V0bytecode_V20" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0_G_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, ">=" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VMakeVasmLambda" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEvalVasmToplevel" };
VWEAK VWORD _V0eval__vasm;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0eval__vasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "eval-vasm" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "declare not declare\?" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm: unknown or malformed line" };
VWEAK VWORD _V0letrec__end;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0letrec__end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "letrec-end" };
VWEAK VWORD _V0letrec__begin;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0letrec__begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "letrec-begin" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm letrec-begin an integer" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D691 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "vasm bf: not an integer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D690 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "vasm bf: unknown label" };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
VWEAK VWORD _V0push__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0push__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "push-set!" };
VWEAK VWORD _V0declare__foreign;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0declare__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "declare-foreign" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D689 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm declare: not a nonnegative integer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "vasm declare: unknown label" };
VWEAK VWORD _V0declare;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "declare" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vasm declare: not a string" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "vasm foreign-function: not a nonnegative integer" };
VWEAK VWORD _V0foreign__function;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D685 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "vasm close: not a nonnegative integer" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D684 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm close: unknown label" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
VWEAK VWORD _V0case__lambda__error;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0case__lambda__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "case-lambda-error" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D683 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "vasm case-lambda+: not an integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D682 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda+: unknown label" };
VWEAK VWORD _V0case__lambda_P;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0case__lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "case-lambda+" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D681 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "vasm case-lambda+: not a nonnegative integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D680 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda: not an integer" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D679 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm case-lambda: unknown label" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D678 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "vasm case-lambda: not a nonnegative integer" };
VWEAK VWORD _V0lambda_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "lambda+" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D677 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm lambda+: not a nonnegative integer" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D676 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vasm lambda: not a nonnegative integer" };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D675 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "vasm call: not a nonnegative integer" };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D674 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm lookup: not a symbol" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D673 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm bruijn: not both nonnegative integers" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D672 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm intrinsic: not a recognized intrinsic" };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D671 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm intrinsic: not a symbol" };
VWEAK VWORD _V0push;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0push = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "push" };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D670 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm label: label declared twice" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D669 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "vasm label: not a symbol" };
static __attribute__((constructor)) void VDllMain1() {
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0_G_E = VEncodePointer(VLookupConstant("_V0_G_E", &_VW_V0_G_E), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VLookupConstant("_V0lookup__intrinsic", &_VW_V0lookup__intrinsic), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0eval__vasm = VEncodePointer(VLookupConstant("_V0eval__vasm", &_VW_V0eval__vasm), VPOINTER_OTHER);
  _V0letrec__end = VEncodePointer(VLookupConstant("_V0letrec__end", &_VW_V0letrec__end), VPOINTER_OTHER);
  _V0letrec__begin = VEncodePointer(VLookupConstant("_V0letrec__begin", &_VW_V0letrec__begin), VPOINTER_OTHER);
  _V0bf = VEncodePointer(VLookupConstant("_V0bf", &_VW_V0bf), VPOINTER_OTHER);
  _V0push__set_B = VEncodePointer(VLookupConstant("_V0push__set_B", &_VW_V0push__set_B), VPOINTER_OTHER);
  _V0declare__foreign = VEncodePointer(VLookupConstant("_V0declare__foreign", &_VW_V0declare__foreign), VPOINTER_OTHER);
  _V0declare = VEncodePointer(VLookupConstant("_V0declare", &_VW_V0declare), VPOINTER_OTHER);
  _V0foreign__function = VEncodePointer(VLookupConstant("_V0foreign__function", &_VW_V0foreign__function), VPOINTER_OTHER);
  _V0close = VEncodePointer(VLookupConstant("_V0close", &_VW_V0close), VPOINTER_OTHER);
  _V0case__lambda__error = VEncodePointer(VLookupConstant("_V0case__lambda__error", &_VW_V0case__lambda__error), VPOINTER_OTHER);
  _V0case__lambda_P = VEncodePointer(VLookupConstant("_V0case__lambda_P", &_VW_V0case__lambda_P), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0lambda_P = VEncodePointer(VLookupConstant("_V0lambda_P", &_VW_V0lambda_P), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0call = VEncodePointer(VLookupConstant("_V0call", &_VW_V0call), VPOINTER_OTHER);
  _V0lookup = VEncodePointer(VLookupConstant("_V0lookup", &_VW_V0lookup), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VLookupConstant("_V0bruijn", &_VW_V0bruijn), VPOINTER_OTHER);
  _V0intrinsic = VEncodePointer(VLookupConstant("_V0intrinsic", &_VW_V0intrinsic), VPOINTER_OTHER);
  _V0push = VEncodePointer(VLookupConstant("_V0push", &_VW_V0push), VPOINTER_OTHER);
  _V0toplevel = VEncodePointer(VLookupConstant("_V0toplevel", &_VW_V0toplevel), VPOINTER_OTHER);
  _V0label = VEncodePointer(VLookupConstant("_V0label", &_VW_V0label), VPOINTER_OTHER);
}
static void _V10_Dpeel__loop_D103_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.252 0 0) (bruijn ##.k.247 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dpeel__loop_D103_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.reg.622 1 0)) ((bruijn ##.x.234 23 0) (bruijn ##.k.264 0 0) (##string ##.string.669) (bruijn ##.label.109 4 0)) ((bruijn ##.k.264 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D669.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D103_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.261 1 0) ((bruijn ##.x.234 25 0) (bruijn ##.k.262 0 0) (##string ##.string.670) (bruijn ##.label.109 6 0)) ((bruijn ##.k.262 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D670.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D103_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.623) ((##vcore.+ (bruijn ##.pc.104 16 1) 1)) ((bruijn ##.peel-loop.103 17 0) (bruijn ##.k.253 7 0) (bruijn ##.reg.623 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 16-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dpeel__loop_D103_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector-set! (close _V10_Dpeel__loop_D103_k27) (bruijn ##.tape.101 17 1) (bruijn ##.pc.104 14 1) (##inline ##vcore.car (bruijn ##.expr.4.110 6 0)))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k27, self)})),
      VGetArg(statics, 17-1, 1),
      VGetArg(statics, 14-1, 1),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)));
}
static void _V10_Dpeel__loop_D103_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dpeel__loop_D103_k26) (bruijn ##.labels.98 17 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.label.109 6 0) (bruijn ##.pc.104 13 1)) (bruijn ##.labels.98 17 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k26, self)})),
      VEncodeInt(17l), VEncodeInt(0l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VGetArg(statics, 13-1, 1)),
        VGetArg(statics, 17-1, 0))
    );
}
static void _V10_Dpeel__loop_D103_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D103_k24) (close _V10_Dpeel__loop_D103_k25))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k24, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k25, self)})));
}
static void _V10_Dpeel__loop_D103_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.237 20 0) (close _V10_Dpeel__loop_D103_k23) (bruijn ##.label.109 4 0) (bruijn ##.labels.98 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k23, self)})),
      statics->up->up->up->vars[0],
      VGetArg(statics, 15-1, 0));
}
static void _V10_Dpeel__loop_D103_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.622) ((##vcore.symbol? (bruijn ##.label.109 3 0))) ((close _V10_Dpeel__loop_D103_k21) (close _V10_Dpeel__loop_D103_k22)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k21, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k22, self)})));
    }
}
static void _V10_Dpeel__loop_D103_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.110 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.4.110 0 0))) (##vcore.call-with-values (close _V10_Dpeel__loop_D103_k20) (close _V10_Dpeel__loop_D103_lambda6) (bruijn ##.kk.0.105 6 1)) ((bruijn ##.k.247 4 0) #f)) ((bruijn ##.k.247 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k20, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_lambda6, self)})),
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
static void _V10_Dpeel__loop_D103_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D103_k19) (##inline ##vcore.cdr (bruijn ##.expr.3.108 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k19, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpeel__loop_D103_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.108 0 0)) ((close _V10_Dpeel__loop_D103_k18) (##inline ##vcore.car (bruijn ##.expr.3.108 0 0))) ((bruijn ##.k.247 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k18, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D103_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.248 0 0) ((close _V10_Dpeel__loop_D103_k17) (##inline ##vcore.cdr (bruijn ##.reg.620 2 0))) ((bruijn ##.k.247 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k17, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D103_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.reg.620 1 0)) ((bruijn ##.x.233 17 0) (close _V10_Dpeel__loop_D103_k16) 'label (##inline ##vcore.car (bruijn ##.reg.620 1 0))) ((bruijn ##.k.247 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k16, self)})),
      _V0label,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D103_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.621) ((##vcore.+ (bruijn ##.pc.104 6 1) 1)) ((bruijn ##.peel-loop.103 7 0) (bruijn ##.k.244 1 0) (bruijn ##.reg.621 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      statics->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dpeel__loop_D103_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.242 2 0) (close _V10_Dpeel__loop_D103_lambda7) (bruijn ##.kk.0.105 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_lambda7, self)})),
      statics->up->vars[1]);
}
static void _V10_Dpeel__loop_D103_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.620) ((##vcore.vector-ref (bruijn ##.tape.101 6 1) (bruijn ##.pc.104 3 1))) ((close _V10_Dpeel__loop_D103_k15) (close _V10_Dpeel__loop_D103_k28)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k15, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k28, self)})));
    }
}
static void _V10_Dpeel__loop_D103_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.241 0 0) ((bruijn ##.k.240 1 0) (bruijn ##.tape.101 4 1)) (##vcore.call/cc (bruijn ##.k.240 1 0) (close _V10_Dpeel__loop_D103_lambda5)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_lambda5, self)})));
}
}
static void _V10_Dpeel__loop_D103_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.232 14 0) (close _V10_Dpeel__loop_D103_k14) (bruijn ##.pc.104 0 1) (bruijn ##.reg.619 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k14, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dpeel__labels_D99_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__labels_D99_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.619) ((##vcore.vector-length (bruijn ##.tape.101 1 1))) (letrec 1 ((close _V10_Dpeel__loop_D103_lambda4)) ((bruijn ##.peel-loop.103 0 0) (bruijn ##.k.239 2 0) 0)))
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_lambda4, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      VEncodeInt(0l));
    }
    }
}
static void _V10_Dpreprocess__expr_D100_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.558 0 0) (bruijn ##.k.555 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.559 0 0) (bruijn ##.expr.112 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
static void _V10_Dpreprocess__expr_D100_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.556 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.112 3 1))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k31) (close _V10_Dpreprocess__expr_D100_lambda10) (bruijn ##.kk.5.114 2 1)) ((bruijn ##.k.555 1 0) #f)) ((bruijn ##.k.555 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k31, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda10, self)})),
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
static void _V10_Dpreprocess__expr_D100_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 2 1)) ((bruijn ##.x.233 12 0) (close _V10_Dpreprocess__expr_D100_k30) 'toplevel (##inline ##vcore.car (bruijn ##.expr.112 2 1))) ((bruijn ##.k.555 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k30, self)})),
      _V0toplevel,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.550 0 0) (bruijn ##.k.546 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.551 0 0) (bruijn ##.expr.112 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.118 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.9.118 0 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k36) (close _V10_Dpreprocess__expr_D100_lambda11) (bruijn ##.kk.5.114 4 1)) ((bruijn ##.k.546 2 0) #f)) ((bruijn ##.k.546 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k36, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda11, self)})),
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
static void _V10_Dpreprocess__expr_D100_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.547 0 0) ((close _V10_Dpreprocess__expr_D100_k35) (##inline ##vcore.cdr (bruijn ##.expr.112 4 1))) ((bruijn ##.k.546 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k35, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 3 1)) ((bruijn ##.x.233 13 0) (close _V10_Dpreprocess__expr_D100_k34) 'push (##inline ##vcore.car (bruijn ##.expr.112 3 1))) ((bruijn ##.k.546 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k34, self)})),
      _V0push,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.538 0 0) (bruijn ##.k.534 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.54.123 0 0) ((bruijn ##.k.539 2 0) (##inline ##vcore.cons 'intrinsic (##inline ##vcore.cons (bruijn ##.x.54.123 0 0) '()))) ((bruijn ##.x.234 19 0) (bruijn ##.k.539 2 0) (##string ##.string.672) (bruijn ##.x.122 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0intrinsic,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D672.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.655) ((##vcore.symbol? (bruijn ##.x.122 2 0))) (if (##inline ##vcore.not (bruijn ##.reg.655 0 0)) ((bruijn ##.x.234 18 0) (bruijn ##.k.539 1 0) (##string ##.string.671) (bruijn ##.x.122 2 0)) ((bruijn ##.x.235 17 0) (close _V10_Dpreprocess__expr_D100_k43) (bruijn ##.x.122 2 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D671.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k43, self)})),
      statics->up->vars[0]);
}
    }
}
static void _V10_Dpreprocess__expr_D100_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.121 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k42) (close _V10_Dpreprocess__expr_D100_lambda12) (bruijn ##.kk.5.114 6 1)) ((bruijn ##.k.534 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k42, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda12, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.121 0 0)) ((close _V10_Dpreprocess__expr_D100_k41) (##inline ##vcore.car (bruijn ##.expr.11.121 0 0))) ((bruijn ##.k.534 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k41, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.535 0 0) ((close _V10_Dpreprocess__expr_D100_k40) (##inline ##vcore.cdr (bruijn ##.expr.112 5 1))) ((bruijn ##.k.534 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k40, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 4 1)) ((bruijn ##.x.233 14 0) (close _V10_Dpreprocess__expr_D100_k39) 'intrinsic (##inline ##vcore.car (bruijn ##.expr.112 4 1))) ((bruijn ##.k.534 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k39, self)})),
      _V0intrinsic,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.524 0 0) (bruijn ##.k.519 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D100_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.530 0 0) ((bruijn ##.x.232 26 0) (bruijn ##.k.528 2 0) (bruijn ##.right.129 5 0) 0) ((bruijn ##.k.528 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.653 1 0) (basic-block 1 1 (##.reg.654) ((##vcore.int? (bruijn ##.right.129 4 0))) (if (bruijn ##.reg.654 0 0) ((bruijn ##.x.232 25 0) (close _V10_Dpreprocess__expr_D100_k53) (bruijn ##.up.127 6 0) 0) ((bruijn ##.k.528 1 0) #f))) ((bruijn ##.k.528 0 0) #f))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k53, self)})),
      VGetArg(statics, 6-1, 0),
      VEncodeInt(0l));
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
static void _V10_Dpreprocess__expr_D100_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.526 0 0) ((bruijn ##.k.525 2 0) (bruijn ##.expr.112 13 1)) ((bruijn ##.x.234 22 0) (bruijn ##.k.525 2 0) (##string ##.string.673) (bruijn ##.up.127 5 0) (bruijn ##.right.129 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D673.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.653) ((##vcore.int? (bruijn ##.up.127 4 0))) ((close _V10_Dpreprocess__expr_D100_k52) (close _V10_Dpreprocess__expr_D100_k54)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k52, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k54, self)})));
    }
}
static void _V10_Dpreprocess__expr_D100_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.14.128 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k51) (close _V10_Dpreprocess__expr_D100_lambda13) (bruijn ##.kk.5.114 9 1)) ((bruijn ##.k.519 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k51, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda13, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.128 0 0)) ((close _V10_Dpreprocess__expr_D100_k50) (##inline ##vcore.car (bruijn ##.expr.14.128 0 0))) ((bruijn ##.k.519 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k50, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k49) (##inline ##vcore.cdr (bruijn ##.expr.13.126 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k49, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpreprocess__expr_D100_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.126 0 0)) ((close _V10_Dpreprocess__expr_D100_k48) (##inline ##vcore.car (bruijn ##.expr.13.126 0 0))) ((bruijn ##.k.519 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k48, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.520 0 0) ((close _V10_Dpreprocess__expr_D100_k47) (##inline ##vcore.cdr (bruijn ##.expr.112 6 1))) ((bruijn ##.k.519 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k47, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 5 1)) ((bruijn ##.x.233 15 0) (close _V10_Dpreprocess__expr_D100_k46) 'bruijn (##inline ##vcore.car (bruijn ##.expr.112 5 1))) ((bruijn ##.k.519 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k46, self)})),
      _V0bruijn,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.513 0 0) (bruijn ##.k.509 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.652) ((##vcore.symbol? (bruijn ##.x.132 2 0))) (if (bruijn ##.reg.652 0 0) ((bruijn ##.k.514 1 0) (bruijn ##.expr.112 11 1)) ((bruijn ##.x.234 20 0) (bruijn ##.k.514 1 0) (##string ##.string.674) (bruijn ##.x.132 2 0))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D674.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
    }
}
static void _V10_Dpreprocess__expr_D100_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.16.131 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k60) (close _V10_Dpreprocess__expr_D100_lambda14) (bruijn ##.kk.5.114 8 1)) ((bruijn ##.k.509 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k60, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda14, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.131 0 0)) ((close _V10_Dpreprocess__expr_D100_k59) (##inline ##vcore.car (bruijn ##.expr.16.131 0 0))) ((bruijn ##.k.509 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k59, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.510 0 0) ((close _V10_Dpreprocess__expr_D100_k58) (##inline ##vcore.cdr (bruijn ##.expr.112 7 1))) ((bruijn ##.k.509 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k58, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 6 1)) ((bruijn ##.x.233 16 0) (close _V10_Dpreprocess__expr_D100_k57) 'lookup (##inline ##vcore.car (bruijn ##.expr.112 6 1))) ((bruijn ##.k.509 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k57, self)})),
      _V0lookup,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.501 0 0) (bruijn ##.k.497 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.651 1 0) ((bruijn ##.x.232 24 0) (bruijn ##.k.505 0 0) (bruijn ##.x.135 3 0) 0) ((bruijn ##.k.505 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.503 0 0) ((bruijn ##.k.502 2 0) (bruijn ##.expr.112 13 1)) ((bruijn ##.x.234 22 0) (bruijn ##.k.502 2 0) (##string ##.string.675) (bruijn ##.x.135 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D675.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.651) ((##vcore.int? (bruijn ##.x.135 2 0))) ((close _V10_Dpreprocess__expr_D100_k67) (close _V10_Dpreprocess__expr_D100_k68)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k67, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k68, self)})));
    }
}
static void _V10_Dpreprocess__expr_D100_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.134 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k66) (close _V10_Dpreprocess__expr_D100_lambda15) (bruijn ##.kk.5.114 9 1)) ((bruijn ##.k.497 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k66, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda15, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.134 0 0)) ((close _V10_Dpreprocess__expr_D100_k65) (##inline ##vcore.car (bruijn ##.expr.18.134 0 0))) ((bruijn ##.k.497 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k65, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.498 0 0) ((close _V10_Dpreprocess__expr_D100_k64) (##inline ##vcore.cdr (bruijn ##.expr.112 8 1))) ((bruijn ##.k.497 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k64, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 7 1)) ((bruijn ##.x.233 17 0) (close _V10_Dpreprocess__expr_D100_k63) 'call (##inline ##vcore.car (bruijn ##.expr.112 7 1))) ((bruijn ##.k.497 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k63, self)})),
      _V0call,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.489 0 0) (bruijn ##.k.485 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.650 1 0) ((bruijn ##.x.232 25 0) (bruijn ##.k.493 0 0) (bruijn ##.x.138 3 0) 0) ((bruijn ##.k.493 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.491 0 0) ((bruijn ##.k.490 2 0) (bruijn ##.expr.112 14 1)) ((bruijn ##.x.234 23 0) (bruijn ##.k.490 2 0) (##string ##.string.676) (bruijn ##.x.138 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D676.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.650) ((##vcore.int? (bruijn ##.x.138 2 0))) ((close _V10_Dpreprocess__expr_D100_k75) (close _V10_Dpreprocess__expr_D100_k76)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k75, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k76, self)})));
    }
}
static void _V10_Dpreprocess__expr_D100_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.20.137 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k74) (close _V10_Dpreprocess__expr_D100_lambda16) (bruijn ##.kk.5.114 10 1)) ((bruijn ##.k.485 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k74, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda16, self)})),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.137 0 0)) ((close _V10_Dpreprocess__expr_D100_k73) (##inline ##vcore.car (bruijn ##.expr.20.137 0 0))) ((bruijn ##.k.485 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k73, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.486 0 0) ((close _V10_Dpreprocess__expr_D100_k72) (##inline ##vcore.cdr (bruijn ##.expr.112 9 1))) ((bruijn ##.k.485 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k72, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 8 1)) ((bruijn ##.x.233 18 0) (close _V10_Dpreprocess__expr_D100_k71) 'lambda (##inline ##vcore.car (bruijn ##.expr.112 8 1))) ((bruijn ##.k.485 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k71, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.477 0 0) (bruijn ##.k.473 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.649 1 0) ((bruijn ##.x.232 26 0) (bruijn ##.k.481 0 0) (bruijn ##.x.141 3 0) 0) ((bruijn ##.k.481 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.479 0 0) ((bruijn ##.k.478 2 0) (bruijn ##.expr.112 15 1)) ((bruijn ##.x.234 24 0) (bruijn ##.k.478 2 0) (##string ##.string.677) (bruijn ##.x.141 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D677.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.649) ((##vcore.int? (bruijn ##.x.141 2 0))) ((close _V10_Dpreprocess__expr_D100_k83) (close _V10_Dpreprocess__expr_D100_k84)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k83, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k84, self)})));
    }
}
static void _V10_Dpreprocess__expr_D100_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.140 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k82) (close _V10_Dpreprocess__expr_D100_lambda17) (bruijn ##.kk.5.114 11 1)) ((bruijn ##.k.473 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k82, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda17, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.140 0 0)) ((close _V10_Dpreprocess__expr_D100_k81) (##inline ##vcore.car (bruijn ##.expr.22.140 0 0))) ((bruijn ##.k.473 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k81, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.474 0 0) ((close _V10_Dpreprocess__expr_D100_k80) (##inline ##vcore.cdr (bruijn ##.expr.112 10 1))) ((bruijn ##.k.473 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k80, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 9 1)) ((bruijn ##.x.233 19 0) (close _V10_Dpreprocess__expr_D100_k79) 'lambda+ (##inline ##vcore.car (bruijn ##.expr.112 9 1))) ((bruijn ##.k.473 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k79, self)})),
      _V0lambda_P,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.454 0 0) (bruijn ##.k.449 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D100_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.644 1 0) ((bruijn ##.x.232 29 0) (bruijn ##.k.469 0 0) (bruijn ##.x.144 5 0) 0) ((bruijn ##.k.469 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      _var0,
      VGetArg(statics, 5-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.467 1 0)) ((bruijn ##.x.234 28 0) (bruijn ##.k.466 0 0) (##string ##.string.678) (bruijn ##.x.144 6 0)) ((bruijn ##.k.466 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D678.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.646 1 0) ((bruijn ##.x.237 28 0) (bruijn ##.k.464 0 0) (bruijn ##.b.146 7 0) (bruijn ##.labels.98 23 0)) ((bruijn ##.k.464 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      _var0,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 23-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.55.147 0 0) (basic-block 1 1 (##.reg.647) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.55.147 1 0)) (bruijn ##.pc.113 23 2) 1)) ((bruijn ##.k.455 7 0) (##inline ##vcore.cons 'case-lambda (##inline ##vcore.cons (bruijn ##.x.144 10 0) (##inline ##vcore.cons (bruijn ##.reg.647 0 0) '()))))) (basic-block 1 1 (##.reg.648) ((##vcore.symbol? (bruijn ##.b.146 8 0))) (if (bruijn ##.reg.648 0 0) ((bruijn ##.x.234 32 0) (bruijn ##.k.455 7 0) (##string ##.string.679) (bruijn ##.b.146 8 0)) ((bruijn ##.x.234 32 0) (bruijn ##.k.455 7 0) (##string ##.string.680) (bruijn ##.b.146 8 0)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D679.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D680.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
    }
}
}
static void _V10_Dpreprocess__expr_D100_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.645) ((##vcore.int? (bruijn ##.b.146 5 0))) (if (bruijn ##.reg.645 0 0) ((bruijn ##.k.455 4 0) (bruijn ##.expr.112 20 1)) (basic-block 1 1 (##.reg.646) ((##vcore.symbol? (bruijn ##.b.146 6 0))) ((close _V10_Dpreprocess__expr_D100_k97) (close _V10_Dpreprocess__expr_D100_k98)))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k97, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k98, self)})));
    }
}
    }
}
static void _V10_Dpreprocess__expr_D100_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k95) (close _V10_Dpreprocess__expr_D100_k96))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k95, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k96, self)})));
}
static void _V10_Dpreprocess__expr_D100_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.644) ((##vcore.int? (bruijn ##.x.144 4 0))) ((close _V10_Dpreprocess__expr_D100_k93) (close _V10_Dpreprocess__expr_D100_k94)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k93, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k94, self)})));
    }
}
static void _V10_Dpreprocess__expr_D100_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.25.145 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k92) (close _V10_Dpreprocess__expr_D100_lambda18) (bruijn ##.kk.5.114 14 1)) ((bruijn ##.k.449 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k92, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda18, self)})),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.145 0 0)) ((close _V10_Dpreprocess__expr_D100_k91) (##inline ##vcore.car (bruijn ##.expr.25.145 0 0))) ((bruijn ##.k.449 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k91, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k90) (##inline ##vcore.cdr (bruijn ##.expr.24.143 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k90, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpreprocess__expr_D100_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.143 0 0)) ((close _V10_Dpreprocess__expr_D100_k89) (##inline ##vcore.car (bruijn ##.expr.24.143 0 0))) ((bruijn ##.k.449 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k89, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.450 0 0) ((close _V10_Dpreprocess__expr_D100_k88) (##inline ##vcore.cdr (bruijn ##.expr.112 11 1))) ((bruijn ##.k.449 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k88, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 10 1)) ((bruijn ##.x.233 20 0) (close _V10_Dpreprocess__expr_D100_k87) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.112 10 1))) ((bruijn ##.k.449 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k87, self)})),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.430 0 0) (bruijn ##.k.425 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D100_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.639 1 0) ((bruijn ##.x.232 30 0) (bruijn ##.k.445 0 0) (bruijn ##.x.151 5 0) 0) ((bruijn ##.k.445 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      _var0,
      VGetArg(statics, 5-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.443 1 0)) ((bruijn ##.x.234 29 0) (bruijn ##.k.442 0 0) (##string ##.string.681) (bruijn ##.x.151 6 0)) ((bruijn ##.k.442 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D681.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.641 1 0) ((bruijn ##.x.237 29 0) (bruijn ##.k.440 0 0) (bruijn ##.b.153 7 0) (bruijn ##.labels.98 24 0)) ((bruijn ##.k.440 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      _var0,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 24-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.56.154 0 0) (basic-block 1 1 (##.reg.642) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.56.154 1 0)) (bruijn ##.pc.113 24 2) 1)) ((bruijn ##.k.431 7 0) (##inline ##vcore.cons 'case-lambda+ (##inline ##vcore.cons (bruijn ##.x.151 10 0) (##inline ##vcore.cons (bruijn ##.reg.642 0 0) '()))))) (basic-block 1 1 (##.reg.643) ((##vcore.symbol? (bruijn ##.b.153 8 0))) (if (bruijn ##.reg.643 0 0) ((bruijn ##.x.234 33 0) (bruijn ##.k.431 7 0) (##string ##.string.682) (bruijn ##.b.153 8 0)) ((bruijn ##.x.234 33 0) (bruijn ##.k.431 7 0) (##string ##.string.683) (bruijn ##.b.153 8 0)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D682.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D683.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
    }
}
}
static void _V10_Dpreprocess__expr_D100_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.640) ((##vcore.int? (bruijn ##.b.153 5 0))) (if (bruijn ##.reg.640 0 0) ((bruijn ##.k.431 4 0) (bruijn ##.expr.112 21 1)) (basic-block 1 1 (##.reg.641) ((##vcore.symbol? (bruijn ##.b.153 6 0))) ((close _V10_Dpreprocess__expr_D100_k111) (close _V10_Dpreprocess__expr_D100_k112)))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k111, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k112, self)})));
    }
}
    }
}
static void _V10_Dpreprocess__expr_D100_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k109) (close _V10_Dpreprocess__expr_D100_k110))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k109, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k110, self)})));
}
static void _V10_Dpreprocess__expr_D100_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.639) ((##vcore.int? (bruijn ##.x.151 4 0))) ((close _V10_Dpreprocess__expr_D100_k107) (close _V10_Dpreprocess__expr_D100_k108)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k107, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k108, self)})));
    }
}
static void _V10_Dpreprocess__expr_D100_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.152 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k106) (close _V10_Dpreprocess__expr_D100_lambda19) (bruijn ##.kk.5.114 15 1)) ((bruijn ##.k.425 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k106, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda19, self)})),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.152 0 0)) ((close _V10_Dpreprocess__expr_D100_k105) (##inline ##vcore.car (bruijn ##.expr.28.152 0 0))) ((bruijn ##.k.425 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k105, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k104) (##inline ##vcore.cdr (bruijn ##.expr.27.150 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k104, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpreprocess__expr_D100_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.150 0 0)) ((close _V10_Dpreprocess__expr_D100_k103) (##inline ##vcore.car (bruijn ##.expr.27.150 0 0))) ((bruijn ##.k.425 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k103, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.426 0 0) ((close _V10_Dpreprocess__expr_D100_k102) (##inline ##vcore.cdr (bruijn ##.expr.112 12 1))) ((bruijn ##.k.425 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k102, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 11 1)) ((bruijn ##.x.233 21 0) (close _V10_Dpreprocess__expr_D100_k101) 'case-lambda+ (##inline ##vcore.car (bruijn ##.expr.112 11 1))) ((bruijn ##.k.425 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k101, self)})),
      _V0case__lambda_P,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.420 0 0) (bruijn ##.k.415 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.421 0 0) (bruijn ##.expr.112 16 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 16-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.159 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.159 0 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k118) (close _V10_Dpreprocess__expr_D100_lambda20) (bruijn ##.kk.5.114 14 1)) ((bruijn ##.k.415 3 0) #f)) ((bruijn ##.k.415 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k118, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda20, self)})),
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
static void _V10_Dpreprocess__expr_D100_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.157 0 0)) ((close _V10_Dpreprocess__expr_D100_k117) (##inline ##vcore.cdr (bruijn ##.expr.30.157 0 0))) ((bruijn ##.k.415 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k117, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.416 0 0) ((close _V10_Dpreprocess__expr_D100_k116) (##inline ##vcore.cdr (bruijn ##.expr.112 13 1))) ((bruijn ##.k.415 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k116, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 12 1)) ((bruijn ##.x.233 22 0) (close _V10_Dpreprocess__expr_D100_k115) 'case-lambda-error (##inline ##vcore.car (bruijn ##.expr.112 12 1))) ((bruijn ##.k.415 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k115, self)})),
      _V0case__lambda__error,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.402 0 0) (bruijn ##.k.398 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.636 1 0) ((bruijn ##.x.237 25 0) (bruijn ##.k.411 0 0) (bruijn ##.x.163 3 0) (bruijn ##.labels.98 20 0)) ((bruijn ##.k.411 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VGetArg(statics, 20-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.638 1 0) ((bruijn ##.x.232 33 0) (bruijn ##.k.409 0 0) (bruijn ##.x.163 6 0) 0) ((bruijn ##.k.409 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      _var0,
      VGetArg(statics, 6-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.407 0 0) ((bruijn ##.k.403 5 0) (bruijn ##.expr.112 22 1)) ((bruijn ##.x.234 31 0) (bruijn ##.k.403 5 0) (##string ##.string.685) (bruijn ##.x.163 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D685.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.57.164 0 0) ((bruijn ##.k.403 2 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.57.164 0 0)) '()))) (basic-block 1 1 (##.reg.637) ((##vcore.symbol? (bruijn ##.x.163 4 0))) (if (bruijn ##.reg.637 0 0) ((bruijn ##.x.234 29 0) (bruijn ##.k.403 3 0) (##string ##.string.684) (bruijn ##.x.163 4 0)) (basic-block 1 1 (##.reg.638) ((##vcore.int? (bruijn ##.x.163 5 0))) ((close _V10_Dpreprocess__expr_D100_k127) (close _V10_Dpreprocess__expr_D100_k128))))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D684.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k127, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k128, self)})));
    }
}
    }
}
}
static void _V10_Dpreprocess__expr_D100_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.636) ((##vcore.symbol? (bruijn ##.x.163 2 0))) ((close _V10_Dpreprocess__expr_D100_k125) (close _V10_Dpreprocess__expr_D100_k126)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k125, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k126, self)})));
    }
}
static void _V10_Dpreprocess__expr_D100_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.162 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k124) (close _V10_Dpreprocess__expr_D100_lambda21) (bruijn ##.kk.5.114 15 1)) ((bruijn ##.k.398 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k124, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda21, self)})),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.162 0 0)) ((close _V10_Dpreprocess__expr_D100_k123) (##inline ##vcore.car (bruijn ##.expr.33.162 0 0))) ((bruijn ##.k.398 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k123, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.399 0 0) ((close _V10_Dpreprocess__expr_D100_k122) (##inline ##vcore.cdr (bruijn ##.expr.112 14 1))) ((bruijn ##.k.398 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k122, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 13 1)) ((bruijn ##.x.233 23 0) (close _V10_Dpreprocess__expr_D100_k121) 'close (##inline ##vcore.car (bruijn ##.expr.112 13 1))) ((bruijn ##.k.398 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k121, self)})),
      _V0close,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.385 0 0) (bruijn ##.k.381 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.633 1 0) ((bruijn ##.x.237 26 0) (bruijn ##.k.394 0 0) (bruijn ##.x.168 3 0) (bruijn ##.labels.98 21 0)) ((bruijn ##.k.394 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VGetArg(statics, 21-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.635 1 0) ((bruijn ##.x.232 34 0) (bruijn ##.k.392 0 0) (bruijn ##.x.168 6 0) 0) ((bruijn ##.k.392 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      _var0,
      VGetArg(statics, 6-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.390 0 0) ((bruijn ##.k.386 5 0) (bruijn ##.expr.112 23 1)) ((bruijn ##.x.234 32 0) (bruijn ##.k.386 5 0) (##string ##.string.686) (bruijn ##.x.168 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 23-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D686.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.58.169 0 0) ((bruijn ##.k.386 2 0) (##inline ##vcore.cons 'foreign-function (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.58.169 0 0)) '()))) (basic-block 1 1 (##.reg.634) ((##vcore.symbol? (bruijn ##.x.168 4 0))) (if (bruijn ##.reg.634 0 0) ((bruijn ##.x.234 30 0) (bruijn ##.k.386 3 0) (##string ##.string.684) (bruijn ##.x.168 4 0)) (basic-block 1 1 (##.reg.635) ((##vcore.int? (bruijn ##.x.168 5 0))) ((close _V10_Dpreprocess__expr_D100_k137) (close _V10_Dpreprocess__expr_D100_k138))))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D684.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k137, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k138, self)})));
    }
}
    }
}
}
static void _V10_Dpreprocess__expr_D100_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.633) ((##vcore.symbol? (bruijn ##.x.168 2 0))) ((close _V10_Dpreprocess__expr_D100_k135) (close _V10_Dpreprocess__expr_D100_k136)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k135, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k136, self)})));
    }
}
static void _V10_Dpreprocess__expr_D100_k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.35.167 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k134) (close _V10_Dpreprocess__expr_D100_lambda22) (bruijn ##.kk.5.114 16 1)) ((bruijn ##.k.381 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k134, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda22, self)})),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.167 0 0)) ((close _V10_Dpreprocess__expr_D100_k133) (##inline ##vcore.car (bruijn ##.expr.35.167 0 0))) ((bruijn ##.k.381 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k133, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.382 0 0) ((close _V10_Dpreprocess__expr_D100_k132) (##inline ##vcore.cdr (bruijn ##.expr.112 15 1))) ((bruijn ##.k.381 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k132, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 14 1)) ((bruijn ##.x.233 24 0) (close _V10_Dpreprocess__expr_D100_k131) 'foreign-function (##inline ##vcore.car (bruijn ##.expr.112 14 1))) ((bruijn ##.k.381 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k131, self)})),
      _V0foreign__function,
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.365 0 0) (bruijn ##.k.360 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D100_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.630 1 0) ((bruijn ##.x.237 30 0) (bruijn ##.k.376 0 0) (bruijn ##.x.175 4 0) (bruijn ##.labels.98 25 0)) ((bruijn ##.k.376 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 25-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.632 1 0) ((bruijn ##.x.232 38 0) (bruijn ##.k.374 0 0) (bruijn ##.x.175 7 0) 0) ((bruijn ##.k.374 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      _var0,
      VGetArg(statics, 7-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.372 0 0) ((bruijn ##.k.366 6 0) (bruijn ##.expr.112 27 1)) ((bruijn ##.x.234 36 0) (bruijn ##.k.366 6 0) (##string ##.string.689) (bruijn ##.x.175 7 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 27-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D689.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.59.176 0 0) ((bruijn ##.k.366 3 0) (##inline ##vcore.cons 'declare (##inline ##vcore.cons (bruijn ##.name.173 6 0) (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.x.59.176 0 0)) '())))) (basic-block 1 1 (##.reg.631) ((##vcore.symbol? (bruijn ##.x.175 5 0))) (if (bruijn ##.reg.631 0 0) ((bruijn ##.x.234 34 0) (bruijn ##.k.366 4 0) (##string ##.string.688) (bruijn ##.x.175 5 0)) (basic-block 1 1 (##.reg.632) ((##vcore.int? (bruijn ##.x.175 6 0))) ((close _V10_Dpreprocess__expr_D100_k149) (close _V10_Dpreprocess__expr_D100_k150))))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D688.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k149, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k150, self)})));
    }
}
    }
}
}
static void _V10_Dpreprocess__expr_D100_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.629) ((##vcore.string? (bruijn ##.name.173 4 0))) (if (##inline ##vcore.not (bruijn ##.reg.629 0 0)) ((bruijn ##.x.234 31 0) (bruijn ##.k.366 1 0) (##string ##.string.687) (bruijn ##.x.175 2 0)) (basic-block 1 1 (##.reg.630) ((##vcore.symbol? (bruijn ##.x.175 3 0))) ((close _V10_Dpreprocess__expr_D100_k147) (close _V10_Dpreprocess__expr_D100_k148)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D687.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k147, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k148, self)})));
    }
}
    }
}
static void _V10_Dpreprocess__expr_D100_k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.38.174 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k146) (close _V10_Dpreprocess__expr_D100_lambda23) (bruijn ##.kk.5.114 19 1)) ((bruijn ##.k.360 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k146, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda23, self)})),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.174 0 0)) ((close _V10_Dpreprocess__expr_D100_k145) (##inline ##vcore.car (bruijn ##.expr.38.174 0 0))) ((bruijn ##.k.360 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k145, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k144) (##inline ##vcore.cdr (bruijn ##.expr.37.172 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k144, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dpreprocess__expr_D100_k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.172 0 0)) ((close _V10_Dpreprocess__expr_D100_k143) (##inline ##vcore.car (bruijn ##.expr.37.172 0 0))) ((bruijn ##.k.360 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k143, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.361 0 0) ((close _V10_Dpreprocess__expr_D100_k142) (##inline ##vcore.cdr (bruijn ##.expr.112 16 1))) ((bruijn ##.k.360 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k142, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 15 1)) ((bruijn ##.x.233 25 0) (close _V10_Dpreprocess__expr_D100_k141) 'declare (##inline ##vcore.car (bruijn ##.expr.112 15 1))) ((bruijn ##.k.360 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 15-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k141, self)})),
      _V0declare,
      VInlineCar2(runtime,
        VGetArg(statics, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D187_k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.45.186 4 1) (bruijn ##.k.351 1 0) (bruijn ##.expr.47.188 2 1) (bruijn ##.x.352 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D187_k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.47.188 1 1))) ((bruijn ##.x.236 32 0) (close _V10_Dloop_D187_k158) (bruijn ##.args.44.189 1 2)) ((bruijn ##.k.351 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_k158, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D187_k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.45.186 7 1) (bruijn ##.k.345 2 0) (bruijn ##.expr.47.188 5 1) (bruijn ##.x.347 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D187_k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.236 35 0) (close _V10_Dloop_D187_k161) (bruijn ##.args.44.189 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_k161, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D187_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.46.190 0 1) (close _V10_Dloop_D187_k160) (##inline ##vcore.cdr (bruijn ##.expr.47.188 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.47.188 3 1)) (bruijn ##.args.44.189 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_k160, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D187_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.344 0 0) (close _V10_Dloop_D187_lambda28))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_lambda28, self)})));
}
static void _V10_Dloop_D187_k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.342 1 0) (close _V10_Dloop_D187_lambda27) (bruijn ##.loop.187 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_lambda27, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D187_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_lambda26, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D187_k157) (close _V10_Dloop_D187_k159))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D187_k157, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_k159, self)})));
}
static void _V10_Dpreprocess__expr_D100_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D187_lambda26)) ((bruijn ##.loop.187 0 0) (bruijn ##.k.341 1 0) (##inline ##vcore.cdr (bruijn ##.expr.42.183 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_lambda26, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[0]),
      VNULL);
    }
}
static void _V10_Dpreprocess__expr_D100_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.340 0 0) (close _V10_Dpreprocess__expr_D100_lambda25))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda25, self)})));
}
static void _V10_Dpreprocess__expr_D100_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.356 0 0) (bruijn ##.k.354 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.357 0 0) (bruijn ##.expr.112 22 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 22-1, 1));
}
static void _V10_Dpreprocess__expr_D100_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.192 0 1)) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k162) (close _V10_Dpreprocess__expr_D100_lambda30) (bruijn ##.kk.5.114 20 1)) ((bruijn ##.k.354 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k162, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda30, self)})),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.183 0 0)) (##vcore.call-with-values (bruijn ##.k.335 4 0) (close _V10_Dpreprocess__expr_D100_lambda24) (close _V10_Dpreprocess__expr_D100_lambda29)) ((bruijn ##.k.335 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda24, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda29, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.181 0 0)) ((close _V10_Dpreprocess__expr_D100_k156) (##inline ##vcore.cdr (bruijn ##.expr.41.181 0 0))) ((bruijn ##.k.335 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k156, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.179 0 0)) ((close _V10_Dpreprocess__expr_D100_k155) (##inline ##vcore.cdr (bruijn ##.expr.40.179 0 0))) ((bruijn ##.k.335 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k155, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.336 0 0) ((close _V10_Dpreprocess__expr_D100_k154) (##inline ##vcore.cdr (bruijn ##.expr.112 17 1))) ((bruijn ##.k.335 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k154, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 17-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 16 1)) ((bruijn ##.x.233 26 0) (close _V10_Dpreprocess__expr_D100_k153) 'declare-foreign (##inline ##vcore.car (bruijn ##.expr.112 16 1))) ((bruijn ##.k.335 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 16-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k153, self)})),
      _V0declare__foreign,
      VInlineCar2(runtime,
        VGetArg(statics, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.330 0 0) (bruijn ##.k.327 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.331 0 0) (bruijn ##.expr.112 19 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 19-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.328 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.112 18 1))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k166) (close _V10_Dpreprocess__expr_D100_lambda31) (bruijn ##.kk.5.114 17 1)) ((bruijn ##.k.327 1 0) #f)) ((bruijn ##.k.327 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 18-1, 1))))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k166, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda31, self)})),
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
static void _V10_Dpreprocess__expr_D100_k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 17 1)) ((bruijn ##.x.233 27 0) (close _V10_Dpreprocess__expr_D100_k165) 'push-set! (##inline ##vcore.car (bruijn ##.expr.112 17 1))) ((bruijn ##.k.327 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 17-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k165, self)})),
      _V0push__set_B,
      VInlineCar2(runtime,
        VGetArg(statics, 17-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.315 0 0) (bruijn ##.k.311 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.626 1 0) ((bruijn ##.x.237 31 0) (bruijn ##.k.323 0 0) (bruijn ##.x.197 4 0) (bruijn ##.labels.98 26 0)) ((bruijn ##.k.323 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 26-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.60.198 0 0) (basic-block 1 1 (##.reg.627) ((##vcore.- (##inline ##vcore.cdr (bruijn ##.x.60.198 1 0)) (bruijn ##.pc.113 26 2) 1)) ((bruijn ##.k.316 4 0) (##inline ##vcore.cons 'bf (##inline ##vcore.cons (bruijn ##.reg.627 0 0) '())))) (basic-block 1 1 (##.reg.628) ((##vcore.symbol? (bruijn ##.x.197 5 0))) (if (bruijn ##.reg.628 0 0) ((bruijn ##.x.234 35 0) (bruijn ##.k.316 4 0) (##string ##.string.690) (bruijn ##.x.197 5 0)) ((bruijn ##.x.234 35 0) (bruijn ##.k.316 4 0) (##string ##.string.691) (bruijn ##.x.197 5 0)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D690.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D691.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
}
    }
}
}
static void _V10_Dpreprocess__expr_D100_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.625) ((##vcore.int? (bruijn ##.x.197 2 0))) (if (bruijn ##.reg.625 0 0) ((bruijn ##.k.316 1 0) (bruijn ##.expr.112 23 1)) (basic-block 1 1 (##.reg.626) ((##vcore.symbol? (bruijn ##.x.197 3 0))) ((close _V10_Dpreprocess__expr_D100_k173) (close _V10_Dpreprocess__expr_D100_k174)))))
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
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k173, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k174, self)})));
    }
}
    }
}
static void _V10_Dpreprocess__expr_D100_k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.50.196 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k172) (close _V10_Dpreprocess__expr_D100_lambda32) (bruijn ##.kk.5.114 20 1)) ((bruijn ##.k.311 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k172, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda32, self)})),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.196 0 0)) ((close _V10_Dpreprocess__expr_D100_k171) (##inline ##vcore.car (bruijn ##.expr.50.196 0 0))) ((bruijn ##.k.311 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k171, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.312 0 0) ((close _V10_Dpreprocess__expr_D100_k170) (##inline ##vcore.cdr (bruijn ##.expr.112 19 1))) ((bruijn ##.k.311 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k170, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 18 1)) ((bruijn ##.x.233 28 0) (close _V10_Dpreprocess__expr_D100_k169) 'bf (##inline ##vcore.car (bruijn ##.expr.112 18 1))) ((bruijn ##.k.311 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 18-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k169, self)})),
      _V0bf,
      VInlineCar2(runtime,
        VGetArg(statics, 18-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.303 0 0) (bruijn ##.k.299 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.624 1 0) ((bruijn ##.x.232 36 0) (bruijn ##.k.307 0 0) (bruijn ##.x.202 3 0) 0) ((bruijn ##.k.307 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.305 0 0) ((bruijn ##.k.304 2 0) (bruijn ##.expr.112 25 1)) ((bruijn ##.x.234 34 0) (bruijn ##.k.304 2 0) (##string ##.string.692) (bruijn ##.x.202 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 25-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D692.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.624) ((##vcore.int? (bruijn ##.x.202 2 0))) ((close _V10_Dpreprocess__expr_D100_k181) (close _V10_Dpreprocess__expr_D100_k182)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k181, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k182, self)})));
    }
}
static void _V10_Dpreprocess__expr_D100_k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.201 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k180) (close _V10_Dpreprocess__expr_D100_lambda33) (bruijn ##.kk.5.114 21 1)) ((bruijn ##.k.299 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k180, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda33, self)})),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.201 0 0)) ((close _V10_Dpreprocess__expr_D100_k179) (##inline ##vcore.car (bruijn ##.expr.52.201 0 0))) ((bruijn ##.k.299 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k179, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.300 0 0) ((close _V10_Dpreprocess__expr_D100_k178) (##inline ##vcore.cdr (bruijn ##.expr.112 20 1))) ((bruijn ##.k.299 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k178, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 20-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 19 1)) ((bruijn ##.x.233 29 0) (close _V10_Dpreprocess__expr_D100_k177) 'letrec-begin (##inline ##vcore.car (bruijn ##.expr.112 19 1))) ((bruijn ##.k.299 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 19-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k177, self)})),
      _V0letrec__begin,
      VInlineCar2(runtime,
        VGetArg(statics, 19-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.294 0 0) (bruijn ##.k.291 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.295 0 0) (bruijn ##.expr.112 22 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 22-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.292 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.112 21 1))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k186) (close _V10_Dpreprocess__expr_D100_lambda34) (bruijn ##.kk.5.114 20 1)) ((bruijn ##.k.291 1 0) #f)) ((bruijn ##.k.291 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 21-1, 1))))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k186, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda34, self)})),
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
static void _V10_Dpreprocess__expr_D100_k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112 20 1)) ((bruijn ##.x.233 30 0) (close _V10_Dpreprocess__expr_D100_k185) 'letrec-end (##inline ##vcore.car (bruijn ##.expr.112 20 1))) ((bruijn ##.k.291 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 20-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k185, self)})),
      _V0letrec__end,
      VInlineCar2(runtime,
        VGetArg(statics, 20-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.234 30 0) (bruijn ##.k.289 0 0) (##string ##.string.693) (bruijn ##.expr.112 21 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D693.sym, VPOINTER_OTHER),
      VGetArg(statics, 21-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.269 19 0) (close _V10_Dpreprocess__expr_D100_lambda35) (bruijn ##.kk.5.114 19 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 19-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda35, self)})),
      VGetArg(statics, 19-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k184) (close _V10_Dpreprocess__expr_D100_k187))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k184, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k187, self)})));
}
static void _V10_Dpreprocess__expr_D100_k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k176) (close _V10_Dpreprocess__expr_D100_k183))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k176, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k183, self)})));
}
static void _V10_Dpreprocess__expr_D100_k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k168) (close _V10_Dpreprocess__expr_D100_k175))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k168, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k175, self)})));
}
static void _V10_Dpreprocess__expr_D100_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k164) (close _V10_Dpreprocess__expr_D100_k167))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k164, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k167, self)})));
}
static void _V10_Dpreprocess__expr_D100_k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k152) (close _V10_Dpreprocess__expr_D100_k163))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k152, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k163, self)})));
}
static void _V10_Dpreprocess__expr_D100_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k140) (close _V10_Dpreprocess__expr_D100_k151))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k140, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k151, self)})));
}
static void _V10_Dpreprocess__expr_D100_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k130) (close _V10_Dpreprocess__expr_D100_k139))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k130, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k139, self)})));
}
static void _V10_Dpreprocess__expr_D100_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k120) (close _V10_Dpreprocess__expr_D100_k129))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k120, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k129, self)})));
}
static void _V10_Dpreprocess__expr_D100_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k114) (close _V10_Dpreprocess__expr_D100_k119))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k114, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k119, self)})));
}
static void _V10_Dpreprocess__expr_D100_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k100) (close _V10_Dpreprocess__expr_D100_k113))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k100, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k113, self)})));
}
static void _V10_Dpreprocess__expr_D100_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k86) (close _V10_Dpreprocess__expr_D100_k99))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k86, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k99, self)})));
}
static void _V10_Dpreprocess__expr_D100_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k78) (close _V10_Dpreprocess__expr_D100_k85))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k78, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k85, self)})));
}
static void _V10_Dpreprocess__expr_D100_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k70) (close _V10_Dpreprocess__expr_D100_k77))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k70, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k77, self)})));
}
static void _V10_Dpreprocess__expr_D100_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k62) (close _V10_Dpreprocess__expr_D100_k69))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k62, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k69, self)})));
}
static void _V10_Dpreprocess__expr_D100_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k56) (close _V10_Dpreprocess__expr_D100_k61))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k56, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k61, self)})));
}
static void _V10_Dpreprocess__expr_D100_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k45) (close _V10_Dpreprocess__expr_D100_k55))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k45, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k55, self)})));
}
static void _V10_Dpreprocess__expr_D100_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k38) (close _V10_Dpreprocess__expr_D100_k44))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k38, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k44, self)})));
}
static void _V10_Dpreprocess__expr_D100_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k33) (close _V10_Dpreprocess__expr_D100_k37))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k33, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k37, self)})));
}
static void _V10_Dpreprocess__expr_D100_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dpreprocess__expr_D100_k29) (close _V10_Dpreprocess__expr_D100_k32))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k29, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k32, self)})));
}
static void _V10_Dpreprocess__expr_D100_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.268 0 0) (close _V10_Dpreprocess__expr_D100_lambda9))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda9, self)})));
}
static void _V10_Dpreprocess__loop_D205_k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (##inline ##vcore.eq? (bruijn ##.e.208 2 0) (bruijn ##.reg.658 1 0))) (##vcore.vector-set! (bruijn ##.k.567 0 0) (bruijn ##.tape.206 5 1) (bruijn ##.pc.207 5 2) (bruijn ##.e.208 2 0)) ((bruijn ##.k.567 0 0) #f))
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
static void _V10_Dpreprocess__loop_D205_k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.659) ((##vcore.+ (bruijn ##.pc.207 6 2) 1)) ((bruijn ##.preprocess-loop.205 7 0) (bruijn ##.k.562 6 0) (bruijn ##.tape.206 6 1) (bruijn ##.reg.659 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 6-1, 1),
      self->vars[0]);
    }
}
static void _V10_Dpreprocess__loop_D205_k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.658) ((##vcore.vector-ref (bruijn ##.tape.206 4 1) (bruijn ##.pc.207 4 2))) ((close _V10_Dpreprocess__loop_D205_k190) (close _V10_Dpreprocess__loop_D205_k191)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__loop_D205_k190, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_k191, self)})));
    }
}
static void _V10_Dpreprocess__loop_D205_k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.563 0 0) ((bruijn ##.k.562 1 0) (bruijn ##.tape.206 1 1)) (basic-block 1 1 (##.reg.657) ((##vcore.vector-ref (bruijn ##.tape.206 2 1) (bruijn ##.pc.207 2 2))) ((bruijn ##.preprocess-expr.100 5 2) (close _V10_Dpreprocess__loop_D205_k189) (bruijn ##.reg.657 0 0) (bruijn ##.pc.207 2 2))))
if(VDecodeBool(
_var0)) {
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_k189, self)})),
      self->vars[0],
      statics->up->vars[2]);
    }
}
}
static void _V10_Dpreprocess__loop_D205_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_lambda36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.232 13 0) (close _V10_Dpreprocess__loop_D205_k188) (bruijn ##.pc.207 0 2) (bruijn ##.reg.656 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_k188, self)})),
      _var2,
      statics->up->vars[0]);
}
static void _V10_Dpreprocess__vasm_D90_k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__vasm_D90_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.preprocess-loop.205 1 0) (bruijn ##.k.238 4 0) (bruijn ##.x.571 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->up->vars[0],
      _var0,
      VEncodeInt(0l));
}
static void _V10_Dpreprocess__vasm_D90_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__vasm_D90_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 3 ('() (close _V10_Dpeel__labels_D99_lambda3) (close _V10_Dpreprocess__expr_D100_lambda8)) (basic-block 1 1 (##.reg.656) ((##vcore.vector-length (bruijn ##.tape.97 2 1))) (letrec 1 ((close _V10_Dpreprocess__loop_D205_lambda36)) ((bruijn ##.peel-labels.99 2 1) (close _V10_Dpreprocess__vasm_D90_k192) (bruijn ##.tape.97 3 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VNULL;
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__labels_D99_lambda3, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda8, self)}));
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
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_lambda36, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__vasm_D90_k192, self)})),
      statics->up->up->vars[1]);
    }
    }
    }
}
static void _V10_Dfind__declare_D91_k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D91_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.574 0 0) ((bruijn ##.k.572 4 0) (bruijn ##.reg.660 3 0)) ((bruijn ##.find-declare.91 5 1) (bruijn ##.k.572 4 0) (bruijn ##.tape.209 4 1) (bruijn ##.reg.660 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1],
      statics->up->up->vars[0]);
}
}
static void _V10_Dfind__declare_D91_k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D91_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.573 0 0) ((bruijn ##.k.572 2 0) #f) (basic-block 1 1 (##.reg.662) ((##vcore.vector-ref (bruijn ##.tape.209 3 1) (bruijn ##.reg.660 2 0))) (##vcore.eqv? (close _V10_Dfind__declare_D91_k194) (##inline ##vcore.car (bruijn ##.reg.662 0 0)) 'declare)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->vars[1],
      statics->up->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D91_k194, self)})),
      VInlineCar2(runtime,
        self->vars[0]),
      _V0declare);
    }
}
}
static void _V10_Dfind__declare_D91_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D91_lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.reg.660 ##.reg.661) ((##vcore.+ (bruijn ##.program-counter.210 1 2) 1) (##vcore.vector-length (bruijn ##.tape.209 1 1))) ((bruijn ##.x.232 10 0) (close _V10_Dfind__declare_D91_k193) (bruijn ##.reg.660 0 0) (bruijn ##.reg.661 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D91_k193, self)})),
      self->vars[0],
      self->vars[1]);
    }
}
static void _V10_Dset__declare__loop_D213_k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.set-declare-loop.213 3 0) (bruijn ##.k.581 2 0) (bruijn ##.x.583 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      _var0);
}
static void _V10_Dset__declare__loop_D213_k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.find-declare.91 4 1) (close _V10_Dset__declare__loop_D213_k196) (bruijn ##.tape.212 3 1) (bruijn ##.pc.214 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k196, self)})),
      statics->up->up->vars[1],
      statics->vars[1]);
}
static void _V10_Dset__declare__loop_D213_k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.594 0 0) (bruijn ##.k.589 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dset__declare__loop_D213_k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k202, got ~D~N"
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
static void _V10_Dset__declare__loop_D213_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vasm-lambda.92 10 2) (close _V10_Dset__declare__loop_D213_k202) (bruijn ##.tape.212 9 1) (##inline ##vcore.car (bruijn ##.expr.65.220 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k202, self)})),
      VGetArg(statics, 9-1, 1),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dset__declare__loop_D213_k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.220 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.65.220 0 0))) (##vcore.call-with-values (close _V10_Dset__declare__loop_D213_k201) (close _V10_Dset__declare__loop_D213_lambda41) (bruijn ##.kk.61.215 5 1)) ((bruijn ##.k.589 3 0) #f)) ((bruijn ##.k.589 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k201, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_lambda41, self)})),
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
static void _V10_Dset__declare__loop_D213_k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.218 0 0)) ((close _V10_Dset__declare__loop_D213_k200) (##inline ##vcore.cdr (bruijn ##.expr.64.218 0 0))) ((bruijn ##.k.589 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dset__declare__loop_D213_k200, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declare__loop_D213_k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.590 0 0) ((close _V10_Dset__declare__loop_D213_k199) (##inline ##vcore.cdr (bruijn ##.reg.663 2 0))) ((bruijn ##.k.589 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dset__declare__loop_D213_k199, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declare__loop_D213_k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.reg.663 1 0)) ((bruijn ##.x.233 13 0) (close _V10_Dset__declare__loop_D213_k198) 'declare (##inline ##vcore.car (bruijn ##.reg.663 1 0))) ((bruijn ##.k.589 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k198, self)})),
      _V0declare,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declare__loop_D213_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.664) ((##vcore.vector-ref (bruijn ##.tape.212 7 1) (bruijn ##.pc.214 5 1))) ((bruijn ##.x.234 14 0) (bruijn ##.k.586 1 0) (##string ##.string.694) (bruijn ##.reg.664 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D694.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
static void _V10_Dset__declare__loop_D213_k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.584 2 0) (close _V10_Dset__declare__loop_D213_lambda42) (bruijn ##.kk.61.215 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_lambda42, self)})),
      statics->up->vars[1]);
}
static void _V10_Dset__declare__loop_D213_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.663) ((##vcore.vector-ref (bruijn ##.tape.212 4 1) (bruijn ##.pc.214 2 1))) ((close _V10_Dset__declare__loop_D213_k197) (close _V10_Dset__declare__loop_D213_k203)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dset__declare__loop_D213_k197, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k203, self)})));
    }
}
static void _V10_Dset__declare__loop_D213_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.pc.214 0 1) (##vcore.call/cc (close _V10_Dset__declare__loop_D213_k195) (close _V10_Dset__declare__loop_D213_lambda40)) ((bruijn ##.k.581 0 0) #f))
if(VDecodeBool(
_var1)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k195, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_lambda40, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declares_B_D94_k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declares_B_D94_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.set-declare-loop.213 1 0) (bruijn ##.k.580 2 0) (bruijn ##.x.599 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      statics->up->vars[0],
      _var0);
}
static void _V10_Dset__declares_B_D94_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declares_B_D94_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dset__declare__loop_D213_lambda39)) ((bruijn ##.find-declare.91 2 1) (close _V10_Dset__declares_B_D94_k204) (bruijn ##.tape.212 1 1) -1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_lambda39, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declares_B_D94_k204, self)})),
      statics->vars[1],
      VEncodeInt(-1l));
    }
}
static void _V10_Dfind__toplevel_D95_k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D95_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.602 0 0) (basic-block 1 1 (##.reg.667) ((##vcore.+ (bruijn ##.program-counter.223 5 2) 1)) ((bruijn ##.k.600 5 0) (bruijn ##.reg.667 0 0))) (basic-block 1 1 (##.reg.668) ((##vcore.+ 1 (bruijn ##.program-counter.223 5 2))) ((bruijn ##.find-toplevel.95 6 5) (bruijn ##.k.600 5 0) (bruijn ##.tape.222 5 1) (bruijn ##.reg.668 0 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
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
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 3,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 5-1, 1),
      self->vars[0]);
    }
}
}
static void _V10_Dfind__toplevel_D95_k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D95_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.601 0 0) ((bruijn ##.k.600 2 0) #f) (basic-block 1 1 (##.reg.666) ((##vcore.vector-ref (bruijn ##.tape.222 3 1) (bruijn ##.program-counter.223 3 2))) (##vcore.eqv? (close _V10_Dfind__toplevel_D95_k206) (##inline ##vcore.car (bruijn ##.reg.666 0 0)) 'toplevel)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D95_k206, self)})),
      VInlineCar2(runtime,
        self->vars[0]),
      _V0toplevel);
    }
}
}
static void _V10_Dfind__toplevel_D95_lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D95_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.665) ((##vcore.vector-length (bruijn ##.tape.222 1 1))) ((bruijn ##.x.232 10 0) (close _V10_Dfind__toplevel_D95_k205) (bruijn ##.program-counter.223 1 2) (bruijn ##.reg.665 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D95_k205, self)})),
      statics->vars[2],
      self->vars[0]);
    }
}
static void _V10_Deval__loop_D227_k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D227_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.612 1 0) (bruijn ##.program-counter.226 3 1) (bruijn ##.x.613 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
}
static void _V10_Deval__loop_D227_k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D227_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.program-counter.226 2 1) ((bruijn ##.find-toplevel.95 5 5) (close _V10_Deval__loop_D227_k209) (bruijn ##.tape.225 2 0) (bruijn ##.program-counter.226 2 1)) ((bruijn ##.k.612 0 0) #f))
if(VDecodeBool(
statics->up->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 5)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D227_k209, self)})),
      statics->up->vars[0],
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Deval__loop_D227_lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D227_lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval-vasm-toplevel.93 6 3) (bruijn ##.k.611 0 0) (bruijn ##.tape.225 3 0) (bruijn ##.program-counter.226 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 3,
      _var0,
      statics->up->up->vars[0],
      statics->up->up->vars[1]);
}
static void _V10_Deval__loop_D227_k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D227_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.program-counter.226 2 1) (##vcore.call-with-values (bruijn ##.k.609 1 0) (close _V10_Deval__loop_D227_lambda46) (bruijn ##.eval-loop.227 2 2)) (##vcore.apply (bruijn ##.k.609 1 0) (bruijn ##.x.231 14 0) (bruijn ##.rets.228 1 1)))
if(VDecodeBool(
statics->up->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D227_lambda46, self)})),
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->vars[0],
      VGetArg(statics, 14-1, 0),
      statics->vars[1]);
}
}
static void _V10_Deval__loop_D227_lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D227_lambda45, got ~D~N"
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
  // ((close _V10_Deval__loop_D227_k208) (close _V10_Deval__loop_D227_k210))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Deval__loop_D227_k208, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D227_k210, self)})));
}
static void _V10_Deval__vasm_D96_k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__vasm_D96_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval-loop.227 1 2) (bruijn ##.k.607 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[2]), 1,
      statics->up->up->vars[0]);
}
static void _V10_Deval__vasm_D96_k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__vasm_D96_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.608 1 0) 0 (close _V10_Deval__loop_D227_lambda45)) ((bruijn ##.set-declares!.94 3 4) (close _V10_Deval__vasm_D96_k211) (bruijn ##.tape.225 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeInt(0l);
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D227_lambda45, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__vasm_D96_k211, self)})),
      self->vars[0]);
    }
}
static void _V10_Deval__vasm_D96_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__vasm_D96_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.preprocess-vasm.90 1 0) (close _V10_Deval__vasm_D96_k207) (bruijn ##.vasm.224 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__vasm_D96_k207, self)})),
      _var1);
}
static void _V0vanity_V0bytecode_V20_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 7 ((close _V10_Dpreprocess__vasm_D90_lambda2) (close _V10_Dfind__declare_D91_lambda37) (bruijn ##.x.578 2 0) (bruijn ##.x.579 1 0) (close _V10_Dset__declares_B_D94_lambda38) (close _V10_Dfind__toplevel_D95_lambda43) (close _V10_Deval__vasm_D96_lambda44)) ((bruijn ##.k.230 14 0) (##inline ##vcore.cons (##inline ##vcore.cons 'eval-vasm (bruijn ##.eval-vasm.96 0 6)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__vasm_D90_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D91_lambda37, self)}));
    self->vars[2] = statics->up->vars[0];
    self->vars[3] = statics->vars[0];
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declares_B_D94_lambda38, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D95_lambda43, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__vasm_D96_lambda44, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eval__vasm,
        self->vars[6]),
        VNULL));
    }
}
static void _V0vanity_V0bytecode_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.function (close _V0vanity_V0bytecode_V20_k13) (##string ##.string.695))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k13, self)})),
      VEncodePointer(&_V10_Dstring_D695.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.function (close _V0vanity_V0bytecode_V20_k12) (##string ##.string.696))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k12, self)})),
      VEncodePointer(&_V10_Dstring_D696.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 6 0) (close _V0vanity_V0bytecode_V20_k11) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k11, self)})),
      _V0assv);
}
static void _V0vanity_V0bytecode_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 5 0) (close _V0vanity_V0bytecode_V20_k10) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k10, self)})),
      _V0reverse);
}
static void _V0vanity_V0bytecode_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 4 0) (close _V0vanity_V0bytecode_V20_k9) 'lookup-intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k9, self)})),
      _V0lookup__intrinsic);
}
static void _V0vanity_V0bytecode_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 3 0) (close _V0vanity_V0bytecode_V20_k8) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k8, self)})),
      _V0error);
}
static void _V0vanity_V0bytecode_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 2 0) (close _V0vanity_V0bytecode_V20_k7) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k7, self)})),
      _V0equal_Q);
}
static void _V0vanity_V0bytecode_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 1 0) (close _V0vanity_V0bytecode_V20_k6) '>=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k6, self)})),
      _V0_G_E);
}
static void _V0vanity_V0bytecode_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 0 0) (close _V0vanity_V0bytecode_V20_k5) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k5, self)})),
      _V0values);
}
static void _V0vanity_V0bytecode_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0bytecode_V20_k4) (##string ##.string.697) (bruijn ##.x.616 2 0) (bruijn ##.x.617 1 0) (bruijn ##.x.618 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k4, self)})),
      VEncodePointer(&_V10_Dstring_D697.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0bytecode_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k3) (##string ##.string.698))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D698.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k2) (##string ##.string.699))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D699.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k1) (##string ##.string.700))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D700.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0bytecode_V20 = (VFunc)_V0vanity_V0bytecode_V20_lambda1;
