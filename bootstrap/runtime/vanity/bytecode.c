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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D666 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D665 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D664 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D663 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_V0vanity_V0bytecode_V20" };
VWEAK VWORD _V0integer_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "integer\?" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0vector__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "vector-set!" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0_G_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, ">=" };
VWEAK VWORD _V0vector__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vector-length" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0vector__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-ref" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D662 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VMakeVasmLambda" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D661 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEvalVasmToplevel" };
VWEAK VWORD _V0eval__vasm;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0eval__vasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "eval-vasm" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D660 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "declare not declare\?" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D659 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm: unknown or malformed line" };
VWEAK VWORD _V0letrec__end;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0letrec__end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "letrec-end" };
VWEAK VWORD _V0letrec__begin;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0letrec__begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "letrec-begin" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D658 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm letrec-begin an integer" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D657 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "vasm bf: not an integer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D656 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "vasm bf: unknown label" };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
VWEAK VWORD _V0push__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0push__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "push-set!" };
VWEAK VWORD _V0declare__foreign;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0declare__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "declare-foreign" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D655 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm declare: not a nonnegative integer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D654 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "vasm declare: unknown label" };
VWEAK VWORD _V0declare;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "declare" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D653 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vasm declare: not a string" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D652 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "vasm foreign-function: not a nonnegative integer" };
VWEAK VWORD _V0foreign__function;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D651 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "vasm close: not a nonnegative integer" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D650 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm close: unknown label" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
VWEAK VWORD _V0case__lambda__error;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0case__lambda__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "case-lambda-error" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D649 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "vasm case-lambda+: not an integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D648 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda+: unknown label" };
VWEAK VWORD _V0case__lambda_P;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0case__lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "case-lambda+" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D647 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "vasm case-lambda+: not a nonnegative integer" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D646 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm case-lambda: not an integer" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D645 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "vasm case-lambda: unknown label" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D644 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "vasm case-lambda: not a nonnegative integer" };
VWEAK VWORD _V0lambda_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "lambda+" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D643 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "vasm lambda+: not a nonnegative integer" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D642 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vasm lambda: not a nonnegative integer" };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D641 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "vasm call: not a nonnegative integer" };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D640 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "vasm lookup: not a symbol" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D639 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm bruijn: not both nonnegative integers" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D638 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "vasm intrinsic: not a recognized intrinsic" };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D637 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "vasm intrinsic: not a symbol" };
VWEAK VWORD _V0push;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0push = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "push" };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D636 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "vasm label: label declared twice" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D635 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "vasm label: not a symbol" };
static __attribute__((constructor)) void VDllMain1() {
  _V0integer_Q = VEncodePointer(VLookupConstant("_V0integer_Q", &_VW_V0integer_Q), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VLookupConstant("_V0lookup__intrinsic", &_VW_V0lookup__intrinsic), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0vector__set_B = VEncodePointer(VLookupConstant("_V0vector__set_B", &_VW_V0vector__set_B), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
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
static void _V10_Dpeel__loop_D103_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.268 0 0) (bruijn ##.k.263 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dpeel__loop_D103_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.279 1 0) ((bruijn ##.error.79 22 12) (bruijn ##.k.280 0 0) (##string ##.string.635) (bruijn ##.label.109 5 0)) ((bruijn ##.k.280 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 12)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D635.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D103_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.277 1 0) ((bruijn ##.error.79 24 12) (bruijn ##.k.278 0 0) (##string ##.string.636) (bruijn ##.label.109 7 0)) ((bruijn ##.k.278 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 12)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D636.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D103_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.peel-loop.103 21 0) (bruijn ##.k.269 10 0) (bruijn ##.x.274 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 0)), 2,
      VGetArg(upenv, 10-1, 0),
      _var0);
}
static void _V10_Dpeel__loop_D103_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.86 28 19) (close _V10_Dpeel__loop_D103_k50) (bruijn ##.pc.104 19 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k50, env)}),
      VGetArg(upenv, 19-1, 1),
      VEncodeInt(1l));
}
static void _V10_Dpeel__loop_D103_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-set!.76 27 9) (close _V10_Dpeel__loop_D103_k49) (bruijn ##.tape.101 21 1) (bruijn ##.pc.104 18 1) (##inline ##vcore.car (bruijn ##.expr.4.110 9 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 9)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k49, env)}),
      VGetArg(upenv, 21-1, 1),
      VGetArg(upenv, 18-1, 1),
      VInlineCar2(runtime,
        VGetArg(upenv, 9-1, 0)));
}
static void _V10_Dpeel__loop_D103_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dpeel__loop_D103_k48) (bruijn ##.labels.98 21 0) (bruijn ##.x.275 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k48, env)}),
      VEncodeInt(21l), VEncodeInt(0l),
      _var0
    );
}
static void _V10_Dpeel__loop_D103_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.75 25 8) (close _V10_Dpeel__loop_D103_k47) (bruijn ##.x.276 0 0) (bruijn ##.labels.98 20 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 8)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k47, env)}),
      _var0,
      VGetArg(upenv, 20-1, 0));
}
static void _V10_Dpeel__loop_D103_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.75 24 8) (close _V10_Dpeel__loop_D103_k46) (bruijn ##.label.109 7 0) (bruijn ##.pc.104 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 8)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k46, env)}),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 15-1, 1));
}
static void _V10_Dpeel__loop_D103_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D103_k44) (close _V10_Dpeel__loop_D103_k45))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k44, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k45, env)}));
}
static void _V10_Dpeel__loop_D103_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assv.68 22 1) (close _V10_Dpeel__loop_D103_k43) (bruijn ##.label.109 5 0) (bruijn ##.labels.98 17 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 1)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k43, env)}),
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 17-1, 0));
}
static void _V10_Dpeel__loop_D103_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D103_k41) (close _V10_Dpeel__loop_D103_k42))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k41, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k42, env)}));
}
static void _V10_Dpeel__loop_D103_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.77 20 10) (close _V10_Dpeel__loop_D103_k40) (bruijn ##.x.281 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 10)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k40, env)}),
      _var0);
}
static void _V10_Dpeel__loop_D103_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.69 19 2) (close _V10_Dpeel__loop_D103_k39) (bruijn ##.label.109 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k39, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dpeel__loop_D103_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.110 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.4.110 0 0))) (##vcore.call-with-values (close _V10_Dpeel__loop_D103_k38) (close _V10_Dpeel__loop_D103_lambda8) (bruijn ##.kk.0.105 7 1)) ((bruijn ##.k.263 4 0) #f)) ((bruijn ##.k.263 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k38, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_lambda8, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D103_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D103_k37) (##inline ##vcore.cdr (bruijn ##.expr.3.108 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k37, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Dpeel__loop_D103_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.108 0 0)) ((close _V10_Dpeel__loop_D103_k36) (##inline ##vcore.car (bruijn ##.expr.3.108 0 0))) ((bruijn ##.k.263 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k36, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D103_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.264 0 0) ((close _V10_Dpeel__loop_D103_k35) (##inline ##vcore.cdr (bruijn ##.expr.2.107 2 0))) ((bruijn ##.k.263 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k35, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D103_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.2.107 1 0)) ((bruijn ##.equal?.80 14 13) (close _V10_Dpeel__loop_D103_k34) 'label (##inline ##vcore.car (bruijn ##.expr.2.107 1 0))) ((bruijn ##.k.263 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k34, env)}),
      _V0label,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpeel__loop_D103_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.peel-loop.103 8 0) (bruijn ##.k.260 1 0) (bruijn ##.x.261 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 2,
      upenv->vars[0],
      _var0);
}
static void _V10_Dpeel__loop_D103_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.86 15 19) (close _V10_Dpeel__loop_D103_k52) (bruijn ##.pc.104 6 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k52, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(1l));
}
static void _V10_Dpeel__loop_D103_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.258 3 0) (close _V10_Dpeel__loop_D103_lambda9) (bruijn ##.kk.0.105 3 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_lambda9, env)}),
      upenv->up->up->vars[1]);
}
static void _V10_Dpeel__loop_D103_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D103_k33) (close _V10_Dpeel__loop_D103_k51))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_k33, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k51, env)}));
}
static void _V10_Dpeel__loop_D103_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpeel__loop_D103_lambda7) (bruijn ##.input.1.106 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpeel__loop_D103_lambda7, .env = env }, }, 1,
      _var0);
}
static void _V10_Dpeel__loop_D103_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.vector-ref.84 11 17) (close _V10_Dpeel__loop_D103_k32) (bruijn ##.tape.101 5 1) (bruijn ##.pc.104 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k32, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->vars[1]);
}
static void _V10_Dpeel__loop_D103_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.257 0 0) ((bruijn ##.k.256 1 0) (bruijn ##.tape.101 4 1)) (##vcore.call/cc (bruijn ##.k.256 1 0) (close _V10_Dpeel__loop_D103_lambda6)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->up->up->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_lambda6, env)}));
}
}
static void _V10_Dpeel__loop_D103_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__loop_D103_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.>=.81 9 14) (close _V10_Dpeel__loop_D103_k31) (bruijn ##.pc.104 0 1) (bruijn ##.len.102 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_k31, env)}),
      _var1,
      upenv->up->vars[0]);
}
static void _V10_Dpeel__labels_D99_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__labels_D99_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dpeel__loop_D103_lambda5)) ((bruijn ##.peel-loop.103 0 0) (bruijn ##.k.255 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__loop_D103_lambda5, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dpeel__labels_D99_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpeel__labels_D99_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.vector-length.82 6 15) (close _V10_Dpeel__labels_D99_k30) (bruijn ##.tape.101 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 15)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__labels_D99_k30, env)}),
      _var1);
}
static void _V10_Dpreprocess__expr_D100_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.574 0 0) (bruijn ##.k.571 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.575 0 0) (bruijn ##.expr.112 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.572 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.7.116 2 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k55) (close _V10_Dpreprocess__expr_D100_lambda14) (bruijn ##.kk.5.114 4 1)) ((bruijn ##.k.571 1 0) #f)) ((bruijn ##.k.571 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k55, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda14, env)}),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.116 1 0)) ((bruijn ##.equal?.80 10 13) (close _V10_Dpreprocess__expr_D100_k54) 'toplevel (##inline ##vcore.car (bruijn ##.expr.7.116 1 0))) ((bruijn ##.k.571 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k54, env)}),
      _V0toplevel,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.566 0 0) (bruijn ##.k.562 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.567 0 0) (bruijn ##.expr.112 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 9-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.118 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.9.118 0 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k60) (close _V10_Dpreprocess__expr_D100_lambda16) (bruijn ##.kk.5.114 7 1)) ((bruijn ##.k.562 2 0) #f)) ((bruijn ##.k.562 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k60, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda16, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.563 0 0) ((close _V10_Dpreprocess__expr_D100_k59) (##inline ##vcore.cdr (bruijn ##.expr.8.117 2 0))) ((bruijn ##.k.562 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k59, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.117 1 0)) ((bruijn ##.equal?.80 12 13) (close _V10_Dpreprocess__expr_D100_k58) 'push (##inline ##vcore.car (bruijn ##.expr.8.117 1 0))) ((bruijn ##.k.562 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k58, env)}),
      _V0push,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.554 0 0) (bruijn ##.k.550 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  // ((bruijn ##.k.555 4 0) (##inline ##vcore.cons 'intrinsic (##inline ##vcore.cons (bruijn ##.f.124 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0intrinsic,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Dpreprocess__expr_D100_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.54.123 0 0) ((close _V10_Dpreprocess__expr_D100_lambda19) (bruijn ##.x.54.123 0 0)) ((bruijn ##.error.79 21 12) (bruijn ##.k.555 3 0) (##string ##.string.638) (bruijn ##.x.122 4 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda19, .env = env }, }, 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 12)), 3,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D638.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.556 0 0) ((bruijn ##.error.79 20 12) (bruijn ##.k.555 2 0) (##string ##.string.637) (bruijn ##.x.122 3 0)) ((bruijn ##.lookup-intrinsic.74 20 7) (close _V10_Dpreprocess__expr_D100_k69) (bruijn ##.x.122 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 12)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D637.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k69, env)}),
      upenv->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.77 19 10) (close _V10_Dpreprocess__expr_D100_k68) (bruijn ##.x.558 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 10)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k68, env)}),
      _var0);
}
static void _V10_Dpreprocess__expr_D100_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.69 18 2) (close _V10_Dpreprocess__expr_D100_k67) (bruijn ##.x.122 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k67, env)}),
      upenv->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.121 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k66) (close _V10_Dpreprocess__expr_D100_lambda18) (bruijn ##.kk.5.114 10 1)) ((bruijn ##.k.550 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k66, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda18, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.121 0 0)) ((close _V10_Dpreprocess__expr_D100_k65) (##inline ##vcore.car (bruijn ##.expr.11.121 0 0))) ((bruijn ##.k.550 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k65, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.551 0 0) ((close _V10_Dpreprocess__expr_D100_k64) (##inline ##vcore.cdr (bruijn ##.expr.10.120 2 0))) ((bruijn ##.k.550 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k64, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.120 1 0)) ((bruijn ##.equal?.80 14 13) (close _V10_Dpreprocess__expr_D100_k63) 'intrinsic (##inline ##vcore.car (bruijn ##.expr.10.120 1 0))) ((bruijn ##.k.550 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k63, env)}),
      _V0intrinsic,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.540 0 0) (bruijn ##.k.535 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D100_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.546 0 0) ((bruijn ##.>=.81 26 14) (bruijn ##.k.544 2 0) (bruijn ##.right.129 5 0) 0) ((bruijn ##.k.544 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 14)), 3,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.545 0 0) ((bruijn ##.>=.81 25 14) (close _V10_Dpreprocess__expr_D100_k81) (bruijn ##.up.127 6 0) 0) ((bruijn ##.k.544 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k81, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.543 1 0) ((bruijn ##.integer?.67 24 0) (close _V10_Dpreprocess__expr_D100_k80) (bruijn ##.right.129 3 0)) ((bruijn ##.k.544 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k80, env)}),
      upenv->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.542 0 0) ((bruijn ##.k.541 2 0) (bruijn ##.expr.112 18 1)) ((bruijn ##.error.79 24 12) (bruijn ##.k.541 2 0) (##string ##.string.639) (bruijn ##.up.127 5 0) (bruijn ##.right.129 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VGetArg(upenv, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 12)), 4,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D639.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k79) (close _V10_Dpreprocess__expr_D100_k82))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k79, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k82, env)}));
}
static void _V10_Dpreprocess__expr_D100_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.67 22 0) (close _V10_Dpreprocess__expr_D100_k78) (bruijn ##.up.127 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k78, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.14.128 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k77) (close _V10_Dpreprocess__expr_D100_lambda21) (bruijn ##.kk.5.114 14 1)) ((bruijn ##.k.535 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k77, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda21, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.128 0 0)) ((close _V10_Dpreprocess__expr_D100_k76) (##inline ##vcore.car (bruijn ##.expr.14.128 0 0))) ((bruijn ##.k.535 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k76, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k75) (##inline ##vcore.cdr (bruijn ##.expr.13.126 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k75, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Dpreprocess__expr_D100_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.126 0 0)) ((close _V10_Dpreprocess__expr_D100_k74) (##inline ##vcore.car (bruijn ##.expr.13.126 0 0))) ((bruijn ##.k.535 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k74, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.536 0 0) ((close _V10_Dpreprocess__expr_D100_k73) (##inline ##vcore.cdr (bruijn ##.expr.12.125 2 0))) ((bruijn ##.k.535 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k73, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.125 1 0)) ((bruijn ##.equal?.80 16 13) (close _V10_Dpreprocess__expr_D100_k72) 'bruijn (##inline ##vcore.car (bruijn ##.expr.12.125 1 0))) ((bruijn ##.k.535 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k72, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.529 0 0) (bruijn ##.k.525 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.531 0 0) ((bruijn ##.k.530 1 0) (bruijn ##.expr.112 17 1)) ((bruijn ##.error.79 23 12) (bruijn ##.k.530 1 0) (##string ##.string.640) (bruijn ##.x.132 2 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VGetArg(upenv, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 12)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D640.sym, VPOINTER_OTHER),
      upenv->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.69 22 2) (close _V10_Dpreprocess__expr_D100_k89) (bruijn ##.x.132 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k89, env)}),
      upenv->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.16.131 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k88) (close _V10_Dpreprocess__expr_D100_lambda23) (bruijn ##.kk.5.114 14 1)) ((bruijn ##.k.525 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k88, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda23, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.131 0 0)) ((close _V10_Dpreprocess__expr_D100_k87) (##inline ##vcore.car (bruijn ##.expr.16.131 0 0))) ((bruijn ##.k.525 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k87, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.526 0 0) ((close _V10_Dpreprocess__expr_D100_k86) (##inline ##vcore.cdr (bruijn ##.expr.15.130 2 0))) ((bruijn ##.k.525 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k86, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.130 1 0)) ((bruijn ##.equal?.80 18 13) (close _V10_Dpreprocess__expr_D100_k85) 'lookup (##inline ##vcore.car (bruijn ##.expr.15.130 1 0))) ((bruijn ##.k.525 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k85, env)}),
      _V0lookup,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.517 0 0) (bruijn ##.k.513 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.520 1 0) ((bruijn ##.>=.81 26 14) (bruijn ##.k.521 0 0) (bruijn ##.x.135 3 0) 0) ((bruijn ##.k.521 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 14)), 3,
      _var0,
      upenv->up->up->vars[0],
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.519 0 0) ((bruijn ##.k.518 2 0) (bruijn ##.expr.112 20 1)) ((bruijn ##.error.79 26 12) (bruijn ##.k.518 2 0) (##string ##.string.641) (bruijn ##.x.135 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VGetArg(upenv, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 12)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D641.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k97) (close _V10_Dpreprocess__expr_D100_k98))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k97, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k98, env)}));
}
static void _V10_Dpreprocess__expr_D100_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.67 24 0) (close _V10_Dpreprocess__expr_D100_k96) (bruijn ##.x.135 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k96, env)}),
      upenv->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.134 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k95) (close _V10_Dpreprocess__expr_D100_lambda25) (bruijn ##.kk.5.114 16 1)) ((bruijn ##.k.513 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k95, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda25, env)}),
      VGetArg(upenv, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.134 0 0)) ((close _V10_Dpreprocess__expr_D100_k94) (##inline ##vcore.car (bruijn ##.expr.18.134 0 0))) ((bruijn ##.k.513 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k94, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.514 0 0) ((close _V10_Dpreprocess__expr_D100_k93) (##inline ##vcore.cdr (bruijn ##.expr.17.133 2 0))) ((bruijn ##.k.513 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k93, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.133 1 0)) ((bruijn ##.equal?.80 20 13) (close _V10_Dpreprocess__expr_D100_k92) 'call (##inline ##vcore.car (bruijn ##.expr.17.133 1 0))) ((bruijn ##.k.513 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k92, env)}),
      _V0call,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.505 0 0) (bruijn ##.k.501 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.508 1 0) ((bruijn ##.>=.81 28 14) (bruijn ##.k.509 0 0) (bruijn ##.x.138 3 0) 0) ((bruijn ##.k.509 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 14)), 3,
      _var0,
      upenv->up->up->vars[0],
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.507 0 0) ((bruijn ##.k.506 2 0) (bruijn ##.expr.112 22 1)) ((bruijn ##.error.79 28 12) (bruijn ##.k.506 2 0) (##string ##.string.642) (bruijn ##.x.138 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VGetArg(upenv, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 12)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D642.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k106) (close _V10_Dpreprocess__expr_D100_k107))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k106, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k107, env)}));
}
static void _V10_Dpreprocess__expr_D100_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.67 26 0) (close _V10_Dpreprocess__expr_D100_k105) (bruijn ##.x.138 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k105, env)}),
      upenv->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.20.137 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k104) (close _V10_Dpreprocess__expr_D100_lambda27) (bruijn ##.kk.5.114 18 1)) ((bruijn ##.k.501 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k104, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda27, env)}),
      VGetArg(upenv, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.137 0 0)) ((close _V10_Dpreprocess__expr_D100_k103) (##inline ##vcore.car (bruijn ##.expr.20.137 0 0))) ((bruijn ##.k.501 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k103, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.502 0 0) ((close _V10_Dpreprocess__expr_D100_k102) (##inline ##vcore.cdr (bruijn ##.expr.19.136 2 0))) ((bruijn ##.k.501 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k102, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.19.136 1 0)) ((bruijn ##.equal?.80 22 13) (close _V10_Dpreprocess__expr_D100_k101) 'lambda (##inline ##vcore.car (bruijn ##.expr.19.136 1 0))) ((bruijn ##.k.501 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k101, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.493 0 0) (bruijn ##.k.489 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.496 1 0) ((bruijn ##.>=.81 30 14) (bruijn ##.k.497 0 0) (bruijn ##.x.141 3 0) 0) ((bruijn ##.k.497 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 14)), 3,
      _var0,
      upenv->up->up->vars[0],
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.495 0 0) ((bruijn ##.k.494 2 0) (bruijn ##.expr.112 24 1)) ((bruijn ##.error.79 30 12) (bruijn ##.k.494 2 0) (##string ##.string.643) (bruijn ##.x.141 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VGetArg(upenv, 24-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 12)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D643.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k115) (close _V10_Dpreprocess__expr_D100_k116))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k115, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k116, env)}));
}
static void _V10_Dpreprocess__expr_D100_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.67 28 0) (close _V10_Dpreprocess__expr_D100_k114) (bruijn ##.x.141 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k114, env)}),
      upenv->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.140 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k113) (close _V10_Dpreprocess__expr_D100_lambda29) (bruijn ##.kk.5.114 20 1)) ((bruijn ##.k.489 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k113, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda29, env)}),
      VGetArg(upenv, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.140 0 0)) ((close _V10_Dpreprocess__expr_D100_k112) (##inline ##vcore.car (bruijn ##.expr.22.140 0 0))) ((bruijn ##.k.489 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k112, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.490 0 0) ((close _V10_Dpreprocess__expr_D100_k111) (##inline ##vcore.cdr (bruijn ##.expr.21.139 2 0))) ((bruijn ##.k.489 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k111, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.139 1 0)) ((bruijn ##.equal?.80 24 13) (close _V10_Dpreprocess__expr_D100_k110) 'lambda+ (##inline ##vcore.car (bruijn ##.expr.21.139 1 0))) ((bruijn ##.k.489 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k110, env)}),
      _V0lambda_P,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.470 0 0) (bruijn ##.k.465 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D100_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.484 1 0) ((bruijn ##.>=.81 34 14) (bruijn ##.k.485 0 0) (bruijn ##.x.144 5 0) 0) ((bruijn ##.k.485 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 14)), 3,
      _var0,
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.481 1 0) ((bruijn ##.error.79 36 12) (bruijn ##.k.482 0 0) (##string ##.string.644) (bruijn ##.x.144 7 0)) ((bruijn ##.k.482 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 12)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D644.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.479 1 0) ((bruijn ##.assv.68 39 1) (bruijn ##.k.480 0 0) (bruijn ##.b.146 8 0) (bruijn ##.labels.98 34 0)) ((bruijn ##.k.480 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 1)), 3,
      _var0,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 34-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.471 10 0) (##inline ##vcore.cons 'case-lambda (##inline ##vcore.cons (bruijn ##.x.144 13 0) (##inline ##vcore.cons (bruijn ##.x.476 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        VGetArg(upenv, 13-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dpreprocess__expr_D100_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.70 41 3) (close _V10_Dpreprocess__expr_D100_k136) (bruijn ##.x.477 0 0) (bruijn ##.pc.113 35 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 3)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k136, env)}),
      _var0,
      VGetArg(upenv, 35-1, 2),
      VEncodeInt(1l));
}
static void _V10_Dpreprocess__expr_D100_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.71 40 4) (close _V10_Dpreprocess__expr_D100_k135) (bruijn ##.label.148 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k135, env)}),
      _var0);
}
static void _V10_Dpreprocess__expr_D100_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.478 0 0) ((bruijn ##.error.79 40 12) (bruijn ##.k.471 8 0) (##string ##.string.645) (bruijn ##.b.146 9 0)) ((bruijn ##.error.79 40 12) (bruijn ##.k.471 8 0) (##string ##.string.646) (bruijn ##.b.146 9 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 12)), 3,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D645.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 12)), 3,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D646.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.55.147 0 0) ((close _V10_Dpreprocess__expr_D100_lambda32) (bruijn ##.x.55.147 0 0)) ((bruijn ##.symbol?.69 39 2) (close _V10_Dpreprocess__expr_D100_k137) (bruijn ##.b.146 8 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda32, .env = env }, }, 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k137, env)}),
      VGetArg(upenv, 8-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k133) (close _V10_Dpreprocess__expr_D100_k134))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k133, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k134, env)}));
}
static void _V10_Dpreprocess__expr_D100_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.473 0 0) ((bruijn ##.k.471 5 0) (bruijn ##.expr.112 31 1)) ((bruijn ##.symbol?.69 37 2) (close _V10_Dpreprocess__expr_D100_k132) (bruijn ##.b.146 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VGetArg(upenv, 31-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k132, env)}),
      VGetArg(upenv, 6-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.67 36 0) (close _V10_Dpreprocess__expr_D100_k131) (bruijn ##.b.146 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k131, env)}),
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dpreprocess__expr_D100_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k129) (close _V10_Dpreprocess__expr_D100_k130))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k129, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k130, env)}));
}
static void _V10_Dpreprocess__expr_D100_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.77 34 10) (close _V10_Dpreprocess__expr_D100_k128) (bruijn ##.x.483 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 10)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k128, env)}),
      _var0);
}
static void _V10_Dpreprocess__expr_D100_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k126) (close _V10_Dpreprocess__expr_D100_k127))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k126, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k127, env)}));
}
static void _V10_Dpreprocess__expr_D100_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.67 32 0) (close _V10_Dpreprocess__expr_D100_k125) (bruijn ##.x.144 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k125, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.25.145 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k124) (close _V10_Dpreprocess__expr_D100_lambda31) (bruijn ##.kk.5.114 24 1)) ((bruijn ##.k.465 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k124, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda31, env)}),
      VGetArg(upenv, 24-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.145 0 0)) ((close _V10_Dpreprocess__expr_D100_k123) (##inline ##vcore.car (bruijn ##.expr.25.145 0 0))) ((bruijn ##.k.465 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k123, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k122) (##inline ##vcore.cdr (bruijn ##.expr.24.143 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k122, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Dpreprocess__expr_D100_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.143 0 0)) ((close _V10_Dpreprocess__expr_D100_k121) (##inline ##vcore.car (bruijn ##.expr.24.143 0 0))) ((bruijn ##.k.465 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k121, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.466 0 0) ((close _V10_Dpreprocess__expr_D100_k120) (##inline ##vcore.cdr (bruijn ##.expr.23.142 2 0))) ((bruijn ##.k.465 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k120, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.142 1 0)) ((bruijn ##.equal?.80 26 13) (close _V10_Dpreprocess__expr_D100_k119) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.23.142 1 0))) ((bruijn ##.k.465 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k119, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.446 0 0) (bruijn ##.k.441 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D100_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.460 1 0) ((bruijn ##.>=.81 36 14) (bruijn ##.k.461 0 0) (bruijn ##.x.151 5 0) 0) ((bruijn ##.k.461 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 14)), 3,
      _var0,
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.457 1 0) ((bruijn ##.error.79 38 12) (bruijn ##.k.458 0 0) (##string ##.string.647) (bruijn ##.x.151 7 0)) ((bruijn ##.k.458 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 12)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D647.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.455 1 0) ((bruijn ##.assv.68 41 1) (bruijn ##.k.456 0 0) (bruijn ##.b.153 8 0) (bruijn ##.labels.98 36 0)) ((bruijn ##.k.456 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 1)), 3,
      _var0,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 36-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.447 10 0) (##inline ##vcore.cons 'case-lambda+ (##inline ##vcore.cons (bruijn ##.x.151 13 0) (##inline ##vcore.cons (bruijn ##.x.452 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V0case__lambda_P,
        VInlineCons2(runtime,
        VGetArg(upenv, 13-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dpreprocess__expr_D100_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.70 43 3) (close _V10_Dpreprocess__expr_D100_k157) (bruijn ##.x.453 0 0) (bruijn ##.pc.113 37 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 3)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k157, env)}),
      _var0,
      VGetArg(upenv, 37-1, 2),
      VEncodeInt(1l));
}
static void _V10_Dpreprocess__expr_D100_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.71 42 4) (close _V10_Dpreprocess__expr_D100_k156) (bruijn ##.label.155 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k156, env)}),
      _var0);
}
static void _V10_Dpreprocess__expr_D100_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.454 0 0) ((bruijn ##.error.79 42 12) (bruijn ##.k.447 8 0) (##string ##.string.648) (bruijn ##.b.153 9 0)) ((bruijn ##.error.79 42 12) (bruijn ##.k.447 8 0) (##string ##.string.649) (bruijn ##.b.153 9 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 12)), 3,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D648.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 12)), 3,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D649.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.56.154 0 0) ((close _V10_Dpreprocess__expr_D100_lambda35) (bruijn ##.x.56.154 0 0)) ((bruijn ##.symbol?.69 41 2) (close _V10_Dpreprocess__expr_D100_k158) (bruijn ##.b.153 8 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda35, .env = env }, }, 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k158, env)}),
      VGetArg(upenv, 8-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k154) (close _V10_Dpreprocess__expr_D100_k155))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k154, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k155, env)}));
}
static void _V10_Dpreprocess__expr_D100_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.449 0 0) ((bruijn ##.k.447 5 0) (bruijn ##.expr.112 33 1)) ((bruijn ##.symbol?.69 39 2) (close _V10_Dpreprocess__expr_D100_k153) (bruijn ##.b.153 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VGetArg(upenv, 33-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k153, env)}),
      VGetArg(upenv, 6-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.67 38 0) (close _V10_Dpreprocess__expr_D100_k152) (bruijn ##.b.153 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k152, env)}),
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dpreprocess__expr_D100_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k150) (close _V10_Dpreprocess__expr_D100_k151))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k150, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k151, env)}));
}
static void _V10_Dpreprocess__expr_D100_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.77 36 10) (close _V10_Dpreprocess__expr_D100_k149) (bruijn ##.x.459 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 10)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k149, env)}),
      _var0);
}
static void _V10_Dpreprocess__expr_D100_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k147) (close _V10_Dpreprocess__expr_D100_k148))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k147, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k148, env)}));
}
static void _V10_Dpreprocess__expr_D100_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.67 34 0) (close _V10_Dpreprocess__expr_D100_k146) (bruijn ##.x.151 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k146, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.152 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k145) (close _V10_Dpreprocess__expr_D100_lambda34) (bruijn ##.kk.5.114 26 1)) ((bruijn ##.k.441 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k145, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda34, env)}),
      VGetArg(upenv, 26-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.152 0 0)) ((close _V10_Dpreprocess__expr_D100_k144) (##inline ##vcore.car (bruijn ##.expr.28.152 0 0))) ((bruijn ##.k.441 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k144, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k143) (##inline ##vcore.cdr (bruijn ##.expr.27.150 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k143, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Dpreprocess__expr_D100_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.150 0 0)) ((close _V10_Dpreprocess__expr_D100_k142) (##inline ##vcore.car (bruijn ##.expr.27.150 0 0))) ((bruijn ##.k.441 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k142, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.442 0 0) ((close _V10_Dpreprocess__expr_D100_k141) (##inline ##vcore.cdr (bruijn ##.expr.26.149 2 0))) ((bruijn ##.k.441 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k141, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.149 1 0)) ((bruijn ##.equal?.80 28 13) (close _V10_Dpreprocess__expr_D100_k140) 'case-lambda+ (##inline ##vcore.car (bruijn ##.expr.26.149 1 0))) ((bruijn ##.k.441 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k140, env)}),
      _V0case__lambda_P,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.436 0 0) (bruijn ##.k.431 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.437 0 0) (bruijn ##.expr.112 28 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 28-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.159 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.159 0 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k164) (close _V10_Dpreprocess__expr_D100_lambda37) (bruijn ##.kk.5.114 26 1)) ((bruijn ##.k.431 3 0) #f)) ((bruijn ##.k.431 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k164, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda37, env)}),
      VGetArg(upenv, 26-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.157 0 0)) ((close _V10_Dpreprocess__expr_D100_k163) (##inline ##vcore.cdr (bruijn ##.expr.30.157 0 0))) ((bruijn ##.k.431 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k163, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.432 0 0) ((close _V10_Dpreprocess__expr_D100_k162) (##inline ##vcore.cdr (bruijn ##.expr.29.156 2 0))) ((bruijn ##.k.431 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k162, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.156 1 0)) ((bruijn ##.equal?.80 30 13) (close _V10_Dpreprocess__expr_D100_k161) 'case-lambda-error (##inline ##vcore.car (bruijn ##.expr.29.156 1 0))) ((bruijn ##.k.431 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k161, env)}),
      _V0case__lambda__error,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.418 0 0) (bruijn ##.k.414 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.426 1 0) ((bruijn ##.assv.68 38 1) (bruijn ##.k.427 0 0) (bruijn ##.x.163 3 0) (bruijn ##.labels.98 33 0)) ((bruijn ##.k.427 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 1)), 3,
      _var0,
      upenv->up->up->vars[0],
      VGetArg(upenv, 33-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.419 4 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.x.421 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Dpreprocess__expr_D100_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.71 39 4) (close _V10_Dpreprocess__expr_D100_k174) (bruijn ##.label.165 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k174, env)}),
      _var0);
}
static void _V10_Dpreprocess__expr_D100_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.424 1 0) ((bruijn ##.>=.81 41 14) (bruijn ##.k.425 0 0) (bruijn ##.x.163 6 0) 0) ((bruijn ##.k.425 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 14)), 3,
      _var0,
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.423 0 0) ((bruijn ##.k.419 5 0) (bruijn ##.expr.112 35 1)) ((bruijn ##.error.79 41 12) (bruijn ##.k.419 5 0) (##string ##.string.651) (bruijn ##.x.163 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VGetArg(upenv, 35-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 12)), 3,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D651.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k177) (close _V10_Dpreprocess__expr_D100_k178))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k177, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k178, env)}));
}
static void _V10_Dpreprocess__expr_D100_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.422 0 0) ((bruijn ##.error.79 39 12) (bruijn ##.k.419 3 0) (##string ##.string.650) (bruijn ##.x.163 4 0)) ((bruijn ##.integer?.67 39 0) (close _V10_Dpreprocess__expr_D100_k176) (bruijn ##.x.163 4 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 12)), 3,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D650.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k176, env)}),
      upenv->up->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.57.164 0 0) ((close _V10_Dpreprocess__expr_D100_lambda40) (bruijn ##.x.57.164 0 0)) ((bruijn ##.symbol?.69 38 2) (close _V10_Dpreprocess__expr_D100_k175) (bruijn ##.x.163 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda40, .env = env }, }, 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k175, env)}),
      upenv->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k172) (close _V10_Dpreprocess__expr_D100_k173))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k172, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k173, env)}));
}
static void _V10_Dpreprocess__expr_D100_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.69 36 2) (close _V10_Dpreprocess__expr_D100_k171) (bruijn ##.x.163 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k171, env)}),
      upenv->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.162 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k170) (close _V10_Dpreprocess__expr_D100_lambda39) (bruijn ##.kk.5.114 28 1)) ((bruijn ##.k.414 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k170, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda39, env)}),
      VGetArg(upenv, 28-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.162 0 0)) ((close _V10_Dpreprocess__expr_D100_k169) (##inline ##vcore.car (bruijn ##.expr.33.162 0 0))) ((bruijn ##.k.414 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k169, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.415 0 0) ((close _V10_Dpreprocess__expr_D100_k168) (##inline ##vcore.cdr (bruijn ##.expr.32.161 2 0))) ((bruijn ##.k.414 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k168, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.161 1 0)) ((bruijn ##.equal?.80 32 13) (close _V10_Dpreprocess__expr_D100_k167) 'close (##inline ##vcore.car (bruijn ##.expr.32.161 1 0))) ((bruijn ##.k.414 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k167, env)}),
      _V0close,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.401 0 0) (bruijn ##.k.397 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.409 1 0) ((bruijn ##.assv.68 40 1) (bruijn ##.k.410 0 0) (bruijn ##.x.168 3 0) (bruijn ##.labels.98 35 0)) ((bruijn ##.k.410 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 1)), 3,
      _var0,
      upenv->up->up->vars[0],
      VGetArg(upenv, 35-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.402 4 0) (##inline ##vcore.cons 'foreign-function (##inline ##vcore.cons (bruijn ##.x.404 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0foreign__function,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Dpreprocess__expr_D100_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.71 41 4) (close _V10_Dpreprocess__expr_D100_k188) (bruijn ##.label.170 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k188, env)}),
      _var0);
}
static void _V10_Dpreprocess__expr_D100_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.407 1 0) ((bruijn ##.>=.81 43 14) (bruijn ##.k.408 0 0) (bruijn ##.x.168 6 0) 0) ((bruijn ##.k.408 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 14)), 3,
      _var0,
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.406 0 0) ((bruijn ##.k.402 5 0) (bruijn ##.expr.112 37 1)) ((bruijn ##.error.79 43 12) (bruijn ##.k.402 5 0) (##string ##.string.652) (bruijn ##.x.168 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VGetArg(upenv, 37-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 12)), 3,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D652.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k191) (close _V10_Dpreprocess__expr_D100_k192))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k191, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k192, env)}));
}
static void _V10_Dpreprocess__expr_D100_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.405 0 0) ((bruijn ##.error.79 41 12) (bruijn ##.k.402 3 0) (##string ##.string.650) (bruijn ##.x.168 4 0)) ((bruijn ##.integer?.67 41 0) (close _V10_Dpreprocess__expr_D100_k190) (bruijn ##.x.168 4 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 12)), 3,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D650.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k190, env)}),
      upenv->up->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.58.169 0 0) ((close _V10_Dpreprocess__expr_D100_lambda43) (bruijn ##.x.58.169 0 0)) ((bruijn ##.symbol?.69 40 2) (close _V10_Dpreprocess__expr_D100_k189) (bruijn ##.x.168 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda43, .env = env }, }, 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k189, env)}),
      upenv->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k186) (close _V10_Dpreprocess__expr_D100_k187))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k186, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k187, env)}));
}
static void _V10_Dpreprocess__expr_D100_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.69 38 2) (close _V10_Dpreprocess__expr_D100_k185) (bruijn ##.x.168 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k185, env)}),
      upenv->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.35.167 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k184) (close _V10_Dpreprocess__expr_D100_lambda42) (bruijn ##.kk.5.114 30 1)) ((bruijn ##.k.397 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k184, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda42, env)}),
      VGetArg(upenv, 30-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.167 0 0)) ((close _V10_Dpreprocess__expr_D100_k183) (##inline ##vcore.car (bruijn ##.expr.35.167 0 0))) ((bruijn ##.k.397 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k183, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.398 0 0) ((close _V10_Dpreprocess__expr_D100_k182) (##inline ##vcore.cdr (bruijn ##.expr.34.166 2 0))) ((bruijn ##.k.397 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k182, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.166 1 0)) ((bruijn ##.equal?.80 34 13) (close _V10_Dpreprocess__expr_D100_k181) 'foreign-function (##inline ##vcore.car (bruijn ##.expr.34.166 1 0))) ((bruijn ##.k.397 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k181, env)}),
      _V0foreign__function,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.381 0 0) (bruijn ##.k.376 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D100_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.391 1 0) ((bruijn ##.assv.68 46 1) (bruijn ##.k.392 0 0) (bruijn ##.x.175 5 0) (bruijn ##.labels.98 41 0)) ((bruijn ##.k.392 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 1)), 3,
      _var0,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 41-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.382 6 0) (##inline ##vcore.cons 'declare (##inline ##vcore.cons (bruijn ##.name.173 9 0) (##inline ##vcore.cons (bruijn ##.x.386 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VInlineCons2(runtime,
        _V0declare,
        VInlineCons2(runtime,
        VGetArg(upenv, 9-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dpreprocess__expr_D100_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.71 47 4) (close _V10_Dpreprocess__expr_D100_k206) (bruijn ##.label.177 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k206, env)}),
      _var0);
}
static void _V10_Dpreprocess__expr_D100_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.389 1 0) ((bruijn ##.>=.81 49 14) (bruijn ##.k.390 0 0) (bruijn ##.x.175 8 0) 0) ((bruijn ##.k.390 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 14)), 3,
      _var0,
      VGetArg(upenv, 8-1, 0),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.388 0 0) ((bruijn ##.k.382 7 0) (bruijn ##.expr.112 43 1)) ((bruijn ##.error.79 49 12) (bruijn ##.k.382 7 0) (##string ##.string.655) (bruijn ##.x.175 8 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      VGetArg(upenv, 43-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 12)), 3,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D655.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k209) (close _V10_Dpreprocess__expr_D100_k210))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k209, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k210, env)}));
}
static void _V10_Dpreprocess__expr_D100_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.387 0 0) ((bruijn ##.error.79 47 12) (bruijn ##.k.382 5 0) (##string ##.string.654) (bruijn ##.x.175 6 0)) ((bruijn ##.integer?.67 47 0) (close _V10_Dpreprocess__expr_D100_k208) (bruijn ##.x.175 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 12)), 3,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D654.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k208, env)}),
      VGetArg(upenv, 6-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.59.176 0 0) ((close _V10_Dpreprocess__expr_D100_lambda46) (bruijn ##.x.59.176 0 0)) ((bruijn ##.symbol?.69 46 2) (close _V10_Dpreprocess__expr_D100_k207) (bruijn ##.x.175 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda46, .env = env }, }, 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k207, env)}),
      VGetArg(upenv, 5-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k204) (close _V10_Dpreprocess__expr_D100_k205))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k204, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k205, env)}));
}
static void _V10_Dpreprocess__expr_D100_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.383 0 0) ((bruijn ##.error.79 44 12) (bruijn ##.k.382 2 0) (##string ##.string.653) (bruijn ##.x.175 3 0)) ((bruijn ##.symbol?.69 44 2) (close _V10_Dpreprocess__expr_D100_k203) (bruijn ##.x.175 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 12)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D653.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k203, env)}),
      upenv->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.77 43 10) (close _V10_Dpreprocess__expr_D100_k202) (bruijn ##.x.393 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 10)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k202, env)}),
      _var0);
}
static void _V10_Dpreprocess__expr_D100_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string?.73 42 6) (close _V10_Dpreprocess__expr_D100_k201) (bruijn ##.name.173 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 6)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k201, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.38.174 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k200) (close _V10_Dpreprocess__expr_D100_lambda45) (bruijn ##.kk.5.114 34 1)) ((bruijn ##.k.376 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k200, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda45, env)}),
      VGetArg(upenv, 34-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.174 0 0)) ((close _V10_Dpreprocess__expr_D100_k199) (##inline ##vcore.car (bruijn ##.expr.38.174 0 0))) ((bruijn ##.k.376 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k199, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k198) (##inline ##vcore.cdr (bruijn ##.expr.37.172 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k198, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Dpreprocess__expr_D100_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.172 0 0)) ((close _V10_Dpreprocess__expr_D100_k197) (##inline ##vcore.car (bruijn ##.expr.37.172 0 0))) ((bruijn ##.k.376 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k197, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.377 0 0) ((close _V10_Dpreprocess__expr_D100_k196) (##inline ##vcore.cdr (bruijn ##.expr.36.171 2 0))) ((bruijn ##.k.376 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k196, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.171 1 0)) ((bruijn ##.equal?.80 36 13) (close _V10_Dpreprocess__expr_D100_k195) 'declare (##inline ##vcore.car (bruijn ##.expr.36.171 1 0))) ((bruijn ##.k.376 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k195, env)}),
      _V0declare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D187_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.45.186 4 1) (bruijn ##.k.367 1 0) (bruijn ##.expr.47.188 2 1) (bruijn ##.x.368 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 3,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
}
static void _V10_Dloop_D187_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.47.188 1 1))) ((bruijn ##.reverse.72 47 5) (close _V10_Dloop_D187_k218) (bruijn ##.args.44.189 1 2)) ((bruijn ##.k.367 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_k218, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D187_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.45.186 7 1) (bruijn ##.k.361 2 0) (bruijn ##.expr.47.188 5 1) (bruijn ##.x.363 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 1)), 3,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D187_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.72 50 5) (close _V10_Dloop_D187_k221) (bruijn ##.args.44.189 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_k221, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dloop_D187_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.46.190 0 1) (close _V10_Dloop_D187_k220) (##inline ##vcore.cdr (bruijn ##.expr.47.188 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.47.188 3 1)) (bruijn ##.args.44.189 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_k220, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
}
static void _V10_Dloop_D187_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.360 0 0) (close _V10_Dloop_D187_lambda52))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_lambda52, env)}));
}
static void _V10_Dloop_D187_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.358 1 0) (close _V10_Dloop_D187_lambda51) (bruijn ##.loop.187 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_lambda51, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D187_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D187_lambda50, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D187_k217) (close _V10_Dloop_D187_k219))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D187_k217, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_k219, env)}));
}
static void _V10_Dpreprocess__expr_D100_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D187_lambda50)) ((bruijn ##.loop.187 0 0) (bruijn ##.k.357 1 0) (##inline ##vcore.cdr (bruijn ##.expr.42.183 3 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D187_lambda50, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]),
      VNULL);
    }
}
static void _V10_Dpreprocess__expr_D100_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.356 0 0) (close _V10_Dpreprocess__expr_D100_lambda49))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda49, env)}));
}
static void _V10_Dpreprocess__expr_D100_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.372 0 0) (bruijn ##.k.370 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.373 0 0) (bruijn ##.expr.112 38 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 38-1, 1));
}
static void _V10_Dpreprocess__expr_D100_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda53, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.192 0 1)) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k222) (close _V10_Dpreprocess__expr_D100_lambda54) (bruijn ##.kk.5.114 36 1)) ((bruijn ##.k.370 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k222, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda54, env)}),
      VGetArg(upenv, 36-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.183 0 0)) (##vcore.call-with-values (bruijn ##.k.351 4 0) (close _V10_Dpreprocess__expr_D100_lambda48) (close _V10_Dpreprocess__expr_D100_lambda53)) ((bruijn ##.k.351 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda48, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda53, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.181 0 0)) ((close _V10_Dpreprocess__expr_D100_k216) (##inline ##vcore.cdr (bruijn ##.expr.41.181 0 0))) ((bruijn ##.k.351 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k216, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.179 0 0)) ((close _V10_Dpreprocess__expr_D100_k215) (##inline ##vcore.cdr (bruijn ##.expr.40.179 0 0))) ((bruijn ##.k.351 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k215, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.352 0 0) ((close _V10_Dpreprocess__expr_D100_k214) (##inline ##vcore.cdr (bruijn ##.expr.39.178 2 0))) ((bruijn ##.k.351 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k214, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.178 1 0)) ((bruijn ##.equal?.80 38 13) (close _V10_Dpreprocess__expr_D100_k213) 'declare-foreign (##inline ##vcore.car (bruijn ##.expr.39.178 1 0))) ((bruijn ##.k.351 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k213, env)}),
      _V0declare__foreign,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.346 0 0) (bruijn ##.k.343 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.347 0 0) (bruijn ##.expr.112 36 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 36-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.344 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.48.194 2 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k226) (close _V10_Dpreprocess__expr_D100_lambda56) (bruijn ##.kk.5.114 34 1)) ((bruijn ##.k.343 1 0) #f)) ((bruijn ##.k.343 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k226, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda56, env)}),
      VGetArg(upenv, 34-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.194 1 0)) ((bruijn ##.equal?.80 40 13) (close _V10_Dpreprocess__expr_D100_k225) 'push-set! (##inline ##vcore.car (bruijn ##.expr.48.194 1 0))) ((bruijn ##.k.343 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k225, env)}),
      _V0push__set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.331 0 0) (bruijn ##.k.327 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.338 1 0) ((bruijn ##.assv.68 49 1) (bruijn ##.k.339 0 0) (bruijn ##.x.197 4 0) (bruijn ##.labels.98 44 0)) ((bruijn ##.k.339 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 1)), 3,
      _var0,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 44-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.332 6 0) (##inline ##vcore.cons 'bf (##inline ##vcore.cons (bruijn ##.x.335 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VInlineCons2(runtime,
        _V0bf,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Dpreprocess__expr_D100_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.70 51 3) (close _V10_Dpreprocess__expr_D100_k238) (bruijn ##.x.336 0 0) (bruijn ##.pc.113 45 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 3)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k238, env)}),
      _var0,
      VGetArg(upenv, 45-1, 2),
      VEncodeInt(1l));
}
static void _V10_Dpreprocess__expr_D100_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.71 50 4) (close _V10_Dpreprocess__expr_D100_k237) (bruijn ##.x.199 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k237, env)}),
      _var0);
}
static void _V10_Dpreprocess__expr_D100_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.337 0 0) ((bruijn ##.error.79 50 12) (bruijn ##.k.332 4 0) (##string ##.string.656) (bruijn ##.x.197 5 0)) ((bruijn ##.error.79 50 12) (bruijn ##.k.332 4 0) (##string ##.string.657) (bruijn ##.x.197 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 12)), 3,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D656.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 12)), 3,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D657.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
}
}
static void _V10_Dpreprocess__expr_D100_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.60.198 0 0) ((close _V10_Dpreprocess__expr_D100_lambda59) (bruijn ##.x.60.198 0 0)) ((bruijn ##.symbol?.69 49 2) (close _V10_Dpreprocess__expr_D100_k239) (bruijn ##.x.197 4 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda59, .env = env }, }, 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k239, env)}),
      upenv->up->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k235) (close _V10_Dpreprocess__expr_D100_k236))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k235, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k236, env)}));
}
static void _V10_Dpreprocess__expr_D100_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.333 0 0) ((bruijn ##.k.332 1 0) (bruijn ##.expr.112 41 1)) ((bruijn ##.symbol?.69 47 2) (close _V10_Dpreprocess__expr_D100_k234) (bruijn ##.x.197 2 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VGetArg(upenv, 41-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k234, env)}),
      upenv->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.67 46 0) (close _V10_Dpreprocess__expr_D100_k233) (bruijn ##.x.197 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k233, env)}),
      upenv->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.50.196 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k232) (close _V10_Dpreprocess__expr_D100_lambda58) (bruijn ##.kk.5.114 38 1)) ((bruijn ##.k.327 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k232, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda58, env)}),
      VGetArg(upenv, 38-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.196 0 0)) ((close _V10_Dpreprocess__expr_D100_k231) (##inline ##vcore.car (bruijn ##.expr.50.196 0 0))) ((bruijn ##.k.327 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k231, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.328 0 0) ((close _V10_Dpreprocess__expr_D100_k230) (##inline ##vcore.cdr (bruijn ##.expr.49.195 2 0))) ((bruijn ##.k.327 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k230, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.195 1 0)) ((bruijn ##.equal?.80 42 13) (close _V10_Dpreprocess__expr_D100_k229) 'bf (##inline ##vcore.car (bruijn ##.expr.49.195 1 0))) ((bruijn ##.k.327 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k229, env)}),
      _V0bf,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.319 0 0) (bruijn ##.k.315 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.322 1 0) ((bruijn ##.>=.81 50 14) (bruijn ##.k.323 0 0) (bruijn ##.x.202 3 0) 0) ((bruijn ##.k.323 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 14)), 3,
      _var0,
      upenv->up->up->vars[0],
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.321 0 0) ((bruijn ##.k.320 2 0) (bruijn ##.expr.112 44 1)) ((bruijn ##.error.79 50 12) (bruijn ##.k.320 2 0) (##string ##.string.658) (bruijn ##.x.202 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VGetArg(upenv, 44-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 12)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D658.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
}
static void _V10_Dpreprocess__expr_D100_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k247) (close _V10_Dpreprocess__expr_D100_k248))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k247, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k248, env)}));
}
static void _V10_Dpreprocess__expr_D100_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.integer?.67 48 0) (close _V10_Dpreprocess__expr_D100_k246) (bruijn ##.x.202 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k246, env)}),
      upenv->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.201 1 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k245) (close _V10_Dpreprocess__expr_D100_lambda61) (bruijn ##.kk.5.114 40 1)) ((bruijn ##.k.315 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k245, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda61, env)}),
      VGetArg(upenv, 40-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.201 0 0)) ((close _V10_Dpreprocess__expr_D100_k244) (##inline ##vcore.car (bruijn ##.expr.52.201 0 0))) ((bruijn ##.k.315 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k244, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.316 0 0) ((close _V10_Dpreprocess__expr_D100_k243) (##inline ##vcore.cdr (bruijn ##.expr.51.200 2 0))) ((bruijn ##.k.315 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k243, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.200 1 0)) ((bruijn ##.equal?.80 44 13) (close _V10_Dpreprocess__expr_D100_k242) 'letrec-begin (##inline ##vcore.car (bruijn ##.expr.51.200 1 0))) ((bruijn ##.k.315 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k242, env)}),
      _V0letrec__begin,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.310 0 0) (bruijn ##.k.307 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.311 0 0) (bruijn ##.expr.112 42 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 42-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.308 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.53.203 2 0))) (##vcore.call-with-values (close _V10_Dpreprocess__expr_D100_k252) (close _V10_Dpreprocess__expr_D100_lambda63) (bruijn ##.kk.5.114 40 1)) ((bruijn ##.k.307 1 0) #f)) ((bruijn ##.k.307 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k252, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda63, env)}),
      VGetArg(upenv, 40-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.203 1 0)) ((bruijn ##.equal?.80 46 13) (close _V10_Dpreprocess__expr_D100_k251) 'letrec-end (##inline ##vcore.car (bruijn ##.expr.53.203 1 0))) ((bruijn ##.k.307 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k251, env)}),
      _V0letrec__end,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__expr_D100_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.79 47 12) (bruijn ##.k.305 0 0) (##string ##.string.659) (bruijn ##.expr.112 41 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 12)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER),
      VGetArg(upenv, 41-1, 1));
}
static void _V10_Dpreprocess__expr_D100_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.285 39 0) (close _V10_Dpreprocess__expr_D100_lambda64) (bruijn ##.kk.5.114 39 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 39-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda64, env)}),
      VGetArg(upenv, 39-1, 1));
}
static void _V10_Dpreprocess__expr_D100_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k250) (close _V10_Dpreprocess__expr_D100_k253))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k250, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k253, env)}));
}
static void _V10_Dpreprocess__expr_D100_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda62) (bruijn ##.input.6.115 36 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda62, .env = env }, }, 1,
      VGetArg(upenv, 36-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k241) (close _V10_Dpreprocess__expr_D100_k249))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k241, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k249, env)}));
}
static void _V10_Dpreprocess__expr_D100_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda60) (bruijn ##.input.6.115 34 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda60, .env = env }, }, 1,
      VGetArg(upenv, 34-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k228) (close _V10_Dpreprocess__expr_D100_k240))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k228, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k240, env)}));
}
static void _V10_Dpreprocess__expr_D100_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda57) (bruijn ##.input.6.115 32 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda57, .env = env }, }, 1,
      VGetArg(upenv, 32-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k224) (close _V10_Dpreprocess__expr_D100_k227))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k224, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k227, env)}));
}
static void _V10_Dpreprocess__expr_D100_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda55) (bruijn ##.input.6.115 30 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda55, .env = env }, }, 1,
      VGetArg(upenv, 30-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k212) (close _V10_Dpreprocess__expr_D100_k223))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k212, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k223, env)}));
}
static void _V10_Dpreprocess__expr_D100_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda47) (bruijn ##.input.6.115 28 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda47, .env = env }, }, 1,
      VGetArg(upenv, 28-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k194) (close _V10_Dpreprocess__expr_D100_k211))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k194, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k211, env)}));
}
static void _V10_Dpreprocess__expr_D100_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda44) (bruijn ##.input.6.115 26 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda44, .env = env }, }, 1,
      VGetArg(upenv, 26-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k180) (close _V10_Dpreprocess__expr_D100_k193))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k180, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k193, env)}));
}
static void _V10_Dpreprocess__expr_D100_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda41) (bruijn ##.input.6.115 24 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda41, .env = env }, }, 1,
      VGetArg(upenv, 24-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k166) (close _V10_Dpreprocess__expr_D100_k179))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k166, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k179, env)}));
}
static void _V10_Dpreprocess__expr_D100_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda38) (bruijn ##.input.6.115 22 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda38, .env = env }, }, 1,
      VGetArg(upenv, 22-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k160) (close _V10_Dpreprocess__expr_D100_k165))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k160, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k165, env)}));
}
static void _V10_Dpreprocess__expr_D100_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda36) (bruijn ##.input.6.115 20 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda36, .env = env }, }, 1,
      VGetArg(upenv, 20-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k139) (close _V10_Dpreprocess__expr_D100_k159))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k139, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k159, env)}));
}
static void _V10_Dpreprocess__expr_D100_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda33) (bruijn ##.input.6.115 18 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda33, .env = env }, }, 1,
      VGetArg(upenv, 18-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k118) (close _V10_Dpreprocess__expr_D100_k138))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k118, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k138, env)}));
}
static void _V10_Dpreprocess__expr_D100_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda30) (bruijn ##.input.6.115 16 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda30, .env = env }, }, 1,
      VGetArg(upenv, 16-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k109) (close _V10_Dpreprocess__expr_D100_k117))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k109, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k117, env)}));
}
static void _V10_Dpreprocess__expr_D100_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda28) (bruijn ##.input.6.115 14 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda28, .env = env }, }, 1,
      VGetArg(upenv, 14-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k100) (close _V10_Dpreprocess__expr_D100_k108))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k100, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k108, env)}));
}
static void _V10_Dpreprocess__expr_D100_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda26) (bruijn ##.input.6.115 12 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda26, .env = env }, }, 1,
      VGetArg(upenv, 12-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k91) (close _V10_Dpreprocess__expr_D100_k99))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k91, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k99, env)}));
}
static void _V10_Dpreprocess__expr_D100_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda24) (bruijn ##.input.6.115 10 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda24, .env = env }, }, 1,
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k84) (close _V10_Dpreprocess__expr_D100_k90))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k84, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k90, env)}));
}
static void _V10_Dpreprocess__expr_D100_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda22) (bruijn ##.input.6.115 8 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda22, .env = env }, }, 1,
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k71) (close _V10_Dpreprocess__expr_D100_k83))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k71, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k83, env)}));
}
static void _V10_Dpreprocess__expr_D100_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda20) (bruijn ##.input.6.115 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda20, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dpreprocess__expr_D100_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k62) (close _V10_Dpreprocess__expr_D100_k70))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k62, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k70, env)}));
}
static void _V10_Dpreprocess__expr_D100_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda17) (bruijn ##.input.6.115 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda17, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k57) (close _V10_Dpreprocess__expr_D100_k61))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k57, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k61, env)}));
}
static void _V10_Dpreprocess__expr_D100_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda15) (bruijn ##.input.6.115 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda15, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dpreprocess__expr_D100_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_k53) (close _V10_Dpreprocess__expr_D100_k56))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_k53, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_k56, env)}));
}
static void _V10_Dpreprocess__expr_D100_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__expr_D100_lambda13) (bruijn ##.input.6.115 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda13, .env = env }, }, 1,
      _var0);
}
static void _V10_Dpreprocess__expr_D100_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dpreprocess__expr_D100_lambda12) (bruijn ##.expr.112 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__expr_D100_lambda12, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Dpreprocess__expr_D100_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__expr_D100_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.284 0 0) (close _V10_Dpreprocess__expr_D100_lambda11))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda11, env)}));
}
static void _V10_Dpreprocess__loop_D205_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.582 1 0) ((bruijn ##.vector-set!.76 15 9) (bruijn ##.k.583 0 0) (bruijn ##.tape.206 7 1) (bruijn ##.pc.207 7 2) (bruijn ##.e.208 4 0)) ((bruijn ##.k.583 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 9)), 4,
      _var0,
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
      upenv->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dpreprocess__loop_D205_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.preprocess-loop.205 9 0) (bruijn ##.k.578 8 0) (bruijn ##.tape.206 8 1) (bruijn ##.x.581 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 3,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 8-1, 1),
      _var0);
}
static void _V10_Dpreprocess__loop_D205_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.86 15 19) (close _V10_Dpreprocess__loop_D205_k263) (bruijn ##.pc.207 7 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_k263, env)}),
      VGetArg(upenv, 7-1, 2),
      VEncodeInt(1l));
}
static void _V10_Dpreprocess__loop_D205_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpreprocess__loop_D205_k261) (close _V10_Dpreprocess__loop_D205_k262))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dpreprocess__loop_D205_k261, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_k262, env)}));
}
static void _V10_Dpreprocess__loop_D205_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.77 13 10) (close _V10_Dpreprocess__loop_D205_k260) (bruijn ##.x.584 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 10)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_k260, env)}),
      _var0);
}
static void _V10_Dpreprocess__loop_D205_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.78 12 11) (close _V10_Dpreprocess__loop_D205_k259) (bruijn ##.e.208 1 0) (bruijn ##.x.585 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 11)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_k259, env)}),
      upenv->vars[0],
      _var0);
}
static void _V10_Dpreprocess__loop_D205_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-ref.84 11 17) (close _V10_Dpreprocess__loop_D205_k258) (bruijn ##.tape.206 3 1) (bruijn ##.pc.207 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_k258, env)}),
      upenv->up->up->vars[1],
      upenv->up->up->vars[2]);
}
static void _V10_Dpreprocess__loop_D205_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.preprocess-expr.100 5 2) (close _V10_Dpreprocess__loop_D205_k257) (bruijn ##.x.586 0 0) (bruijn ##.pc.207 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_k257, env)}),
      _var0,
      upenv->up->vars[2]);
}
static void _V10_Dpreprocess__loop_D205_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.579 0 0) ((bruijn ##.k.578 1 0) (bruijn ##.tape.206 1 1)) ((bruijn ##.vector-ref.84 9 17) (close _V10_Dpreprocess__loop_D205_k256) (bruijn ##.tape.206 1 1) (bruijn ##.pc.207 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_k256, env)}),
      upenv->vars[1],
      upenv->vars[2]);
}
}
static void _V10_Dpreprocess__loop_D205_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__loop_D205_lambda65, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.>=.81 8 14) (close _V10_Dpreprocess__loop_D205_k255) (bruijn ##.pc.207 0 2) (bruijn ##.len.204 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_k255, env)}),
      _var2,
      upenv->up->vars[0]);
}
static void _V10_Dpreprocess__vasm_D90_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__vasm_D90_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.preprocess-loop.205 1 0) (bruijn ##.k.254 4 0) (bruijn ##.x.587 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 3,
      upenv->up->up->up->vars[0],
      _var0,
      VEncodeInt(0l));
}
static void _V10_Dpreprocess__vasm_D90_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__vasm_D90_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dpreprocess__loop_D205_lambda65)) ((bruijn ##.peel-labels.99 2 1) (close _V10_Dpreprocess__vasm_D90_k264) (bruijn ##.tape.97 3 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__loop_D205_lambda65, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[1]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__vasm_D90_k264, env)}),
      upenv->up->up->vars[1]);
    }
}
static void _V10_Dpreprocess__vasm_D90_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpreprocess__vasm_D90_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 3 ('() (close _V10_Dpeel__labels_D99_lambda4) (close _V10_Dpreprocess__expr_D100_lambda10)) ((bruijn ##.vector-length.82 5 15) (close _V10_Dpreprocess__vasm_D90_k254) (bruijn ##.tape.97 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VNULL;
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpeel__labels_D99_lambda4, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__expr_D100_lambda10, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 15)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__vasm_D90_k254, env)}),
      upenv->vars[1]);
    }
}
static void _V10_Dfind__declare_D91_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D91_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.590 0 0) ((bruijn ##.k.588 6 0) (bruijn ##.program-counter.211 5 0)) ((bruijn ##.find-declare.91 7 1) (bruijn ##.k.588 6 0) (bruijn ##.tape.209 6 1) (bruijn ##.program-counter.211 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VGetArg(upenv, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 1)), 3,
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 5-1, 0));
}
}
static void _V10_Dfind__declare_D91_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D91_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.83 9 16) (close _V10_Dfind__declare_D91_k270) (bruijn ##.x.591 0 0) 'declare)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 16)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D91_k270, env)}),
      _var0,
      _V0declare);
}
static void _V10_Dfind__declare_D91_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D91_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.85 8 18) (close _V10_Dfind__declare_D91_k269) (bruijn ##.x.592 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D91_k269, env)}),
      _var0);
}
static void _V10_Dfind__declare_D91_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D91_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.589 0 0) ((bruijn ##.k.588 3 0) #f) ((bruijn ##.vector-ref.84 7 17) (close _V10_Dfind__declare_D91_k268) (bruijn ##.tape.209 3 1) (bruijn ##.program-counter.211 2 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D91_k268, env)}),
      upenv->up->up->vars[1],
      upenv->up->vars[0]);
}
}
static void _V10_Dfind__declare_D91_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D91_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.>=.81 6 14) (close _V10_Dfind__declare_D91_k267) (bruijn ##.program-counter.211 1 0) (bruijn ##.x.593 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D91_k267, env)}),
      upenv->vars[0],
      _var0);
}
static void _V10_Dfind__declare_D91_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D91_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-length.82 5 15) (close _V10_Dfind__declare_D91_k266) (bruijn ##.tape.209 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 15)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D91_k266, env)}),
      upenv->vars[1]);
}
static void _V10_Dfind__declare_D91_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__declare_D91_lambda66, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.+.86 4 19) (close _V10_Dfind__declare_D91_k265) (bruijn ##.program-counter.210 0 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[19]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D91_k265, env)}),
      _var2,
      VEncodeInt(1l));
}
static void _V10_Dset__declare__loop_D213_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.set-declare-loop.213 3 0) (bruijn ##.k.597 2 0) (bruijn ##.x.599 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 2,
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dset__declare__loop_D213_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.find-declare.91 4 1) (close _V10_Dset__declare__loop_D213_k272) (bruijn ##.tape.212 3 1) (bruijn ##.pc.214 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k272, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
static void _V10_Dset__declare__loop_D213_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.610 0 0) (bruijn ##.k.605 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dset__declare__loop_D213_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-declare! (bruijn ##.k.611 1 0) (##inline ##vcore.car (bruijn ##.expr.64.218 3 0)) (bruijn ##.x.612 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetDeclare, 3,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      _var0);
}
static void _V10_Dset__declare__loop_D213_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-vasm-lambda.92 11 2) (close _V10_Dset__declare__loop_D213_k279) (bruijn ##.tape.212 10 1) (##inline ##vcore.car (bruijn ##.expr.65.220 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k279, env)}),
      VGetArg(upenv, 10-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dset__declare__loop_D213_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.220 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.65.220 0 0))) (##vcore.call-with-values (close _V10_Dset__declare__loop_D213_k278) (close _V10_Dset__declare__loop_D213_lambda71) (bruijn ##.kk.61.215 6 1)) ((bruijn ##.k.605 3 0) #f)) ((bruijn ##.k.605 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k278, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_lambda71, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declare__loop_D213_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.218 0 0)) ((close _V10_Dset__declare__loop_D213_k277) (##inline ##vcore.cdr (bruijn ##.expr.64.218 0 0))) ((bruijn ##.k.605 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dset__declare__loop_D213_k277, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declare__loop_D213_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.606 0 0) ((close _V10_Dset__declare__loop_D213_k276) (##inline ##vcore.cdr (bruijn ##.expr.63.217 2 0))) ((bruijn ##.k.605 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dset__declare__loop_D213_k276, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declare__loop_D213_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.217 1 0)) ((bruijn ##.equal?.80 10 13) (close _V10_Dset__declare__loop_D213_k275) 'declare (##inline ##vcore.car (bruijn ##.expr.63.217 1 0))) ((bruijn ##.k.605 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k275, env)}),
      _V0declare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declare__loop_D213_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.79 12 12) (bruijn ##.k.602 1 0) (##string ##.string.660) (bruijn ##.x.603 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 12)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D660.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dset__declare__loop_D213_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-ref.84 11 17) (close _V10_Dset__declare__loop_D213_k281) (bruijn ##.tape.212 7 1) (bruijn ##.pc.214 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k281, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Dset__declare__loop_D213_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.600 3 0) (close _V10_Dset__declare__loop_D213_lambda72) (bruijn ##.kk.61.215 3 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_lambda72, env)}),
      upenv->up->up->vars[1]);
}
static void _V10_Dset__declare__loop_D213_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dset__declare__loop_D213_k274) (close _V10_Dset__declare__loop_D213_k280))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dset__declare__loop_D213_k274, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k280, env)}));
}
static void _V10_Dset__declare__loop_D213_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dset__declare__loop_D213_lambda70) (bruijn ##.input.62.216 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dset__declare__loop_D213_lambda70, .env = env }, }, 1,
      _var0);
}
static void _V10_Dset__declare__loop_D213_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.vector-ref.84 7 17) (close _V10_Dset__declare__loop_D213_k273) (bruijn ##.tape.212 3 1) (bruijn ##.pc.214 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k273, env)}),
      upenv->up->up->vars[1],
      upenv->vars[1]);
}
static void _V10_Dset__declare__loop_D213_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declare__loop_D213_lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (bruijn ##.pc.214 0 1) (##vcore.call/cc (close _V10_Dset__declare__loop_D213_k271) (close _V10_Dset__declare__loop_D213_lambda69)) ((bruijn ##.k.597 0 0) #f))
if(VDecodeBool(
_var1)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_k271, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_lambda69, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dset__declares_B_D94_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declares_B_D94_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.set-declare-loop.213 1 0) (bruijn ##.k.596 2 0) (bruijn ##.x.615 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 2,
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dset__declares_B_D94_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dset__declares_B_D94_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dset__declare__loop_D213_lambda68)) ((bruijn ##.find-declare.91 2 1) (close _V10_Dset__declares_B_D94_k282) (bruijn ##.tape.212 1 1) -1))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declare__loop_D213_lambda68, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[1]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declares_B_D94_k282, env)}),
      upenv->vars[1],
      VEncodeInt(-1l));
    }
}
static void _V10_Dfind__toplevel_D95_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D95_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.find-toplevel.95 7 5) (bruijn ##.k.616 6 0) (bruijn ##.tape.222 6 1) (bruijn ##.x.619 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 5)), 3,
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 6-1, 1),
      _var0);
}
static void _V10_Dfind__toplevel_D95_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D95_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.618 0 0) ((bruijn ##.+.86 9 19) (bruijn ##.k.616 5 0) (bruijn ##.program-counter.223 5 2) 1) ((bruijn ##.+.86 9 19) (close _V10_Dfind__toplevel_D95_k288) 1 (bruijn ##.program-counter.223 5 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 19)), 3,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 5-1, 2),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D95_k288, env)}),
      VEncodeInt(1l),
      VGetArg(upenv, 5-1, 2));
}
}
static void _V10_Dfind__toplevel_D95_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D95_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.83 8 16) (close _V10_Dfind__toplevel_D95_k287) (bruijn ##.x.620 0 0) 'toplevel)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 16)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D95_k287, env)}),
      _var0,
      _V0toplevel);
}
static void _V10_Dfind__toplevel_D95_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D95_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.85 7 18) (close _V10_Dfind__toplevel_D95_k286) (bruijn ##.x.621 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D95_k286, env)}),
      _var0);
}
static void _V10_Dfind__toplevel_D95_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D95_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.617 0 0) ((bruijn ##.k.616 2 0) #f) ((bruijn ##.vector-ref.84 6 17) (close _V10_Dfind__toplevel_D95_k285) (bruijn ##.tape.222 2 1) (bruijn ##.program-counter.223 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D95_k285, env)}),
      upenv->up->vars[1],
      upenv->up->vars[2]);
}
}
static void _V10_Dfind__toplevel_D95_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D95_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.>=.81 5 14) (close _V10_Dfind__toplevel_D95_k284) (bruijn ##.program-counter.223 1 2) (bruijn ##.x.622 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D95_k284, env)}),
      upenv->vars[2],
      _var0);
}
static void _V10_Dfind__toplevel_D95_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__toplevel_D95_lambda73, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.vector-length.82 4 15) (close _V10_Dfind__toplevel_D95_k283) (bruijn ##.tape.222 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[15]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D95_k283, env)}),
      _var1);
}
static void _V10_Deval__loop_D227_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D227_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.628 1 0) (bruijn ##.program-counter.226 3 1) (bruijn ##.x.629 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      upenv->vars[0],
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
}
static void _V10_Deval__loop_D227_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D227_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.program-counter.226 2 1) ((bruijn ##.find-toplevel.95 5 5) (close _V10_Deval__loop_D227_k291) (bruijn ##.tape.225 2 0) (bruijn ##.program-counter.226 2 1)) ((bruijn ##.k.628 0 0) #f))
if(VDecodeBool(
upenv->up->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D227_k291, env)}),
      upenv->up->vars[0],
      upenv->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Deval__loop_D227_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D227_lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval-vasm-toplevel.93 6 3) (bruijn ##.k.627 0 0) (bruijn ##.tape.225 3 0) (bruijn ##.program-counter.226 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 3)), 3,
      _var0,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1]);
}
static void _V10_Deval__loop_D227_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D227_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.program-counter.226 2 1) ((bruijn ##.call-with-values.89 8 22) (bruijn ##.k.625 1 0) (close _V10_Deval__loop_D227_lambda76) (bruijn ##.eval-loop.227 2 2)) ((bruijn ##.apply.88 8 21) (bruijn ##.k.625 1 0) (bruijn ##.values.87 8 20) (bruijn ##.rets.228 1 1)))
if(VDecodeBool(
upenv->up->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 22)), 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D227_lambda76, env)}),
      upenv->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 21)), 3,
      upenv->vars[0],
      VGetArg(upenv, 8-1, 20),
      upenv->vars[1]);
}
}
static void _V10_Deval__loop_D227_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__loop_D227_lambda75, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((close _V10_Deval__loop_D227_k290) (close _V10_Deval__loop_D227_k292))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Deval__loop_D227_k290, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D227_k292, env)}));
}
static void _V10_Deval__vasm_D96_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__vasm_D96_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval-loop.227 1 2) (bruijn ##.k.623 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[2]), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Deval__vasm_D96_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__vasm_D96_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.624 1 0) 0 (close _V10_Deval__loop_D227_lambda75)) ((bruijn ##.set-declares!.94 3 4) (close _V10_Deval__vasm_D96_k293) (bruijn ##.tape.225 0 0)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = upenv->vars[0];
    env->vars[1] = VEncodeInt(0l);
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__loop_D227_lambda75, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[4]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__vasm_D96_k293, env)}),
      env->vars[0]);
    }
}
static void _V10_Deval__vasm_D96_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Deval__vasm_D96_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.preprocess-vasm.90 1 0) (close _V10_Deval__vasm_D96_k289) (bruijn ##.vasm.224 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__vasm_D96_k289, env)}),
      _var1);
}
static void _V0vanity_V0bytecode_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 7 ((close _V10_Dpreprocess__vasm_D90_lambda3) (close _V10_Dfind__declare_D91_lambda66) (bruijn ##.x.594 2 0) (bruijn ##.x.595 1 0) (close _V10_Dset__declares_B_D94_lambda67) (close _V10_Dfind__toplevel_D95_lambda73) (close _V10_Deval__vasm_D96_lambda74)) ((bruijn ##.k.230 31 0) (##inline ##vcore.cons (##inline ##vcore.cons 'eval-vasm (bruijn ##.eval-vasm.96 0 6)) '())))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[7]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 7, 7, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpreprocess__vasm_D90_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__declare_D91_lambda66, env)});
    env->vars[2] = upenv->up->vars[0];
    env->vars[3] = upenv->vars[0];
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dset__declares_B_D94_lambda67, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__toplevel_D95_lambda73, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Deval__vasm_D96_lambda74, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eval__vasm,
        env->vars[6]),
        VNULL));
    }
}
static void _V0vanity_V0bytecode_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.function (close _V0vanity_V0bytecode_V20_k29) (##string ##.string.661))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k29, env)}),
      VEncodePointer(&_V10_Dstring_D661.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22) {
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
  // (##vcore.function (close _V0vanity_V0bytecode_V20_k28) (##string ##.string.662))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k28, env)}),
      VEncodePointer(&_V10_Dstring_D662.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0bytecode_V20_lambda2) (bruijn ##.x.231 22 0) (bruijn ##.x.232 21 0) (bruijn ##.x.233 20 0) (bruijn ##.x.234 19 0) (bruijn ##.x.235 18 0) (bruijn ##.x.236 17 0) (bruijn ##.x.237 16 0) (bruijn ##.x.238 15 0) (bruijn ##.x.239 14 0) (bruijn ##.x.240 13 0) (bruijn ##.x.241 12 0) (bruijn ##.x.242 11 0) (bruijn ##.x.243 10 0) (bruijn ##.x.244 9 0) (bruijn ##.x.245 8 0) (bruijn ##.x.246 7 0) (bruijn ##.x.247 6 0) (bruijn ##.x.248 5 0) (bruijn ##.x.249 4 0) (bruijn ##.x.250 3 0) (bruijn ##.x.251 2 0) (bruijn ##.x.252 1 0) (bruijn ##.x.253 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0bytecode_V20_lambda2, .env = env }, }, 23,
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
static void _V0vanity_V0bytecode_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 22 0) (close _V0vanity_V0bytecode_V20_k27) 'call-with-values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k27, env)}),
      _V0call__with__values);
}
static void _V0vanity_V0bytecode_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 21 0) (close _V0vanity_V0bytecode_V20_k26) 'apply)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k26, env)}),
      _V0apply);
}
static void _V0vanity_V0bytecode_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 20 0) (close _V0vanity_V0bytecode_V20_k25) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k25, env)}),
      _V0values);
}
static void _V0vanity_V0bytecode_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 19 0) (close _V0vanity_V0bytecode_V20_k24) '+)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k24, env)}),
      _V0_P);
}
static void _V0vanity_V0bytecode_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 18 0) (close _V0vanity_V0bytecode_V20_k23) 'car)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k23, env)}),
      _V0car);
}
static void _V0vanity_V0bytecode_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 17 0) (close _V0vanity_V0bytecode_V20_k22) 'vector-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k22, env)}),
      _V0vector__ref);
}
static void _V0vanity_V0bytecode_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 16 0) (close _V0vanity_V0bytecode_V20_k21) 'eqv?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k21, env)}),
      _V0eqv_Q);
}
static void _V0vanity_V0bytecode_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 15 0) (close _V0vanity_V0bytecode_V20_k20) 'vector-length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k20, env)}),
      _V0vector__length);
}
static void _V0vanity_V0bytecode_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 14 0) (close _V0vanity_V0bytecode_V20_k19) '>=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k19, env)}),
      _V0_G_E);
}
static void _V0vanity_V0bytecode_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 13 0) (close _V0vanity_V0bytecode_V20_k18) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k18, env)}),
      _V0equal_Q);
}
static void _V0vanity_V0bytecode_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 12 0) (close _V0vanity_V0bytecode_V20_k17) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k17, env)}),
      _V0error);
}
static void _V0vanity_V0bytecode_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 11 0) (close _V0vanity_V0bytecode_V20_k16) 'eq?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k16, env)}),
      _V0eq_Q);
}
static void _V0vanity_V0bytecode_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 10 0) (close _V0vanity_V0bytecode_V20_k15) 'not)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k15, env)}),
      _V0not);
}
static void _V0vanity_V0bytecode_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 9 0) (close _V0vanity_V0bytecode_V20_k14) 'vector-set!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k14, env)}),
      _V0vector__set_B);
}
static void _V0vanity_V0bytecode_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 8 0) (close _V0vanity_V0bytecode_V20_k13) 'cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k13, env)}),
      _V0cons);
}
static void _V0vanity_V0bytecode_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 7 0) (close _V0vanity_V0bytecode_V20_k12) 'lookup-intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k12, env)}),
      _V0lookup__intrinsic);
}
static void _V0vanity_V0bytecode_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 6 0) (close _V0vanity_V0bytecode_V20_k11) 'string?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k11, env)}),
      _V0string_Q);
}
static void _V0vanity_V0bytecode_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 5 0) (close _V0vanity_V0bytecode_V20_k10) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k10, env)}),
      _V0reverse);
}
static void _V0vanity_V0bytecode_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 4 0) (close _V0vanity_V0bytecode_V20_k9) 'cdr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k9, env)}),
      _V0cdr);
}
static void _V0vanity_V0bytecode_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 3 0) (close _V0vanity_V0bytecode_V20_k8) '-)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k8, env)}),
      _V0__);
}
static void _V0vanity_V0bytecode_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 2 0) (close _V0vanity_V0bytecode_V20_k7) 'symbol?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k7, env)}),
      _V0symbol_Q);
}
static void _V0vanity_V0bytecode_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 1 0) (close _V0vanity_V0bytecode_V20_k6) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k6, env)}),
      _V0assv);
}
static void _V0vanity_V0bytecode_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.66 0 0) (close _V0vanity_V0bytecode_V20_k5) 'integer?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k5, env)}),
      _V0integer_Q);
}
static void _V0vanity_V0bytecode_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0bytecode_V20_k4) (##string ##.string.663) (bruijn ##.x.632 2 0) (bruijn ##.x.633 1 0) (bruijn ##.x.634 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 5,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D663.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V0vanity_V0bytecode_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k3) (##string ##.string.664))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D664.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k2) (##string ##.string.665))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D665.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0bytecode_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0bytecode_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0bytecode_V20_k1) (##string ##.string.666))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0bytecode_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D666.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0bytecode_V20 = (VFunc)_V0vanity_V0bytecode_V20_lambda1;
