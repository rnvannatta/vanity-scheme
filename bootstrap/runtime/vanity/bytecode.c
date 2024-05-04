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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D576 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D575 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D574 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D573 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_V0vanity_V0bytecode_V20" };
VWEAK VWORD _V0integer_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "integer\?" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0vector__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "vector-set!" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0_G_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, ">=" };
VWEAK VWORD _V0vector__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vector-length" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0vector__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-ref" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D572 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VMakeVasmLambda" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D571 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEvalVasmToplevel" };
VWEAK VWORD _V0eval__vasm;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0eval__vasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "eval-vasm" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D570 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "declare not declare\?" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D569 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm: unknown or malformed line" };
VWEAK VWORD _V0letrec__end;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0letrec__end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "letrec-end" };
VWEAK VWORD _V0letrec__begin;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0letrec__begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "letrec-begin" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D568 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm letrec-begin an integer" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D567 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "vasm bf: not an integer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D566 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "vasm bf: unknown label" };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
VWEAK VWORD _V0push__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0push__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "push-set!" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D565 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm declare: not a nonnegative integer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D564 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "vasm declare: unknown label" };
VWEAK VWORD _V0declare;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "declare" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D563 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vasm declare: not a string" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D562 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "vasm close: not a nonnegative integer" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D561 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm close: unknown label" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
VWEAK VWORD _V0case__lambda__error;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0case__lambda__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "case-lambda-error" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D560 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "vasm case-lambda+: not an integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D559 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda+: unknown label" };
VWEAK VWORD _V0case__lambda_P;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0case__lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "case-lambda+" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D558 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "vasm case-lambda+: not a nonnegative integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D557 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda: not an integer" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D556 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm case-lambda: unknown label" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D555 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "vasm case-lambda: not a nonnegative integer" };
VWEAK VWORD _V0lambda_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "lambda+" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D554 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm lambda+: not a nonnegative integer" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D553 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vasm lambda: not a nonnegative integer" };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D552 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "vasm call: not a nonnegative integer" };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D551 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm lookup: not a symbol" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D550 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm bruijn: not both nonnegative integers" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D549 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm intrinsic: not a recognized intrinsic" };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D548 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm intrinsic: not a symbol" };
VWEAK VWORD _V0push;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0push = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "push" };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D547 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm label: label declared twice" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D546 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "vasm label: not a symbol" };
static __attribute__((constructor)) void VDllMain1() {
  _V0integer_Q = VEncodePointer(VLookupConstant("_V0integer_Q", &_VW_V0integer_Q), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VLookupConstant("_V0lookup__intrinsic", &_VW_V0lookup__intrinsic), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0vector__set_B = VEncodePointer(VLookupConstant("_V0vector__set_B", &_VW_V0vector__set_B), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
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
  _V0declare = VEncodePointer(VLookupConstant("_V0declare", &_VW_V0declare), VPOINTER_OTHER);
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
static void _V10_Dpeel__loop_D91_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k39, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.245 1 0) ((bruijn ##.error.66 20 11) (bruijn ##.k.246 0 0) (##string ##.string.546) (bruijn ##.label.97 4 0)) ((bruijn ##.k.246 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 20-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D546.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpeel__loop_D91_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k42, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.243 1 0) ((bruijn ##.error.66 22 11) (bruijn ##.k.244 0 0) (##string ##.string.547) (bruijn ##.label.97 6 0)) ((bruijn ##.k.244 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 22-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D547.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpeel__loop_D91_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k49, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.93 17 1) (bruijn ##.k.230 15 0) (bruijn ##.x.235 0 0))
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 15-1, 0),
      _var0);
 }
}
static void _V10_Dpeel__loop_D91_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.peel-loop.91 19 0) (close _V10_Dpeel__loop_D91_k49) (bruijn ##.x.240 0 0))
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k49, env)}),
      _var0);
 }
}
static void _V10_Dpeel__loop_D91_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.74 26 19) (close _V10_Dpeel__loop_D91_k48) (bruijn ##.pc.92 17 1) 1)
    V_CALL(VGetArg(upenv, 26-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k48, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodeInt(1l));
 }
}
static void _V10_Dpeel__loop_D91_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-set!.63 25 8) (close _V10_Dpeel__loop_D91_k47) (bruijn ##.tape.89 19 1) (bruijn ##.pc.92 16 1) (##inline ##vcore.car (bruijn ##.expr.4.98 8 0)))
    V_CALL(VGetArg(upenv, 25-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k47, env)}),
      VGetArg(upenv, 19-1, 1),
      VGetArg(upenv, 16-1, 1),
      VInlineCar2(runtime,
        VGetArg(upenv, 8-1, 0)));
 }
}
static void _V10_Dpeel__loop_D91_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dpeel__loop_D91_k46) (bruijn ##.labels.86 19 0) (bruijn ##.x.241 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k46, env)}),
      VEncodeInt(19l), VEncodeInt(0l),
      _var0
    );
 }
}
static void _V10_Dpeel__loop_D91_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.62 23 7) (close _V10_Dpeel__loop_D91_k45) (bruijn ##.x.242 0 0) (bruijn ##.labels.86 18 0))
    V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k45, env)}),
      _var0,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V10_Dpeel__loop_D91_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.62 22 7) (close _V10_Dpeel__loop_D91_k44) (bruijn ##.label.97 6 0) (bruijn ##.pc.92 13 1))
    V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k44, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V10_Dpeel__loop_D91_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D91_k42) (close _V10_Dpeel__loop_D91_k43))
    V_CALL_FUNC(_V10_Dpeel__loop_D91_k42, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k43, env)}));
 }
}
static void _V10_Dpeel__loop_D91_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assv.56 20 1) (close _V10_Dpeel__loop_D91_k41) (bruijn ##.label.97 4 0) (bruijn ##.labels.86 15 0))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k41, env)}),
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 15-1, 0));
 }
}
static void _V10_Dpeel__loop_D91_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D91_k39) (close _V10_Dpeel__loop_D91_k40))
    V_CALL_FUNC(_V10_Dpeel__loop_D91_k39, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k40, env)}));
 }
}
static void _V10_Dpeel__loop_D91_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.64 18 9) (close _V10_Dpeel__loop_D91_k38) (bruijn ##.x.247 0 0))
    V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k38, env)}),
      _var0);
 }
}
static void _V10_Dpeel__loop_D91_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.98 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.4.98 0 0))) ((bruijn ##.symbol?.57 17 2) (close _V10_Dpeel__loop_D91_k37) (bruijn ##.label.97 1 0)) ((bruijn ##.k.230 4 0) #f)) ((bruijn ##.k.230 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k37, env)}),
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
static void _V10_Dpeel__loop_D91_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D91_k36) (##inline ##vcore.cdr (bruijn ##.expr.3.96 1 0)))
    V_CALL_FUNC(_V10_Dpeel__loop_D91_k36, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dpeel__loop_D91_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.96 0 0)) ((close _V10_Dpeel__loop_D91_k35) (##inline ##vcore.car (bruijn ##.expr.3.96 0 0))) ((bruijn ##.k.230 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpeel__loop_D91_k35, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpeel__loop_D91_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.231 0 0) ((close _V10_Dpeel__loop_D91_k34) (##inline ##vcore.cdr (bruijn ##.expr.2.95 2 0))) ((bruijn ##.k.230 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpeel__loop_D91_k34, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpeel__loop_D91_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.2.95 1 0)) ((bruijn ##.equal?.67 13 12) (close _V10_Dpeel__loop_D91_k33) 'label (##inline ##vcore.car (bruijn ##.expr.2.95 1 0))) ((bruijn ##.k.230 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 13-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k33, env)}),
      _V0label,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpeel__loop_D91_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.93 4 1) (bruijn ##.k.225 4 0) (bruijn ##.x.227 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dpeel__loop_D91_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.peel-loop.91 6 0) (close _V10_Dpeel__loop_D91_k52) (bruijn ##.x.228 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k52, env)}),
      _var0);
 }
}
static void _V10_Dpeel__loop_D91_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.74 13 19) (close _V10_Dpeel__loop_D91_k51) (bruijn ##.pc.92 4 1) 1)
    V_CALL(VGetArg(upenv, 13-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k51, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dpeel__loop_D91_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_lambda7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D91_k32) (close _V10_Dpeel__loop_D91_k50))
    V_CALL_FUNC(_V10_Dpeel__loop_D91_k32, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k50, env)}));
 }
}
static void _V10_Dpeel__loop_D91_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.vector-ref.72 11 17) (close _V10_Dpeel__loop_D91_lambda7) (bruijn ##.tape.89 5 1) (bruijn ##.pc.92 2 1))
    V_CALL(VGetArg(upenv, 11-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_lambda7, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->vars[1]);
 }
}
static void _V10_Dpeel__loop_D91_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.224 0 0) ((bruijn ##.k.223 1 0) (bruijn ##.tape.89 4 1)) ((bruijn ##.call/cc.68 10 13) (bruijn ##.k.223 1 0) (close _V10_Dpeel__loop_D91_lambda6)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 10-1, 13), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_lambda6, env)}));
}
 }
}
static void _V10_Dpeel__loop_D91_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpeel__loop_D91_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D91_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__loop_D91_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.>=.69 9 14) (close _V10_Dpeel__loop_D91_k31) (bruijn ##.pc.92 0 1) (bruijn ##.len.90 2 0))
    V_CALL(VGetArg(upenv, 9-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_k31, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V10_Dpeel__labels_D87_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpeel__labels_D87_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__labels_D87_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__labels_D87_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dpeel__loop_D91_lambda5)) ((bruijn ##.peel-loop.91 0 0) (bruijn ##.k.222 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D91_lambda5, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dpeel__labels_D87_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpeel__labels_D87_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__labels_D87_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpeel__labels_D87_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.vector-length.70 6 15) (close _V10_Dpeel__labels_D87_k30) (bruijn ##.tape.89 0 1))
    V_CALL(VGetArg(upenv, 6-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__labels_D87_k30, env)}),
      _var1);
 }
}
static void _V10_Dpreprocess__expr_D88_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k54, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.486 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.7.104 2 0))) ((bruijn ##.kk.5.102 4 1) (bruijn ##.k.485 1 0) (bruijn ##.expr.100 5 1)) ((bruijn ##.k.485 1 0) #f)) ((bruijn ##.k.485 1 0) #f))
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
static void _V10_Dpreprocess__expr_D88_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.104 1 0)) ((bruijn ##.equal?.67 10 12) (close _V10_Dpreprocess__expr_D88_k54) 'toplevel (##inline ##vcore.car (bruijn ##.expr.7.104 1 0))) ((bruijn ##.k.485 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k54, env)}),
      _V0toplevel,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k58, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.106 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.9.106 0 0))) ((bruijn ##.kk.5.102 7 1) (bruijn ##.k.478 2 0) (bruijn ##.expr.100 8 1)) ((bruijn ##.k.478 2 0) #f)) ((bruijn ##.k.478 2 0) #f))
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
static void _V10_Dpreprocess__expr_D88_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.479 0 0) ((close _V10_Dpreprocess__expr_D88_k58) (##inline ##vcore.cdr (bruijn ##.expr.8.105 2 0))) ((bruijn ##.k.478 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k58, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.105 1 0)) ((bruijn ##.equal?.67 12 12) (close _V10_Dpreprocess__expr_D88_k57) 'push (##inline ##vcore.car (bruijn ##.expr.8.105 1 0))) ((bruijn ##.k.478 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k57, env)}),
      _V0push,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda14" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda14, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.472 2 0) (##inline ##vcore.cons 'intrinsic (##inline ##vcore.cons (bruijn ##.f.112 0 0) '())))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0intrinsic,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Dpreprocess__expr_D88_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.43.111 0 0) ((close _V10_Dpreprocess__expr_D88_lambda14) (bruijn ##.x.43.111 0 0)) ((bruijn ##.error.66 21 11) (bruijn ##.k.472 1 0) (##string ##.string.549) (bruijn ##.x.110 4 0)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda14, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 21-1, 11), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D549.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.471 1 0) ((bruijn ##.error.66 20 11) (bruijn ##.k.472 0 0) (##string ##.string.548) (bruijn ##.x.110 3 0)) ((bruijn ##.lookup-intrinsic.61 20 6) (close _V10_Dpreprocess__expr_D88_k67) (bruijn ##.x.110 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 20-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D548.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k67, env)}),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k68, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 13 1) (bruijn ##.k.466 6 0) (bruijn ##.x.470 0 0))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k66) (close _V10_Dpreprocess__expr_D88_k68))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k66, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k68, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.64 18 9) (close _V10_Dpreprocess__expr_D88_k65) (bruijn ##.x.474 0 0))
    V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k65, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.109 1 0))) ((bruijn ##.symbol?.57 17 2) (close _V10_Dpreprocess__expr_D88_k64) (bruijn ##.x.110 0 0)) ((bruijn ##.k.466 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k64, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.109 0 0)) ((close _V10_Dpreprocess__expr_D88_k63) (##inline ##vcore.car (bruijn ##.expr.11.109 0 0))) ((bruijn ##.k.466 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k63, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.467 0 0) ((close _V10_Dpreprocess__expr_D88_k62) (##inline ##vcore.cdr (bruijn ##.expr.10.108 2 0))) ((bruijn ##.k.466 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k62, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.108 1 0)) ((bruijn ##.equal?.67 14 12) (close _V10_Dpreprocess__expr_D88_k61) 'intrinsic (##inline ##vcore.car (bruijn ##.expr.10.108 1 0))) ((bruijn ##.k.466 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k61, env)}),
      _V0intrinsic,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k79, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.462 0 0) ((bruijn ##.>=.69 25 14) (bruijn ##.k.460 2 0) (bruijn ##.right.117 4 0) 0) ((bruijn ##.k.460 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 25-1, 14), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.461 0 0) ((bruijn ##.>=.69 24 14) (close _V10_Dpreprocess__expr_D88_k79) (bruijn ##.up.115 5 0) 0) ((bruijn ##.k.460 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 24-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k79, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(0l));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.459 1 0) ((bruijn ##.integer?.55 23 0) (close _V10_Dpreprocess__expr_D88_k78) (bruijn ##.right.117 2 0)) ((bruijn ##.k.460 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k78, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k81, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.457 1 0) ((bruijn ##.k.458 0 0) (bruijn ##.expr.100 18 1)) ((bruijn ##.error.66 24 11) (bruijn ##.k.458 0 0) (##string ##.string.550) (bruijn ##.up.115 5 0) (bruijn ##.right.117 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 18-1, 1));
} else {
    V_CALL(VGetArg(upenv, 24-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D550.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k82, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 17 1) (bruijn ##.k.451 8 0) (bruijn ##.x.456 0 0))
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k81) (close _V10_Dpreprocess__expr_D88_k82))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k81, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k82, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k77) (close _V10_Dpreprocess__expr_D88_k80))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k77, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k80, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.14.116 1 0))) ((bruijn ##.integer?.55 21 0) (close _V10_Dpreprocess__expr_D88_k76) (bruijn ##.up.115 2 0)) ((bruijn ##.k.451 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k76, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.116 0 0)) ((close _V10_Dpreprocess__expr_D88_k75) (##inline ##vcore.car (bruijn ##.expr.14.116 0 0))) ((bruijn ##.k.451 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k75, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k74) (##inline ##vcore.cdr (bruijn ##.expr.13.114 1 0)))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k74, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dpreprocess__expr_D88_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.114 0 0)) ((close _V10_Dpreprocess__expr_D88_k73) (##inline ##vcore.car (bruijn ##.expr.13.114 0 0))) ((bruijn ##.k.451 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k73, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.452 0 0) ((close _V10_Dpreprocess__expr_D88_k72) (##inline ##vcore.cdr (bruijn ##.expr.12.113 2 0))) ((bruijn ##.k.451 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k72, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.113 1 0)) ((bruijn ##.equal?.67 16 12) (close _V10_Dpreprocess__expr_D88_k71) 'bruijn (##inline ##vcore.car (bruijn ##.expr.12.113 1 0))) ((bruijn ##.k.451 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k71, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k89, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.446 1 0) ((bruijn ##.k.447 0 0) (bruijn ##.expr.100 17 1)) ((bruijn ##.error.66 23 11) (bruijn ##.k.447 0 0) (##string ##.string.551) (bruijn ##.x.120 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 17-1, 1));
} else {
    V_CALL(VGetArg(upenv, 23-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D551.sym, VPOINTER_OTHER),
      upenv->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k90, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 16 1) (bruijn ##.k.441 5 0) (bruijn ##.x.445 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k89) (close _V10_Dpreprocess__expr_D88_k90))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k89, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k90, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.16.119 1 0))) ((bruijn ##.symbol?.57 21 2) (close _V10_Dpreprocess__expr_D88_k88) (bruijn ##.x.120 0 0)) ((bruijn ##.k.441 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k88, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.119 0 0)) ((close _V10_Dpreprocess__expr_D88_k87) (##inline ##vcore.car (bruijn ##.expr.16.119 0 0))) ((bruijn ##.k.441 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k87, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.442 0 0) ((close _V10_Dpreprocess__expr_D88_k86) (##inline ##vcore.cdr (bruijn ##.expr.15.118 2 0))) ((bruijn ##.k.441 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k86, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.118 1 0)) ((bruijn ##.equal?.67 18 12) (close _V10_Dpreprocess__expr_D88_k85) 'lookup (##inline ##vcore.car (bruijn ##.expr.15.118 1 0))) ((bruijn ##.k.441 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k85, env)}),
      _V0lookup,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k97, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.436 1 0) ((bruijn ##.>=.69 25 14) (bruijn ##.k.437 0 0) (bruijn ##.x.123 2 0) 0) ((bruijn ##.k.437 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 25-1, 14), runtime,
      _var0,
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k99, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.434 1 0) ((bruijn ##.k.435 0 0) (bruijn ##.expr.100 20 1)) ((bruijn ##.error.66 26 11) (bruijn ##.k.435 0 0) (##string ##.string.552) (bruijn ##.x.123 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 20-1, 1));
} else {
    V_CALL(VGetArg(upenv, 26-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D552.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k100, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 19 1) (bruijn ##.k.429 6 0) (bruijn ##.x.433 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k99) (close _V10_Dpreprocess__expr_D88_k100))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k99, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k100, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k97) (close _V10_Dpreprocess__expr_D88_k98))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k97, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k98, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.122 1 0))) ((bruijn ##.integer?.55 23 0) (close _V10_Dpreprocess__expr_D88_k96) (bruijn ##.x.123 0 0)) ((bruijn ##.k.429 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k96, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.122 0 0)) ((close _V10_Dpreprocess__expr_D88_k95) (##inline ##vcore.car (bruijn ##.expr.18.122 0 0))) ((bruijn ##.k.429 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k95, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.430 0 0) ((close _V10_Dpreprocess__expr_D88_k94) (##inline ##vcore.cdr (bruijn ##.expr.17.121 2 0))) ((bruijn ##.k.429 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k94, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.121 1 0)) ((bruijn ##.equal?.67 20 12) (close _V10_Dpreprocess__expr_D88_k93) 'call (##inline ##vcore.car (bruijn ##.expr.17.121 1 0))) ((bruijn ##.k.429 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 20-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k93, env)}),
      _V0call,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k107, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.424 1 0) ((bruijn ##.>=.69 27 14) (bruijn ##.k.425 0 0) (bruijn ##.x.126 2 0) 0) ((bruijn ##.k.425 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 27-1, 14), runtime,
      _var0,
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k109, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.422 1 0) ((bruijn ##.k.423 0 0) (bruijn ##.expr.100 22 1)) ((bruijn ##.error.66 28 11) (bruijn ##.k.423 0 0) (##string ##.string.553) (bruijn ##.x.126 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 22-1, 1));
} else {
    V_CALL(VGetArg(upenv, 28-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D553.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k110, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 21 1) (bruijn ##.k.417 6 0) (bruijn ##.x.421 0 0))
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k109) (close _V10_Dpreprocess__expr_D88_k110))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k109, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k110, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k107) (close _V10_Dpreprocess__expr_D88_k108))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k107, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k108, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.20.125 1 0))) ((bruijn ##.integer?.55 25 0) (close _V10_Dpreprocess__expr_D88_k106) (bruijn ##.x.126 0 0)) ((bruijn ##.k.417 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k106, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.125 0 0)) ((close _V10_Dpreprocess__expr_D88_k105) (##inline ##vcore.car (bruijn ##.expr.20.125 0 0))) ((bruijn ##.k.417 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k105, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.418 0 0) ((close _V10_Dpreprocess__expr_D88_k104) (##inline ##vcore.cdr (bruijn ##.expr.19.124 2 0))) ((bruijn ##.k.417 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k104, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.19.124 1 0)) ((bruijn ##.equal?.67 22 12) (close _V10_Dpreprocess__expr_D88_k103) 'lambda (##inline ##vcore.car (bruijn ##.expr.19.124 1 0))) ((bruijn ##.k.417 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 22-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k103, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k117, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.412 1 0) ((bruijn ##.>=.69 29 14) (bruijn ##.k.413 0 0) (bruijn ##.x.129 2 0) 0) ((bruijn ##.k.413 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 29-1, 14), runtime,
      _var0,
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k119, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.410 1 0) ((bruijn ##.k.411 0 0) (bruijn ##.expr.100 24 1)) ((bruijn ##.error.66 30 11) (bruijn ##.k.411 0 0) (##string ##.string.554) (bruijn ##.x.129 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 24-1, 1));
} else {
    V_CALL(VGetArg(upenv, 30-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D554.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k120, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 23 1) (bruijn ##.k.405 6 0) (bruijn ##.x.409 0 0))
    V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k119) (close _V10_Dpreprocess__expr_D88_k120))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k119, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k120, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k117) (close _V10_Dpreprocess__expr_D88_k118))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k117, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k118, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.128 1 0))) ((bruijn ##.integer?.55 27 0) (close _V10_Dpreprocess__expr_D88_k116) (bruijn ##.x.129 0 0)) ((bruijn ##.k.405 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k116, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.128 0 0)) ((close _V10_Dpreprocess__expr_D88_k115) (##inline ##vcore.car (bruijn ##.expr.22.128 0 0))) ((bruijn ##.k.405 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k115, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.406 0 0) ((close _V10_Dpreprocess__expr_D88_k114) (##inline ##vcore.cdr (bruijn ##.expr.21.127 2 0))) ((bruijn ##.k.405 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k114, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.127 1 0)) ((bruijn ##.equal?.67 24 12) (close _V10_Dpreprocess__expr_D88_k113) 'lambda+ (##inline ##vcore.car (bruijn ##.expr.21.127 1 0))) ((bruijn ##.k.405 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 24-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k113, env)}),
      _V0lambda_P,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k129, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.400 1 0) ((bruijn ##.>=.69 33 14) (bruijn ##.k.401 0 0) (bruijn ##.x.132 4 0) 0) ((bruijn ##.k.401 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 33-1, 14), runtime,
      _var0,
      upenv->up->up->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k132, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.397 1 0) ((bruijn ##.error.66 35 11) (bruijn ##.k.398 0 0) (##string ##.string.555) (bruijn ##.x.132 6 0)) ((bruijn ##.k.398 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 35-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D555.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k137, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.395 1 0) ((bruijn ##.assv.56 39 1) (bruijn ##.k.396 0 0) (bruijn ##.b.134 8 0) (bruijn ##.labels.86 34 0)) ((bruijn ##.k.396 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 39-1, 1), runtime,
      _var0,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 34-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k140, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.389 5 0) (##inline ##vcore.cons 'case-lambda (##inline ##vcore.cons (bruijn ##.x.132 13 0) (##inline ##vcore.cons (bruijn ##.x.392 0 0) '()))))
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
static void _V10_Dpreprocess__expr_D88_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.58 41 3) (close _V10_Dpreprocess__expr_D88_k140) (bruijn ##.x.393 0 0) (bruijn ##.pc.101 35 2) 1)
    V_CALL(VGetArg(upenv, 41-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k140, env)}),
      _var0,
      VGetArg(upenv, 35-1, 2),
      VEncodeInt(1l));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda21" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.59 40 4) (close _V10_Dpreprocess__expr_D88_k139) (bruijn ##.label.136 0 0))
    V_CALL(VGetArg(upenv, 40-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k139, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k141, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.394 0 0) ((bruijn ##.error.66 40 11) (bruijn ##.k.389 3 0) (##string ##.string.556) (bruijn ##.b.134 9 0)) ((bruijn ##.error.66 40 11) (bruijn ##.k.389 3 0) (##string ##.string.557) (bruijn ##.b.134 9 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 40-1, 11), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D556.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
} else {
    V_CALL(VGetArg(upenv, 40-1, 11), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D557.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.44.135 0 0) ((close _V10_Dpreprocess__expr_D88_lambda21) (bruijn ##.x.44.135 0 0)) ((bruijn ##.symbol?.57 39 2) (close _V10_Dpreprocess__expr_D88_k141) (bruijn ##.b.134 8 0)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda21, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 39-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k141, env)}),
      VGetArg(upenv, 8-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k137) (close _V10_Dpreprocess__expr_D88_k138))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k137, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k138, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.388 1 0) ((bruijn ##.k.389 0 0) (bruijn ##.expr.100 31 1)) ((bruijn ##.symbol?.57 37 2) (close _V10_Dpreprocess__expr_D88_k136) (bruijn ##.b.134 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 31-1, 1));
} else {
    V_CALL(VGetArg(upenv, 37-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k136, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k142, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 30 1) (bruijn ##.k.381 11 0) (bruijn ##.x.386 0 0))
    V_CALL(VGetArg(upenv, 30-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k135) (close _V10_Dpreprocess__expr_D88_k142))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k135, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k142, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.55 35 0) (close _V10_Dpreprocess__expr_D88_k134) (bruijn ##.b.134 4 0))
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k134, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dpreprocess__expr_D88_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k132) (close _V10_Dpreprocess__expr_D88_k133))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k132, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k133, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.64 33 9) (close _V10_Dpreprocess__expr_D88_k131) (bruijn ##.x.399 0 0))
    V_CALL(VGetArg(upenv, 33-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k131, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k129) (close _V10_Dpreprocess__expr_D88_k130))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k129, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k130, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.25.133 1 0))) ((bruijn ##.integer?.55 31 0) (close _V10_Dpreprocess__expr_D88_k128) (bruijn ##.x.132 2 0)) ((bruijn ##.k.381 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k128, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.133 0 0)) ((close _V10_Dpreprocess__expr_D88_k127) (##inline ##vcore.car (bruijn ##.expr.25.133 0 0))) ((bruijn ##.k.381 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k127, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k126) (##inline ##vcore.cdr (bruijn ##.expr.24.131 1 0)))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k126, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dpreprocess__expr_D88_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.131 0 0)) ((close _V10_Dpreprocess__expr_D88_k125) (##inline ##vcore.car (bruijn ##.expr.24.131 0 0))) ((bruijn ##.k.381 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k125, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.382 0 0) ((close _V10_Dpreprocess__expr_D88_k124) (##inline ##vcore.cdr (bruijn ##.expr.23.130 2 0))) ((bruijn ##.k.381 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k124, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.130 1 0)) ((bruijn ##.equal?.67 26 12) (close _V10_Dpreprocess__expr_D88_k123) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.23.130 1 0))) ((bruijn ##.k.381 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 26-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k123, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k151, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.376 1 0) ((bruijn ##.>=.69 35 14) (bruijn ##.k.377 0 0) (bruijn ##.x.139 4 0) 0) ((bruijn ##.k.377 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 35-1, 14), runtime,
      _var0,
      upenv->up->up->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k154, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.373 1 0) ((bruijn ##.error.66 37 11) (bruijn ##.k.374 0 0) (##string ##.string.558) (bruijn ##.x.139 6 0)) ((bruijn ##.k.374 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 37-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D558.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k159, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.371 1 0) ((bruijn ##.assv.56 41 1) (bruijn ##.k.372 0 0) (bruijn ##.b.141 8 0) (bruijn ##.labels.86 36 0)) ((bruijn ##.k.372 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 41-1, 1), runtime,
      _var0,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 36-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k162, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.365 5 0) (##inline ##vcore.cons 'case-lambda+ (##inline ##vcore.cons (bruijn ##.x.139 13 0) (##inline ##vcore.cons (bruijn ##.x.368 0 0) '()))))
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
static void _V10_Dpreprocess__expr_D88_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.58 43 3) (close _V10_Dpreprocess__expr_D88_k162) (bruijn ##.x.369 0 0) (bruijn ##.pc.101 37 2) 1)
    V_CALL(VGetArg(upenv, 43-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k162, env)}),
      _var0,
      VGetArg(upenv, 37-1, 2),
      VEncodeInt(1l));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda23" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.59 42 4) (close _V10_Dpreprocess__expr_D88_k161) (bruijn ##.label.143 0 0))
    V_CALL(VGetArg(upenv, 42-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k161, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k163, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.370 0 0) ((bruijn ##.error.66 42 11) (bruijn ##.k.365 3 0) (##string ##.string.559) (bruijn ##.b.141 9 0)) ((bruijn ##.error.66 42 11) (bruijn ##.k.365 3 0) (##string ##.string.560) (bruijn ##.b.141 9 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 42-1, 11), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D559.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
} else {
    V_CALL(VGetArg(upenv, 42-1, 11), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D560.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.45.142 0 0) ((close _V10_Dpreprocess__expr_D88_lambda23) (bruijn ##.x.45.142 0 0)) ((bruijn ##.symbol?.57 41 2) (close _V10_Dpreprocess__expr_D88_k163) (bruijn ##.b.141 8 0)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda23, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 41-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k163, env)}),
      VGetArg(upenv, 8-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k159) (close _V10_Dpreprocess__expr_D88_k160))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k159, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k160, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.364 1 0) ((bruijn ##.k.365 0 0) (bruijn ##.expr.100 33 1)) ((bruijn ##.symbol?.57 39 2) (close _V10_Dpreprocess__expr_D88_k158) (bruijn ##.b.141 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 33-1, 1));
} else {
    V_CALL(VGetArg(upenv, 39-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k158, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 32 1) (bruijn ##.k.357 11 0) (bruijn ##.x.362 0 0))
    V_CALL(VGetArg(upenv, 32-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k157) (close _V10_Dpreprocess__expr_D88_k164))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k157, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k164, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.55 37 0) (close _V10_Dpreprocess__expr_D88_k156) (bruijn ##.b.141 4 0))
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k156, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dpreprocess__expr_D88_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k154) (close _V10_Dpreprocess__expr_D88_k155))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k155, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.64 35 9) (close _V10_Dpreprocess__expr_D88_k153) (bruijn ##.x.375 0 0))
    V_CALL(VGetArg(upenv, 35-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k153, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k151) (close _V10_Dpreprocess__expr_D88_k152))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k151, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k152, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.140 1 0))) ((bruijn ##.integer?.55 33 0) (close _V10_Dpreprocess__expr_D88_k150) (bruijn ##.x.139 2 0)) ((bruijn ##.k.357 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k150, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.140 0 0)) ((close _V10_Dpreprocess__expr_D88_k149) (##inline ##vcore.car (bruijn ##.expr.28.140 0 0))) ((bruijn ##.k.357 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k149, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k148) (##inline ##vcore.cdr (bruijn ##.expr.27.138 1 0)))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k148, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dpreprocess__expr_D88_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.138 0 0)) ((close _V10_Dpreprocess__expr_D88_k147) (##inline ##vcore.car (bruijn ##.expr.27.138 0 0))) ((bruijn ##.k.357 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k147, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.358 0 0) ((close _V10_Dpreprocess__expr_D88_k146) (##inline ##vcore.cdr (bruijn ##.expr.26.137 2 0))) ((bruijn ##.k.357 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k146, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.137 1 0)) ((bruijn ##.equal?.67 28 12) (close _V10_Dpreprocess__expr_D88_k145) 'case-lambda+ (##inline ##vcore.car (bruijn ##.expr.26.137 1 0))) ((bruijn ##.k.357 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 28-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k145, env)}),
      _V0case__lambda_P,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k169, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.147 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.147 0 0))) ((bruijn ##.kk.5.102 26 1) (bruijn ##.k.349 3 0) (bruijn ##.expr.100 27 1)) ((bruijn ##.k.349 3 0) #f)) ((bruijn ##.k.349 3 0) #f))
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
static void _V10_Dpreprocess__expr_D88_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.145 0 0)) ((close _V10_Dpreprocess__expr_D88_k169) (##inline ##vcore.cdr (bruijn ##.expr.30.145 0 0))) ((bruijn ##.k.349 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k169, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.350 0 0) ((close _V10_Dpreprocess__expr_D88_k168) (##inline ##vcore.cdr (bruijn ##.expr.29.144 2 0))) ((bruijn ##.k.349 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k168, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.144 1 0)) ((bruijn ##.equal?.67 30 12) (close _V10_Dpreprocess__expr_D88_k167) 'case-lambda-error (##inline ##vcore.car (bruijn ##.expr.29.144 1 0))) ((bruijn ##.k.349 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 30-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k167, env)}),
      _V0case__lambda__error,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k176, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.344 1 0) ((bruijn ##.assv.56 37 1) (bruijn ##.k.345 0 0) (bruijn ##.x.151 2 0) (bruijn ##.labels.86 32 0)) ((bruijn ##.k.345 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 37-1, 1), runtime,
      _var0,
      upenv->up->vars[0],
      VGetArg(upenv, 32-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k179, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.337 2 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.x.339 0 0) '())))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda26" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.59 39 4) (close _V10_Dpreprocess__expr_D88_k179) (bruijn ##.label.153 0 0))
    V_CALL(VGetArg(upenv, 39-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k179, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k182, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.342 1 0) ((bruijn ##.>=.69 41 14) (bruijn ##.k.343 0 0) (bruijn ##.x.151 6 0) 0) ((bruijn ##.k.343 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 41-1, 14), runtime,
      _var0,
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k183, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.341 0 0) ((bruijn ##.k.337 3 0) (bruijn ##.expr.100 35 1)) ((bruijn ##.error.66 41 11) (bruijn ##.k.337 3 0) (##string ##.string.562) (bruijn ##.x.151 6 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      VGetArg(upenv, 35-1, 1));
} else {
    V_CALL(VGetArg(upenv, 41-1, 11), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D562.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k182) (close _V10_Dpreprocess__expr_D88_k183))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k182, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k183, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.340 0 0) ((bruijn ##.error.66 39 11) (bruijn ##.k.337 1 0) (##string ##.string.561) (bruijn ##.x.151 4 0)) ((bruijn ##.integer?.55 39 0) (close _V10_Dpreprocess__expr_D88_k181) (bruijn ##.x.151 4 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 39-1, 11), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D561.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k181, env)}),
      upenv->up->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.46.152 1 0) ((close _V10_Dpreprocess__expr_D88_lambda26) (bruijn ##.x.46.152 1 0)) ((bruijn ##.symbol?.57 38 2) (close _V10_Dpreprocess__expr_D88_k180) (bruijn ##.x.151 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda26, env, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 38-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k180, env)}),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k184, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 31 1) (bruijn ##.k.332 6 0) (bruijn ##.x.336 0 0))
    V_CALL(VGetArg(upenv, 31-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k178) (close _V10_Dpreprocess__expr_D88_k184))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k178, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k184, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k176) (close _V10_Dpreprocess__expr_D88_k177))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k176, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k177, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.150 1 0))) ((bruijn ##.symbol?.57 35 2) (close _V10_Dpreprocess__expr_D88_k175) (bruijn ##.x.151 0 0)) ((bruijn ##.k.332 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 35-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k175, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.150 0 0)) ((close _V10_Dpreprocess__expr_D88_k174) (##inline ##vcore.car (bruijn ##.expr.33.150 0 0))) ((bruijn ##.k.332 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k174, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.333 0 0) ((close _V10_Dpreprocess__expr_D88_k173) (##inline ##vcore.cdr (bruijn ##.expr.32.149 2 0))) ((bruijn ##.k.332 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k173, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.149 1 0)) ((bruijn ##.equal?.67 32 12) (close _V10_Dpreprocess__expr_D88_k172) 'close (##inline ##vcore.car (bruijn ##.expr.32.149 1 0))) ((bruijn ##.k.332 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 32-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k172, env)}),
      _V0close,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k196, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.326 1 0) ((bruijn ##.assv.56 44 1) (bruijn ##.k.327 0 0) (bruijn ##.x.158 5 0) (bruijn ##.labels.86 39 0)) ((bruijn ##.k.327 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 44-1, 1), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 39-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k198, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.318 4 0) (##inline ##vcore.cons 'declare (##inline ##vcore.cons (bruijn ##.name.156 9 0) (##inline ##vcore.cons (bruijn ##.x.321 0 0) '()))))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0declare,
        VInlineCons2(runtime,
        VGetArg(upenv, 9-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.59 45 4) (close _V10_Dpreprocess__expr_D88_k198) (bruijn ##.label.160 0 0))
    V_CALL(VGetArg(upenv, 45-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k198, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k201, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.324 1 0) ((bruijn ##.>=.69 47 14) (bruijn ##.k.325 0 0) (bruijn ##.x.158 8 0) 0) ((bruijn ##.k.325 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 47-1, 14), runtime,
      _var0,
      VGetArg(upenv, 8-1, 0),
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k202, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.323 0 0) ((bruijn ##.k.318 5 0) (bruijn ##.expr.100 41 1)) ((bruijn ##.error.66 47 11) (bruijn ##.k.318 5 0) (##string ##.string.565) (bruijn ##.x.158 8 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VGetArg(upenv, 41-1, 1));
} else {
    V_CALL(VGetArg(upenv, 47-1, 11), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D565.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k201) (close _V10_Dpreprocess__expr_D88_k202))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k201, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k202, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.322 0 0) ((bruijn ##.error.66 45 11) (bruijn ##.k.318 3 0) (##string ##.string.564) (bruijn ##.x.158 6 0)) ((bruijn ##.integer?.55 45 0) (close _V10_Dpreprocess__expr_D88_k200) (bruijn ##.x.158 6 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 45-1, 11), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D564.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k200, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.47.159 0 0) ((close _V10_Dpreprocess__expr_D88_lambda28) (bruijn ##.x.47.159 0 0)) ((bruijn ##.symbol?.57 44 2) (close _V10_Dpreprocess__expr_D88_k199) (bruijn ##.x.158 5 0)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda28, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 44-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k199, env)}),
      VGetArg(upenv, 5-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k196) (close _V10_Dpreprocess__expr_D88_k197))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k196, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k197, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.317 1 0) ((bruijn ##.error.66 42 11) (bruijn ##.k.318 0 0) (##string ##.string.563) (bruijn ##.x.158 3 0)) ((bruijn ##.symbol?.57 42 2) (close _V10_Dpreprocess__expr_D88_k195) (bruijn ##.x.158 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 42-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D563.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 42-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k195, env)}),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k203, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 35 1) (bruijn ##.k.311 8 0) (bruijn ##.x.316 0 0))
    V_CALL(VGetArg(upenv, 35-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k194) (close _V10_Dpreprocess__expr_D88_k203))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k194, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k203, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.64 40 9) (close _V10_Dpreprocess__expr_D88_k193) (bruijn ##.x.328 0 0))
    V_CALL(VGetArg(upenv, 40-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k193, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.36.157 1 0))) ((bruijn ##.string?.60 39 5) (close _V10_Dpreprocess__expr_D88_k192) (bruijn ##.name.156 2 0)) ((bruijn ##.k.311 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 39-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k192, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.157 0 0)) ((close _V10_Dpreprocess__expr_D88_k191) (##inline ##vcore.car (bruijn ##.expr.36.157 0 0))) ((bruijn ##.k.311 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k191, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k190) (##inline ##vcore.cdr (bruijn ##.expr.35.155 1 0)))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k190, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dpreprocess__expr_D88_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.155 0 0)) ((close _V10_Dpreprocess__expr_D88_k189) (##inline ##vcore.car (bruijn ##.expr.35.155 0 0))) ((bruijn ##.k.311 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k189, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.312 0 0) ((close _V10_Dpreprocess__expr_D88_k188) (##inline ##vcore.cdr (bruijn ##.expr.34.154 2 0))) ((bruijn ##.k.311 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k188, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.154 1 0)) ((bruijn ##.equal?.67 34 12) (close _V10_Dpreprocess__expr_D88_k187) 'declare (##inline ##vcore.car (bruijn ##.expr.34.154 1 0))) ((bruijn ##.k.311 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 34-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k187, env)}),
      _V0declare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k206, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.306 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.161 2 0))) ((bruijn ##.kk.5.102 30 1) (bruijn ##.k.305 1 0) (bruijn ##.expr.100 31 1)) ((bruijn ##.k.305 1 0) #f)) ((bruijn ##.k.305 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->vars[0])))) {
    V_CALL(VGetArg(upenv, 30-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 31-1, 1));
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
static void _V10_Dpreprocess__expr_D88_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.161 1 0)) ((bruijn ##.equal?.67 36 12) (close _V10_Dpreprocess__expr_D88_k206) 'push-set! (##inline ##vcore.car (bruijn ##.expr.37.161 1 0))) ((bruijn ##.k.305 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 36-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k206, env)}),
      _V0push__set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k215, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.300 1 0) ((bruijn ##.assv.56 45 1) (bruijn ##.k.301 0 0) (bruijn ##.x.164 4 0) (bruijn ##.labels.86 40 0)) ((bruijn ##.k.301 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 45-1, 1), runtime,
      _var0,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 40-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k218, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.295 5 0) (##inline ##vcore.cons 'bf (##inline ##vcore.cons (bruijn ##.x.297 0 0) '())))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons2(runtime,
        _V0bf,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Dpreprocess__expr_D88_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.58 47 3) (close _V10_Dpreprocess__expr_D88_k218) (bruijn ##.x.298 0 0) (bruijn ##.pc.101 41 2) 1)
    V_CALL(VGetArg(upenv, 47-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k218, env)}),
      _var0,
      VGetArg(upenv, 41-1, 2),
      VEncodeInt(1l));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda31" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.59 46 4) (close _V10_Dpreprocess__expr_D88_k217) (bruijn ##.x.166 0 0))
    V_CALL(VGetArg(upenv, 46-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k217, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k219, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.299 0 0) ((bruijn ##.error.66 46 11) (bruijn ##.k.295 3 0) (##string ##.string.566) (bruijn ##.x.164 5 0)) ((bruijn ##.error.66 46 11) (bruijn ##.k.295 3 0) (##string ##.string.567) (bruijn ##.x.164 5 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 46-1, 11), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D566.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(VGetArg(upenv, 46-1, 11), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D567.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.48.165 0 0) ((close _V10_Dpreprocess__expr_D88_lambda31) (bruijn ##.x.48.165 0 0)) ((bruijn ##.symbol?.57 45 2) (close _V10_Dpreprocess__expr_D88_k219) (bruijn ##.x.164 4 0)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda31, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 45-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k219, env)}),
      upenv->up->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k215) (close _V10_Dpreprocess__expr_D88_k216))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k215, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k216, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.294 1 0) ((bruijn ##.k.295 0 0) (bruijn ##.expr.100 37 1)) ((bruijn ##.symbol?.57 43 2) (close _V10_Dpreprocess__expr_D88_k214) (bruijn ##.x.164 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 37-1, 1));
} else {
    V_CALL(VGetArg(upenv, 43-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k214, env)}),
      upenv->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k220, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 36 1) (bruijn ##.k.289 5 0) (bruijn ##.x.293 0 0))
    V_CALL(VGetArg(upenv, 36-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k213) (close _V10_Dpreprocess__expr_D88_k220))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k213, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k220, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.39.163 1 0))) ((bruijn ##.integer?.55 41 0) (close _V10_Dpreprocess__expr_D88_k212) (bruijn ##.x.164 0 0)) ((bruijn ##.k.289 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k212, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.163 0 0)) ((close _V10_Dpreprocess__expr_D88_k211) (##inline ##vcore.car (bruijn ##.expr.39.163 0 0))) ((bruijn ##.k.289 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k211, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.290 0 0) ((close _V10_Dpreprocess__expr_D88_k210) (##inline ##vcore.cdr (bruijn ##.expr.38.162 2 0))) ((bruijn ##.k.289 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k210, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.162 1 0)) ((bruijn ##.equal?.67 38 12) (close _V10_Dpreprocess__expr_D88_k209) 'bf (##inline ##vcore.car (bruijn ##.expr.38.162 1 0))) ((bruijn ##.k.289 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 38-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k209, env)}),
      _V0bf,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k227, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.284 1 0) ((bruijn ##.>=.69 45 14) (bruijn ##.k.285 0 0) (bruijn ##.x.169 2 0) 0) ((bruijn ##.k.285 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 45-1, 14), runtime,
      _var0,
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k229, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.282 1 0) ((bruijn ##.k.283 0 0) (bruijn ##.expr.100 40 1)) ((bruijn ##.error.66 46 11) (bruijn ##.k.283 0 0) (##string ##.string.568) (bruijn ##.x.169 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 40-1, 1));
} else {
    V_CALL(VGetArg(upenv, 46-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D568.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
 }
}
static void _V10_Dpreprocess__expr_D88_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k230, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 39 1) (bruijn ##.k.277 6 0) (bruijn ##.x.281 0 0))
    V_CALL(VGetArg(upenv, 39-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k229) (close _V10_Dpreprocess__expr_D88_k230))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k229, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k230, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k227) (close _V10_Dpreprocess__expr_D88_k228))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k227, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k228, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.41.168 1 0))) ((bruijn ##.integer?.55 43 0) (close _V10_Dpreprocess__expr_D88_k226) (bruijn ##.x.169 0 0)) ((bruijn ##.k.277 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k226, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.168 0 0)) ((close _V10_Dpreprocess__expr_D88_k225) (##inline ##vcore.car (bruijn ##.expr.41.168 0 0))) ((bruijn ##.k.277 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k225, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.278 0 0) ((close _V10_Dpreprocess__expr_D88_k224) (##inline ##vcore.cdr (bruijn ##.expr.40.167 2 0))) ((bruijn ##.k.277 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k224, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.167 1 0)) ((bruijn ##.equal?.67 40 12) (close _V10_Dpreprocess__expr_D88_k223) 'letrec-begin (##inline ##vcore.car (bruijn ##.expr.40.167 1 0))) ((bruijn ##.k.277 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 40-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k223, env)}),
      _V0letrec__begin,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k233, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.272 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.170 2 0))) ((bruijn ##.kk.5.102 36 1) (bruijn ##.k.271 1 0) (bruijn ##.expr.100 37 1)) ((bruijn ##.k.271 1 0) #f)) ((bruijn ##.k.271 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->vars[0])))) {
    V_CALL(VGetArg(upenv, 36-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 37-1, 1));
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
static void _V10_Dpreprocess__expr_D88_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.170 1 0)) ((bruijn ##.equal?.67 42 12) (close _V10_Dpreprocess__expr_D88_k233) 'letrec-end (##inline ##vcore.car (bruijn ##.expr.42.170 1 0))) ((bruijn ##.k.271 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 42-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k233, env)}),
      _V0letrec__end,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpreprocess__expr_D88_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k235, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.102 36 1) (bruijn ##.k.251 36 0) (bruijn ##.x.269 0 0))
    V_CALL(VGetArg(upenv, 36-1, 1), runtime,
      VGetArg(upenv, 36-1, 0),
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.error.66 42 11) (close _V10_Dpreprocess__expr_D88_k235) (##string ##.string.569) (bruijn ##.expr.100 36 1))
    V_CALL(VGetArg(upenv, 42-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k235, env)}),
      VEncodePointer(&_V10_Dstring_D569.sym, VPOINTER_OTHER),
      VGetArg(upenv, 36-1, 1));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda33" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k232) (close _V10_Dpreprocess__expr_D88_k234))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k232, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k234, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda33) (bruijn ##.input.6.103 32 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda33, env, runtime,
      VGetArg(upenv, 32-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k222) (close _V10_Dpreprocess__expr_D88_k231))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k222, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k231, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda32) (bruijn ##.input.6.103 30 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda32, env, runtime,
      VGetArg(upenv, 30-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k208) (close _V10_Dpreprocess__expr_D88_k221))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k208, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k221, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda30) (bruijn ##.input.6.103 28 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda30, env, runtime,
      VGetArg(upenv, 28-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda29" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k205) (close _V10_Dpreprocess__expr_D88_k207))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k205, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k207, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda29) (bruijn ##.input.6.103 26 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda29, env, runtime,
      VGetArg(upenv, 26-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda27" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k186) (close _V10_Dpreprocess__expr_D88_k204))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k186, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k204, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda27) (bruijn ##.input.6.103 24 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda27, env, runtime,
      VGetArg(upenv, 24-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda25" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k171) (close _V10_Dpreprocess__expr_D88_k185))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k171, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k185, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda25) (bruijn ##.input.6.103 22 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda25, env, runtime,
      VGetArg(upenv, 22-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda24" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k166) (close _V10_Dpreprocess__expr_D88_k170))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k166, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k170, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda24) (bruijn ##.input.6.103 20 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda24, env, runtime,
      VGetArg(upenv, 20-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda22" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k144) (close _V10_Dpreprocess__expr_D88_k165))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k144, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k165, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda22) (bruijn ##.input.6.103 18 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda22, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda20" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k122) (close _V10_Dpreprocess__expr_D88_k143))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k122, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k143, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda20) (bruijn ##.input.6.103 16 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda20, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda19" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k112) (close _V10_Dpreprocess__expr_D88_k121))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k112, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k121, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda19) (bruijn ##.input.6.103 14 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda19, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda18" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k102) (close _V10_Dpreprocess__expr_D88_k111))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k102, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k111, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda18) (bruijn ##.input.6.103 12 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda18, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda17" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k92) (close _V10_Dpreprocess__expr_D88_k101))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k92, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k101, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda17) (bruijn ##.input.6.103 10 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda17, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda16" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k84) (close _V10_Dpreprocess__expr_D88_k91))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k84, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k91, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda16) (bruijn ##.input.6.103 8 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda16, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda15" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k70) (close _V10_Dpreprocess__expr_D88_k83))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k70, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k83, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda15) (bruijn ##.input.6.103 6 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda15, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda13" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k60) (close _V10_Dpreprocess__expr_D88_k69))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k60, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k69, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda13) (bruijn ##.input.6.103 4 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda13, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dpreprocess__expr_D88_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda12" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k56) (close _V10_Dpreprocess__expr_D88_k59))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k56, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k59, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda12) (bruijn ##.input.6.103 2 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda12, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dpreprocess__expr_D88_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_k53) (close _V10_Dpreprocess__expr_D88_k55))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_k53, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_k55, env)}));
 }
}
static void _V10_Dpreprocess__expr_D88_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda10" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D88_lambda11) (bruijn ##.input.6.103 0 0))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda11, env, runtime,
      _var0);
 }
}
static void _V10_Dpreprocess__expr_D88_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dpreprocess__expr_D88_lambda10) (bruijn ##.expr.100 1 1))
    V_CALL_FUNC(_V10_Dpreprocess__expr_D88_lambda10, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Dpreprocess__expr_D88_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__expr_D88_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D88_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__expr_D88_lambda8, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.68 6 13) (bruijn ##.k.250 0 0) (close _V10_Dpreprocess__expr_D88_lambda9))
    V_CALL(VGetArg(upenv, 6-1, 13), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_lambda9, env)}));
 }
}
static void _V10_Dpreprocess__loop_D172_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D172_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D172_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__loop_D172_k243, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.494 1 0) ((bruijn ##.vector-set!.63 15 8) (bruijn ##.k.495 0 0) (bruijn ##.tape.173 7 1) (bruijn ##.pc.174 7 2) (bruijn ##.e.175 4 0)) ((bruijn ##.k.495 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 15-1, 8), runtime,
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
static void _V10_Dpreprocess__loop_D172_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D172_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D172_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__loop_D172_k245, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.preprocess-loop.172 9 0) (bruijn ##.k.490 8 0) (bruijn ##.tape.173 8 1) (bruijn ##.x.493 0 0))
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 8-1, 1),
      _var0);
 }
}
static void _V10_Dpreprocess__loop_D172_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D172_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D172_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__loop_D172_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.74 15 19) (close _V10_Dpreprocess__loop_D172_k245) (bruijn ##.pc.174 7 2) 1)
    V_CALL(VGetArg(upenv, 15-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D172_k245, env)}),
      VGetArg(upenv, 7-1, 2),
      VEncodeInt(1l));
 }
}
static void _V10_Dpreprocess__loop_D172_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D172_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D172_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__loop_D172_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__loop_D172_k243) (close _V10_Dpreprocess__loop_D172_k244))
    V_CALL_FUNC(_V10_Dpreprocess__loop_D172_k243, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D172_k244, env)}));
 }
}
static void _V10_Dpreprocess__loop_D172_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D172_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D172_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__loop_D172_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.64 13 9) (close _V10_Dpreprocess__loop_D172_k242) (bruijn ##.x.496 0 0))
    V_CALL(VGetArg(upenv, 13-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D172_k242, env)}),
      _var0);
 }
}
static void _V10_Dpreprocess__loop_D172_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D172_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D172_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__loop_D172_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.65 12 10) (close _V10_Dpreprocess__loop_D172_k241) (bruijn ##.e.175 1 0) (bruijn ##.x.497 0 0))
    V_CALL(VGetArg(upenv, 12-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D172_k241, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dpreprocess__loop_D172_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D172_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D172_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__loop_D172_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-ref.72 11 17) (close _V10_Dpreprocess__loop_D172_k240) (bruijn ##.tape.173 3 1) (bruijn ##.pc.174 3 2))
    V_CALL(VGetArg(upenv, 11-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D172_k240, env)}),
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dpreprocess__loop_D172_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D172_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D172_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__loop_D172_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.preprocess-expr.88 5 2) (close _V10_Dpreprocess__loop_D172_k239) (bruijn ##.x.498 0 0) (bruijn ##.pc.174 2 2))
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D172_k239, env)}),
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V10_Dpreprocess__loop_D172_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D172_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D172_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__loop_D172_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.491 0 0) ((bruijn ##.k.490 1 0) (bruijn ##.tape.173 1 1)) ((bruijn ##.vector-ref.72 9 17) (close _V10_Dpreprocess__loop_D172_k238) (bruijn ##.tape.173 1 1) (bruijn ##.pc.174 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 9-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D172_k238, env)}),
      upenv->vars[1],
      upenv->vars[2]);
}
 }
}
static void _V10_Dpreprocess__loop_D172_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__loop_D172_lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D172_lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__loop_D172_lambda34, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.>=.69 8 14) (close _V10_Dpreprocess__loop_D172_k237) (bruijn ##.pc.174 0 2) (bruijn ##.len.171 2 0))
    V_CALL(VGetArg(upenv, 8-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D172_k237, env)}),
      _var2,
      upenv->up->vars[0]);
 }
}
static void _V10_Dpreprocess__vasm_D78_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__vasm_D78_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__vasm_D78_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__vasm_D78_k246, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.preprocess-loop.172 1 0) (bruijn ##.k.221 4 0) (bruijn ##.x.499 0 0) 0)
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->up->vars[0],
      _var0,
      VEncodeInt(0l));
 }
}
static void _V10_Dpreprocess__vasm_D78_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__vasm_D78_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__vasm_D78_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__vasm_D78_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dpreprocess__loop_D172_lambda34)) ((bruijn ##.peel-labels.87 2 1) (close _V10_Dpreprocess__vasm_D78_k246) (bruijn ##.tape.85 3 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D172_lambda34, env)});
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__vasm_D78_k246, env)}),
      upenv->up->up->vars[1]);
    }
 }
}
static void _V10_Dpreprocess__vasm_D78_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpreprocess__vasm_D78_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__vasm_D78_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpreprocess__vasm_D78_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 3 ('() (close _V10_Dpeel__labels_D87_lambda4) (close _V10_Dpreprocess__expr_D88_lambda8)) ((bruijn ##.vector-length.70 5 15) (close _V10_Dpreprocess__vasm_D78_k236) (bruijn ##.tape.85 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VNULL;
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__labels_D87_lambda4, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D88_lambda8, env)});
    V_CALL(VGetArg(upenv, 5-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__vasm_D78_k236, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V10_Dfind__declare_D79_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__declare_D79_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D79_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__declare_D79_k252, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.502 0 0) ((bruijn ##.k.500 6 0) (bruijn ##.program-counter.178 5 0)) ((bruijn ##.find-declare.79 7 1) (bruijn ##.k.500 6 0) (bruijn ##.tape.176 6 1) (bruijn ##.program-counter.178 5 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 5-1, 0));
}
 }
}
static void _V10_Dfind__declare_D79_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__declare_D79_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D79_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__declare_D79_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.71 9 16) (close _V10_Dfind__declare_D79_k252) (bruijn ##.x.503 0 0) 'declare)
    V_CALL(VGetArg(upenv, 9-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D79_k252, env)}),
      _var0,
      _V0declare);
 }
}
static void _V10_Dfind__declare_D79_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__declare_D79_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D79_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__declare_D79_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.73 8 18) (close _V10_Dfind__declare_D79_k251) (bruijn ##.x.504 0 0))
    V_CALL(VGetArg(upenv, 8-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D79_k251, env)}),
      _var0);
 }
}
static void _V10_Dfind__declare_D79_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__declare_D79_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D79_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__declare_D79_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.501 0 0) ((bruijn ##.k.500 3 0) #f) ((bruijn ##.vector-ref.72 7 17) (close _V10_Dfind__declare_D79_k250) (bruijn ##.tape.176 3 1) (bruijn ##.program-counter.178 2 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 7-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D79_k250, env)}),
      upenv->up->up->vars[1],
      upenv->up->vars[0]);
}
 }
}
static void _V10_Dfind__declare_D79_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__declare_D79_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D79_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__declare_D79_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.>=.69 6 14) (close _V10_Dfind__declare_D79_k249) (bruijn ##.program-counter.178 1 0) (bruijn ##.x.505 0 0))
    V_CALL(VGetArg(upenv, 6-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D79_k249, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dfind__declare_D79_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__declare_D79_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D79_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__declare_D79_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-length.70 5 15) (close _V10_Dfind__declare_D79_k248) (bruijn ##.tape.176 1 1))
    V_CALL(VGetArg(upenv, 5-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D79_k248, env)}),
      upenv->vars[1]);
 }
}
static void _V10_Dfind__declare_D79_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dfind__declare_D79_lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D79_lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__declare_D79_lambda35, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.+.74 4 19) (close _V10_Dfind__declare_D79_k247) (bruijn ##.program-counter.177 0 2) 1)
    V_CALL(upenv->up->up->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D79_k247, env)}),
      _var2,
      VEncodeInt(1l));
 }
}
static void _V10_Dset__declare__loop_D180_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_k254, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.set-declare-loop.180 3 0) (bruijn ##.k.509 2 0) (bruijn ##.x.511 0 0))
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dset__declare__loop_D180_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.find-declare.79 4 1) (close _V10_Dset__declare__loop_D180_k254) (bruijn ##.tape.179 3 1) (bruijn ##.pc.181 1 1))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D180_k254, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
 }
}
static void _V10_Dset__declare__loop_D180_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_k260, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.49.182 7 1) (bruijn ##.k.517 5 0) (bruijn ##.x.522 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dset__declare__loop_D180_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.set-declare! (close _V10_Dset__declare__loop_D180_k260) (##inline ##vcore.car (bruijn ##.expr.52.185 2 0)) (bruijn ##.x.523 0 0))
    V_CALL_FUNC(VSetDeclare, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D180_k260, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      _var0);
 }
}
static void _V10_Dset__declare__loop_D180_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.187 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.53.187 0 0))) ((bruijn ##.make-vasm-lambda.80 9 2) (close _V10_Dset__declare__loop_D180_k259) (bruijn ##.tape.179 8 1) (##inline ##vcore.car (bruijn ##.expr.53.187 0 0))) ((bruijn ##.k.517 3 0) #f)) ((bruijn ##.k.517 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D180_k259, env)}),
      VGetArg(upenv, 8-1, 1),
      VInlineCar2(runtime,
        _var0));
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
static void _V10_Dset__declare__loop_D180_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.185 0 0)) ((close _V10_Dset__declare__loop_D180_k258) (##inline ##vcore.cdr (bruijn ##.expr.52.185 0 0))) ((bruijn ##.k.517 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dset__declare__loop_D180_k258, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dset__declare__loop_D180_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.518 0 0) ((close _V10_Dset__declare__loop_D180_k257) (##inline ##vcore.cdr (bruijn ##.expr.51.184 2 0))) ((bruijn ##.k.517 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dset__declare__loop_D180_k257, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dset__declare__loop_D180_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.184 1 0)) ((bruijn ##.equal?.67 9 12) (close _V10_Dset__declare__loop_D180_k256) 'declare (##inline ##vcore.car (bruijn ##.expr.51.184 1 0))) ((bruijn ##.k.517 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D180_k256, env)}),
      _V0declare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dset__declare__loop_D180_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_k263, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.49.182 4 1) (bruijn ##.k.512 4 0) (bruijn ##.x.514 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dset__declare__loop_D180_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.error.66 10 11) (close _V10_Dset__declare__loop_D180_k263) (##string ##.string.570) (bruijn ##.x.515 0 0))
    V_CALL(VGetArg(upenv, 10-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D180_k263, env)}),
      VEncodePointer(&_V10_Dstring_D570.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dset__declare__loop_D180_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-ref.72 9 17) (close _V10_Dset__declare__loop_D180_k262) (bruijn ##.tape.179 5 1) (bruijn ##.pc.181 3 1))
    V_CALL(VGetArg(upenv, 9-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D180_k262, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dset__declare__loop_D180_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_lambda39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dset__declare__loop_D180_k255) (close _V10_Dset__declare__loop_D180_k261))
    V_CALL_FUNC(_V10_Dset__declare__loop_D180_k255, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D180_k261, env)}));
 }
}
static void _V10_Dset__declare__loop_D180_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.vector-ref.72 7 17) (close _V10_Dset__declare__loop_D180_lambda39) (bruijn ##.tape.179 3 1) (bruijn ##.pc.181 1 1))
    V_CALL(VGetArg(upenv, 7-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D180_lambda39, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
 }
}
static void _V10_Dset__declare__loop_D180_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dset__declare__loop_D180_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D180_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declare__loop_D180_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (bruijn ##.pc.181 0 1) ((bruijn ##.call/cc.68 6 13) (close _V10_Dset__declare__loop_D180_k253) (close _V10_Dset__declare__loop_D180_lambda38)) ((bruijn ##.k.509 0 0) #f))
if(VDecodeBool(
_var1)) {
    V_CALL(VGetArg(upenv, 6-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D180_k253, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D180_lambda38, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dset__declares_B_D82_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dset__declares_B_D82_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declares_B_D82_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declares_B_D82_k264, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.set-declare-loop.180 1 0) (bruijn ##.k.508 2 0) (bruijn ##.x.526 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dset__declares_B_D82_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dset__declares_B_D82_lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declares_B_D82_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dset__declares_B_D82_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dset__declare__loop_D180_lambda37)) ((bruijn ##.find-declare.79 2 1) (close _V10_Dset__declares_B_D82_k264) (bruijn ##.tape.179 1 1) -1))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D180_lambda37, env)});
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declares_B_D82_k264, env)}),
      upenv->vars[1],
      VEncodeInt(-1l));
    }
 }
}
static void _V10_Dfind__toplevel_D83_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D83_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D83_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D83_k270, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.find-toplevel.83 7 5) (bruijn ##.k.527 6 0) (bruijn ##.tape.189 6 1) (bruijn ##.x.530 0 0))
    V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 6-1, 1),
      _var0);
 }
}
static void _V10_Dfind__toplevel_D83_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D83_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D83_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D83_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.529 0 0) ((bruijn ##.+.74 9 19) (bruijn ##.k.527 5 0) (bruijn ##.program-counter.190 5 2) 1) ((bruijn ##.+.74 9 19) (close _V10_Dfind__toplevel_D83_k270) 1 (bruijn ##.program-counter.190 5 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 5-1, 2),
      VEncodeInt(1l));
} else {
    V_CALL(VGetArg(upenv, 9-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D83_k270, env)}),
      VEncodeInt(1l),
      VGetArg(upenv, 5-1, 2));
}
 }
}
static void _V10_Dfind__toplevel_D83_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D83_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D83_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D83_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.71 8 16) (close _V10_Dfind__toplevel_D83_k269) (bruijn ##.x.531 0 0) 'toplevel)
    V_CALL(VGetArg(upenv, 8-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D83_k269, env)}),
      _var0,
      _V0toplevel);
 }
}
static void _V10_Dfind__toplevel_D83_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D83_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D83_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D83_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.73 7 18) (close _V10_Dfind__toplevel_D83_k268) (bruijn ##.x.532 0 0))
    V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D83_k268, env)}),
      _var0);
 }
}
static void _V10_Dfind__toplevel_D83_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D83_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D83_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D83_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.528 0 0) ((bruijn ##.k.527 2 0) #f) ((bruijn ##.vector-ref.72 6 17) (close _V10_Dfind__toplevel_D83_k267) (bruijn ##.tape.189 2 1) (bruijn ##.program-counter.190 2 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D83_k267, env)}),
      upenv->up->vars[1],
      upenv->up->vars[2]);
}
 }
}
static void _V10_Dfind__toplevel_D83_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D83_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D83_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D83_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.>=.69 5 14) (close _V10_Dfind__toplevel_D83_k266) (bruijn ##.program-counter.190 1 2) (bruijn ##.x.533 0 0))
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D83_k266, env)}),
      upenv->vars[2],
      _var0);
 }
}
static void _V10_Dfind__toplevel_D83_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dfind__toplevel_D83_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D83_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__toplevel_D83_lambda40, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.vector-length.70 4 15) (close _V10_Dfind__toplevel_D83_k265) (bruijn ##.tape.189 0 1))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D83_k265, env)}),
      _var1);
 }
}
static void _V10_Deval__loop_D194_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Deval__loop_D194_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D194_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Deval__loop_D194_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.539 1 0) (bruijn ##.program-counter.193 3 1) (bruijn ##.x.540 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V10_Deval__loop_D194_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Deval__loop_D194_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D194_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Deval__loop_D194_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.program-counter.193 2 1) ((bruijn ##.find-toplevel.83 5 5) (close _V10_Deval__loop_D194_k273) (bruijn ##.tape.192 2 0) (bruijn ##.program-counter.193 2 1)) ((bruijn ##.k.539 0 0) #f))
if(VDecodeBool(
upenv->up->vars[1])) {
    V_CALL(VGetArg(upenv, 5-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D194_k273, env)}),
      upenv->up->vars[0],
      upenv->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Deval__loop_D194_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Deval__loop_D194_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D194_lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Deval__loop_D194_lambda43, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eval-vasm-toplevel.81 6 3) (bruijn ##.k.538 0 0) (bruijn ##.tape.192 3 0) (bruijn ##.program-counter.193 3 1))
    V_CALL(VGetArg(upenv, 6-1, 3), runtime,
      _var0,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1]);
 }
}
static void _V10_Deval__loop_D194_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Deval__loop_D194_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D194_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Deval__loop_D194_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.program-counter.193 2 1) ((bruijn ##.call-with-values.77 8 22) (bruijn ##.k.536 1 0) (close _V10_Deval__loop_D194_lambda43) (bruijn ##.eval-loop.194 2 2)) ((bruijn ##.apply.76 8 21) (bruijn ##.k.536 1 0) (bruijn ##.values.75 8 20) (bruijn ##.rets.195 1 1)))
if(VDecodeBool(
upenv->up->vars[1])) {
    V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D194_lambda43, env)}),
      upenv->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 21), runtime,
      upenv->vars[0],
      VGetArg(upenv, 8-1, 20),
      upenv->vars[1]);
}
 }
}
static void _V10_Deval__loop_D194_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V10_Deval__loop_D194_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D194_lambda42, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Deval__loop_D194_lambda42, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((close _V10_Deval__loop_D194_k272) (close _V10_Deval__loop_D194_k274))
    V_CALL_FUNC(_V10_Deval__loop_D194_k272, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D194_k274, env)}));
 }
}
static void _V10_Deval__vasm_D84_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Deval__vasm_D84_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__vasm_D84_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Deval__vasm_D84_k275, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eval-loop.194 1 2) (bruijn ##.k.534 3 0))
    V_CALL(upenv->vars[2], runtime,
      upenv->up->up->vars[0]);
 }
}
static void _V10_Deval__vasm_D84_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Deval__vasm_D84_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__vasm_D84_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Deval__vasm_D84_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.535 1 0) 0 (close _V10_Deval__loop_D194_lambda42)) ((bruijn ##.set-declares!.82 3 4) (close _V10_Deval__vasm_D84_k275) (bruijn ##.tape.192 0 0)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = upenv->vars[0];
    env->vars[1] = VEncodeInt(0l);
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D194_lambda42, env)});
    V_CALL(upenv->up->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__vasm_D84_k275, env)}),
      env->vars[0]);
    }
 }
}
static void _V10_Deval__vasm_D84_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Deval__vasm_D84_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__vasm_D84_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Deval__vasm_D84_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.preprocess-vasm.78 1 0) (close _V10_Deval__vasm_D84_k271) (bruijn ##.vasm.191 0 1))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__vasm_D84_k271, env)}),
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
  // (letrec 7 ((close _V10_Dpreprocess__vasm_D78_lambda3) (close _V10_Dfind__declare_D79_lambda35) (bruijn ##.x.506 2 0) (bruijn ##.x.507 1 0) (close _V10_Dset__declares_B_D82_lambda36) (close _V10_Dfind__toplevel_D83_lambda40) (close _V10_Deval__vasm_D84_lambda41)) ((bruijn ##.k.197 31 0) (##inline ##vcore.cons (##inline ##vcore.cons 'eval-vasm (bruijn ##.eval-vasm.84 0 6)) '())))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[7]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 7, 7, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__vasm_D78_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D79_lambda35, env)});
    env->vars[2] = upenv->up->vars[0];
    env->vars[3] = upenv->vars[0];
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declares_B_D82_lambda36, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D83_lambda40, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__vasm_D84_lambda41, env)});
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eval__vasm,
        env->vars[6]),
        VNULL));
    }
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
  // (##vcore.function (close _V0vanity_V0bytecode_V20_k29) (##string ##.string.571))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k29, env)}),
      VEncodePointer(&_V10_Dstring_D571.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0bytecode_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22) {
 static VDebugInfo dbg = { "_V0vanity_V0bytecode_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0bytecode_V20_lambda2, runtime, upenv, 23, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22) {
  struct { VEnv env; VWORD argv[23]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 23, 23, upenv);
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
  // (##vcore.function (close _V0vanity_V0bytecode_V20_k28) (##string ##.string.572))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k28, env)}),
      VEncodePointer(&_V10_Dstring_D572.sym, VPOINTER_OTHER));
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
  // ((close _V0vanity_V0bytecode_V20_lambda2) (bruijn ##.x.198 22 0) (bruijn ##.x.199 21 0) (bruijn ##.x.200 20 0) (bruijn ##.x.201 19 0) (bruijn ##.x.202 18 0) (bruijn ##.x.203 17 0) (bruijn ##.x.204 16 0) (bruijn ##.x.205 15 0) (bruijn ##.x.206 14 0) (bruijn ##.x.207 13 0) (bruijn ##.x.208 12 0) (bruijn ##.x.209 11 0) (bruijn ##.x.210 10 0) (bruijn ##.x.211 9 0) (bruijn ##.x.212 8 0) (bruijn ##.x.213 7 0) (bruijn ##.x.214 6 0) (bruijn ##.x.215 5 0) (bruijn ##.x.216 4 0) (bruijn ##.x.217 3 0) (bruijn ##.x.218 2 0) (bruijn ##.x.219 1 0) (bruijn ##.x.220 0 0))
    V_CALL_FUNC(_V0vanity_V0bytecode_V20_lambda2, env, runtime,
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
  // ((bruijn ##..vcore.import.54 22 0) (close _V0vanity_V0bytecode_V20_k27) 'call-with-values)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k27, env)}),
      _V0call__with__values);
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
  // ((bruijn ##..vcore.import.54 21 0) (close _V0vanity_V0bytecode_V20_k26) 'apply)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k26, env)}),
      _V0apply);
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
  // ((bruijn ##..vcore.import.54 20 0) (close _V0vanity_V0bytecode_V20_k25) 'values)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k25, env)}),
      _V0values);
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
  // ((bruijn ##..vcore.import.54 19 0) (close _V0vanity_V0bytecode_V20_k24) '+)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k24, env)}),
      _V0_P);
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
  // ((bruijn ##..vcore.import.54 18 0) (close _V0vanity_V0bytecode_V20_k23) 'car)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k23, env)}),
      _V0car);
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
  // ((bruijn ##..vcore.import.54 17 0) (close _V0vanity_V0bytecode_V20_k22) 'vector-ref)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k22, env)}),
      _V0vector__ref);
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
  // ((bruijn ##..vcore.import.54 16 0) (close _V0vanity_V0bytecode_V20_k21) 'eqv?)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k21, env)}),
      _V0eqv_Q);
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
  // ((bruijn ##..vcore.import.54 15 0) (close _V0vanity_V0bytecode_V20_k20) 'vector-length)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k20, env)}),
      _V0vector__length);
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
  // ((bruijn ##..vcore.import.54 14 0) (close _V0vanity_V0bytecode_V20_k19) '>=)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k19, env)}),
      _V0_G_E);
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
  // ((bruijn ##..vcore.import.54 13 0) (close _V0vanity_V0bytecode_V20_k18) 'call/cc)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k18, env)}),
      _V0call_Wcc);
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
  // ((bruijn ##..vcore.import.54 12 0) (close _V0vanity_V0bytecode_V20_k17) 'equal?)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k17, env)}),
      _V0equal_Q);
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
  // ((bruijn ##..vcore.import.54 11 0) (close _V0vanity_V0bytecode_V20_k16) 'error)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k16, env)}),
      _V0error);
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
  // ((bruijn ##..vcore.import.54 10 0) (close _V0vanity_V0bytecode_V20_k15) 'eq?)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k15, env)}),
      _V0eq_Q);
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
  // ((bruijn ##..vcore.import.54 9 0) (close _V0vanity_V0bytecode_V20_k14) 'not)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k14, env)}),
      _V0not);
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
  // ((bruijn ##..vcore.import.54 8 0) (close _V0vanity_V0bytecode_V20_k13) 'vector-set!)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k13, env)}),
      _V0vector__set_B);
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
  // ((bruijn ##..vcore.import.54 7 0) (close _V0vanity_V0bytecode_V20_k12) 'cons)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k12, env)}),
      _V0cons);
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
  // ((bruijn ##..vcore.import.54 6 0) (close _V0vanity_V0bytecode_V20_k11) 'lookup-intrinsic)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k11, env)}),
      _V0lookup__intrinsic);
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
  // ((bruijn ##..vcore.import.54 5 0) (close _V0vanity_V0bytecode_V20_k10) 'string?)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k10, env)}),
      _V0string_Q);
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
  // ((bruijn ##..vcore.import.54 4 0) (close _V0vanity_V0bytecode_V20_k9) 'cdr)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k9, env)}),
      _V0cdr);
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
  // ((bruijn ##..vcore.import.54 3 0) (close _V0vanity_V0bytecode_V20_k8) '-)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k8, env)}),
      _V0__);
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
  // ((bruijn ##..vcore.import.54 2 0) (close _V0vanity_V0bytecode_V20_k7) 'symbol?)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k7, env)}),
      _V0symbol_Q);
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
  // ((bruijn ##..vcore.import.54 1 0) (close _V0vanity_V0bytecode_V20_k6) 'assv)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k6, env)}),
      _V0assv);
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
  // ((bruijn ##..vcore.import.54 0 0) (close _V0vanity_V0bytecode_V20_k5) 'integer?)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k5, env)}),
      _V0integer_Q);
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
  // (##vcore.make-import (close _V0vanity_V0bytecode_V20_k4) (##string ##.string.573) (bruijn ##.x.543 2 0) (bruijn ##.x.544 1 0) (bruijn ##.x.545 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D573.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k3) (##string ##.string.574))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D574.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k2) (##string ##.string.575))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D575.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k1) (##string ##.string.576))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D576.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0bytecode_V20 = (VFunc)_V0vanity_V0bytecode_V20_lambda1;
