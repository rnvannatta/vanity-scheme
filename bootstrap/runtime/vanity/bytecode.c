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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D498 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D497 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D496 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D495 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_V0vanity_V0bytecode_V20" };
VWEAK VWORD _V0read;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0read = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "read" };
VWEAK VWORD _V0eof__object_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0eof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "eof-object\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0integer_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "integer\?" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0vector__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "vector-set!" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0_G_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, ">=" };
VWEAK VWORD _V0vector__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vector-length" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0vector__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-ref" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D494 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEvalVasmToplevel" };
VWEAK VWORD _V0eval__vasm;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0eval__vasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "eval-vasm" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D493 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm: unknown or malformed line" };
VWEAK VWORD _V0letrec__end;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0letrec__end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "letrec-end" };
VWEAK VWORD _V0letrec__begin;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0letrec__begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "letrec-begin" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D492 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm letrec-begin an integer" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D491 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "vasm bf: not an integer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D490 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "vasm bf: unknown label" };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
VWEAK VWORD _V0push__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0push__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "push-set!" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D489 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "vasm close: not a nonnegative integer" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
VWEAK VWORD _V0case__lambda__error;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0case__lambda__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "case-lambda-error" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D488 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "vasm case-lambda+: not an integer" };
VWEAK VWORD _V0case__lambda_P;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0case__lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "case-lambda+" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D487 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "vasm case-lambda+: not a nonnegative integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D486 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda: not an integer" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D485 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm close: unknown label" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D484 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "vasm case-lambda: not a nonnegative integer" };
VWEAK VWORD _V0lambda_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "lambda+" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D483 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm lambda+: not a nonnegative integer" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D482 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vasm lambda: not a nonnegative integer" };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D481 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "vasm call: not a nonnegative integer" };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D480 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm lookup: not a symbol" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D479 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm bruijn: not both nonnegative integers" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D478 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm intrinsic: not a recognized intrinsic" };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D477 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm intrinsic: not a symbol" };
VWEAK VWORD _V0push;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0push = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "push" };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D476 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm label: label declared twice" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D475 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "vasm label: not a symbol" };
static __attribute__((constructor)) void VDllMain1() {
  _V0read = VEncodePointer(VLookupConstant("_V0read", &_VW_V0read), VPOINTER_OTHER);
  _V0eof__object_Q = VEncodePointer(VLookupConstant("_V0eof__object_Q", &_VW_V0eof__object_Q), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0integer_Q = VEncodePointer(VLookupConstant("_V0integer_Q", &_VW_V0integer_Q), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VLookupConstant("_V0lookup__intrinsic", &_VW_V0lookup__intrinsic), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0vector__set_B = VEncodePointer(VLookupConstant("_V0vector__set_B", &_VW_V0vector__set_B), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0_G_E = VEncodePointer(VLookupConstant("_V0_G_E", &_VW_V0_G_E), VPOINTER_OTHER);
  _V0vector__length = VEncodePointer(VLookupConstant("_V0vector__length", &_VW_V0vector__length), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0vector__ref = VEncodePointer(VLookupConstant("_V0vector__ref", &_VW_V0vector__ref), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0apply = VEncodePointer(VLookupConstant("_V0apply", &_VW_V0apply), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0eval__vasm = VEncodePointer(VLookupConstant("_V0eval__vasm", &_VW_V0eval__vasm), VPOINTER_OTHER);
  _V0letrec__end = VEncodePointer(VLookupConstant("_V0letrec__end", &_VW_V0letrec__end), VPOINTER_OTHER);
  _V0letrec__begin = VEncodePointer(VLookupConstant("_V0letrec__begin", &_VW_V0letrec__begin), VPOINTER_OTHER);
  _V0bf = VEncodePointer(VLookupConstant("_V0bf", &_VW_V0bf), VPOINTER_OTHER);
  _V0push__set_B = VEncodePointer(VLookupConstant("_V0push__set_B", &_VW_V0push__set_B), VPOINTER_OTHER);
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
static void _V10_Dloop_D76_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D76_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D76_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D76_k32, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.57 8 11) (bruijn ##.k.196 3 0) (bruijn ##.expr.77 2 0) (bruijn ##.x.198 0 0))
    V_CALL(VGetArg(upenv, 8-1, 11), runtime,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D76_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D76_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D76_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D76_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.197 0 0) ((bruijn ##.k.196 2 0) '()) ((bruijn ##.loop.76 3 0) (close _V10_Dloop_D76_k32)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D76_k32, env)}));
}
 }
}
static void _V10_Dloop_D76_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D76_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D76_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D76_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eof-object?.47 6 1) (close _V10_Dloop_D76_k31) (bruijn ##.expr.77 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D76_k31, env)}),
      _var0);
 }
}
static void _V10_Dloop_D76_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D76_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D76_lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D76_lambda4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.read.46 5 0) (close _V10_Dloop_D76_k30) (bruijn ##.port.75 2 1))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D76_k30, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dload__all_D70_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dload__all_D70_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__all_D70_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__all_D70_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D76_lambda4)) ((bruijn ##.loop.76 0 0) (bruijn ##.k.195 1 0)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D76_lambda4, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0]);
    }
 }
}
static void _V10_Dloop_D84_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k42, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.223 1 0) ((bruijn ##.error.48 19 2) (bruijn ##.k.224 0 0) (##string ##.string.475) (bruijn ##.label.90 4 0)) ((bruijn ##.k.224 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D475.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D84_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k45, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.221 1 0) ((bruijn ##.error.48 21 2) (bruijn ##.k.222 0 0) (##string ##.string.476) (bruijn ##.label.90 6 0)) ((bruijn ##.k.222 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D476.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D84_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.86 17 1) (bruijn ##.k.208 15 0) (bruijn ##.x.213 0 0))
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 15-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D84_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.84 19 0) (close _V10_Dloop_D84_k52) (bruijn ##.x.218 0 0))
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k52, env)}),
      _var0);
 }
}
static void _V10_Dloop_D84_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.66 25 20) (close _V10_Dloop_D84_k51) (bruijn ##.pc.85 17 1) 1)
    V_CALL(VGetArg(upenv, 25-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k51, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D84_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-set!.58 24 12) (close _V10_Dloop_D84_k50) (bruijn ##.tape.82 19 1) (bruijn ##.pc.85 16 1) (##inline ##vcore.car (bruijn ##.expr.4.91 8 0)))
    V_CALL(VGetArg(upenv, 24-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k50, env)}),
      VGetArg(upenv, 19-1, 1),
      VGetArg(upenv, 16-1, 1),
      VInlineCar2(runtime,
        VGetArg(upenv, 8-1, 0)));
 }
}
static void _V10_Dloop_D84_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dloop_D84_k49) (bruijn ##.labels.79 19 0) (bruijn ##.x.219 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k49, env)}),
      VEncodeInt(19l), VEncodeInt(0l),
      _var0
    );
 }
}
static void _V10_Dloop_D84_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.57 22 11) (close _V10_Dloop_D84_k48) (bruijn ##.x.220 0 0) (bruijn ##.labels.79 18 0))
    V_CALL(VGetArg(upenv, 22-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k48, env)}),
      _var0,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V10_Dloop_D84_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.57 21 11) (close _V10_Dloop_D84_k47) (bruijn ##.label.90 6 0) (bruijn ##.pc.85 13 1))
    V_CALL(VGetArg(upenv, 21-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k47, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V10_Dloop_D84_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D84_k45) (close _V10_Dloop_D84_k46))
    V_CALL_FUNC(_V10_Dloop_D84_k45, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k46, env)}));
 }
}
static void _V10_Dloop_D84_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assv.51 19 5) (close _V10_Dloop_D84_k44) (bruijn ##.label.90 4 0) (bruijn ##.labels.79 15 0))
    V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k44, env)}),
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 15-1, 0));
 }
}
static void _V10_Dloop_D84_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D84_k42) (close _V10_Dloop_D84_k43))
    V_CALL_FUNC(_V10_Dloop_D84_k42, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k43, env)}));
 }
}
static void _V10_Dloop_D84_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.59 17 13) (close _V10_Dloop_D84_k41) (bruijn ##.x.225 0 0))
    V_CALL(VGetArg(upenv, 17-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k41, env)}),
      _var0);
 }
}
static void _V10_Dloop_D84_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.91 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.4.91 0 0))) ((bruijn ##.symbol?.52 16 6) (close _V10_Dloop_D84_k40) (bruijn ##.label.90 1 0)) ((bruijn ##.k.208 4 0) #f)) ((bruijn ##.k.208 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k40, env)}),
      upenv->vars[0]);
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D84_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D84_k39) (##inline ##vcore.cdr (bruijn ##.expr.3.89 1 0)))
    V_CALL_FUNC(_V10_Dloop_D84_k39, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dloop_D84_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.89 0 0)) ((close _V10_Dloop_D84_k38) (##inline ##vcore.car (bruijn ##.expr.3.89 0 0))) ((bruijn ##.k.208 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dloop_D84_k38, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D84_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.209 0 0) ((close _V10_Dloop_D84_k37) (##inline ##vcore.cdr (bruijn ##.expr.2.88 2 0))) ((bruijn ##.k.208 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dloop_D84_k37, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D84_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.2.88 1 0)) ((bruijn ##.equal?.49 12 3) (close _V10_Dloop_D84_k36) 'label (##inline ##vcore.car (bruijn ##.expr.2.88 1 0))) ((bruijn ##.k.208 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k36, env)}),
      _V0label,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D84_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k55, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.86 4 1) (bruijn ##.k.203 4 0) (bruijn ##.x.205 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D84_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.84 6 0) (close _V10_Dloop_D84_k55) (bruijn ##.x.206 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k55, env)}),
      _var0);
 }
}
static void _V10_Dloop_D84_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.66 12 20) (close _V10_Dloop_D84_k54) (bruijn ##.pc.85 4 1) 1)
    V_CALL(VGetArg(upenv, 12-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k54, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D84_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_lambda9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D84_k35) (close _V10_Dloop_D84_k53))
    V_CALL_FUNC(_V10_Dloop_D84_k35, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k53, env)}));
 }
}
static void _V10_Dloop_D84_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.vector-ref.64 10 18) (close _V10_Dloop_D84_lambda9) (bruijn ##.tape.82 5 1) (bruijn ##.pc.85 2 1))
    V_CALL(VGetArg(upenv, 10-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_lambda9, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D84_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.202 0 0) ((bruijn ##.k.201 1 0) (bruijn ##.tape.82 4 1)) ((bruijn ##.call/cc.56 9 10) (bruijn ##.k.201 1 0) (close _V10_Dloop_D84_lambda8)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 9-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_lambda8, env)}));
}
 }
}
static void _V10_Dloop_D84_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D84_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.>=.61 8 15) (close _V10_Dloop_D84_k34) (bruijn ##.pc.85 0 1) (bruijn ##.len.83 2 0))
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_k34, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V10_Dpeel__labels_D80_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__labels_D80_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__labels_D80_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__labels_D80_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D84_lambda7)) ((bruijn ##.loop.84 0 0) (bruijn ##.k.200 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D84_lambda7, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dpeel__labels_D80_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpeel__labels_D80_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__labels_D80_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__labels_D80_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.vector-length.62 5 16) (close _V10_Dpeel__labels_D80_k33) (bruijn ##.tape.82 0 1))
    V_CALL(VGetArg(upenv, 5-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__labels_D80_k33, env)}),
      _var1);
 }
}
static void _V10_Dpreprocess__expr_D81_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k57, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.442 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.7.97 2 0))) ((bruijn ##.kk.5.95 4 1) (bruijn ##.k.441 1 0) (bruijn ##.expr.93 5 1)) ((bruijn ##.k.441 1 0) #f)) ((bruijn ##.k.441 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->vars[0])))) {
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.97 1 0)) ((bruijn ##.equal?.49 9 3) (close _V10_Dpreprocess__expr_D81_k57) 'toplevel (##inline ##vcore.car (bruijn ##.expr.7.97 1 0))) ((bruijn ##.k.441 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k57, env)}),
      _V0toplevel,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k61, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.99 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.9.99 0 0))) ((bruijn ##.kk.5.95 7 1) (bruijn ##.k.434 2 0) (bruijn ##.expr.93 8 1)) ((bruijn ##.k.434 2 0) #f)) ((bruijn ##.k.434 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.435 0 0) ((close _V10_Dpreprocess__expr_D81_k61) (##inline ##vcore.cdr (bruijn ##.expr.8.98 2 0))) ((bruijn ##.k.434 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k61, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.98 1 0)) ((bruijn ##.equal?.49 11 3) (close _V10_Dpreprocess__expr_D81_k60) 'push (##inline ##vcore.car (bruijn ##.expr.8.98 1 0))) ((bruijn ##.k.434 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k60, env)}),
      _V0push,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda16" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda16, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.428 2 0) (##inline ##vcore.cons 'intrinsic (##inline ##vcore.cons (bruijn ##.f.105 0 0) '())))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0intrinsic,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Dpreprocess__expr_D81_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.40.104 0 0) ((close _V10_Dpreprocess__expr_D81_lambda16) (bruijn ##.x.40.104 0 0)) ((bruijn ##.error.48 20 2) (bruijn ##.k.428 1 0) (##string ##.string.478) (bruijn ##.x.103 4 0)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda16, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D478.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.427 1 0) ((bruijn ##.error.48 19 2) (bruijn ##.k.428 0 0) (##string ##.string.477) (bruijn ##.x.103 3 0)) ((bruijn ##.lookup-intrinsic.55 19 9) (close _V10_Dpreprocess__expr_D81_k70) (bruijn ##.x.103 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D477.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k70, env)}),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k71, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 13 1) (bruijn ##.k.422 6 0) (bruijn ##.x.426 0 0))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k69) (close _V10_Dpreprocess__expr_D81_k71))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k69, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k71, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.59 17 13) (close _V10_Dpreprocess__expr_D81_k68) (bruijn ##.x.430 0 0))
    V_CALL(VGetArg(upenv, 17-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k68, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.102 1 0))) ((bruijn ##.symbol?.52 16 6) (close _V10_Dpreprocess__expr_D81_k67) (bruijn ##.x.103 0 0)) ((bruijn ##.k.422 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k67, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.102 0 0)) ((close _V10_Dpreprocess__expr_D81_k66) (##inline ##vcore.car (bruijn ##.expr.11.102 0 0))) ((bruijn ##.k.422 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k66, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.423 0 0) ((close _V10_Dpreprocess__expr_D81_k65) (##inline ##vcore.cdr (bruijn ##.expr.10.101 2 0))) ((bruijn ##.k.422 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k65, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.101 1 0)) ((bruijn ##.equal?.49 13 3) (close _V10_Dpreprocess__expr_D81_k64) 'intrinsic (##inline ##vcore.car (bruijn ##.expr.10.101 1 0))) ((bruijn ##.k.422 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 13-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k64, env)}),
      _V0intrinsic,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k82, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.418 0 0) ((bruijn ##.>=.61 24 15) (bruijn ##.k.416 2 0) (bruijn ##.right.110 4 0) 0) ((bruijn ##.k.416 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.417 0 0) ((bruijn ##.>=.61 23 15) (close _V10_Dpreprocess__expr_D81_k82) (bruijn ##.up.108 5 0) 0) ((bruijn ##.k.416 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k82, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(0l));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.415 1 0) ((bruijn ##.integer?.50 22 4) (close _V10_Dpreprocess__expr_D81_k81) (bruijn ##.right.110 2 0)) ((bruijn ##.k.416 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 22-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k81, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k84, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.413 1 0) ((bruijn ##.k.414 0 0) (bruijn ##.expr.93 18 1)) ((bruijn ##.error.48 23 2) (bruijn ##.k.414 0 0) (##string ##.string.479) (bruijn ##.up.108 5 0) (bruijn ##.right.110 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 18-1, 1));
} else {
    V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D479.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 17 1) (bruijn ##.k.407 8 0) (bruijn ##.x.412 0 0))
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k84) (close _V10_Dpreprocess__expr_D81_k85))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k84, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k85, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k80) (close _V10_Dpreprocess__expr_D81_k83))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k80, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k83, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.14.109 1 0))) ((bruijn ##.integer?.50 20 4) (close _V10_Dpreprocess__expr_D81_k79) (bruijn ##.up.108 2 0)) ((bruijn ##.k.407 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k79, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.109 0 0)) ((close _V10_Dpreprocess__expr_D81_k78) (##inline ##vcore.car (bruijn ##.expr.14.109 0 0))) ((bruijn ##.k.407 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k78, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k77) (##inline ##vcore.cdr (bruijn ##.expr.13.107 1 0)))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k77, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dpreprocess__expr_D81_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.107 0 0)) ((close _V10_Dpreprocess__expr_D81_k76) (##inline ##vcore.car (bruijn ##.expr.13.107 0 0))) ((bruijn ##.k.407 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k76, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.408 0 0) ((close _V10_Dpreprocess__expr_D81_k75) (##inline ##vcore.cdr (bruijn ##.expr.12.106 2 0))) ((bruijn ##.k.407 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k75, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.106 1 0)) ((bruijn ##.equal?.49 15 3) (close _V10_Dpreprocess__expr_D81_k74) 'bruijn (##inline ##vcore.car (bruijn ##.expr.12.106 1 0))) ((bruijn ##.k.407 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 15-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k74, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k92, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.402 1 0) ((bruijn ##.k.403 0 0) (bruijn ##.expr.93 17 1)) ((bruijn ##.error.48 22 2) (bruijn ##.k.403 0 0) (##string ##.string.480) (bruijn ##.x.113 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 17-1, 1));
} else {
    V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D480.sym, VPOINTER_OTHER),
      upenv->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k93, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 16 1) (bruijn ##.k.397 5 0) (bruijn ##.x.401 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k92) (close _V10_Dpreprocess__expr_D81_k93))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k92, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k93, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.16.112 1 0))) ((bruijn ##.symbol?.52 20 6) (close _V10_Dpreprocess__expr_D81_k91) (bruijn ##.x.113 0 0)) ((bruijn ##.k.397 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k91, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.112 0 0)) ((close _V10_Dpreprocess__expr_D81_k90) (##inline ##vcore.car (bruijn ##.expr.16.112 0 0))) ((bruijn ##.k.397 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k90, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.398 0 0) ((close _V10_Dpreprocess__expr_D81_k89) (##inline ##vcore.cdr (bruijn ##.expr.15.111 2 0))) ((bruijn ##.k.397 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k89, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.111 1 0)) ((bruijn ##.equal?.49 17 3) (close _V10_Dpreprocess__expr_D81_k88) 'lookup (##inline ##vcore.car (bruijn ##.expr.15.111 1 0))) ((bruijn ##.k.397 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 17-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k88, env)}),
      _V0lookup,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k100, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.392 1 0) ((bruijn ##.>=.61 24 15) (bruijn ##.k.393 0 0) (bruijn ##.x.116 2 0) 0) ((bruijn ##.k.393 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      _var0,
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k102, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.390 1 0) ((bruijn ##.k.391 0 0) (bruijn ##.expr.93 20 1)) ((bruijn ##.error.48 25 2) (bruijn ##.k.391 0 0) (##string ##.string.481) (bruijn ##.x.116 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 20-1, 1));
} else {
    V_CALL(VGetArg(upenv, 25-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D481.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k103, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 19 1) (bruijn ##.k.385 6 0) (bruijn ##.x.389 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k102) (close _V10_Dpreprocess__expr_D81_k103))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k102, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k103, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k100) (close _V10_Dpreprocess__expr_D81_k101))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k100, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k101, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.115 1 0))) ((bruijn ##.integer?.50 22 4) (close _V10_Dpreprocess__expr_D81_k99) (bruijn ##.x.116 0 0)) ((bruijn ##.k.385 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 22-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k99, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.115 0 0)) ((close _V10_Dpreprocess__expr_D81_k98) (##inline ##vcore.car (bruijn ##.expr.18.115 0 0))) ((bruijn ##.k.385 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k98, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.386 0 0) ((close _V10_Dpreprocess__expr_D81_k97) (##inline ##vcore.cdr (bruijn ##.expr.17.114 2 0))) ((bruijn ##.k.385 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k97, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.114 1 0)) ((bruijn ##.equal?.49 19 3) (close _V10_Dpreprocess__expr_D81_k96) 'call (##inline ##vcore.car (bruijn ##.expr.17.114 1 0))) ((bruijn ##.k.385 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 19-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k96, env)}),
      _V0call,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k110, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.380 1 0) ((bruijn ##.>=.61 26 15) (bruijn ##.k.381 0 0) (bruijn ##.x.119 2 0) 0) ((bruijn ##.k.381 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 26-1, 15), runtime,
      _var0,
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k112, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.378 1 0) ((bruijn ##.k.379 0 0) (bruijn ##.expr.93 22 1)) ((bruijn ##.error.48 27 2) (bruijn ##.k.379 0 0) (##string ##.string.482) (bruijn ##.x.119 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 22-1, 1));
} else {
    V_CALL(VGetArg(upenv, 27-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D482.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k113, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 21 1) (bruijn ##.k.373 6 0) (bruijn ##.x.377 0 0))
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k112) (close _V10_Dpreprocess__expr_D81_k113))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k112, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k113, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k110) (close _V10_Dpreprocess__expr_D81_k111))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k110, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k111, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.20.118 1 0))) ((bruijn ##.integer?.50 24 4) (close _V10_Dpreprocess__expr_D81_k109) (bruijn ##.x.119 0 0)) ((bruijn ##.k.373 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k109, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.118 0 0)) ((close _V10_Dpreprocess__expr_D81_k108) (##inline ##vcore.car (bruijn ##.expr.20.118 0 0))) ((bruijn ##.k.373 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k108, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.374 0 0) ((close _V10_Dpreprocess__expr_D81_k107) (##inline ##vcore.cdr (bruijn ##.expr.19.117 2 0))) ((bruijn ##.k.373 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k107, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.19.117 1 0)) ((bruijn ##.equal?.49 21 3) (close _V10_Dpreprocess__expr_D81_k106) 'lambda (##inline ##vcore.car (bruijn ##.expr.19.117 1 0))) ((bruijn ##.k.373 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 21-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k106, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k120, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.368 1 0) ((bruijn ##.>=.61 28 15) (bruijn ##.k.369 0 0) (bruijn ##.x.122 2 0) 0) ((bruijn ##.k.369 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 28-1, 15), runtime,
      _var0,
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k122, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.366 1 0) ((bruijn ##.k.367 0 0) (bruijn ##.expr.93 24 1)) ((bruijn ##.error.48 29 2) (bruijn ##.k.367 0 0) (##string ##.string.483) (bruijn ##.x.122 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 24-1, 1));
} else {
    V_CALL(VGetArg(upenv, 29-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D483.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k123, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 23 1) (bruijn ##.k.361 6 0) (bruijn ##.x.365 0 0))
    V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k122) (close _V10_Dpreprocess__expr_D81_k123))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k122, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k123, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k120) (close _V10_Dpreprocess__expr_D81_k121))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k120, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k121, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.121 1 0))) ((bruijn ##.integer?.50 26 4) (close _V10_Dpreprocess__expr_D81_k119) (bruijn ##.x.122 0 0)) ((bruijn ##.k.361 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 26-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k119, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.121 0 0)) ((close _V10_Dpreprocess__expr_D81_k118) (##inline ##vcore.car (bruijn ##.expr.22.121 0 0))) ((bruijn ##.k.361 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k118, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.362 0 0) ((close _V10_Dpreprocess__expr_D81_k117) (##inline ##vcore.cdr (bruijn ##.expr.21.120 2 0))) ((bruijn ##.k.361 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k117, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.120 1 0)) ((bruijn ##.equal?.49 23 3) (close _V10_Dpreprocess__expr_D81_k116) 'lambda+ (##inline ##vcore.car (bruijn ##.expr.21.120 1 0))) ((bruijn ##.k.361 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 23-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k116, env)}),
      _V0lambda_P,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k132, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.356 1 0) ((bruijn ##.>=.61 32 15) (bruijn ##.k.357 0 0) (bruijn ##.x.125 4 0) 0) ((bruijn ##.k.357 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 32-1, 15), runtime,
      _var0,
      upenv->up->up->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k135, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.353 1 0) ((bruijn ##.error.48 34 2) (bruijn ##.k.354 0 0) (##string ##.string.484) (bruijn ##.x.125 6 0)) ((bruijn ##.k.354 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 34-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D484.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k140, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.351 1 0) ((bruijn ##.assv.51 38 5) (bruijn ##.k.352 0 0) (bruijn ##.b.127 8 0) (bruijn ##.labels.79 34 0)) ((bruijn ##.k.352 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 38-1, 5), runtime,
      _var0,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 34-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k143, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.345 5 0) (##inline ##vcore.cons 'case-lambda (##inline ##vcore.cons (bruijn ##.x.125 13 0) (##inline ##vcore.cons (bruijn ##.x.348 0 0) '()))))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        VGetArg(upenv, 13-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dpreprocess__expr_D81_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.53 40 7) (close _V10_Dpreprocess__expr_D81_k143) (bruijn ##.x.349 0 0) (bruijn ##.pc.94 35 2) 1)
    V_CALL(VGetArg(upenv, 40-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k143, env)}),
      _var0,
      VGetArg(upenv, 35-1, 2),
      VEncodeInt(1l));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda23" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.54 39 8) (close _V10_Dpreprocess__expr_D81_k142) (bruijn ##.label.129 0 0))
    V_CALL(VGetArg(upenv, 39-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k142, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k144, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.350 0 0) ((bruijn ##.error.48 39 2) (bruijn ##.k.345 3 0) (##string ##.string.485) (bruijn ##.b.127 9 0)) ((bruijn ##.error.48 39 2) (bruijn ##.k.345 3 0) (##string ##.string.486) (bruijn ##.b.127 9 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 39-1, 2), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D485.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
} else {
    V_CALL(VGetArg(upenv, 39-1, 2), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D486.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.41.128 0 0) ((close _V10_Dpreprocess__expr_D81_lambda23) (bruijn ##.x.41.128 0 0)) ((bruijn ##.symbol?.52 38 6) (close _V10_Dpreprocess__expr_D81_k144) (bruijn ##.b.127 8 0)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda23, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 38-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k144, env)}),
      VGetArg(upenv, 8-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k140) (close _V10_Dpreprocess__expr_D81_k141))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k140, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k141, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.344 1 0) ((bruijn ##.k.345 0 0) (bruijn ##.expr.93 31 1)) ((bruijn ##.symbol?.52 36 6) (close _V10_Dpreprocess__expr_D81_k139) (bruijn ##.b.127 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 31-1, 1));
} else {
    V_CALL(VGetArg(upenv, 36-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k139, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k145, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 30 1) (bruijn ##.k.337 11 0) (bruijn ##.x.342 0 0))
    V_CALL(VGetArg(upenv, 30-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k138) (close _V10_Dpreprocess__expr_D81_k145))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k138, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k145, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.50 34 4) (close _V10_Dpreprocess__expr_D81_k137) (bruijn ##.b.127 4 0))
    V_CALL(VGetArg(upenv, 34-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k137, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dpreprocess__expr_D81_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k135) (close _V10_Dpreprocess__expr_D81_k136))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k135, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k136, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.59 32 13) (close _V10_Dpreprocess__expr_D81_k134) (bruijn ##.x.355 0 0))
    V_CALL(VGetArg(upenv, 32-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k134, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k132) (close _V10_Dpreprocess__expr_D81_k133))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k132, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k133, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.25.126 1 0))) ((bruijn ##.integer?.50 30 4) (close _V10_Dpreprocess__expr_D81_k131) (bruijn ##.x.125 2 0)) ((bruijn ##.k.337 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 30-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k131, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.126 0 0)) ((close _V10_Dpreprocess__expr_D81_k130) (##inline ##vcore.car (bruijn ##.expr.25.126 0 0))) ((bruijn ##.k.337 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k130, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k129) (##inline ##vcore.cdr (bruijn ##.expr.24.124 1 0)))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k129, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dpreprocess__expr_D81_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.124 0 0)) ((close _V10_Dpreprocess__expr_D81_k128) (##inline ##vcore.car (bruijn ##.expr.24.124 0 0))) ((bruijn ##.k.337 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k128, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.338 0 0) ((close _V10_Dpreprocess__expr_D81_k127) (##inline ##vcore.cdr (bruijn ##.expr.23.123 2 0))) ((bruijn ##.k.337 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k127, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.123 1 0)) ((bruijn ##.equal?.49 25 3) (close _V10_Dpreprocess__expr_D81_k126) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.23.123 1 0))) ((bruijn ##.k.337 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k126, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k154, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.332 1 0) ((bruijn ##.>=.61 34 15) (bruijn ##.k.333 0 0) (bruijn ##.x.132 4 0) 0) ((bruijn ##.k.333 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 34-1, 15), runtime,
      _var0,
      upenv->up->up->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k157, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.329 1 0) ((bruijn ##.error.48 36 2) (bruijn ##.k.330 0 0) (##string ##.string.487) (bruijn ##.x.132 6 0)) ((bruijn ##.k.330 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 36-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D487.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k162, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.327 1 0) ((bruijn ##.assv.51 40 5) (bruijn ##.k.328 0 0) (bruijn ##.b.134 8 0) (bruijn ##.labels.79 36 0)) ((bruijn ##.k.328 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 40-1, 5), runtime,
      _var0,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 36-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k165, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.321 5 0) (##inline ##vcore.cons 'case-lambda+ (##inline ##vcore.cons (bruijn ##.x.132 13 0) (##inline ##vcore.cons (bruijn ##.x.324 0 0) '()))))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons2(runtime,
        _V0case__lambda_P,
        VInlineCons2(runtime,
        VGetArg(upenv, 13-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dpreprocess__expr_D81_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.53 42 7) (close _V10_Dpreprocess__expr_D81_k165) (bruijn ##.x.325 0 0) (bruijn ##.pc.94 37 2) 1)
    V_CALL(VGetArg(upenv, 42-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k165, env)}),
      _var0,
      VGetArg(upenv, 37-1, 2),
      VEncodeInt(1l));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda25" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.54 41 8) (close _V10_Dpreprocess__expr_D81_k164) (bruijn ##.label.136 0 0))
    V_CALL(VGetArg(upenv, 41-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k164, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k166, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.326 0 0) ((bruijn ##.error.48 41 2) (bruijn ##.k.321 3 0) (##string ##.string.485) (bruijn ##.b.134 9 0)) ((bruijn ##.error.48 41 2) (bruijn ##.k.321 3 0) (##string ##.string.488) (bruijn ##.b.134 9 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 41-1, 2), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D485.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
} else {
    V_CALL(VGetArg(upenv, 41-1, 2), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D488.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.42.135 0 0) ((close _V10_Dpreprocess__expr_D81_lambda25) (bruijn ##.x.42.135 0 0)) ((bruijn ##.symbol?.52 40 6) (close _V10_Dpreprocess__expr_D81_k166) (bruijn ##.b.134 8 0)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda25, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 40-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k166, env)}),
      VGetArg(upenv, 8-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k162) (close _V10_Dpreprocess__expr_D81_k163))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k162, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k163, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.320 1 0) ((bruijn ##.k.321 0 0) (bruijn ##.expr.93 33 1)) ((bruijn ##.symbol?.52 38 6) (close _V10_Dpreprocess__expr_D81_k161) (bruijn ##.b.134 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 33-1, 1));
} else {
    V_CALL(VGetArg(upenv, 38-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k161, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k167, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 32 1) (bruijn ##.k.313 11 0) (bruijn ##.x.318 0 0))
    V_CALL(VGetArg(upenv, 32-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k160) (close _V10_Dpreprocess__expr_D81_k167))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k160, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k167, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.50 36 4) (close _V10_Dpreprocess__expr_D81_k159) (bruijn ##.b.134 4 0))
    V_CALL(VGetArg(upenv, 36-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k159, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dpreprocess__expr_D81_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k157) (close _V10_Dpreprocess__expr_D81_k158))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k157, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k158, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.59 34 13) (close _V10_Dpreprocess__expr_D81_k156) (bruijn ##.x.331 0 0))
    V_CALL(VGetArg(upenv, 34-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k156, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k154) (close _V10_Dpreprocess__expr_D81_k155))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k155, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.133 1 0))) ((bruijn ##.integer?.50 32 4) (close _V10_Dpreprocess__expr_D81_k153) (bruijn ##.x.132 2 0)) ((bruijn ##.k.313 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 32-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k153, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.133 0 0)) ((close _V10_Dpreprocess__expr_D81_k152) (##inline ##vcore.car (bruijn ##.expr.28.133 0 0))) ((bruijn ##.k.313 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k152, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k151) (##inline ##vcore.cdr (bruijn ##.expr.27.131 1 0)))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k151, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dpreprocess__expr_D81_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.131 0 0)) ((close _V10_Dpreprocess__expr_D81_k150) (##inline ##vcore.car (bruijn ##.expr.27.131 0 0))) ((bruijn ##.k.313 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k150, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.314 0 0) ((close _V10_Dpreprocess__expr_D81_k149) (##inline ##vcore.cdr (bruijn ##.expr.26.130 2 0))) ((bruijn ##.k.313 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k149, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.130 1 0)) ((bruijn ##.equal?.49 27 3) (close _V10_Dpreprocess__expr_D81_k148) 'case-lambda+ (##inline ##vcore.car (bruijn ##.expr.26.130 1 0))) ((bruijn ##.k.313 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 27-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k148, env)}),
      _V0case__lambda_P,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k172, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.140 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.140 0 0))) ((bruijn ##.kk.5.95 26 1) (bruijn ##.k.305 3 0) (bruijn ##.expr.93 27 1)) ((bruijn ##.k.305 3 0) #f)) ((bruijn ##.k.305 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 27-1, 1));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.138 0 0)) ((close _V10_Dpreprocess__expr_D81_k172) (##inline ##vcore.cdr (bruijn ##.expr.30.138 0 0))) ((bruijn ##.k.305 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k172, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.306 0 0) ((close _V10_Dpreprocess__expr_D81_k171) (##inline ##vcore.cdr (bruijn ##.expr.29.137 2 0))) ((bruijn ##.k.305 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k171, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.137 1 0)) ((bruijn ##.equal?.49 29 3) (close _V10_Dpreprocess__expr_D81_k170) 'case-lambda-error (##inline ##vcore.car (bruijn ##.expr.29.137 1 0))) ((bruijn ##.k.305 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 29-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k170, env)}),
      _V0case__lambda__error,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k179, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.300 1 0) ((bruijn ##.assv.51 36 5) (bruijn ##.k.301 0 0) (bruijn ##.x.144 2 0) (bruijn ##.labels.79 32 0)) ((bruijn ##.k.301 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 36-1, 5), runtime,
      _var0,
      upenv->up->vars[0],
      VGetArg(upenv, 32-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k182, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.293 2 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.x.295 0 0) '())))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.54 38 8) (close _V10_Dpreprocess__expr_D81_k182) (bruijn ##.label.146 0 0))
    V_CALL(VGetArg(upenv, 38-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k182, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k185, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.298 1 0) ((bruijn ##.>=.61 40 15) (bruijn ##.k.299 0 0) (bruijn ##.x.144 6 0) 0) ((bruijn ##.k.299 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 40-1, 15), runtime,
      _var0,
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k186, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.297 0 0) ((bruijn ##.k.293 3 0) (bruijn ##.expr.93 35 1)) ((bruijn ##.error.48 40 2) (bruijn ##.k.293 3 0) (##string ##.string.489) (bruijn ##.x.144 6 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      VGetArg(upenv, 35-1, 1));
} else {
    V_CALL(VGetArg(upenv, 40-1, 2), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D489.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k185) (close _V10_Dpreprocess__expr_D81_k186))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k185, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k186, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.296 0 0) ((bruijn ##.error.48 38 2) (bruijn ##.k.293 1 0) (##string ##.string.485) (bruijn ##.x.144 4 0)) ((bruijn ##.integer?.50 38 4) (close _V10_Dpreprocess__expr_D81_k184) (bruijn ##.x.144 4 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 38-1, 2), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D485.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 38-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k184, env)}),
      upenv->up->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.43.145 1 0) ((close _V10_Dpreprocess__expr_D81_lambda28) (bruijn ##.x.43.145 1 0)) ((bruijn ##.symbol?.52 37 6) (close _V10_Dpreprocess__expr_D81_k183) (bruijn ##.x.144 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda28, env, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 37-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k183, env)}),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k187, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 31 1) (bruijn ##.k.288 6 0) (bruijn ##.x.292 0 0))
    V_CALL(VGetArg(upenv, 31-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k181) (close _V10_Dpreprocess__expr_D81_k187))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k181, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k187, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k179) (close _V10_Dpreprocess__expr_D81_k180))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k179, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k180, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.143 1 0))) ((bruijn ##.symbol?.52 34 6) (close _V10_Dpreprocess__expr_D81_k178) (bruijn ##.x.144 0 0)) ((bruijn ##.k.288 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 34-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k178, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.143 0 0)) ((close _V10_Dpreprocess__expr_D81_k177) (##inline ##vcore.car (bruijn ##.expr.33.143 0 0))) ((bruijn ##.k.288 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k177, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.289 0 0) ((close _V10_Dpreprocess__expr_D81_k176) (##inline ##vcore.cdr (bruijn ##.expr.32.142 2 0))) ((bruijn ##.k.288 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k176, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.142 1 0)) ((bruijn ##.equal?.49 31 3) (close _V10_Dpreprocess__expr_D81_k175) 'close (##inline ##vcore.car (bruijn ##.expr.32.142 1 0))) ((bruijn ##.k.288 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 31-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k175, env)}),
      _V0close,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k190, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.283 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.34.147 2 0))) ((bruijn ##.kk.5.95 28 1) (bruijn ##.k.282 1 0) (bruijn ##.expr.93 29 1)) ((bruijn ##.k.282 1 0) #f)) ((bruijn ##.k.282 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->vars[0])))) {
    V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 29-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.147 1 0)) ((bruijn ##.equal?.49 33 3) (close _V10_Dpreprocess__expr_D81_k190) 'push-set! (##inline ##vcore.car (bruijn ##.expr.34.147 1 0))) ((bruijn ##.k.282 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 33-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k190, env)}),
      _V0push__set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k199, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.277 1 0) ((bruijn ##.assv.51 42 5) (bruijn ##.k.278 0 0) (bruijn ##.x.150 4 0) (bruijn ##.labels.79 38 0)) ((bruijn ##.k.278 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 42-1, 5), runtime,
      _var0,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 38-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k202, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.272 5 0) (##inline ##vcore.cons 'bf (##inline ##vcore.cons (bruijn ##.x.274 0 0) '())))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons2(runtime,
        _V0bf,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Dpreprocess__expr_D81_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.53 44 7) (close _V10_Dpreprocess__expr_D81_k202) (bruijn ##.x.275 0 0) (bruijn ##.pc.94 39 2) 1)
    V_CALL(VGetArg(upenv, 44-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k202, env)}),
      _var0,
      VGetArg(upenv, 39-1, 2),
      VEncodeInt(1l));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda31" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.54 43 8) (close _V10_Dpreprocess__expr_D81_k201) (bruijn ##.x.152 0 0))
    V_CALL(VGetArg(upenv, 43-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k201, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k203, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.276 0 0) ((bruijn ##.error.48 43 2) (bruijn ##.k.272 3 0) (##string ##.string.490) (bruijn ##.x.150 5 0)) ((bruijn ##.error.48 43 2) (bruijn ##.k.272 3 0) (##string ##.string.491) (bruijn ##.x.150 5 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 43-1, 2), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D490.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(VGetArg(upenv, 43-1, 2), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D491.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.44.151 0 0) ((close _V10_Dpreprocess__expr_D81_lambda31) (bruijn ##.x.44.151 0 0)) ((bruijn ##.symbol?.52 42 6) (close _V10_Dpreprocess__expr_D81_k203) (bruijn ##.x.150 4 0)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda31, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 42-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k203, env)}),
      upenv->up->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k199) (close _V10_Dpreprocess__expr_D81_k200))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k199, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k200, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.271 1 0) ((bruijn ##.k.272 0 0) (bruijn ##.expr.93 35 1)) ((bruijn ##.symbol?.52 40 6) (close _V10_Dpreprocess__expr_D81_k198) (bruijn ##.x.150 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 35-1, 1));
} else {
    V_CALL(VGetArg(upenv, 40-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k198, env)}),
      upenv->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k204, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 34 1) (bruijn ##.k.266 5 0) (bruijn ##.x.270 0 0))
    V_CALL(VGetArg(upenv, 34-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k197) (close _V10_Dpreprocess__expr_D81_k204))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k197, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k204, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.36.149 1 0))) ((bruijn ##.integer?.50 38 4) (close _V10_Dpreprocess__expr_D81_k196) (bruijn ##.x.150 0 0)) ((bruijn ##.k.266 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 38-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k196, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.149 0 0)) ((close _V10_Dpreprocess__expr_D81_k195) (##inline ##vcore.car (bruijn ##.expr.36.149 0 0))) ((bruijn ##.k.266 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k195, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.267 0 0) ((close _V10_Dpreprocess__expr_D81_k194) (##inline ##vcore.cdr (bruijn ##.expr.35.148 2 0))) ((bruijn ##.k.266 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k194, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.148 1 0)) ((bruijn ##.equal?.49 35 3) (close _V10_Dpreprocess__expr_D81_k193) 'bf (##inline ##vcore.car (bruijn ##.expr.35.148 1 0))) ((bruijn ##.k.266 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 35-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k193, env)}),
      _V0bf,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k211, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.261 1 0) ((bruijn ##.>=.61 42 15) (bruijn ##.k.262 0 0) (bruijn ##.x.155 2 0) 0) ((bruijn ##.k.262 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 42-1, 15), runtime,
      _var0,
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k213, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.259 1 0) ((bruijn ##.k.260 0 0) (bruijn ##.expr.93 38 1)) ((bruijn ##.error.48 43 2) (bruijn ##.k.260 0 0) (##string ##.string.492) (bruijn ##.x.155 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 38-1, 1));
} else {
    V_CALL(VGetArg(upenv, 43-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D492.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D81_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k214, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 37 1) (bruijn ##.k.254 6 0) (bruijn ##.x.258 0 0))
    V_CALL(VGetArg(upenv, 37-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k213) (close _V10_Dpreprocess__expr_D81_k214))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k213, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k214, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k211) (close _V10_Dpreprocess__expr_D81_k212))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k211, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k212, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.38.154 1 0))) ((bruijn ##.integer?.50 40 4) (close _V10_Dpreprocess__expr_D81_k210) (bruijn ##.x.155 0 0)) ((bruijn ##.k.254 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 40-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k210, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.154 0 0)) ((close _V10_Dpreprocess__expr_D81_k209) (##inline ##vcore.car (bruijn ##.expr.38.154 0 0))) ((bruijn ##.k.254 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k209, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.255 0 0) ((close _V10_Dpreprocess__expr_D81_k208) (##inline ##vcore.cdr (bruijn ##.expr.37.153 2 0))) ((bruijn ##.k.254 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k208, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.153 1 0)) ((bruijn ##.equal?.49 37 3) (close _V10_Dpreprocess__expr_D81_k207) 'letrec-begin (##inline ##vcore.car (bruijn ##.expr.37.153 1 0))) ((bruijn ##.k.254 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 37-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k207, env)}),
      _V0letrec__begin,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k217, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.249 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.39.156 2 0))) ((bruijn ##.kk.5.95 34 1) (bruijn ##.k.248 1 0) (bruijn ##.expr.93 35 1)) ((bruijn ##.k.248 1 0) #f)) ((bruijn ##.k.248 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->vars[0])))) {
    V_CALL(VGetArg(upenv, 34-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 35-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.156 1 0)) ((bruijn ##.equal?.49 39 3) (close _V10_Dpreprocess__expr_D81_k217) 'letrec-end (##inline ##vcore.car (bruijn ##.expr.39.156 1 0))) ((bruijn ##.k.248 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 39-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k217, env)}),
      _V0letrec__end,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D81_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k219, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.95 34 1) (bruijn ##.k.229 34 0) (bruijn ##.x.246 0 0))
    V_CALL(VGetArg(upenv, 34-1, 1), runtime,
      VGetArg(upenv, 34-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.error.48 39 2) (close _V10_Dpreprocess__expr_D81_k219) (##string ##.string.493) (bruijn ##.expr.93 34 1))
    V_CALL(VGetArg(upenv, 39-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k219, env)}),
      VEncodePointer(&_V10_Dstring_D493.sym, VPOINTER_OTHER),
      VGetArg(upenv, 34-1, 1));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda33" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k216) (close _V10_Dpreprocess__expr_D81_k218))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k216, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k218, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda33) (bruijn ##.input.6.96 30 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda33, env, runtime,
      VGetArg(upenv, 30-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k206) (close _V10_Dpreprocess__expr_D81_k215))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k206, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k215, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda32) (bruijn ##.input.6.96 28 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda32, env, runtime,
      VGetArg(upenv, 28-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k192) (close _V10_Dpreprocess__expr_D81_k205))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k192, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k205, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda30) (bruijn ##.input.6.96 26 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda30, env, runtime,
      VGetArg(upenv, 26-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda29" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k189) (close _V10_Dpreprocess__expr_D81_k191))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k189, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k191, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda29) (bruijn ##.input.6.96 24 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda29, env, runtime,
      VGetArg(upenv, 24-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda27" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k174) (close _V10_Dpreprocess__expr_D81_k188))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k174, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k188, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda27) (bruijn ##.input.6.96 22 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda27, env, runtime,
      VGetArg(upenv, 22-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda26" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k169) (close _V10_Dpreprocess__expr_D81_k173))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k169, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k173, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda26) (bruijn ##.input.6.96 20 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda26, env, runtime,
      VGetArg(upenv, 20-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda24" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k147) (close _V10_Dpreprocess__expr_D81_k168))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k147, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k168, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda24) (bruijn ##.input.6.96 18 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda24, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda22" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k125) (close _V10_Dpreprocess__expr_D81_k146))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k125, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k146, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda22) (bruijn ##.input.6.96 16 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda22, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda21" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k115) (close _V10_Dpreprocess__expr_D81_k124))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k115, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k124, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda21) (bruijn ##.input.6.96 14 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda21, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda20" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k105) (close _V10_Dpreprocess__expr_D81_k114))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k105, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k114, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda20) (bruijn ##.input.6.96 12 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda20, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda19" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k95) (close _V10_Dpreprocess__expr_D81_k104))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k104, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda19) (bruijn ##.input.6.96 10 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda19, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda18" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k87) (close _V10_Dpreprocess__expr_D81_k94))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k87, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k94, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda18) (bruijn ##.input.6.96 8 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda18, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda17" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k73) (close _V10_Dpreprocess__expr_D81_k86))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k73, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k86, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda17) (bruijn ##.input.6.96 6 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda17, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda15" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k63) (close _V10_Dpreprocess__expr_D81_k72))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k63, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k72, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda15) (bruijn ##.input.6.96 4 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda15, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dpreprocess__expr_D81_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda14" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k59) (close _V10_Dpreprocess__expr_D81_k62))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k59, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k62, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda14) (bruijn ##.input.6.96 2 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda14, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dpreprocess__expr_D81_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda13" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_k56) (close _V10_Dpreprocess__expr_D81_k58))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_k56, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_k58, env)}));
 }
}
static void _V10_Dpreprocess__expr_D81_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda12" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D81_lambda13) (bruijn ##.input.6.96 0 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda13, env, runtime,
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D81_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dpreprocess__expr_D81_lambda12) (bruijn ##.expr.93 1 1))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D81_lambda12, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Dpreprocess__expr_D81_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D81_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D81_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D81_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.56 5 10) (bruijn ##.k.228 0 0) (close _V10_Dpreprocess__expr_D81_lambda11))
    V_CALL(VGetArg(upenv, 5-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_lambda11, env)}));
 }
}
static void _V10_Dloop_D158_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D158_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D158_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D158_k227, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.450 1 0) ((bruijn ##.vector-set!.58 14 12) (bruijn ##.k.451 0 0) (bruijn ##.tape.159 7 1) (bruijn ##.pc.160 7 2) (bruijn ##.e.161 4 0)) ((bruijn ##.k.451 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 14-1, 12), runtime,
      _var0,
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D158_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D158_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D158_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D158_k229, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.158 9 0) (bruijn ##.k.446 8 0) (bruijn ##.tape.159 8 1) (bruijn ##.x.449 0 0))
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 8-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D158_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D158_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D158_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D158_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.66 14 20) (close _V10_Dloop_D158_k229) (bruijn ##.pc.160 7 2) 1)
    V_CALL(VGetArg(upenv, 14-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D158_k229, env)}),
      VGetArg(upenv, 7-1, 2),
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D158_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D158_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D158_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D158_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D158_k227) (close _V10_Dloop_D158_k228))
    V_CALL_FUNC(_V10_Dloop_D158_k227, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D158_k228, env)}));
 }
}
static void _V10_Dloop_D158_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D158_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D158_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D158_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.59 12 13) (close _V10_Dloop_D158_k226) (bruijn ##.x.452 0 0))
    V_CALL(VGetArg(upenv, 12-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D158_k226, env)}),
      _var0);
 }
}
static void _V10_Dloop_D158_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D158_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D158_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D158_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.60 11 14) (close _V10_Dloop_D158_k225) (bruijn ##.e.161 1 0) (bruijn ##.x.453 0 0))
    V_CALL(VGetArg(upenv, 11-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D158_k225, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D158_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D158_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D158_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D158_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-ref.64 10 18) (close _V10_Dloop_D158_k224) (bruijn ##.tape.159 3 1) (bruijn ##.pc.160 3 2))
    V_CALL(VGetArg(upenv, 10-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D158_k224, env)}),
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dloop_D158_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D158_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D158_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D158_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.preprocess-expr.81 5 2) (close _V10_Dloop_D158_k223) (bruijn ##.x.454 0 0) (bruijn ##.pc.160 2 2))
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D158_k223, env)}),
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V10_Dloop_D158_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D158_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D158_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D158_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.447 0 0) ((bruijn ##.k.446 1 0) (bruijn ##.tape.159 1 1)) ((bruijn ##.vector-ref.64 8 18) (close _V10_Dloop_D158_k222) (bruijn ##.tape.159 1 1) (bruijn ##.pc.160 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D158_k222, env)}),
      upenv->vars[1],
      upenv->vars[2]);
}
 }
}
static void _V10_Dloop_D158_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D158_lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D158_lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D158_lambda34, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.>=.61 7 15) (close _V10_Dloop_D158_k221) (bruijn ##.pc.160 0 2) (bruijn ##.len.157 2 0))
    V_CALL(VGetArg(upenv, 7-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D158_k221, env)}),
      _var2,
      upenv->up->vars[0]);
 }
}
static void _V10_Dpreprocess__vasm_D71_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__vasm_D71_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__vasm_D71_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__vasm_D71_k230, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.158 1 0) (bruijn ##.k.199 4 0) (bruijn ##.x.455 0 0) 0)
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->up->vars[0],
      _var0,
      VEncodeInt(0l));
 }
}
static void _V10_Dpreprocess__vasm_D71_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__vasm_D71_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__vasm_D71_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__vasm_D71_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D158_lambda34)) ((bruijn ##.peel-labels.80 2 1) (close _V10_Dpreprocess__vasm_D71_k230) (bruijn ##.tape.78 3 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D158_lambda34, env)});
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__vasm_D71_k230, env)}),
      upenv->up->up->vars[1]);
    }
 }
}
static void _V10_Dpreprocess__vasm_D71_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__vasm_D71_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__vasm_D71_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__vasm_D71_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 3 ('() (close _V10_Dpeel__labels_D80_lambda6) (close _V10_Dpreprocess__expr_D81_lambda10)) ((bruijn ##.vector-length.62 4 16) (close _V10_Dpreprocess__vasm_D71_k220) (bruijn ##.tape.78 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VNULL;
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__labels_D80_lambda6, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D81_lambda10, env)});
    V_CALL(upenv->up->up->up->vars[16], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__vasm_D71_k220, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V10_Dfind__toplevel_D72_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D72_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D72_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D72_k236, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.find-toplevel.72 7 2) (bruijn ##.k.456 6 0) (bruijn ##.tape.162 6 1) (bruijn ##.x.459 0 0))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 6-1, 1),
      _var0);
 }
}
static void _V10_Dfind__toplevel_D72_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D72_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D72_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D72_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.458 0 0) ((bruijn ##.+.66 8 20) (bruijn ##.k.456 5 0) (bruijn ##.program-counter.163 5 2) 1) ((bruijn ##.+.66 8 20) (close _V10_Dfind__toplevel_D72_k236) 1 (bruijn ##.program-counter.163 5 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 20), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 5-1, 2),
      VEncodeInt(1l));
} else {
    V_CALL(VGetArg(upenv, 8-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D72_k236, env)}),
      VEncodeInt(1l),
      VGetArg(upenv, 5-1, 2));
}
 }
}
static void _V10_Dfind__toplevel_D72_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D72_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D72_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D72_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.63 7 17) (close _V10_Dfind__toplevel_D72_k235) (bruijn ##.x.460 0 0) 'toplevel)
    V_CALL(VGetArg(upenv, 7-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D72_k235, env)}),
      _var0,
      _V0toplevel);
 }
}
static void _V10_Dfind__toplevel_D72_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D72_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D72_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D72_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.65 6 19) (close _V10_Dfind__toplevel_D72_k234) (bruijn ##.x.461 0 0))
    V_CALL(VGetArg(upenv, 6-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D72_k234, env)}),
      _var0);
 }
}
static void _V10_Dfind__toplevel_D72_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D72_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D72_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D72_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.457 0 0) ((bruijn ##.k.456 2 0) #f) ((bruijn ##.vector-ref.64 5 18) (close _V10_Dfind__toplevel_D72_k233) (bruijn ##.tape.162 2 1) (bruijn ##.program-counter.163 2 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D72_k233, env)}),
      upenv->up->vars[1],
      upenv->up->vars[2]);
}
 }
}
static void _V10_Dfind__toplevel_D72_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D72_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D72_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D72_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.>=.61 4 15) (close _V10_Dfind__toplevel_D72_k232) (bruijn ##.program-counter.163 1 2) (bruijn ##.x.462 0 0))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D72_k232, env)}),
      upenv->vars[2],
      _var0);
 }
}
static void _V10_Dfind__toplevel_D72_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D72_lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D72_lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D72_lambda35, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.vector-length.62 3 16) (close _V10_Dfind__toplevel_D72_k231) (bruijn ##.tape.162 0 1))
    V_CALL(upenv->up->up->vars[16], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D72_k231, env)}),
      _var1);
 }
}
static void _V10_Dloop_D167_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D167_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D167_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D167_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.469 1 0) (bruijn ##.program-counter.166 3 1) (bruijn ##.x.470 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V10_Dloop_D167_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D167_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D167_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D167_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.program-counter.166 2 1) ((bruijn ##.find-toplevel.72 5 2) (close _V10_Dloop_D167_k239) (bruijn ##.tape.165 2 0) (bruijn ##.program-counter.166 2 1)) ((bruijn ##.k.469 0 0) #f))
if(VDecodeBool(
upenv->up->vars[1])) {
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D167_k239, env)}),
      upenv->up->vars[0],
      upenv->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D167_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D167_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D167_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D167_lambda38, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eval-vasm-toplevel.73 6 3) (bruijn ##.k.468 0 0) (bruijn ##.tape.165 3 0) (bruijn ##.program-counter.166 3 1))
    V_CALL(VGetArg(upenv, 6-1, 3), runtime,
      _var0,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dloop_D167_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D167_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D167_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D167_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.program-counter.166 2 1) ((bruijn ##.call-with-values.69 7 23) (bruijn ##.k.466 1 0) (close _V10_Dloop_D167_lambda38) (bruijn ##.loop.167 2 2)) ((bruijn ##.apply.68 7 22) (bruijn ##.k.466 1 0) (bruijn ##.values.67 7 21) (bruijn ##.rets.168 1 1)))
if(VDecodeBool(
upenv->up->vars[1])) {
    V_CALL(VGetArg(upenv, 7-1, 23), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D167_lambda38, env)}),
      upenv->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 22), runtime,
      upenv->vars[0],
      VGetArg(upenv, 7-1, 21),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D167_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V10_Dloop_D167_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D167_lambda37, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D167_lambda37, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((close _V10_Dloop_D167_k238) (close _V10_Dloop_D167_k240))
    V_CALL_FUNC(_V10_Dloop_D167_k238, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D167_k240, env)}));
 }
}
static void _V10_Deval__vasm_D74_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Deval__vasm_D74_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__vasm_D74_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Deval__vasm_D74_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.465 1 0) 0 (close _V10_Dloop_D167_lambda37)) ((bruijn ##.loop.167 0 2) (bruijn ##.k.464 2 0)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = upenv->vars[0];
    env->vars[1] = VEncodeInt(0l);
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D167_lambda37, env)});
    V_CALL(env->vars[2], runtime,
      upenv->up->vars[0]);
    }
 }
}
static void _V10_Deval__vasm_D74_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Deval__vasm_D74_lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__vasm_D74_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Deval__vasm_D74_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.preprocess-vasm.71 1 1) (close _V10_Deval__vasm_D74_k237) (bruijn ##.vasm.164 0 1))
    V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__vasm_D74_k237, env)}),
      _var1);
 }
}
static void _V0vanity_V0bytecode_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 5 ((close _V10_Dload__all_D70_lambda3) (close _V10_Dpreprocess__vasm_D71_lambda5) (close _V10_Dfind__toplevel_D72_lambda35) (bruijn ##.x.463 1 0) (close _V10_Deval__vasm_D74_lambda36)) ((bruijn ##.k.170 31 0) (##inline ##vcore.cons (##inline ##vcore.cons 'eval-vasm (bruijn ##.eval-vasm.74 0 4)) '())))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[5]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 5, 5, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__all_D70_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__vasm_D71_lambda5, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D72_lambda35, env)});
    env->vars[3] = upenv->vars[0];
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__vasm_D74_lambda36, env)});
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eval__vasm,
        env->vars[4]),
        VNULL));
    }
 }
}
static void _V0vanity_V0bytecode_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_lambda2, runtime, upenv, 24, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23) {
  struct { VEnv env; VWORD argv[24]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 24, 24, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  env->vars[9] = _var9;
  env->vars[10] = _var10;
  env->vars[11] = _var11;
  env->vars[12] = _var12;
  env->vars[13] = _var13;
  env->vars[14] = _var14;
  env->vars[15] = _var15;
  env->vars[16] = _var16;
  env->vars[17] = _var17;
  env->vars[18] = _var18;
  env->vars[19] = _var19;
  env->vars[20] = _var20;
  env->vars[21] = _var21;
  env->vars[22] = _var22;
  env->vars[23] = _var23;
  // (##vcore.function (close _V0vanity_V0bytecode_V20_k29) (##string ##.string.494))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k29, env)}),
      VEncodePointer(&_V10_Dstring_D494.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0bytecode_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0bytecode_V20_lambda2) (bruijn ##.x.171 23 0) (bruijn ##.x.172 22 0) (bruijn ##.x.173 21 0) (bruijn ##.x.174 20 0) (bruijn ##.x.175 19 0) (bruijn ##.x.176 18 0) (bruijn ##.x.177 17 0) (bruijn ##.x.178 16 0) (bruijn ##.x.179 15 0) (bruijn ##.x.180 14 0) (bruijn ##.x.181 13 0) (bruijn ##.x.182 12 0) (bruijn ##.x.183 11 0) (bruijn ##.x.184 10 0) (bruijn ##.x.185 9 0) (bruijn ##.x.186 8 0) (bruijn ##.x.187 7 0) (bruijn ##.x.188 6 0) (bruijn ##.x.189 5 0) (bruijn ##.x.190 4 0) (bruijn ##.x.191 3 0) (bruijn ##.x.192 2 0) (bruijn ##.x.193 1 0) (bruijn ##.x.194 0 0))
    V_CALL_FUNC(_V0vanity_V0bytecode_V20_lambda2, env, runtime,
      VGetArg(upenv, 23-1, 0),
      VGetArg(upenv, 22-1, 0),
      VGetArg(upenv, 21-1, 0),
      VGetArg(upenv, 20-1, 0),
      VGetArg(upenv, 19-1, 0),
      VGetArg(upenv, 18-1, 0),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0),
      VGetArg(upenv, 15-1, 0),
      VGetArg(upenv, 14-1, 0),
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 12-1, 0),
      VGetArg(upenv, 11-1, 0),
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0bytecode_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 23 0) (close _V0vanity_V0bytecode_V20_k28) 'call-with-values)
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k28, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0bytecode_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 22 0) (close _V0vanity_V0bytecode_V20_k27) 'apply)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k27, env)}),
      _V0apply);
 }
}
static void _V0vanity_V0bytecode_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 21 0) (close _V0vanity_V0bytecode_V20_k26) 'values)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k26, env)}),
      _V0values);
 }
}
static void _V0vanity_V0bytecode_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 20 0) (close _V0vanity_V0bytecode_V20_k25) '+)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k25, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0bytecode_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 19 0) (close _V0vanity_V0bytecode_V20_k24) 'car)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k24, env)}),
      _V0car);
 }
}
static void _V0vanity_V0bytecode_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 18 0) (close _V0vanity_V0bytecode_V20_k23) 'vector-ref)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k23, env)}),
      _V0vector__ref);
 }
}
static void _V0vanity_V0bytecode_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 17 0) (close _V0vanity_V0bytecode_V20_k22) 'eqv?)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k22, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0bytecode_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 16 0) (close _V0vanity_V0bytecode_V20_k21) 'vector-length)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k21, env)}),
      _V0vector__length);
 }
}
static void _V0vanity_V0bytecode_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 15 0) (close _V0vanity_V0bytecode_V20_k20) '>=)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k20, env)}),
      _V0_G_E);
 }
}
static void _V0vanity_V0bytecode_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 14 0) (close _V0vanity_V0bytecode_V20_k19) 'eq?)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k19, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0bytecode_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 13 0) (close _V0vanity_V0bytecode_V20_k18) 'not)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k18, env)}),
      _V0not);
 }
}
static void _V0vanity_V0bytecode_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 12 0) (close _V0vanity_V0bytecode_V20_k17) 'vector-set!)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k17, env)}),
      _V0vector__set_B);
 }
}
static void _V0vanity_V0bytecode_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 11 0) (close _V0vanity_V0bytecode_V20_k16) 'cons)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k16, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0bytecode_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 10 0) (close _V0vanity_V0bytecode_V20_k15) 'call/cc)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k15, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0bytecode_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 9 0) (close _V0vanity_V0bytecode_V20_k14) 'lookup-intrinsic)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k14, env)}),
      _V0lookup__intrinsic);
 }
}
static void _V0vanity_V0bytecode_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 8 0) (close _V0vanity_V0bytecode_V20_k13) 'cdr)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k13, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0bytecode_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 7 0) (close _V0vanity_V0bytecode_V20_k12) '-)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k12, env)}),
      _V0__);
 }
}
static void _V0vanity_V0bytecode_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 6 0) (close _V0vanity_V0bytecode_V20_k11) 'symbol?)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k11, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0bytecode_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 5 0) (close _V0vanity_V0bytecode_V20_k10) 'assv)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k10, env)}),
      _V0assv);
 }
}
static void _V0vanity_V0bytecode_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 4 0) (close _V0vanity_V0bytecode_V20_k9) 'integer?)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k9, env)}),
      _V0integer_Q);
 }
}
static void _V0vanity_V0bytecode_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 3 0) (close _V0vanity_V0bytecode_V20_k8) 'equal?)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k8, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0bytecode_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 2 0) (close _V0vanity_V0bytecode_V20_k7) 'error)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k7, env)}),
      _V0error);
 }
}
static void _V0vanity_V0bytecode_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 1 0) (close _V0vanity_V0bytecode_V20_k6) 'eof-object?)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k6, env)}),
      _V0eof__object_Q);
 }
}
static void _V0vanity_V0bytecode_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.45 0 0) (close _V0vanity_V0bytecode_V20_k5) 'read)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k5, env)}),
      _V0read);
 }
}
static void _V0vanity_V0bytecode_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0bytecode_V20_k4) (##string ##.string.495) (bruijn ##.x.472 2 0) (bruijn ##.x.473 1 0) (bruijn ##.x.474 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D495.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0bytecode_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k3) (##string ##.string.496))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D496.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0bytecode_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k2) (##string ##.string.497))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D497.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0bytecode_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k1) (##string ##.string.498))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D498.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0bytecode_V20 = (VFunc)_V0vanity_V0bytecode_V20_lambda1;
