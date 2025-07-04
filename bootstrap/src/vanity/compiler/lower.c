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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1761 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1759 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1758 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1757 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1756 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1755 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1754 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0mangle__qualified__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0mangle__qualified__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "mangle-qualified-function" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0to__functions;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0to__functions = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "to-functions" };
VWEAK VWORD _V0bruijn__ify;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0bruijn__ify = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "bruijn-ify" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1753 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "global" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1752 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "to-functions iter-apply match statement exhausted" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1751 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1750 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "literal-lifting: unknown literal type" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1749 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "string" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1748 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A_V0k~A" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1747 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "~A_V0lambda~A" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1746 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "bruijnify-pass: No matching case" };
VWEAK VWORD _V10qualified__call;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10qualified__call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##qualified-call" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0basic__block;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0basic__block = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "basic-block" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1745 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "bruijnify-pass: No matching lambda" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static __attribute__((constructor)) void VDllMain1() {
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VLookupConstant("_V0num__pairs", &_VW_V0num__pairs), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VLookupConstant("_V0split__at__right", &_VW_V0split__at__right), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VLookupConstant("_V0list__ref", &_VW_V0list__ref), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VLookupConstant("_V0mangle__symbol", &_VW_V0mangle__symbol), VPOINTER_OTHER);
  _V0mangle__qualified__function = VEncodePointer(VLookupConstant("_V0mangle__qualified__function", &_VW_V0mangle__qualified__function), VPOINTER_OTHER);
  _V0mangle__foreign__function = VEncodePointer(VLookupConstant("_V0mangle__foreign__function", &_VW_V0mangle__foreign__function), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VLookupConstant("_V0lookup__intrinsic__name", &_VW_V0lookup__intrinsic__name), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VLookupConstant("_V0number_Q", &_VW_V0number_Q), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VLookupConstant("_V0assoc", &_VW_V0assoc), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
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
  _V10qualified__call = VEncodePointer(VLookupConstant("_V10qualified__call", &_VW_V10qualified__call), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VLookupConstant("_V10inline", &_VW_V10inline), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0basic__block = VEncodePointer(VLookupConstant("_V0basic__block", &_VW_V0basic__block), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VLookupConstant("_V0continuation", &_VW_V0continuation), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VLookupConstant("_V10qualified__case__lambda", &_VW_V10qualified__case__lambda), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VLookupConstant("_V10qualified__lambda", &_VW_V10qualified__lambda), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VLookupConstant("_V0bruijn", &_VW_V0bruijn), VPOINTER_OTHER);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D440, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D257, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D249, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0list__index, _var0, _var1, _var2);
void _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D249_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D249_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.707 0 0) ((bruijn ##.k.705 1 0) (bruijn ##.i.251 1 2)) (basic-block 1 1 (##.reg.1728) ((##vcore.+ (bruijn ##.i.251 2 2) 1)) (##qualified-call (vanity compiler lower list-index ##.loop.249) (bruijn ##.loop.249 3 0) (bruijn ##.k.705 2 0) (##inline ##vcore.cdr (bruijn ##.l.250 2 1)) (bruijn ##.reg.1728 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D249(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D249, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.l.250 0 1)) ((bruijn ##.k.705 0 0) #f) ((bruijn ##.p.247 2 1) (close _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D249_V0k31) (##inline ##vcore.car (bruijn ##.l.250 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D249_V0k31, self)))),
      VInlineCar2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0list__index(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0list__index, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D249")) (##qualified-call (vanity compiler lower list-index ##.loop.249) (bruijn ##.loop.249 0 0) (bruijn ##.k.704 1 0) (bruijn ##.l.248 1 2) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D249, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D249(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.6.261 0 0) ((bruijn ##.x.689 19 0) (bruijn ##.k.712 1 0) 'bruijn (bruijn ##.x.260 1 3) (bruijn ##.depth.258 1 1) (bruijn ##.x.6.261 0 0)) (basic-block 1 1 (##.reg.1729) ((##vcore.+ 1 (bruijn ##.depth.258 2 1))) (##qualified-call (vanity compiler lower bruijn-ify ##.lookup.253) (bruijn ##.lookup.253 3 0) (bruijn ##.k.712 2 0) (bruijn ##.reg.1729 0 0) (##inline ##vcore.cdr (bruijn ##.env.259 2 2)) (bruijn ##.x.260 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 5,
      statics->vars[0],
      _V0bruijn,
      statics->vars[3],
      statics->vars[1],
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    VWORD _arg3 = 
      statics->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.716 0 0) (bruijn ##.x.260 1 3) (bruijn ##.e.263 0 1))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      statics->vars[3],
      _var1);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.env.259 0 2)) ((bruijn ##.k.712 0 0) (bruijn ##.x.260 0 3)) (##qualified-call (vanity compiler lower list-index) (bruijn ##.list-index.242 3 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253_V0k32) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253_V0lambda2) (##inline ##vcore.car (bruijn ##.env.259 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253_V0k32, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253_V0lambda2, self))));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        _var2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0list__index(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.718 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.264 1 1)) (bruijn ##.x.721 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.264 0 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.254) (bruijn ##.undot.254 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254_V0k33) (##inline ##vcore.cdr (bruijn ##.lst.264 0 1))) (if (##inline ##vcore.null? (bruijn ##.lst.264 0 1)) ((bruijn ##.k.718 0 0) '()) ((bruijn ##.k.718 0 0) (##inline ##vcore.cons (bruijn ##.lst.264 0 1) '()))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254_V0k33, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var1,
        VNULL));
}
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.12.271 4 1) (bruijn ##.k.755 1 0) (bruijn ##.expr.14.273 2 1) (bruijn ##.x.756 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.14.273 1 1))) ((bruijn ##.x.686 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k36) (bruijn ##.xs.11.274 1 2)) ((bruijn ##.k.755 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k36, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.12.271 7 1) (bruijn ##.k.749 2 0) (bruijn ##.expr.14.273 5 1) (bruijn ##.x.751 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.686 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k39) (bruijn ##.xs.11.274 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k39, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.13.275 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k38) (##inline ##vcore.cdr (bruijn ##.expr.14.273 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.14.273 3 1)) (bruijn ##.xs.11.274 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k38, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.748 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0lambda7))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0lambda7, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.746 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0lambda6) (bruijn ##.loop.272 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0lambda6, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k35) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k37))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k35, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272_V0k37, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.255 ##.loop.272) (bruijn ##.loop.272 0 0) (bruijn ##.k.745 1 0) (##inline ##vcore.car (bruijn ##.lamb.266 5 2)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2));
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V10_Dloop_D272(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.744 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda5))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda5, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.762 0 0) (bruijn ##.k.758 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.763 2 0) (##inline ##vcore.cons (bruijn ##.x.764 1 0) (##inline ##vcore.cons (bruijn ##.x.766 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 7 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k43) (##inline ##vcore.cons (bruijn ##.xs.278 3 2) (bruijn ##.env.265 6 1)) (##inline ##vcore.car (bruijn ##.expr.15.279 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k43, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        VGetArg(statics, 6-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.687 25 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k42) (bruijn ##.xs.278 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k42, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.279 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.15.279 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k41) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda9) (bruijn ##.kk.7.267 3 1)) ((bruijn ##.k.758 1 0) #f)) ((bruijn ##.k.758 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda9, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.277 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k40) (##inline ##vcore.cdr (bruijn ##.lamb.266 3 2))) ((bruijn ##.k.758 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k40, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.266 2 2)) (##vcore.call-with-values (bruijn ##.k.743 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda8)) ((bruijn ##.k.743 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda4, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda8, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.733 0 0) (bruijn ##.k.730 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.734 4 0) (##inline ##vcore.cons (bruijn ##.reg.1730 1 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.738 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1730) ((##vcore.- (bruijn ##.x.740 1 0) 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 9 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k50) (##inline ##vcore.cons (bruijn ##.proper-xs.285 2 0) (bruijn ##.env.265 8 1)) (##inline ##vcore.car (bruijn ##.expr.17.283 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k50, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.687 26 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k49) (bruijn ##.proper-xs.285 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k49, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.254) (bruijn ##.undot.254 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k48) (##inline ##vcore.car (bruijn ##.lamb.266 5 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k48, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.283 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.17.283 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k47) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda10) (bruijn ##.kk.7.267 3 1)) ((bruijn ##.k.730 1 0) #f)) ((bruijn ##.k.730 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda10, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.266 3 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k46) (##inline ##vcore.cdr (bruijn ##.lamb.266 3 2))) ((bruijn ##.k.730 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k46, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.688 23 0) (bruijn ##.k.728 0 0) (##string ##.string.1745))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1745.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.725 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda11) (bruijn ##.kk.7.267 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda11, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k45) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k51))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k51, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k34) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k44))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0k44, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.724 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255_V0lambda3, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.24.293 4 1) (bruijn ##.k.1062 1 0) (bruijn ##.expr.26.295 2 1) (bruijn ##.x.1063 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.26.295 1 1))) ((bruijn ##.x.686 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k56) (bruijn ##.xs.23.296 1 2)) ((bruijn ##.k.1062 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k56, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.24.293 7 1) (bruijn ##.k.1056 2 0) (bruijn ##.expr.26.295 5 1) (bruijn ##.x.1058 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.686 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k59) (bruijn ##.xs.23.296 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k59, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.25.297 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k58) (##inline ##vcore.cdr (bruijn ##.expr.26.295 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.26.295 3 1)) (bruijn ##.xs.23.296 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k58, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1055 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0lambda16))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0lambda16, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1053 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0lambda15) (bruijn ##.loop.294 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0lambda15, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k55) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k57))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k55, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294_V0k57, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256 ##.loop.294) (bruijn ##.loop.294 0 0) (bruijn ##.k.1052 1 0) (##inline ##vcore.car (bruijn ##.expr.21.291 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D294(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1051 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda14))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda14, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1069 0 0) (bruijn ##.k.1065 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1070 2 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.x.1072 1 0) (##inline ##vcore.cons (bruijn ##.x.1074 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 9 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k63) (##inline ##vcore.cons (bruijn ##.xs.300 3 2) (bruijn ##.env.286 8 1)) (##inline ##vcore.car (bruijn ##.expr.27.301 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k63, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.687 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k62) (bruijn ##.xs.300 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k62, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.301 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.27.301 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k61) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda18) (bruijn ##.kk.18.288 5 1)) ((bruijn ##.k.1065 1 0) #f)) ((bruijn ##.k.1065 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda18, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.299 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k60) (##inline ##vcore.cdr (bruijn ##.expr.21.291 1 0))) ((bruijn ##.k.1065 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k60, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.291 0 0)) (##vcore.call-with-values (bruijn ##.k.1048 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda13) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda17)) ((bruijn ##.k.1048 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda13, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda17, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1049 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k54) (##inline ##vcore.cdr (bruijn ##.expr.287 3 2))) ((bruijn ##.k.1048 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k54, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 2 2)) ((bruijn ##.x.682 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k53) 'lambda (##inline ##vcore.car (bruijn ##.expr.287 2 2))) ((bruijn ##.k.1048 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k53, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1036 0 0) (bruijn ##.k.1031 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1037 4 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.reg.1733 1 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1042 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1733) ((##vcore.- (bruijn ##.x.1044 1 0) 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 11 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k72) (##inline ##vcore.cons (bruijn ##.proper-xs.308 2 0) (bruijn ##.env.286 10 1)) (##inline ##vcore.car (bruijn ##.expr.30.306 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k72, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 10-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.687 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k71) (bruijn ##.proper-xs.308 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k71, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.254) (bruijn ##.undot.254 8 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k70) (##inline ##vcore.car (bruijn ##.expr.29.304 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k70, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.306 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.30.306 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k69) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda19) (bruijn ##.kk.18.288 5 1)) ((bruijn ##.k.1031 3 0) #f)) ((bruijn ##.k.1031 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k69, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda19, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.304 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k68) (##inline ##vcore.cdr (bruijn ##.expr.29.304 0 0))) ((bruijn ##.k.1031 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k68, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1032 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k67) (##inline ##vcore.cdr (bruijn ##.expr.287 4 2))) ((bruijn ##.k.1031 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k67, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 3 2)) ((bruijn ##.x.682 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k66) 'lambda (##inline ##vcore.car (bruijn ##.expr.287 3 2))) ((bruijn ##.k.1031 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k66, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.36.314 4 1) (bruijn ##.k.1013 1 0) (bruijn ##.expr.38.316 2 1) (bruijn ##.x.1014 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.38.316 1 1))) ((bruijn ##.x.686 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k79) (bruijn ##.xs.35.317 1 2)) ((bruijn ##.k.1013 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k79, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.36.314 7 1) (bruijn ##.k.1007 2 0) (bruijn ##.expr.38.316 5 1) (bruijn ##.x.1009 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.686 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k82) (bruijn ##.xs.35.317 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k82, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.37.318 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k81) (##inline ##vcore.cdr (bruijn ##.expr.38.316 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.38.316 3 1)) (bruijn ##.xs.35.317 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k81, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1006 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0lambda23))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0lambda23, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1004 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0lambda22) (bruijn ##.loop.315 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0lambda22, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k78) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k80))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k78, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315_V0k80, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256 ##.loop.315) (bruijn ##.loop.315 0 0) (bruijn ##.k.1003 1 0) (##inline ##vcore.car (bruijn ##.expr.33.312 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D315(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1002 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda21))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda21, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1020 0 0) (bruijn ##.k.1016 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1021 2 0) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.32.310 6 0)) (##inline ##vcore.cons (bruijn ##.x.1024 1 0) (##inline ##vcore.cons (bruijn ##.x.1026 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 12 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k86) (##inline ##vcore.cons (bruijn ##.xs.321 3 2) (bruijn ##.env.286 11 1)) (##inline ##vcore.car (bruijn ##.expr.39.322 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k86, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        VGetArg(statics, 11-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.687 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k85) (bruijn ##.xs.321 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k85, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.322 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.39.322 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k84) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda25) (bruijn ##.kk.18.288 8 1)) ((bruijn ##.k.1016 1 0) #f)) ((bruijn ##.k.1016 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k84, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda25, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.320 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k83) (##inline ##vcore.cdr (bruijn ##.expr.33.312 1 0))) ((bruijn ##.k.1016 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k83, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.312 0 0)) (##vcore.call-with-values (bruijn ##.k.998 3 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda20) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda24)) ((bruijn ##.k.998 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda20, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda24, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.310 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k77) (##inline ##vcore.cdr (bruijn ##.expr.32.310 0 0))) ((bruijn ##.k.998 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k77, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.999 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k76) (##inline ##vcore.cdr (bruijn ##.expr.287 5 2))) ((bruijn ##.k.998 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k76, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 4 2)) ((bruijn ##.x.682 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k75) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.287 4 2))) ((bruijn ##.k.998 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k75, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.985 0 0) (bruijn ##.k.979 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.986 4 0) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.41.325 7 0)) (##inline ##vcore.cons (bruijn ##.reg.1732 1 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.992 0 0) '()))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1732) ((##vcore.- (bruijn ##.x.994 1 0) 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 14 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k96) (##inline ##vcore.cons (bruijn ##.proper-xs.331 2 0) (bruijn ##.env.286 13 1)) (##inline ##vcore.car (bruijn ##.expr.43.329 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k96, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 13-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.687 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k95) (bruijn ##.proper-xs.331 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k95, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.254) (bruijn ##.undot.254 11 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k94) (##inline ##vcore.car (bruijn ##.expr.42.327 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k94, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.329 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.43.329 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k93) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda26) (bruijn ##.kk.18.288 8 1)) ((bruijn ##.k.979 4 0) #f)) ((bruijn ##.k.979 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k93, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda26, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.327 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k92) (##inline ##vcore.cdr (bruijn ##.expr.42.327 0 0))) ((bruijn ##.k.979 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k92, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.325 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k91) (##inline ##vcore.cdr (bruijn ##.expr.41.325 0 0))) ((bruijn ##.k.979 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k91, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.980 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k90) (##inline ##vcore.cdr (bruijn ##.expr.287 6 2))) ((bruijn ##.k.979 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k90, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 5 2)) ((bruijn ##.x.682 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k89) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.287 5 2))) ((bruijn ##.k.979 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k89, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.973 0 0) (bruijn ##.k.971 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.974 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.975 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.255) (bruijn ##.bruijn-lambda.255 10 2) (bruijn ##.k.976 0 0) (bruijn ##.env.286 9 1) (bruijn ##.e.334 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 2));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k101) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda28) (##inline ##vcore.cdr (bruijn ##.expr.287 8 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k101, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda28, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 2)));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.972 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k100) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda27) (bruijn ##.kk.18.288 6 1)) ((bruijn ##.k.971 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k100, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda27, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 6 2)) ((bruijn ##.x.682 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k99) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.287 6 2))) ((bruijn ##.k.971 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k99, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.964 0 0) (bruijn ##.k.961 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.965 1 0) (##inline ##vcore.cons '##qualified-case-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.46.336 2 0)) (bruijn ##.x.967 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__case__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.255) (bruijn ##.bruijn-lambda.255 12 2) (bruijn ##.k.968 0 0) (bruijn ##.env.286 11 1) (bruijn ##.e.339 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 2));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k107) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda30) (##inline ##vcore.cdr (bruijn ##.expr.46.336 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k107, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda30, self)))),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.336 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k106) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda29) (bruijn ##.kk.18.288 8 1)) ((bruijn ##.k.961 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k106, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda29, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.962 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k105) (##inline ##vcore.cdr (bruijn ##.expr.287 8 2))) ((bruijn ##.k.961 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k105, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 7 2)) ((bruijn ##.x.682 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k104) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.287 7 2))) ((bruijn ##.k.961 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k104, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.950 0 0) (bruijn ##.k.943 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.951 2 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons '1 (##inline ##vcore.cons (bruijn ##.x.954 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VEncodeInt(1l),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 15 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k116) (##inline ##vcore.cons (bruijn ##.x.956 0 0) (bruijn ##.env.286 14 1)) (##inline ##vcore.car (bruijn ##.expr.50.344 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k116, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 14-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.689 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k115) (##inline ##vcore.car (bruijn ##.expr.49.342 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k115, self)))),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.344 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.50.344 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k114) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda31) (bruijn ##.kk.18.288 11 1)) ((bruijn ##.k.943 4 0) #f)) ((bruijn ##.k.943 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k114, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda31, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.342 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.49.342 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k113) (##inline ##vcore.cdr (bruijn ##.expr.48.341 1 0))) ((bruijn ##.k.943 3 0) #f)) ((bruijn ##.k.943 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k113, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.341 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k112) (##inline ##vcore.car (bruijn ##.expr.48.341 0 0))) ((bruijn ##.k.943 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k112, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.944 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k111) (##inline ##vcore.cdr (bruijn ##.expr.287 9 2))) ((bruijn ##.k.943 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k111, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 8 2)) ((bruijn ##.x.682 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k110) 'continuation (##inline ##vcore.car (bruijn ##.expr.287 8 2))) ((bruijn ##.k.943 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k110, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.56.349 5 1) (bruijn ##.k.920 2 0) (bruijn ##.expr.58.351 3 1) (bruijn ##.x.921 1 0) (bruijn ##.x.922 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.686 38 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k123) (bruijn ##.vals.55.353 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k123, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.58.351 1 1))) ((bruijn ##.x.686 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k122) (bruijn ##.xs.54.352 1 2)) ((bruijn ##.k.920 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k122, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.357 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.60.357 0 0))) ((bruijn ##.kk.57.354 3 1) (bruijn ##.k.912 1 0) (##inline ##vcore.cdr (bruijn ##.expr.58.351 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.59.355 2 0)) (bruijn ##.xs.54.352 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.60.357 0 0)) (bruijn ##.vals.55.353 6 3))) ((bruijn ##.k.912 1 0) #f)) ((bruijn ##.k.912 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.355 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k127) (##inline ##vcore.cdr (bruijn ##.expr.59.355 1 0))) ((bruijn ##.k.912 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k127, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.56.349 9 1) (bruijn ##.k.907 4 0) (bruijn ##.expr.58.351 7 1) (bruijn ##.x.909 1 0) (bruijn ##.x.910 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.686 42 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k130) (bruijn ##.vals.55.353 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k130, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.686 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k129) (bruijn ##.xs.54.352 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k129, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k126) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k128))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k126, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k128, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k125) (##inline ##vcore.car (bruijn ##.expr.58.351 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k125, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.906 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0lambda35))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0lambda35, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.904 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0lambda34) (bruijn ##.loop.350 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0lambda34, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k121) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k124))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k121, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350_V0k124, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256 ##.loop.350) (bruijn ##.loop.350 0 0) (bruijn ##.k.903 1 0) (##inline ##vcore.car (bruijn ##.expr.52.347 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D350(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.902 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda33))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda33, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.928 0 0) (bruijn ##.k.924 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.929 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.931 2 0) (##inline ##vcore.cons (bruijn ##.xs.360 5 2) (##inline ##vcore.cons (bruijn ##.x.934 1 0) (##inline ##vcore.cons (bruijn ##.x.936 0 0) '()))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 2),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 17 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k135) (##inline ##vcore.cons (bruijn ##.xs.360 4 2) (bruijn ##.env.286 16 1)) (##inline ##vcore.car (bruijn ##.expr.61.362 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k135, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->up->vars[2],
        VGetArg(statics, 16-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 17 3) (bruijn ##.k.938 0 0) (##inline ##vcore.cons (bruijn ##.xs.360 4 2) (bruijn ##.env.286 16 1)) (bruijn ##.e.364 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 3));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->up->vars[2],
        VGetArg(statics, 16-1, 1));
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k134) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda38) (bruijn ##.vals.361 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k134, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda38, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.687 34 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k133) (bruijn ##.xs.360 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k133, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.362 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.61.362 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k132) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda37) (bruijn ##.kk.18.288 12 1)) ((bruijn ##.k.924 1 0) #f)) ((bruijn ##.k.924 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k132, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda37, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda36, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.359 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k131) (##inline ##vcore.cdr (bruijn ##.expr.52.347 1 0))) ((bruijn ##.k.924 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k131, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.347 0 0)) (##vcore.call-with-values (bruijn ##.k.899 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda32) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda36)) ((bruijn ##.k.899 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda32, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda36, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.900 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k120) (##inline ##vcore.cdr (bruijn ##.expr.287 10 2))) ((bruijn ##.k.899 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k120, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 9 2)) ((bruijn ##.x.682 34 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k119) 'letrec (##inline ##vcore.car (bruijn ##.expr.287 9 2))) ((bruijn ##.k.899 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k119, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.684 39 0) (bruijn ##.k.853 0 0) (bruijn ##.expr.64.368 3 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.372 5 1) (bruijn ##.k.873 2 0) (bruijn ##.expr.72.374 3 1) (bruijn ##.x.874 1 0) (bruijn ##.x.875 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.686 43 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k145) (bruijn ##.vals.69.376 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k145, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.72.374 1 1))) ((bruijn ##.x.686 42 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k144) (bruijn ##.xs.68.375 1 2)) ((bruijn ##.k.873 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k144, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.380 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.74.380 0 0))) ((bruijn ##.kk.71.377 3 1) (bruijn ##.k.865 1 0) (##inline ##vcore.cdr (bruijn ##.expr.72.374 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.73.378 2 0)) (bruijn ##.xs.68.375 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.74.380 0 0)) (bruijn ##.vals.69.376 6 3))) ((bruijn ##.k.865 1 0) #f)) ((bruijn ##.k.865 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.378 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k149) (##inline ##vcore.cdr (bruijn ##.expr.73.378 1 0))) ((bruijn ##.k.865 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k149, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.372 9 1) (bruijn ##.k.860 4 0) (bruijn ##.expr.72.374 7 1) (bruijn ##.x.862 1 0) (bruijn ##.x.863 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.686 47 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k152) (bruijn ##.vals.69.376 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k152, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.686 46 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k151) (bruijn ##.xs.68.375 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k151, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k148) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k150))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k148, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k150, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k147) (##inline ##vcore.car (bruijn ##.expr.72.374 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k147, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.859 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0lambda44))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0lambda44, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.857 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0lambda43) (bruijn ##.loop.373 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0lambda43, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k143) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k146))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k143, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373_V0k146, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256 ##.loop.373) (bruijn ##.loop.373 0 0) (bruijn ##.k.856 1 0) (bruijn ##.head.65.369 3 1) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D373(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.855 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda42))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda42, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.881 0 0) (bruijn ##.k.877 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.882 3 0) (##inline ##vcore.cons 'basic-block (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.63.366 9 0)) (##inline ##vcore.cons (bruijn ##.x.885 2 0) (##inline ##vcore.cons (bruijn ##.xs.383 4 2) (##inline ##vcore.cons (bruijn ##.x.888 1 0) (##inline ##vcore.cons (bruijn ##.x.890 0 0) '())))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0basic__block,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 9-1, 0)),
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->up->up->up->vars[2],
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 21 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k156) (##inline ##vcore.cons (bruijn ##.xs.383 3 2) (bruijn ##.env.286 20 1)) (##inline ##vcore.car (bruijn ##.tail.66.370 4 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k156, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        VGetArg(statics, 20-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 21 3) (bruijn ##.k.892 0 0) (##inline ##vcore.cons (bruijn ##.xs.383 3 2) (bruijn ##.env.286 20 1)) (bruijn ##.e.387 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 3));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        VGetArg(statics, 20-1, 1));
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k155) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda47) (bruijn ##.vals.384 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k155, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda47, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.687 38 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k154) (bruijn ##.xs.383 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k154, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda45, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.382 0 1)) (if (##inline ##vcore.pair? (bruijn ##.tail.66.370 1 2)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.tail.66.370 1 2))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k153) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda46) (bruijn ##.kk.18.288 16 1)) ((bruijn ##.k.877 0 0) #f)) ((bruijn ##.k.877 0 0) #f)) ((bruijn ##.k.877 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[2]))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[2])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k153, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda46, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.854 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda41) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda45))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda45, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.895 0 0) -1) ((bruijn ##.k.849 5 0) #f) (##vcore.call-with-values (bruijn ##.k.849 5 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda39) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda40)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(-1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda39, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda40, self)))));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k142) (bruijn ##.x.896 0 0) 1)
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k142, self)))),
      _var0,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.683 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k141) (bruijn ##.expr.64.368 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k141, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.366 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k140) (##inline ##vcore.cdr (bruijn ##.expr.63.366 0 0))) ((bruijn ##.k.849 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k140, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.850 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k139) (##inline ##vcore.cdr (bruijn ##.expr.287 11 2))) ((bruijn ##.k.849 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k139, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 10 2)) ((bruijn ##.x.682 35 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k138) 'basic-block (##inline ##vcore.car (bruijn ##.expr.287 10 2))) ((bruijn ##.k.849 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k138, self)))),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.845 0 0) (bruijn ##.k.843 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.846 0 0) (bruijn ##.expr.287 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.844 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k160) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda48) (bruijn ##.kk.18.288 11 1)) ((bruijn ##.k.843 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k160, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda48, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 11 2)) ((bruijn ##.x.682 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k159) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.287 11 2))) ((bruijn ##.k.843 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k159, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.839 0 0) (bruijn ##.k.837 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.840 0 0) (bruijn ##.expr.287 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 14-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.838 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k164) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda49) (bruijn ##.kk.18.288 12 1)) ((bruijn ##.k.837 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k164, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda49, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 12 2)) ((bruijn ##.x.682 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k163) 'quote (##inline ##vcore.car (bruijn ##.expr.287 12 2))) ((bruijn ##.k.837 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k163, self)))),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.830 0 0) (bruijn ##.k.827 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.831 1 0) (##inline ##vcore.cons '##inline (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.79.391 2 0)) (bruijn ##.x.833 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 18 3) (bruijn ##.k.834 0 0) (bruijn ##.env.286 17 1) (bruijn ##.x.394 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 3));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 38 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k170) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda51) (##inline ##vcore.cdr (bruijn ##.expr.79.391 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k170, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda51, self)))),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.391 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k169) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda50) (bruijn ##.kk.18.288 14 1)) ((bruijn ##.k.827 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k169, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda50, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.828 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k168) (##inline ##vcore.cdr (bruijn ##.expr.287 14 2))) ((bruijn ##.k.827 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k168, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 13 2)) ((bruijn ##.x.682 38 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k167) '##inline (##inline ##vcore.car (bruijn ##.expr.287 13 2))) ((bruijn ##.k.827 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k167, self)))),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.818 0 0) (bruijn ##.k.814 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.819 2 0) (##inline ##vcore.cons '##qualified-call (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.81.396 4 0)) (##inline ##vcore.cons (bruijn ##.x.822 1 0) (bruijn ##.x.823 0 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__call,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        statics->vars[0],
        _var0))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 21 3) (bruijn ##.k.824 0 0) (bruijn ##.env.286 20 1) (bruijn ##.x.401 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 3));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 20-1, 1);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k178) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda53) (##inline ##vcore.cdr (bruijn ##.expr.82.398 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k178, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda53, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 19 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k177) (bruijn ##.env.286 18 1) (##inline ##vcore.car (bruijn ##.expr.82.398 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k177, self))));
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.398 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k176) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda52) (bruijn ##.kk.18.288 16 1)) ((bruijn ##.k.814 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k176, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda52, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.396 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k175) (##inline ##vcore.cdr (bruijn ##.expr.81.396 0 0))) ((bruijn ##.k.814 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k175, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.815 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k174) (##inline ##vcore.cdr (bruijn ##.expr.287 15 2))) ((bruijn ##.k.814 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k174, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 15-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 14 2)) ((bruijn ##.x.682 39 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k173) '##qualified-call (##inline ##vcore.car (bruijn ##.expr.287 14 2))) ((bruijn ##.k.814 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k173, self)))),
      _V10qualified__call,
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.86.405 4 1) (bruijn ##.k.803 1 0) (bruijn ##.expr.88.407 2 1) (bruijn ##.x.804 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.88.407 1 1))) ((bruijn ##.x.686 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k182) (bruijn ##.xs.85.408 1 2)) ((bruijn ##.k.803 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k182, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.86.405 7 1) (bruijn ##.k.797 2 0) (bruijn ##.expr.88.407 5 1) (bruijn ##.x.799 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.686 44 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k185) (bruijn ##.xs.85.408 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k185, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.87.409 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k184) (##inline ##vcore.cdr (bruijn ##.expr.88.407 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.88.407 3 1)) (bruijn ##.xs.85.408 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k184, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.796 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0lambda57))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0lambda57, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.794 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0lambda56) (bruijn ##.loop.406 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0lambda56, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k181) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k183))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k181, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406_V0k183, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256 ##.loop.406) (bruijn ##.loop.406 0 0) (bruijn ##.k.793 1 0) (##inline ##vcore.cdr (bruijn ##.expr.287 18 2)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 18-1, 2));
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V10_Dloop_D406(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.792 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda55))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda55, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.808 0 0) (bruijn ##.k.806 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.809 2 0) (##inline ##vcore.cons (bruijn ##.x.810 1 0) (bruijn ##.x.811 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 20 3) (bruijn ##.k.812 0 0) (bruijn ##.env.286 19 1) (bruijn ##.x.413 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 3));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 40 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k188) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda60) (bruijn ##.xs.412 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k188, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda60, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 18 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k187) (bruijn ##.env.286 17 1) (##inline ##vcore.car (bruijn ##.expr.287 17 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k187, self))));
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 17-1, 2));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda58, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.411 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k186) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda59) (bruijn ##.kk.18.288 15 1)) ((bruijn ##.k.806 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k186, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda59, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 15 2)) (##vcore.call-with-values (bruijn ##.k.791 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda54) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda58)) ((bruijn ##.k.791 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 15-1, 2)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda54, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda58, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.688 37 0) (bruijn ##.k.786 0 0) (##string ##.string.1746) (bruijn ##.expr.287 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1746.sym, VPOINTER_OTHER),
      VGetArg(statics, 18-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.770 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda61) (bruijn ##.kk.18.288 16 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 16-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda61, self)))),
      VGetArg(statics, 16-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.787 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k191))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k191, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1731) ((##vcore.symbol? (bruijn ##.expr.287 17 2))) (if (bruijn ##.reg.1731 0 0) (##qualified-call (vanity compiler lower bruijn-ify ##.lookup.253) (bruijn ##.lookup.253 18 0) (bruijn ##.k.788 1 0) 0 (bruijn ##.env.286 17 1) (bruijn ##.expr.287 17 2)) ((bruijn ##.k.788 1 0) (bruijn ##.expr.287 17 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 17-1, 2));
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 17-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 17-1, 2));
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k190) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda62) (bruijn ##.kk.18.288 14 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k190, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda62, self)))),
      VGetArg(statics, 14-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k180) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k189))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k180, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k189, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k172) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k179))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k172, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k179, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k166) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k171))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k166, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k171, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k162) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k165))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k162, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k165, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k158) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k161))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k158, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k161, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k137) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k157))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k137, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k157, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k118) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k136))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k118, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k136, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k109) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k117))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k109, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k117, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k103) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k108))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k108, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k98) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k102))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k98, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k102, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k88) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k97))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k88, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k97, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k74) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k87))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k87, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k65) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k73))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k65, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k73, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k52) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k64))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k52, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0k64, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.769 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda12))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256_V0lambda12, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D257, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.256) (bruijn ##.iter.256 1 3) (bruijn ##.k.1078 0 0) '() (bruijn ##.expr.415 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[3]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1099 0 0) (bruijn ##.k.1097 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1100 0 0) (bruijn ##.expr.252 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1098 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k194) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda64) (bruijn ##.kk.0.416 2 1)) ((bruijn ##.k.1097 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k194, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda64, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.252 3 1)) ((bruijn ##.x.682 26 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k193) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.252 3 1))) ((bruijn ##.k.1097 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k193, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1089 0 0) (bruijn ##.k.1084 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1090 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.420 3 0)) (##inline ##vcore.cons (bruijn ##.x.1093 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.doit.257) (bruijn ##.doit.257 7 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k201) (##inline ##vcore.car (bruijn ##.expr.5.422 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 4));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k201, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D257(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.422 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.422 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k200) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda65) (bruijn ##.kk.0.416 5 1)) ((bruijn ##.k.1084 3 0) #f)) ((bruijn ##.k.1084 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k200, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda65, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.420 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k199) (##inline ##vcore.cdr (bruijn ##.expr.4.420 0 0))) ((bruijn ##.k.1084 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k199, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1085 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k198) (##inline ##vcore.cdr (bruijn ##.expr.252 5 1))) ((bruijn ##.k.1084 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k198, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.252 4 1)) ((bruijn ##.x.682 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k197) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.252 4 1))) ((bruijn ##.k.1084 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k197, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.doit.257) (bruijn ##.doit.257 4 4) (bruijn ##.k.1082 0 0) (bruijn ##.expr.252 5 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[4]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D257(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1079 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda66) (bruijn ##.kk.0.416 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda66, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k196) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k202))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k196, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k202, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k192) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k195))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k192, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k195, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 5 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D257")) (##vcore.call/cc (bruijn ##.k.711 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda63)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D253, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D254, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D255, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D256, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D257, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda63, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.k.1103 3 0) (bruijn ##.x.1105 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.703 6 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426_V0k204) (##string ##.string.1747) (bruijn ##.fun.442 2 1) (bruijn ##.curlambda.244 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426_V0k204, self)))),
      VEncodePointer(&_V10_Dstring_D1747.sym, VPOINTER_OTHER),
      statics->up->vars[1],
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1734) ((##vcore.+ (bruijn ##.curlambda.244 4 2) 1)) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426_V0k203) (bruijn ##.curlambda.244 4 2) (bruijn ##.reg.1734 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426_V0k203, self)))),
      VEncodeInt(4l), VEncodeInt(2l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.k.1107 3 0) (bruijn ##.x.1109 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.703 6 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427_V0k206) (##string ##.string.1748) (bruijn ##.fun.443 2 1) (bruijn ##.curcont.245 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427_V0k206, self)))),
      VEncodePointer(&_V10_Dstring_D1748.sym, VPOINTER_OTHER),
      statics->up->vars[1],
      VGetArg(statics, 5-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1735) ((##vcore.+ (bruijn ##.curcont.245 4 3) 1)) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427_V0k205) (bruijn ##.curcont.245 4 3) (bruijn ##.reg.1735 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[3],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427_V0k205, self)))),
      VEncodeInt(4l), VEncodeInt(3l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1111 4 0) (##inline ##vcore.car (bruijn ##.lookup.448 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k210) (bruijn ##.literal-table.431 4 5) (##inline ##vcore.cons (bruijn ##.lookup.448 0 0) (bruijn ##.literal-table.431 4 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k210, self)))),
      VEncodeInt(4l), VEncodeInt(5l),
      VInlineCons2(runtime,
        _var0,
        statics->up->up->up->vars[5])
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.447 0 0) ((bruijn ##.k.1111 2 0) (##inline ##vcore.car (bruijn ##.lookup.447 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k209) (##inline ##vcore.cons (bruijn ##.key.446 1 0) (bruijn ##.intrin.445 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k209, self)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.702 6 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k208) (bruijn ##.key.446 0 0) (bruijn ##.literal-table.431 2 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k208, self)))),
      _var0,
      statics->up->vars[5]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.lifting-literals?.425 2 2) ((bruijn ##.x.689 18 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k207) '##intrinsic (bruijn ##.sym.444 0 1)) ((bruijn ##.x.689 18 0) (bruijn ##.k.1111 0 0) '##intrinsic (bruijn ##.sym.444 0 1)))
if(VDecodeBool(
statics->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432_V0k207, self)))),
      _V10intrinsic,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      _var0,
      _V10intrinsic,
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1114 10 0) (##inline ##vcore.cons '##string (##inline ##vcore.cons (bruijn ##.x.1128 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V10string,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.700 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k215) (bruijn ##.literal-table.431 10 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k215, self)))),
      VGetArg(statics, 10-1, 5));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k214) (bruijn ##.literal-table.431 9 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.449 8 1) (bruijn ##.x.1131 0 0)) (bruijn ##.literal-table.431 9 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k214, self)))),
      VEncodeInt(9l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 1),
        _var0),
        VGetArg(statics, 9-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.450 0 0) ((bruijn ##.k.1114 7 0) (##inline ##vcore.cons '##string (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.lookup.450 0 0)) '()))) ((bruijn ##.x.699 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k213) (##string ##.string.1749)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        _V10string,
        VInlineCons2(runtime,
        VInlineCdr2(runtime,
        _var0),
        VNULL)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k213, self)))),
      VEncodePointer(&_V10_Dstring_D1749.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1138 1 0)) (set! (bruijn ##.k.1135 0 0) (bruijn ##.literal-table.431 10 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.449 9 1) '()) (bruijn ##.literal-table.431 10 5))) ((bruijn ##.k.1135 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(10l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 9-1, 1),
        VNULL),
        VGetArg(statics, 10-1, 5))
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1114 9 0) (bruijn ##.x.449 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k217) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k218))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k217, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k218, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1116 0 0) ((bruijn ##.k.1114 2 0) (bruijn ##.x.449 2 1)) (basic-block 1 1 (##.reg.1737) ((##vcore.void? (bruijn ##.x.449 3 1))) (if (bruijn ##.reg.1737 0 0) ((bruijn ##.k.1114 3 0) (bruijn ##.x.449 3 1)) (basic-block 1 1 (##.reg.1738) ((##vcore.foreign-pointer? (bruijn ##.x.449 4 1))) (if (bruijn ##.reg.1738 0 0) ((bruijn ##.k.1114 4 0) (bruijn ##.x.449 4 1)) (basic-block 1 1 (##.reg.1739) ((##vcore.char? (bruijn ##.x.449 5 1))) (if (bruijn ##.reg.1739 0 0) ((bruijn ##.k.1114 5 0) (bruijn ##.x.449 5 1)) (if (##inline ##vcore.eq? (bruijn ##.x.449 5 1) #t) ((bruijn ##.k.1114 5 0) (bruijn ##.x.449 5 1)) (if (##inline ##vcore.eq? (bruijn ##.x.449 5 1) #f) ((bruijn ##.k.1114 5 0) (bruijn ##.x.449 5 1)) (if (##inline ##vcore.null? (bruijn ##.x.449 5 1)) ((bruijn ##.k.1114 5 0) (bruijn ##.x.449 5 1)) (basic-block 1 1 (##.reg.1740) ((##vcore.string? (bruijn ##.x.449 6 1))) (if (bruijn ##.reg.1740 0 0) ((bruijn ##.x.702 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k212) (bruijn ##.x.449 6 1) (bruijn ##.literal-table.431 7 5)) (basic-block 1 1 (##.reg.1741) ((##vcore.symbol? (bruijn ##.x.449 7 1))) (if (bruijn ##.reg.1741 0 0) ((bruijn ##.x.698 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k216) (bruijn ##.x.449 7 1) (bruijn ##.literal-table.431 8 5)) ((bruijn ##.x.688 26 0) (bruijn ##.k.1114 7 0) (##string ##.string.1750) (bruijn ##.x.449 7 1))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVoidP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VForeignPointerP2(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCharP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 5-1, 1),
        VEncodeBool(true)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 5-1, 1),
        VEncodeBool(false)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k212, self)))),
      VGetArg(statics, 6-1, 1),
      VGetArg(statics, 7-1, 5));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k216, self)))),
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 8-1, 5));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1750.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1));
}
    }
}
    }
}
}
}
}
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.lifting-literals?.425 2 2) (basic-block 1 1 (##.reg.1736) ((##vcore.int? (bruijn ##.x.449 1 1))) (if (bruijn ##.reg.1736 0 0) ((bruijn ##.k.1114 1 0) (bruijn ##.x.449 1 1)) ((bruijn ##.x.701 7 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k211) (bruijn ##.x.449 1 1)))) ((bruijn ##.k.1114 0 0) (bruijn ##.x.449 0 1)))
if(VDecodeBool(
statics->up->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433_V0k211, self)))),
      statics->vars[1]);
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1160 0 0) (bruijn ##.k.1157 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1161 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lamb.452 5 2)) (##inline ##vcore.cons (bruijn ##.x.1163 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)),
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 5 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k222) (bruijn ##.fun.451 4 1) (##inline ##vcore.car (bruijn ##.expr.96.457 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k222, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.457 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.96.457 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k221) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda68) (bruijn ##.kk.93.453 2 1)) ((bruijn ##.k.1157 1 0) #f)) ((bruijn ##.k.1157 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k221, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda68, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.452 2 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k220) (##inline ##vcore.cdr (bruijn ##.lamb.452 2 2))) ((bruijn ##.k.1157 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k220, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1149 0 0) (bruijn ##.k.1144 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1150 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lamb.452 8 2)) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1153 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)),
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 8 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k229) (bruijn ##.fun.451 7 1) (##inline ##vcore.car (bruijn ##.expr.99.462 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k229, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.99.462 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.99.462 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k228) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda69) (bruijn ##.kk.93.453 5 1)) ((bruijn ##.k.1144 3 0) #f)) ((bruijn ##.k.1144 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k228, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda69, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1146 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k227) (##inline ##vcore.cdr (bruijn ##.expr.98.461 1 0))) ((bruijn ##.k.1144 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k227, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.461 0 0)) ((bruijn ##.x.682 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k226) '+ (##inline ##vcore.car (bruijn ##.expr.98.461 0 0))) ((bruijn ##.k.1144 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k226, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.452 3 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k225) (##inline ##vcore.cdr (bruijn ##.lamb.452 3 2))) ((bruijn ##.k.1144 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k225, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.697 13 0) (bruijn ##.k.1140 2 0) (##string ##.string.1751))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1751.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k224) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k230))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k224, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k230, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k219) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k223))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k219, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0k223, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1139 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda67))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434_V0lambda67, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1369 0 0) (bruijn ##.k.1367 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1370 0 0) (bruijn ##.expr.465 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1368 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k233) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda71) (bruijn ##.kk.100.467 2 1)) ((bruijn ##.k.1367 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k233, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda71, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.465 2 2)) ((bruijn ##.x.682 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k232) 'bruijn (##inline ##vcore.car (bruijn ##.expr.465 2 2))) ((bruijn ##.k.1367 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k232, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1353 0 0) (bruijn ##.k.1348 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1354 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.475 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k242) (bruijn ##.functions.430 10 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.475 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.104.471 4 0)) (##inline ##vcore.cons (bruijn ##.x.1363 0 0) '())) '()))) (bruijn ##.functions.430 10 4)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k242, self)))),
      VEncodeInt(10l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
        VGetArg(statics, 10-1, 4))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 9 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k241) (bruijn ##.fun.464 8 1) (##inline ##vcore.car (bruijn ##.expr.105.473 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k241, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.426) (bruijn ##.genlambda.426 8 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k240) (bruijn ##.fun.464 7 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k240, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.105.473 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.105.473 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k239) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda72) (bruijn ##.kk.100.467 5 1)) ((bruijn ##.k.1348 3 0) #f)) ((bruijn ##.k.1348 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k239, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda72, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.104.471 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k238) (##inline ##vcore.cdr (bruijn ##.expr.104.471 0 0))) ((bruijn ##.k.1348 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k238, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1349 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k237) (##inline ##vcore.cdr (bruijn ##.expr.465 4 2))) ((bruijn ##.k.1348 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k237, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.465 3 2)) ((bruijn ##.x.682 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k236) 'lambda (##inline ##vcore.car (bruijn ##.expr.465 3 2))) ((bruijn ##.k.1348 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k236, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1332 0 0) (bruijn ##.k.1325 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1333 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.482 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k253) (bruijn ##.functions.430 13 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.482 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.107.477 6 0)) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1343 0 0) '()))) '()))) (bruijn ##.functions.430 13 4)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k253, self)))),
      VEncodeInt(13l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))),
        VGetArg(statics, 13-1, 4))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 12 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k252) (bruijn ##.fun.464 11 1) (##inline ##vcore.car (bruijn ##.expr.109.480 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k252, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.426) (bruijn ##.genlambda.426 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k251) (bruijn ##.fun.464 10 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k251, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.480 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.109.480 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k250) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda73) (bruijn ##.kk.100.467 8 1)) ((bruijn ##.k.1325 5 0) #f)) ((bruijn ##.k.1325 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k250, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda73, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1329 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k249) (##inline ##vcore.cdr (bruijn ##.expr.108.479 1 0))) ((bruijn ##.k.1325 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k249, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.479 0 0)) ((bruijn ##.x.682 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k248) '+ (##inline ##vcore.car (bruijn ##.expr.108.479 0 0))) ((bruijn ##.k.1325 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k248, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.477 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k247) (##inline ##vcore.cdr (bruijn ##.expr.107.477 0 0))) ((bruijn ##.k.1325 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k247, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1326 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k246) (##inline ##vcore.cdr (bruijn ##.expr.465 5 2))) ((bruijn ##.k.1325 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k246, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.465 4 2)) ((bruijn ##.x.682 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k245) 'lambda (##inline ##vcore.car (bruijn ##.expr.465 4 2))) ((bruijn ##.k.1325 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k245, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1308 0 0) (bruijn ##.k.1302 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1309 5 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.490 4 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k266) (bruijn ##.functions.430 16 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.490 3 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.n.487 6 0) (##inline ##vcore.cons (bruijn ##.x.1319 0 0) '())) '()))) (bruijn ##.functions.430 16 4)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k266, self)))),
      VEncodeInt(16l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
        VGetArg(statics, 16-1, 4))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 15 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k265) (bruijn ##.lamb.490 2 0) (##inline ##vcore.car (bruijn ##.expr.113.488 4 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k265, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k264) (bruijn ##.qualified-functions.428 14 2) (##inline ##vcore.cons (bruijn ##.x.1321 0 0) (bruijn ##.qualified-functions.428 14 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k264, self)))),
      VEncodeInt(14l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 14-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.689 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k263) (bruijn ##.lamb.490 0 0) (bruijn ##.n.487 3 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k263, self)))),
      _var0,
      statics->up->up->vars[0],
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.694 24 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k262) (##inline ##vcore.car (bruijn ##.expr.111.484 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k262, self)))),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.113.488 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.113.488 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k261) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda74) (bruijn ##.kk.100.467 9 1)) ((bruijn ##.k.1302 5 0) #f)) ((bruijn ##.k.1302 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k261, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda74, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k260) (##inline ##vcore.cdr (bruijn ##.expr.112.486 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k260, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112.486 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k259) (##inline ##vcore.car (bruijn ##.expr.112.486 0 0))) ((bruijn ##.k.1302 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k259, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111.484 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k258) (##inline ##vcore.cdr (bruijn ##.expr.111.484 0 0))) ((bruijn ##.k.1302 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k258, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1303 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k257) (##inline ##vcore.cdr (bruijn ##.expr.465 6 2))) ((bruijn ##.k.1302 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k257, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.465 5 2)) ((bruijn ##.x.682 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k256) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.465 5 2))) ((bruijn ##.k.1302 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k256, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1283 0 0) (bruijn ##.k.1275 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1284 5 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.499 4 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k281) (bruijn ##.functions.430 19 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.499 3 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.n.495 8 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1295 0 0) '()))) '()))) (bruijn ##.functions.430 19 4)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k281, self)))),
      VEncodeInt(19l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))),
        VGetArg(statics, 19-1, 4))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 18 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k280) (bruijn ##.lamb.499 2 0) (##inline ##vcore.car (bruijn ##.expr.118.497 4 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k280, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k279) (bruijn ##.qualified-functions.428 17 2) (##inline ##vcore.cons (bruijn ##.x.1297 0 0) (bruijn ##.qualified-functions.428 17 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k279, self)))),
      VEncodeInt(17l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 17-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.689 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k278) (bruijn ##.lamb.499 0 0) (bruijn ##.n.495 5 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k278, self)))),
      _var0,
      VGetArg(statics, 5-1, 0),
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.694 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k277) (##inline ##vcore.car (bruijn ##.expr.115.492 6 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k277, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.497 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.118.497 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k276) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda75) (bruijn ##.kk.100.467 12 1)) ((bruijn ##.k.1275 7 0) #f)) ((bruijn ##.k.1275 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k276, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda75, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1280 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k275) (##inline ##vcore.cdr (bruijn ##.expr.117.496 1 0))) ((bruijn ##.k.1275 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k275, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.496 0 0)) ((bruijn ##.x.682 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k274) '+ (##inline ##vcore.car (bruijn ##.expr.117.496 0 0))) ((bruijn ##.k.1275 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k274, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k273) (##inline ##vcore.cdr (bruijn ##.expr.116.494 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k273, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.116.494 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k272) (##inline ##vcore.car (bruijn ##.expr.116.494 0 0))) ((bruijn ##.k.1275 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k272, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.492 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k271) (##inline ##vcore.cdr (bruijn ##.expr.115.492 0 0))) ((bruijn ##.k.1275 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k271, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1276 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k270) (##inline ##vcore.cdr (bruijn ##.expr.465 7 2))) ((bruijn ##.k.1275 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k270, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.465 6 2)) ((bruijn ##.x.682 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k269) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.465 6 2))) ((bruijn ##.k.1275 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k269, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1264 0 0) (bruijn ##.k.1262 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1265 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.502 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k288) (bruijn ##.functions.430 12 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.502 1 0) (##inline ##vcore.cons '#t (bruijn ##.x.1271 0 0))) (bruijn ##.functions.430 12 4)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k288, self)))),
      VEncodeInt(12l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        _var0)),
        VGetArg(statics, 12-1, 4))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-lambda.434) (bruijn ##.iter-lambda.434 12 8) (bruijn ##.k.1272 0 0) (bruijn ##.fun.464 11 1) (bruijn ##.e.503 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 8));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k287) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda77) (##inline ##vcore.cdr (bruijn ##.expr.465 10 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k287, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda77, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 2)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.426) (bruijn ##.genlambda.426 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k286) (bruijn ##.fun.464 9 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k286, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1263 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k285) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda76) (bruijn ##.kk.100.467 7 1)) ((bruijn ##.k.1262 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k285, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda76, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.465 7 2)) ((bruijn ##.x.682 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k284) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.465 7 2))) ((bruijn ##.k.1262 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k284, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1243 0 0) (bruijn ##.k.1240 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1244 5 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.508 4 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k300) (bruijn ##.functions.430 18 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.508 3 0) (##inline ##vcore.cons '#t (bruijn ##.x.1255 0 0))) (bruijn ##.functions.430 18 4)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k300, self)))),
      VEncodeInt(18l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        _var0)),
        VGetArg(statics, 18-1, 4))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-lambda.434) (bruijn ##.iter-lambda.434 18 8) (bruijn ##.k.1256 0 0) (bruijn ##.fun.464 17 1) (bruijn ##.e.509 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 8));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 38 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k299) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda79) (bruijn ##.cases.507 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k299, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda79, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k298) (bruijn ##.qualified-functions.428 16 2) (##inline ##vcore.cons (bruijn ##.x.1258 0 0) (bruijn ##.qualified-functions.428 16 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k298, self)))),
      VEncodeInt(16l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 16-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.689 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k297) (bruijn ##.lamb.508 0 0) 0 #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k297, self)))),
      _var0,
      VEncodeInt(0l),
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.cases.507 1 0))) (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 14 9) (bruijn ##.k.1244 0 0) (bruijn ##.fun.464 13 1) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (bruijn ##.name.506 2 0) (##inline ##vcore.car (bruijn ##.cases.507 1 0)))) (bruijn ##.func-position?.466 13 3)) ((bruijn ##.x.694 26 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k296) (bruijn ##.name.506 2 0)))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VInlineCons2(runtime,
        _V10qualified__lambda,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCar2(runtime,
        statics->vars[0])));
    VWORD _arg3 = 
      VGetArg(statics, 13-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k296, self)))),
      statics->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k295) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda78) (bruijn ##.kk.100.467 11 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k295, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda78, self)))),
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k294) (##inline ##vcore.cdr (bruijn ##.expr.121.505 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k294, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.505 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k293) (##inline ##vcore.car (bruijn ##.expr.121.505 0 0))) ((bruijn ##.k.1240 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k293, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1241 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k292) (##inline ##vcore.cdr (bruijn ##.expr.465 9 2))) ((bruijn ##.k.1240 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k292, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.465 8 2)) ((bruijn ##.x.682 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k291) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.465 8 2))) ((bruijn ##.k.1240 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k291, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1226 0 0) (bruijn ##.k.1221 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1227 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.k.515 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k309) (bruijn ##.functions.430 16 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.515 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.123.511 4 0)) (##inline ##vcore.cons (bruijn ##.x.1236 0 0) '())) '()))) (bruijn ##.functions.430 16 4)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k309, self)))),
      VEncodeInt(16l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
        VGetArg(statics, 16-1, 4))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 15 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k308) (bruijn ##.fun.464 14 1) (##inline ##vcore.car (bruijn ##.expr.124.513 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k308, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.gencont.427) (bruijn ##.gencont.427 14 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k307) (bruijn ##.fun.464 13 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k307, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.124.513 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.124.513 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k306) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda80) (bruijn ##.kk.100.467 11 1)) ((bruijn ##.k.1221 3 0) #f)) ((bruijn ##.k.1221 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k306, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda80, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.123.511 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k305) (##inline ##vcore.cdr (bruijn ##.expr.123.511 0 0))) ((bruijn ##.k.1221 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k305, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1222 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k304) (##inline ##vcore.cdr (bruijn ##.expr.465 10 2))) ((bruijn ##.k.1221 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k304, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.465 9 2)) ((bruijn ##.x.682 34 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k303) 'continuation (##inline ##vcore.car (bruijn ##.expr.465 9 2))) ((bruijn ##.k.1221 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k303, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1211 0 0) (bruijn ##.k.1205 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1218 1 0)) (set! (bruijn ##.k.1216 0 0) (bruijn ##.foreign-functions.429 20 3) (##inline ##vcore.cons (bruijn ##.expr.465 19 2) (bruijn ##.foreign-functions.429 20 3))) ((bruijn ##.k.1216 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(20l), VEncodeInt(3l),
      VInlineCons2(runtime,
        VGetArg(statics, 19-1, 2),
        VGetArg(statics, 20-1, 3))
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1212 3 0) (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons (bruijn ##.mangled.526 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k320) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k321))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k320, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k321, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.702 22 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k319) (bruijn ##.mangled.526 0 0) (bruijn ##.foreign-functions.429 18 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k319, self)))),
      _var0,
      VGetArg(statics, 18-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.695 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k318) (##inline ##vcore.car (bruijn ##.expr.129.523 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k318, self)))),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.129.523 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k317) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda81) (bruijn ##.kk.100.467 14 1)) ((bruijn ##.k.1205 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k317, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda81, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.521 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k316) (##inline ##vcore.cdr (bruijn ##.expr.128.521 0 0))) ((bruijn ##.k.1205 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k316, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.519 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k315) (##inline ##vcore.cdr (bruijn ##.expr.127.519 0 0))) ((bruijn ##.k.1205 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k315, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.517 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k314) (##inline ##vcore.cdr (bruijn ##.expr.126.517 0 0))) ((bruijn ##.k.1205 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k314, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1206 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k313) (##inline ##vcore.cdr (bruijn ##.expr.465 11 2))) ((bruijn ##.k.1205 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k313, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.465 10 2)) ((bruijn ##.x.682 35 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k312) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.465 10 2))) ((bruijn ##.k.1205 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k312, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1198 0 0) (bruijn ##.k.1194 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1199 1 0) (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.1201 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.433) (bruijn ##.lift-literal.433 15 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k327) (##inline ##vcore.car (bruijn ##.expr.131.528 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k327, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.528 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.131.528 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k326) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda82) (bruijn ##.kk.100.467 12 1)) ((bruijn ##.k.1194 2 0) #f)) ((bruijn ##.k.1194 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k326, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda82, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1195 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k325) (##inline ##vcore.cdr (bruijn ##.expr.465 12 2))) ((bruijn ##.k.1194 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k325, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.465 11 2)) ((bruijn ##.x.682 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k324) 'quote (##inline ##vcore.car (bruijn ##.expr.465 11 2))) ((bruijn ##.k.1194 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k324, self)))),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1187 0 0) (bruijn ##.k.1184 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1188 1 0) (##inline ##vcore.cons '##inline (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.133.531 2 0)) (bruijn ##.x.1190 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 17 9) (bruijn ##.k.1191 0 0) (bruijn ##.fun.464 16 1) (bruijn ##.x.534 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k333) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda84) (##inline ##vcore.cdr (bruijn ##.expr.133.531 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k333, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda84, self)))),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133.531 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k332) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda83) (bruijn ##.kk.100.467 13 1)) ((bruijn ##.k.1184 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k332, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda83, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1185 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k331) (##inline ##vcore.cdr (bruijn ##.expr.465 13 2))) ((bruijn ##.k.1184 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k331, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.465 12 2)) ((bruijn ##.x.682 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k330) '##inline (##inline ##vcore.car (bruijn ##.expr.465 12 2))) ((bruijn ##.k.1184 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k330, self)))),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.697 24 0) (bruijn ##.k.1166 13 0) (##string ##.string.1751))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      VGetArg(statics, 13-1, 0),
      VEncodePointer(&_V10_Dstring_D1751.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1179 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k336))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k336, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.intrin.536 0 0)) ((bruijn ##.k.1180 2 0) (bruijn ##.expr.465 15 2)) (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic.432) (bruijn ##.lift-intrinsic.432 16 6) (bruijn ##.k.1180 2 0) (bruijn ##.expr.465 15 2) (bruijn ##.intrin.536 0 0)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 15-1, 2));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 6));
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 2);
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1742) ((##vcore.symbol? (bruijn ##.expr.465 14 2))) (if (bruijn ##.reg.1742 0 0) (if (bruijn ##.func-position?.466 14 3) ((bruijn ##.k.1180 1 0) (bruijn ##.expr.465 14 2)) ((bruijn ##.x.696 25 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k337) (bruijn ##.expr.465 14 2))) (##qualified-call (vanity compiler lower to-functions ##.lift-literal.433) (bruijn ##.lift-literal.433 15 7) (bruijn ##.k.1180 1 0) (bruijn ##.expr.465 14 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
if(VDecodeBool(
self->vars[0])) {
if(VDecodeBool(
VGetArg(statics, 14-1, 3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 14-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k337, self)))),
      VGetArg(statics, 14-1, 2));
}
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 7));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k335) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda85) (bruijn ##.kk.100.467 11 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k335, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda85, self)))),
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k329) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k334))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k329, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k334, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k323) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k328))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k323, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k328, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k311) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k322))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k311, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k322, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k302) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k310))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k302, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k310, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k290) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k301))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k290, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k301, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k283) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k289))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k283, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k289, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k268) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k282))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k268, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k282, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k255) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k267))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k255, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k267, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k244) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k254))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k244, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k254, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k235) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k243))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k235, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k243, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k231) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k234))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k231, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0k234, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.call/cc (bruijn ##.k.1165 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda70))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435_V0lambda70, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1581 0 0) (bruijn ##.k.1575 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1582 3 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.137.542 7 0)) (##inline ##vcore.cons (bruijn ##.x.1585 2 0) (##inline ##vcore.cons (bruijn ##.x.1587 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 11 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k347) (bruijn ##.x.1588 0 0) (##inline ##vcore.car (bruijn ##.expr.139.546 3 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k347, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.693 23 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k346) (bruijn ##.y.545 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k346, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.433) (bruijn ##.lift-literal.433 9 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k345) (bruijn ##.y.545 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k345, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.139.546 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.139.546 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k344) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda87) (bruijn ##.kk.134.539 6 1)) ((bruijn ##.k.1575 5 0) #f)) ((bruijn ##.k.1575 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k344, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda87, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k343) (##inline ##vcore.cdr (bruijn ##.expr.138.544 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k343, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.544 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k342) (##inline ##vcore.car (bruijn ##.expr.138.544 0 0))) ((bruijn ##.k.1575 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k342, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.542 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k341) (##inline ##vcore.cdr (bruijn ##.expr.137.542 0 0))) ((bruijn ##.k.1575 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k341, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1576 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k340) (##inline ##vcore.cdr (bruijn ##.expr.538 3 2))) ((bruijn ##.k.1575 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k340, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.538 2 2)) ((bruijn ##.x.682 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k339) 'define (##inline ##vcore.car (bruijn ##.expr.538 2 2))) ((bruijn ##.k.1575 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k339, self)))),
      _V0define,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1561 0 0) (bruijn ##.k.1552 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1562 3 0) (##inline ##vcore.cons 'set! (##inline ##vcore.cons (bruijn ##.x.1564 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons (bruijn ##.name.554 5 0) (##inline ##vcore.cdr (bruijn ##.expr.144.553 6 0)))) (##inline ##vcore.cons (bruijn ##.x.1568 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0set_B,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bruijn,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 0)))),
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 15 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k361) (bruijn ##.x.1569 0 0) (##inline ##vcore.car (bruijn ##.expr.145.556 3 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k361, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.693 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k360) (bruijn ##.name.554 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k360, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 13 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k359) (bruijn ##.fun.537 12 1) (##inline ##vcore.car (bruijn ##.expr.141.549 7 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k359, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0));
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.556 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.145.556 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k358) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda88) (bruijn ##.kk.134.539 10 1)) ((bruijn ##.k.1552 8 0) #f)) ((bruijn ##.k.1552 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k358, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda88, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k357) (##inline ##vcore.cdr (bruijn ##.expr.142.551 4 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k357, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.144.553 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k356) (##inline ##vcore.car (bruijn ##.expr.144.553 0 0))) ((bruijn ##.k.1552 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k356, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1557 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k355) (##inline ##vcore.cdr (bruijn ##.expr.143.552 1 0))) ((bruijn ##.k.1552 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k355, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.143.552 0 0)) ((bruijn ##.x.682 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k354) 'bruijn (##inline ##vcore.car (bruijn ##.expr.143.552 0 0))) ((bruijn ##.k.1552 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k354, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.142.551 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k353) (##inline ##vcore.car (bruijn ##.expr.142.551 0 0))) ((bruijn ##.k.1552 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k353, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.549 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k352) (##inline ##vcore.cdr (bruijn ##.expr.141.549 0 0))) ((bruijn ##.k.1552 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k352, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1553 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k351) (##inline ##vcore.cdr (bruijn ##.expr.538 4 2))) ((bruijn ##.k.1552 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k351, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.538 3 2)) ((bruijn ##.x.682 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k350) 'set! (##inline ##vcore.car (bruijn ##.expr.538 3 2))) ((bruijn ##.k.1552 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k350, self)))),
      _V0set_B,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1540 0 0) (bruijn ##.k.1534 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1541 4 0) (##inline ##vcore.cons 'set! (##inline ##vcore.cons (bruijn ##.x.1543 3 0) (##inline ##vcore.cons (bruijn ##.x.1545 2 0) (##inline ##vcore.cons (bruijn ##.x.1547 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0set_B,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 14 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k373) (bruijn ##.x.1548 0 0) (##inline ##vcore.car (bruijn ##.expr.149.563 4 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k373, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.693 26 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k372) (bruijn ##.y.562 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k372, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.433) (bruijn ##.lift-literal.433 12 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k371) (bruijn ##.y.562 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k371, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 11 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k370) (bruijn ##.fun.537 10 1) (##inline ##vcore.car (bruijn ##.expr.147.559 4 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k370, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.149.563 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.149.563 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k369) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda89) (bruijn ##.kk.134.539 8 1)) ((bruijn ##.k.1534 5 0) #f)) ((bruijn ##.k.1534 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k369, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda89, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k368) (##inline ##vcore.cdr (bruijn ##.expr.148.561 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k368, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.148.561 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k367) (##inline ##vcore.car (bruijn ##.expr.148.561 0 0))) ((bruijn ##.k.1534 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k367, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.147.559 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k366) (##inline ##vcore.cdr (bruijn ##.expr.147.559 0 0))) ((bruijn ##.k.1534 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k366, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1535 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k365) (##inline ##vcore.cdr (bruijn ##.expr.538 5 2))) ((bruijn ##.k.1534 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k365, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.538 4 2)) ((bruijn ##.x.682 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k364) 'set! (##inline ##vcore.car (bruijn ##.expr.538 4 2))) ((bruijn ##.k.1534 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k364, self)))),
      _V0set_B,
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1523 0 0) (bruijn ##.k.1517 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1524 3 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.1526 2 0) (##inline ##vcore.cons (bruijn ##.x.1528 1 0) (##inline ##vcore.cons (bruijn ##.x.1530 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 13 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k383) (bruijn ##.fun.537 12 1) (##inline ##vcore.car (bruijn ##.expr.153.570 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k383, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 12 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k382) (bruijn ##.fun.537 11 1) (##inline ##vcore.car (bruijn ##.expr.152.568 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k382, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 11 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k381) (bruijn ##.fun.537 10 1) (##inline ##vcore.car (bruijn ##.expr.151.566 3 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k381, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.153.570 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.153.570 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k380) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda90) (bruijn ##.kk.134.539 8 1)) ((bruijn ##.k.1517 4 0) #f)) ((bruijn ##.k.1517 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k380, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda90, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.568 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k379) (##inline ##vcore.cdr (bruijn ##.expr.152.568 0 0))) ((bruijn ##.k.1517 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k379, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.151.566 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k378) (##inline ##vcore.cdr (bruijn ##.expr.151.566 0 0))) ((bruijn ##.k.1517 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k378, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1518 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k377) (##inline ##vcore.cdr (bruijn ##.expr.538 6 2))) ((bruijn ##.k.1517 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k377, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.538 5 2)) ((bruijn ##.x.682 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k376) 'if (##inline ##vcore.car (bruijn ##.expr.538 5 2))) ((bruijn ##.k.1517 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k376, self)))),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1500 0 0) (bruijn ##.k.1494 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1501 4 0) (##inline ##vcore.cons (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.579 3 0) '())) (bruijn ##.x.1504 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 16 9) (bruijn ##.k.1505 0 0) (bruijn ##.fun.537 15 1) (bruijn ##.x.580 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k394) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda92) (##inline ##vcore.cdr (bruijn ##.expr.538 14 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k394, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda92, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 2)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k393) (bruijn ##.functions.430 14 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.579 1 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.156.574 4 0)) (##inline ##vcore.cons (bruijn ##.x.1513 0 0) '())) '()))) (bruijn ##.functions.430 14 4)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k393, self)))),
      VEncodeInt(14l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
        VGetArg(statics, 14-1, 4))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 13 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k392) (bruijn ##.fun.537 12 1) (##inline ##vcore.car (bruijn ##.expr.157.576 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k392, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.426) (bruijn ##.genlambda.426 12 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k391) (bruijn ##.fun.537 11 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k391, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.157.576 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.157.576 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k390) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda91) (bruijn ##.kk.134.539 9 1)) ((bruijn ##.k.1494 4 0) #f)) ((bruijn ##.k.1494 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k390, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda91, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.574 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k389) (##inline ##vcore.cdr (bruijn ##.expr.156.574 0 0))) ((bruijn ##.k.1494 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k389, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1496 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k388) (##inline ##vcore.cdr (bruijn ##.expr.155.573 1 0))) ((bruijn ##.k.1494 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k388, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.155.573 0 0)) ((bruijn ##.x.682 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k387) 'lambda (##inline ##vcore.car (bruijn ##.expr.155.573 0 0))) ((bruijn ##.k.1494 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k387, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.538 6 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k386) (##inline ##vcore.car (bruijn ##.expr.538 6 2))) ((bruijn ##.k.1494 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k386, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1474 0 0) (bruijn ##.k.1467 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1475 6 0) (##inline ##vcore.cons (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.590 5 0) '())) (bruijn ##.x.1479 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VNULL)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 21 9) (bruijn ##.k.1480 0 0) (bruijn ##.lamb.590 5 0) (bruijn ##.x.591 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k409) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda94) (##inline ##vcore.cdr (bruijn ##.expr.538 19 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k409, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda94, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 2)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k408) (bruijn ##.functions.430 19 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.590 3 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.n.586 6 0) (##inline ##vcore.cons (bruijn ##.x.1488 0 0) '())) '()))) (bruijn ##.functions.430 19 4)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k408, self)))),
      VEncodeInt(19l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL))),
        VGetArg(statics, 19-1, 4))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 18 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k407) (bruijn ##.lamb.590 2 0) (##inline ##vcore.car (bruijn ##.expr.162.587 4 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k407, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k406) (bruijn ##.qualified-functions.428 17 2) (##inline ##vcore.cons (bruijn ##.x.1490 0 0) (bruijn ##.qualified-functions.428 17 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k406, self)))),
      VEncodeInt(17l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 17-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.689 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k405) (bruijn ##.lamb.590 0 0) (bruijn ##.n.586 3 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k405, self)))),
      _var0,
      statics->up->up->vars[0],
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.694 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k404) (##inline ##vcore.car (bruijn ##.expr.160.583 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k404, self)))),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.162.587 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.162.587 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k403) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda93) (bruijn ##.kk.134.539 12 1)) ((bruijn ##.k.1467 6 0) #f)) ((bruijn ##.k.1467 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k403, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda93, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k402) (##inline ##vcore.cdr (bruijn ##.expr.161.585 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k402, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.161.585 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k401) (##inline ##vcore.car (bruijn ##.expr.161.585 0 0))) ((bruijn ##.k.1467 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k401, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.583 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k400) (##inline ##vcore.cdr (bruijn ##.expr.160.583 0 0))) ((bruijn ##.k.1467 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k400, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1469 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k399) (##inline ##vcore.cdr (bruijn ##.expr.159.582 1 0))) ((bruijn ##.k.1467 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k399, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.159.582 0 0)) ((bruijn ##.x.682 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k398) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.159.582 0 0))) ((bruijn ##.k.1467 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k398, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.538 7 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k397) (##inline ##vcore.car (bruijn ##.expr.538 7 2))) ((bruijn ##.k.1467 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 2)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k397, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1455 0 0) (bruijn ##.k.1448 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1456 2 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.164.593 6 0)) (##inline ##vcore.cons (bruijn ##.x.1459 1 0) (##inline ##vcore.cons (bruijn ##.x.1461 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 16 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k419) (bruijn ##.fun.537 15 1) (##inline ##vcore.car (bruijn ##.expr.167.599 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k419, self))));
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 17 9) (bruijn ##.k.1462 1 0) (bruijn ##.x.1463 0 0) (bruijn ##.val.602 1 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 9));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda96, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.693 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k420) (bruijn ##.x.601 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k420, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k418) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda96) (##inline ##vcore.car (bruijn ##.expr.165.595 3 0)) (##inline ##vcore.car (bruijn ##.expr.166.597 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k418, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda96, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.167.599 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.167.599 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k417) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda95) (bruijn ##.kk.134.539 12 1)) ((bruijn ##.k.1448 5 0) #f)) ((bruijn ##.k.1448 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k417, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda95, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.166.597 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k416) (##inline ##vcore.cdr (bruijn ##.expr.166.597 0 0))) ((bruijn ##.k.1448 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k416, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165.595 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k415) (##inline ##vcore.cdr (bruijn ##.expr.165.595 0 0))) ((bruijn ##.k.1448 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k415, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.164.593 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k414) (##inline ##vcore.cdr (bruijn ##.expr.164.593 0 0))) ((bruijn ##.k.1448 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k414, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1449 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k413) (##inline ##vcore.cdr (bruijn ##.expr.538 9 2))) ((bruijn ##.k.1448 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k413, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.538 8 2)) ((bruijn ##.x.682 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k412) 'letrec (##inline ##vcore.car (bruijn ##.expr.538 8 2))) ((bruijn ##.k.1448 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k412, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1430 0 0) (bruijn ##.k.1422 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1431 2 0) (##inline ##vcore.cons 'basic-block (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.169.604 8 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.170.606 7 0)) (##inline ##vcore.cons (bruijn ##.xs.609 5 0) (##inline ##vcore.cons (bruijn ##.x.1436 1 0) (##inline ##vcore.cons (bruijn ##.x.1438 0 0) '())))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0basic__block,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 0)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 19 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k432) (bruijn ##.fun.537 18 1) (##inline ##vcore.car (bruijn ##.expr.173.612 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k432, self))));
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1439 2 0) (##inline ##vcore.cons (bruijn ##.x.1440 1 0) (bruijn ##.x.1441 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 21 9) (bruijn ##.k.1442 0 0) (bruijn ##.fun.537 20 1) (bruijn ##.x.616 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 20-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k434) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda99) (##inline ##vcore.cdr (bruijn ##.val.615 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k434, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda99, self)))),
      VInlineCdr2(runtime,
        statics->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda98, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 19 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k433) (bruijn ##.fun.537 18 1) (##inline ##vcore.car (bruijn ##.val.615 0 2)) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k433, self))));
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        _var2);
    VWORD _arg3 = 
      VEncodeBool(true);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 39 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k431) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda98) (bruijn ##.xs.609 3 0) (##inline ##vcore.car (bruijn ##.expr.172.610 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k431, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda98, self)))),
      statics->up->up->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.612 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.173.612 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k430) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda97) (bruijn ##.kk.134.539 15 1)) ((bruijn ##.k.1422 7 0) #f)) ((bruijn ##.k.1422 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k430, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda97, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.610 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k429) (##inline ##vcore.cdr (bruijn ##.expr.172.610 0 0))) ((bruijn ##.k.1422 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k429, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k428) (##inline ##vcore.cdr (bruijn ##.expr.171.608 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k428, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.171.608 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k427) (##inline ##vcore.car (bruijn ##.expr.171.608 0 0))) ((bruijn ##.k.1422 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k427, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.170.606 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k426) (##inline ##vcore.cdr (bruijn ##.expr.170.606 0 0))) ((bruijn ##.k.1422 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k426, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.169.604 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k425) (##inline ##vcore.cdr (bruijn ##.expr.169.604 0 0))) ((bruijn ##.k.1422 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k425, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1423 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k424) (##inline ##vcore.cdr (bruijn ##.expr.538 10 2))) ((bruijn ##.k.1422 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k424, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.538 9 2)) ((bruijn ##.x.682 34 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k423) 'basic-block (##inline ##vcore.car (bruijn ##.expr.538 9 2))) ((bruijn ##.k.1422 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k423, self)))),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1413 0 0) (bruijn ##.k.1409 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1414 2 0) (##inline ##vcore.cons '##qualified-call (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.175.618 4 0)) (##inline ##vcore.cons (bruijn ##.x.1417 1 0) (bruijn ##.x.1418 0 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__call,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        statics->vars[0],
        _var0))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 17 9) (bruijn ##.k.1419 0 0) (bruijn ##.fun.537 16 1) (bruijn ##.x.623 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k442) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda101) (##inline ##vcore.cdr (bruijn ##.expr.176.620 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k442, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda101, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 15 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k441) (bruijn ##.fun.537 14 1) (##inline ##vcore.car (bruijn ##.expr.176.620 1 0)) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k441, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg3 = 
      VEncodeBool(true);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.176.620 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k440) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda100) (bruijn ##.kk.134.539 12 1)) ((bruijn ##.k.1409 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k440, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda100, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.175.618 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k439) (##inline ##vcore.cdr (bruijn ##.expr.175.618 0 0))) ((bruijn ##.k.1409 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k439, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1410 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k438) (##inline ##vcore.cdr (bruijn ##.expr.538 11 2))) ((bruijn ##.k.1409 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k438, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.538 10 2)) ((bruijn ##.x.682 35 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k437) '##qualified-call (##inline ##vcore.car (bruijn ##.expr.538 10 2))) ((bruijn ##.k.1409 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k437, self)))),
      _V10qualified__call,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.180.627 4 1) (bruijn ##.k.1398 1 0) (bruijn ##.expr.182.629 2 1) (bruijn ##.x.1399 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.182.629 1 1))) ((bruijn ##.x.686 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k446) (bruijn ##.xs.179.630 1 2)) ((bruijn ##.k.1398 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k446, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.180.627 7 1) (bruijn ##.k.1392 2 0) (bruijn ##.expr.182.629 5 1) (bruijn ##.x.1394 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.686 40 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k449) (bruijn ##.xs.179.630 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k449, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.181.631 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k448) (##inline ##vcore.cdr (bruijn ##.expr.182.629 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.182.629 3 1)) (bruijn ##.xs.179.630 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k448, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0lambda104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1391 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0lambda105))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0lambda105, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1389 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0lambda104) (bruijn ##.loop.628 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0lambda104, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k445) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k447))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k445, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628_V0k447, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628")) (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436 ##.loop.628) (bruijn ##.loop.628 0 0) (bruijn ##.k.1388 1 0) (##inline ##vcore.cdr (bruijn ##.expr.538 14 2)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 2));
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V10_Dloop_D628(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1387 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda103))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda103, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1403 0 0) (bruijn ##.k.1401 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1404 2 0) (##inline ##vcore.cons (bruijn ##.x.1405 1 0) (bruijn ##.x.1406 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 16 9) (bruijn ##.k.1407 0 0) (bruijn ##.fun.537 15 1) (bruijn ##.x.635 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k452) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda108) (bruijn ##.xs.634 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k452, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda108, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 14 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k451) (bruijn ##.fun.537 13 1) (##inline ##vcore.car (bruijn ##.expr.538 13 2)) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 9));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k451, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 2));
    VWORD _arg3 = 
      VEncodeBool(true);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda106, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.633 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k450) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda107) (bruijn ##.kk.134.539 11 1)) ((bruijn ##.k.1401 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k450, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda107, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.538 11 2)) (##vcore.call-with-values (bruijn ##.k.1386 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda102) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda106)) ((bruijn ##.k.1386 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 2)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda102, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda106, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.697 22 0) (bruijn ##.k.1384 0 0) (##string ##.string.1752) (bruijn ##.expr.538 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1752.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1373 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda109) (bruijn ##.kk.134.539 10 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 10-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda109, self)))),
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k444) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k453))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k444, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k453, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k436) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k443))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k436, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k443, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k422) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k435))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k422, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k435, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k411) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k421))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k411, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k421, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k396) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k410))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k396, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k410, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k385) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k395))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k385, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k395, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k375) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k384))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k375, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k384, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k363) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k374))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k363, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k374, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k349) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k362))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k349, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k362, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k338) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k348))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k338, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0k348, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1372 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda86))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436_V0lambda86, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1652 0 0) (bruijn ##.k.1650 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1653 0 0) (bruijn ##.expr.637 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1651 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k456) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda111) (bruijn ##.kk.183.638 2 1)) ((bruijn ##.k.1650 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k456, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda111, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.637 2 2)) ((bruijn ##.x.682 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k455) 'bruijn (##inline ##vcore.car (bruijn ##.expr.637 2 2))) ((bruijn ##.k.1650 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k455, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1646 0 0) (bruijn ##.k.1644 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 6 9) (bruijn ##.k.1647 0 0) (bruijn ##.fun.636 5 1) (bruijn ##.expr.637 5 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1645 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k460) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda112) (bruijn ##.kk.183.638 3 1)) ((bruijn ##.k.1644 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k460, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda112, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.637 3 2)) ((bruijn ##.x.682 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k459) 'lambda (##inline ##vcore.car (bruijn ##.expr.637 3 2))) ((bruijn ##.k.1644 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k459, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1640 0 0) (bruijn ##.k.1638 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 7 9) (bruijn ##.k.1641 0 0) (bruijn ##.fun.636 6 1) (bruijn ##.expr.637 6 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1639 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k464) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda113) (bruijn ##.kk.183.638 4 1)) ((bruijn ##.k.1638 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k464, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda113, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.637 4 2)) ((bruijn ##.x.682 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k463) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.637 4 2))) ((bruijn ##.k.1638 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k463, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1634 0 0) (bruijn ##.k.1632 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 8 9) (bruijn ##.k.1635 0 0) (bruijn ##.fun.636 7 1) (bruijn ##.expr.637 7 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1633 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k468) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda114) (bruijn ##.kk.183.638 5 1)) ((bruijn ##.k.1632 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k468, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda114, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.637 5 2)) ((bruijn ##.x.682 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k467) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.637 5 2))) ((bruijn ##.k.1632 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k467, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1628 0 0) (bruijn ##.k.1626 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 9 9) (bruijn ##.k.1629 0 0) (bruijn ##.fun.636 8 1) (bruijn ##.expr.637 8 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1627 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k472) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda115) (bruijn ##.kk.183.638 6 1)) ((bruijn ##.k.1626 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k472, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda115, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.637 6 2)) ((bruijn ##.x.682 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k471) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.637 6 2))) ((bruijn ##.k.1626 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k471, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1622 0 0) (bruijn ##.k.1620 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 10 9) (bruijn ##.k.1623 0 0) (bruijn ##.fun.636 9 1) (bruijn ##.expr.637 9 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1621 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k476) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda116) (bruijn ##.kk.183.638 7 1)) ((bruijn ##.k.1620 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k476, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda116, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.637 7 2)) ((bruijn ##.x.682 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k475) 'continuation (##inline ##vcore.car (bruijn ##.expr.637 7 2))) ((bruijn ##.k.1620 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k475, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1616 0 0) (bruijn ##.k.1614 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 11 9) (bruijn ##.k.1617 0 0) (bruijn ##.fun.636 10 1) (bruijn ##.expr.637 10 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1615 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k480) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda117) (bruijn ##.kk.183.638 8 1)) ((bruijn ##.k.1614 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k480, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda117, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.637 8 2)) ((bruijn ##.x.682 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k479) 'quote (##inline ##vcore.car (bruijn ##.expr.637 8 2))) ((bruijn ##.k.1614 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k479, self)))),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1610 0 0) (bruijn ##.k.1608 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 12 9) (bruijn ##.k.1611 0 0) (bruijn ##.fun.636 11 1) (bruijn ##.expr.637 11 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1609 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k484) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda118) (bruijn ##.kk.183.638 9 1)) ((bruijn ##.k.1608 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k484, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda118, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.637 9 2)) ((bruijn ##.x.682 34 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k483) '##inline (##inline ##vcore.car (bruijn ##.expr.637 9 2))) ((bruijn ##.k.1608 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k483, self)))),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1605 0 0) (bruijn ##.k.1604 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.436) (bruijn ##.iter-apply.436 12 10) (bruijn ##.k.1606 0 0) (bruijn ##.fun.636 11 1) (bruijn ##.expr.637 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 10));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.637 10 2)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k487) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda119) (bruijn ##.kk.183.638 9 1)) ((bruijn ##.k.1604 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 2)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k487, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda119, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.435) (bruijn ##.iter-atom.435 12 9) (bruijn ##.k.1602 0 0) (bruijn ##.fun.636 11 1) (bruijn ##.expr.637 11 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1592 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda120) (bruijn ##.kk.183.638 9 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda120, self)))),
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k486) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k488))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k486, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k488, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k482) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k485))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k482, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k485, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k478) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k481))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k478, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k481, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k474) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k477))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k474, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k477, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k470) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k473))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k470, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k473, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k466) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k469))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k466, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k469, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k462) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k465))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k462, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k465, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k458) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k461))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k458, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k461, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k454) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k457))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k454, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0k457, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1591 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda110))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437_V0lambda110, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1674 0 0) (bruijn ##.k.1672 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1675 0 0) (bruijn ##.d.649 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1673 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k491) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda122) (bruijn ##.kk.194.650 2 1)) ((bruijn ##.k.1672 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k491, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda122, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.d.649 2 1)) ((bruijn ##.x.682 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k490) '##foreign.declare (##inline ##vcore.car (bruijn ##.d.649 2 1))) ((bruijn ##.k.1672 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k490, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1665 0 0) (bruijn ##.k.1660 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.689 28 0) (bruijn ##.k.1666 2 0) '##vcore.declare (bruijn ##.f.655 4 0) (bruijn ##.x.1667 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 4,
      statics->up->vars[0],
      _V10vcore_Ddeclare,
      statics->up->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.692 24 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k500) (bruijn ##.x.1668 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k500, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter.437) (bruijn ##.iter.437 9 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k499) (bruijn ##.f.655 2 0) (##inline ##vcore.car (bruijn ##.expr.199.656 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k499, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.199.656 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.199.656 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k498) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda123) (bruijn ##.kk.194.650 6 1)) ((bruijn ##.k.1660 4 0) #f)) ((bruijn ##.k.1660 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k498, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda123, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k497) (##inline ##vcore.cdr (bruijn ##.expr.198.654 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k497, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.198.654 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k496) (##inline ##vcore.car (bruijn ##.expr.198.654 0 0))) ((bruijn ##.k.1660 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k496, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1661 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k495) (##inline ##vcore.cdr (bruijn ##.d.649 4 1))) ((bruijn ##.k.1660 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k495, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.d.649 3 1)) ((bruijn ##.x.682 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k494) '##vcore.declare (##inline ##vcore.car (bruijn ##.d.649 3 1))) ((bruijn ##.k.1660 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k494, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.697 13 0) (bruijn ##.k.1656 2 0) (##string ##.string.1751))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1751.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k493) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k501))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k493, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k501, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k489) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k492))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k489, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0k492, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1655 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda121))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438_V0lambda121, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439_V0k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439_V0k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1677 3 0) (##inline ##vcore.cons (bruijn ##.k.659 3 2) (bruijn ##.x.1679 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439_V0k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439_V0k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1678 0 0) ((bruijn ##.k.1677 1 0) '()) (basic-block 1 1 (##.reg.1743) ((##vcore.- (bruijn ##.n.658 2 1) 1)) (##qualified-call (vanity compiler lower to-functions ##.make-list.439) (bruijn ##.make-list.439 3 13) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439_V0k503) (bruijn ##.reg.1743 0 0) (bruijn ##.k.659 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[13]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439_V0k503, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.= (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439_V0k502) 0 (bruijn ##.n.658 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439_V0k502, self)))),
      VEncodeInt(0l),
      _var1);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D440_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D440_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1682 0 0) (##vcore.set-car! (bruijn ##.k.1681 1 0) (bruijn ##.l.660 1 1) (bruijn ##.v.662 1 3)) (basic-block 1 1 (##.reg.1744) ((##vcore.- (bruijn ##.x.661 2 2) 1)) (##qualified-call (vanity compiler lower to-functions ##.list-set!.440) (bruijn ##.list-set!.440 3 14) (bruijn ##.k.1681 2 0) (##inline ##vcore.cdr (bruijn ##.l.660 2 1)) (bruijn ##.reg.1744 0 0) (bruijn ##.v.662 2 3))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[14]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      statics->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D440, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.= (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D440_V0k504) (bruijn ##.x.661 0 2) 0)
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D440_V0k504, self)))),
      _var2,
      VEncodeInt(0l));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.1686 1 0) (bruijn ##.x.691 19 0) (bruijn ##.x.1688 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->vars[0],
      VGetArg(statics, 19-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.441 ##.loop.666) (bruijn ##.loop.666 4 0) (bruijn ##.k.1686 3 0) (bruijn ##.ret.667 3 1) (##inline ##vcore.cdr (bruijn ##.l.668 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.list-set!.440) (bruijn ##.list-set!.440 5 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k508) (bruijn ##.ret.667 2 1) (bruijn ##.split.669 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.l.668 2 2)) (bruijn ##.x.1693 0 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 14));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k508, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _var0);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.690 20 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k507) (bruijn ##.ret.667 1 1) (bruijn ##.split.669 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k507, self)))),
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.l.668 0 2)) ((bruijn ##.x.685 24 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k505) (bruijn ##.x.686 23 0) (bruijn ##.ret.667 0 1)) ((bruijn ##.f.663 2 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k506) (##inline ##vcore.car (bruijn ##.l.668 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k505, self)))),
      VGetArg(statics, 23-1, 0),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666_V0k506, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V0k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V0k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.441 ##.loop.666) (bruijn ##.loop.666 1 0) (bruijn ##.k.1685 2 0) (bruijn ##.x.1695 0 0) (bruijn ##.l.665 2 3))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666")) (##qualified-call (vanity compiler lower to-functions ##.make-list.439) (bruijn ##.make-list.439 2 13) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V0k509) (bruijn ##.n.664 1 2) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V10_Dloop_D666, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[13]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441_V0k509, self))));
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1711 0 0) (bruijn ##.k.1709 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1712 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1710 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k512) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda127) (bruijn ##.kk.89.671 2 1)) ((bruijn ##.k.1709 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k512, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda127, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.670 2 1)) ((bruijn ##.x.682 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k511) '##foreign.declare (##inline ##vcore.car (bruijn ##.e.670 2 1))) ((bruijn ##.k.1709 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k511, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1705 0 0) (bruijn ##.k.1703 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1706 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1704 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k516) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda128) (bruijn ##.kk.89.671 3 1)) ((bruijn ##.k.1703 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k516, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda128, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.670 3 1)) ((bruijn ##.x.682 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k515) '##vcore.declare (##inline ##vcore.car (bruijn ##.e.670 3 1))) ((bruijn ##.k.1703 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k515, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1701 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1698 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda129) (bruijn ##.kk.89.671 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda129, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k514) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k517))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k514, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k517, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k510) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k513))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k510, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k513, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1697 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda126))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda126, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.441) (bruijn ##.multi-partition.441 1 15) (bruijn ##.k.1696 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda125) 2 (bruijn ##.exprs.424 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[15]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda125, self))));
    VWORD _arg2 = 
      VEncodeInt(2l);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.689 20 0) (bruijn ##.k.1714 2 0) (bruijn ##.literal-table.431 3 5) (bruijn ##.foreign-functions.429 3 3) (bruijn ##.functions.430 3 4) (bruijn ##.qualified-functions.428 3 2) (bruijn ##.x.1716 0 0) (bruijn ##.x.1715 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 7,
      statics->up->vars[0],
      statics->up->up->vars[5],
      statics->up->up->vars[3],
      statics->up->up->vars[4],
      statics->up->up->vars[2],
      _var0,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.685 23 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k519) (bruijn ##.iter-declare.438 2 12) (bruijn ##.declares.676 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k519, self)))),
      statics->up->vars[12],
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter.437) (bruijn ##.iter.437 2 11) (bruijn ##.k.1717 0 0) (##string ##.string.1753) (bruijn ##.e.679 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[11]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1753.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda130, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.685 22 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k518) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda131) (bruijn ##.globals.675 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k518, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda131, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 16 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427") '() '() '() '() (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D440") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441")) (##vcore.call-with-values (bruijn ##.k.1102 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda124) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda130)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[16]; } container;
    self = &container.self;
    VInitEnv(self, 16, 16, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D426, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D427, self))));
    self->vars[2] = VNULL;
    self->vars[3] = VNULL;
    self->vars[4] = VNULL;
    self->vars[5] = VNULL;
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_D432, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D433, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D434, self))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D435, self))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D436, self))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D437, self))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D438, self))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D439, self))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D440, self))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D441, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda124, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda130, self)))));
    }
}
static void _V0vanity_V0compiler_V0lower_V20_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 5 ((close "_V50_V0vanity_V0compiler_V0lower_V0list__index") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify") 0 0 (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions")) ((bruijn ##.k.681 31 0) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn-ify (bruijn ##.bruijn-ify.243 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'to-functions (bruijn ##.to-functions.246 0 4)) '()))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify, self))));
    self->vars[2] = VEncodeInt(0l);
    self->vars[3] = VEncodeInt(0l);
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bruijn__ify,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0to__functions,
        self->vars[4]),
        VNULL)));
    }
}
static void _V0vanity_V0compiler_V0lower_V20_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 21 0) (close _V0vanity_V0compiler_V0lower_V20_V0k30) 'sprintf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k30, self)))),
      _V0sprintf);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 20 0) (close _V0vanity_V0compiler_V0lower_V20_V0k29) 'assoc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k29, self)))),
      _V0assoc);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 19 0) (close _V0vanity_V0compiler_V0lower_V20_V0k28) 'number?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k28, self)))),
      _V0number_Q);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 18 0) (close _V0vanity_V0compiler_V0lower_V20_V0k27) 'cdar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k27, self)))),
      _V0cdar);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 17 0) (close _V0vanity_V0compiler_V0lower_V20_V0k26) 'gensym)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k26, self)))),
      _V0gensym);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 16 0) (close _V0vanity_V0compiler_V0lower_V20_V0k25) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k25, self)))),
      _V0assv);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 15 0) (close _V0vanity_V0compiler_V0lower_V20_V0k24) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k24, self)))),
      _V0error);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 14 0) (close _V0vanity_V0compiler_V0lower_V20_V0k23) 'lookup-intrinsic-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k23, self)))),
      _V0lookup__intrinsic__name);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 13 0) (close _V0vanity_V0compiler_V0lower_V20_V0k22) 'mangle-foreign-function)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k22, self)))),
      _V0mangle__foreign__function);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 12 0) (close _V0vanity_V0compiler_V0lower_V20_V0k21) 'mangle-qualified-function)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k21, self)))),
      _V0mangle__qualified__function);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 11 0) (close _V0vanity_V0compiler_V0lower_V20_V0k20) 'mangle-symbol)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k20, self)))),
      _V0mangle__symbol);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 10 0) (close _V0vanity_V0compiler_V0lower_V20_V0k19) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k19, self)))),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 9 0) (close _V0vanity_V0compiler_V0lower_V20_V0k18) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k18, self)))),
      _V0values);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 8 0) (close _V0vanity_V0compiler_V0lower_V20_V0k17) 'list-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k17, self)))),
      _V0list__ref);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 7 0) (close _V0vanity_V0compiler_V0lower_V20_V0k16) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k16, self)))),
      _V0list);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 6 0) (close _V0vanity_V0compiler_V0lower_V20_V0k15) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k15, self)))),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 5 0) (close _V0vanity_V0compiler_V0lower_V20_V0k14) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k14, self)))),
      _V0length);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 4 0) (close _V0vanity_V0compiler_V0lower_V20_V0k13) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k13, self)))),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 3 0) (close _V0vanity_V0compiler_V0lower_V20_V0k12) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k12, self)))),
      _V0map);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 2 0) (close _V0vanity_V0compiler_V0lower_V20_V0k11) 'split-at-right)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k11, self)))),
      _V0split__at__right);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 1 0) (close _V0vanity_V0compiler_V0lower_V20_V0k10) 'num-pairs)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k10, self)))),
      _V0num__pairs);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.200 0 0) (close _V0vanity_V0compiler_V0lower_V20_V0k9) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k9, self)))),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0lower_V20_V0k8) (##string ##.string.1754) (bruijn ##.x.1721 6 0) (bruijn ##.x.1722 5 0) (bruijn ##.x.1723 4 0) (bruijn ##.x.1724 3 0) (bruijn ##.x.1725 2 0) (bruijn ##.x.1726 1 0) (bruijn ##.x.1727 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 9,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D1754.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0lower_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k7) (##string ##.string.1755))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D1755.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k6) (##string ##.string.1756))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k5) (##string ##.string.1757))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1757.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k4) (##string ##.string.1758))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1758.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k3) (##string ##.string.1759))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1759.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k2) (##string ##.string.1760))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1760.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0lower_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k1) (##string ##.string.1761))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1761.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0lower_V20 = (VFunc)_V0vanity_V0compiler_V0lower_V20_V0lambda1;
