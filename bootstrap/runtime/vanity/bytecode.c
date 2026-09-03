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

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D961 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D960 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D959 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D958 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_V0vanity_V0bytecode_V20" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D957 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VMakeVasmLambda" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D956 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEvalVasmToplevel" };
VWEAK VWORD _V0eval__vasm;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0eval__vasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "eval-vasm" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D955 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm: unknown or malformed line" };
VWEAK VWORD _V0letrec__end;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0letrec__end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "letrec-end" };
VWEAK VWORD _V0letrec__begin;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0letrec__begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "letrec-begin" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D954 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm letrec-begin: malformed" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D953 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "vasm bf: not an integer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D952 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "vasm bf: unknown label" };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
VWEAK VWORD _V0push__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0push__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "push-set!" };
VWEAK VWORD _V0declare__foreign__variable;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0declare__foreign__variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "declare-foreign-variable" };
VWEAK VWORD _V0declare__foreign;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0declare__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "declare-foreign" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D951 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm declare: not a nonnegative integer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D950 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "vasm declare: unknown label" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D949 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vasm declare: not a string" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D948 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "~A_shim" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D947 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "vasm foreign-function: not a nonnegative integer" };
VWEAK VWORD _V0foreign__function;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D946 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "vasm close: not a nonnegative integer" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D945 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm close: unknown label" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D944 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "vasm close: malformed env name" };
VWEAK VWORD _V0case__lambda__error;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0case__lambda__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "case-lambda-error" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D943 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "vasm case-lambda+: not an integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D942 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda+: unknown label" };
VWEAK VWORD _V0case__lambda_P;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0case__lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "case-lambda+" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D941 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "vasm case-lambda+: not a nonnegative integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D940 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda: not an integer" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D939 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm case-lambda: unknown label" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D938 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "vasm case-lambda: not a nonnegative integer" };
VWEAK VWORD _V0lambda_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "lambda+" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D937 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm lambda+: not a nonnegative integer" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D936 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vasm lambda: not a nonnegative integer" };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D935 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "vasm call: not a nonnegative integer" };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D934 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm lookup: not a symbol" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D933 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm bruijn: not both nonnegative integers" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D932 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm intrinsic: not a recognized intrinsic" };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
VWEAK VWORD _V40VFunction3;
VWEAK VClosure _VW_V40VFunction3 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFunction3, NULL };
VWEAK VWORD _V0push;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0push = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "push" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D931 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm label: label declared twice" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D930 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "vasm label: not a symbol" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D929 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "declare not declare\?" };
VWEAK VWORD _V0declare;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "declare" };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0preprocess__vasm, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0find__declare, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0set__declares_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0find__toplevel, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0bytecode_V0eval__vasm, _var0, _var1);
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.259 1 0) (bruijn ##.program-counter.109 3 1) (bruijn ##.%x.260 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.program-counter.109 2 1) (##qualified-call (vanity bytecode find-toplevel) #t (bruijn ##.find-toplevel.101 5 1) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0k7) (bruijn ##.tape.108 2 0) (bruijn ##.program-counter.109 2 1)) ((bruijn ##.%k.259 0 0) #f))
if(VDecodeBool(
statics->up->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0k7, self))));
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
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval-vasm-toplevel.103 5 3) (bruijn ##.%k.258 0 0) (bruijn ##.tape.108 2 0) (bruijn ##.program-counter.109 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 3,
      _var0,
      statics->up->vars[0],
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0k8(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (bruijn ##.program-counter.109 1 1) (##vcore.call-with-values (bruijn ##.%k.257 0 0) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0lambda3) (bruijn ##.eval-loop.110 1 2)) (##vcore.apply (bruijn ##.%k.257 0 0) (bruijn ##.values.73 5 0) (bruijn ##.rets.111 0 1)))
if(VDecodeBool(
statics->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0lambda3, self)))),
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      self->vars[0],
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
}
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110, got ~D~N"
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
  // ((close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0k6) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0k8))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0k6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110_V0k8, self)))));
}
static void _V50_V0vanity_V0bytecode_V0eval__vasm_V0k9(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity bytecode eval-vasm ##.eval-loop.110) #f (bruijn ##.eval-loop.110 0 2) (bruijn ##.%k.255 2 0))
  {
    VClosure * _closure = VDecodeClosure(self->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110(runtime, _closure_env, 1, _arg0);
    }
  }
}
void _V50_V0vanity_V0bytecode_V0eval__vasm_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0eval__vasm_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.%x.256 1 0) 0 (close "_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110")) (##qualified-call (vanity bytecode set-declares!) #t (bruijn ##.set-declares!.102 3 2) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V0k9) (bruijn ##.tape.108 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeInt(0l);
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0eval__vasm_V10_Deval__loop_D110, self))));
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
  // (##qualified-call (vanity bytecode preprocess-vasm) #t (bruijn ##.preprocess-vasm.106 1 6) (close _V50_V0vanity_V0bytecode_V0eval__vasm_V0k5) (bruijn ##.vasm.107 0 1))
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
  // (basic-block 2 2 (##.%x.627 ##.%p.628) ((##vcore.vector-length (bruijn ##.tape.112 1 1)) (##vcore.>= (bruijn ##.program-counter.113 1 2) (bruijn ##.%x.627 0 0))) (if (bruijn ##.%p.628 0 1) ((bruijn ##.%k.261 1 0) #f) (basic-block 3 3 (##.%x.629 ##.%x.630 ##.%p.631) ((##vcore.vector-ref (bruijn ##.tape.112 2 1) (bruijn ##.program-counter.113 2 2)) (##vcore.car (bruijn ##.%x.629 0 0)) (##vcore.eq? (bruijn ##.%x.630 0 1) 'toplevel)) (if (bruijn ##.%p.631 0 2) (basic-block 1 1 (##.%r.632) ((##vcore.+ (bruijn ##.program-counter.113 3 2) 1)) ((bruijn ##.%k.261 3 0) (bruijn ##.%r.632 0 0))) (basic-block 1 1 (##.%x.633) ((##vcore.+ 1 (bruijn ##.program-counter.113 3 2))) (##qualified-call (vanity bytecode find-toplevel) #t (bruijn ##.find-toplevel.101 4 1) (bruijn ##.%k.261 3 0) (bruijn ##.tape.112 3 1) (bruijn ##.%x.633 0 0)))))))
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
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->vars[1],
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VEq2(runtime, NULL,
      self->vars[1],
      _V0toplevel);
