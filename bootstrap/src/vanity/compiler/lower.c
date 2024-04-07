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
static struct { VBlob sym; char bytes[21]; } _V10string_D881 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D880 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D879 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D878 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D877 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D876 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10string_D875 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D874 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
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
static struct { VBlob sym; char bytes[7]; } _V10string_D873 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "global" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static struct { VBlob sym; char bytes[26]; } _V10string_D872 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[38]; } _V10string_D871 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "literal-lifting: unknown literal type" };
static struct { VBlob sym; char bytes[7]; } _V10string_D870 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "string" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[7]; } _V10string_D869 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "~A_k~A" };
static struct { VBlob sym; char bytes[12]; } _V10string_D868 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "~A_lambda~A" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[33]; } _V10string_D867 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "bruijnify-pass: No matching case" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[35]; } _V10string_D866 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "bruijnify-pass: No matching lambda" };
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
static void _V0loop_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.184 5 0) (bruijn ##x.187 1 0) (bruijn ##x.188 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 8 33) (close _V0loop_k52) (bruijn i 4 2) 1)
    V_CALL(VGetArg(upenv, 8-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k52, env)}),
      upenv->up->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0loop_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.186 0 0) ((bruijn ##k.184 3 0) (bruijn i 3 2)) ((bruijn cdr 7 10) (close _V0loop_k51) (bruijn l 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k51, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0loop_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn p 4 1) (close _V0loop_k50) (bruijn ##x.189 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k50, env)}),
      _var0);
 }
}
static void _V0loop_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.185 0 0) ((bruijn ##k.184 1 0) #f) ((bruijn car 5 7) (close _V0loop_k49) (bruijn l 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k49, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 4 6) (close _V0loop_k48) (bruijn l 0 1))
    V_CALL(upenv->up->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k48, env)}),
      _var1);
 }
}
static void _V0list__index_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0list__index_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0list__index_lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_lambda3, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0loop_lambda4)) ((bruijn loop 0 0) (bruijn ##k.183 1 0) (bruijn l 1 2) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda4, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      VEncodeInt(0l));
    }
 }
}
static void _V0lookup_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup_lambda7" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda7, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list 8 37) (bruijn ##k.191 4 0) 'bruijn (bruijn x 4 3) (bruijn depth 4 1) (bruijn idx 0 0))
    V_CALL(VGetArg(upenv, 8-1, 37), runtime,
      upenv->up->up->up->vars[0],
      _V0bruijn,
      upenv->up->up->up->vars[3],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0lookup_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k57, runtime, upenv, 1, argc, _var0) {
  // ((bruijn lookup 6 0) (bruijn ##k.191 5 0) (bruijn ##x.193 1 0) (bruijn ##x.194 0 0) (bruijn x 5 3))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0lookup_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 8 10) (close _V0lookup_k57) (bruijn env 4 2))
    V_CALL(VGetArg(upenv, 8-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k57, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0lookup_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##x.7 0 0) ((close _V0lookup_lambda7) (bruijn ##x.7 0 0)) ((bruijn + 7 33) (close _V0lookup_k56) 1 (bruijn depth 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0lookup_lambda7, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 7-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k56, env)}),
      VEncodeInt(1l),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0lookup_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0lookup_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0lookup_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn eqv? 7 2) (bruijn ##k.195 0 0) (bruijn x 3 3) (bruijn e 0 1))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      _var0,
      upenv->up->up->vars[3],
      _var1);
 }
}
static void _V0lookup_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list-index 5 0) (close _V0lookup_k55) (close _V0lookup_lambda8) (bruijn ##x.196 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k55, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_lambda8, env)}),
      _var0);
 }
}
static void _V0lookup_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.192 0 0) ((bruijn ##k.191 1 0) (bruijn x 1 3)) ((bruijn car 5 7) (close _V0lookup_k54) (bruijn env 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k54, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0lookup_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0lookup_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0lookup_lambda6, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda6, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 4 6) (close _V0lookup_k53) (bruijn env 0 2))
    V_CALL(upenv->up->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k53, env)}),
      _var2);
 }
}
static void _V0undot_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0undot_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k61, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 8) (bruijn ##k.197 4 0) (bruijn ##x.199 2 0) (bruijn ##x.200 0 0))
    V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0undot_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0undot_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn undot 4 1) (close _V0undot_k61) (bruijn ##x.201 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k61, env)}),
      _var0);
 }
}
static void _V0undot_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0undot_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 10) (close _V0undot_k60) (bruijn lst 2 1))
    V_CALL(VGetArg(upenv, 6-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k60, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0undot_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0undot_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k62, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.202 0 0) ((bruijn ##k.197 2 0) '()) ((bruijn cons 6 8) (bruijn ##k.197 2 0) (bruijn lst 2 1) '()))
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
static void _V0undot_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0undot_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.198 0 0) ((bruijn car 5 7) (close _V0undot_k59) (bruijn lst 1 1)) ((bruijn null? 5 6) (close _V0undot_k62) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k59, env)}),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k62, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0undot_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0undot_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0undot_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 4 1) (close _V0undot_k58) (bruijn lst 0 1))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k58, env)}),
      _var1);
 }
}
static void _V0loop_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k65, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 4 1) (bruijn ##k.233 1 0) (bruijn ##expr.15 2 1) (bruijn ##x.234 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.15 1 1))) ((bruijn reverse 13 3) (close _V0loop_k65) (bruijn ##xs.12 1 2)) ((bruijn ##k.233 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 13-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k65, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k68, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 7 1) (bruijn ##k.227 2 0) (bruijn ##expr.15 5 1) (bruijn ##x.229 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 16 3) (close _V0loop_k68) (bruijn ##xs.12 4 2))
    V_CALL(VGetArg(upenv, 16-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k68, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.14 0 1) (close _V0loop_k67) (##inline ##vcore.cdr (bruijn ##expr.15 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.15 3 1)) (bruijn ##xs.12 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k67, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 14 35) (bruijn ##k.226 0 0) (close _V0loop_lambda18))
    V_CALL(VGetArg(upenv, 14-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda18, env)}));
 }
}
static void _V0loop_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 13 34) (bruijn ##k.224 1 0) (close _V0loop_lambda17) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 13-1, 34), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda17, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda16, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k64) (close _V0loop_k66))
    V_CALL_FUNC(_V0loop_k64, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k66, env)}));
 }
}
static void _V0bruijn__lambda_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda16)) ((bruijn loop 0 0) (bruijn ##k.223 1 0) (##inline ##vcore.car (bruijn ##expr.10 4 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda16, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V0bruijn__lambda_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 9 35) (bruijn ##k.222 0 0) (close _V0bruijn__lambda_lambda15))
    V_CALL(VGetArg(upenv, 9-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda15, env)}));
 }
}
static void _V0bruijn__lambda_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k72, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.8 8 1) (bruijn ##k.236 4 0) (##inline ##vcore.cons (bruijn ##x.241 2 0) (##inline ##vcore.cons (bruijn ##x.243 0 0) '())))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V0bruijn__lambda_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter 9 3) (close _V0bruijn__lambda_k72) (bruijn ##x.244 0 0) (##inline ##vcore.car (bruijn ##expr.16 2 0)))
    V_CALL(VGetArg(upenv, 9-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k72, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V0bruijn__lambda_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 8) (close _V0bruijn__lambda_k71) (bruijn xs 2 2) (bruijn env 7 1))
    V_CALL(VGetArg(upenv, 11-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k71, env)}),
      upenv->up->vars[2],
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0bruijn__lambda_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.16 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.16 0 0))) ((bruijn length 10 0) (close _V0bruijn__lambda_k70) (bruijn xs 1 2)) ((bruijn ##k.236 1 0) #f)) ((bruijn ##k.236 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k70, env)}),
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
static void _V0bruijn__lambda_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((close _V0bruijn__lambda_k69) (##inline ##vcore.cdr (bruijn ##expr.10 2 0))) ((bruijn ##k.236 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V0bruijn__lambda_k69, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__lambda_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.10 1 0)) ((bruijn call-with-values 8 34) (bruijn ##k.221 0 0) (close _V0bruijn__lambda_lambda14) (close _V0bruijn__lambda_lambda19)) ((bruijn ##k.221 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 34), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda14, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda19, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__lambda_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k80, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.8 11 1) (bruijn ##k.209 6 0) (##inline ##vcore.cons (bruijn ##x.213 2 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##x.216 0 0) '()))))
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
static void _V0bruijn__lambda_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter 12 3) (close _V0bruijn__lambda_k80) (bruijn ##x.217 0 0) (##inline ##vcore.car (bruijn ##expr.18 4 0)))
    V_CALL(VGetArg(upenv, 12-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k80, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]));
 }
}
static void _V0bruijn__lambda_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 14 8) (close _V0bruijn__lambda_k79) (bruijn proper-xs 2 0) (bruijn env 10 1))
    V_CALL(VGetArg(upenv, 14-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k79, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0bruijn__lambda_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 13 11) (close _V0bruijn__lambda_k78) (bruijn ##x.218 0 0) 1)
    V_CALL(VGetArg(upenv, 13-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k78, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0bruijn__lambda_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 12 0) (close _V0bruijn__lambda_k77) (bruijn proper-xs 0 0))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k77, env)}),
      _var0);
 }
}
static void _V0bruijn__lambda_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.18 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.18 0 0))) ((bruijn undot 8 1) (close _V0bruijn__lambda_k76) (##inline ##vcore.car (bruijn ##expr.17 2 0))) ((bruijn ##k.209 1 0) #f)) ((bruijn ##k.209 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k76, env)}),
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
static void _V0bruijn__lambda_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.17 1 0)) ((close _V0bruijn__lambda_k75) (##inline ##vcore.cdr (bruijn ##expr.17 1 0))) ((bruijn ##k.209 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0bruijn__lambda_k75, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__lambda_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k82, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.8 6 1) (bruijn ##k.204 6 0) (bruijn ##x.207 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0bruijn__lambda_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 10 30) (close _V0bruijn__lambda_k82) (##string ##string.866))
    V_CALL(VGetArg(upenv, 10-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k82, env)}),
      VEncodePointer(&_V10string_D866.sym, VPOINTER_OTHER));
 }
}
static void _V0bruijn__lambda_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda20" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0bruijn__lambda_k74) (close _V0bruijn__lambda_k81))
    V_CALL_FUNC(_V0bruijn__lambda_k74, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k81, env)}));
 }
}
static void _V0bruijn__lambda_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0bruijn__lambda_lambda20) (bruijn ##input.9 2 0))
    V_CALL_FUNC(_V0bruijn__lambda_lambda20, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0bruijn__lambda_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda13" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0bruijn__lambda_k63) (close _V0bruijn__lambda_k73))
    V_CALL_FUNC(_V0bruijn__lambda_k63, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k73, env)}));
 }
}
static void _V0bruijn__lambda_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda12" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0bruijn__lambda_lambda13) (bruijn ##input.9 0 0))
    V_CALL_FUNC(_V0bruijn__lambda_lambda13, env, runtime,
      _var0);
 }
}
static void _V0bruijn__lambda_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__lambda_lambda12) (bruijn lamb 1 2))
    V_CALL_FUNC(_V0bruijn__lambda_lambda12, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0bruijn__lambda_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 4 35) (bruijn ##k.203 0 0) (close _V0bruijn__lambda_lambda11))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda11, env)}));
 }
}
static void _V0loop_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k87, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.25 4 1) (bruijn ##k.399 1 0) (bruijn ##expr.27 2 1) (bruijn ##x.400 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.27 1 1))) ((bruijn reverse 15 3) (close _V0loop_k87) (bruijn ##xs.24 1 2)) ((bruijn ##k.399 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 15-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k87, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k90, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.25 7 1) (bruijn ##k.393 2 0) (bruijn ##expr.27 5 1) (bruijn ##x.395 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 18 3) (close _V0loop_k90) (bruijn ##xs.24 4 2))
    V_CALL(VGetArg(upenv, 18-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k90, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.26 0 1) (close _V0loop_k89) (##inline ##vcore.cdr (bruijn ##expr.27 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.27 3 1)) (bruijn ##xs.24 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k89, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 16 35) (bruijn ##k.392 0 0) (close _V0loop_lambda29))
    V_CALL(VGetArg(upenv, 16-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda29, env)}));
 }
}
static void _V0loop_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 15 34) (bruijn ##k.390 1 0) (close _V0loop_lambda28) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 15-1, 34), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda28, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda27, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda27, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k86) (close _V0loop_k88))
    V_CALL_FUNC(_V0loop_k86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k88, env)}));
 }
}
static void _V0iter_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda27)) ((bruijn loop 0 0) (bruijn ##k.389 1 0) (##inline ##vcore.car (bruijn ##expr.22 3 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda27, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V0iter_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 11 35) (bruijn ##k.388 0 0) (close _V0iter_lambda26))
    V_CALL(VGetArg(upenv, 11-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda26, env)}));
 }
}
static void _V0iter_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 10 1) (bruijn ##k.402 4 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##x.408 2 0) (##inline ##vcore.cons (bruijn ##x.410 0 0) '()))))
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
static void _V0iter_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter 11 3) (close _V0iter_k94) (bruijn ##x.411 0 0) (##inline ##vcore.car (bruijn ##expr.28 2 0)))
    V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k94, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V0iter_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 13 8) (close _V0iter_k93) (bruijn xs 2 2) (bruijn env 9 1))
    V_CALL(VGetArg(upenv, 13-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k93, env)}),
      upenv->up->vars[2],
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V0iter_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.28 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.28 0 0))) ((bruijn length 12 0) (close _V0iter_k92) (bruijn xs 1 2)) ((bruijn ##k.402 1 0) #f)) ((bruijn ##k.402 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k92, env)}),
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
static void _V0iter_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter_lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda30, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((close _V0iter_k91) (##inline ##vcore.cdr (bruijn ##expr.22 1 0))) ((bruijn ##k.402 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V0iter_k91, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.22 0 0)) ((bruijn call-with-values 10 34) (bruijn ##k.385 2 0) (close _V0iter_lambda25) (close _V0iter_lambda30)) ((bruijn ##k.385 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 10-1, 34), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda25, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda30, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.386 0 0) ((close _V0iter_k85) (##inline ##vcore.cdr (bruijn ##expr.21 2 0))) ((bruijn ##k.385 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter_k85, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.21 1 0)) ((bruijn equal? 8 36) (close _V0iter_k84) 'lambda (##inline ##vcore.car (bruijn ##expr.21 1 0))) ((bruijn ##k.385 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k84, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 13 1) (bruijn ##k.369 8 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##x.376 2 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##x.379 0 0) '())))))
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
static void _V0iter_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter 14 3) (close _V0iter_k104) (bruijn ##x.380 0 0) (##inline ##vcore.car (bruijn ##expr.31 4 0)))
    V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k104, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]));
 }
}
static void _V0iter_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 16 8) (close _V0iter_k103) (bruijn proper-xs 2 0) (bruijn env 12 1))
    V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k103, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V0iter_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 15 11) (close _V0iter_k102) (bruijn ##x.381 0 0) 1)
    V_CALL(VGetArg(upenv, 15-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k102, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0iter_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 14 0) (close _V0iter_k101) (bruijn proper-xs 0 0))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k101, env)}),
      _var0);
 }
}
static void _V0iter_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.31 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.31 0 0))) ((bruijn undot 10 1) (close _V0iter_k100) (##inline ##vcore.car (bruijn ##expr.30 1 0))) ((bruijn ##k.369 3 0) #f)) ((bruijn ##k.369 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k100, env)}),
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
static void _V0iter_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.30 0 0)) ((close _V0iter_k99) (##inline ##vcore.cdr (bruijn ##expr.30 0 0))) ((bruijn ##k.369 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter_k99, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.370 0 0) ((close _V0iter_k98) (##inline ##vcore.cdr (bruijn ##expr.29 2 0))) ((bruijn ##k.369 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter_k98, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.29 1 0)) ((bruijn equal? 10 36) (close _V0iter_k97) 'lambda (##inline ##vcore.car (bruijn ##expr.29 1 0))) ((bruijn ##k.369 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k97, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k108, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 9 1) (bruijn ##k.362 2 0) (##inline ##vcore.cons 'case-lambda (bruijn ##x.365 0 0)))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
 }
}
static void _V0iter_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn bruijn-lambda 11 2) (bruijn ##k.366 0 0) (bruijn env 10 1) (bruijn e 0 1))
    V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      _var0,
      VGetArg(upenv, 10-1, 1),
      _var1);
 }
}
static void _V0iter_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.363 0 0) ((bruijn map 13 38) (close _V0iter_k108) (close _V0iter_lambda33) (##inline ##vcore.cdr (bruijn ##expr.32 2 0))) ((bruijn ##k.362 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k108, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda33, env)}),
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.32 1 0)) ((bruijn equal? 12 36) (close _V0iter_k107) 'case-lambda (##inline ##vcore.car (bruijn ##expr.32 1 0))) ((bruijn ##k.362 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k107, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k117, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 16 1) (bruijn ##k.345 7 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons '1 (##inline ##vcore.cons (bruijn ##x.355 0 0) '()))))
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
static void _V0iter_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter 17 3) (close _V0iter_k117) (bruijn ##x.356 0 0) (##inline ##vcore.car (bruijn ##expr.36 2 0)))
    V_CALL(VGetArg(upenv, 17-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k117, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V0iter_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 19 8) (close _V0iter_k116) (bruijn ##x.357 0 0) (bruijn env 15 1))
    V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k116, env)}),
      _var0,
      VGetArg(upenv, 15-1, 1));
 }
}
static void _V0iter_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.36 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.36 0 0))) ((bruijn list 18 37) (close _V0iter_k115) (##inline ##vcore.car (bruijn ##expr.35 1 0))) ((bruijn ##k.345 4 0) #f)) ((bruijn ##k.345 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k115, env)}),
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
static void _V0iter_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.35 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.35 0 0))) ((close _V0iter_k114) (##inline ##vcore.cdr (bruijn ##expr.34 1 0))) ((bruijn ##k.345 3 0) #f)) ((bruijn ##k.345 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V0iter_k114, env, runtime,
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
static void _V0iter_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.34 0 0)) ((close _V0iter_k113) (##inline ##vcore.car (bruijn ##expr.34 0 0))) ((bruijn ##k.345 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter_k113, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.346 0 0) ((close _V0iter_k112) (##inline ##vcore.cdr (bruijn ##expr.33 2 0))) ((bruijn ##k.345 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter_k112, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.33 1 0)) ((bruijn equal? 14 36) (close _V0iter_k111) 'continuation (##inline ##vcore.car (bruijn ##expr.33 1 0))) ((bruijn ##k.345 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k111, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k124, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.42 5 1) (bruijn ##k.323 2 0) (bruijn ##expr.44 3 1) (bruijn ##x.324 1 0) (bruijn ##x.325 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 24 3) (close _V0loop_k124) (bruijn ##vals.41 2 3))
    V_CALL(VGetArg(upenv, 24-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k124, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.44 1 1))) ((bruijn reverse 23 3) (close _V0loop_k123) (bruijn ##xs.40 1 2)) ((bruijn ##k.323 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 23-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k123, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k128, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.46 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.46 0 0))) ((bruijn ##kk.43 3 1) (bruijn ##k.315 1 0) (##inline ##vcore.cdr (bruijn ##expr.44 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.45 2 0)) (bruijn ##xs.40 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.46 0 0)) (bruijn ##vals.41 6 3))) ((bruijn ##k.315 1 0) #f)) ((bruijn ##k.315 1 0) #f))
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
static void _V0loop_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.45 1 0)) ((close _V0loop_k128) (##inline ##vcore.cdr (bruijn ##expr.45 1 0))) ((bruijn ##k.315 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0loop_k128, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k131, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.42 9 1) (bruijn ##k.310 4 0) (bruijn ##expr.44 7 1) (bruijn ##x.312 1 0) (bruijn ##x.313 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 28 3) (close _V0loop_k131) (bruijn ##vals.41 6 3))
    V_CALL(VGetArg(upenv, 28-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k131, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 27 3) (close _V0loop_k130) (bruijn ##xs.40 5 2))
    V_CALL(VGetArg(upenv, 27-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k130, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k127) (close _V0loop_k129))
    V_CALL_FUNC(_V0loop_k127, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k129, env)}));
 }
}
static void _V0loop_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k126) (##inline ##vcore.car (bruijn ##expr.44 3 1)))
    V_CALL_FUNC(_V0loop_k126, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 35) (bruijn ##k.309 0 0) (close _V0loop_lambda40))
    V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda40, env)}));
 }
}
static void _V0loop_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 23 34) (bruijn ##k.307 1 0) (close _V0loop_lambda39) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 23-1, 34), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda39, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda38, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda38, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k122) (close _V0loop_k125))
    V_CALL_FUNC(_V0loop_k122, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k125, env)}));
 }
}
static void _V0iter_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda38)) ((bruijn loop 0 0) (bruijn ##k.306 1 0) (##inline ##vcore.car (bruijn ##expr.38 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda38, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V0iter_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 35) (bruijn ##k.305 0 0) (close _V0iter_lambda37))
    V_CALL(VGetArg(upenv, 19-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda37, env)}));
 }
}
static void _V0iter_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k136, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 19 1) (bruijn ##k.327 5 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##x.333 3 0) (##inline ##vcore.cons (bruijn xs 5 2) (##inline ##vcore.cons (bruijn ##x.336 2 0) (##inline ##vcore.cons (bruijn ##x.338 0 0) '()))))))
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
static void _V0iter_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter 20 3) (close _V0iter_k136) (bruijn ##x.339 0 0) (##inline ##vcore.car (bruijn ##expr.47 3 0)))
    V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k136, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
 }
}
static void _V0iter_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 22 8) (close _V0iter_k135) (bruijn xs 3 2) (bruijn env 18 1))
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k135, env)}),
      upenv->up->up->vars[2],
      VGetArg(upenv, 18-1, 1));
 }
}
static void _V0iter_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k137, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter 20 3) (bruijn ##k.340 1 0) (bruijn ##x.341 0 0) (bruijn e 1 1))
    V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[1]);
 }
}
static void _V0iter_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cons 22 8) (close _V0iter_k137) (bruijn xs 3 2) (bruijn env 18 1))
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k137, env)}),
      upenv->up->up->vars[2],
      VGetArg(upenv, 18-1, 1));
 }
}
static void _V0iter_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 21 38) (close _V0iter_k134) (close _V0iter_lambda42) (bruijn vals 2 3))
    V_CALL(VGetArg(upenv, 21-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k134, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda42, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0iter_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.47 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.47 0 0))) ((bruijn length 20 0) (close _V0iter_k133) (bruijn xs 1 2)) ((bruijn ##k.327 1 0) #f)) ((bruijn ##k.327 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k133, env)}),
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
static void _V0iter_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0iter_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0iter_lambda41, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda41, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((close _V0iter_k132) (##inline ##vcore.cdr (bruijn ##expr.38 1 0))) ((bruijn ##k.327 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V0iter_k132, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.38 0 0)) ((bruijn call-with-values 18 34) (bruijn ##k.302 2 0) (close _V0iter_lambda36) (close _V0iter_lambda41)) ((bruijn ##k.302 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 18-1, 34), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda36, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda41, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.303 0 0) ((close _V0iter_k121) (##inline ##vcore.cdr (bruijn ##expr.37 2 0))) ((bruijn ##k.302 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter_k121, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.37 1 0)) ((bruijn equal? 16 36) (close _V0iter_k120) 'letrec (##inline ##vcore.car (bruijn ##expr.37 1 0))) ((bruijn ##k.302 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k120, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k140, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.299 0 0) ((bruijn ##kk.19 14 1) (bruijn ##k.298 1 0) (bruijn expr 15 2)) ((bruijn ##k.298 1 0) #f))
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
static void _V0iter_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.48 1 0)) ((bruijn equal? 18 36) (close _V0iter_k140) '##foreign.function (##inline ##vcore.car (bruijn ##expr.48 1 0))) ((bruijn ##k.298 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k140, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k143, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.295 0 0) ((bruijn ##kk.19 16 1) (bruijn ##k.294 1 0) (bruijn expr 17 2)) ((bruijn ##k.294 1 0) #f))
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
static void _V0iter_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.49 1 0)) ((bruijn equal? 20 36) (close _V0iter_k143) 'quote (##inline ##vcore.car (bruijn ##expr.49 1 0))) ((bruijn ##k.294 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 20-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k143, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k148, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 20 1) (bruijn ##k.285 3 0) (##inline ##vcore.cons '##inline (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.51 1 0)) (bruijn ##x.290 0 0))))
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
static void _V0iter_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 22 3) (bruijn ##k.291 0 0) (bruijn env 21 1) (bruijn x 0 1))
    V_CALL(VGetArg(upenv, 22-1, 3), runtime,
      _var0,
      VGetArg(upenv, 21-1, 1),
      _var1);
 }
}
static void _V0iter_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.51 0 0)) ((bruijn map 24 38) (close _V0iter_k148) (close _V0iter_lambda46) (##inline ##vcore.cdr (bruijn ##expr.51 0 0))) ((bruijn ##k.285 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 24-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k148, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda46, env)}),
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.286 0 0) ((close _V0iter_k147) (##inline ##vcore.cdr (bruijn ##expr.50 2 0))) ((bruijn ##k.285 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter_k147, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.50 1 0)) ((bruijn equal? 22 36) (close _V0iter_k146) '##inline (##inline ##vcore.car (bruijn ##expr.50 1 0))) ((bruijn ##k.285 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k146, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k152, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.55 4 1) (bruijn ##k.275 1 0) (bruijn ##expr.57 2 1) (bruijn ##x.276 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.57 1 1))) ((bruijn reverse 29 3) (close _V0loop_k152) (bruijn ##xs.54 1 2)) ((bruijn ##k.275 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 29-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k152, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k155, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.55 7 1) (bruijn ##k.269 2 0) (bruijn ##expr.57 5 1) (bruijn ##x.271 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 32 3) (close _V0loop_k155) (bruijn ##xs.54 4 2))
    V_CALL(VGetArg(upenv, 32-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k155, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.56 0 1) (close _V0loop_k154) (##inline ##vcore.cdr (bruijn ##expr.57 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.57 3 1)) (bruijn ##xs.54 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k154, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 30 35) (bruijn ##k.268 0 0) (close _V0loop_lambda52))
    V_CALL(VGetArg(upenv, 30-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda52, env)}));
 }
}
static void _V0loop_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 29 34) (bruijn ##k.266 1 0) (close _V0loop_lambda51) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 29-1, 34), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda51, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda50, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda50, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k151) (close _V0loop_k153))
    V_CALL_FUNC(_V0loop_k151, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k153, env)}));
 }
}
static void _V0iter_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda50)) ((bruijn loop 0 0) (bruijn ##k.265 1 0) (##inline ##vcore.cdr (bruijn ##expr.52 4 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda50, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V0iter_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 25 35) (bruijn ##k.264 0 0) (close _V0iter_lambda49))
    V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda49, env)}));
 }
}
static void _V0iter_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k158, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 23 1) (bruijn ##k.278 3 0) (bruijn ##x.280 0 0))
    V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0iter_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 27 8) (close _V0iter_k158) (bruijn ##x.281 1 0) (bruijn ##x.282 0 0))
    V_CALL(VGetArg(upenv, 27-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k158, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0iter_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 24 3) (bruijn ##k.283 0 0) (bruijn env 23 1) (bruijn x 0 1))
    V_CALL(VGetArg(upenv, 24-1, 3), runtime,
      _var0,
      VGetArg(upenv, 23-1, 1),
      _var1);
 }
}
static void _V0iter_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 26 38) (close _V0iter_k157) (close _V0iter_lambda54) (bruijn xs 1 2))
    V_CALL(VGetArg(upenv, 26-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k157, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda54, env)}),
      upenv->vars[2]);
 }
}
static void _V0iter_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter_lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda53, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda53, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((bruijn iter 22 3) (close _V0iter_k156) (bruijn env 21 1) (##inline ##vcore.car (bruijn ##expr.52 2 0))) ((bruijn ##k.278 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 22-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k156, env)}),
      VGetArg(upenv, 21-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.52 1 0)) ((bruijn call-with-values 24 34) (bruijn ##k.263 0 0) (close _V0iter_lambda48) (close _V0iter_lambda53)) ((bruijn ##k.263 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 24-1, 34), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda48, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda53, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k161, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.260 1 0) ((bruijn lookup 24 0) (bruijn ##k.261 0 0) 0 (bruijn env 23 1) (bruijn x 2 0)) ((bruijn ##k.261 0 0) (bruijn x 2 0)))
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
static void _V0iter_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 24 1) (bruijn ##k.247 24 0) (bruijn ##x.258 0 0))
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 24-1, 0),
      _var0);
 }
}
static void _V0iter_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 28 30) (close _V0iter_k164) (##string ##string.867) (bruijn expr 24 2))
    V_CALL(VGetArg(upenv, 28-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k164, env)}),
      VEncodePointer(&_V10string_D867.sym, VPOINTER_OTHER),
      VGetArg(upenv, 24-1, 2));
 }
}
static void _V0iter_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.19 22 1) (close _V0iter_k163) (bruijn ##x.259 0 0))
    V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k163, env)}),
      _var0);
 }
}
static void _V0iter_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k161) (close _V0iter_k162))
    V_CALL_FUNC(_V0iter_k161, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k162, env)}));
 }
}
static void _V0iter_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda55" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 25 17) (close _V0iter_k160) (bruijn x 0 0))
    V_CALL(VGetArg(upenv, 25-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k160, env)}),
      _var0);
 }
}
static void _V0iter_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda55) (bruijn ##input.20 18 0))
    V_CALL_FUNC(_V0iter_lambda55, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V0iter_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda47" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k150) (close _V0iter_k159))
    V_CALL_FUNC(_V0iter_k150, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k159, env)}));
 }
}
static void _V0iter_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda47) (bruijn ##input.20 16 0))
    V_CALL_FUNC(_V0iter_lambda47, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V0iter_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda45" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k145) (close _V0iter_k149))
    V_CALL_FUNC(_V0iter_k145, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k149, env)}));
 }
}
static void _V0iter_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda45) (bruijn ##input.20 14 0))
    V_CALL_FUNC(_V0iter_lambda45, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0iter_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda44" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k142) (close _V0iter_k144))
    V_CALL_FUNC(_V0iter_k142, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k144, env)}));
 }
}
static void _V0iter_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda44) (bruijn ##input.20 12 0))
    V_CALL_FUNC(_V0iter_lambda44, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0iter_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda43" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k139) (close _V0iter_k141))
    V_CALL_FUNC(_V0iter_k139, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k141, env)}));
 }
}
static void _V0iter_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda43) (bruijn ##input.20 10 0))
    V_CALL_FUNC(_V0iter_lambda43, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0iter_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda35" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k119) (close _V0iter_k138))
    V_CALL_FUNC(_V0iter_k119, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k138, env)}));
 }
}
static void _V0iter_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda35) (bruijn ##input.20 8 0))
    V_CALL_FUNC(_V0iter_lambda35, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0iter_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k110) (close _V0iter_k118))
    V_CALL_FUNC(_V0iter_k110, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k118, env)}));
 }
}
static void _V0iter_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda34) (bruijn ##input.20 6 0))
    V_CALL_FUNC(_V0iter_lambda34, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0iter_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k106) (close _V0iter_k109))
    V_CALL_FUNC(_V0iter_k106, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k109, env)}));
 }
}
static void _V0iter_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda32) (bruijn ##input.20 4 0))
    V_CALL_FUNC(_V0iter_lambda32, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0iter_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda31" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k96) (close _V0iter_k105))
    V_CALL_FUNC(_V0iter_k96, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k105, env)}));
 }
}
static void _V0iter_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda31) (bruijn ##input.20 2 0))
    V_CALL_FUNC(_V0iter_lambda31, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0iter_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda24" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k83) (close _V0iter_k95))
    V_CALL_FUNC(_V0iter_k83, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k95, env)}));
 }
}
static void _V0iter_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda23" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda24) (bruijn ##input.20 0 0))
    V_CALL_FUNC(_V0iter_lambda24, env, runtime,
      _var0);
 }
}
static void _V0iter_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda23) (bruijn expr 1 2))
    V_CALL_FUNC(_V0iter_lambda23, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0iter_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter_lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 4 35) (bruijn ##k.246 0 0) (close _V0iter_lambda22))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda22, env)}));
 }
}
static void _V0doit_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0doit_lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0doit_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0doit_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 1 3) (bruijn ##k.414 0 0) '() (bruijn expr 0 1))
    V_CALL(upenv->vars[3], runtime,
      _var0,
      VNULL,
      _var1);
 }
}
static void _V0bruijn__ify_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k166, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.433 0 0) ((bruijn ##kk.1 4 1) (bruijn ##k.432 1 0) (bruijn expr 6 1)) ((bruijn ##k.432 1 0) #f))
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
static void _V0bruijn__ify_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.3 1 0)) ((bruijn equal? 7 36) (close _V0bruijn__ify_k166) '##foreign.declare (##inline ##vcore.car (bruijn ##expr.3 1 0))) ((bruijn ##k.432 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k166, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__ify_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k172, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 9 1) (bruijn ##k.420 4 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.5 2 0)) (##inline ##vcore.cons (bruijn ##x.428 0 0) '()))))
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
static void _V0bruijn__ify_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.6 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.6 0 0))) ((bruijn doit 9 4) (close _V0bruijn__ify_k172) (##inline ##vcore.car (bruijn ##expr.6 0 0))) ((bruijn ##k.420 3 0) #f)) ((bruijn ##k.420 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k172, env)}),
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
static void _V0bruijn__ify_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.5 0 0)) ((close _V0bruijn__ify_k171) (##inline ##vcore.cdr (bruijn ##expr.5 0 0))) ((bruijn ##k.420 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0bruijn__ify_k171, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__ify_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.421 0 0) ((close _V0bruijn__ify_k170) (##inline ##vcore.cdr (bruijn ##expr.4 2 0))) ((bruijn ##k.420 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0bruijn__ify_k170, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__ify_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.4 1 0)) ((bruijn equal? 9 36) (close _V0bruijn__ify_k169) '##vcore.declare (##inline ##vcore.car (bruijn ##expr.4 1 0))) ((bruijn ##k.420 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k169, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__ify_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 6 1) (bruijn ##k.415 6 0) (bruijn ##x.418 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0bruijn__ify_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn doit 6 4) (close _V0bruijn__ify_k174) (bruijn expr 7 1))
    V_CALL(VGetArg(upenv, 6-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k174, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0bruijn__ify_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda60" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0bruijn__ify_k168) (close _V0bruijn__ify_k173))
    V_CALL_FUNC(_V0bruijn__ify_k168, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k173, env)}));
 }
}
static void _V0bruijn__ify_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0bruijn__ify_lambda60) (bruijn ##input.2 2 0))
    V_CALL_FUNC(_V0bruijn__ify_lambda60, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0bruijn__ify_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda59" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0bruijn__ify_k165) (close _V0bruijn__ify_k167))
    V_CALL_FUNC(_V0bruijn__ify_k165, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k167, env)}));
 }
}
static void _V0bruijn__ify_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda58" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0bruijn__ify_lambda59) (bruijn ##input.2 0 0))
    V_CALL_FUNC(_V0bruijn__ify_lambda59, env, runtime,
      _var0);
 }
}
static void _V0bruijn__ify_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__ify_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__ify_lambda58) (bruijn expr 2 1))
    V_CALL_FUNC(_V0bruijn__ify_lambda58, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V0bruijn__ify_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__ify_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 5 ((close _V0lookup_lambda6) (close _V0undot_lambda9) (close _V0bruijn__lambda_lambda10) (close _V0iter_lambda21) (close _V0doit_lambda56)) ((bruijn call/cc 3 35) (bruijn ##k.190 1 0) (close _V0bruijn__ify_lambda57)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[5]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 5, 5, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_lambda6, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_lambda9, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda10, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda21, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0doit_lambda56, env)});
    V_CALL(upenv->up->up->vars[35], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_lambda57, env)}));
    }
 }
}
static void _V0genlambda_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0genlambda_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k177, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 7 32) (bruijn ##k.436 3 0) (bruijn ##x.438 0 0))
    V_CALL(VGetArg(upenv, 7-1, 32), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0genlambda_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0genlambda_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn sprintf 6 31) (close _V0genlambda_k177) (##string ##string.868) (bruijn fun 2 1) (bruijn curlambda 5 2))
    V_CALL(VGetArg(upenv, 6-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k177, env)}),
      VEncodePointer(&_V10string_D868.sym, VPOINTER_OTHER),
      upenv->up->vars[1],
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0genlambda_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0genlambda_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0genlambda_k176) (bruijn curlambda 4 2) (bruijn ##x.439 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k176, env)}),
      VEncodeInt(4l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0genlambda_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0genlambda_lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0genlambda_lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn + 4 33) (close _V0genlambda_k175) (bruijn curlambda 3 2) 1)
    V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k175, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0gencont_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gencont_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k180, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 7 32) (bruijn ##k.440 3 0) (bruijn ##x.442 0 0))
    V_CALL(VGetArg(upenv, 7-1, 32), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0gencont_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gencont_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn sprintf 6 31) (close _V0gencont_k180) (##string ##string.869) (bruijn fun 2 1) (bruijn curcont 5 3))
    V_CALL(VGetArg(upenv, 6-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k180, env)}),
      VEncodePointer(&_V10string_D869.sym, VPOINTER_OTHER),
      upenv->up->vars[1],
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0gencont_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gencont_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0gencont_k179) (bruijn curcont 4 3) (bruijn ##x.443 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k179, env)}),
      VEncodeInt(4l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0gencont_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gencont_lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gencont_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn + 4 33) (close _V0gencont_k178) (bruijn curcont 3 3) 1)
    V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k178, env)}),
      upenv->up->up->vars[3],
      VEncodeInt(1l));
 }
}
static void _V0lift__intrinsic_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k185, runtime, upenv, 1, argc, _var0) {
  // ((bruijn car 9 7) (bruijn ##k.444 5 0) (bruijn lookup 2 0))
    V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0]);
 }
}
static void _V0lift__intrinsic_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0lift__intrinsic_k185) (bruijn literal-table 5 4) (bruijn ##x.446 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k185, env)}),
      VEncodeInt(5l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0lift__intrinsic_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 7 8) (close _V0lift__intrinsic_k184) (bruijn lookup 0 0) (bruijn literal-table 4 4))
    V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k184, env)}),
      _var0,
      upenv->up->up->up->vars[4]);
 }
}
static void _V0lift__intrinsic_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn lookup 0 0) ((bruijn car 6 7) (bruijn ##k.444 2 0) (bruijn lookup 0 0)) ((bruijn cons 6 8) (close _V0lift__intrinsic_k183) (bruijn key 1 0) (bruijn intrin 2 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      upenv->up->vars[0],
      _var0);
} else {
    V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k183, env)}),
      upenv->vars[0],
      upenv->up->vars[2]);
}
 }
}
static void _V0lift__intrinsic_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assoc 5 21) (close _V0lift__intrinsic_k182) (bruijn key 0 0) (bruijn literal-table 2 4))
    V_CALL(VGetArg(upenv, 5-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k182, env)}),
      _var0,
      upenv->up->vars[4]);
 }
}
static void _V0lift__intrinsic_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0lift__intrinsic_lambda64, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_lambda64, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (bruijn lifting-literals? 2 2) ((bruijn list 4 37) (close _V0lift__intrinsic_k181) '##intrinsic (bruijn sym 0 1)) ((bruijn list 4 37) (bruijn ##k.444 0 0) '##intrinsic (bruijn sym 0 1)))
if(VDecodeBool(
upenv->up->vars[2])) {
    V_CALL(upenv->up->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k181, env)}),
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
static void _V0lift__literal_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k194, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.447 9 0) (##inline ##vcore.cons '##string (##inline ##vcore.cons (bruijn ##x.456 0 0) '())))
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VInlineCons2(runtime,
        _V10string,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V0lift__literal_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k199, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.447 13 0) (##inline ##vcore.cons '##string (##inline ##vcore.cons (bruijn ##x.459 0 0) '())))
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VInlineCons2(runtime,
        _V10string,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V0lift__literal_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdar 16 26) (close _V0lift__literal_k199) (bruijn literal-table 13 4))
    V_CALL(VGetArg(upenv, 16-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k199, env)}),
      VGetArg(upenv, 13-1, 4));
 }
}
static void _V0lift__literal_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0lift__literal_k198) (bruijn literal-table 12 4) (bruijn ##x.460 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k198, env)}),
      VEncodeInt(12l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0lift__literal_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 14 8) (close _V0lift__literal_k197) (bruijn ##x.461 0 0) (bruijn literal-table 11 4))
    V_CALL(VGetArg(upenv, 14-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k197, env)}),
      _var0,
      VGetArg(upenv, 11-1, 4));
 }
}
static void _V0lift__literal_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 13 8) (close _V0lift__literal_k196) (bruijn x 9 1) (bruijn ##x.462 0 0))
    V_CALL(VGetArg(upenv, 13-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k196, env)}),
      VGetArg(upenv, 9-1, 1),
      _var0);
 }
}
static void _V0lift__literal_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn lookup 0 0) ((bruijn cdr 12 10) (close _V0lift__literal_k194) (bruijn lookup 0 0)) ((bruijn gensym 12 27) (close _V0lift__literal_k195) (##string ##string.870)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k194, env)}),
      _var0);
} else {
    V_CALL(VGetArg(upenv, 12-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k195, env)}),
      VEncodePointer(&_V10string_D870.sym, VPOINTER_OTHER));
}
 }
}
static void _V0lift__literal_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.466 2 0) (bruijn literal-table 14 4) (bruijn ##x.467 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->up->vars[0],
      VEncodeInt(14l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0lift__literal_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 16 8) (close _V0lift__literal_k205) (bruijn ##x.468 0 0) (bruijn literal-table 13 4))
    V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k205, env)}),
      _var0,
      VGetArg(upenv, 13-1, 4));
 }
}
static void _V0lift__literal_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.465 1 0) ((bruijn cons 15 8) (close _V0lift__literal_k204) (bruijn x 11 1) '()) ((bruijn ##k.466 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k204, env)}),
      VGetArg(upenv, 11-1, 1),
      VNULL);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0lift__literal_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k206, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.447 11 0) (bruijn x 11 1))
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V0lift__literal_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0lift__literal_k203) (close _V0lift__literal_k206))
    V_CALL_FUNC(_V0lift__literal_k203, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k206, env)}));
 }
}
static void _V0lift__literal_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 13 18) (close _V0lift__literal_k202) (bruijn ##x.469 0 0))
    V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k202, env)}),
      _var0);
 }
}
static void _V0lift__literal_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.463 0 0) ((bruijn assv 12 29) (close _V0lift__literal_k201) (bruijn x 8 1) (bruijn literal-table 9 4)) ((bruijn compiler-error 12 30) (bruijn ##k.447 8 0) (##string ##string.871) (bruijn x 8 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k201, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 9-1, 4));
} else {
    V_CALL(VGetArg(upenv, 12-1, 30), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10string_D871.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1));
}
 }
}
static void _V0lift__literal_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.454 0 0) ((bruijn assoc 11 21) (close _V0lift__literal_k193) (bruijn x 7 1) (bruijn literal-table 8 4)) ((bruijn symbol? 11 17) (close _V0lift__literal_k200) (bruijn x 7 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k193, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 8-1, 4));
} else {
    V_CALL(VGetArg(upenv, 11-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k200, env)}),
      VGetArg(upenv, 7-1, 1));
}
 }
}
static void _V0lift__literal_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.453 0 0) ((bruijn ##k.447 6 0) (bruijn x 6 1)) ((bruijn string? 10 28) (close _V0lift__literal_k192) (bruijn x 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 10-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k192, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0lift__literal_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.452 0 0) ((bruijn ##k.447 5 0) (bruijn x 5 1)) ((bruijn null? 9 6) (close _V0lift__literal_k191) (bruijn x 5 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(VGetArg(upenv, 9-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k191, env)}),
      VGetArg(upenv, 5-1, 1));
}
 }
}
static void _V0lift__literal_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.451 0 0) ((bruijn ##k.447 4 0) (bruijn x 4 1)) ((bruijn eq? 8 25) (close _V0lift__literal_k190) (bruijn x 4 1) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k190, env)}),
      upenv->up->up->up->vars[1],
      VEncodeBool(false));
}
 }
}
static void _V0lift__literal_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.450 0 0) ((bruijn ##k.447 3 0) (bruijn x 3 1)) ((bruijn eq? 7 25) (close _V0lift__literal_k189) (bruijn x 3 1) #t))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k189, env)}),
      upenv->up->up->vars[1],
      VEncodeBool(true));
}
 }
}
static void _V0lift__literal_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.449 0 0) ((bruijn ##k.447 2 0) (bruijn x 2 1)) ((bruijn char? 6 24) (close _V0lift__literal_k188) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k188, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0lift__literal_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.448 0 0) ((bruijn ##k.447 1 0) (bruijn x 1 1)) ((bruijn number? 5 23) (close _V0lift__literal_k187) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k187, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0lift__literal_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0lift__literal_lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0lift__literal_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (bruijn lifting-literals? 2 2) ((bruijn integer? 4 22) (close _V0lift__literal_k186) (bruijn x 0 1)) ((bruijn ##k.447 0 0) (bruijn x 0 1)))
if(VDecodeBool(
upenv->up->vars[2])) {
    V_CALL(upenv->up->up->up->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k186, env)}),
      _var1);
} else {
    V_CALL(_var0, runtime,
      _var1);
}
 }
}
static void _V0iter__lambda_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k209, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.62 5 1) (bruijn ##k.487 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.64 3 0)) (##inline ##vcore.cons (bruijn ##x.492 0 0) '())))
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
static void _V0iter__lambda_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.65 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.65 0 0))) ((bruijn iter-apply 6 9) (close _V0iter__lambda_k209) (bruijn fun 5 1) (##inline ##vcore.car (bruijn ##expr.65 0 0))) ((bruijn ##k.487 1 0) #f)) ((bruijn ##k.487 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 6-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k209, env)}),
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
static void _V0iter__lambda_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.64 1 0)) ((close _V0iter__lambda_k208) (##inline ##vcore.cdr (bruijn ##expr.64 1 0))) ((bruijn ##k.487 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0iter__lambda_k208, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__lambda_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k215, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.62 9 1) (bruijn ##k.475 4 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.66 5 0)) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##x.483 0 0) '()))))
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
static void _V0iter__lambda_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.68 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.68 0 0))) ((bruijn iter-apply 10 9) (close _V0iter__lambda_k215) (bruijn fun 9 1) (##inline ##vcore.car (bruijn ##expr.68 0 0))) ((bruijn ##k.475 3 0) #f)) ((bruijn ##k.475 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k215, env)}),
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
static void _V0iter__lambda_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.477 0 0) ((close _V0iter__lambda_k214) (##inline ##vcore.cdr (bruijn ##expr.67 1 0))) ((bruijn ##k.475 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__lambda_k214, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__lambda_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.67 0 0)) ((bruijn equal? 11 36) (close _V0iter__lambda_k213) '+ (##inline ##vcore.car (bruijn ##expr.67 0 0))) ((bruijn ##k.475 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 11-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k213, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__lambda_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.66 1 0)) ((close _V0iter__lambda_k212) (##inline ##vcore.cdr (bruijn ##expr.66 1 0))) ((bruijn ##k.475 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0iter__lambda_k212, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__lambda_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k216, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 10 14) (bruijn ##k.471 5 0) (##string ##string.872))
    V_CALL(VGetArg(upenv, 10-1, 14), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D872.sym, VPOINTER_OTHER));
 }
}
static void _V0iter__lambda_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda70" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__lambda_k211) (close _V0iter__lambda_k216))
    V_CALL_FUNC(_V0iter__lambda_k211, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k216, env)}));
 }
}
static void _V0iter__lambda_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__lambda_lambda70) (bruijn ##input.63 2 0))
    V_CALL_FUNC(_V0iter__lambda_lambda70, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0iter__lambda_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda69" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__lambda_k207) (close _V0iter__lambda_k210))
    V_CALL_FUNC(_V0iter__lambda_k207, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k210, env)}));
 }
}
static void _V0iter__lambda_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda68" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__lambda_lambda69) (bruijn ##input.63 0 0))
    V_CALL_FUNC(_V0iter__lambda_lambda69, env, runtime,
      _var0);
 }
}
static void _V0iter__lambda_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__lambda_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__lambda_lambda68) (bruijn lamb 1 2))
    V_CALL_FUNC(_V0iter__lambda_lambda68, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0iter__lambda_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__lambda_lambda66, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda66, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 4 35) (bruijn ##k.470 0 0) (close _V0iter__lambda_lambda67))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_lambda67, env)}));
 }
}
static void _V0iter__atom_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k218, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.615 0 0) ((bruijn ##kk.69 4 1) (bruijn ##k.614 1 0) (bruijn expr 5 2)) ((bruijn ##k.614 1 0) #f))
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
static void _V0iter__atom_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.71 1 0)) ((bruijn equal? 8 36) (close _V0iter__atom_k218) 'bruijn (##inline ##vcore.car (bruijn ##expr.71 1 0))) ((bruijn ##k.614 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k218, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k227, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.69 12 1) (bruijn ##k.596 7 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn lamb 3 0) '())))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V0iter__atom_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k227) (bruijn functions 13 3) (bruijn ##x.604 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k227, env)}),
      VEncodeInt(13l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__atom_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 15 8) (close _V0iter__atom_k226) (##inline ##vcore.cons (bruijn lamb 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.73 3 0)) (##inline ##vcore.cons (bruijn ##x.610 0 0) '())) '()))) (bruijn functions 12 3))
    V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k226, env)}),
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
static void _V0iter__atom_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 11 9) (close _V0iter__atom_k225) (bruijn fun 10 1) (##inline ##vcore.car (bruijn ##expr.74 1 0)))
    V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k225, env)}),
      VGetArg(upenv, 10-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter__atom_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.74 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.74 0 0))) ((bruijn genlambda 10 0) (close _V0iter__atom_k224) (bruijn fun 9 1)) ((bruijn ##k.596 3 0) #f)) ((bruijn ##k.596 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k224, env)}),
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
static void _V0iter__atom_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.73 0 0)) ((close _V0iter__atom_k223) (##inline ##vcore.cdr (bruijn ##expr.73 0 0))) ((bruijn ##k.596 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__atom_k223, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.597 0 0) ((close _V0iter__atom_k222) (##inline ##vcore.cdr (bruijn ##expr.72 2 0))) ((bruijn ##k.596 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__atom_k222, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.72 1 0)) ((bruijn equal? 10 36) (close _V0iter__atom_k221) 'lambda (##inline ##vcore.car (bruijn ##expr.72 1 0))) ((bruijn ##k.596 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k221, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k238, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.69 16 1) (bruijn ##k.574 9 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn lamb 3 0) '())))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V0iter__atom_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k238) (bruijn functions 17 3) (bruijn ##x.584 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k238, env)}),
      VEncodeInt(17l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__atom_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 19 8) (close _V0iter__atom_k237) (##inline ##vcore.cons (bruijn lamb 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.76 5 0)) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##x.591 0 0) '()))) '()))) (bruijn functions 16 3))
    V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k237, env)}),
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
static void _V0iter__atom_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 15 9) (close _V0iter__atom_k236) (bruijn fun 14 1) (##inline ##vcore.car (bruijn ##expr.78 1 0)))
    V_CALL(VGetArg(upenv, 15-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k236, env)}),
      VGetArg(upenv, 14-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter__atom_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.78 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.78 0 0))) ((bruijn genlambda 14 0) (close _V0iter__atom_k235) (bruijn fun 13 1)) ((bruijn ##k.574 5 0) #f)) ((bruijn ##k.574 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k235, env)}),
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
static void _V0iter__atom_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.578 0 0) ((close _V0iter__atom_k234) (##inline ##vcore.cdr (bruijn ##expr.77 1 0))) ((bruijn ##k.574 4 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__atom_k234, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.77 0 0)) ((bruijn equal? 15 36) (close _V0iter__atom_k233) '+ (##inline ##vcore.car (bruijn ##expr.77 0 0))) ((bruijn ##k.574 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 15-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k233, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.76 0 0)) ((close _V0iter__atom_k232) (##inline ##vcore.cdr (bruijn ##expr.76 0 0))) ((bruijn ##k.574 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__atom_k232, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.575 0 0) ((close _V0iter__atom_k231) (##inline ##vcore.cdr (bruijn ##expr.75 2 0))) ((bruijn ##k.574 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__atom_k231, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.75 1 0)) ((bruijn equal? 12 36) (close _V0iter__atom_k230) 'lambda (##inline ##vcore.car (bruijn ##expr.75 1 0))) ((bruijn ##k.574 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k230, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k245, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.69 14 1) (bruijn ##k.562 5 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn lamb 3 0) '())))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V0iter__atom_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k245) (bruijn functions 15 3) (bruijn ##x.567 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k245, env)}),
      VEncodeInt(15l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__atom_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 17 8) (close _V0iter__atom_k244) (##inline ##vcore.cons (bruijn lamb 1 0) (##inline ##vcore.cons '#t (bruijn ##x.570 0 0))) (bruijn functions 14 3))
    V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k244, env)}),
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        _var0)),
      VGetArg(upenv, 14-1, 3));
 }
}
static void _V0iter__atom_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-lambda 14 7) (bruijn ##k.571 0 0) (bruijn fun 13 1) (bruijn e 0 1))
    V_CALL(VGetArg(upenv, 14-1, 7), runtime,
      _var0,
      VGetArg(upenv, 13-1, 1),
      _var1);
 }
}
static void _V0iter__atom_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 16 38) (close _V0iter__atom_k243) (close _V0iter__atom_lambda78) (##inline ##vcore.cdr (bruijn ##expr.79 3 0)))
    V_CALL(VGetArg(upenv, 16-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k243, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda78, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
 }
}
static void _V0iter__atom_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.563 0 0) ((bruijn genlambda 12 0) (close _V0iter__atom_k242) (bruijn fun 11 1)) ((bruijn ##k.562 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k242, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.79 1 0)) ((bruijn equal? 14 36) (close _V0iter__atom_k241) 'case-lambda (##inline ##vcore.car (bruijn ##expr.79 1 0))) ((bruijn ##k.562 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k241, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k254, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.69 18 1) (bruijn ##k.544 7 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn k 3 0) '())))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V0iter__atom_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k254) (bruijn functions 19 3) (bruijn ##x.552 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k254, env)}),
      VEncodeInt(19l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__atom_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 21 8) (close _V0iter__atom_k253) (##inline ##vcore.cons (bruijn k 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.81 3 0)) (##inline ##vcore.cons (bruijn ##x.558 0 0) '())) '()))) (bruijn functions 18 3))
    V_CALL(VGetArg(upenv, 21-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k253, env)}),
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
static void _V0iter__atom_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 17 9) (close _V0iter__atom_k252) (bruijn fun 16 1) (##inline ##vcore.car (bruijn ##expr.82 1 0)))
    V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k252, env)}),
      VGetArg(upenv, 16-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter__atom_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.82 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.82 0 0))) ((bruijn gencont 16 1) (close _V0iter__atom_k251) (bruijn fun 15 1)) ((bruijn ##k.544 3 0) #f)) ((bruijn ##k.544 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k251, env)}),
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
static void _V0iter__atom_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.81 0 0)) ((close _V0iter__atom_k250) (##inline ##vcore.cdr (bruijn ##expr.81 0 0))) ((bruijn ##k.544 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__atom_k250, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.545 0 0) ((close _V0iter__atom_k249) (##inline ##vcore.cdr (bruijn ##expr.80 2 0))) ((bruijn ##k.544 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__atom_k249, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.80 1 0)) ((bruijn equal? 16 36) (close _V0iter__atom_k248) 'continuation (##inline ##vcore.car (bruijn ##expr.80 1 0))) ((bruijn ##k.544 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k248, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.539 1 0) (bruijn foreign-functions 25 2) (bruijn ##x.540 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(25l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0iter__atom_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.538 1 0) ((bruijn cons 27 8) (close _V0iter__atom_k266) (bruijn expr 23 2) (bruijn foreign-functions 24 2)) ((bruijn ##k.539 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 27-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k266, env)}),
      VGetArg(upenv, 23-1, 2),
      VGetArg(upenv, 24-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k267, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.69 22 1) (bruijn ##k.529 9 0) (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons (bruijn mangled 3 0) '())))
    V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V0iter__atom_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k265) (close _V0iter__atom_k267))
    V_CALL_FUNC(_V0iter__atom_k265, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k267, env)}));
 }
}
static void _V0iter__atom_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 25 18) (close _V0iter__atom_k264) (bruijn ##x.541 0 0))
    V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k264, env)}),
      _var0);
 }
}
static void _V0iter__atom_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assoc 24 21) (close _V0iter__atom_k263) (bruijn mangled 0 0) (bruijn foreign-functions 21 2))
    V_CALL(VGetArg(upenv, 24-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k263, env)}),
      _var0,
      VGetArg(upenv, 21-1, 2));
 }
}
static void _V0iter__atom_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.87 0 0)) ((bruijn mangle-foreign-function 23 20) (close _V0iter__atom_k262) (##inline ##vcore.car (bruijn ##expr.87 0 0))) ((bruijn ##k.529 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 23-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k262, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.86 0 0)) ((close _V0iter__atom_k261) (##inline ##vcore.cdr (bruijn ##expr.86 0 0))) ((bruijn ##k.529 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__atom_k261, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.85 0 0)) ((close _V0iter__atom_k260) (##inline ##vcore.cdr (bruijn ##expr.85 0 0))) ((bruijn ##k.529 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__atom_k260, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.84 0 0)) ((close _V0iter__atom_k259) (##inline ##vcore.cdr (bruijn ##expr.84 0 0))) ((bruijn ##k.529 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__atom_k259, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.530 0 0) ((close _V0iter__atom_k258) (##inline ##vcore.cdr (bruijn ##expr.83 2 0))) ((bruijn ##k.529 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__atom_k258, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.83 1 0)) ((bruijn equal? 18 36) (close _V0iter__atom_k257) '##foreign.function (##inline ##vcore.car (bruijn ##expr.83 1 0))) ((bruijn ##k.529 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k257, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k272, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.69 18 1) (bruijn ##k.519 3 0) (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##x.525 0 0) '())))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V0iter__atom_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.89 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.89 0 0))) ((bruijn lift-literal 19 6) (close _V0iter__atom_k272) (##inline ##vcore.car (bruijn ##expr.89 0 0))) ((bruijn ##k.519 2 0) #f)) ((bruijn ##k.519 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k272, env)}),
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
static void _V0iter__atom_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.520 0 0) ((close _V0iter__atom_k271) (##inline ##vcore.cdr (bruijn ##expr.88 2 0))) ((bruijn ##k.519 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__atom_k271, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.88 1 0)) ((bruijn equal? 20 36) (close _V0iter__atom_k270) 'quote (##inline ##vcore.car (bruijn ##expr.88 1 0))) ((bruijn ##k.519 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 20-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k270, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k277, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.69 20 1) (bruijn ##k.510 3 0) (##inline ##vcore.cons '##inline (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.91 1 0)) (bruijn ##x.515 0 0))))
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
static void _V0iter__atom_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 22 8) (bruijn ##k.516 0 0) (bruijn fun 21 1) (bruijn x 0 1) #f)
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      _var0,
      VGetArg(upenv, 21-1, 1),
      _var1,
      VEncodeBool(false));
 }
}
static void _V0iter__atom_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.91 0 0)) ((bruijn map 24 38) (close _V0iter__atom_k277) (close _V0iter__atom_lambda83) (##inline ##vcore.cdr (bruijn ##expr.91 0 0))) ((bruijn ##k.510 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 24-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k277, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda83, env)}),
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.511 0 0) ((close _V0iter__atom_k276) (##inline ##vcore.cdr (bruijn ##expr.90 2 0))) ((bruijn ##k.510 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__atom_k276, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.90 1 0)) ((bruijn equal? 22 36) (close _V0iter__atom_k275) '##inline (##inline ##vcore.car (bruijn ##expr.90 1 0))) ((bruijn ##k.510 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k275, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k282, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.508 0 0) ((bruijn ##k.507 2 0) (bruijn x 4 0)) ((bruijn lift-intrinsic 24 5) (bruijn ##k.507 2 0) (bruijn x 4 0) (bruijn intrin 1 0)))
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
static void _V0iter__atom_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 26 18) (close _V0iter__atom_k282) (bruijn intrin 0 0))
    V_CALL(VGetArg(upenv, 26-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k282, env)}),
      _var0);
 }
}
static void _V0iter__atom_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.506 1 0) (if (bruijn func-position? 21 3) ((bruijn ##k.507 0 0) (bruijn x 2 0)) ((bruijn lookup-intrinsic-name 25 19) (close _V0iter__atom_k281) (bruijn x 2 0))) ((bruijn lift-literal 22 6) (bruijn ##k.507 0 0) (bruijn x 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
if(VDecodeBool(
VGetArg(upenv, 21-1, 3))) {
    V_CALL(_var0, runtime,
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 25-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k281, env)}),
      upenv->up->vars[0]);
}
} else {
    V_CALL(VGetArg(upenv, 22-1, 6), runtime,
      _var0,
      upenv->up->vars[0]);
}
 }
}
static void _V0iter__atom_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k284, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 26 14) (bruijn ##k.495 21 0) (##string ##string.872))
    V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10string_D872.sym, VPOINTER_OTHER));
 }
}
static void _V0iter__atom_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.69 20 1) (close _V0iter__atom_k284) (bruijn ##x.505 0 0))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k284, env)}),
      _var0);
 }
}
static void _V0iter__atom_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k280) (close _V0iter__atom_k283))
    V_CALL_FUNC(_V0iter__atom_k280, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k283, env)}));
 }
}
static void _V0iter__atom_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda84" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 23 17) (close _V0iter__atom_k279) (bruijn x 0 0))
    V_CALL(VGetArg(upenv, 23-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k279, env)}),
      _var0);
 }
}
static void _V0iter__atom_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda84) (bruijn ##input.70 16 0))
    V_CALL_FUNC(_V0iter__atom_lambda84, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V0iter__atom_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda82" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k274) (close _V0iter__atom_k278))
    V_CALL_FUNC(_V0iter__atom_k274, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k278, env)}));
 }
}
static void _V0iter__atom_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda82) (bruijn ##input.70 14 0))
    V_CALL_FUNC(_V0iter__atom_lambda82, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0iter__atom_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda81" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k269) (close _V0iter__atom_k273))
    V_CALL_FUNC(_V0iter__atom_k269, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k273, env)}));
 }
}
static void _V0iter__atom_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda81) (bruijn ##input.70 12 0))
    V_CALL_FUNC(_V0iter__atom_lambda81, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0iter__atom_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda80" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k256) (close _V0iter__atom_k268))
    V_CALL_FUNC(_V0iter__atom_k256, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k268, env)}));
 }
}
static void _V0iter__atom_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda80) (bruijn ##input.70 10 0))
    V_CALL_FUNC(_V0iter__atom_lambda80, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0iter__atom_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda79" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k247) (close _V0iter__atom_k255))
    V_CALL_FUNC(_V0iter__atom_k247, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k255, env)}));
 }
}
static void _V0iter__atom_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda79) (bruijn ##input.70 8 0))
    V_CALL_FUNC(_V0iter__atom_lambda79, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0iter__atom_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda77" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k240) (close _V0iter__atom_k246))
    V_CALL_FUNC(_V0iter__atom_k240, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k246, env)}));
 }
}
static void _V0iter__atom_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda77) (bruijn ##input.70 6 0))
    V_CALL_FUNC(_V0iter__atom_lambda77, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0iter__atom_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda76" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k229) (close _V0iter__atom_k239))
    V_CALL_FUNC(_V0iter__atom_k229, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k239, env)}));
 }
}
static void _V0iter__atom_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda76) (bruijn ##input.70 4 0))
    V_CALL_FUNC(_V0iter__atom_lambda76, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0iter__atom_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda75" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k220) (close _V0iter__atom_k228))
    V_CALL_FUNC(_V0iter__atom_k220, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k228, env)}));
 }
}
static void _V0iter__atom_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda75) (bruijn ##input.70 2 0))
    V_CALL_FUNC(_V0iter__atom_lambda75, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0iter__atom_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda74" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k217) (close _V0iter__atom_k219))
    V_CALL_FUNC(_V0iter__atom_k217, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k219, env)}));
 }
}
static void _V0iter__atom_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda73" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda74) (bruijn ##input.70 0 0))
    V_CALL_FUNC(_V0iter__atom_lambda74, env, runtime,
      _var0);
 }
}
static void _V0iter__atom_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda73) (bruijn expr 1 2))
    V_CALL_FUNC(_V0iter__atom_lambda73, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0iter__atom_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0iter__atom_lambda71, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda71, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn call/cc 4 35) (bruijn ##k.494 0 0) (close _V0iter__atom_lambda72))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda72, env)}));
 }
}
static void _V0iter__apply_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k293, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.92 11 1) (bruijn ##k.744 8 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.95 6 0)) (##inline ##vcore.cons (bruijn ##x.753 2 0) (##inline ##vcore.cons (bruijn ##x.755 0 0) '())))))
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
static void _V0iter__apply_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 12 8) (close _V0iter__apply_k293) (bruijn ##x.756 0 0) (##inline ##vcore.car (bruijn ##expr.97 2 0)) #f)
    V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k293, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VEncodeBool(false));
 }
}
static void _V0iter__apply_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 14 16) (close _V0iter__apply_k292) (bruijn y 2 0))
    V_CALL(VGetArg(upenv, 14-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k292, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0iter__apply_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.97 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.97 0 0))) ((bruijn lift-literal 10 6) (close _V0iter__apply_k291) (bruijn y 1 0)) ((bruijn ##k.744 5 0) #f)) ((bruijn ##k.744 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k291, env)}),
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
static void _V0iter__apply_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k290) (##inline ##vcore.cdr (bruijn ##expr.96 1 0)))
    V_CALL_FUNC(_V0iter__apply_k290, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter__apply_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.96 0 0)) ((close _V0iter__apply_k289) (##inline ##vcore.car (bruijn ##expr.96 0 0))) ((bruijn ##k.744 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k289, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.95 0 0)) ((close _V0iter__apply_k288) (##inline ##vcore.cdr (bruijn ##expr.95 0 0))) ((bruijn ##k.744 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k288, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.745 0 0) ((close _V0iter__apply_k287) (##inline ##vcore.cdr (bruijn ##expr.94 2 0))) ((bruijn ##k.744 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__apply_k287, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.94 1 0)) ((bruijn equal? 8 36) (close _V0iter__apply_k286) 'define (##inline ##vcore.car (bruijn ##expr.94 1 0))) ((bruijn ##k.744 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k286, env)}),
      _V0define,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k306, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.92 16 1) (bruijn ##k.722 11 0) (##inline ##vcore.cons 'set! (##inline ##vcore.cons (bruijn ##x.733 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons (bruijn name 4 0) (##inline ##vcore.cdr (bruijn ##expr.102 5 0)))) (##inline ##vcore.cons (bruijn ##x.737 0 0) '())))))
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
static void _V0iter__apply_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 17 8) (close _V0iter__apply_k306) (bruijn ##x.738 0 0) (##inline ##vcore.car (bruijn ##expr.103 2 0)) #f)
    V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k306, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VEncodeBool(false));
 }
}
static void _V0iter__apply_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 19 16) (close _V0iter__apply_k305) (bruijn name 2 0))
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k305, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0iter__apply_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.103 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.103 0 0))) ((bruijn iter-atom 15 8) (close _V0iter__apply_k304) (bruijn fun 14 1) (##inline ##vcore.car (bruijn ##expr.99 6 0)) #f) ((bruijn ##k.722 8 0) #f)) ((bruijn ##k.722 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k304, env)}),
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
static void _V0iter__apply_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k303) (##inline ##vcore.cdr (bruijn ##expr.100 4 0)))
    V_CALL_FUNC(_V0iter__apply_k303, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[0]));
 }
}
static void _V0iter__apply_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.102 0 0)) ((close _V0iter__apply_k302) (##inline ##vcore.car (bruijn ##expr.102 0 0))) ((bruijn ##k.722 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k302, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.727 0 0) ((close _V0iter__apply_k301) (##inline ##vcore.cdr (bruijn ##expr.101 1 0))) ((bruijn ##k.722 5 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__apply_k301, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.101 0 0)) ((bruijn equal? 14 36) (close _V0iter__apply_k300) 'bruijn (##inline ##vcore.car (bruijn ##expr.101 0 0))) ((bruijn ##k.722 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k300, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.100 0 0)) ((close _V0iter__apply_k299) (##inline ##vcore.car (bruijn ##expr.100 0 0))) ((bruijn ##k.722 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k299, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.99 0 0)) ((close _V0iter__apply_k298) (##inline ##vcore.cdr (bruijn ##expr.99 0 0))) ((bruijn ##k.722 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k298, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.723 0 0) ((close _V0iter__apply_k297) (##inline ##vcore.cdr (bruijn ##expr.98 2 0))) ((bruijn ##k.722 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__apply_k297, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.98 1 0)) ((bruijn equal? 10 36) (close _V0iter__apply_k296) 'set! (##inline ##vcore.car (bruijn ##expr.98 1 0))) ((bruijn ##k.722 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k296, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k317, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.92 16 1) (bruijn ##k.705 9 0) (##inline ##vcore.cons 'set! (##inline ##vcore.cons (bruijn ##x.713 3 0) (##inline ##vcore.cons (bruijn ##x.715 2 0) (##inline ##vcore.cons (bruijn ##x.717 0 0) '())))))
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
static void _V0iter__apply_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 17 8) (close _V0iter__apply_k317) (bruijn ##x.718 0 0) (##inline ##vcore.car (bruijn ##expr.107 3 0)) #f)
    V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k317, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VEncodeBool(false));
 }
}
static void _V0iter__apply_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 19 16) (close _V0iter__apply_k316) (bruijn y 3 0))
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k316, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0iter__apply_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn lift-literal 15 6) (close _V0iter__apply_k315) (bruijn y 2 0))
    V_CALL(VGetArg(upenv, 15-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k315, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0iter__apply_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.107 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.107 0 0))) ((bruijn iter-atom 14 8) (close _V0iter__apply_k314) (bruijn fun 13 1) (##inline ##vcore.car (bruijn ##expr.105 3 0)) #f) ((bruijn ##k.705 5 0) #f)) ((bruijn ##k.705 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k314, env)}),
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
static void _V0iter__apply_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k313) (##inline ##vcore.cdr (bruijn ##expr.106 1 0)))
    V_CALL_FUNC(_V0iter__apply_k313, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter__apply_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.106 0 0)) ((close _V0iter__apply_k312) (##inline ##vcore.car (bruijn ##expr.106 0 0))) ((bruijn ##k.705 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k312, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.105 0 0)) ((close _V0iter__apply_k311) (##inline ##vcore.cdr (bruijn ##expr.105 0 0))) ((bruijn ##k.705 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k311, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.706 0 0) ((close _V0iter__apply_k310) (##inline ##vcore.cdr (bruijn ##expr.104 2 0))) ((bruijn ##k.705 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__apply_k310, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.104 1 0)) ((bruijn equal? 12 36) (close _V0iter__apply_k309) 'set! (##inline ##vcore.car (bruijn ##expr.104 1 0))) ((bruijn ##k.705 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k309, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k326, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.92 16 1) (bruijn ##k.689 7 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##x.697 2 0) (##inline ##vcore.cons (bruijn ##x.699 1 0) (##inline ##vcore.cons (bruijn ##x.701 0 0) '())))))
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
static void _V0iter__apply_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 17 9) (close _V0iter__apply_k326) (bruijn fun 16 1) (##inline ##vcore.car (bruijn ##expr.111 2 0)))
    V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k326, env)}),
      VGetArg(upenv, 16-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V0iter__apply_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 16 9) (close _V0iter__apply_k325) (bruijn fun 15 1) (##inline ##vcore.car (bruijn ##expr.110 2 0)))
    V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k325, env)}),
      VGetArg(upenv, 15-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V0iter__apply_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.111 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.111 0 0))) ((bruijn iter-atom 15 8) (close _V0iter__apply_k324) (bruijn fun 14 1) (##inline ##vcore.car (bruijn ##expr.109 2 0)) #f) ((bruijn ##k.689 4 0) #f)) ((bruijn ##k.689 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k324, env)}),
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
static void _V0iter__apply_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.110 0 0)) ((close _V0iter__apply_k323) (##inline ##vcore.cdr (bruijn ##expr.110 0 0))) ((bruijn ##k.689 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k323, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.109 0 0)) ((close _V0iter__apply_k322) (##inline ##vcore.cdr (bruijn ##expr.109 0 0))) ((bruijn ##k.689 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k322, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.690 0 0) ((close _V0iter__apply_k321) (##inline ##vcore.cdr (bruijn ##expr.108 2 0))) ((bruijn ##k.689 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__apply_k321, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.108 1 0)) ((bruijn equal? 14 36) (close _V0iter__apply_k320) 'if (##inline ##vcore.car (bruijn ##expr.108 1 0))) ((bruijn ##k.689 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k320, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k337, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.92 20 1) (bruijn ##k.667 9 0) (##inline ##vcore.cons (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn lamb 4 0) '())) (bruijn ##x.676 0 0)))
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
static void _V0iter__apply_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 22 8) (bruijn ##k.677 0 0) (bruijn fun 21 1) (bruijn x 0 1) #f)
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      _var0,
      VGetArg(upenv, 21-1, 1),
      _var1,
      VEncodeBool(false));
 }
}
static void _V0iter__apply_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 24 38) (close _V0iter__apply_k337) (close _V0iter__apply_lambda93) (##inline ##vcore.cdr (bruijn ##expr.112 9 0)))
    V_CALL(VGetArg(upenv, 24-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k337, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda93, env)}),
      VInlineCdr2(runtime,
        VGetArg(upenv, 9-1, 0)));
 }
}
static void _V0iter__apply_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0iter__apply_k336) (bruijn functions 20 3) (bruijn ##x.679 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k336, env)}),
      VEncodeInt(20l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__apply_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 22 8) (close _V0iter__apply_k335) (##inline ##vcore.cons (bruijn lamb 1 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.114 3 0)) (##inline ##vcore.cons (bruijn ##x.685 0 0) '())) '()))) (bruijn functions 19 3))
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k335, env)}),
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
static void _V0iter__apply_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 18 9) (close _V0iter__apply_k334) (bruijn fun 17 1) (##inline ##vcore.car (bruijn ##expr.115 1 0)))
    V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k334, env)}),
      VGetArg(upenv, 17-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter__apply_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.115 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.115 0 0))) ((bruijn genlambda 17 0) (close _V0iter__apply_k333) (bruijn fun 16 1)) ((bruijn ##k.667 4 0) #f)) ((bruijn ##k.667 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k333, env)}),
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
static void _V0iter__apply_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.114 0 0)) ((close _V0iter__apply_k332) (##inline ##vcore.cdr (bruijn ##expr.114 0 0))) ((bruijn ##k.667 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k332, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.669 0 0) ((close _V0iter__apply_k331) (##inline ##vcore.cdr (bruijn ##expr.113 1 0))) ((bruijn ##k.667 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__apply_k331, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.113 0 0)) ((bruijn equal? 17 36) (close _V0iter__apply_k330) 'lambda (##inline ##vcore.car (bruijn ##expr.113 0 0))) ((bruijn ##k.667 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k330, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.112 1 0)) ((close _V0iter__apply_k329) (##inline ##vcore.car (bruijn ##expr.112 1 0))) ((bruijn ##k.667 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0iter__apply_k329, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k346, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.92 20 1) (bruijn ##k.649 7 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.117 5 0)) (##inline ##vcore.cons (bruijn ##x.659 1 0) (##inline ##vcore.cons (bruijn ##x.661 0 0) '())))))
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
static void _V0iter__apply_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 21 9) (close _V0iter__apply_k346) (bruijn fun 20 1) (##inline ##vcore.car (bruijn ##expr.120 1 0)))
    V_CALL(VGetArg(upenv, 21-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k346, env)}),
      VGetArg(upenv, 20-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter__apply_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k347, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter-atom 22 8) (bruijn ##k.662 1 0) (bruijn ##x.663 0 0) (bruijn val 1 2) #f)
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[2],
      VEncodeBool(false));
 }
}
static void _V0iter__apply_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__apply_lambda95, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda95, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn mangle-symbol 24 16) (close _V0iter__apply_k347) (bruijn x 0 1))
    V_CALL(VGetArg(upenv, 24-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k347, env)}),
      _var1);
 }
}
static void _V0iter__apply_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.120 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.120 0 0))) ((bruijn map 23 38) (close _V0iter__apply_k345) (close _V0iter__apply_lambda95) (##inline ##vcore.car (bruijn ##expr.118 2 0)) (##inline ##vcore.car (bruijn ##expr.119 1 0))) ((bruijn ##k.649 5 0) #f)) ((bruijn ##k.649 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 23-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k345, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda95, env)}),
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
static void _V0iter__apply_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.119 0 0)) ((close _V0iter__apply_k344) (##inline ##vcore.cdr (bruijn ##expr.119 0 0))) ((bruijn ##k.649 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k344, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.118 0 0)) ((close _V0iter__apply_k343) (##inline ##vcore.cdr (bruijn ##expr.118 0 0))) ((bruijn ##k.649 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k343, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.117 0 0)) ((close _V0iter__apply_k342) (##inline ##vcore.cdr (bruijn ##expr.117 0 0))) ((bruijn ##k.649 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__apply_k342, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.650 0 0) ((close _V0iter__apply_k341) (##inline ##vcore.cdr (bruijn ##expr.116 2 0))) ((bruijn ##k.649 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__apply_k341, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.116 1 0)) ((bruijn equal? 18 36) (close _V0iter__apply_k340) 'letrec (##inline ##vcore.car (bruijn ##expr.116 1 0))) ((bruijn ##k.649 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k340, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k351, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 4 1) (bruijn ##k.639 1 0) (bruijn ##expr.126 2 1) (bruijn ##x.640 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.126 1 1))) ((bruijn reverse 25 3) (close _V0loop_k351) (bruijn ##xs.123 1 2)) ((bruijn ##k.639 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k351, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k354, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 7 1) (bruijn ##k.633 2 0) (bruijn ##expr.126 5 1) (bruijn ##x.635 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 28 3) (close _V0loop_k354) (bruijn ##xs.123 4 2))
    V_CALL(VGetArg(upenv, 28-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k354, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.125 0 1) (close _V0loop_k353) (##inline ##vcore.cdr (bruijn ##expr.126 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.126 3 1)) (bruijn ##xs.123 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k353, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 26 35) (bruijn ##k.632 0 0) (close _V0loop_lambda101))
    V_CALL(VGetArg(upenv, 26-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda101, env)}));
 }
}
static void _V0loop_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 25 34) (bruijn ##k.630 1 0) (close _V0loop_lambda100) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 25-1, 34), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda100, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda99, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda99, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k350) (close _V0loop_k352))
    V_CALL_FUNC(_V0loop_k350, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k352, env)}));
 }
}
static void _V0iter__apply_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda99)) ((bruijn loop 0 0) (bruijn ##k.629 1 0) (##inline ##vcore.cdr (bruijn ##expr.121 4 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda99, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V0iter__apply_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 35) (bruijn ##k.628 0 0) (close _V0iter__apply_lambda98))
    V_CALL(VGetArg(upenv, 21-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda98, env)}));
 }
}
static void _V0iter__apply_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k357, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.92 19 1) (bruijn ##k.642 3 0) (bruijn ##x.644 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0iter__apply_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 23 8) (close _V0iter__apply_k357) (bruijn ##x.645 1 0) (bruijn ##x.646 0 0))
    V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k357, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0iter__apply_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 20 8) (bruijn ##k.647 0 0) (bruijn fun 19 1) (bruijn x 0 1) #f)
    V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      _var0,
      VGetArg(upenv, 19-1, 1),
      _var1,
      VEncodeBool(false));
 }
}
static void _V0iter__apply_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 22 38) (close _V0iter__apply_k356) (close _V0iter__apply_lambda103) (bruijn xs 1 2))
    V_CALL(VGetArg(upenv, 22-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k356, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda103, env)}),
      upenv->vars[2]);
 }
}
static void _V0iter__apply_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__apply_lambda102, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda102, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((bruijn iter-atom 18 8) (close _V0iter__apply_k355) (bruijn fun 17 1) (##inline ##vcore.car (bruijn ##expr.121 2 0)) #t) ((bruijn ##k.642 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k355, env)}),
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
static void _V0iter__apply_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.121 1 0)) ((bruijn call-with-values 20 34) (bruijn ##k.627 0 0) (close _V0iter__apply_lambda97) (close _V0iter__apply_lambda102)) ((bruijn ##k.627 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 20-1, 34), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda97, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda102, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k358, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 20 14) (bruijn ##k.618 15 0) (##string ##string.872))
    V_CALL(VGetArg(upenv, 20-1, 14), runtime,
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V10string_D872.sym, VPOINTER_OTHER));
 }
}
static void _V0iter__apply_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda96" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k349) (close _V0iter__apply_k358))
    V_CALL_FUNC(_V0iter__apply_k349, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k358, env)}));
 }
}
static void _V0iter__apply_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda96) (bruijn ##input.93 12 0))
    V_CALL_FUNC(_V0iter__apply_lambda96, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0iter__apply_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda94" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k339) (close _V0iter__apply_k348))
    V_CALL_FUNC(_V0iter__apply_k339, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k348, env)}));
 }
}
static void _V0iter__apply_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda94) (bruijn ##input.93 10 0))
    V_CALL_FUNC(_V0iter__apply_lambda94, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0iter__apply_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda92" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k328) (close _V0iter__apply_k338))
    V_CALL_FUNC(_V0iter__apply_k328, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k338, env)}));
 }
}
static void _V0iter__apply_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda92) (bruijn ##input.93 8 0))
    V_CALL_FUNC(_V0iter__apply_lambda92, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0iter__apply_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda91" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k319) (close _V0iter__apply_k327))
    V_CALL_FUNC(_V0iter__apply_k319, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k327, env)}));
 }
}
static void _V0iter__apply_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda91) (bruijn ##input.93 6 0))
    V_CALL_FUNC(_V0iter__apply_lambda91, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0iter__apply_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda90" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k308) (close _V0iter__apply_k318))
    V_CALL_FUNC(_V0iter__apply_k308, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k318, env)}));
 }
}
static void _V0iter__apply_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda90) (bruijn ##input.93 4 0))
    V_CALL_FUNC(_V0iter__apply_lambda90, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0iter__apply_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda89" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k295) (close _V0iter__apply_k307))
    V_CALL_FUNC(_V0iter__apply_k295, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k307, env)}));
 }
}
static void _V0iter__apply_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda89) (bruijn ##input.93 2 0))
    V_CALL_FUNC(_V0iter__apply_lambda89, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0iter__apply_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda88" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k285) (close _V0iter__apply_k294))
    V_CALL_FUNC(_V0iter__apply_k285, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k294, env)}));
 }
}
static void _V0iter__apply_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda87" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda88) (bruijn ##input.93 0 0))
    V_CALL_FUNC(_V0iter__apply_lambda88, env, runtime,
      _var0);
 }
}
static void _V0iter__apply_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__apply_lambda87) (bruijn expr 1 2))
    V_CALL_FUNC(_V0iter__apply_lambda87, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0iter__apply_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__apply_lambda85, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda85, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 4 35) (bruijn ##k.617 0 0) (close _V0iter__apply_lambda86))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda86, env)}));
 }
}
static void _V0iter_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k360, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.799 0 0) ((bruijn ##kk.127 4 1) (bruijn ##k.798 1 0) (bruijn expr 5 2)) ((bruijn ##k.798 1 0) #f))
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
static void _V0iter_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.129 1 0)) ((bruijn equal? 8 36) (close _V0iter_k360) 'bruijn (##inline ##vcore.car (bruijn ##expr.129 1 0))) ((bruijn ##k.798 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k360, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k364, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.127 7 1) (bruijn ##k.793 2 0) (bruijn ##x.795 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.794 0 0) ((bruijn iter-atom 8 8) (close _V0iter_k364) (bruijn fun 7 1) (bruijn expr 7 2) #f) ((bruijn ##k.793 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k364, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.130 1 0)) ((bruijn equal? 10 36) (close _V0iter_k363) 'lambda (##inline ##vcore.car (bruijn ##expr.130 1 0))) ((bruijn ##k.793 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k363, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k368, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.127 9 1) (bruijn ##k.788 2 0) (bruijn ##x.790 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.789 0 0) ((bruijn iter-atom 10 8) (close _V0iter_k368) (bruijn fun 9 1) (bruijn expr 9 2) #f) ((bruijn ##k.788 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k368, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.131 1 0)) ((bruijn equal? 12 36) (close _V0iter_k367) 'case-lambda (##inline ##vcore.car (bruijn ##expr.131 1 0))) ((bruijn ##k.788 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k367, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k372, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.127 11 1) (bruijn ##k.783 2 0) (bruijn ##x.785 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.784 0 0) ((bruijn iter-atom 12 8) (close _V0iter_k372) (bruijn fun 11 1) (bruijn expr 11 2) #f) ((bruijn ##k.783 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k372, env)}),
      VGetArg(upenv, 11-1, 1),
      VGetArg(upenv, 11-1, 2),
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.132 1 0)) ((bruijn equal? 14 36) (close _V0iter_k371) 'continuation (##inline ##vcore.car (bruijn ##expr.132 1 0))) ((bruijn ##k.783 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k371, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k376, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.127 13 1) (bruijn ##k.778 2 0) (bruijn ##x.780 0 0))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.779 0 0) ((bruijn iter-atom 14 8) (close _V0iter_k376) (bruijn fun 13 1) (bruijn expr 13 2) #f) ((bruijn ##k.778 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k376, env)}),
      VGetArg(upenv, 13-1, 1),
      VGetArg(upenv, 13-1, 2),
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.133 1 0)) ((bruijn equal? 16 36) (close _V0iter_k375) 'quote (##inline ##vcore.car (bruijn ##expr.133 1 0))) ((bruijn ##k.778 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k375, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k380, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.127 15 1) (bruijn ##k.773 2 0) (bruijn ##x.775 0 0))
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.774 0 0) ((bruijn iter-atom 16 8) (close _V0iter_k380) (bruijn fun 15 1) (bruijn expr 15 2) #f) ((bruijn ##k.773 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k380, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 15-1, 2),
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.134 1 0)) ((bruijn equal? 18 36) (close _V0iter_k379) '##inline (##inline ##vcore.car (bruijn ##expr.134 1 0))) ((bruijn ##k.773 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k379, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k383, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.127 16 1) (bruijn ##k.770 1 0) (bruijn ##x.771 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0iter_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.135 1 0)) ((bruijn iter-apply 17 9) (close _V0iter_k383) (bruijn fun 16 1) (bruijn expr 16 2)) ((bruijn ##k.770 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k383, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 16-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k385, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.127 16 1) (bruijn ##k.760 16 0) (bruijn ##x.768 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 16-1, 0),
      _var0);
 }
}
static void _V0iter_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 17 8) (close _V0iter_k385) (bruijn fun 16 1) (bruijn expr 16 2) #f)
    V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k385, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 16-1, 2),
      VEncodeBool(false));
 }
}
static void _V0iter_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda113" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k382) (close _V0iter_k384))
    V_CALL_FUNC(_V0iter_k382, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k384, env)}));
 }
}
static void _V0iter_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda113) (bruijn ##input.128 12 0))
    V_CALL_FUNC(_V0iter_lambda113, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0iter_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda112" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k378) (close _V0iter_k381))
    V_CALL_FUNC(_V0iter_k378, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k381, env)}));
 }
}
static void _V0iter_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda112) (bruijn ##input.128 10 0))
    V_CALL_FUNC(_V0iter_lambda112, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0iter_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda111" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k374) (close _V0iter_k377))
    V_CALL_FUNC(_V0iter_k374, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k377, env)}));
 }
}
static void _V0iter_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda111) (bruijn ##input.128 8 0))
    V_CALL_FUNC(_V0iter_lambda111, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0iter_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda110" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k370) (close _V0iter_k373))
    V_CALL_FUNC(_V0iter_k370, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k373, env)}));
 }
}
static void _V0iter_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda110) (bruijn ##input.128 6 0))
    V_CALL_FUNC(_V0iter_lambda110, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0iter_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda109" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k366) (close _V0iter_k369))
    V_CALL_FUNC(_V0iter_k366, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k369, env)}));
 }
}
static void _V0iter_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda109) (bruijn ##input.128 4 0))
    V_CALL_FUNC(_V0iter_lambda109, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0iter_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda108" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k362) (close _V0iter_k365))
    V_CALL_FUNC(_V0iter_k362, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k365, env)}));
 }
}
static void _V0iter_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda108) (bruijn ##input.128 2 0))
    V_CALL_FUNC(_V0iter_lambda108, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0iter_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda107" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k359) (close _V0iter_k361))
    V_CALL_FUNC(_V0iter_k359, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k361, env)}));
 }
}
static void _V0iter_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda106" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda107) (bruijn ##input.128 0 0))
    V_CALL_FUNC(_V0iter_lambda107, env, runtime,
      _var0);
 }
}
static void _V0iter_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda106) (bruijn expr 1 2))
    V_CALL_FUNC(_V0iter_lambda106, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0iter_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter_lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda104, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda104, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 4 35) (bruijn ##k.759 0 0) (close _V0iter_lambda105))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda105, env)}));
 }
}
static void _V0iter__declare_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k387, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.818 0 0) ((bruijn ##kk.136 4 1) (bruijn ##k.817 1 0) (bruijn d 5 1)) ((bruijn ##k.817 1 0) #f))
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
static void _V0iter__declare_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.138 1 0)) ((bruijn equal? 8 36) (close _V0iter__declare_k387) '##foreign.declare (##inline ##vcore.car (bruijn ##expr.138 1 0))) ((bruijn ##k.817 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k387, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__declare_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k396, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.136 12 1) (bruijn ##k.806 7 0) (bruijn ##x.811 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0iter__declare_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 16 37) (close _V0iter__declare_k396) '##vcore.declare (bruijn f 3 0) (bruijn ##x.812 0 0))
    V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k396, env)}),
      _V10vcore_Ddeclare,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0iter__declare_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 15 15) (close _V0iter__declare_k395) (bruijn ##x.813 0 0))
    V_CALL(VGetArg(upenv, 15-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k395, env)}),
      _var0);
 }
}
static void _V0iter__declare_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.141 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.141 0 0))) ((bruijn iter 11 10) (close _V0iter__declare_k394) (bruijn f 1 0) (##inline ##vcore.car (bruijn ##expr.141 0 0))) ((bruijn ##k.806 4 0) #f)) ((bruijn ##k.806 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 11-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k394, env)}),
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
static void _V0iter__declare_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__declare_k393) (##inline ##vcore.cdr (bruijn ##expr.140 1 0)))
    V_CALL_FUNC(_V0iter__declare_k393, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter__declare_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.140 0 0)) ((close _V0iter__declare_k392) (##inline ##vcore.car (bruijn ##expr.140 0 0))) ((bruijn ##k.806 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__declare_k392, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__declare_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.807 0 0) ((close _V0iter__declare_k391) (##inline ##vcore.cdr (bruijn ##expr.139 2 0))) ((bruijn ##k.806 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__declare_k391, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__declare_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.139 1 0)) ((bruijn equal? 10 36) (close _V0iter__declare_k390) '##vcore.declare (##inline ##vcore.car (bruijn ##expr.139 1 0))) ((bruijn ##k.806 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k390, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__declare_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k397, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 10 14) (bruijn ##k.802 5 0) (##string ##string.872))
    V_CALL(VGetArg(upenv, 10-1, 14), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D872.sym, VPOINTER_OTHER));
 }
}
static void _V0iter__declare_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda118" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__declare_k389) (close _V0iter__declare_k397))
    V_CALL_FUNC(_V0iter__declare_k389, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k397, env)}));
 }
}
static void _V0iter__declare_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__declare_lambda118) (bruijn ##input.137 2 0))
    V_CALL_FUNC(_V0iter__declare_lambda118, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0iter__declare_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda117" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__declare_k386) (close _V0iter__declare_k388))
    V_CALL_FUNC(_V0iter__declare_k386, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k388, env)}));
 }
}
static void _V0iter__declare_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda116" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__declare_lambda117) (bruijn ##input.137 0 0))
    V_CALL_FUNC(_V0iter__declare_lambda117, env, runtime,
      _var0);
 }
}
static void _V0iter__declare_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__declare_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__declare_lambda116) (bruijn d 1 1))
    V_CALL_FUNC(_V0iter__declare_lambda116, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0iter__declare_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__declare_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 35) (bruijn ##k.801 0 0) (close _V0iter__declare_lambda115))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_lambda115, env)}));
 }
}
static void _V0make__list_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__list_k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k400, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 7 8) (bruijn ##k.820 3 0) (bruijn k 3 2) (bruijn ##x.822 0 0))
    V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2],
      _var0);
 }
}
static void _V0make__list_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__list_k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-list 3 12) (close _V0make__list_k400) (bruijn ##x.823 0 0) (bruijn k 2 2))
    V_CALL(upenv->up->up->vars[12], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k400, env)}),
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V0make__list_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__list_k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.821 0 0) ((bruijn ##k.820 1 0) '()) ((bruijn - 5 11) (close _V0make__list_k399) (bruijn n 1 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k399, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0make__list_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0make__list_lambda119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0make__list_lambda119, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_lambda119, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn = 4 12) (close _V0make__list_k398) 0 (bruijn n 0 1))
    V_CALL(upenv->up->up->up->vars[12], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k398, env)}),
      VEncodeInt(0l),
      _var1);
 }
}
static void _V0list__set_B_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__set_B_k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k403, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list-set! 4 13) (bruijn ##k.824 3 0) (bruijn ##x.826 1 0) (bruijn ##x.827 0 0) (bruijn v 3 3))
    V_CALL(upenv->up->up->up->vars[13], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0,
      upenv->up->up->vars[3]);
 }
}
static void _V0list__set_B_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__set_B_k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 6 11) (close _V0list__set_B_k403) (bruijn x 2 2) 1)
    V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k403, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0list__set_B_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__set_B_k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.825 0 0) ((bruijn set-car! 5 13) (bruijn ##k.824 1 0) (bruijn l 1 1) (bruijn v 1 3)) ((bruijn cdr 5 10) (close _V0list__set_B_k402) (bruijn l 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 13), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k402, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0list__set_B_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0list__set_B_lambda120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0list__set_B_lambda120, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_lambda120, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn = 4 12) (close _V0list__set_B_k401) (bruijn x 0 2) 0)
    V_CALL(upenv->up->up->up->vars[12], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k401, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0loop_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k405, runtime, upenv, 1, argc, _var0) {
  // ((bruijn apply 8 5) (bruijn ##k.829 2 0) (bruijn values 8 4) (bruijn ##x.831 0 0))
    V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 4),
      _var0);
 }
}
static void _V0loop_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k412, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 9 0) (bruijn ##k.829 8 0) (bruijn ret 8 1) (bruijn ##x.833 0 0))
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 8-1, 1),
      _var0);
 }
}
static void _V0loop_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 13 10) (close _V0loop_k412) (bruijn l 7 2))
    V_CALL(VGetArg(upenv, 13-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k412, env)}),
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V0loop_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list-set! 9 13) (close _V0loop_k411) (bruijn ret 6 1) (bruijn split 3 0) (bruijn ##x.834 0 0))
    V_CALL(VGetArg(upenv, 9-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k411, env)}),
      VGetArg(upenv, 6-1, 1),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 8) (close _V0loop_k410) (bruijn ##x.835 1 0) (bruijn ##x.836 0 0))
    V_CALL(VGetArg(upenv, 11-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k410, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list-ref 10 9) (close _V0loop_k409) (bruijn ret 4 1) (bruijn split 1 0))
    V_CALL(VGetArg(upenv, 10-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k409, env)}),
      upenv->up->up->up->vars[1],
      upenv->vars[0]);
 }
}
static void _V0loop_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 9 7) (close _V0loop_k408) (bruijn l 3 2))
    V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k408, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0loop_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn f 4 1) (close _V0loop_k407) (bruijn ##x.837 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k407, env)}),
      _var0);
 }
}
static void _V0loop_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.830 0 0) ((bruijn map 7 38) (close _V0loop_k405) (bruijn reverse 7 3) (bruijn ret 1 1)) ((bruijn car 7 7) (close _V0loop_k406) (bruijn l 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k405, env)}),
      VGetArg(upenv, 7-1, 3),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k406, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0loop_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda122, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda122, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 6 6) (close _V0loop_k404) (bruijn l 0 2))
    V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k404, env)}),
      _var2);
 }
}
static void _V0multi__partition_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0multi__partition_k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0multi__partition_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_k413, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.828 2 0) (bruijn ##x.838 0 0) (bruijn l 2 3))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[3]);
 }
}
static void _V0multi__partition_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0multi__partition_lambda121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0multi__partition_lambda121, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_lambda121, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V0loop_lambda122)) ((bruijn make-list 2 12) (close _V0multi__partition_k413) (bruijn n 1 2) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda122, env)});
    V_CALL(upenv->up->vars[12], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0multi__partition_k413, env)}),
      upenv->vars[2],
      VNULL);
    }
 }
}
static void _V0to__functions_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k415, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.850 0 0) ((bruijn ##kk.58 4 1) (bruijn ##k.849 1 0) 1) ((bruijn ##k.849 1 0) #f))
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
static void _V0to__functions_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.60 1 0)) ((bruijn equal? 9 36) (close _V0to__functions_k415) '##foreign.declare (##inline ##vcore.car (bruijn ##expr.60 1 0))) ((bruijn ##k.849 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k415, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0to__functions_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k418, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.846 0 0) ((bruijn ##kk.58 6 1) (bruijn ##k.845 1 0) 1) ((bruijn ##k.845 1 0) #f))
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
static void _V0to__functions_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.61 1 0)) ((bruijn equal? 11 36) (close _V0to__functions_k418) '##vcore.declare (##inline ##vcore.car (bruijn ##expr.61 1 0))) ((bruijn ##k.845 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k418, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0to__functions_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k419, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.58 5 1) (bruijn ##k.841 5 0) 0)
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(0l));
 }
}
static void _V0to__functions_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_lambda128" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0to__functions_k417) (close _V0to__functions_k419))
    V_CALL_FUNC(_V0to__functions_k417, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k419, env)}));
 }
}
static void _V0to__functions_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0to__functions_lambda128) (bruijn ##input.59 2 0))
    V_CALL_FUNC(_V0to__functions_lambda128, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0to__functions_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_lambda127" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0to__functions_k414) (close _V0to__functions_k416))
    V_CALL_FUNC(_V0to__functions_k414, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k416, env)}));
 }
}
static void _V0to__functions_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_lambda126" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0to__functions_lambda127) (bruijn ##input.59 0 0))
    V_CALL_FUNC(_V0to__functions_lambda127, env, runtime,
      _var0);
 }
}
static void _V0to__functions_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__functions_lambda125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__functions_lambda126) (bruijn e 1 1))
    V_CALL_FUNC(_V0to__functions_lambda126, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0to__functions_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__functions_lambda124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda124, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 5 35) (bruijn ##k.840 0 0) (close _V0to__functions_lambda125))
    V_CALL(VGetArg(upenv, 5-1, 35), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda125, env)}));
 }
}
static void _V0to__functions_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_lambda123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_lambda123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn multi-partition 1 14) (bruijn ##k.839 0 0) (close _V0to__functions_lambda124) 2 (bruijn exprs 2 1))
    V_CALL(upenv->vars[14], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda124, env)}),
      VEncodeInt(2l),
      upenv->up->vars[1]);
 }
}
static void _V0to__functions_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__functions_lambda130" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn list 7 37) (bruijn ##k.852 3 0) (bruijn literal-table 4 4) (bruijn foreign-functions 4 2) (bruijn functions 4 3) (bruijn declares 0 1) (bruijn toplevels 0 0))
    V_CALL(VGetArg(upenv, 7-1, 37), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->up->vars[4],
      upenv->up->up->up->vars[2],
      upenv->up->up->up->vars[3],
      _var1,
      _var0);
 }
}
static void _V0to__functions_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0to__functions_lambda130) (bruijn ##x.853 1 0) (bruijn ##x.854 0 0))
    V_CALL_FUNC(_V0to__functions_lambda130, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0to__functions_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 5 38) (close _V0to__functions_k421) (bruijn iter-declare 2 11) (bruijn declares 1 2))
    V_CALL(VGetArg(upenv, 5-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k421, env)}),
      upenv->up->vars[11],
      upenv->vars[2]);
 }
}
static void _V0to__functions_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__functions_lambda131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 2 10) (bruijn ##k.855 0 0) (##string ##string.873) (bruijn e 0 1))
    V_CALL(upenv->up->vars[10], runtime,
      _var0,
      VEncodePointer(&_V10string_D873.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0to__functions_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0to__functions_lambda129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0to__functions_lambda129, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda129, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn map 4 38) (close _V0to__functions_k420) (close _V0to__functions_lambda131) (bruijn globals 0 1))
    V_CALL(upenv->up->up->up->vars[38], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k420, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda131, env)}),
      _var1);
 }
}
static void _V0to__functions_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0to__functions_lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0to__functions_lambda61, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda61, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 15 ((close _V0genlambda_lambda62) (close _V0gencont_lambda63) '() '() '() (close _V0lift__intrinsic_lambda64) (close _V0lift__literal_lambda65) (close _V0iter__lambda_lambda66) (close _V0iter__atom_lambda71) (close _V0iter__apply_lambda85) (close _V0iter_lambda104) (close _V0iter__declare_lambda114) (close _V0make__list_lambda119) (close _V0list__set_B_lambda120) (close _V0multi__partition_lambda121)) ((bruijn call-with-values 3 34) (bruijn ##k.435 1 0) (close _V0to__functions_lambda123) (close _V0to__functions_lambda129)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[15]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 15, 15, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_lambda62, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_lambda63, env)});
    env->vars[2] = VNULL;
    env->vars[3] = VNULL;
    env->vars[4] = VNULL;
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_lambda64, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_lambda65, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_lambda66, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda71, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda85, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda104, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_lambda114, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_lambda119, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_lambda120, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0multi__partition_lambda121, env)});
    V_CALL(upenv->up->up->vars[34], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda123, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda129, env)}));
    }
 }
}
static void _V0vanity_V0compiler_V0lower_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 5 ((close _V0list__index_lambda3) (close _V0bruijn__ify_lambda5) 0 0 (close _V0to__functions_lambda61)) ((bruijn ##k.143 49 0) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn-ify (bruijn bruijn-ify 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'to-functions (bruijn to-functions 0 4)) '()))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[5]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 5, 5, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__index_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_lambda5, env)});
    env->vars[2] = VEncodeInt(0l);
    env->vars[3] = VEncodeInt(0l);
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda61, env)});
    V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bruijn__ify,
        env->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0to__functions,
        env->vars[4]),
        VNULL)));
    }
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0lower_V20_lambda2) (bruijn ##x.144 38 0) (bruijn ##x.145 37 0) (bruijn ##x.146 36 0) (bruijn ##x.147 35 0) (bruijn ##x.148 34 0) (bruijn ##x.149 33 0) (bruijn ##x.150 32 0) (bruijn ##x.151 31 0) (bruijn ##x.152 30 0) (bruijn ##x.153 29 0) (bruijn ##x.154 28 0) (bruijn ##x.155 27 0) (bruijn ##x.156 26 0) (bruijn ##x.157 25 0) (bruijn ##x.158 24 0) (bruijn ##x.159 23 0) (bruijn ##x.160 22 0) (bruijn ##x.161 21 0) (bruijn ##x.162 20 0) (bruijn ##x.163 19 0) (bruijn ##x.164 18 0) (bruijn ##x.165 17 0) (bruijn ##x.166 16 0) (bruijn ##x.167 15 0) (bruijn ##x.168 14 0) (bruijn ##x.169 13 0) (bruijn ##x.170 12 0) (bruijn ##x.171 11 0) (bruijn ##x.172 10 0) (bruijn ##x.173 9 0) (bruijn ##x.174 8 0) (bruijn ##x.175 7 0) (bruijn ##x.176 6 0) (bruijn ##x.177 5 0) (bruijn ##x.178 4 0) (bruijn ##x.179 3 0) (bruijn ##x.180 2 0) (bruijn ##x.181 1 0) (bruijn ##x.182 0 0))
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
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 38 0) (close _V0vanity_V0compiler_V0lower_V20_k47) 'map)
    V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k47, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 37 0) (close _V0vanity_V0compiler_V0lower_V20_k46) 'list)
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k46, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 36 0) (close _V0vanity_V0compiler_V0lower_V20_k45) 'equal?)
    V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k45, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 35 0) (close _V0vanity_V0compiler_V0lower_V20_k44) 'call/cc)
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k44, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 34 0) (close _V0vanity_V0compiler_V0lower_V20_k43) 'call-with-values)
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k43, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 33 0) (close _V0vanity_V0compiler_V0lower_V20_k42) '+)
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k42, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 32 0) (close _V0vanity_V0compiler_V0lower_V20_k41) 'string->symbol)
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k41, env)}),
      _V0string___Gsymbol);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 31 0) (close _V0vanity_V0compiler_V0lower_V20_k40) 'sprintf)
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k40, env)}),
      _V0sprintf);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 0) (close _V0vanity_V0compiler_V0lower_V20_k39) 'compiler-error)
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k39, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close _V0vanity_V0compiler_V0lower_V20_k38) 'assv)
    V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k38, env)}),
      _V0assv);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close _V0vanity_V0compiler_V0lower_V20_k37) 'string?)
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k37, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0lower_V20_k36) 'gensym)
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k36, env)}),
      _V0gensym);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0lower_V20_k35) 'cdar)
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k35, env)}),
      _V0cdar);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0lower_V20_k34) 'eq?)
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k34, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0lower_V20_k33) 'char?)
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k33, env)}),
      _V0char_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0lower_V20_k32) 'number?)
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k32, env)}),
      _V0number_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0lower_V20_k31) 'integer?)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k31, env)}),
      _V0integer_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0lower_V20_k30) 'assoc)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k30, env)}),
      _V0assoc);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0lower_V20_k29) 'mangle-foreign-function)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k29, env)}),
      _V0mangle__foreign__function);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0lower_V20_k28) 'lookup-intrinsic-name)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k28, env)}),
      _V0lookup__intrinsic__name);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0lower_V20_k27) 'not)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k27, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0lower_V20_k26) 'symbol?)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k26, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0lower_V20_k25) 'mangle-symbol)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k25, env)}),
      _V0mangle__symbol);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0lower_V20_k24) 'cadr)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k24, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0lower_V20_k23) 'error)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k23, env)}),
      _V0error);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0lower_V20_k22) 'set-car!)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k22, env)}),
      _V0set__car_B);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0lower_V20_k21) '=)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k21, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0lower_V20_k20) '-)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k20, env)}),
      _V0__);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0lower_V20_k19) 'cdr)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k19, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0lower_V20_k18) 'list-ref)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k18, env)}),
      _V0list__ref);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0lower_V20_k17) 'cons)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k17, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0lower_V20_k16) 'car)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k16, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0lower_V20_k15) 'null?)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k15, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0lower_V20_k14) 'apply)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k14, env)}),
      _V0apply);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0lower_V20_k13) 'values)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k13, env)}),
      _V0values);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0lower_V20_k12) 'reverse)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k12, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0lower_V20_k11) 'eqv?)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k11, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0lower_V20_k10) 'pair?)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k10, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0lower_V20_k9) 'length)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k9, env)}),
      _V0length);
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0lower_V20_k8) (##string ##string.874) (bruijn ##x.859 6 0) (bruijn ##x.860 5 0) (bruijn ##x.861 4 0) (bruijn ##x.862 3 0) (bruijn ##x.863 2 0) (bruijn ##x.864 1 0) (bruijn ##x.865 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k8, env)}),
      VEncodePointer(&_V10string_D874.sym, VPOINTER_OTHER),
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
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k7) (##string ##string.875))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k7, env)}),
      VEncodePointer(&_V10string_D875.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k6) (##string ##string.876))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k6, env)}),
      VEncodePointer(&_V10string_D876.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k5) (##string ##string.877))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k5, env)}),
      VEncodePointer(&_V10string_D877.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k4) (##string ##string.878))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k4, env)}),
      VEncodePointer(&_V10string_D878.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k3) (##string ##string.879))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k3, env)}),
      VEncodePointer(&_V10string_D879.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k2) (##string ##string.880))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k2, env)}),
      VEncodePointer(&_V10string_D880.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0lower_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0lower_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0lower_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0lower_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_k1) (##string ##string.881))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_k1, env)}),
      VEncodePointer(&_V10string_D881.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0lower_V20 = (VFunc)_V0vanity_V0compiler_V0lower_V20_lambda1;
