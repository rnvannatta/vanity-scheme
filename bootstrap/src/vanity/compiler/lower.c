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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1246 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1245 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1244 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1243 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1242 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1241 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1240 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1239 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0set__car_B;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0set__car_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "set-car!" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0integer_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "integer\?" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
VWEAK VWORD _V0char_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0char_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "char\?" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->symbol" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0to__functions;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0to__functions = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "to-functions" };
VWEAK VWORD _V0bruijn__ify;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0bruijn__ify = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "bruijn-ify" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1238 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "global" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1237 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1236 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "literal-lifting: unknown literal type" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1235 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "string" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1234 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "~A_k~A" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1233 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "~A_lambda~A" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1232 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "bruijnify-pass: No matching case" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1231 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "bruijnify-pass: No matching lambda" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static __attribute__((constructor)) void VDllMain1() {
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0apply = VEncodePointer(VLookupConstant("_V0apply", &_VW_V0apply), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VLookupConstant("_V0list__ref", &_VW_V0list__ref), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0set__car_B = VEncodePointer(VLookupConstant("_V0set__car_B", &_VW_V0set__car_B), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VLookupConstant("_V0mangle__symbol", &_VW_V0mangle__symbol), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VLookupConstant("_V0lookup__intrinsic__name", &_VW_V0lookup__intrinsic__name), VPOINTER_OTHER);
  _V0mangle__foreign__function = VEncodePointer(VLookupConstant("_V0mangle__foreign__function", &_VW_V0mangle__foreign__function), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VLookupConstant("_V0assoc", &_VW_V0assoc), VPOINTER_OTHER);
  _V0integer_Q = VEncodePointer(VLookupConstant("_V0integer_Q", &_VW_V0integer_Q), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VLookupConstant("_V0number_Q", &_VW_V0number_Q), VPOINTER_OTHER);
  _V0char_Q = VEncodePointer(VLookupConstant("_V0char_Q", &_VW_V0char_Q), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0string___Gsymbol = VEncodePointer(VLookupConstant("_V0string___Gsymbol", &_VW_V0string___Gsymbol), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0to__functions = VEncodePointer(VLookupConstant("_V0to__functions", &_VW_V0to__functions), VPOINTER_OTHER);
  _V0bruijn__ify = VEncodePointer(VLookupConstant("_V0bruijn__ify", &_VW_V0bruijn__ify), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0close = VEncodePointer(VLookupConstant("_V0close", &_VW_V0close), VPOINTER_OTHER);
  _V10string = VEncodePointer(VLookupConstant("_V10string", &_VW_V10string), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VLookupConstant("_V10intrinsic", &_VW_V10intrinsic), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VLookupConstant("_V10vcore_Ddeclare", &_VW_V10vcore_Ddeclare), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VLookupConstant("_V10inline", &_VW_V10inline), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VLookupConstant("_V0continuation", &_VW_V0continuation), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VLookupConstant("_V0bruijn", &_VW_V0bruijn), VPOINTER_OTHER);
}
static void _V10_Dloop_D188_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D188_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D188_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.188 6 0) (bruijn ##.k.545 5 0) (bruijn ##.x.548 1 0) (bruijn ##.x.549 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D188_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D188_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D188_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.175 8 33) (close _V10_Dloop_D188_k52) (bruijn ##.i.190 4 2) 1)
    V_CALL(VGetArg(upenv, 8-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D188_k52, env)}),
      upenv->up->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D188_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D188_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D188_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.547 0 0) ((bruijn ##.k.545 3 0) (bruijn ##.i.190 3 2)) ((bruijn ##.cdr.152 7 10) (close _V10_Dloop_D188_k51) (bruijn ##.l.189 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D188_k51, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dloop_D188_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D188_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D188_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.p.186 4 1) (close _V10_Dloop_D188_k50) (bruijn ##.x.550 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D188_k50, env)}),
      _var0);
 }
}
static void _V10_Dloop_D188_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D188_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D188_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.546 0 0) ((bruijn ##.k.545 1 0) #f) ((bruijn ##.car.149 5 7) (close _V10_Dloop_D188_k49) (bruijn ##.l.189 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D188_k49, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D188_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D188_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D188_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.148 4 6) (close _V10_Dloop_D188_k48) (bruijn ##.l.189 0 1))
    V_CALL(upenv->up->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D188_k48, env)}),
      _var1);
 }
}
static void _V10_Dlist__index_D181_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__index_D181_lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__index_D181_lambda3, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D188_lambda4)) ((bruijn ##.loop.188 0 0) (bruijn ##.k.544 1 0) (bruijn ##.l.187 1 2) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D188_lambda4, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dlookup_D192_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup_D192_lambda7, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.list.179 8 37) (bruijn ##.k.552 4 0) 'bruijn (bruijn ##.x.199 4 3) (bruijn ##.depth.197 4 1) (bruijn ##.idx.201 0 0))
    V_CALL(VGetArg(upenv, 8-1, 37), runtime,
      upenv->up->up->up->vars[0],
      _V0bruijn,
      upenv->up->up->up->vars[3],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dlookup_D192_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup_D192_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup_D192_k57, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.lookup.192 6 0) (bruijn ##.k.552 5 0) (bruijn ##.x.554 1 0) (bruijn ##.x.555 0 0) (bruijn ##.x.199 5 3))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V10_Dlookup_D192_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup_D192_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup_D192_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.152 8 10) (close _V10_Dlookup_D192_k57) (bruijn ##.env.198 4 2))
    V_CALL(VGetArg(upenv, 8-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup_D192_k57, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dlookup_D192_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup_D192_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup_D192_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.6.200 0 0) ((close _V10_Dlookup_D192_lambda7) (bruijn ##.x.6.200 0 0)) ((bruijn ##.+.175 7 33) (close _V10_Dlookup_D192_k56) 1 (bruijn ##.depth.197 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dlookup_D192_lambda7, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 7-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup_D192_k56, env)}),
      VEncodeInt(1l),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dlookup_D192_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup_D192_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup_D192_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.eqv?.144 7 2) (bruijn ##.k.556 0 0) (bruijn ##.x.199 3 3) (bruijn ##.e.202 0 1))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      _var0,
      upenv->up->up->vars[3],
      _var1);
 }
}
static void _V10_Dlookup_D192_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup_D192_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup_D192_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list-index.181 5 0) (close _V10_Dlookup_D192_k55) (close _V10_Dlookup_D192_lambda8) (bruijn ##.x.557 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup_D192_k55, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup_D192_lambda8, env)}),
      _var0);
 }
}
static void _V10_Dlookup_D192_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup_D192_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup_D192_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.553 0 0) ((bruijn ##.k.552 1 0) (bruijn ##.x.199 1 3)) ((bruijn ##.car.149 5 7) (close _V10_Dlookup_D192_k54) (bruijn ##.env.198 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup_D192_k54, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dlookup_D192_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup_D192_lambda6, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlookup_D192_lambda6, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.148 4 6) (close _V10_Dlookup_D192_k53) (bruijn ##.env.198 0 2))
    V_CALL(upenv->up->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup_D192_k53, env)}),
      _var2);
 }
}
static void _V10_Dundot_D193_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dundot_D193_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dundot_D193_k61, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.150 8 8) (bruijn ##.k.558 4 0) (bruijn ##.x.560 2 0) (bruijn ##.x.561 0 0))
    V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dundot_D193_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dundot_D193_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dundot_D193_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.undot.193 4 1) (close _V10_Dundot_D193_k61) (bruijn ##.x.562 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dundot_D193_k61, env)}),
      _var0);
 }
}
static void _V10_Dundot_D193_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dundot_D193_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dundot_D193_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.152 6 10) (close _V10_Dundot_D193_k60) (bruijn ##.lst.203 2 1))
    V_CALL(VGetArg(upenv, 6-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dundot_D193_k60, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dundot_D193_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dundot_D193_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dundot_D193_k62, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.563 0 0) ((bruijn ##.k.558 2 0) '()) ((bruijn ##.cons.150 6 8) (bruijn ##.k.558 2 0) (bruijn ##.lst.203 2 1) '()))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VNULL);
}
 }
}
static void _V10_Dundot_D193_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dundot_D193_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dundot_D193_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.559 0 0) ((bruijn ##.car.149 5 7) (close _V10_Dundot_D193_k59) (bruijn ##.lst.203 1 1)) ((bruijn ##.null?.148 5 6) (close _V10_Dundot_D193_k62) (bruijn ##.lst.203 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dundot_D193_k59, env)}),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dundot_D193_k62, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dundot_D193_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dundot_D193_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dundot_D193_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.143 4 1) (close _V10_Dundot_D193_k58) (bruijn ##.lst.203 0 1))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dundot_D193_k58, env)}),
      _var1);
 }
}
static void _V10_Dloop_D211_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D211_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D211_k65, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.12.210 4 1) (bruijn ##.k.594 1 0) (bruijn ##.expr.14.212 2 1) (bruijn ##.x.595 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D211_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D211_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D211_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.14.212 1 1))) ((bruijn ##.reverse.145 13 3) (close _V10_Dloop_D211_k65) (bruijn ##.xs.11.213 1 2)) ((bruijn ##.k.594 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 13-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D211_k65, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D211_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D211_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D211_k68, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.12.210 7 1) (bruijn ##.k.588 2 0) (bruijn ##.expr.14.212 5 1) (bruijn ##.x.590 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D211_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D211_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D211_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.145 16 3) (close _V10_Dloop_D211_k68) (bruijn ##.xs.11.213 4 2))
    V_CALL(VGetArg(upenv, 16-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D211_k68, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D211_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D211_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D211_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.13.214 0 1) (close _V10_Dloop_D211_k67) (##inline ##vcore.cdr (bruijn ##.expr.14.212 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.14.212 3 1)) (bruijn ##.xs.11.213 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D211_k67, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V10_Dloop_D211_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D211_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D211_lambda17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.177 14 35) (bruijn ##.k.587 0 0) (close _V10_Dloop_D211_lambda18))
    V_CALL(VGetArg(upenv, 14-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D211_lambda18, env)}));
 }
}
static void _V10_Dloop_D211_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D211_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D211_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.176 13 34) (bruijn ##.k.585 1 0) (close _V10_Dloop_D211_lambda17) (bruijn ##.loop.211 2 0))
    V_CALL(VGetArg(upenv, 13-1, 34), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D211_lambda17, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D211_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D211_lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D211_lambda16, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D211_k64) (close _V10_Dloop_D211_k66))
    V_CALL_FUNC(_V10_Dloop_D211_k64, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D211_k66, env)}));
 }
}
static void _V10_Dbruijn__lambda_D194_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D211_lambda16)) ((bruijn ##.loop.211 0 0) (bruijn ##.k.584 1 0) (##inline ##vcore.car (bruijn ##.expr.9.208 4 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D211_lambda16, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V10_Dbruijn__lambda_D194_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_lambda14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.177 9 35) (bruijn ##.k.583 0 0) (close _V10_Dbruijn__lambda_D194_lambda15))
    V_CALL(VGetArg(upenv, 9-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_lambda15, env)}));
 }
}
static void _V10_Dbruijn__lambda_D194_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k72, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.7.206 8 1) (bruijn ##.k.597 4 0) (##inline ##vcore.cons (bruijn ##.x.602 2 0) (##inline ##vcore.cons (bruijn ##.x.604 0 0) '())))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Dbruijn__lambda_D194_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.195 9 3) (close _V10_Dbruijn__lambda_D194_k72) (bruijn ##.x.605 0 0) (##inline ##vcore.car (bruijn ##.expr.15.218 2 0)))
    V_CALL(VGetArg(upenv, 9-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_k72, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Dbruijn__lambda_D194_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 11 8) (close _V10_Dbruijn__lambda_D194_k71) (bruijn ##.xs.217 2 2) (bruijn ##.env.204 7 1))
    V_CALL(VGetArg(upenv, 11-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_k71, env)}),
      upenv->up->vars[2],
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Dbruijn__lambda_D194_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.218 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.15.218 0 0))) ((bruijn ##.length.142 10 0) (close _V10_Dbruijn__lambda_D194_k70) (bruijn ##.xs.217 1 2)) ((bruijn ##.k.597 1 0) #f)) ((bruijn ##.k.597 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_k70, env)}),
      upenv->vars[2]);
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
static void _V10_Dbruijn__lambda_D194_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.216 0 1)) ((close _V10_Dbruijn__lambda_D194_k69) (##inline ##vcore.cdr (bruijn ##.expr.9.208 2 0))) ((bruijn ##.k.597 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V10_Dbruijn__lambda_D194_k69, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dbruijn__lambda_D194_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.208 1 0)) ((bruijn ##.call-with-values.176 8 34) (bruijn ##.k.582 0 0) (close _V10_Dbruijn__lambda_D194_lambda14) (close _V10_Dbruijn__lambda_D194_lambda19)) ((bruijn ##.k.582 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 34), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_lambda14, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_lambda19, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dbruijn__lambda_D194_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k80, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.7.206 11 1) (bruijn ##.k.570 6 0) (##inline ##vcore.cons (bruijn ##.x.574 2 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.577 0 0) '()))))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dbruijn__lambda_D194_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.195 12 3) (close _V10_Dbruijn__lambda_D194_k80) (bruijn ##.x.578 0 0) (##inline ##vcore.car (bruijn ##.expr.17.222 4 0)))
    V_CALL(VGetArg(upenv, 12-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_k80, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]));
 }
}
static void _V10_Dbruijn__lambda_D194_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 14 8) (close _V10_Dbruijn__lambda_D194_k79) (bruijn ##.proper-xs.224 2 0) (bruijn ##.env.204 10 1))
    V_CALL(VGetArg(upenv, 14-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_k79, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V10_Dbruijn__lambda_D194_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.153 13 11) (close _V10_Dbruijn__lambda_D194_k78) (bruijn ##.x.579 0 0) 1)
    V_CALL(VGetArg(upenv, 13-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_k78, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V10_Dbruijn__lambda_D194_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.142 12 0) (close _V10_Dbruijn__lambda_D194_k77) (bruijn ##.proper-xs.224 0 0))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_k77, env)}),
      _var0);
 }
}
static void _V10_Dbruijn__lambda_D194_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.222 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.17.222 0 0))) ((bruijn ##.undot.193 8 1) (close _V10_Dbruijn__lambda_D194_k76) (##inline ##vcore.car (bruijn ##.expr.16.220 2 0))) ((bruijn ##.k.570 1 0) #f)) ((bruijn ##.k.570 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_k76, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
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
static void _V10_Dbruijn__lambda_D194_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.220 1 0)) ((close _V10_Dbruijn__lambda_D194_k75) (##inline ##vcore.cdr (bruijn ##.expr.16.220 1 0))) ((bruijn ##.k.570 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dbruijn__lambda_D194_k75, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dbruijn__lambda_D194_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k82, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.7.206 6 1) (bruijn ##.k.565 6 0) (bruijn ##.x.568 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dbruijn__lambda_D194_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.172 10 30) (close _V10_Dbruijn__lambda_D194_k82) (##string ##.string.1231))
    V_CALL(VGetArg(upenv, 10-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_k82, env)}),
      VEncodePointer(&_V10_Dstring_D1231.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dbruijn__lambda_D194_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dbruijn__lambda_D194_k74) (close _V10_Dbruijn__lambda_D194_k81))
    V_CALL_FUNC(_V10_Dbruijn__lambda_D194_k74, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_k81, env)}));
 }
}
static void _V10_Dbruijn__lambda_D194_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dbruijn__lambda_D194_lambda20) (bruijn ##.input.8.207 2 0))
    V_CALL_FUNC(_V10_Dbruijn__lambda_D194_lambda20, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dbruijn__lambda_D194_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dbruijn__lambda_D194_k63) (close _V10_Dbruijn__lambda_D194_k73))
    V_CALL_FUNC(_V10_Dbruijn__lambda_D194_k63, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_k73, env)}));
 }
}
static void _V10_Dbruijn__lambda_D194_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dbruijn__lambda_D194_lambda13) (bruijn ##.input.8.207 0 0))
    V_CALL_FUNC(_V10_Dbruijn__lambda_D194_lambda13, env, runtime,
      _var0);
 }
}
static void _V10_Dbruijn__lambda_D194_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dbruijn__lambda_D194_lambda12) (bruijn ##.lamb.205 1 2))
    V_CALL_FUNC(_V10_Dbruijn__lambda_D194_lambda12, env, runtime,
      upenv->vars[2]);
 }
}
static void _V10_Dbruijn__lambda_D194_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__lambda_D194_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__lambda_D194_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.177 4 35) (bruijn ##.k.564 0 0) (close _V10_Dbruijn__lambda_D194_lambda11))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_lambda11, env)}));
 }
}
static void _V10_Dloop_D233_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D233_k87, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.24.232 4 1) (bruijn ##.k.760 1 0) (bruijn ##.expr.26.234 2 1) (bruijn ##.x.761 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D233_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D233_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.26.234 1 1))) ((bruijn ##.reverse.145 15 3) (close _V10_Dloop_D233_k87) (bruijn ##.xs.23.235 1 2)) ((bruijn ##.k.760 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 15-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k87, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D233_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D233_k90, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.24.232 7 1) (bruijn ##.k.754 2 0) (bruijn ##.expr.26.234 5 1) (bruijn ##.x.756 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D233_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D233_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.145 18 3) (close _V10_Dloop_D233_k90) (bruijn ##.xs.23.235 4 2))
    V_CALL(VGetArg(upenv, 18-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k90, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D233_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D233_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.25.236 0 1) (close _V10_Dloop_D233_k89) (##inline ##vcore.cdr (bruijn ##.expr.26.234 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.26.234 3 1)) (bruijn ##.xs.23.235 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k89, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V10_Dloop_D233_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D233_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.177 16 35) (bruijn ##.k.753 0 0) (close _V10_Dloop_D233_lambda29))
    V_CALL(VGetArg(upenv, 16-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_lambda29, env)}));
 }
}
static void _V10_Dloop_D233_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D233_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.176 15 34) (bruijn ##.k.751 1 0) (close _V10_Dloop_D233_lambda28) (bruijn ##.loop.233 2 0))
    V_CALL(VGetArg(upenv, 15-1, 34), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_lambda28, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D233_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_lambda27, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D233_lambda27, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D233_k86) (close _V10_Dloop_D233_k88))
    V_CALL_FUNC(_V10_Dloop_D233_k86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k88, env)}));
 }
}
static void _V10_Diter_D195_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D233_lambda27)) ((bruijn ##.loop.233 0 0) (bruijn ##.k.750 1 0) (##inline ##vcore.car (bruijn ##.expr.21.230 3 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_lambda27, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V10_Diter_D195_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.177 11 35) (bruijn ##.k.749 0 0) (close _V10_Diter_D195_lambda26))
    V_CALL(VGetArg(upenv, 11-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda26, env)}));
 }
}
static void _V10_Diter_D195_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.18.227 10 1) (bruijn ##.k.763 4 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.x.769 2 0) (##inline ##vcore.cons (bruijn ##.x.771 0 0) '()))))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Diter_D195_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.195 11 3) (close _V10_Diter_D195_k94) (bruijn ##.x.772 0 0) (##inline ##vcore.car (bruijn ##.expr.27.240 2 0)))
    V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k94, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Diter_D195_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 13 8) (close _V10_Diter_D195_k93) (bruijn ##.xs.239 2 2) (bruijn ##.env.225 9 1))
    V_CALL(VGetArg(upenv, 13-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k93, env)}),
      upenv->up->vars[2],
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V10_Diter_D195_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.240 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.27.240 0 0))) ((bruijn ##.length.142 12 0) (close _V10_Diter_D195_k92) (bruijn ##.xs.239 1 2)) ((bruijn ##.k.763 1 0) #f)) ((bruijn ##.k.763 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k92, env)}),
      upenv->vars[2]);
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
static void _V10_Diter_D195_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda30, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.238 0 1)) ((close _V10_Diter_D195_k91) (##inline ##vcore.cdr (bruijn ##.expr.21.230 1 0))) ((bruijn ##.k.763 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V10_Diter_D195_k91, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.230 0 0)) ((bruijn ##.call-with-values.176 10 34) (bruijn ##.k.746 2 0) (close _V10_Diter_D195_lambda25) (close _V10_Diter_D195_lambda30)) ((bruijn ##.k.746 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 10-1, 34), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda25, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda30, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.747 0 0) ((close _V10_Diter_D195_k85) (##inline ##vcore.cdr (bruijn ##.expr.20.229 2 0))) ((bruijn ##.k.746 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter_D195_k85, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.229 1 0)) ((bruijn ##.equal?.178 8 36) (close _V10_Diter_D195_k84) 'lambda (##inline ##vcore.car (bruijn ##.expr.20.229 1 0))) ((bruijn ##.k.746 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k84, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.18.227 13 1) (bruijn ##.k.730 8 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.x.737 2 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.740 0 0) '())))))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
 }
}
static void _V10_Diter_D195_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.195 14 3) (close _V10_Diter_D195_k104) (bruijn ##.x.741 0 0) (##inline ##vcore.car (bruijn ##.expr.30.245 4 0)))
    V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k104, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]));
 }
}
static void _V10_Diter_D195_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 16 8) (close _V10_Diter_D195_k103) (bruijn ##.proper-xs.247 2 0) (bruijn ##.env.225 12 1))
    V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k103, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V10_Diter_D195_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.153 15 11) (close _V10_Diter_D195_k102) (bruijn ##.x.742 0 0) 1)
    V_CALL(VGetArg(upenv, 15-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k102, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V10_Diter_D195_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.142 14 0) (close _V10_Diter_D195_k101) (bruijn ##.proper-xs.247 0 0))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k101, env)}),
      _var0);
 }
}
static void _V10_Diter_D195_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.245 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.30.245 0 0))) ((bruijn ##.undot.193 10 1) (close _V10_Diter_D195_k100) (##inline ##vcore.car (bruijn ##.expr.29.243 1 0))) ((bruijn ##.k.730 3 0) #f)) ((bruijn ##.k.730 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k100, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
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
static void _V10_Diter_D195_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.243 0 0)) ((close _V10_Diter_D195_k99) (##inline ##vcore.cdr (bruijn ##.expr.29.243 0 0))) ((bruijn ##.k.730 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter_D195_k99, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.731 0 0) ((close _V10_Diter_D195_k98) (##inline ##vcore.cdr (bruijn ##.expr.28.242 2 0))) ((bruijn ##.k.730 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter_D195_k98, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.242 1 0)) ((bruijn ##.equal?.178 10 36) (close _V10_Diter_D195_k97) 'lambda (##inline ##vcore.car (bruijn ##.expr.28.242 1 0))) ((bruijn ##.k.730 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k97, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k108, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.18.227 9 1) (bruijn ##.k.723 2 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.726 0 0)))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
 }
}
static void _V10_Diter_D195_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.bruijn-lambda.194 11 2) (bruijn ##.k.727 0 0) (bruijn ##.env.225 10 1) (bruijn ##.e.250 0 1))
    V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      _var0,
      VGetArg(upenv, 10-1, 1),
      _var1);
 }
}
static void _V10_Diter_D195_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.724 0 0) ((bruijn ##.map.180 13 38) (close _V10_Diter_D195_k108) (close _V10_Diter_D195_lambda33) (##inline ##vcore.cdr (bruijn ##.expr.31.248 2 0))) ((bruijn ##.k.723 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k108, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda33, env)}),
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.248 1 0)) ((bruijn ##.equal?.178 12 36) (close _V10_Diter_D195_k107) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.31.248 1 0))) ((bruijn ##.k.723 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k107, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k117, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.18.227 16 1) (bruijn ##.k.706 7 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons '1 (##inline ##vcore.cons (bruijn ##.x.716 0 0) '()))))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VEncodeInt(1l),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Diter_D195_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.195 17 3) (close _V10_Diter_D195_k117) (bruijn ##.x.717 0 0) (##inline ##vcore.car (bruijn ##.expr.35.255 2 0)))
    V_CALL(VGetArg(upenv, 17-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k117, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Diter_D195_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 19 8) (close _V10_Diter_D195_k116) (bruijn ##.x.718 0 0) (bruijn ##.env.225 15 1))
    V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k116, env)}),
      _var0,
      VGetArg(upenv, 15-1, 1));
 }
}
static void _V10_Diter_D195_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.255 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.35.255 0 0))) ((bruijn ##.list.179 18 37) (close _V10_Diter_D195_k115) (##inline ##vcore.car (bruijn ##.expr.34.253 1 0))) ((bruijn ##.k.706 4 0) #f)) ((bruijn ##.k.706 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k115, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
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
static void _V10_Diter_D195_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.253 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.34.253 0 0))) ((close _V10_Diter_D195_k114) (##inline ##vcore.cdr (bruijn ##.expr.33.252 1 0))) ((bruijn ##.k.706 3 0) #f)) ((bruijn ##.k.706 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Diter_D195_k114, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
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
static void _V10_Diter_D195_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.252 0 0)) ((close _V10_Diter_D195_k113) (##inline ##vcore.car (bruijn ##.expr.33.252 0 0))) ((bruijn ##.k.706 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter_D195_k113, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.707 0 0) ((close _V10_Diter_D195_k112) (##inline ##vcore.cdr (bruijn ##.expr.32.251 2 0))) ((bruijn ##.k.706 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter_D195_k112, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.251 1 0)) ((bruijn ##.equal?.178 14 36) (close _V10_Diter_D195_k111) 'continuation (##inline ##vcore.car (bruijn ##.expr.32.251 1 0))) ((bruijn ##.k.706 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k111, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D261_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_k124, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.41.260 5 1) (bruijn ##.k.684 2 0) (bruijn ##.expr.43.262 3 1) (bruijn ##.x.685 1 0) (bruijn ##.x.686 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D261_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.145 24 3) (close _V10_Dloop_D261_k124) (bruijn ##.vals.40.264 2 3))
    V_CALL(VGetArg(upenv, 24-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D261_k124, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D261_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.43.262 1 1))) ((bruijn ##.reverse.145 23 3) (close _V10_Dloop_D261_k123) (bruijn ##.xs.39.263 1 2)) ((bruijn ##.k.684 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 23-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D261_k123, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D261_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_k128, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.268 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.45.268 0 0))) ((bruijn ##.kk.42.265 3 1) (bruijn ##.k.676 1 0) (##inline ##vcore.cdr (bruijn ##.expr.43.262 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.44.266 2 0)) (bruijn ##.xs.39.263 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.45.268 0 0)) (bruijn ##.vals.40.264 6 3))) ((bruijn ##.k.676 1 0) #f)) ((bruijn ##.k.676 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(upenv, 6-1, 3)));
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
static void _V10_Dloop_D261_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.266 1 0)) ((close _V10_Dloop_D261_k128) (##inline ##vcore.cdr (bruijn ##.expr.44.266 1 0))) ((bruijn ##.k.676 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D261_k128, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D261_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_k131, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.41.260 9 1) (bruijn ##.k.671 4 0) (bruijn ##.expr.43.262 7 1) (bruijn ##.x.673 1 0) (bruijn ##.x.674 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D261_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.145 28 3) (close _V10_Dloop_D261_k131) (bruijn ##.vals.40.264 6 3))
    V_CALL(VGetArg(upenv, 28-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D261_k131, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D261_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.145 27 3) (close _V10_Dloop_D261_k130) (bruijn ##.xs.39.263 5 2))
    V_CALL(VGetArg(upenv, 27-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D261_k130, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D261_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D261_k127) (close _V10_Dloop_D261_k129))
    V_CALL_FUNC(_V10_Dloop_D261_k127, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D261_k129, env)}));
 }
}
static void _V10_Dloop_D261_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D261_k126) (##inline ##vcore.car (bruijn ##.expr.43.262 3 1)))
    V_CALL_FUNC(_V10_Dloop_D261_k126, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D261_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_lambda39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.177 24 35) (bruijn ##.k.670 0 0) (close _V10_Dloop_D261_lambda40))
    V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D261_lambda40, env)}));
 }
}
static void _V10_Dloop_D261_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.176 23 34) (bruijn ##.k.668 1 0) (close _V10_Dloop_D261_lambda39) (bruijn ##.loop.261 2 0))
    V_CALL(VGetArg(upenv, 23-1, 34), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D261_lambda39, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D261_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D261_lambda38, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D261_lambda38, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D261_k122) (close _V10_Dloop_D261_k125))
    V_CALL_FUNC(_V10_Dloop_D261_k122, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D261_k125, env)}));
 }
}
static void _V10_Diter_D195_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D261_lambda38)) ((bruijn ##.loop.261 0 0) (bruijn ##.k.667 1 0) (##inline ##vcore.car (bruijn ##.expr.37.258 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D261_lambda38, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Diter_D195_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.177 19 35) (bruijn ##.k.666 0 0) (close _V10_Diter_D195_lambda37))
    V_CALL(VGetArg(upenv, 19-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda37, env)}));
 }
}
static void _V10_Diter_D195_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k136, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.18.227 19 1) (bruijn ##.k.688 5 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.694 3 0) (##inline ##vcore.cons (bruijn ##.xs.271 5 2) (##inline ##vcore.cons (bruijn ##.x.697 2 0) (##inline ##vcore.cons (bruijn ##.x.699 0 0) '()))))))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 2),
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))))));
 }
}
static void _V10_Diter_D195_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.195 20 3) (close _V10_Diter_D195_k136) (bruijn ##.x.700 0 0) (##inline ##vcore.car (bruijn ##.expr.46.273 3 0)))
    V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k136, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
 }
}
static void _V10_Diter_D195_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 22 8) (close _V10_Diter_D195_k135) (bruijn ##.xs.271 3 2) (bruijn ##.env.225 18 1))
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k135, env)}),
      upenv->up->up->vars[2],
      VGetArg(upenv, 18-1, 1));
 }
}
static void _V10_Diter_D195_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k137, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter.195 20 3) (bruijn ##.k.701 1 0) (bruijn ##.x.702 0 0) (bruijn ##.e.275 1 1))
    V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Diter_D195_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cons.150 22 8) (close _V10_Diter_D195_k137) (bruijn ##.xs.271 3 2) (bruijn ##.env.225 18 1))
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k137, env)}),
      upenv->up->up->vars[2],
      VGetArg(upenv, 18-1, 1));
 }
}
static void _V10_Diter_D195_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.180 21 38) (close _V10_Diter_D195_k134) (close _V10_Diter_D195_lambda42) (bruijn ##.vals.272 2 3))
    V_CALL(VGetArg(upenv, 21-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k134, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda42, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Diter_D195_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.273 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.46.273 0 0))) ((bruijn ##.length.142 20 0) (close _V10_Diter_D195_k133) (bruijn ##.xs.271 1 2)) ((bruijn ##.k.688 1 0) #f)) ((bruijn ##.k.688 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k133, env)}),
      upenv->vars[2]);
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
static void _V10_Diter_D195_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda41, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda41, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.270 0 1)) ((close _V10_Diter_D195_k132) (##inline ##vcore.cdr (bruijn ##.expr.37.258 1 0))) ((bruijn ##.k.688 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V10_Diter_D195_k132, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.258 0 0)) ((bruijn ##.call-with-values.176 18 34) (bruijn ##.k.663 2 0) (close _V10_Diter_D195_lambda36) (close _V10_Diter_D195_lambda41)) ((bruijn ##.k.663 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 18-1, 34), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda36, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda41, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.664 0 0) ((close _V10_Diter_D195_k121) (##inline ##vcore.cdr (bruijn ##.expr.36.257 2 0))) ((bruijn ##.k.663 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter_D195_k121, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.257 1 0)) ((bruijn ##.equal?.178 16 36) (close _V10_Diter_D195_k120) 'letrec (##inline ##vcore.car (bruijn ##.expr.36.257 1 0))) ((bruijn ##.k.663 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k120, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k140, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.660 0 0) ((bruijn ##.kk.18.227 14 1) (bruijn ##.k.659 1 0) (bruijn ##.expr.226 15 2)) ((bruijn ##.k.659 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 15-1, 2));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.276 1 0)) ((bruijn ##.equal?.178 18 36) (close _V10_Diter_D195_k140) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.47.276 1 0))) ((bruijn ##.k.659 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k140, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k143, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.656 0 0) ((bruijn ##.kk.18.227 16 1) (bruijn ##.k.655 1 0) (bruijn ##.expr.226 17 2)) ((bruijn ##.k.655 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 17-1, 2));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.277 1 0)) ((bruijn ##.equal?.178 20 36) (close _V10_Diter_D195_k143) 'quote (##inline ##vcore.car (bruijn ##.expr.48.277 1 0))) ((bruijn ##.k.655 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 20-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k143, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k148, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.18.227 20 1) (bruijn ##.k.646 3 0) (##inline ##vcore.cons '##inline (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.50.279 1 0)) (bruijn ##.x.651 0 0))))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->vars[0]),
        _var0)));
 }
}
static void _V10_Diter_D195_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.iter.195 22 3) (bruijn ##.k.652 0 0) (bruijn ##.env.225 21 1) (bruijn ##.x.282 0 1))
    V_CALL(VGetArg(upenv, 22-1, 3), runtime,
      _var0,
      VGetArg(upenv, 21-1, 1),
      _var1);
 }
}
static void _V10_Diter_D195_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.279 0 0)) ((bruijn ##.map.180 24 38) (close _V10_Diter_D195_k148) (close _V10_Diter_D195_lambda46) (##inline ##vcore.cdr (bruijn ##.expr.50.279 0 0))) ((bruijn ##.k.646 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 24-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k148, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda46, env)}),
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.647 0 0) ((close _V10_Diter_D195_k147) (##inline ##vcore.cdr (bruijn ##.expr.49.278 2 0))) ((bruijn ##.k.646 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter_D195_k147, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.278 1 0)) ((bruijn ##.equal?.178 22 36) (close _V10_Diter_D195_k146) '##inline (##inline ##vcore.car (bruijn ##.expr.49.278 1 0))) ((bruijn ##.k.646 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k146, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D287_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D287_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D287_k152, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.54.286 4 1) (bruijn ##.k.636 1 0) (bruijn ##.expr.56.288 2 1) (bruijn ##.x.637 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D287_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D287_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D287_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.56.288 1 1))) ((bruijn ##.reverse.145 29 3) (close _V10_Dloop_D287_k152) (bruijn ##.xs.53.289 1 2)) ((bruijn ##.k.636 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 29-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D287_k152, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D287_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D287_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D287_k155, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.54.286 7 1) (bruijn ##.k.630 2 0) (bruijn ##.expr.56.288 5 1) (bruijn ##.x.632 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D287_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D287_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D287_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.145 32 3) (close _V10_Dloop_D287_k155) (bruijn ##.xs.53.289 4 2))
    V_CALL(VGetArg(upenv, 32-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D287_k155, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D287_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D287_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D287_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.55.290 0 1) (close _V10_Dloop_D287_k154) (##inline ##vcore.cdr (bruijn ##.expr.56.288 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.56.288 3 1)) (bruijn ##.xs.53.289 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D287_k154, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V10_Dloop_D287_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D287_lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D287_lambda51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.177 30 35) (bruijn ##.k.629 0 0) (close _V10_Dloop_D287_lambda52))
    V_CALL(VGetArg(upenv, 30-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D287_lambda52, env)}));
 }
}
static void _V10_Dloop_D287_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D287_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D287_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.176 29 34) (bruijn ##.k.627 1 0) (close _V10_Dloop_D287_lambda51) (bruijn ##.loop.287 2 0))
    V_CALL(VGetArg(upenv, 29-1, 34), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D287_lambda51, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D287_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D287_lambda50, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D287_lambda50, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D287_k151) (close _V10_Dloop_D287_k153))
    V_CALL_FUNC(_V10_Dloop_D287_k151, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D287_k153, env)}));
 }
}
static void _V10_Diter_D195_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D287_lambda50)) ((bruijn ##.loop.287 0 0) (bruijn ##.k.626 1 0) (##inline ##vcore.cdr (bruijn ##.expr.51.283 4 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D287_lambda50, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V10_Diter_D195_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.177 25 35) (bruijn ##.k.625 0 0) (close _V10_Diter_D195_lambda49))
    V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda49, env)}));
 }
}
static void _V10_Diter_D195_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k158, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.18.227 23 1) (bruijn ##.k.639 3 0) (bruijn ##.x.641 0 0))
    V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D195_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 27 8) (close _V10_Diter_D195_k158) (bruijn ##.x.642 1 0) (bruijn ##.x.643 0 0))
    V_CALL(VGetArg(upenv, 27-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k158, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Diter_D195_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.iter.195 24 3) (bruijn ##.k.644 0 0) (bruijn ##.env.225 23 1) (bruijn ##.x.294 0 1))
    V_CALL(VGetArg(upenv, 24-1, 3), runtime,
      _var0,
      VGetArg(upenv, 23-1, 1),
      _var1);
 }
}
static void _V10_Diter_D195_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.180 26 38) (close _V10_Diter_D195_k157) (close _V10_Diter_D195_lambda54) (bruijn ##.xs.293 1 2))
    V_CALL(VGetArg(upenv, 26-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k157, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda54, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Diter_D195_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda53, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda53, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.292 0 1)) ((bruijn ##.iter.195 22 3) (close _V10_Diter_D195_k156) (bruijn ##.env.225 21 1) (##inline ##vcore.car (bruijn ##.expr.51.283 2 0))) ((bruijn ##.k.639 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 22-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k156, env)}),
      VGetArg(upenv, 21-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.283 1 0)) ((bruijn ##.call-with-values.176 24 34) (bruijn ##.k.624 0 0) (close _V10_Diter_D195_lambda48) (close _V10_Diter_D195_lambda53)) ((bruijn ##.k.624 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 24-1, 34), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda48, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda53, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D195_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k161, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.621 1 0) ((bruijn ##.lookup.192 24 0) (bruijn ##.k.622 0 0) 0 (bruijn ##.env.225 23 1) (bruijn ##.x.295 2 0)) ((bruijn ##.k.622 0 0) (bruijn ##.x.295 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 23-1, 1),
      upenv->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      upenv->up->vars[0]);
}
 }
}
static void _V10_Diter_D195_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.18.227 24 1) (bruijn ##.k.608 24 0) (bruijn ##.x.619 0 0))
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 24-1, 0),
      _var0);
 }
}
static void _V10_Diter_D195_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.172 28 30) (close _V10_Diter_D195_k164) (##string ##.string.1232) (bruijn ##.expr.226 24 2))
    V_CALL(VGetArg(upenv, 28-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k164, env)}),
      VEncodePointer(&_V10_Dstring_D1232.sym, VPOINTER_OTHER),
      VGetArg(upenv, 24-1, 2));
 }
}
static void _V10_Diter_D195_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kk.18.227 22 1) (close _V10_Diter_D195_k163) (bruijn ##.x.620 0 0))
    V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k163, env)}),
      _var0);
 }
}
static void _V10_Diter_D195_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_k161) (close _V10_Diter_D195_k162))
    V_CALL_FUNC(_V10_Diter_D195_k161, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k162, env)}));
 }
}
static void _V10_Diter_D195_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.159 25 17) (close _V10_Diter_D195_k160) (bruijn ##.x.295 0 0))
    V_CALL(VGetArg(upenv, 25-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k160, env)}),
      _var0);
 }
}
static void _V10_Diter_D195_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_lambda55) (bruijn ##.input.19.228 18 0))
    V_CALL_FUNC(_V10_Diter_D195_lambda55, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V10_Diter_D195_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_k150) (close _V10_Diter_D195_k159))
    V_CALL_FUNC(_V10_Diter_D195_k150, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k159, env)}));
 }
}
static void _V10_Diter_D195_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_lambda47) (bruijn ##.input.19.228 16 0))
    V_CALL_FUNC(_V10_Diter_D195_lambda47, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V10_Diter_D195_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_k145) (close _V10_Diter_D195_k149))
    V_CALL_FUNC(_V10_Diter_D195_k145, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k149, env)}));
 }
}
static void _V10_Diter_D195_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_lambda45) (bruijn ##.input.19.228 14 0))
    V_CALL_FUNC(_V10_Diter_D195_lambda45, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Diter_D195_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_k142) (close _V10_Diter_D195_k144))
    V_CALL_FUNC(_V10_Diter_D195_k142, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k144, env)}));
 }
}
static void _V10_Diter_D195_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_lambda44) (bruijn ##.input.19.228 12 0))
    V_CALL_FUNC(_V10_Diter_D195_lambda44, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Diter_D195_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_k139) (close _V10_Diter_D195_k141))
    V_CALL_FUNC(_V10_Diter_D195_k139, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k141, env)}));
 }
}
static void _V10_Diter_D195_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_lambda43) (bruijn ##.input.19.228 10 0))
    V_CALL_FUNC(_V10_Diter_D195_lambda43, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Diter_D195_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_k119) (close _V10_Diter_D195_k138))
    V_CALL_FUNC(_V10_Diter_D195_k119, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k138, env)}));
 }
}
static void _V10_Diter_D195_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_lambda35) (bruijn ##.input.19.228 8 0))
    V_CALL_FUNC(_V10_Diter_D195_lambda35, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Diter_D195_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_k110) (close _V10_Diter_D195_k118))
    V_CALL_FUNC(_V10_Diter_D195_k110, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k118, env)}));
 }
}
static void _V10_Diter_D195_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_lambda34) (bruijn ##.input.19.228 6 0))
    V_CALL_FUNC(_V10_Diter_D195_lambda34, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Diter_D195_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_k106) (close _V10_Diter_D195_k109))
    V_CALL_FUNC(_V10_Diter_D195_k106, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k109, env)}));
 }
}
static void _V10_Diter_D195_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_lambda32) (bruijn ##.input.19.228 4 0))
    V_CALL_FUNC(_V10_Diter_D195_lambda32, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Diter_D195_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_k96) (close _V10_Diter_D195_k105))
    V_CALL_FUNC(_V10_Diter_D195_k96, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k105, env)}));
 }
}
static void _V10_Diter_D195_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_lambda31) (bruijn ##.input.19.228 2 0))
    V_CALL_FUNC(_V10_Diter_D195_lambda31, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Diter_D195_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_k83) (close _V10_Diter_D195_k95))
    V_CALL_FUNC(_V10_Diter_D195_k83, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_k95, env)}));
 }
}
static void _V10_Diter_D195_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D195_lambda24) (bruijn ##.input.19.228 0 0))
    V_CALL_FUNC(_V10_Diter_D195_lambda24, env, runtime,
      _var0);
 }
}
static void _V10_Diter_D195_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter_D195_lambda23) (bruijn ##.expr.226 1 2))
    V_CALL_FUNC(_V10_Diter_D195_lambda23, env, runtime,
      upenv->vars[2]);
 }
}
static void _V10_Diter_D195_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D195_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D195_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.177 4 35) (bruijn ##.k.607 0 0) (close _V10_Diter_D195_lambda22))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda22, env)}));
 }
}
static void _V10_Ddoit_D196_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddoit_D196_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddoit_D196_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.iter.195 1 3) (bruijn ##.k.775 0 0) '() (bruijn ##.expr.296 0 1))
    V_CALL(upenv->vars[3], runtime,
      _var0,
      VNULL,
      _var1);
 }
}
static void _V10_Dbruijn__ify_D182_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_k166, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.794 0 0) ((bruijn ##.kk.0.297 4 1) (bruijn ##.k.793 1 0) (bruijn ##.expr.191 6 1)) ((bruijn ##.k.793 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dbruijn__ify_D182_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.2.299 1 0)) ((bruijn ##.equal?.178 7 36) (close _V10_Dbruijn__ify_D182_k166) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.2.299 1 0))) ((bruijn ##.k.793 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__ify_D182_k166, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dbruijn__ify_D182_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_k172, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.297 9 1) (bruijn ##.k.781 4 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.301 2 0)) (##inline ##vcore.cons (bruijn ##.x.789 0 0) '()))))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dbruijn__ify_D182_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.303 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.303 0 0))) ((bruijn ##.doit.196 9 4) (close _V10_Dbruijn__ify_D182_k172) (##inline ##vcore.car (bruijn ##.expr.5.303 0 0))) ((bruijn ##.k.781 3 0) #f)) ((bruijn ##.k.781 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__ify_D182_k172, env)}),
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
static void _V10_Dbruijn__ify_D182_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.301 0 0)) ((close _V10_Dbruijn__ify_D182_k171) (##inline ##vcore.cdr (bruijn ##.expr.4.301 0 0))) ((bruijn ##.k.781 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dbruijn__ify_D182_k171, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dbruijn__ify_D182_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.782 0 0) ((close _V10_Dbruijn__ify_D182_k170) (##inline ##vcore.cdr (bruijn ##.expr.3.300 2 0))) ((bruijn ##.k.781 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dbruijn__ify_D182_k170, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dbruijn__ify_D182_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.300 1 0)) ((bruijn ##.equal?.178 9 36) (close _V10_Dbruijn__ify_D182_k169) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.3.300 1 0))) ((bruijn ##.k.781 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__ify_D182_k169, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dbruijn__ify_D182_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_k174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.297 6 1) (bruijn ##.k.776 6 0) (bruijn ##.x.779 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dbruijn__ify_D182_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.doit.196 6 4) (close _V10_Dbruijn__ify_D182_k174) (bruijn ##.expr.191 7 1))
    V_CALL(VGetArg(upenv, 6-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__ify_D182_k174, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Dbruijn__ify_D182_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_lambda60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dbruijn__ify_D182_k168) (close _V10_Dbruijn__ify_D182_k173))
    V_CALL_FUNC(_V10_Dbruijn__ify_D182_k168, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__ify_D182_k173, env)}));
 }
}
static void _V10_Dbruijn__ify_D182_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dbruijn__ify_D182_lambda60) (bruijn ##.input.1.298 2 0))
    V_CALL_FUNC(_V10_Dbruijn__ify_D182_lambda60, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dbruijn__ify_D182_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_lambda59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dbruijn__ify_D182_k165) (close _V10_Dbruijn__ify_D182_k167))
    V_CALL_FUNC(_V10_Dbruijn__ify_D182_k165, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__ify_D182_k167, env)}));
 }
}
static void _V10_Dbruijn__ify_D182_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_lambda58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dbruijn__ify_D182_lambda59) (bruijn ##.input.1.298 0 0))
    V_CALL_FUNC(_V10_Dbruijn__ify_D182_lambda59, env, runtime,
      _var0);
 }
}
static void _V10_Dbruijn__ify_D182_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dbruijn__ify_D182_lambda58) (bruijn ##.expr.191 2 1))
    V_CALL_FUNC(_V10_Dbruijn__ify_D182_lambda58, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V10_Dbruijn__ify_D182_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dbruijn__ify_D182_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dbruijn__ify_D182_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 5 ((close _V10_Dlookup_D192_lambda6) (close _V10_Dundot_D193_lambda9) (close _V10_Dbruijn__lambda_D194_lambda10) (close _V10_Diter_D195_lambda21) (close _V10_Ddoit_D196_lambda56)) ((bruijn ##.call/cc.177 3 35) (bruijn ##.k.551 1 0) (close _V10_Dbruijn__ify_D182_lambda57)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[5]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 5, 5, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup_D192_lambda6, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dundot_D193_lambda9, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__lambda_D194_lambda10, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D195_lambda21, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddoit_D196_lambda56, env)});
    V_CALL(upenv->up->up->vars[35], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__ify_D182_lambda57, env)}));
    }
 }
}
static void _V10_Dgenlambda_D307_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenlambda_D307_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgenlambda_D307_k177, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.string->symbol.174 7 32) (bruijn ##.k.797 3 0) (bruijn ##.x.799 0 0))
    V_CALL(VGetArg(upenv, 7-1, 32), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dgenlambda_D307_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenlambda_D307_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgenlambda_D307_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.sprintf.173 6 31) (close _V10_Dgenlambda_D307_k177) (##string ##.string.1233) (bruijn ##.fun.322 2 1) (bruijn ##.curlambda.183 5 2))
    V_CALL(VGetArg(upenv, 6-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenlambda_D307_k177, env)}),
      VEncodePointer(&_V10_Dstring_D1233.sym, VPOINTER_OTHER),
      upenv->up->vars[1],
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dgenlambda_D307_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenlambda_D307_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgenlambda_D307_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dgenlambda_D307_k176) (bruijn ##.curlambda.183 4 2) (bruijn ##.x.800 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenlambda_D307_k176, env)}),
      VEncodeInt(4l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V10_Dgenlambda_D307_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenlambda_D307_lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgenlambda_D307_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.+.175 4 33) (close _V10_Dgenlambda_D307_k175) (bruijn ##.curlambda.183 3 2) 1)
    V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenlambda_D307_k175, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Dgencont_D308_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgencont_D308_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgencont_D308_k180, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.string->symbol.174 7 32) (bruijn ##.k.801 3 0) (bruijn ##.x.803 0 0))
    V_CALL(VGetArg(upenv, 7-1, 32), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dgencont_D308_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgencont_D308_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgencont_D308_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.sprintf.173 6 31) (close _V10_Dgencont_D308_k180) (##string ##.string.1234) (bruijn ##.fun.323 2 1) (bruijn ##.curcont.184 5 3))
    V_CALL(VGetArg(upenv, 6-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgencont_D308_k180, env)}),
      VEncodePointer(&_V10_Dstring_D1234.sym, VPOINTER_OTHER),
      upenv->up->vars[1],
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V10_Dgencont_D308_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgencont_D308_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgencont_D308_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dgencont_D308_k179) (bruijn ##.curcont.184 4 3) (bruijn ##.x.804 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgencont_D308_k179, env)}),
      VEncodeInt(4l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V10_Dgencont_D308_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgencont_D308_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgencont_D308_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.+.175 4 33) (close _V10_Dgencont_D308_k178) (bruijn ##.curcont.184 3 3) 1)
    V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgencont_D308_k178, env)}),
      upenv->up->up->vars[3],
      VEncodeInt(1l));
 }
}
static void _V10_Dlift__intrinsic_D312_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__intrinsic_D312_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__intrinsic_D312_k185, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.car.149 9 7) (bruijn ##.k.805 5 0) (bruijn ##.lookup.328 2 0))
    V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0]);
 }
}
static void _V10_Dlift__intrinsic_D312_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__intrinsic_D312_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__intrinsic_D312_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dlift__intrinsic_D312_k185) (bruijn ##.literal-table.311 5 4) (bruijn ##.x.807 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__intrinsic_D312_k185, env)}),
      VEncodeInt(5l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V10_Dlift__intrinsic_D312_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__intrinsic_D312_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__intrinsic_D312_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 7 8) (close _V10_Dlift__intrinsic_D312_k184) (bruijn ##.lookup.328 0 0) (bruijn ##.literal-table.311 4 4))
    V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__intrinsic_D312_k184, env)}),
      _var0,
      upenv->up->up->up->vars[4]);
 }
}
static void _V10_Dlift__intrinsic_D312_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__intrinsic_D312_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__intrinsic_D312_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.lookup.327 0 0) ((bruijn ##.car.149 6 7) (bruijn ##.k.805 2 0) (bruijn ##.lookup.327 0 0)) ((bruijn ##.cons.150 6 8) (close _V10_Dlift__intrinsic_D312_k183) (bruijn ##.key.326 1 0) (bruijn ##.intrin.325 2 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      upenv->up->vars[0],
      _var0);
} else {
    V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__intrinsic_D312_k183, env)}),
      upenv->vars[0],
      upenv->up->vars[2]);
}
 }
}
static void _V10_Dlift__intrinsic_D312_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__intrinsic_D312_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__intrinsic_D312_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assoc.163 5 21) (close _V10_Dlift__intrinsic_D312_k182) (bruijn ##.key.326 0 0) (bruijn ##.literal-table.311 2 4))
    V_CALL(VGetArg(upenv, 5-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__intrinsic_D312_k182, env)}),
      _var0,
      upenv->up->vars[4]);
 }
}
static void _V10_Dlift__intrinsic_D312_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__intrinsic_D312_lambda64, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__intrinsic_D312_lambda64, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (bruijn ##.lifting-literals?.306 2 2) ((bruijn ##.list.179 4 37) (close _V10_Dlift__intrinsic_D312_k181) '##intrinsic (bruijn ##.sym.324 0 1)) ((bruijn ##.list.179 4 37) (bruijn ##.k.805 0 0) '##intrinsic (bruijn ##.sym.324 0 1)))
if(VDecodeBool(
upenv->up->vars[2])) {
    V_CALL(upenv->up->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__intrinsic_D312_k181, env)}),
      _V10intrinsic,
      _var1);
} else {
    V_CALL(upenv->up->up->up->vars[37], runtime,
      _var0,
      _V10intrinsic,
      _var1);
}
 }
}
static void _V10_Dlift__literal_D313_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k196, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.808 11 0) (##inline ##vcore.cons '##string (##inline ##vcore.cons (bruijn ##.x.819 0 0) '())))
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VInlineCons2(runtime,
        _V10string,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Dlift__literal_D313_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k201, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.808 15 0) (##inline ##vcore.cons '##string (##inline ##vcore.cons (bruijn ##.x.822 0 0) '())))
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VInlineCons2(runtime,
        _V10string,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Dlift__literal_D313_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdar.168 18 26) (close _V10_Dlift__literal_D313_k201) (bruijn ##.literal-table.311 15 4))
    V_CALL(VGetArg(upenv, 18-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k201, env)}),
      VGetArg(upenv, 15-1, 4));
 }
}
static void _V10_Dlift__literal_D313_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dlift__literal_D313_k200) (bruijn ##.literal-table.311 14 4) (bruijn ##.x.823 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k200, env)}),
      VEncodeInt(14l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V10_Dlift__literal_D313_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 16 8) (close _V10_Dlift__literal_D313_k199) (bruijn ##.x.824 0 0) (bruijn ##.literal-table.311 13 4))
    V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k199, env)}),
      _var0,
      VGetArg(upenv, 13-1, 4));
 }
}
static void _V10_Dlift__literal_D313_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 15 8) (close _V10_Dlift__literal_D313_k198) (bruijn ##.x.329 11 1) (bruijn ##.x.825 0 0))
    V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k198, env)}),
      VGetArg(upenv, 11-1, 1),
      _var0);
 }
}
static void _V10_Dlift__literal_D313_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.lookup.330 0 0) ((bruijn ##.cdr.152 14 10) (close _V10_Dlift__literal_D313_k196) (bruijn ##.lookup.330 0 0)) ((bruijn ##.gensym.169 14 27) (close _V10_Dlift__literal_D313_k197) (##string ##.string.1235)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k196, env)}),
      _var0);
} else {
    V_CALL(VGetArg(upenv, 14-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k197, env)}),
      VEncodePointer(&_V10_Dstring_D1235.sym, VPOINTER_OTHER));
}
 }
}
static void _V10_Dlift__literal_D313_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.829 2 0) (bruijn ##.literal-table.311 16 4) (bruijn ##.x.830 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->up->vars[0],
      VEncodeInt(16l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V10_Dlift__literal_D313_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 18 8) (close _V10_Dlift__literal_D313_k207) (bruijn ##.x.831 0 0) (bruijn ##.literal-table.311 15 4))
    V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k207, env)}),
      _var0,
      VGetArg(upenv, 15-1, 4));
 }
}
static void _V10_Dlift__literal_D313_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.828 1 0) ((bruijn ##.cons.150 17 8) (close _V10_Dlift__literal_D313_k206) (bruijn ##.x.329 13 1) '()) ((bruijn ##.k.829 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k206, env)}),
      VGetArg(upenv, 13-1, 1),
      VNULL);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dlift__literal_D313_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k208, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.808 13 0) (bruijn ##.x.329 13 1))
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V10_Dlift__literal_D313_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dlift__literal_D313_k205) (close _V10_Dlift__literal_D313_k208))
    V_CALL_FUNC(_V10_Dlift__literal_D313_k205, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k208, env)}));
 }
}
static void _V10_Dlift__literal_D313_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.160 15 18) (close _V10_Dlift__literal_D313_k204) (bruijn ##.x.832 0 0))
    V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k204, env)}),
      _var0);
 }
}
static void _V10_Dlift__literal_D313_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.826 0 0) ((bruijn ##.assv.171 14 29) (close _V10_Dlift__literal_D313_k203) (bruijn ##.x.329 10 1) (bruijn ##.literal-table.311 11 4)) ((bruijn ##.compiler-error.172 14 30) (bruijn ##.k.808 10 0) (##string ##.string.1236) (bruijn ##.x.329 10 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k203, env)}),
      VGetArg(upenv, 10-1, 1),
      VGetArg(upenv, 11-1, 4));
} else {
    V_CALL(VGetArg(upenv, 14-1, 30), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D1236.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 1));
}
 }
}
static void _V10_Dlift__literal_D313_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.817 0 0) ((bruijn ##.assoc.163 13 21) (close _V10_Dlift__literal_D313_k195) (bruijn ##.x.329 9 1) (bruijn ##.literal-table.311 10 4)) ((bruijn ##.symbol?.159 13 17) (close _V10_Dlift__literal_D313_k202) (bruijn ##.x.329 9 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k195, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 10-1, 4));
} else {
    V_CALL(VGetArg(upenv, 13-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k202, env)}),
      VGetArg(upenv, 9-1, 1));
}
 }
}
static void _V10_Dlift__literal_D313_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.816 0 0) ((bruijn ##.k.808 8 0) (bruijn ##.x.329 8 1)) ((bruijn ##.string?.170 12 28) (close _V10_Dlift__literal_D313_k194) (bruijn ##.x.329 8 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(VGetArg(upenv, 12-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k194, env)}),
      VGetArg(upenv, 8-1, 1));
}
 }
}
static void _V10_Dlift__literal_D313_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.815 0 0) ((bruijn ##.k.808 7 0) (bruijn ##.x.329 7 1)) ((bruijn ##.null?.148 11 6) (close _V10_Dlift__literal_D313_k193) (bruijn ##.x.329 7 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 7-1, 1));
} else {
    V_CALL(VGetArg(upenv, 11-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k193, env)}),
      VGetArg(upenv, 7-1, 1));
}
 }
}
static void _V10_Dlift__literal_D313_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.814 0 0) ((bruijn ##.k.808 6 0) (bruijn ##.x.329 6 1)) ((bruijn ##.eq?.167 10 25) (close _V10_Dlift__literal_D313_k192) (bruijn ##.x.329 6 1) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 10-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k192, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeBool(false));
}
 }
}
static void _V10_Dlift__literal_D313_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.813 0 0) ((bruijn ##.k.808 5 0) (bruijn ##.x.329 5 1)) ((bruijn ##.eq?.167 9 25) (close _V10_Dlift__literal_D313_k191) (bruijn ##.x.329 5 1) #t))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(VGetArg(upenv, 9-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k191, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeBool(true));
}
 }
}
static void _V10_Dlift__literal_D313_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.812 0 0) ((bruijn ##.k.808 4 0) (bruijn ##.x.329 4 1)) ((bruijn ##.char?.166 8 24) (close _V10_Dlift__literal_D313_k190) (bruijn ##.x.329 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k190, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Dlift__literal_D313_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.811 0 0) ((bruijn ##.k.808 3 0) (bruijn ##.x.329 3 1)) (##vcore.foreign-pointer? (close _V10_Dlift__literal_D313_k189) (bruijn ##.x.329 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
    V_CALL_FUNC(VForeignPointerP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k189, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dlift__literal_D313_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.810 0 0) ((bruijn ##.k.808 2 0) (bruijn ##.x.329 2 1)) (##vcore.void? (close _V10_Dlift__literal_D313_k188) (bruijn ##.x.329 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[1]);
} else {
    V_CALL_FUNC(VVoidP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k188, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V10_Dlift__literal_D313_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.809 0 0) ((bruijn ##.k.808 1 0) (bruijn ##.x.329 1 1)) ((bruijn ##.number?.165 5 23) (close _V10_Dlift__literal_D313_k187) (bruijn ##.x.329 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k187, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dlift__literal_D313_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlift__literal_D313_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlift__literal_D313_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (bruijn ##.lifting-literals?.306 2 2) ((bruijn ##.integer?.164 4 22) (close _V10_Dlift__literal_D313_k186) (bruijn ##.x.329 0 1)) ((bruijn ##.k.808 0 0) (bruijn ##.x.329 0 1)))
if(VDecodeBool(
upenv->up->vars[2])) {
    V_CALL(upenv->up->up->up->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_k186, env)}),
      _var1);
} else {
    V_CALL(_var0, runtime,
      _var1);
}
 }
}
static void _V10_Diter__lambda_D314_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_k211, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.61.333 5 1) (bruijn ##.k.850 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.63.335 3 0)) (##inline ##vcore.cons (bruijn ##.x.855 0 0) '())))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Diter__lambda_D314_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.337 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.64.337 0 0))) ((bruijn ##.iter-apply.316 6 9) (close _V10_Diter__lambda_D314_k211) (bruijn ##.fun.331 5 1) (##inline ##vcore.car (bruijn ##.expr.64.337 0 0))) ((bruijn ##.k.850 1 0) #f)) ((bruijn ##.k.850 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 6-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D314_k211, env)}),
      VGetArg(upenv, 5-1, 1),
      VInlineCar2(runtime,
        _var0));
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
static void _V10_Diter__lambda_D314_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.335 1 0)) ((close _V10_Diter__lambda_D314_k210) (##inline ##vcore.cdr (bruijn ##.expr.63.335 1 0))) ((bruijn ##.k.850 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Diter__lambda_D314_k210, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__lambda_D314_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_k217, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.61.333 9 1) (bruijn ##.k.838 4 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.65.339 5 0)) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.846 0 0) '()))))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)),
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Diter__lambda_D314_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.342 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.67.342 0 0))) ((bruijn ##.iter-apply.316 10 9) (close _V10_Diter__lambda_D314_k217) (bruijn ##.fun.331 9 1) (##inline ##vcore.car (bruijn ##.expr.67.342 0 0))) ((bruijn ##.k.838 3 0) #f)) ((bruijn ##.k.838 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D314_k217, env)}),
      VGetArg(upenv, 9-1, 1),
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
static void _V10_Diter__lambda_D314_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.840 0 0) ((close _V10_Diter__lambda_D314_k216) (##inline ##vcore.cdr (bruijn ##.expr.66.341 1 0))) ((bruijn ##.k.838 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__lambda_D314_k216, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__lambda_D314_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.341 0 0)) ((bruijn ##.equal?.178 11 36) (close _V10_Diter__lambda_D314_k215) '+ (##inline ##vcore.car (bruijn ##.expr.66.341 0 0))) ((bruijn ##.k.838 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 11-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D314_k215, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__lambda_D314_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.339 1 0)) ((close _V10_Diter__lambda_D314_k214) (##inline ##vcore.cdr (bruijn ##.expr.65.339 1 0))) ((bruijn ##.k.838 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Diter__lambda_D314_k214, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__lambda_D314_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_k218, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.156 10 14) (bruijn ##.k.834 5 0) (##string ##.string.1237))
    V_CALL(VGetArg(upenv, 10-1, 14), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1237.sym, VPOINTER_OTHER));
 }
}
static void _V10_Diter__lambda_D314_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_lambda70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__lambda_D314_k213) (close _V10_Diter__lambda_D314_k218))
    V_CALL_FUNC(_V10_Diter__lambda_D314_k213, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D314_k218, env)}));
 }
}
static void _V10_Diter__lambda_D314_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__lambda_D314_lambda70) (bruijn ##.input.62.334 2 0))
    V_CALL_FUNC(_V10_Diter__lambda_D314_lambda70, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Diter__lambda_D314_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_lambda69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__lambda_D314_k209) (close _V10_Diter__lambda_D314_k212))
    V_CALL_FUNC(_V10_Diter__lambda_D314_k209, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D314_k212, env)}));
 }
}
static void _V10_Diter__lambda_D314_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_lambda68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__lambda_D314_lambda69) (bruijn ##.input.62.334 0 0))
    V_CALL_FUNC(_V10_Diter__lambda_D314_lambda69, env, runtime,
      _var0);
 }
}
static void _V10_Diter__lambda_D314_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter__lambda_D314_lambda68) (bruijn ##.lamb.332 1 2))
    V_CALL_FUNC(_V10_Diter__lambda_D314_lambda68, env, runtime,
      upenv->vars[2]);
 }
}
static void _V10_Diter__lambda_D314_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D314_lambda66, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D314_lambda66, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.177 4 35) (bruijn ##.k.833 0 0) (close _V10_Diter__lambda_D314_lambda67))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D314_lambda67, env)}));
 }
}
static void _V10_Diter__atom_D315_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k220, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.978 0 0) ((bruijn ##.kk.68.347 4 1) (bruijn ##.k.977 1 0) (bruijn ##.expr.345 5 2)) ((bruijn ##.k.977 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 2));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.349 1 0)) ((bruijn ##.equal?.178 8 36) (close _V10_Diter__atom_D315_k220) 'bruijn (##inline ##vcore.car (bruijn ##.expr.70.349 1 0))) ((bruijn ##.k.977 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k220, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k229, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.68.347 12 1) (bruijn ##.k.959 7 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.355 3 0) '())))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V10_Diter__atom_D315_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Diter__atom_D315_k229) (bruijn ##.functions.310 13 3) (bruijn ##.x.967 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k229, env)}),
      VEncodeInt(13l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V10_Diter__atom_D315_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 15 8) (close _V10_Diter__atom_D315_k228) (##inline ##vcore.cons (bruijn ##.lamb.355 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.72.351 3 0)) (##inline ##vcore.cons (bruijn ##.x.973 0 0) '())) '()))) (bruijn ##.functions.310 12 3))
    V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k228, env)}),
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V10_Diter__atom_D315_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-apply.316 11 9) (close _V10_Diter__atom_D315_k227) (bruijn ##.fun.344 10 1) (##inline ##vcore.car (bruijn ##.expr.73.353 1 0)))
    V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k227, env)}),
      VGetArg(upenv, 10-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter__atom_D315_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.353 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.73.353 0 0))) ((bruijn ##.genlambda.307 10 0) (close _V10_Diter__atom_D315_k226) (bruijn ##.fun.344 9 1)) ((bruijn ##.k.959 3 0) #f)) ((bruijn ##.k.959 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k226, env)}),
      VGetArg(upenv, 9-1, 1));
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
static void _V10_Diter__atom_D315_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.351 0 0)) ((close _V10_Diter__atom_D315_k225) (##inline ##vcore.cdr (bruijn ##.expr.72.351 0 0))) ((bruijn ##.k.959 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k225, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.960 0 0) ((close _V10_Diter__atom_D315_k224) (##inline ##vcore.cdr (bruijn ##.expr.71.350 2 0))) ((bruijn ##.k.959 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k224, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.350 1 0)) ((bruijn ##.equal?.178 10 36) (close _V10_Diter__atom_D315_k223) 'lambda (##inline ##vcore.car (bruijn ##.expr.71.350 1 0))) ((bruijn ##.k.959 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k223, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k240, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.68.347 16 1) (bruijn ##.k.937 9 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.362 3 0) '())))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V10_Diter__atom_D315_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Diter__atom_D315_k240) (bruijn ##.functions.310 17 3) (bruijn ##.x.947 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k240, env)}),
      VEncodeInt(17l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V10_Diter__atom_D315_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 19 8) (close _V10_Diter__atom_D315_k239) (##inline ##vcore.cons (bruijn ##.lamb.362 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.75.357 5 0)) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.954 0 0) '()))) '()))) (bruijn ##.functions.310 16 3))
    V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k239, env)}),
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)),
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))),
      VGetArg(upenv, 16-1, 3));
 }
}
static void _V10_Diter__atom_D315_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-apply.316 15 9) (close _V10_Diter__atom_D315_k238) (bruijn ##.fun.344 14 1) (##inline ##vcore.car (bruijn ##.expr.77.360 1 0)))
    V_CALL(VGetArg(upenv, 15-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k238, env)}),
      VGetArg(upenv, 14-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter__atom_D315_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.360 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.360 0 0))) ((bruijn ##.genlambda.307 14 0) (close _V10_Diter__atom_D315_k237) (bruijn ##.fun.344 13 1)) ((bruijn ##.k.937 5 0) #f)) ((bruijn ##.k.937 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k237, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.941 0 0) ((close _V10_Diter__atom_D315_k236) (##inline ##vcore.cdr (bruijn ##.expr.76.359 1 0))) ((bruijn ##.k.937 4 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k236, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.359 0 0)) ((bruijn ##.equal?.178 15 36) (close _V10_Diter__atom_D315_k235) '+ (##inline ##vcore.car (bruijn ##.expr.76.359 0 0))) ((bruijn ##.k.937 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 15-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k235, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.357 0 0)) ((close _V10_Diter__atom_D315_k234) (##inline ##vcore.cdr (bruijn ##.expr.75.357 0 0))) ((bruijn ##.k.937 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k234, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.938 0 0) ((close _V10_Diter__atom_D315_k233) (##inline ##vcore.cdr (bruijn ##.expr.74.356 2 0))) ((bruijn ##.k.937 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k233, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.356 1 0)) ((bruijn ##.equal?.178 12 36) (close _V10_Diter__atom_D315_k232) 'lambda (##inline ##vcore.car (bruijn ##.expr.74.356 1 0))) ((bruijn ##.k.937 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k232, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k247, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.68.347 14 1) (bruijn ##.k.925 5 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.365 3 0) '())))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V10_Diter__atom_D315_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Diter__atom_D315_k247) (bruijn ##.functions.310 15 3) (bruijn ##.x.930 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k247, env)}),
      VEncodeInt(15l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V10_Diter__atom_D315_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 17 8) (close _V10_Diter__atom_D315_k246) (##inline ##vcore.cons (bruijn ##.lamb.365 1 0) (##inline ##vcore.cons '#t (bruijn ##.x.933 0 0))) (bruijn ##.functions.310 14 3))
    V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k246, env)}),
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        _var0)),
      VGetArg(upenv, 14-1, 3));
 }
}
static void _V10_Diter__atom_D315_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.iter-lambda.314 14 7) (bruijn ##.k.934 0 0) (bruijn ##.fun.344 13 1) (bruijn ##.e.366 0 1))
    V_CALL(VGetArg(upenv, 14-1, 7), runtime,
      _var0,
      VGetArg(upenv, 13-1, 1),
      _var1);
 }
}
static void _V10_Diter__atom_D315_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.180 16 38) (close _V10_Diter__atom_D315_k245) (close _V10_Diter__atom_D315_lambda78) (##inline ##vcore.cdr (bruijn ##.expr.78.363 3 0)))
    V_CALL(VGetArg(upenv, 16-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k245, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_lambda78, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
 }
}
static void _V10_Diter__atom_D315_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.926 0 0) ((bruijn ##.genlambda.307 12 0) (close _V10_Diter__atom_D315_k244) (bruijn ##.fun.344 11 1)) ((bruijn ##.k.925 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k244, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.78.363 1 0)) ((bruijn ##.equal?.178 14 36) (close _V10_Diter__atom_D315_k243) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.78.363 1 0))) ((bruijn ##.k.925 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k243, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k256, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.68.347 18 1) (bruijn ##.k.907 7 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.k.372 3 0) '())))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V10_Diter__atom_D315_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Diter__atom_D315_k256) (bruijn ##.functions.310 19 3) (bruijn ##.x.915 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k256, env)}),
      VEncodeInt(19l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V10_Diter__atom_D315_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 21 8) (close _V10_Diter__atom_D315_k255) (##inline ##vcore.cons (bruijn ##.k.372 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.80.368 3 0)) (##inline ##vcore.cons (bruijn ##.x.921 0 0) '())) '()))) (bruijn ##.functions.310 18 3))
    V_CALL(VGetArg(upenv, 21-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k255, env)}),
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
      VGetArg(upenv, 18-1, 3));
 }
}
static void _V10_Diter__atom_D315_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-apply.316 17 9) (close _V10_Diter__atom_D315_k254) (bruijn ##.fun.344 16 1) (##inline ##vcore.car (bruijn ##.expr.81.370 1 0)))
    V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k254, env)}),
      VGetArg(upenv, 16-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter__atom_D315_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.370 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.81.370 0 0))) ((bruijn ##.gencont.308 16 1) (close _V10_Diter__atom_D315_k253) (bruijn ##.fun.344 15 1)) ((bruijn ##.k.907 3 0) #f)) ((bruijn ##.k.907 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k253, env)}),
      VGetArg(upenv, 15-1, 1));
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
static void _V10_Diter__atom_D315_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.80.368 0 0)) ((close _V10_Diter__atom_D315_k252) (##inline ##vcore.cdr (bruijn ##.expr.80.368 0 0))) ((bruijn ##.k.907 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k252, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.908 0 0) ((close _V10_Diter__atom_D315_k251) (##inline ##vcore.cdr (bruijn ##.expr.79.367 2 0))) ((bruijn ##.k.907 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k251, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.367 1 0)) ((bruijn ##.equal?.178 16 36) (close _V10_Diter__atom_D315_k250) 'continuation (##inline ##vcore.car (bruijn ##.expr.79.367 1 0))) ((bruijn ##.k.907 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k250, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.902 1 0) (bruijn ##.foreign-functions.309 25 2) (bruijn ##.x.903 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(25l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V10_Diter__atom_D315_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.901 1 0) ((bruijn ##.cons.150 27 8) (close _V10_Diter__atom_D315_k268) (bruijn ##.expr.345 23 2) (bruijn ##.foreign-functions.309 24 2)) ((bruijn ##.k.902 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 27-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k268, env)}),
      VGetArg(upenv, 23-1, 2),
      VGetArg(upenv, 24-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k269, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.68.347 22 1) (bruijn ##.k.892 9 0) (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons (bruijn ##.mangled.383 3 0) '())))
    V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V10_Diter__atom_D315_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_k267) (close _V10_Diter__atom_D315_k269))
    V_CALL_FUNC(_V10_Diter__atom_D315_k267, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k269, env)}));
 }
}
static void _V10_Diter__atom_D315_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.160 25 18) (close _V10_Diter__atom_D315_k266) (bruijn ##.x.904 0 0))
    V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k266, env)}),
      _var0);
 }
}
static void _V10_Diter__atom_D315_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assoc.163 24 21) (close _V10_Diter__atom_D315_k265) (bruijn ##.mangled.383 0 0) (bruijn ##.foreign-functions.309 21 2))
    V_CALL(VGetArg(upenv, 24-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k265, env)}),
      _var0,
      VGetArg(upenv, 21-1, 2));
 }
}
static void _V10_Diter__atom_D315_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.380 0 0)) ((bruijn ##.mangle-foreign-function.162 23 20) (close _V10_Diter__atom_D315_k264) (##inline ##vcore.car (bruijn ##.expr.86.380 0 0))) ((bruijn ##.k.892 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 23-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k264, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.85.378 0 0)) ((close _V10_Diter__atom_D315_k263) (##inline ##vcore.cdr (bruijn ##.expr.85.378 0 0))) ((bruijn ##.k.892 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k263, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.376 0 0)) ((close _V10_Diter__atom_D315_k262) (##inline ##vcore.cdr (bruijn ##.expr.84.376 0 0))) ((bruijn ##.k.892 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k262, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.83.374 0 0)) ((close _V10_Diter__atom_D315_k261) (##inline ##vcore.cdr (bruijn ##.expr.83.374 0 0))) ((bruijn ##.k.892 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k261, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.893 0 0) ((close _V10_Diter__atom_D315_k260) (##inline ##vcore.cdr (bruijn ##.expr.82.373 2 0))) ((bruijn ##.k.892 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k260, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.373 1 0)) ((bruijn ##.equal?.178 18 36) (close _V10_Diter__atom_D315_k259) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.82.373 1 0))) ((bruijn ##.k.892 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k259, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k274, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.68.347 18 1) (bruijn ##.k.882 3 0) (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.888 0 0) '())))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Diter__atom_D315_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.88.385 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.88.385 0 0))) ((bruijn ##.lift-literal.313 19 6) (close _V10_Diter__atom_D315_k274) (##inline ##vcore.car (bruijn ##.expr.88.385 0 0))) ((bruijn ##.k.882 2 0) #f)) ((bruijn ##.k.882 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k274, env)}),
      VInlineCar2(runtime,
        _var0));
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
static void _V10_Diter__atom_D315_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.883 0 0) ((close _V10_Diter__atom_D315_k273) (##inline ##vcore.cdr (bruijn ##.expr.87.384 2 0))) ((bruijn ##.k.882 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k273, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.384 1 0)) ((bruijn ##.equal?.178 20 36) (close _V10_Diter__atom_D315_k272) 'quote (##inline ##vcore.car (bruijn ##.expr.87.384 1 0))) ((bruijn ##.k.882 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 20-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k272, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k279, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.68.347 20 1) (bruijn ##.k.873 3 0) (##inline ##vcore.cons '##inline (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.90.388 1 0)) (bruijn ##.x.878 0 0))))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->vars[0]),
        _var0)));
 }
}
static void _V10_Diter__atom_D315_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.iter-atom.315 22 8) (bruijn ##.k.879 0 0) (bruijn ##.fun.344 21 1) (bruijn ##.x.391 0 1) #f)
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      _var0,
      VGetArg(upenv, 21-1, 1),
      _var1,
      VEncodeBool(false));
 }
}
static void _V10_Diter__atom_D315_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.388 0 0)) ((bruijn ##.map.180 24 38) (close _V10_Diter__atom_D315_k279) (close _V10_Diter__atom_D315_lambda83) (##inline ##vcore.cdr (bruijn ##.expr.90.388 0 0))) ((bruijn ##.k.873 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 24-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k279, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_lambda83, env)}),
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.874 0 0) ((close _V10_Diter__atom_D315_k278) (##inline ##vcore.cdr (bruijn ##.expr.89.387 2 0))) ((bruijn ##.k.873 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__atom_D315_k278, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.387 1 0)) ((bruijn ##.equal?.178 22 36) (close _V10_Diter__atom_D315_k277) '##inline (##inline ##vcore.car (bruijn ##.expr.89.387 1 0))) ((bruijn ##.k.873 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k277, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D315_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k284, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.871 0 0) ((bruijn ##.k.870 2 0) (bruijn ##.x.392 4 0)) ((bruijn ##.lift-intrinsic.312 24 5) (bruijn ##.k.870 2 0) (bruijn ##.x.392 4 0) (bruijn ##.intrin.393 1 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[0],
      upenv->vars[0]);
}
 }
}
static void _V10_Diter__atom_D315_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.160 26 18) (close _V10_Diter__atom_D315_k284) (bruijn ##.intrin.393 0 0))
    V_CALL(VGetArg(upenv, 26-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k284, env)}),
      _var0);
 }
}
static void _V10_Diter__atom_D315_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.869 1 0) (if (bruijn ##.func-position?.346 21 3) ((bruijn ##.k.870 0 0) (bruijn ##.x.392 2 0)) ((bruijn ##.lookup-intrinsic-name.161 25 19) (close _V10_Diter__atom_D315_k283) (bruijn ##.x.392 2 0))) ((bruijn ##.lift-literal.313 22 6) (bruijn ##.k.870 0 0) (bruijn ##.x.392 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
if(VDecodeBool(
VGetArg(upenv, 21-1, 3))) {
    V_CALL(_var0, runtime,
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 25-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k283, env)}),
      upenv->up->vars[0]);
}
} else {
    V_CALL(VGetArg(upenv, 22-1, 6), runtime,
      _var0,
      upenv->up->vars[0]);
}
 }
}
static void _V10_Diter__atom_D315_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k286, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.156 26 14) (bruijn ##.k.858 21 0) (##string ##.string.1237))
    V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10_Dstring_D1237.sym, VPOINTER_OTHER));
 }
}
static void _V10_Diter__atom_D315_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kk.68.347 20 1) (close _V10_Diter__atom_D315_k286) (bruijn ##.x.868 0 0))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k286, env)}),
      _var0);
 }
}
static void _V10_Diter__atom_D315_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_k282) (close _V10_Diter__atom_D315_k285))
    V_CALL_FUNC(_V10_Diter__atom_D315_k282, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k285, env)}));
 }
}
static void _V10_Diter__atom_D315_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.159 23 17) (close _V10_Diter__atom_D315_k281) (bruijn ##.x.392 0 0))
    V_CALL(VGetArg(upenv, 23-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k281, env)}),
      _var0);
 }
}
static void _V10_Diter__atom_D315_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_lambda84) (bruijn ##.input.69.348 16 0))
    V_CALL_FUNC(_V10_Diter__atom_D315_lambda84, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V10_Diter__atom_D315_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_k276) (close _V10_Diter__atom_D315_k280))
    V_CALL_FUNC(_V10_Diter__atom_D315_k276, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k280, env)}));
 }
}
static void _V10_Diter__atom_D315_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_lambda82) (bruijn ##.input.69.348 14 0))
    V_CALL_FUNC(_V10_Diter__atom_D315_lambda82, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Diter__atom_D315_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_k271) (close _V10_Diter__atom_D315_k275))
    V_CALL_FUNC(_V10_Diter__atom_D315_k271, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k275, env)}));
 }
}
static void _V10_Diter__atom_D315_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_lambda81) (bruijn ##.input.69.348 12 0))
    V_CALL_FUNC(_V10_Diter__atom_D315_lambda81, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Diter__atom_D315_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_k258) (close _V10_Diter__atom_D315_k270))
    V_CALL_FUNC(_V10_Diter__atom_D315_k258, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k270, env)}));
 }
}
static void _V10_Diter__atom_D315_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_lambda80) (bruijn ##.input.69.348 10 0))
    V_CALL_FUNC(_V10_Diter__atom_D315_lambda80, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Diter__atom_D315_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_k249) (close _V10_Diter__atom_D315_k257))
    V_CALL_FUNC(_V10_Diter__atom_D315_k249, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k257, env)}));
 }
}
static void _V10_Diter__atom_D315_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_lambda79) (bruijn ##.input.69.348 8 0))
    V_CALL_FUNC(_V10_Diter__atom_D315_lambda79, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Diter__atom_D315_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_k242) (close _V10_Diter__atom_D315_k248))
    V_CALL_FUNC(_V10_Diter__atom_D315_k242, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k248, env)}));
 }
}
static void _V10_Diter__atom_D315_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_lambda77) (bruijn ##.input.69.348 6 0))
    V_CALL_FUNC(_V10_Diter__atom_D315_lambda77, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Diter__atom_D315_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_k231) (close _V10_Diter__atom_D315_k241))
    V_CALL_FUNC(_V10_Diter__atom_D315_k231, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k241, env)}));
 }
}
static void _V10_Diter__atom_D315_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_lambda76) (bruijn ##.input.69.348 4 0))
    V_CALL_FUNC(_V10_Diter__atom_D315_lambda76, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Diter__atom_D315_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_k222) (close _V10_Diter__atom_D315_k230))
    V_CALL_FUNC(_V10_Diter__atom_D315_k222, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k230, env)}));
 }
}
static void _V10_Diter__atom_D315_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_lambda75) (bruijn ##.input.69.348 2 0))
    V_CALL_FUNC(_V10_Diter__atom_D315_lambda75, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Diter__atom_D315_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_k219) (close _V10_Diter__atom_D315_k221))
    V_CALL_FUNC(_V10_Diter__atom_D315_k219, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_k221, env)}));
 }
}
static void _V10_Diter__atom_D315_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D315_lambda74) (bruijn ##.input.69.348 0 0))
    V_CALL_FUNC(_V10_Diter__atom_D315_lambda74, env, runtime,
      _var0);
 }
}
static void _V10_Diter__atom_D315_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter__atom_D315_lambda73) (bruijn ##.expr.345 1 2))
    V_CALL_FUNC(_V10_Diter__atom_D315_lambda73, env, runtime,
      upenv->vars[2]);
 }
}
static void _V10_Diter__atom_D315_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D315_lambda71, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D315_lambda71, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.call/cc.177 4 35) (bruijn ##.k.857 0 0) (close _V10_Diter__atom_D315_lambda72))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_lambda72, env)}));
 }
}
static void _V10_Diter__apply_D316_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k295, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.91.396 11 1) (bruijn ##.k.1107 8 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.94.399 6 0)) (##inline ##vcore.cons (bruijn ##.x.1116 2 0) (##inline ##vcore.cons (bruijn ##.x.1118 0 0) '())))))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)),
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
 }
}
static void _V10_Diter__apply_D316_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-atom.315 12 8) (close _V10_Diter__apply_D316_k295) (bruijn ##.x.1119 0 0) (##inline ##vcore.car (bruijn ##.expr.96.403 2 0)) #f)
    V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k295, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VEncodeBool(false));
 }
}
static void _V10_Diter__apply_D316_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.158 14 16) (close _V10_Diter__apply_D316_k294) (bruijn ##.y.402 2 0))
    V_CALL(VGetArg(upenv, 14-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k294, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Diter__apply_D316_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.403 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.96.403 0 0))) ((bruijn ##.lift-literal.313 10 6) (close _V10_Diter__apply_D316_k293) (bruijn ##.y.402 1 0)) ((bruijn ##.k.1107 5 0) #f)) ((bruijn ##.k.1107 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k293, env)}),
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_k292) (##inline ##vcore.cdr (bruijn ##.expr.95.401 1 0)))
    V_CALL_FUNC(_V10_Diter__apply_D316_k292, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter__apply_D316_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95.401 0 0)) ((close _V10_Diter__apply_D316_k291) (##inline ##vcore.car (bruijn ##.expr.95.401 0 0))) ((bruijn ##.k.1107 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k291, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.94.399 0 0)) ((close _V10_Diter__apply_D316_k290) (##inline ##vcore.cdr (bruijn ##.expr.94.399 0 0))) ((bruijn ##.k.1107 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k290, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1108 0 0) ((close _V10_Diter__apply_D316_k289) (##inline ##vcore.cdr (bruijn ##.expr.93.398 2 0))) ((bruijn ##.k.1107 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k289, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.93.398 1 0)) ((bruijn ##.equal?.178 8 36) (close _V10_Diter__apply_D316_k288) 'define (##inline ##vcore.car (bruijn ##.expr.93.398 1 0))) ((bruijn ##.k.1107 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k288, env)}),
      _V0define,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k308, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.91.396 16 1) (bruijn ##.k.1085 11 0) (##inline ##vcore.cons 'set! (##inline ##vcore.cons (bruijn ##.x.1096 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons (bruijn ##.name.411 4 0) (##inline ##vcore.cdr (bruijn ##.expr.101.410 5 0)))) (##inline ##vcore.cons (bruijn ##.x.1100 0 0) '())))))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      VInlineCons2(runtime,
        _V0set_B,
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bruijn,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)))),
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
 }
}
static void _V10_Diter__apply_D316_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-atom.315 17 8) (close _V10_Diter__apply_D316_k308) (bruijn ##.x.1101 0 0) (##inline ##vcore.car (bruijn ##.expr.102.413 2 0)) #f)
    V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k308, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VEncodeBool(false));
 }
}
static void _V10_Diter__apply_D316_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.158 19 16) (close _V10_Diter__apply_D316_k307) (bruijn ##.name.411 2 0))
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k307, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Diter__apply_D316_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.413 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.102.413 0 0))) ((bruijn ##.iter-atom.315 15 8) (close _V10_Diter__apply_D316_k306) (bruijn ##.fun.394 14 1) (##inline ##vcore.car (bruijn ##.expr.98.406 6 0)) #f) ((bruijn ##.k.1085 8 0) #f)) ((bruijn ##.k.1085 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k306, env)}),
      VGetArg(upenv, 14-1, 1),
      VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)),
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_k305) (##inline ##vcore.cdr (bruijn ##.expr.99.408 4 0)))
    V_CALL_FUNC(_V10_Diter__apply_D316_k305, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[0]));
 }
}
static void _V10_Diter__apply_D316_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.101.410 0 0)) ((close _V10_Diter__apply_D316_k304) (##inline ##vcore.car (bruijn ##.expr.101.410 0 0))) ((bruijn ##.k.1085 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k304, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1090 0 0) ((close _V10_Diter__apply_D316_k303) (##inline ##vcore.cdr (bruijn ##.expr.100.409 1 0))) ((bruijn ##.k.1085 5 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k303, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.100.409 0 0)) ((bruijn ##.equal?.178 14 36) (close _V10_Diter__apply_D316_k302) 'bruijn (##inline ##vcore.car (bruijn ##.expr.100.409 0 0))) ((bruijn ##.k.1085 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k302, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.99.408 0 0)) ((close _V10_Diter__apply_D316_k301) (##inline ##vcore.car (bruijn ##.expr.99.408 0 0))) ((bruijn ##.k.1085 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k301, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.406 0 0)) ((close _V10_Diter__apply_D316_k300) (##inline ##vcore.cdr (bruijn ##.expr.98.406 0 0))) ((bruijn ##.k.1085 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k300, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1086 0 0) ((close _V10_Diter__apply_D316_k299) (##inline ##vcore.cdr (bruijn ##.expr.97.405 2 0))) ((bruijn ##.k.1085 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k299, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.405 1 0)) ((bruijn ##.equal?.178 10 36) (close _V10_Diter__apply_D316_k298) 'set! (##inline ##vcore.car (bruijn ##.expr.97.405 1 0))) ((bruijn ##.k.1085 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k298, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k319, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.91.396 16 1) (bruijn ##.k.1068 9 0) (##inline ##vcore.cons 'set! (##inline ##vcore.cons (bruijn ##.x.1076 3 0) (##inline ##vcore.cons (bruijn ##.x.1078 2 0) (##inline ##vcore.cons (bruijn ##.x.1080 0 0) '())))))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons2(runtime,
        _V0set_B,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
 }
}
static void _V10_Diter__apply_D316_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-atom.315 17 8) (close _V10_Diter__apply_D316_k319) (bruijn ##.x.1081 0 0) (##inline ##vcore.car (bruijn ##.expr.106.420 3 0)) #f)
    V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k319, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VEncodeBool(false));
 }
}
static void _V10_Diter__apply_D316_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.158 19 16) (close _V10_Diter__apply_D316_k318) (bruijn ##.y.419 3 0))
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k318, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Diter__apply_D316_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.lift-literal.313 15 6) (close _V10_Diter__apply_D316_k317) (bruijn ##.y.419 2 0))
    V_CALL(VGetArg(upenv, 15-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k317, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Diter__apply_D316_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106.420 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.106.420 0 0))) ((bruijn ##.iter-atom.315 14 8) (close _V10_Diter__apply_D316_k316) (bruijn ##.fun.394 13 1) (##inline ##vcore.car (bruijn ##.expr.104.416 3 0)) #f) ((bruijn ##.k.1068 5 0) #f)) ((bruijn ##.k.1068 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k316, env)}),
      VGetArg(upenv, 13-1, 1),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_k315) (##inline ##vcore.cdr (bruijn ##.expr.105.418 1 0)))
    V_CALL_FUNC(_V10_Diter__apply_D316_k315, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter__apply_D316_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.105.418 0 0)) ((close _V10_Diter__apply_D316_k314) (##inline ##vcore.car (bruijn ##.expr.105.418 0 0))) ((bruijn ##.k.1068 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k314, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.104.416 0 0)) ((close _V10_Diter__apply_D316_k313) (##inline ##vcore.cdr (bruijn ##.expr.104.416 0 0))) ((bruijn ##.k.1068 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k313, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1069 0 0) ((close _V10_Diter__apply_D316_k312) (##inline ##vcore.cdr (bruijn ##.expr.103.415 2 0))) ((bruijn ##.k.1068 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k312, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.415 1 0)) ((bruijn ##.equal?.178 12 36) (close _V10_Diter__apply_D316_k311) 'set! (##inline ##vcore.car (bruijn ##.expr.103.415 1 0))) ((bruijn ##.k.1068 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k311, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k328, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.91.396 16 1) (bruijn ##.k.1052 7 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.1060 2 0) (##inline ##vcore.cons (bruijn ##.x.1062 1 0) (##inline ##vcore.cons (bruijn ##.x.1064 0 0) '())))))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
 }
}
static void _V10_Diter__apply_D316_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-apply.316 17 9) (close _V10_Diter__apply_D316_k328) (bruijn ##.fun.394 16 1) (##inline ##vcore.car (bruijn ##.expr.110.427 2 0)))
    V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k328, env)}),
      VGetArg(upenv, 16-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Diter__apply_D316_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-apply.316 16 9) (close _V10_Diter__apply_D316_k327) (bruijn ##.fun.394 15 1) (##inline ##vcore.car (bruijn ##.expr.109.425 2 0)))
    V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k327, env)}),
      VGetArg(upenv, 15-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Diter__apply_D316_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.427 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.110.427 0 0))) ((bruijn ##.iter-atom.315 15 8) (close _V10_Diter__apply_D316_k326) (bruijn ##.fun.394 14 1) (##inline ##vcore.car (bruijn ##.expr.108.423 2 0)) #f) ((bruijn ##.k.1052 4 0) #f)) ((bruijn ##.k.1052 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k326, env)}),
      VGetArg(upenv, 14-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VEncodeBool(false));
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
static void _V10_Diter__apply_D316_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.425 0 0)) ((close _V10_Diter__apply_D316_k325) (##inline ##vcore.cdr (bruijn ##.expr.109.425 0 0))) ((bruijn ##.k.1052 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k325, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.423 0 0)) ((close _V10_Diter__apply_D316_k324) (##inline ##vcore.cdr (bruijn ##.expr.108.423 0 0))) ((bruijn ##.k.1052 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k324, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1053 0 0) ((close _V10_Diter__apply_D316_k323) (##inline ##vcore.cdr (bruijn ##.expr.107.422 2 0))) ((bruijn ##.k.1052 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k323, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.422 1 0)) ((bruijn ##.equal?.178 14 36) (close _V10_Diter__apply_D316_k322) 'if (##inline ##vcore.car (bruijn ##.expr.107.422 1 0))) ((bruijn ##.k.1052 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k322, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k339, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.91.396 20 1) (bruijn ##.k.1030 9 0) (##inline ##vcore.cons (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.436 4 0) '())) (bruijn ##.x.1039 0 0)))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL)),
        _var0));
 }
}
static void _V10_Diter__apply_D316_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.iter-atom.315 22 8) (bruijn ##.k.1040 0 0) (bruijn ##.fun.394 21 1) (bruijn ##.x.437 0 1) #f)
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      _var0,
      VGetArg(upenv, 21-1, 1),
      _var1,
      VEncodeBool(false));
 }
}
static void _V10_Diter__apply_D316_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.180 24 38) (close _V10_Diter__apply_D316_k339) (close _V10_Diter__apply_D316_lambda93) (##inline ##vcore.cdr (bruijn ##.expr.111.429 9 0)))
    V_CALL(VGetArg(upenv, 24-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k339, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_lambda93, env)}),
      VInlineCdr2(runtime,
        VGetArg(upenv, 9-1, 0)));
 }
}
static void _V10_Diter__apply_D316_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Diter__apply_D316_k338) (bruijn ##.functions.310 20 3) (bruijn ##.x.1042 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k338, env)}),
      VEncodeInt(20l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V10_Diter__apply_D316_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 22 8) (close _V10_Diter__apply_D316_k337) (##inline ##vcore.cons (bruijn ##.lamb.436 1 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.113.431 3 0)) (##inline ##vcore.cons (bruijn ##.x.1048 0 0) '())) '()))) (bruijn ##.functions.310 19 3))
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k337, env)}),
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
      VGetArg(upenv, 19-1, 3));
 }
}
static void _V10_Diter__apply_D316_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-apply.316 18 9) (close _V10_Diter__apply_D316_k336) (bruijn ##.fun.394 17 1) (##inline ##vcore.car (bruijn ##.expr.114.433 1 0)))
    V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k336, env)}),
      VGetArg(upenv, 17-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter__apply_D316_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.433 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.114.433 0 0))) ((bruijn ##.genlambda.307 17 0) (close _V10_Diter__apply_D316_k335) (bruijn ##.fun.394 16 1)) ((bruijn ##.k.1030 4 0) #f)) ((bruijn ##.k.1030 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k335, env)}),
      VGetArg(upenv, 16-1, 1));
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
static void _V10_Diter__apply_D316_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.113.431 0 0)) ((close _V10_Diter__apply_D316_k334) (##inline ##vcore.cdr (bruijn ##.expr.113.431 0 0))) ((bruijn ##.k.1030 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k334, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1032 0 0) ((close _V10_Diter__apply_D316_k333) (##inline ##vcore.cdr (bruijn ##.expr.112.430 1 0))) ((bruijn ##.k.1030 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k333, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112.430 0 0)) ((bruijn ##.equal?.178 17 36) (close _V10_Diter__apply_D316_k332) 'lambda (##inline ##vcore.car (bruijn ##.expr.112.430 0 0))) ((bruijn ##.k.1030 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k332, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111.429 1 0)) ((close _V10_Diter__apply_D316_k331) (##inline ##vcore.car (bruijn ##.expr.111.429 1 0))) ((bruijn ##.k.1030 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k331, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k348, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.91.396 20 1) (bruijn ##.k.1012 7 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.116.439 5 0)) (##inline ##vcore.cons (bruijn ##.x.1022 1 0) (##inline ##vcore.cons (bruijn ##.x.1024 0 0) '())))))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)),
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
 }
}
static void _V10_Diter__apply_D316_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-apply.316 21 9) (close _V10_Diter__apply_D316_k348) (bruijn ##.fun.394 20 1) (##inline ##vcore.car (bruijn ##.expr.119.445 1 0)))
    V_CALL(VGetArg(upenv, 21-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k348, env)}),
      VGetArg(upenv, 20-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter__apply_D316_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k349, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter-atom.315 22 8) (bruijn ##.k.1025 1 0) (bruijn ##.x.1026 0 0) (bruijn ##.val.448 1 2) #f)
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[2],
      VEncodeBool(false));
 }
}
static void _V10_Diter__apply_D316_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_lambda95, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda95, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.mangle-symbol.158 24 16) (close _V10_Diter__apply_D316_k349) (bruijn ##.x.447 0 1))
    V_CALL(VGetArg(upenv, 24-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k349, env)}),
      _var1);
 }
}
static void _V10_Diter__apply_D316_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.119.445 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.119.445 0 0))) ((bruijn ##.map.180 23 38) (close _V10_Diter__apply_D316_k347) (close _V10_Diter__apply_D316_lambda95) (##inline ##vcore.car (bruijn ##.expr.117.441 2 0)) (##inline ##vcore.car (bruijn ##.expr.118.443 1 0))) ((bruijn ##.k.1012 5 0) #f)) ((bruijn ##.k.1012 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 23-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k347, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_lambda95, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.443 0 0)) ((close _V10_Diter__apply_D316_k346) (##inline ##vcore.cdr (bruijn ##.expr.118.443 0 0))) ((bruijn ##.k.1012 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k346, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.441 0 0)) ((close _V10_Diter__apply_D316_k345) (##inline ##vcore.cdr (bruijn ##.expr.117.441 0 0))) ((bruijn ##.k.1012 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k345, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.116.439 0 0)) ((close _V10_Diter__apply_D316_k344) (##inline ##vcore.cdr (bruijn ##.expr.116.439 0 0))) ((bruijn ##.k.1012 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k344, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1013 0 0) ((close _V10_Diter__apply_D316_k343) (##inline ##vcore.cdr (bruijn ##.expr.115.438 2 0))) ((bruijn ##.k.1012 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__apply_D316_k343, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.438 1 0)) ((bruijn ##.equal?.178 18 36) (close _V10_Diter__apply_D316_k342) 'letrec (##inline ##vcore.car (bruijn ##.expr.115.438 1 0))) ((bruijn ##.k.1012 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k342, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D453_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D453_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D453_k353, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.123.452 4 1) (bruijn ##.k.1002 1 0) (bruijn ##.expr.125.454 2 1) (bruijn ##.x.1003 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D453_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D453_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D453_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.125.454 1 1))) ((bruijn ##.reverse.145 25 3) (close _V10_Dloop_D453_k353) (bruijn ##.xs.122.455 1 2)) ((bruijn ##.k.1002 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D453_k353, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D453_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D453_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D453_k356, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.123.452 7 1) (bruijn ##.k.996 2 0) (bruijn ##.expr.125.454 5 1) (bruijn ##.x.998 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D453_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D453_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D453_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.145 28 3) (close _V10_Dloop_D453_k356) (bruijn ##.xs.122.455 4 2))
    V_CALL(VGetArg(upenv, 28-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D453_k356, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D453_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D453_lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D453_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.124.456 0 1) (close _V10_Dloop_D453_k355) (##inline ##vcore.cdr (bruijn ##.expr.125.454 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.125.454 3 1)) (bruijn ##.xs.122.455 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D453_k355, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V10_Dloop_D453_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D453_lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D453_lambda100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.177 26 35) (bruijn ##.k.995 0 0) (close _V10_Dloop_D453_lambda101))
    V_CALL(VGetArg(upenv, 26-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D453_lambda101, env)}));
 }
}
static void _V10_Dloop_D453_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D453_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D453_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.176 25 34) (bruijn ##.k.993 1 0) (close _V10_Dloop_D453_lambda100) (bruijn ##.loop.453 2 0))
    V_CALL(VGetArg(upenv, 25-1, 34), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D453_lambda100, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D453_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D453_lambda99, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D453_lambda99, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D453_k352) (close _V10_Dloop_D453_k354))
    V_CALL_FUNC(_V10_Dloop_D453_k352, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D453_k354, env)}));
 }
}
static void _V10_Diter__apply_D316_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D453_lambda99)) ((bruijn ##.loop.453 0 0) (bruijn ##.k.992 1 0) (##inline ##vcore.cdr (bruijn ##.expr.120.449 4 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D453_lambda99, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V10_Diter__apply_D316_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.177 21 35) (bruijn ##.k.991 0 0) (close _V10_Diter__apply_D316_lambda98))
    V_CALL(VGetArg(upenv, 21-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_lambda98, env)}));
 }
}
static void _V10_Diter__apply_D316_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k359, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.91.396 19 1) (bruijn ##.k.1005 3 0) (bruijn ##.x.1007 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Diter__apply_D316_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 23 8) (close _V10_Diter__apply_D316_k359) (bruijn ##.x.1008 1 0) (bruijn ##.x.1009 0 0))
    V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k359, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Diter__apply_D316_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.iter-atom.315 20 8) (bruijn ##.k.1010 0 0) (bruijn ##.fun.394 19 1) (bruijn ##.x.460 0 1) #f)
    V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      _var0,
      VGetArg(upenv, 19-1, 1),
      _var1,
      VEncodeBool(false));
 }
}
static void _V10_Diter__apply_D316_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.180 22 38) (close _V10_Diter__apply_D316_k358) (close _V10_Diter__apply_D316_lambda103) (bruijn ##.xs.459 1 2))
    V_CALL(VGetArg(upenv, 22-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k358, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_lambda103, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Diter__apply_D316_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_lambda102, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda102, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.458 0 1)) ((bruijn ##.iter-atom.315 18 8) (close _V10_Diter__apply_D316_k357) (bruijn ##.fun.394 17 1) (##inline ##vcore.car (bruijn ##.expr.120.449 2 0)) #t) ((bruijn ##.k.1005 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k357, env)}),
      VGetArg(upenv, 17-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VEncodeBool(true));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.449 1 0)) ((bruijn ##.call-with-values.176 20 34) (bruijn ##.k.990 0 0) (close _V10_Diter__apply_D316_lambda97) (close _V10_Diter__apply_D316_lambda102)) ((bruijn ##.k.990 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 20-1, 34), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_lambda97, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_lambda102, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__apply_D316_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k360, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.156 20 14) (bruijn ##.k.981 15 0) (##string ##.string.1237))
    V_CALL(VGetArg(upenv, 20-1, 14), runtime,
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D1237.sym, VPOINTER_OTHER));
 }
}
static void _V10_Diter__apply_D316_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_k351) (close _V10_Diter__apply_D316_k360))
    V_CALL_FUNC(_V10_Diter__apply_D316_k351, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k360, env)}));
 }
}
static void _V10_Diter__apply_D316_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_lambda96) (bruijn ##.input.92.397 12 0))
    V_CALL_FUNC(_V10_Diter__apply_D316_lambda96, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Diter__apply_D316_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_k341) (close _V10_Diter__apply_D316_k350))
    V_CALL_FUNC(_V10_Diter__apply_D316_k341, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k350, env)}));
 }
}
static void _V10_Diter__apply_D316_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_lambda94) (bruijn ##.input.92.397 10 0))
    V_CALL_FUNC(_V10_Diter__apply_D316_lambda94, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Diter__apply_D316_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_k330) (close _V10_Diter__apply_D316_k340))
    V_CALL_FUNC(_V10_Diter__apply_D316_k330, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k340, env)}));
 }
}
static void _V10_Diter__apply_D316_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_lambda92) (bruijn ##.input.92.397 8 0))
    V_CALL_FUNC(_V10_Diter__apply_D316_lambda92, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Diter__apply_D316_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_k321) (close _V10_Diter__apply_D316_k329))
    V_CALL_FUNC(_V10_Diter__apply_D316_k321, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k329, env)}));
 }
}
static void _V10_Diter__apply_D316_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_lambda91) (bruijn ##.input.92.397 6 0))
    V_CALL_FUNC(_V10_Diter__apply_D316_lambda91, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Diter__apply_D316_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_k310) (close _V10_Diter__apply_D316_k320))
    V_CALL_FUNC(_V10_Diter__apply_D316_k310, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k320, env)}));
 }
}
static void _V10_Diter__apply_D316_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_lambda90) (bruijn ##.input.92.397 4 0))
    V_CALL_FUNC(_V10_Diter__apply_D316_lambda90, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Diter__apply_D316_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_k297) (close _V10_Diter__apply_D316_k309))
    V_CALL_FUNC(_V10_Diter__apply_D316_k297, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k309, env)}));
 }
}
static void _V10_Diter__apply_D316_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_lambda89) (bruijn ##.input.92.397 2 0))
    V_CALL_FUNC(_V10_Diter__apply_D316_lambda89, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Diter__apply_D316_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_k287) (close _V10_Diter__apply_D316_k296))
    V_CALL_FUNC(_V10_Diter__apply_D316_k287, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_k296, env)}));
 }
}
static void _V10_Diter__apply_D316_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__apply_D316_lambda88) (bruijn ##.input.92.397 0 0))
    V_CALL_FUNC(_V10_Diter__apply_D316_lambda88, env, runtime,
      _var0);
 }
}
static void _V10_Diter__apply_D316_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter__apply_D316_lambda87) (bruijn ##.expr.395 1 2))
    V_CALL_FUNC(_V10_Diter__apply_D316_lambda87, env, runtime,
      upenv->vars[2]);
 }
}
static void _V10_Diter__apply_D316_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__apply_D316_lambda85, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__apply_D316_lambda85, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.177 4 35) (bruijn ##.k.980 0 0) (close _V10_Diter__apply_D316_lambda86))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_lambda86, env)}));
 }
}
static void _V10_Diter_D317_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k362, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1162 0 0) ((bruijn ##.kk.126.463 4 1) (bruijn ##.k.1161 1 0) (bruijn ##.expr.462 5 2)) ((bruijn ##.k.1161 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 2));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.465 1 0)) ((bruijn ##.equal?.178 8 36) (close _V10_Diter_D317_k362) 'bruijn (##inline ##vcore.car (bruijn ##.expr.128.465 1 0))) ((bruijn ##.k.1161 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k362, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k366, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.126.463 7 1) (bruijn ##.k.1156 2 0) (bruijn ##.x.1158 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D317_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1157 0 0) ((bruijn ##.iter-atom.315 8 8) (close _V10_Diter_D317_k366) (bruijn ##.fun.461 7 1) (bruijn ##.expr.462 7 2) #f) ((bruijn ##.k.1156 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k366, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.129.466 1 0)) ((bruijn ##.equal?.178 10 36) (close _V10_Diter_D317_k365) 'lambda (##inline ##vcore.car (bruijn ##.expr.129.466 1 0))) ((bruijn ##.k.1156 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k365, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k370, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.126.463 9 1) (bruijn ##.k.1151 2 0) (bruijn ##.x.1153 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D317_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1152 0 0) ((bruijn ##.iter-atom.315 10 8) (close _V10_Diter_D317_k370) (bruijn ##.fun.461 9 1) (bruijn ##.expr.462 9 2) #f) ((bruijn ##.k.1151 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k370, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.467 1 0)) ((bruijn ##.equal?.178 12 36) (close _V10_Diter_D317_k369) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.130.467 1 0))) ((bruijn ##.k.1151 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k369, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k374, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.126.463 11 1) (bruijn ##.k.1146 2 0) (bruijn ##.x.1148 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D317_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1147 0 0) ((bruijn ##.iter-atom.315 12 8) (close _V10_Diter_D317_k374) (bruijn ##.fun.461 11 1) (bruijn ##.expr.462 11 2) #f) ((bruijn ##.k.1146 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k374, env)}),
      VGetArg(upenv, 11-1, 1),
      VGetArg(upenv, 11-1, 2),
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.468 1 0)) ((bruijn ##.equal?.178 14 36) (close _V10_Diter_D317_k373) 'continuation (##inline ##vcore.car (bruijn ##.expr.131.468 1 0))) ((bruijn ##.k.1146 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k373, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k378, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.126.463 13 1) (bruijn ##.k.1141 2 0) (bruijn ##.x.1143 0 0))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D317_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1142 0 0) ((bruijn ##.iter-atom.315 14 8) (close _V10_Diter_D317_k378) (bruijn ##.fun.461 13 1) (bruijn ##.expr.462 13 2) #f) ((bruijn ##.k.1141 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k378, env)}),
      VGetArg(upenv, 13-1, 1),
      VGetArg(upenv, 13-1, 2),
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.132.469 1 0)) ((bruijn ##.equal?.178 16 36) (close _V10_Diter_D317_k377) 'quote (##inline ##vcore.car (bruijn ##.expr.132.469 1 0))) ((bruijn ##.k.1141 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k377, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k382, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.126.463 15 1) (bruijn ##.k.1136 2 0) (bruijn ##.x.1138 0 0))
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D317_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1137 0 0) ((bruijn ##.iter-atom.315 16 8) (close _V10_Diter_D317_k382) (bruijn ##.fun.461 15 1) (bruijn ##.expr.462 15 2) #f) ((bruijn ##.k.1136 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k382, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 15-1, 2),
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133.470 1 0)) ((bruijn ##.equal?.178 18 36) (close _V10_Diter_D317_k381) '##inline (##inline ##vcore.car (bruijn ##.expr.133.470 1 0))) ((bruijn ##.k.1136 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k381, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k385, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.126.463 16 1) (bruijn ##.k.1133 1 0) (bruijn ##.x.1134 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Diter_D317_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.134.471 1 0)) ((bruijn ##.iter-apply.316 17 9) (close _V10_Diter_D317_k385) (bruijn ##.fun.461 16 1) (bruijn ##.expr.462 16 2)) ((bruijn ##.k.1133 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k385, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 16-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D317_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k387, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.126.463 16 1) (bruijn ##.k.1123 16 0) (bruijn ##.x.1131 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 16-1, 0),
      _var0);
 }
}
static void _V10_Diter_D317_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-atom.315 17 8) (close _V10_Diter_D317_k387) (bruijn ##.fun.461 16 1) (bruijn ##.expr.462 16 2) #f)
    V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k387, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 16-1, 2),
      VEncodeBool(false));
 }
}
static void _V10_Diter_D317_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_lambda113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_k384) (close _V10_Diter_D317_k386))
    V_CALL_FUNC(_V10_Diter_D317_k384, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k386, env)}));
 }
}
static void _V10_Diter_D317_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_lambda113) (bruijn ##.input.127.464 12 0))
    V_CALL_FUNC(_V10_Diter_D317_lambda113, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Diter_D317_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_lambda112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_k380) (close _V10_Diter_D317_k383))
    V_CALL_FUNC(_V10_Diter_D317_k380, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k383, env)}));
 }
}
static void _V10_Diter_D317_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_lambda112) (bruijn ##.input.127.464 10 0))
    V_CALL_FUNC(_V10_Diter_D317_lambda112, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Diter_D317_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_lambda111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_k376) (close _V10_Diter_D317_k379))
    V_CALL_FUNC(_V10_Diter_D317_k376, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k379, env)}));
 }
}
static void _V10_Diter_D317_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_lambda111) (bruijn ##.input.127.464 8 0))
    V_CALL_FUNC(_V10_Diter_D317_lambda111, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Diter_D317_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_lambda110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_k372) (close _V10_Diter_D317_k375))
    V_CALL_FUNC(_V10_Diter_D317_k372, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k375, env)}));
 }
}
static void _V10_Diter_D317_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_lambda110) (bruijn ##.input.127.464 6 0))
    V_CALL_FUNC(_V10_Diter_D317_lambda110, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Diter_D317_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_lambda109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_k368) (close _V10_Diter_D317_k371))
    V_CALL_FUNC(_V10_Diter_D317_k368, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k371, env)}));
 }
}
static void _V10_Diter_D317_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_lambda109) (bruijn ##.input.127.464 4 0))
    V_CALL_FUNC(_V10_Diter_D317_lambda109, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Diter_D317_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_lambda108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_k364) (close _V10_Diter_D317_k367))
    V_CALL_FUNC(_V10_Diter_D317_k364, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k367, env)}));
 }
}
static void _V10_Diter_D317_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_lambda108) (bruijn ##.input.127.464 2 0))
    V_CALL_FUNC(_V10_Diter_D317_lambda108, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Diter_D317_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_lambda107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_k361) (close _V10_Diter_D317_k363))
    V_CALL_FUNC(_V10_Diter_D317_k361, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_k363, env)}));
 }
}
static void _V10_Diter_D317_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_lambda106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D317_lambda107) (bruijn ##.input.127.464 0 0))
    V_CALL_FUNC(_V10_Diter_D317_lambda107, env, runtime,
      _var0);
 }
}
static void _V10_Diter_D317_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter_D317_lambda106) (bruijn ##.expr.462 1 2))
    V_CALL_FUNC(_V10_Diter_D317_lambda106, env, runtime,
      upenv->vars[2]);
 }
}
static void _V10_Diter_D317_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D317_lambda104, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D317_lambda104, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.177 4 35) (bruijn ##.k.1122 0 0) (close _V10_Diter_D317_lambda105))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_lambda105, env)}));
 }
}
static void _V10_Diter__declare_D318_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k389, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1181 0 0) ((bruijn ##.kk.135.473 4 1) (bruijn ##.k.1180 1 0) (bruijn ##.d.472 5 1)) ((bruijn ##.k.1180 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__declare_D318_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.475 1 0)) ((bruijn ##.equal?.178 8 36) (close _V10_Diter__declare_D318_k389) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.137.475 1 0))) ((bruijn ##.k.1180 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__declare_D318_k389, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__declare_D318_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k398, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.135.473 12 1) (bruijn ##.k.1169 7 0) (bruijn ##.x.1174 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Diter__declare_D318_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.179 16 37) (close _V10_Diter__declare_D318_k398) '##vcore.declare (bruijn ##.f.478 3 0) (bruijn ##.x.1175 0 0))
    V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__declare_D318_k398, env)}),
      _V10vcore_Ddeclare,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Diter__declare_D318_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.157 15 15) (close _V10_Diter__declare_D318_k397) (bruijn ##.x.1176 0 0))
    V_CALL(VGetArg(upenv, 15-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__declare_D318_k397, env)}),
      _var0);
 }
}
static void _V10_Diter__declare_D318_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.479 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.140.479 0 0))) ((bruijn ##.iter.317 11 10) (close _V10_Diter__declare_D318_k396) (bruijn ##.f.478 1 0) (##inline ##vcore.car (bruijn ##.expr.140.479 0 0))) ((bruijn ##.k.1169 4 0) #f)) ((bruijn ##.k.1169 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 11-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__declare_D318_k396, env)}),
      upenv->vars[0],
      VInlineCar2(runtime,
        _var0));
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
static void _V10_Diter__declare_D318_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__declare_D318_k395) (##inline ##vcore.cdr (bruijn ##.expr.139.477 1 0)))
    V_CALL_FUNC(_V10_Diter__declare_D318_k395, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter__declare_D318_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.139.477 0 0)) ((close _V10_Diter__declare_D318_k394) (##inline ##vcore.car (bruijn ##.expr.139.477 0 0))) ((bruijn ##.k.1169 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__declare_D318_k394, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__declare_D318_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1170 0 0) ((close _V10_Diter__declare_D318_k393) (##inline ##vcore.cdr (bruijn ##.expr.138.476 2 0))) ((bruijn ##.k.1169 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__declare_D318_k393, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__declare_D318_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.476 1 0)) ((bruijn ##.equal?.178 10 36) (close _V10_Diter__declare_D318_k392) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.138.476 1 0))) ((bruijn ##.k.1169 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__declare_D318_k392, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__declare_D318_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k399, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.156 10 14) (bruijn ##.k.1165 5 0) (##string ##.string.1237))
    V_CALL(VGetArg(upenv, 10-1, 14), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1237.sym, VPOINTER_OTHER));
 }
}
static void _V10_Diter__declare_D318_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_lambda118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__declare_D318_k391) (close _V10_Diter__declare_D318_k399))
    V_CALL_FUNC(_V10_Diter__declare_D318_k391, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__declare_D318_k399, env)}));
 }
}
static void _V10_Diter__declare_D318_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__declare_D318_lambda118) (bruijn ##.input.136.474 2 0))
    V_CALL_FUNC(_V10_Diter__declare_D318_lambda118, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Diter__declare_D318_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_lambda117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__declare_D318_k388) (close _V10_Diter__declare_D318_k390))
    V_CALL_FUNC(_V10_Diter__declare_D318_k388, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__declare_D318_k390, env)}));
 }
}
static void _V10_Diter__declare_D318_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_lambda116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__declare_D318_lambda117) (bruijn ##.input.136.474 0 0))
    V_CALL_FUNC(_V10_Diter__declare_D318_lambda117, env, runtime,
      _var0);
 }
}
static void _V10_Diter__declare_D318_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter__declare_D318_lambda116) (bruijn ##.d.472 1 1))
    V_CALL_FUNC(_V10_Diter__declare_D318_lambda116, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Diter__declare_D318_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__declare_D318_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__declare_D318_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.177 4 35) (bruijn ##.k.1164 0 0) (close _V10_Diter__declare_D318_lambda115))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__declare_D318_lambda115, env)}));
 }
}
static void _V10_Dmake__list_D319_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__list_D319_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__list_D319_k402, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.150 7 8) (bruijn ##.k.1183 3 0) (bruijn ##.k.482 3 2) (bruijn ##.x.1185 0 0))
    V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2],
      _var0);
 }
}
static void _V10_Dmake__list_D319_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__list_D319_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__list_D319_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-list.319 3 12) (close _V10_Dmake__list_D319_k402) (bruijn ##.x.1186 0 0) (bruijn ##.k.482 2 2))
    V_CALL(upenv->up->up->vars[12], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__list_D319_k402, env)}),
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V10_Dmake__list_D319_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__list_D319_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__list_D319_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1184 0 0) ((bruijn ##.k.1183 1 0) '()) ((bruijn ##.-.153 5 11) (close _V10_Dmake__list_D319_k401) (bruijn ##.n.481 1 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__list_D319_k401, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dmake__list_D319_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__list_D319_lambda119, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__list_D319_lambda119, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.=.154 4 12) (close _V10_Dmake__list_D319_k400) 0 (bruijn ##.n.481 0 1))
    V_CALL(upenv->up->up->up->vars[12], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__list_D319_k400, env)}),
      VEncodeInt(0l),
      _var1);
 }
}
static void _V10_Dlist__set_B_D320_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__set_B_D320_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__set_B_D320_k405, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.list-set!.320 4 13) (bruijn ##.k.1187 3 0) (bruijn ##.x.1189 1 0) (bruijn ##.x.1190 0 0) (bruijn ##.v.485 3 3))
    V_CALL(upenv->up->up->up->vars[13], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0,
      upenv->up->up->vars[3]);
 }
}
static void _V10_Dlist__set_B_D320_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__set_B_D320_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__set_B_D320_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.153 6 11) (close _V10_Dlist__set_B_D320_k405) (bruijn ##.x.484 2 2) 1)
    V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__set_B_D320_k405, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Dlist__set_B_D320_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__set_B_D320_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__set_B_D320_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1188 0 0) ((bruijn ##.set-car!.155 5 13) (bruijn ##.k.1187 1 0) (bruijn ##.l.483 1 1) (bruijn ##.v.485 1 3)) ((bruijn ##.cdr.152 5 10) (close _V10_Dlist__set_B_D320_k404) (bruijn ##.l.483 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 13), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__set_B_D320_k404, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dlist__set_B_D320_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__set_B_D320_lambda120, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__set_B_D320_lambda120, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.=.154 4 12) (close _V10_Dlist__set_B_D320_k403) (bruijn ##.x.484 0 2) 0)
    V_CALL(upenv->up->up->up->vars[12], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__set_B_D320_k403, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V10_Dloop_D489_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D489_k407, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.apply.147 8 5) (bruijn ##.k.1192 2 0) (bruijn ##.values.146 8 4) (bruijn ##.x.1194 0 0))
    V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 4),
      _var0);
 }
}
static void _V10_Dloop_D489_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D489_k414, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.489 9 0) (bruijn ##.k.1192 8 0) (bruijn ##.ret.490 8 1) (bruijn ##.x.1196 0 0))
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 8-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D489_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D489_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.152 13 10) (close _V10_Dloop_D489_k414) (bruijn ##.l.491 7 2))
    V_CALL(VGetArg(upenv, 13-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D489_k414, env)}),
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V10_Dloop_D489_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D489_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list-set!.320 9 13) (close _V10_Dloop_D489_k413) (bruijn ##.ret.490 6 1) (bruijn ##.split.492 3 0) (bruijn ##.x.1197 0 0))
    V_CALL(VGetArg(upenv, 9-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D489_k413, env)}),
      VGetArg(upenv, 6-1, 1),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D489_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D489_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.150 11 8) (close _V10_Dloop_D489_k412) (bruijn ##.x.1198 1 0) (bruijn ##.x.1199 0 0))
    V_CALL(VGetArg(upenv, 11-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D489_k412, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D489_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D489_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list-ref.151 10 9) (close _V10_Dloop_D489_k411) (bruijn ##.ret.490 4 1) (bruijn ##.split.492 1 0))
    V_CALL(VGetArg(upenv, 10-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D489_k411, env)}),
      upenv->up->up->up->vars[1],
      upenv->vars[0]);
 }
}
static void _V10_Dloop_D489_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D489_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.149 9 7) (close _V10_Dloop_D489_k410) (bruijn ##.l.491 3 2))
    V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D489_k410, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dloop_D489_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D489_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.f.486 4 1) (close _V10_Dloop_D489_k409) (bruijn ##.x.1200 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D489_k409, env)}),
      _var0);
 }
}
static void _V10_Dloop_D489_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D489_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1193 0 0) ((bruijn ##.map.180 7 38) (close _V10_Dloop_D489_k407) (bruijn ##.reverse.145 7 3) (bruijn ##.ret.490 1 1)) ((bruijn ##.car.149 7 7) (close _V10_Dloop_D489_k408) (bruijn ##.l.491 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D489_k407, env)}),
      VGetArg(upenv, 7-1, 3),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D489_k408, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dloop_D489_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_lambda122, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D489_lambda122, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.148 6 6) (close _V10_Dloop_D489_k406) (bruijn ##.l.491 0 2))
    V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D489_k406, env)}),
      _var2);
 }
}
static void _V10_Dmulti__partition_D321_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmulti__partition_D321_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmulti__partition_D321_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.489 1 0) (bruijn ##.k.1191 2 0) (bruijn ##.x.1201 0 0) (bruijn ##.l.488 2 3))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[3]);
 }
}
static void _V10_Dmulti__partition_D321_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmulti__partition_D321_lambda121, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmulti__partition_D321_lambda121, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V10_Dloop_D489_lambda122)) ((bruijn ##.make-list.319 2 12) (close _V10_Dmulti__partition_D321_k415) (bruijn ##.n.487 1 2) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D489_lambda122, env)});
    V_CALL(upenv->up->vars[12], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmulti__partition_D321_k415, env)}),
      upenv->vars[2],
      VNULL);
    }
 }
}
static void _V10_Dto__functions_D185_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_k417, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1213 0 0) ((bruijn ##.kk.57.494 4 1) (bruijn ##.k.1212 1 0) 1) ((bruijn ##.k.1212 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(1l));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dto__functions_D185_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.496 1 0)) ((bruijn ##.equal?.178 9 36) (close _V10_Dto__functions_D185_k417) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.59.496 1 0))) ((bruijn ##.k.1212 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_k417, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dto__functions_D185_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_k420, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1209 0 0) ((bruijn ##.kk.57.494 6 1) (bruijn ##.k.1208 1 0) 1) ((bruijn ##.k.1208 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VEncodeInt(1l));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dto__functions_D185_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.497 1 0)) ((bruijn ##.equal?.178 11 36) (close _V10_Dto__functions_D185_k420) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.60.497 1 0))) ((bruijn ##.k.1208 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_k420, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dto__functions_D185_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_k421, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.57.494 5 1) (bruijn ##.k.1204 5 0) 0)
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(0l));
 }
}
static void _V10_Dto__functions_D185_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_lambda128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__functions_D185_k419) (close _V10_Dto__functions_D185_k421))
    V_CALL_FUNC(_V10_Dto__functions_D185_k419, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_k421, env)}));
 }
}
static void _V10_Dto__functions_D185_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__functions_D185_lambda128) (bruijn ##.input.58.495 2 0))
    V_CALL_FUNC(_V10_Dto__functions_D185_lambda128, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dto__functions_D185_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_lambda127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__functions_D185_k416) (close _V10_Dto__functions_D185_k418))
    V_CALL_FUNC(_V10_Dto__functions_D185_k416, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_k418, env)}));
 }
}
static void _V10_Dto__functions_D185_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_lambda126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__functions_D185_lambda127) (bruijn ##.input.58.495 0 0))
    V_CALL_FUNC(_V10_Dto__functions_D185_lambda127, env, runtime,
      _var0);
 }
}
static void _V10_Dto__functions_D185_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dto__functions_D185_lambda126) (bruijn ##.e.493 1 1))
    V_CALL_FUNC(_V10_Dto__functions_D185_lambda126, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Dto__functions_D185_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_lambda124, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.177 5 35) (bruijn ##.k.1203 0 0) (close _V10_Dto__functions_D185_lambda125))
    V_CALL(VGetArg(upenv, 5-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_lambda125, env)}));
 }
}
static void _V10_Dto__functions_D185_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_lambda123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_lambda123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.multi-partition.321 1 14) (bruijn ##.k.1202 0 0) (close _V10_Dto__functions_D185_lambda124) 2 (bruijn ##.exprs.305 2 1))
    V_CALL(upenv->vars[14], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_lambda124, env)}),
      VEncodeInt(2l),
      upenv->up->vars[1]);
 }
}
static void _V10_Dto__functions_D185_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.list.179 7 37) (bruijn ##.k.1215 3 0) (bruijn ##.literal-table.311 4 4) (bruijn ##.foreign-functions.309 4 2) (bruijn ##.functions.310 4 3) (bruijn ##.declares.501 0 1) (bruijn ##.toplevels.500 0 0))
    V_CALL(VGetArg(upenv, 7-1, 37), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->up->vars[4],
      upenv->up->up->up->vars[2],
      upenv->up->up->up->vars[3],
      _var1,
      _var0);
 }
}
static void _V10_Dto__functions_D185_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__functions_D185_lambda130) (bruijn ##.x.1216 1 0) (bruijn ##.x.1217 0 0))
    V_CALL_FUNC(_V10_Dto__functions_D185_lambda130, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dto__functions_D185_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.180 5 38) (close _V10_Dto__functions_D185_k423) (bruijn ##.iter-declare.318 2 11) (bruijn ##.declares.499 1 2))
    V_CALL(VGetArg(upenv, 5-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_k423, env)}),
      upenv->up->vars[11],
      upenv->vars[2]);
 }
}
static void _V10_Dto__functions_D185_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_lambda131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.iter.317 2 10) (bruijn ##.k.1218 0 0) (##string ##.string.1238) (bruijn ##.e.502 0 1))
    V_CALL(upenv->up->vars[10], runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1238.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V10_Dto__functions_D185_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_lambda129, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_lambda129, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.map.180 4 38) (close _V10_Dto__functions_D185_k422) (close _V10_Dto__functions_D185_lambda131) (bruijn ##.globals.498 0 1))
    V_CALL(upenv->up->up->up->vars[38], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_k422, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_lambda131, env)}),
      _var1);
 }
}
static void _V10_Dto__functions_D185_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__functions_D185_lambda61, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__functions_D185_lambda61, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 15 ((close _V10_Dgenlambda_D307_lambda62) (close _V10_Dgencont_D308_lambda63) '() '() '() (close _V10_Dlift__intrinsic_D312_lambda64) (close _V10_Dlift__literal_D313_lambda65) (close _V10_Diter__lambda_D314_lambda66) (close _V10_Diter__atom_D315_lambda71) (close _V10_Diter__apply_D316_lambda85) (close _V10_Diter_D317_lambda104) (close _V10_Diter__declare_D318_lambda114) (close _V10_Dmake__list_D319_lambda119) (close _V10_Dlist__set_B_D320_lambda120) (close _V10_Dmulti__partition_D321_lambda121)) ((bruijn ##.call-with-values.176 3 34) (bruijn ##.k.796 1 0) (close _V10_Dto__functions_D185_lambda123) (close _V10_Dto__functions_D185_lambda129)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[15]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 15, 15, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenlambda_D307_lambda62, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgencont_D308_lambda63, env)});
    env->vars[2] = VNULL;
    env->vars[3] = VNULL;
    env->vars[4] = VNULL;
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__intrinsic_D312_lambda64, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlift__literal_D313_lambda65, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D314_lambda66, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D315_lambda71, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__apply_D316_lambda85, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D317_lambda104, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__declare_D318_lambda114, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__list_D319_lambda119, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__set_B_D320_lambda120, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmulti__partition_D321_lambda121, env)});
    V_CALL(upenv->up->up->vars[34], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_lambda123, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_lambda129, env)}));
    }
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k425, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.504 51 0) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn-ify (bruijn ##.bruijn-ify.182 2 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'to-functions (bruijn ##.to-functions.185 2 4)) '())))
    V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bruijn__ify,
        upenv->up->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0to__functions,
        upenv->up->vars[4]),
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0lower_V20_k425) (bruijn ##.curcont.184 1 3) 0)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k425, env)}),
      VEncodeInt(1l), VEncodeInt(3l),
      VEncodeInt(0l)
    );
 }
}
static void _V0vanity_V0compiler_V0lower_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_lambda2, runtime, upenv, 39, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38) {
  struct { VEnv env; VWORD argv[39]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 39, 39, upenv);
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
  env->vars[24] = _var24;
  env->vars[25] = _var25;
  env->vars[26] = _var26;
  env->vars[27] = _var27;
  env->vars[28] = _var28;
  env->vars[29] = _var29;
  env->vars[30] = _var30;
  env->vars[31] = _var31;
  env->vars[32] = _var32;
  env->vars[33] = _var33;
  env->vars[34] = _var34;
  env->vars[35] = _var35;
  env->vars[36] = _var36;
  env->vars[37] = _var37;
  env->vars[38] = _var38;
  // (letrec 5 ((close _V10_Dlist__index_D181_lambda3) (close _V10_Dbruijn__ify_D182_lambda5) #f #f (close _V10_Dto__functions_D185_lambda61)) (set! (close _V0vanity_V0compiler_V0lower_V20_k424) (bruijn ##.curlambda.183 0 2) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[5]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 5, 5, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__index_D181_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dbruijn__ify_D182_lambda5, env)});
    env->vars[2] = VEncodeBool(false);
    env->vars[3] = VEncodeBool(false);
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__functions_D185_lambda61, env)});
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k424, env)}),
      VEncodeInt(0l), VEncodeInt(2l),
      VEncodeInt(0l)
    );
    }
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0lower_V20_lambda2) (bruijn ##.x.505 38 0) (bruijn ##.x.506 37 0) (bruijn ##.x.507 36 0) (bruijn ##.x.508 35 0) (bruijn ##.x.509 34 0) (bruijn ##.x.510 33 0) (bruijn ##.x.511 32 0) (bruijn ##.x.512 31 0) (bruijn ##.x.513 30 0) (bruijn ##.x.514 29 0) (bruijn ##.x.515 28 0) (bruijn ##.x.516 27 0) (bruijn ##.x.517 26 0) (bruijn ##.x.518 25 0) (bruijn ##.x.519 24 0) (bruijn ##.x.520 23 0) (bruijn ##.x.521 22 0) (bruijn ##.x.522 21 0) (bruijn ##.x.523 20 0) (bruijn ##.x.524 19 0) (bruijn ##.x.525 18 0) (bruijn ##.x.526 17 0) (bruijn ##.x.527 16 0) (bruijn ##.x.528 15 0) (bruijn ##.x.529 14 0) (bruijn ##.x.530 13 0) (bruijn ##.x.531 12 0) (bruijn ##.x.532 11 0) (bruijn ##.x.533 10 0) (bruijn ##.x.534 9 0) (bruijn ##.x.535 8 0) (bruijn ##.x.536 7 0) (bruijn ##.x.537 6 0) (bruijn ##.x.538 5 0) (bruijn ##.x.539 4 0) (bruijn ##.x.540 3 0) (bruijn ##.x.541 2 0) (bruijn ##.x.542 1 0) (bruijn ##.x.543 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0lower_V20_lambda2, env, runtime,
      VGetArg(upenv, 38-1, 0),
      VGetArg(upenv, 37-1, 0),
      VGetArg(upenv, 36-1, 0),
      VGetArg(upenv, 35-1, 0),
      VGetArg(upenv, 34-1, 0),
      VGetArg(upenv, 33-1, 0),
      VGetArg(upenv, 32-1, 0),
      VGetArg(upenv, 31-1, 0),
      VGetArg(upenv, 30-1, 0),
      VGetArg(upenv, 29-1, 0),
      VGetArg(upenv, 28-1, 0),
      VGetArg(upenv, 27-1, 0),
      VGetArg(upenv, 26-1, 0),
      VGetArg(upenv, 25-1, 0),
      VGetArg(upenv, 24-1, 0),
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
static void _V0vanity_V0compiler_V0lower_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 38 0) (close _V0vanity_V0compiler_V0lower_V20_k47) 'map)
    V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k47, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 37 0) (close _V0vanity_V0compiler_V0lower_V20_k46) 'list)
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k46, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 36 0) (close _V0vanity_V0compiler_V0lower_V20_k45) 'equal?)
    V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k45, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 35 0) (close _V0vanity_V0compiler_V0lower_V20_k44) 'call/cc)
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k44, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 34 0) (close _V0vanity_V0compiler_V0lower_V20_k43) 'call-with-values)
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k43, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 33 0) (close _V0vanity_V0compiler_V0lower_V20_k42) '+)
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k42, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 32 0) (close _V0vanity_V0compiler_V0lower_V20_k41) 'string->symbol)
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k41, env)}),
      _V0string___Gsymbol);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 31 0) (close _V0vanity_V0compiler_V0lower_V20_k40) 'sprintf)
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k40, env)}),
      _V0sprintf);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 30 0) (close _V0vanity_V0compiler_V0lower_V20_k39) 'compiler-error)
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k39, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 29 0) (close _V0vanity_V0compiler_V0lower_V20_k38) 'assv)
    V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k38, env)}),
      _V0assv);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 28 0) (close _V0vanity_V0compiler_V0lower_V20_k37) 'string?)
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k37, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 27 0) (close _V0vanity_V0compiler_V0lower_V20_k36) 'gensym)
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k36, env)}),
      _V0gensym);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 26 0) (close _V0vanity_V0compiler_V0lower_V20_k35) 'cdar)
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k35, env)}),
      _V0cdar);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 25 0) (close _V0vanity_V0compiler_V0lower_V20_k34) 'eq?)
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k34, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 24 0) (close _V0vanity_V0compiler_V0lower_V20_k33) 'char?)
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k33, env)}),
      _V0char_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 23 0) (close _V0vanity_V0compiler_V0lower_V20_k32) 'number?)
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k32, env)}),
      _V0number_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 22 0) (close _V0vanity_V0compiler_V0lower_V20_k31) 'integer?)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k31, env)}),
      _V0integer_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 21 0) (close _V0vanity_V0compiler_V0lower_V20_k30) 'assoc)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k30, env)}),
      _V0assoc);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 20 0) (close _V0vanity_V0compiler_V0lower_V20_k29) 'mangle-foreign-function)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k29, env)}),
      _V0mangle__foreign__function);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 19 0) (close _V0vanity_V0compiler_V0lower_V20_k28) 'lookup-intrinsic-name)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k28, env)}),
      _V0lookup__intrinsic__name);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 18 0) (close _V0vanity_V0compiler_V0lower_V20_k27) 'not)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k27, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 17 0) (close _V0vanity_V0compiler_V0lower_V20_k26) 'symbol?)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k26, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 16 0) (close _V0vanity_V0compiler_V0lower_V20_k25) 'mangle-symbol)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k25, env)}),
      _V0mangle__symbol);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 15 0) (close _V0vanity_V0compiler_V0lower_V20_k24) 'cadr)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k24, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 14 0) (close _V0vanity_V0compiler_V0lower_V20_k23) 'error)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k23, env)}),
      _V0error);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 13 0) (close _V0vanity_V0compiler_V0lower_V20_k22) 'set-car!)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k22, env)}),
      _V0set__car_B);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 12 0) (close _V0vanity_V0compiler_V0lower_V20_k21) '=)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k21, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 11 0) (close _V0vanity_V0compiler_V0lower_V20_k20) '-)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k20, env)}),
      _V0__);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 10 0) (close _V0vanity_V0compiler_V0lower_V20_k19) 'cdr)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k19, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 9 0) (close _V0vanity_V0compiler_V0lower_V20_k18) 'list-ref)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k18, env)}),
      _V0list__ref);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 8 0) (close _V0vanity_V0compiler_V0lower_V20_k17) 'cons)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k17, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 7 0) (close _V0vanity_V0compiler_V0lower_V20_k16) 'car)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k16, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 6 0) (close _V0vanity_V0compiler_V0lower_V20_k15) 'null?)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k15, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 5 0) (close _V0vanity_V0compiler_V0lower_V20_k14) 'apply)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k14, env)}),
      _V0apply);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 4 0) (close _V0vanity_V0compiler_V0lower_V20_k13) 'values)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k13, env)}),
      _V0values);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 3 0) (close _V0vanity_V0compiler_V0lower_V20_k12) 'reverse)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k12, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 2 0) (close _V0vanity_V0compiler_V0lower_V20_k11) 'eqv?)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k11, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 1 0) (close _V0vanity_V0compiler_V0lower_V20_k10) 'pair?)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k10, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.141 0 0) (close _V0vanity_V0compiler_V0lower_V20_k9) 'length)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k9, env)}),
      _V0length);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0lower_V20_k8) (##string ##.string.1239) (bruijn ##.x.1224 6 0) (bruijn ##.x.1225 5 0) (bruijn ##.x.1226 4 0) (bruijn ##.x.1227 3 0) (bruijn ##.x.1228 2 0) (bruijn ##.x.1229 1 0) (bruijn ##.x.1230 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k8, env)}),
      VEncodePointer(&_V10_Dstring_D1239.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k7) (##string ##.string.1240))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k7, env)}),
      VEncodePointer(&_V10_Dstring_D1240.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k6) (##string ##.string.1241))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k6, env)}),
      VEncodePointer(&_V10_Dstring_D1241.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k5) (##string ##.string.1242))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k5, env)}),
      VEncodePointer(&_V10_Dstring_D1242.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k4) (##string ##.string.1243))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D1243.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k3) (##string ##.string.1244))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D1244.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k2) (##string ##.string.1245))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D1245.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k1) (##string ##.string.1246))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D1246.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0lower_V20 = (VFunc)_V0vanity_V0compiler_V0lower_V20_lambda1;