if(VDecodeBool(
self->vars[2])) {
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
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode set-declares! ##.set-declare-loop.115) #f (bruijn ##.set-declare-loop.115 2 0) (bruijn ##.%k.269 1 0) (bruijn ##.%x.270 0 0))
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
       _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity bytecode find-declare) #t (bruijn ##.find-declare.105 3 5) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k11) (bruijn ##.tape.114 2 1) (bruijn ##.pc.116 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k11, self))));
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
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.280 0 0) (bruijn ##.%k.275 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-declare! (bruijn ##.%k.281 1 0) (bruijn ##.name.640 3 0) (bruijn ##.%x.282 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetDeclare, 3,
      statics->vars[0],
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-vasm-lambda.104 12 4) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k15) (bruijn ##.tape.114 11 1) (bruijn ##.x.643 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k15, self)))),
      VGetArg(statics, 11-1, 1),
      statics->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.276 0 0) (basic-block 2 2 (##.expr.71.638 ##.%p.639) ((##vcore.cdr (bruijn ##.input.69.634 4 0)) (##vcore.pair? (bruijn ##.expr.71.638 0 0))) (if (bruijn ##.%p.639 0 1) (basic-block 3 3 (##.name.640 ##.expr.72.641 ##.%p.642) ((##vcore.car (bruijn ##.expr.71.638 1 0)) (##vcore.cdr (bruijn ##.expr.71.638 1 0)) (##vcore.pair? (bruijn ##.expr.72.641 0 1))) (if (bruijn ##.%p.642 0 2) (basic-block 3 3 (##.x.643 ##.%x.644 ##.%p.645) ((##vcore.car (bruijn ##.expr.72.641 1 1)) (##vcore.cdr (bruijn ##.expr.72.641 1 1)) (##vcore.null? (bruijn ##.%x.644 0 1))) (if (bruijn ##.%p.645 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k14) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda5) (bruijn ##.kk.68.117 7 1)) ((bruijn ##.%k.275 5 0) #f))) ((bruijn ##.%k.275 4 0) #f))) ((bruijn ##.%k.275 3 0) #f))) ((bruijn ##.%k.275 2 0) #f))
if(VDecodeBool(
_var0)) {
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k14, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda5, self)))),
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
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.635 1 1) (basic-block 1 1 (##.%x.637) ((##vcore.car (bruijn ##.input.69.634 2 0))) ((bruijn ##.equal?.74 8 1) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k13) 'declare (bruijn ##.%x.637 0 0))) ((bruijn ##.%k.275 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k13, self)))),
      _V0declare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.636) ((##vcore.vector-ref (bruijn ##.tape.114 6 1) (bruijn ##.pc.116 4 1))) ((bruijn ##.error.75 8 2) (bruijn ##.%k.272 1 0) (##string ##.string.929) (bruijn ##.%x.636 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D929.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.271 1 0) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda6) (bruijn ##.kk.68.117 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda6, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.input.69.634 ##.%p.635) ((##vcore.vector-ref (bruijn ##.tape.114 4 1) (bruijn ##.pc.116 2 1)) (##vcore.pair? (bruijn ##.input.69.634 0 0))) ((close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k12) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k16)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k12, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k16, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.pc.116 0 1) (##vcore.call/cc (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k10) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda4)) ((bruijn ##.%k.269 0 0) #f))
if(VDecodeBool(
_var1)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0k10, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115_V0lambda4, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0set__declares_B_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0set__declares_B_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode set-declares! ##.set-declare-loop.115) #f (bruijn ##.set-declare-loop.115 1 0) (bruijn ##.%k.268 2 0) (bruijn ##.%x.285 0 0))
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
       _V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115(runtime, _closure_env, 2, _arg0, _arg1);
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
  // (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115")) (##qualified-call (vanity bytecode find-declare) #t (bruijn ##.find-declare.105 2 5) (close _V50_V0vanity_V0bytecode_V0set__declares_B_V0k17) (bruijn ##.tape.114 1 1) -1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V10_Dset__declare__loop_D115, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0set__declares_B_V0k17, self))));
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
  // (basic-block 3 3 (##.program-counter.646 ##.%x.647 ##.%p.648) ((##vcore.+ (bruijn ##.program-counter.125 1 2) 1) (##vcore.vector-length (bruijn ##.tape.124 1 1)) (##vcore.>= (bruijn ##.program-counter.646 0 0) (bruijn ##.%x.647 0 1))) (if (bruijn ##.%p.648 0 2) ((bruijn ##.%k.286 1 0) #f) (basic-block 3 3 (##.%x.649 ##.%x.650 ##.%p.651) ((##vcore.vector-ref (bruijn ##.tape.124 2 1) (bruijn ##.program-counter.646 1 0)) (##vcore.car (bruijn ##.%x.649 0 0)) (##vcore.eq? (bruijn ##.%x.650 0 1) 'declare)) (if (bruijn ##.%p.651 0 2) ((bruijn ##.%k.286 2 0) (bruijn ##.program-counter.646 1 0)) (##qualified-call (vanity bytecode find-declare) #t (bruijn ##.find-declare.105 3 5) (bruijn ##.%k.286 2 0) (bruijn ##.tape.124 2 1) (bruijn ##.program-counter.646 1 0))))))
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
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VEq2(runtime, NULL,
      self->vars[1],
      _V0declare);
if(VDecodeBool(
self->vars[2])) {
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.305 0 0) (bruijn ##.%k.300 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.667 1 1) ((bruijn ##.error.75 19 2) (bruijn ##.%k.313 0 0) (##string ##.string.930) (bruijn ##.label.660 4 0)) ((bruijn ##.%k.313 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D930.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.310 1 0) ((bruijn ##.error.75 20 2) (bruijn ##.%k.311 0 0) (##string ##.string.931) (bruijn ##.label.660 5 0)) ((bruijn ##.%k.311 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D931.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k27(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.670) ((##vcore.+ (bruijn ##.pc.134 14 1) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.129 ##.peel-loop.133) #f (bruijn ##.peel-loop.133 15 0) (bruijn ##.%k.306 4 0) (bruijn ##.%x.670 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k26(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.vector-set! (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k27) (bruijn ##.tape.131 16 1) (bruijn ##.pc.134 13 1) (bruijn ##.expr.663 4 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k27, self)))),
      VGetArg(statics, 16-1, 1),
      VGetArg(statics, 13-1, 1),
      statics->up->up->up->vars[0]);
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.668 ##.%x.669) ((##vcore.cons (bruijn ##.label.660 5 0) (bruijn ##.pc.134 13 1)) (##vcore.cons (bruijn ##.%x.668 0 0) (bruijn ##.labels.128 17 0))) (set! (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k26) (bruijn ##.labels.128 17 0) (bruijn ##.%x.669 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 13-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 17-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k26, self)))),
      VEncodeInt(17l), VEncodeInt(0l),
      self->vars[1]
    );
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k24) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k25))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k24, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k25, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.assv.79 18 6) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k23) (bruijn ##.label.660 3 0) (bruijn ##.labels.128 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k23, self)))),
      statics->up->up->vars[0],
      VGetArg(statics, 15-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.666 ##.%p.667) ((##vcore.symbol? (bruijn ##.label.660 3 0)) (##vcore.not (bruijn ##.%x.666 0 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k21) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k22)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k21, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k22, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.301 0 0) (basic-block 2 2 (##.expr.4.658 ##.%p.659) ((##vcore.cdr (bruijn ##.input.2.654 4 0)) (##vcore.pair? (bruijn ##.expr.4.658 0 0))) (if (bruijn ##.%p.659 0 1) (basic-block 3 3 (##.label.660 ##.expr.5.661 ##.%p.662) ((##vcore.car (bruijn ##.expr.4.658 1 0)) (##vcore.cdr (bruijn ##.expr.4.658 1 0)) (##vcore.pair? (bruijn ##.expr.5.661 0 1))) (if (bruijn ##.%p.662 0 2) (basic-block 3 3 (##.expr.663 ##.%x.664 ##.%p.665) ((##vcore.car (bruijn ##.expr.5.661 1 1)) (##vcore.cdr (bruijn ##.expr.5.661 1 1)) (##vcore.null? (bruijn ##.%x.664 0 1))) (if (bruijn ##.%p.665 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k20) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda8) (bruijn ##.kk.1.135 7 1)) ((bruijn ##.%k.300 5 0) #f))) ((bruijn ##.%k.300 4 0) #f))) ((bruijn ##.%k.300 3 0) #f))) ((bruijn ##.%k.300 2 0) #f))
if(VDecodeBool(
_var0)) {
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k20, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda8, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.655 1 1) (basic-block 1 1 (##.%x.657) ((##vcore.car (bruijn ##.input.2.654 2 0))) ((bruijn ##.equal?.74 12 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k19) 'label (bruijn ##.%x.657 0 0))) ((bruijn ##.%k.300 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k19, self)))),
      _V0label,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.656) ((##vcore.+ (bruijn ##.pc.134 5 1) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.129 ##.peel-loop.133) #f (bruijn ##.peel-loop.133 6 0) (bruijn ##.%k.297 1 0) (bruijn ##.%x.656 0 0)))
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
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k28(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.296 1 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda9) (bruijn ##.kk.1.135 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda9, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.input.2.654 ##.%p.655) ((##vcore.vector-ref (bruijn ##.tape.131 6 1) (bruijn ##.pc.134 3 1)) (##vcore.pair? (bruijn ##.input.2.654 0 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k18) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k28)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k18, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0k28, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.653) ((##vcore.>= (bruijn ##.pc.134 1 1) (bruijn ##.len.652 3 0))) (if (bruijn ##.%p.653 0 0) ((bruijn ##.%k.294 1 0) (bruijn ##.tape.131 4 1)) (##vcore.call/cc (bruijn ##.%k.294 1 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda7))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133_V0lambda7, self)))));
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.len.652) ((##vcore.vector-length (bruijn ##.tape.131 1 1))) (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133")) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.129 ##.peel-loop.133) #f (bruijn ##.peel-loop.133 0 0) (bruijn ##.%k.293 2 0) 0)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133, self))));
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
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129_V10_Dpeel__loop_D133(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.607 0 0) (bruijn ##.%k.604 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.608 0 0) (bruijn ##.expr.142 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.605 0 0) (basic-block 2 2 (##.%x.918 ##.%p.919) ((##vcore.cdr (bruijn ##.expr.142 6 1)) (##vcore.null? (bruijn ##.%x.918 0 0))) (if (bruijn ##.%p.919 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k31) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda11) (bruijn ##.kk.6.144 5 1)) ((bruijn ##.%k.604 3 0) #f))) ((bruijn ##.%k.604 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k31, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda11, self)))),
      VGetArg(statics, 5-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.671 1 0) (basic-block 1 1 (##.%x.917) ((##vcore.car (bruijn ##.expr.142 4 1))) ((bruijn ##.equal?.74 8 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k30) 'toplevel (bruijn ##.%x.917 0 0))) ((bruijn ##.%k.604 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k30, self)))),
      _V0toplevel,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.599 0 0) (bruijn ##.%k.595 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.600 0 0) (bruijn ##.expr.142 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.596 0 0) (basic-block 2 2 (##.expr.10.912 ##.%p.913) ((##vcore.cdr (bruijn ##.expr.142 7 1)) (##vcore.pair? (bruijn ##.expr.10.912 0 0))) (if (bruijn ##.%p.913 0 1) (basic-block 3 3 (##.x.914 ##.%x.915 ##.%p.916) ((##vcore.car (bruijn ##.expr.10.912 1 0)) (##vcore.cdr (bruijn ##.expr.10.912 1 0)) (##vcore.null? (bruijn ##.%x.915 0 1))) (if (bruijn ##.%p.916 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k35) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda12) (bruijn ##.kk.6.144 7 1)) ((bruijn ##.%k.595 4 0) #f))) ((bruijn ##.%k.595 3 0) #f))) ((bruijn ##.%k.595 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k35, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda12, self)))),
      VGetArg(statics, 7-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.672 1 0) (basic-block 1 1 (##.%x.911) ((##vcore.car (bruijn ##.expr.142 5 1))) ((bruijn ##.equal?.74 9 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k34) 'push (bruijn ##.%x.911 0 0))) ((bruijn ##.%k.595 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k34, self)))),
      _V0push,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.586 0 0) (bruijn ##.%k.582 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.907 ##.%r.908) ((##vcore.cons (bruijn ##.%x.590 1 0) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.907 0 0))) ((bruijn ##.%k.587 3 0) (bruijn ##.%r.908 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.61.153 0 0) (basic-block 2 2 (##.%x.909 ##.%r.910) ((##vcore.cons (bruijn ##.x.61.153 1 0) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.909 0 0))) ((bruijn ##.%k.587 3 0) (bruijn ##.%r.910 0 1))) ((bruijn ##.error.75 16 2) (bruijn ##.%k.587 2 0) (##string ##.string.932) (bruijn ##.x.903 3 0)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D932.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.906) ((##vcore.string? (bruijn ##.x.903 2 0))) (if (bruijn ##.%p.906 0 0) ((##intrinsic "VFunction3") (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k40) (bruijn ##.x.903 2 0)) ((bruijn ##.lookup-intrinsic.76 15 3) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k41) (bruijn ##.x.903 2 0))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k40, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k41, self)))),
      statics->up->vars[0]);
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.583 0 0) (basic-block 2 2 (##.expr.12.901 ##.%p.902) ((##vcore.cdr (bruijn ##.expr.142 8 1)) (##vcore.pair? (bruijn ##.expr.12.901 0 0))) (if (bruijn ##.%p.902 0 1) (basic-block 3 3 (##.x.903 ##.%x.904 ##.%p.905) ((##vcore.car (bruijn ##.expr.12.901 1 0)) (##vcore.cdr (bruijn ##.expr.12.901 1 0)) (##vcore.null? (bruijn ##.%x.904 0 1))) (if (bruijn ##.%p.905 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k39) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda13) (bruijn ##.kk.6.144 8 1)) ((bruijn ##.%k.582 4 0) #f))) ((bruijn ##.%k.582 3 0) #f))) ((bruijn ##.%k.582 2 0) #f))
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k39, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda13, self)))),
      VGetArg(statics, 8-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.673 1 0) (basic-block 1 1 (##.%x.900) ((##vcore.car (bruijn ##.expr.142 6 1))) ((bruijn ##.equal?.74 10 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k38) 'intrinsic (bruijn ##.%x.900 0 0))) ((bruijn ##.%k.582 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k38, self)))),
      _V0intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.572 0 0) (bruijn ##.%k.567 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.896 1 0) (basic-block 1 1 (##.%p.897) ((##vcore.int? (bruijn ##.right.893 4 0))) (if (bruijn ##.%p.897 0 0) (basic-block 1 1 (##.%p.898) ((##vcore.>= (bruijn ##.up.890 6 0) 0)) (if (bruijn ##.%p.898 0 0) (basic-block 1 1 (##.%r.899) ((##vcore.>= (bruijn ##.right.893 6 0) 0)) ((bruijn ##.%k.576 3 0) (bruijn ##.%r.899 0 0))) ((bruijn ##.%k.576 2 0) #f))) ((bruijn ##.%k.576 1 0) #f))) ((bruijn ##.%k.576 0 0) #f))
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
      VGetArg(statics, 6-1, 0),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.574 0 0) ((bruijn ##.%k.573 2 0) (bruijn ##.expr.142 14 1)) ((bruijn ##.error.75 18 2) (bruijn ##.%k.573 2 0) (##string ##.string.933) (bruijn ##.up.890 4 0) (bruijn ##.right.893 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 2)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D933.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.896) ((##vcore.int? (bruijn ##.up.890 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k46) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k47)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k46, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k47, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.568 0 0) (basic-block 2 2 (##.expr.14.888 ##.%p.889) ((##vcore.cdr (bruijn ##.expr.142 9 1)) (##vcore.pair? (bruijn ##.expr.14.888 0 0))) (if (bruijn ##.%p.889 0 1) (basic-block 3 3 (##.up.890 ##.expr.15.891 ##.%p.892) ((##vcore.car (bruijn ##.expr.14.888 1 0)) (##vcore.cdr (bruijn ##.expr.14.888 1 0)) (##vcore.pair? (bruijn ##.expr.15.891 0 1))) (if (bruijn ##.%p.892 0 2) (basic-block 3 3 (##.right.893 ##.%x.894 ##.%p.895) ((##vcore.car (bruijn ##.expr.15.891 1 1)) (##vcore.cdr (bruijn ##.expr.15.891 1 1)) (##vcore.null? (bruijn ##.%x.894 0 1))) (if (bruijn ##.%p.895 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k45) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda14) (bruijn ##.kk.6.144 10 1)) ((bruijn ##.%k.567 5 0) #f))) ((bruijn ##.%k.567 4 0) #f))) ((bruijn ##.%k.567 3 0) #f))) ((bruijn ##.%k.567 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k45, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda14, self)))),
      VGetArg(statics, 10-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.674 1 0) (basic-block 1 1 (##.%x.887) ((##vcore.car (bruijn ##.expr.142 7 1))) ((bruijn ##.equal?.74 11 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k44) 'bruijn (bruijn ##.%x.887 0 0))) ((bruijn ##.%k.567 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k44, self)))),
      _V0bruijn,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.561 0 0) (bruijn ##.%k.557 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.886) ((##vcore.symbol? (bruijn ##.x.883 2 0))) (if (bruijn ##.%p.886 0 0) ((bruijn ##.%k.562 1 0) (bruijn ##.expr.142 13 1)) ((bruijn ##.error.75 17 2) (bruijn ##.%k.562 1 0) (##string ##.string.934) (bruijn ##.x.883 2 0))))
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
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D934.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.558 0 0) (basic-block 2 2 (##.expr.17.881 ##.%p.882) ((##vcore.cdr (bruijn ##.expr.142 10 1)) (##vcore.pair? (bruijn ##.expr.17.881 0 0))) (if (bruijn ##.%p.882 0 1) (basic-block 3 3 (##.x.883 ##.%x.884 ##.%p.885) ((##vcore.car (bruijn ##.expr.17.881 1 0)) (##vcore.cdr (bruijn ##.expr.17.881 1 0)) (##vcore.null? (bruijn ##.%x.884 0 1))) (if (bruijn ##.%p.885 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k51) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda15) (bruijn ##.kk.6.144 10 1)) ((bruijn ##.%k.557 4 0) #f))) ((bruijn ##.%k.557 3 0) #f))) ((bruijn ##.%k.557 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k51, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda15, self)))),
      VGetArg(statics, 10-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.675 1 0) (basic-block 1 1 (##.%x.880) ((##vcore.car (bruijn ##.expr.142 8 1))) ((bruijn ##.equal?.74 12 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k50) 'lookup (bruijn ##.%x.880 0 0))) ((bruijn ##.%k.557 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k50, self)))),
      _V0lookup,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.549 0 0) (bruijn ##.%k.545 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.878 1 0) (basic-block 1 1 (##.%r.879) ((##vcore.>= (bruijn ##.x.875 4 0) 0)) ((bruijn ##.%k.553 1 0) (bruijn ##.%r.879 0 0))) ((bruijn ##.%k.553 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.551 0 0) ((bruijn ##.%k.550 2 0) (bruijn ##.expr.142 15 1)) ((bruijn ##.error.75 19 2) (bruijn ##.%k.550 2 0) (##string ##.string.935) (bruijn ##.x.875 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D935.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.878) ((##vcore.int? (bruijn ##.x.875 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k56) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k57)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k56, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k57, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.546 0 0) (basic-block 2 2 (##.expr.19.873 ##.%p.874) ((##vcore.cdr (bruijn ##.expr.142 11 1)) (##vcore.pair? (bruijn ##.expr.19.873 0 0))) (if (bruijn ##.%p.874 0 1) (basic-block 3 3 (##.x.875 ##.%x.876 ##.%p.877) ((##vcore.car (bruijn ##.expr.19.873 1 0)) (##vcore.cdr (bruijn ##.expr.19.873 1 0)) (##vcore.null? (bruijn ##.%x.876 0 1))) (if (bruijn ##.%p.877 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k55) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda16) (bruijn ##.kk.6.144 11 1)) ((bruijn ##.%k.545 4 0) #f))) ((bruijn ##.%k.545 3 0) #f))) ((bruijn ##.%k.545 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k55, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda16, self)))),
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.676 1 0) (basic-block 1 1 (##.%x.872) ((##vcore.car (bruijn ##.expr.142 9 1))) ((bruijn ##.equal?.74 13 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k54) 'call (bruijn ##.%x.872 0 0))) ((bruijn ##.%k.545 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k54, self)))),
      _V0call,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.536 0 0) (bruijn ##.%k.532 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.869 1 0) ((bruijn ##.%k.540 0 0) (bruijn ##.%p.869 1 0)) (basic-block 1 1 (##.%p.870) ((##vcore.int? (bruijn ##.x.866 4 0))) (if (bruijn ##.%p.870 0 0) (basic-block 1 1 (##.%r.871) ((##vcore.>= (bruijn ##.x.866 5 0) 0)) ((bruijn ##.%k.540 2 0) (bruijn ##.%r.871 0 0))) ((bruijn ##.%k.540 1 0) #f))))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.538 0 0) ((bruijn ##.%k.537 2 0) (bruijn ##.expr.142 16 1)) ((bruijn ##.error.75 20 2) (bruijn ##.%k.537 2 0) (##string ##.string.936) (bruijn ##.x.866 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D936.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.869) ((##vcore.not (bruijn ##.x.866 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k62) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k63)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k62, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k63, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.533 0 0) (basic-block 2 2 (##.expr.21.864 ##.%p.865) ((##vcore.cdr (bruijn ##.expr.142 12 1)) (##vcore.pair? (bruijn ##.expr.21.864 0 0))) (if (bruijn ##.%p.865 0 1) (basic-block 3 3 (##.x.866 ##.%x.867 ##.%p.868) ((##vcore.car (bruijn ##.expr.21.864 1 0)) (##vcore.cdr (bruijn ##.expr.21.864 1 0)) (##vcore.null? (bruijn ##.%x.867 0 1))) (if (bruijn ##.%p.868 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k61) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda17) (bruijn ##.kk.6.144 12 1)) ((bruijn ##.%k.532 4 0) #f))) ((bruijn ##.%k.532 3 0) #f))) ((bruijn ##.%k.532 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda17, self)))),
      VGetArg(statics, 12-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.677 1 0) (basic-block 1 1 (##.%x.863) ((##vcore.car (bruijn ##.expr.142 10 1))) ((bruijn ##.equal?.74 14 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k60) 'lambda (bruijn ##.%x.863 0 0))) ((bruijn ##.%k.532 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k60, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.524 0 0) (bruijn ##.%k.520 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.861 1 0) (basic-block 1 1 (##.%r.862) ((##vcore.>= (bruijn ##.x.858 4 0) 0)) ((bruijn ##.%k.528 1 0) (bruijn ##.%r.862 0 0))) ((bruijn ##.%k.528 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.526 0 0) ((bruijn ##.%k.525 2 0) (bruijn ##.expr.142 17 1)) ((bruijn ##.error.75 21 2) (bruijn ##.%k.525 2 0) (##string ##.string.937) (bruijn ##.x.858 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 2)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D937.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.861) ((##vcore.int? (bruijn ##.x.858 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k68) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k69)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k68, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k69, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.521 0 0) (basic-block 2 2 (##.expr.23.856 ##.%p.857) ((##vcore.cdr (bruijn ##.expr.142 13 1)) (##vcore.pair? (bruijn ##.expr.23.856 0 0))) (if (bruijn ##.%p.857 0 1) (basic-block 3 3 (##.x.858 ##.%x.859 ##.%p.860) ((##vcore.car (bruijn ##.expr.23.856 1 0)) (##vcore.cdr (bruijn ##.expr.23.856 1 0)) (##vcore.null? (bruijn ##.%x.859 0 1))) (if (bruijn ##.%p.860 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k67) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda18) (bruijn ##.kk.6.144 13 1)) ((bruijn ##.%k.520 4 0) #f))) ((bruijn ##.%k.520 3 0) #f))) ((bruijn ##.%k.520 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k67, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda18, self)))),
      VGetArg(statics, 13-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.678 1 0) (basic-block 1 1 (##.%x.855) ((##vcore.car (bruijn ##.expr.142 11 1))) ((bruijn ##.equal?.74 15 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k66) 'lambda+ (bruijn ##.%x.855 0 0))) ((bruijn ##.%k.520 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k66, self)))),
      _V0lambda_P,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.502 0 0) (bruijn ##.%k.497 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.844 1 0) (basic-block 1 1 (##.%r.854) ((##vcore.>= (bruijn ##.x.838 5 0) 0)) ((bruijn ##.%k.516 1 0) (bruijn ##.%r.854 0 0))) ((bruijn ##.%k.516 0 0) #f))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.845 1 0) ((bruijn ##.error.75 25 2) (bruijn ##.%k.513 0 0) (##string ##.string.938) (bruijn ##.x.838 6 0)) ((bruijn ##.%k.513 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 2)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D938.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.847 1 0) ((bruijn ##.assv.79 27 6) (bruijn ##.%k.511 0 0) (bruijn ##.b.841 7 0) (bruijn ##.labels.128 24 0)) ((bruijn ##.%k.511 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 6)), 3,
      _var0,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 24-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.62.177 0 0) (basic-block 5 5 (##.%x.848 ##.%x.849 ##.%x.850 ##.%x.851 ##.%r.852) ((##vcore.cdr (bruijn ##.x.62.177 1 0)) (##vcore.- (bruijn ##.%x.848 0 0) (bruijn ##.pc.143 24 2) 1) (##vcore.cons (bruijn ##.%x.849 0 1) '()) (##vcore.cons (bruijn ##.x.838 9 0) (bruijn ##.%x.850 0 2)) (##vcore.cons 'case-lambda (bruijn ##.%x.851 0 3))) ((bruijn ##.%k.503 7 0) (bruijn ##.%r.852 0 4))) (basic-block 1 1 (##.%p.853) ((##vcore.symbol? (bruijn ##.b.841 8 0))) (if (bruijn ##.%p.853 0 0) ((bruijn ##.error.75 28 2) (bruijn ##.%k.503 7 0) (##string ##.string.939) (bruijn ##.b.841 8 0)) ((bruijn ##.error.75 28 2) (bruijn ##.%k.503 7 0) (##string ##.string.940) (bruijn ##.b.841 8 0)))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 24-1, 2),
      VEncodeInt(1l));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[4]);
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 2)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D939.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 2)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D940.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
    }
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k77(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.846) ((##vcore.int? (bruijn ##.b.841 5 0))) (if (bruijn ##.%p.846 0 0) ((bruijn ##.%k.503 4 0) (bruijn ##.expr.142 21 1)) (basic-block 1 1 (##.%p.847) ((##vcore.symbol? (bruijn ##.b.841 6 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k78) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k79)))))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k78, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k79, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.845) ((##vcore.not (bruijn ##.%x.514 1 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k76) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k77)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k76, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k77, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.844) ((##vcore.int? (bruijn ##.x.838 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k74) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k75)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k75, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.498 0 0) (basic-block 2 2 (##.expr.25.836 ##.%p.837) ((##vcore.cdr (bruijn ##.expr.142 14 1)) (##vcore.pair? (bruijn ##.expr.25.836 0 0))) (if (bruijn ##.%p.837 0 1) (basic-block 3 3 (##.x.838 ##.expr.26.839 ##.%p.840) ((##vcore.car (bruijn ##.expr.25.836 1 0)) (##vcore.cdr (bruijn ##.expr.25.836 1 0)) (##vcore.pair? (bruijn ##.expr.26.839 0 1))) (if (bruijn ##.%p.840 0 2) (basic-block 3 3 (##.b.841 ##.%x.842 ##.%p.843) ((##vcore.car (bruijn ##.expr.26.839 1 1)) (##vcore.cdr (bruijn ##.expr.26.839 1 1)) (##vcore.null? (bruijn ##.%x.842 0 1))) (if (bruijn ##.%p.843 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k73) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda19) (bruijn ##.kk.6.144 15 1)) ((bruijn ##.%k.497 5 0) #f))) ((bruijn ##.%k.497 4 0) #f))) ((bruijn ##.%k.497 3 0) #f))) ((bruijn ##.%k.497 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k73, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda19, self)))),
      VGetArg(statics, 15-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.679 1 0) (basic-block 1 1 (##.%x.835) ((##vcore.car (bruijn ##.expr.142 12 1))) ((bruijn ##.equal?.74 16 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k72) 'case-lambda (bruijn ##.%x.835 0 0))) ((bruijn ##.%k.497 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k72, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.479 0 0) (bruijn ##.%k.474 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.824 1 0) (basic-block 1 1 (##.%r.834) ((##vcore.>= (bruijn ##.x.818 5 0) 0)) ((bruijn ##.%k.493 1 0) (bruijn ##.%r.834 0 0))) ((bruijn ##.%k.493 0 0) #f))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.825 1 0) ((bruijn ##.error.75 26 2) (bruijn ##.%k.490 0 0) (##string ##.string.941) (bruijn ##.x.818 6 0)) ((bruijn ##.%k.490 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 2)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D941.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.827 1 0) ((bruijn ##.assv.79 28 6) (bruijn ##.%k.488 0 0) (bruijn ##.b.821 7 0) (bruijn ##.labels.128 25 0)) ((bruijn ##.%k.488 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 6)), 3,
      _var0,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 25-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.63.184 0 0) (basic-block 5 5 (##.%x.828 ##.%x.829 ##.%x.830 ##.%x.831 ##.%r.832) ((##vcore.cdr (bruijn ##.x.63.184 1 0)) (##vcore.- (bruijn ##.%x.828 0 0) (bruijn ##.pc.143 25 2) 1) (##vcore.cons (bruijn ##.%x.829 0 1) '()) (##vcore.cons (bruijn ##.x.818 9 0) (bruijn ##.%x.830 0 2)) (##vcore.cons 'case-lambda+ (bruijn ##.%x.831 0 3))) ((bruijn ##.%k.480 7 0) (bruijn ##.%r.832 0 4))) (basic-block 1 1 (##.%p.833) ((##vcore.symbol? (bruijn ##.b.821 8 0))) (if (bruijn ##.%p.833 0 0) ((bruijn ##.error.75 29 2) (bruijn ##.%k.480 7 0) (##string ##.string.942) (bruijn ##.b.821 8 0)) ((bruijn ##.error.75 29 2) (bruijn ##.%k.480 7 0) (##string ##.string.943) (bruijn ##.b.821 8 0)))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 25-1, 2),
      VEncodeInt(1l));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda_P,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[4]);
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 2)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D942.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 2)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D943.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
    }
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.826) ((##vcore.int? (bruijn ##.b.821 5 0))) (if (bruijn ##.%p.826 0 0) ((bruijn ##.%k.480 4 0) (bruijn ##.expr.142 22 1)) (basic-block 1 1 (##.%p.827) ((##vcore.symbol? (bruijn ##.b.821 6 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k88) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k89)))))
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
      VGetArg(statics, 22-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k88, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k89, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.825) ((##vcore.not (bruijn ##.%x.491 1 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k86) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k87)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k86, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k87, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.824) ((##vcore.int? (bruijn ##.x.818 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k84) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k85)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k84, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k85, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.475 0 0) (basic-block 2 2 (##.expr.28.816 ##.%p.817) ((##vcore.cdr (bruijn ##.expr.142 15 1)) (##vcore.pair? (bruijn ##.expr.28.816 0 0))) (if (bruijn ##.%p.817 0 1) (basic-block 3 3 (##.x.818 ##.expr.29.819 ##.%p.820) ((##vcore.car (bruijn ##.expr.28.816 1 0)) (##vcore.cdr (bruijn ##.expr.28.816 1 0)) (##vcore.pair? (bruijn ##.expr.29.819 0 1))) (if (bruijn ##.%p.820 0 2) (basic-block 3 3 (##.b.821 ##.%x.822 ##.%p.823) ((##vcore.car (bruijn ##.expr.29.819 1 1)) (##vcore.cdr (bruijn ##.expr.29.819 1 1)) (##vcore.null? (bruijn ##.%x.822 0 1))) (if (bruijn ##.%p.823 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k83) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda20) (bruijn ##.kk.6.144 16 1)) ((bruijn ##.%k.474 5 0) #f))) ((bruijn ##.%k.474 4 0) #f))) ((bruijn ##.%k.474 3 0) #f))) ((bruijn ##.%k.474 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k83, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda20, self)))),
      VGetArg(statics, 16-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.680 1 0) (basic-block 1 1 (##.%x.815) ((##vcore.car (bruijn ##.expr.142 13 1))) ((bruijn ##.equal?.74 17 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k82) 'case-lambda+ (bruijn ##.%x.815 0 0))) ((bruijn ##.%k.474 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k82, self)))),
      _V0case__lambda_P,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.469 0 0) (bruijn ##.%k.464 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.470 0 0) (bruijn ##.expr.142 19 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 19-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.465 0 0) (basic-block 2 2 (##.expr.31.807 ##.%p.808) ((##vcore.cdr (bruijn ##.expr.142 16 1)) (##vcore.pair? (bruijn ##.expr.31.807 0 0))) (if (bruijn ##.%p.808 0 1) (basic-block 3 3 (##.name.809 ##.expr.32.810 ##.%p.811) ((##vcore.car (bruijn ##.expr.31.807 1 0)) (##vcore.cdr (bruijn ##.expr.31.807 1 0)) (##vcore.pair? (bruijn ##.expr.32.810 0 1))) (if (bruijn ##.%p.811 0 2) (basic-block 3 3 (##.str.812 ##.%x.813 ##.%p.814) ((##vcore.car (bruijn ##.expr.32.810 1 1)) (##vcore.cdr (bruijn ##.expr.32.810 1 1)) (##vcore.null? (bruijn ##.%x.813 0 1))) (if (bruijn ##.%p.814 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k93) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda21) (bruijn ##.kk.6.144 17 1)) ((bruijn ##.%k.464 5 0) #f))) ((bruijn ##.%k.464 4 0) #f))) ((bruijn ##.%k.464 3 0) #f))) ((bruijn ##.%k.464 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k93, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda21, self)))),
      VGetArg(statics, 17-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.681 1 0) (basic-block 1 1 (##.%x.806) ((##vcore.car (bruijn ##.expr.142 14 1))) ((bruijn ##.equal?.74 18 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k92) 'case-lambda-error (bruijn ##.%x.806 0 0))) ((bruijn ##.%k.464 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k92, self)))),
      _V0case__lambda__error,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.443 0 0) (bruijn ##.%k.440 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.802 1 0) (basic-block 2 2 (##.%x.804 ##.%r.805) ((##vcore.car (bruijn ##.name.792 6 1)) (##vcore.string? (bruijn ##.%x.804 0 0))) ((bruijn ##.%k.459 1 0) (bruijn ##.%r.805 0 1))) ((bruijn ##.%k.459 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.803) ((##vcore.not (bruijn ##.%x.457 1 0))) ((bruijn ##.%k.456 3 0) (bruijn ##.%r.803 0 0)))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.794 1 1) (basic-block 1 1 (##.%p.802) ((##vcore.pair? (bruijn ##.name.792 4 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k99) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k100))) ((bruijn ##.%k.456 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k99, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k100, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.453 1 0) ((bruijn ##.error.75 26 2) (bruijn ##.%k.454 0 0) (##string ##.string.944)) ((bruijn ##.%k.454 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 2)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D944.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.795 1 0) ((bruijn ##.assv.79 27 6) (bruijn ##.%k.452 0 0) (bruijn ##.x.791 5 0) (bruijn ##.labels.128 24 0)) ((bruijn ##.%k.452 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 6)), 3,
      _var0,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 24-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.800 1 0) (basic-block 1 1 (##.%r.801) ((##vcore.>= (bruijn ##.x.791 9 0) 0)) ((bruijn ##.%k.450 1 0) (bruijn ##.%r.801 0 0))) ((bruijn ##.%k.450 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.448 0 0) ((bruijn ##.%k.444 7 0) (bruijn ##.expr.142 26 1)) ((bruijn ##.error.75 30 2) (bruijn ##.%k.444 7 0) (##string ##.string.946) (bruijn ##.x.791 8 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 26-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 2)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D946.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.64.195 0 0) (basic-block 3 3 (##.%x.796 ##.%x.797 ##.%r.798) ((##vcore.cdr (bruijn ##.x.64.195 1 0)) (##vcore.cons (bruijn ##.%x.796 0 0) (bruijn ##.name.792 6 1)) (##vcore.cons 'close (bruijn ##.%x.797 0 1))) ((bruijn ##.%k.444 5 0) (bruijn ##.%r.798 0 2))) (basic-block 1 1 (##.%p.799) ((##vcore.symbol? (bruijn ##.x.791 6 0))) (if (bruijn ##.%p.799 0 0) ((bruijn ##.error.75 28 2) (bruijn ##.%k.444 5 0) (##string ##.string.945) (bruijn ##.x.791 6 0)) (basic-block 1 1 (##.%p.800) ((##vcore.int? (bruijn ##.x.791 7 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k106) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k107))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 6-1, 1));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[2]);
    }
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 2)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D945.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k106, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k107, self)))));
    }
}
    }
}
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k103(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.795) ((##vcore.symbol? (bruijn ##.x.791 4 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k104) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k105)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k104, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k105, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k102) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k103))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k102, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k103, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.793 ##.%p.794) ((##vcore.null? (bruijn ##.name.792 2 1)) (##vcore.not (bruijn ##.%x.793 0 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k98) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k101)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k98, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k101, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.441 0 0) (basic-block 2 2 (##.expr.34.789 ##.%p.790) ((##vcore.cdr (bruijn ##.expr.142 17 1)) (##vcore.pair? (bruijn ##.expr.34.789 0 0))) (if (bruijn ##.%p.790 0 1) (basic-block 2 2 (##.x.791 ##.name.792) ((##vcore.car (bruijn ##.expr.34.789 1 0)) (##vcore.cdr (bruijn ##.expr.34.789 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k97) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda22) (bruijn ##.kk.6.144 17 1))) ((bruijn ##.%k.440 3 0) #f))) ((bruijn ##.%k.440 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k97, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda22, self)))),
      VGetArg(statics, 17-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.682 1 0) (basic-block 1 1 (##.%x.788) ((##vcore.car (bruijn ##.expr.142 15 1))) ((bruijn ##.equal?.74 19 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k96) 'close (bruijn ##.%x.788 0 0))) ((bruijn ##.%k.440 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k96, self)))),
      _V0close,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.426 0 0) (bruijn ##.%k.422 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.781 1 0) ((bruijn ##.assv.79 28 6) (bruijn ##.%k.435 0 0) (bruijn ##.x.200 2 0) (bruijn ##.labels.128 25 0)) ((bruijn ##.%k.435 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 6)), 3,
      _var0,
      statics->up->vars[0],
      VGetArg(statics, 25-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.786 1 0) (basic-block 1 1 (##.%r.787) ((##vcore.>= (bruijn ##.x.200 6 0) 0)) ((bruijn ##.%k.433 1 0) (bruijn ##.%r.787 0 0))) ((bruijn ##.%k.433 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.431 0 0) ((bruijn ##.%k.427 7 0) (bruijn ##.expr.142 27 1)) ((bruijn ##.error.75 31 2) (bruijn ##.%k.427 7 0) (##string ##.string.947) (bruijn ##.x.200 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 27-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 2)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D947.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.65.201 0 0) (basic-block 3 3 (##.%x.782 ##.%x.783 ##.%r.784) ((##vcore.cdr (bruijn ##.x.65.201 1 0)) (##vcore.cons (bruijn ##.%x.782 0 0) '()) (##vcore.cons 'foreign-function (bruijn ##.%x.783 0 1))) ((bruijn ##.%k.427 5 0) (bruijn ##.%r.784 0 2))) (basic-block 1 1 (##.%p.785) ((##vcore.symbol? (bruijn ##.x.200 3 0))) (if (bruijn ##.%p.785 0 0) ((bruijn ##.error.75 29 2) (bruijn ##.%k.427 5 0) (##string ##.string.945) (bruijn ##.x.200 3 0)) (basic-block 1 1 (##.%p.786) ((##vcore.int? (bruijn ##.x.200 4 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k116) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k117))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0foreign__function,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[2]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 2)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D945.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k117, self)))));
    }
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.781) ((##vcore.symbol? (bruijn ##.x.200 1 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k114) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k115)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k114, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k115, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k113) (bruijn ##.%x.436 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k113, self)))),
      _var0);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.sprintf.77 24 4) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k112) (##string ##.string.948) (bruijn ##.x.778 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k112, self)))),
      VEncodePointer(&_V10_Dstring_D948.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.423 0 0) (basic-block 2 2 (##.expr.36.776 ##.%p.777) ((##vcore.cdr (bruijn ##.expr.142 18 1)) (##vcore.pair? (bruijn ##.expr.36.776 0 0))) (if (bruijn ##.%p.777 0 1) (basic-block 3 3 (##.x.778 ##.%x.779 ##.%p.780) ((##vcore.car (bruijn ##.expr.36.776 1 0)) (##vcore.cdr (bruijn ##.expr.36.776 1 0)) (##vcore.null? (bruijn ##.%x.779 0 1))) (if (bruijn ##.%p.780 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k111) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda23) (bruijn ##.kk.6.144 18 1)) ((bruijn ##.%k.422 4 0) #f))) ((bruijn ##.%k.422 3 0) #f))) ((bruijn ##.%k.422 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k111, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda23, self)))),
      VGetArg(statics, 18-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.683 1 0) (basic-block 1 1 (##.%x.775) ((##vcore.car (bruijn ##.expr.142 16 1))) ((bruijn ##.equal?.74 20 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k110) 'foreign-function (bruijn ##.%x.775 0 0))) ((bruijn ##.%k.422 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k110, self)))),
      _V0foreign__function,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.406 0 0) (bruijn ##.%k.401 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.767 1 0) ((bruijn ##.assv.79 29 6) (bruijn ##.%k.417 0 0) (bruijn ##.x.762 4 0) (bruijn ##.labels.128 26 0)) ((bruijn ##.%k.417 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 6)), 3,
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 26-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.773 1 0) (basic-block 1 1 (##.%r.774) ((##vcore.>= (bruijn ##.x.762 8 0) 0)) ((bruijn ##.%k.415 1 0) (bruijn ##.%r.774 0 0))) ((bruijn ##.%k.415 0 0) #f))
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.413 0 0) ((bruijn ##.%k.407 6 0) (bruijn ##.expr.142 28 1)) ((bruijn ##.error.75 32 2) (bruijn ##.%k.407 6 0) (##string ##.string.951) (bruijn ##.x.762 7 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 28-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 2)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D951.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.66.208 0 0) (basic-block 4 4 (##.%x.768 ##.%x.769 ##.%x.770 ##.%r.771) ((##vcore.cdr (bruijn ##.x.66.208 1 0)) (##vcore.cons (bruijn ##.%x.768 0 0) '()) (##vcore.cons (bruijn ##.name.759 6 0) (bruijn ##.%x.769 0 1)) (##vcore.cons 'declare (bruijn ##.%x.770 0 2))) ((bruijn ##.%k.407 4 0) (bruijn ##.%r.771 0 3))) (basic-block 1 1 (##.%p.772) ((##vcore.symbol? (bruijn ##.x.762 5 0))) (if (bruijn ##.%p.772 0 0) ((bruijn ##.error.75 30 2) (bruijn ##.%k.407 4 0) (##string ##.string.950) (bruijn ##.x.762 5 0)) (basic-block 1 1 (##.%p.773) ((##vcore.int? (bruijn ##.x.762 6 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k124) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k125))))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0declare,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[3]);
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 2)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D950.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k124, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k125, self)))));
    }
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.765 ##.%p.766) ((##vcore.string? (bruijn ##.name.759 3 0)) (##vcore.not (bruijn ##.%x.765 0 0))) (if (bruijn ##.%p.766 0 1) ((bruijn ##.error.75 27 2) (bruijn ##.%k.407 1 0) (##string ##.string.949) (bruijn ##.x.762 2 0)) (basic-block 1 1 (##.%p.767) ((##vcore.symbol? (bruijn ##.x.762 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k122) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k123)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 2)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D949.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k122, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k123, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.402 0 0) (basic-block 2 2 (##.expr.38.757 ##.%p.758) ((##vcore.cdr (bruijn ##.expr.142 19 1)) (##vcore.pair? (bruijn ##.expr.38.757 0 0))) (if (bruijn ##.%p.758 0 1) (basic-block 3 3 (##.name.759 ##.expr.39.760 ##.%p.761) ((##vcore.car (bruijn ##.expr.38.757 1 0)) (##vcore.cdr (bruijn ##.expr.38.757 1 0)) (##vcore.pair? (bruijn ##.expr.39.760 0 1))) (if (bruijn ##.%p.761 0 2) (basic-block 3 3 (##.x.762 ##.%x.763 ##.%p.764) ((##vcore.car (bruijn ##.expr.39.760 1 1)) (##vcore.cdr (bruijn ##.expr.39.760 1 1)) (##vcore.null? (bruijn ##.%x.763 0 1))) (if (bruijn ##.%p.764 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k121) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda24) (bruijn ##.kk.6.144 20 1)) ((bruijn ##.%k.401 5 0) #f))) ((bruijn ##.%k.401 4 0) #f))) ((bruijn ##.%k.401 3 0) #f))) ((bruijn ##.%k.401 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k121, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda24, self)))),
      VGetArg(statics, 20-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.684 1 0) (basic-block 1 1 (##.%x.756) ((##vcore.car (bruijn ##.expr.142 17 1))) ((bruijn ##.equal?.74 21 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k120) 'declare (bruijn ##.%x.756 0 0))) ((bruijn ##.%k.401 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k120, self)))),
      _V0declare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.386 0 0) (bruijn ##.%k.380 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.387 0 0) (bruijn ##.expr.142 26 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 26-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.750) ((##vcore.null? (bruijn ##.tail-expr.224 1 0))) (if (bruijn ##.%p.750 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k129) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda26) (bruijn ##.kk.6.144 24 1)) ((bruijn ##.%k.380 8 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k129, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda26, self)))),
      VGetArg(statics, 24-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.46.218 5 1) (bruijn ##.%k.396 1 0) (bruijn ##.expr.48.220 3 1) (bruijn ##.%x.397 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.752 1 1) ((bruijn ##.reverse.78 32 5) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k131) (bruijn ##.args.45.221 2 2)) ((bruijn ##.%k.396 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k131, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.46.218 7 1) (bruijn ##.%k.391 2 0) (bruijn ##.expr.48.220 5 1) (bruijn ##.%x.392 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k133(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.78 34 5) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k134) (bruijn ##.args.45.221 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k134, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.args.753 ##.%x.754 ##.%x.755) ((##vcore.car (bruijn ##.expr.48.220 4 1)) (##vcore.cdr (bruijn ##.expr.48.220 4 1)) (##vcore.cons (bruijn ##.args.753 0 0) (bruijn ##.args.45.221 4 2))) ((bruijn ##.kk.47.222 1 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k133) (bruijn ##.%x.754 0 1) (bruijn ##.%x.755 0 2)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k133, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.390 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0lambda29, self)))));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k132(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.389 1 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0lambda28) (bruijn ##.loop.219 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0lambda28, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.751 ##.%p.752) ((##vcore.pair? (bruijn ##.expr.48.220 1 1)) (##vcore.not (bruijn ##.%x.751 0 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k130) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k132)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k130, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219_V0k132, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219")) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-expr.130 ##.loop.219) #f (bruijn ##.loop.219 0 0) (bruijn ##.%k.388 1 0) (bruijn ##.expr.44.749 2 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219, self))));
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
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V10_Dloop_D219(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.381 0 0) (basic-block 2 2 (##.expr.41.740 ##.%p.741) ((##vcore.cdr (bruijn ##.expr.142 20 1)) (##vcore.pair? (bruijn ##.expr.41.740 0 0))) (if (bruijn ##.%p.741 0 1) (basic-block 3 3 (##.lang.742 ##.expr.42.743 ##.%p.744) ((##vcore.car (bruijn ##.expr.41.740 1 0)) (##vcore.cdr (bruijn ##.expr.41.740 1 0)) (##vcore.pair? (bruijn ##.expr.42.743 0 1))) (if (bruijn ##.%p.744 0 2) (basic-block 3 3 (##.ret.745 ##.expr.43.746 ##.%p.747) ((##vcore.car (bruijn ##.expr.42.743 1 1)) (##vcore.cdr (bruijn ##.expr.42.743 1 1)) (##vcore.pair? (bruijn ##.expr.43.746 0 1))) (if (bruijn ##.%p.747 0 2) (basic-block 2 2 (##.name.748 ##.expr.44.749) ((##vcore.car (bruijn ##.expr.43.746 1 1)) (##vcore.cdr (bruijn ##.expr.43.746 1 1))) (##vcore.call/cc (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda25) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda27))) ((bruijn ##.%k.380 5 0) #f))) ((bruijn ##.%k.380 4 0) #f))) ((bruijn ##.%k.380 3 0) #f))) ((bruijn ##.%k.380 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 20-1, 1));
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda25, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda27, self)))));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.685 1 0) (basic-block 1 1 (##.%x.739) ((##vcore.car (bruijn ##.expr.142 18 1))) ((bruijn ##.equal?.74 22 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k128) 'declare-foreign (bruijn ##.%x.739 0 0))) ((bruijn ##.%k.380 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k128, self)))),
      _V0declare__foreign,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.375 0 0) (bruijn ##.%k.367 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.376 0 0) (bruijn ##.expr.142 27 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 27-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.368 0 0) (basic-block 2 2 (##.expr.50.722 ##.%p.723) ((##vcore.cdr (bruijn ##.expr.142 21 1)) (##vcore.pair? (bruijn ##.expr.50.722 0 0))) (if (bruijn ##.%p.723 0 1) (basic-block 3 3 (##.lang.724 ##.expr.51.725 ##.%p.726) ((##vcore.car (bruijn ##.expr.50.722 1 0)) (##vcore.cdr (bruijn ##.expr.50.722 1 0)) (##vcore.pair? (bruijn ##.expr.51.725 0 1))) (if (bruijn ##.%p.726 0 2) (basic-block 3 3 (##.enc.727 ##.expr.52.728 ##.%p.729) ((##vcore.car (bruijn ##.expr.51.725 1 1)) (##vcore.cdr (bruijn ##.expr.51.725 1 1)) (##vcore.pair? (bruijn ##.expr.52.728 0 1))) (if (bruijn ##.%p.729 0 2) (basic-block 3 3 (##.dec.730 ##.expr.53.731 ##.%p.732) ((##vcore.car (bruijn ##.expr.52.728 1 1)) (##vcore.cdr (bruijn ##.expr.52.728 1 1)) (##vcore.pair? (bruijn ##.expr.53.731 0 1))) (if (bruijn ##.%p.732 0 2) (basic-block 3 3 (##.name.733 ##.expr.54.734 ##.%p.735) ((##vcore.car (bruijn ##.expr.53.731 1 1)) (##vcore.cdr (bruijn ##.expr.53.731 1 1)) (##vcore.pair? (bruijn ##.expr.54.734 0 1))) (if (bruijn ##.%p.735 0 2) (basic-block 3 3 (##.const?.736 ##.%x.737 ##.%p.738) ((##vcore.car (bruijn ##.expr.54.734 1 1)) (##vcore.cdr (bruijn ##.expr.54.734 1 1)) (##vcore.null? (bruijn ##.%x.737 0 1))) (if (bruijn ##.%p.738 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k138) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda30) (bruijn ##.kk.6.144 25 1)) ((bruijn ##.%k.367 8 0) #f))) ((bruijn ##.%k.367 7 0) #f))) ((bruijn ##.%k.367 6 0) #f))) ((bruijn ##.%k.367 5 0) #f))) ((bruijn ##.%k.367 4 0) #f))) ((bruijn ##.%k.367 3 0) #f))) ((bruijn ##.%k.367 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 21-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k138, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda30, self)))),
      VGetArg(statics, 25-1, 1));
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
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.686 1 0) (basic-block 1 1 (##.%x.721) ((##vcore.car (bruijn ##.expr.142 19 1))) ((bruijn ##.equal?.74 23 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k137) 'declare-foreign-variable (bruijn ##.%x.721 0 0))) ((bruijn ##.%k.367 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k137, self)))),
      _V0declare__foreign__variable,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.362 0 0) (bruijn ##.%k.359 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.363 0 0) (bruijn ##.expr.142 23 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 23-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.360 0 0) (basic-block 2 2 (##.%x.719 ##.%p.720) ((##vcore.cdr (bruijn ##.expr.142 22 1)) (##vcore.null? (bruijn ##.%x.719 0 0))) (if (bruijn ##.%p.720 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k142) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda31) (bruijn ##.kk.6.144 21 1)) ((bruijn ##.%k.359 3 0) #f))) ((bruijn ##.%k.359 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 22-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k142, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda31, self)))),
      VGetArg(statics, 21-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.687 1 0) (basic-block 1 1 (##.%x.718) ((##vcore.car (bruijn ##.expr.142 20 1))) ((bruijn ##.equal?.74 24 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k141) 'push-set! (bruijn ##.%x.718 0 0))) ((bruijn ##.%k.359 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 20-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k141, self)))),
      _V0push__set_B,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.347 0 0) (bruijn ##.%k.343 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.712 1 0) ((bruijn ##.assv.79 32 6) (bruijn ##.%k.355 0 0) (bruijn ##.x.708 4 0) (bruijn ##.labels.128 29 0)) ((bruijn ##.%k.355 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 6)), 3,
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 29-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.67.241 0 0) (basic-block 4 4 (##.%x.713 ##.%x.714 ##.%x.715 ##.%r.716) ((##vcore.cdr (bruijn ##.x.67.241 1 0)) (##vcore.- (bruijn ##.%x.713 0 0) (bruijn ##.pc.143 29 2) 1) (##vcore.cons (bruijn ##.%x.714 0 1) '()) (##vcore.cons 'bf (bruijn ##.%x.715 0 2))) ((bruijn ##.%k.348 4 0) (bruijn ##.%r.716 0 3))) (basic-block 1 1 (##.%p.717) ((##vcore.symbol? (bruijn ##.x.708 5 0))) (if (bruijn ##.%p.717 0 0) ((bruijn ##.error.75 33 2) (bruijn ##.%k.348 4 0) (##string ##.string.952) (bruijn ##.x.708 5 0)) ((bruijn ##.error.75 33 2) (bruijn ##.%k.348 4 0) (##string ##.string.953) (bruijn ##.x.708 5 0)))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 29-1, 2),
      VEncodeInt(1l));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0bf,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[3]);
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 2)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D952.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 2)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D953.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
}
    }
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.711) ((##vcore.int? (bruijn ##.x.708 2 0))) (if (bruijn ##.%p.711 0 0) ((bruijn ##.%k.348 1 0) (bruijn ##.expr.142 26 1)) (basic-block 1 1 (##.%p.712) ((##vcore.symbol? (bruijn ##.x.708 3 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k147) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k148)))))
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
      VGetArg(statics, 26-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k147, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k148, self)))));
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.344 0 0) (basic-block 2 2 (##.expr.57.706 ##.%p.707) ((##vcore.cdr (bruijn ##.expr.142 23 1)) (##vcore.pair? (bruijn ##.expr.57.706 0 0))) (if (bruijn ##.%p.707 0 1) (basic-block 3 3 (##.x.708 ##.%x.709 ##.%p.710) ((##vcore.car (bruijn ##.expr.57.706 1 0)) (##vcore.cdr (bruijn ##.expr.57.706 1 0)) (##vcore.null? (bruijn ##.%x.709 0 1))) (if (bruijn ##.%p.710 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k146) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda32) (bruijn ##.kk.6.144 23 1)) ((bruijn ##.%k.343 4 0) #f))) ((bruijn ##.%k.343 3 0) #f))) ((bruijn ##.%k.343 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 23-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k146, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda32, self)))),
      VGetArg(statics, 23-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.688 1 0) (basic-block 1 1 (##.%x.705) ((##vcore.car (bruijn ##.expr.142 21 1))) ((bruijn ##.equal?.74 25 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k145) 'bf (bruijn ##.%x.705 0 0))) ((bruijn ##.%k.343 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 21-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k145, self)))),
      _V0bf,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.332 0 0) (bruijn ##.%k.329 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.699 1 0) (basic-block 1 1 (##.%p.700) ((##vcore.>= (bruijn ##.x.697 4 0) 0)) (if (bruijn ##.%p.700 0 0) (basic-block 1 1 (##.%p.701) ((##vcore.null? (bruijn ##.name.698 5 1))) (if (bruijn ##.%p.701 0 0) ((bruijn ##.%k.336 2 0) (bruijn ##.%p.701 0 0)) (basic-block 1 1 (##.%p.702) ((##vcore.pair? (bruijn ##.name.698 6 1))) (if (bruijn ##.%p.702 0 0) (basic-block 2 2 (##.%x.703 ##.%r.704) ((##vcore.car (bruijn ##.name.698 7 1)) (##vcore.string? (bruijn ##.%x.703 0 0))) ((bruijn ##.%k.336 4 0) (bruijn ##.%r.704 0 1))) ((bruijn ##.%k.336 3 0) #f))))) ((bruijn ##.%k.336 1 0) #f))) ((bruijn ##.%k.336 0 0) #f))
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
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.334 0 0) ((bruijn ##.%k.333 2 0) (bruijn ##.expr.142 28 1)) ((bruijn ##.error.75 32 2) (bruijn ##.%k.333 2 0) (##string ##.string.954) (bruijn ##.expr.142 28 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 28-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 2)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D954.sym, VPOINTER_OTHER),
      VGetArg(statics, 28-1, 1));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.699) ((##vcore.int? (bruijn ##.x.697 2 0))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k153) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k154)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k153, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k154, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.330 0 0) (basic-block 2 2 (##.expr.59.695 ##.%p.696) ((##vcore.cdr (bruijn ##.expr.142 24 1)) (##vcore.pair? (bruijn ##.expr.59.695 0 0))) (if (bruijn ##.%p.696 0 1) (basic-block 2 2 (##.x.697 ##.name.698) ((##vcore.car (bruijn ##.expr.59.695 1 0)) (##vcore.cdr (bruijn ##.expr.59.695 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k152) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda33) (bruijn ##.kk.6.144 24 1))) ((bruijn ##.%k.329 3 0) #f))) ((bruijn ##.%k.329 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 24-1, 1));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k152, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda33, self)))),
      VGetArg(statics, 24-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.689 1 0) (basic-block 1 1 (##.%x.694) ((##vcore.car (bruijn ##.expr.142 22 1))) ((bruijn ##.equal?.74 26 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k151) 'letrec-begin (bruijn ##.%x.694 0 0))) ((bruijn ##.%k.329 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 22-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k151, self)))),
      _V0letrec__begin,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.324 0 0) (bruijn ##.%k.321 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.325 0 0) (bruijn ##.expr.142 26 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 26-1, 1));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.322 0 0) (basic-block 2 2 (##.%x.692 ##.%p.693) ((##vcore.cdr (bruijn ##.expr.142 25 1)) (##vcore.null? (bruijn ##.%x.692 0 0))) (if (bruijn ##.%p.693 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k158) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda34) (bruijn ##.kk.6.144 24 1)) ((bruijn ##.%k.321 3 0) #f))) ((bruijn ##.%k.321 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 25-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k158, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda34, self)))),
      VGetArg(statics, 24-1, 1));
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
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.690 1 0) (basic-block 1 1 (##.%x.691) ((##vcore.car (bruijn ##.expr.142 23 1))) ((bruijn ##.equal?.74 27 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k157) 'letrec-end (bruijn ##.%x.691 0 0))) ((bruijn ##.%k.321 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 23-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k157, self)))),
      _V0letrec__end,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.75 26 2) (bruijn ##.%k.319 0 0) (##string ##.string.955) (bruijn ##.expr.142 22 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 2)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D955.sym, VPOINTER_OTHER),
      VGetArg(statics, 22-1, 1));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k159(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.318 20 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda35) (bruijn ##.kk.6.144 20 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 20-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda35, self)))),
      VGetArg(statics, 20-1, 1));
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k155(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.690) ((##vcore.pair? (bruijn ##.expr.142 21 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k156) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k159)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 21-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k156, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k159, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k149(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.689) ((##vcore.pair? (bruijn ##.expr.142 20 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k150) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k155)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 20-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k150, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k155, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k143(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.688) ((##vcore.pair? (bruijn ##.expr.142 19 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k144) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k149)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k144, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k149, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.687) ((##vcore.pair? (bruijn ##.expr.142 18 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k140) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k143)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 18-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k143, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k135(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.686) ((##vcore.pair? (bruijn ##.expr.142 17 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k136) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k139)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 17-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k136, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k139, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k126(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.685) ((##vcore.pair? (bruijn ##.expr.142 16 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k127) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k135)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k127, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k135, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k118(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.684) ((##vcore.pair? (bruijn ##.expr.142 15 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k119) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k126)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k126, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k108(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.683) ((##vcore.pair? (bruijn ##.expr.142 14 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k109) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k118)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k109, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k118, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.682) ((##vcore.pair? (bruijn ##.expr.142 13 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k95) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k108)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k108, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.681) ((##vcore.pair? (bruijn ##.expr.142 12 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k91) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k94)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k94, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k80(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.680) ((##vcore.pair? (bruijn ##.expr.142 11 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k81) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k90)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k90, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k70(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.679) ((##vcore.pair? (bruijn ##.expr.142 10 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k71) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k80)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k71, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k80, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.678) ((##vcore.pair? (bruijn ##.expr.142 9 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k65) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k70)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k65, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k70, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.677) ((##vcore.pair? (bruijn ##.expr.142 8 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k59) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k64)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k59, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k64, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k52(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.676) ((##vcore.pair? (bruijn ##.expr.142 7 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k53) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k58)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k53, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k58, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k48(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.675) ((##vcore.pair? (bruijn ##.expr.142 6 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k49) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k52)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k49, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k52, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.674) ((##vcore.pair? (bruijn ##.expr.142 5 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k43) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k48)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k48, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k36(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.673) ((##vcore.pair? (bruijn ##.expr.142 4 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k37) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k42)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k37, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k42, self)))));
    }
}
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.672) ((##vcore.pair? (bruijn ##.expr.142 3 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k33) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k36)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k33, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k36, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.671) ((##vcore.pair? (bruijn ##.expr.142 2 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k29) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k32)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0k32, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.317 0 0) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda10))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130_V0lambda10, self)))));
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.925 1 2) (##vcore.vector-set! (bruijn ##.%k.615 0 0) (bruijn ##.tape.250 5 1) (bruijn ##.pc.251 5 2) (bruijn ##.e.252 2 0)) ((bruijn ##.%k.615 0 0) #f))
if(VDecodeBool(
statics->vars[2])) {
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
static void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249_V0k162(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.926) ((##vcore.+ (bruijn ##.pc.251 5 2) 1)) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-loop.249) #f (bruijn ##.preprocess-loop.249 6 0) (bruijn ##.%k.611 5 0) (bruijn ##.tape.250 5 1) (bruijn ##.%x.926 0 0)))
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
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.923 ##.%x.924 ##.%p.925) ((##vcore.vector-ref (bruijn ##.tape.250 4 1) (bruijn ##.pc.251 4 2)) (##vcore.eq? (bruijn ##.e.252 1 0) (bruijn ##.%x.923 0 0)) (##vcore.not (bruijn ##.%x.924 0 1))) ((close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249_V0k161) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249_V0k162)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VNot2(runtime, NULL,
      self->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249_V0k161, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249_V0k162, self)))));
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.921) ((##vcore.>= (bruijn ##.pc.251 1 2) (bruijn ##.len.920 3 0))) (if (bruijn ##.%p.921 0 0) ((bruijn ##.%k.611 1 0) (bruijn ##.tape.250 1 1)) (basic-block 1 1 (##.%x.922) ((##vcore.vector-ref (bruijn ##.tape.250 2 1) (bruijn ##.pc.251 2 2))) (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-expr.130) #f (bruijn ##.preprocess-expr.130 5 2) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249_V0k160) (bruijn ##.%x.922 0 0) (bruijn ##.pc.251 2 2)))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249_V0k160, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity bytecode preprocess-vasm ##.preprocess-loop.249) #f (bruijn ##.preprocess-loop.249 1 0) (bruijn ##.%k.292 4 0) (bruijn ##.%x.619 0 0) 0)
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
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
  // (letrec 3 ('() (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129") (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130")) (basic-block 1 1 (##.len.920) ((##vcore.vector-length (bruijn ##.tape.127 2 1))) (letrec 1 ((close "_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249")) (##qualified-call (vanity bytecode preprocess-vasm ##.peel-labels.129) #f (bruijn ##.peel-labels.129 2 1) (close _V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k163) (bruijn ##.tape.127 3 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VNULL;
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__expr_D130, self))));
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpreprocess__loop_D249, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0bytecode_V0preprocess__vasm_V0k163, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0bytecode_V0preprocess__vasm_V10_Dpeel__labels_D129(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
    }
}
static void _V0vanity_V0bytecode_V20_V0k167(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.927 ##.%r.928) ((##vcore.cons 'eval-vasm (bruijn ##.eval-vasm.100 3 0)) (##vcore.cons (bruijn ##.%x.927 0 0) '())) ((bruijn ##.%k.254 9 0) (bruijn ##.%r.928 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0eval__vasm,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[1]);
    }
}
static void _V0vanity_V0bytecode_V20_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0bytecode_V20_V0k167) (bruijn ##.eval-vasm-toplevel.103 2 3) (bruijn ##.%x.621 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k167, self)))),
      VEncodeInt(2l), VEncodeInt(3l),
      _var0
    );
}
static void _V0vanity_V0bytecode_V20_V0k165(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.function (close _V0vanity_V0bytecode_V20_V0k166) (##string ##.string.956))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k166, self)))),
      VEncodePointer(&_V10_Dstring_D956.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0bytecode_V20_V0k165) (bruijn ##.make-vasm-lambda.104 1 4) (bruijn ##.%x.622 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k165, self)))),
      VEncodeInt(1l), VEncodeInt(4l),
      _var0
    );
}
static void _V0vanity_V0bytecode_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 if(argc != 7) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_V0lambda2, got ~D~N"
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
  // (##letrec (vanity bytecode) 7 ((close "_V50_V0vanity_V0bytecode_V0eval__vasm" (vanity bytecode)) (close "_V50_V0vanity_V0bytecode_V0find__toplevel" (vanity bytecode)) (close "_V50_V0vanity_V0bytecode_V0set__declares_B" (vanity bytecode)) #f #f (close "_V50_V0vanity_V0bytecode_V0find__declare" (vanity bytecode)) (close "_V50_V0vanity_V0bytecode_V0preprocess__vasm" (vanity bytecode))) (##vcore.function (close _V0vanity_V0bytecode_V20_V0k164) (##string ##.string.957)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k164, self)))),
      VEncodePointer(&_V10_Dstring_D957.sym, VPOINTER_OTHER));
    }
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
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0bytecode_V20_V0lambda2) (##string ##.string.958) (bruijn ##.%x.623 0 0) 'values 'equal? 'error 'lookup-intrinsic 'sprintf 'reverse 'assv)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 10,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D958.sym, VPOINTER_OTHER),
      _var0,
      _V0values,
      _V0equal_Q,
      _V0error,
      _V0lookup__intrinsic,
      _V0sprintf,
      _V0reverse,
      _V0assv);
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
  // (##vcore.vector (close _V0vanity_V0bytecode_V20_V0k4) (bruijn ##.%x.624 2 0) (bruijn ##.%x.625 1 0) (bruijn ##.%x.626 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k4, self)))),
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
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k3) (##string ##.string.959))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D959.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k2) (##string ##.string.960))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D960.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_V0k1) (##string ##.string.961))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D961.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0bytecode_V20 = (VFunc)_V0vanity_V0bytecode_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VInternSymbol(1810441535, &_VW_V0lookup__intrinsic.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0eval__vasm = VEncodePointer(VInternSymbol(-229856296, &_VW_V0eval__vasm.sym), VPOINTER_OTHER);
  _V0letrec__end = VEncodePointer(VInternSymbol(1680038956, &_VW_V0letrec__end.sym), VPOINTER_OTHER);
  _V0letrec__begin = VEncodePointer(VInternSymbol(1445174670, &_VW_V0letrec__begin.sym), VPOINTER_OTHER);
  _V0bf = VEncodePointer(VInternSymbol(1139667182, &_VW_V0bf.sym), VPOINTER_OTHER);
  _V0push__set_B = VEncodePointer(VInternSymbol(1593164417, &_VW_V0push__set_B.sym), VPOINTER_OTHER);
  _V0declare__foreign__variable = VEncodePointer(VInternSymbol(2009872289, &_VW_V0declare__foreign__variable.sym), VPOINTER_OTHER);
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
  _V40VFunction3 = VEncodePointer(VLookupConstant("_V40VFunction3", &_VW_V40VFunction3), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
