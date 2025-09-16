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


static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1809 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1808 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1807 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1806 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1805 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1804 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1803 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
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
VWEAK VWORD _V0mangle__foreign;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-foreign" };
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
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "global" };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "to-functions iter-apply match statement exhausted" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "literal-lifting: unknown literal type" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "string" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A_V0k~A" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "~A_V0lambda~A" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "bruijnify-pass: No matching case" };
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
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "bruijnify-pass: No matching lambda" };
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
  _V0mangle__foreign = VEncodePointer(VLookupConstant("_V0mangle__foreign", &_VW_V0mangle__foreign), VPOINTER_OTHER);
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
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VLookupConstant("_V10basic__intrinsic", &_VW_V10basic__intrinsic), VPOINTER_OTHER);
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
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D445, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D444, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D261, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D253, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0list__index, _var0, _var1, _var2);
void _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D253_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D253_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.718 0 0) ((bruijn ##.k.716 1 0) (bruijn ##.i.255 1 2)) (basic-block 1 1 (##.reg.1774) ((##vcore.+ (bruijn ##.i.255 2 2) 1)) (##qualified-call (vanity compiler lower list-index ##.loop.253) (bruijn ##.loop.253 3 0) (bruijn ##.k.716 2 0) (##inline ##vcore.cdr (bruijn ##.l.254 2 1)) (bruijn ##.reg.1774 0 0))))
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
       _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D253(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D253, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.l.254 0 1)) ((bruijn ##.k.716 0 0) #f) ((bruijn ##.p.251 2 1) (close _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D253_V0k31) (##inline ##vcore.car (bruijn ##.l.254 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D253_V0k31, self)))),
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D253")) (##qualified-call (vanity compiler lower list-index ##.loop.253) (bruijn ##.loop.253 0 0) (bruijn ##.k.715 1 0) (bruijn ##.l.252 1 2) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D253, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D253(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.6.265 0 0) ((bruijn ##.x.700 19 0) (bruijn ##.k.723 1 0) 'bruijn (bruijn ##.x.264 1 3) (bruijn ##.depth.262 1 1) (bruijn ##.x.6.265 0 0)) (basic-block 1 1 (##.reg.1775) ((##vcore.+ 1 (bruijn ##.depth.262 2 1))) (##qualified-call (vanity compiler lower bruijn-ify ##.lookup.257) (bruijn ##.lookup.257 3 0) (bruijn ##.k.723 2 0) (bruijn ##.reg.1775 0 0) (##inline ##vcore.cdr (bruijn ##.env.263 2 2)) (bruijn ##.x.264 2 3))))
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.727 0 0) (bruijn ##.x.264 1 3) (bruijn ##.e.267 0 1))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      statics->vars[3],
      _var1);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.env.263 0 2)) ((bruijn ##.k.723 0 0) (bruijn ##.x.264 0 3)) (##qualified-call (vanity compiler lower list-index) (bruijn ##.list-index.246 3 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257_V0k32) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257_V0lambda2) (##inline ##vcore.car (bruijn ##.env.263 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257_V0k32, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257_V0lambda2, self))));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.729 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.268 1 1)) (bruijn ##.x.732 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.268 0 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.258) (bruijn ##.undot.258 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258_V0k33) (##inline ##vcore.cdr (bruijn ##.lst.268 0 1))) (if (##inline ##vcore.null? (bruijn ##.lst.268 0 1)) ((bruijn ##.k.729 0 0) '()) ((bruijn ##.k.729 0 0) (##inline ##vcore.cons (bruijn ##.lst.268 0 1) '()))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258_V0k33, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258(runtime, _closure->env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.12.275 4 1) (bruijn ##.k.766 1 0) (bruijn ##.expr.14.277 2 1) (bruijn ##.x.767 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.14.277 1 1))) ((bruijn ##.x.697 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k36) (bruijn ##.xs.11.278 1 2)) ((bruijn ##.k.766 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k36, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.12.275 7 1) (bruijn ##.k.760 2 0) (bruijn ##.expr.14.277 5 1) (bruijn ##.x.762 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k39) (bruijn ##.xs.11.278 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k39, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.13.279 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k38) (##inline ##vcore.cdr (bruijn ##.expr.14.277 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.14.277 3 1)) (bruijn ##.xs.11.278 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k38, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.759 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0lambda7))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0lambda7, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.757 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0lambda6) (bruijn ##.loop.276 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0lambda6, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k35) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k37))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k35, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276_V0k37, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.259 ##.loop.276) (bruijn ##.loop.276 0 0) (bruijn ##.k.756 1 0) (##inline ##vcore.car (bruijn ##.lamb.270 5 2)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V10_Dloop_D276(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.755 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda5))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda5, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.773 0 0) (bruijn ##.k.769 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.774 2 0) (##inline ##vcore.cons (bruijn ##.x.775 1 0) (##inline ##vcore.cons (bruijn ##.x.777 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 7 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k43) (##inline ##vcore.cons (bruijn ##.xs.282 3 2) (bruijn ##.env.269 6 1)) (##inline ##vcore.car (bruijn ##.expr.15.283 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k43, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.698 25 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k42) (bruijn ##.xs.282 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k42, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.283 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.15.283 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k41) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda9) (bruijn ##.kk.7.271 3 1)) ((bruijn ##.k.769 1 0) #f)) ((bruijn ##.k.769 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda9, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.281 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k40) (##inline ##vcore.cdr (bruijn ##.lamb.270 3 2))) ((bruijn ##.k.769 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k40, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.270 2 2)) (##vcore.call-with-values (bruijn ##.k.754 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda8)) ((bruijn ##.k.754 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda4, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda8, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.744 0 0) (bruijn ##.k.741 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.745 4 0) (##inline ##vcore.cons (bruijn ##.reg.1776 1 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.749 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _V0_P,
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1776) ((##vcore.- (bruijn ##.x.751 1 0) 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 9 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k50) (##inline ##vcore.cons (bruijn ##.proper-xs.289 2 0) (bruijn ##.env.269 8 1)) (##inline ##vcore.car (bruijn ##.expr.17.287 4 0))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k50, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.698 26 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k49) (bruijn ##.proper-xs.289 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k49, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.258) (bruijn ##.undot.258 6 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k48) (##inline ##vcore.car (bruijn ##.lamb.270 5 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k48, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.287 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.17.287 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k47) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda10) (bruijn ##.kk.7.271 3 1)) ((bruijn ##.k.741 1 0) #f)) ((bruijn ##.k.741 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda10, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.270 3 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k46) (##inline ##vcore.cdr (bruijn ##.lamb.270 3 2))) ((bruijn ##.k.741 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k46, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 23 0) (bruijn ##.k.739 0 0) (##string ##.string.1793))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1793.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.736 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda11) (bruijn ##.kk.7.271 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda11, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k45) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k51))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k51, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k34) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k44))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0k44, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.735 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259_V0lambda3, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.24.297 4 1) (bruijn ##.k.1073 1 0) (bruijn ##.expr.26.299 2 1) (bruijn ##.x.1074 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.26.299 1 1))) ((bruijn ##.x.697 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k56) (bruijn ##.xs.23.300 1 2)) ((bruijn ##.k.1073 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k56, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.24.297 7 1) (bruijn ##.k.1067 2 0) (bruijn ##.expr.26.299 5 1) (bruijn ##.x.1069 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k59) (bruijn ##.xs.23.300 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k59, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.25.301 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k58) (##inline ##vcore.cdr (bruijn ##.expr.26.299 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.26.299 3 1)) (bruijn ##.xs.23.300 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k58, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1066 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0lambda16))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0lambda16, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1064 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0lambda15) (bruijn ##.loop.298 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0lambda15, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k55) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k57))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k55, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298_V0k57, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260 ##.loop.298) (bruijn ##.loop.298 0 0) (bruijn ##.k.1063 1 0) (##inline ##vcore.car (bruijn ##.expr.21.295 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D298(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1062 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda14))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda14, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1080 0 0) (bruijn ##.k.1076 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1081 2 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.x.1083 1 0) (##inline ##vcore.cons (bruijn ##.x.1085 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 9 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k63) (##inline ##vcore.cons (bruijn ##.xs.304 3 2) (bruijn ##.env.290 8 1)) (##inline ##vcore.car (bruijn ##.expr.27.305 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k63, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.698 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k62) (bruijn ##.xs.304 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k62, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.305 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.27.305 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k61) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda18) (bruijn ##.kk.18.292 5 1)) ((bruijn ##.k.1076 1 0) #f)) ((bruijn ##.k.1076 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda18, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.303 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k60) (##inline ##vcore.cdr (bruijn ##.expr.21.295 1 0))) ((bruijn ##.k.1076 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k60, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.295 0 0)) (##vcore.call-with-values (bruijn ##.k.1059 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda13) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda17)) ((bruijn ##.k.1059 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda13, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda17, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1060 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k54) (##inline ##vcore.cdr (bruijn ##.expr.291 3 2))) ((bruijn ##.k.1059 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k54, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 2 2)) ((bruijn ##.x.693 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k53) 'lambda (##inline ##vcore.car (bruijn ##.expr.291 2 2))) ((bruijn ##.k.1059 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k53, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1047 0 0) (bruijn ##.k.1042 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1048 4 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.reg.1779 1 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1053 0 0) '())))))
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1779) ((##vcore.- (bruijn ##.x.1055 1 0) 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 11 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k72) (##inline ##vcore.cons (bruijn ##.proper-xs.312 2 0) (bruijn ##.env.290 10 1)) (##inline ##vcore.car (bruijn ##.expr.30.310 4 0))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k72, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.698 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k71) (bruijn ##.proper-xs.312 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k71, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.258) (bruijn ##.undot.258 8 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k70) (##inline ##vcore.car (bruijn ##.expr.29.308 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k70, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.310 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.30.310 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k69) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda19) (bruijn ##.kk.18.292 5 1)) ((bruijn ##.k.1042 3 0) #f)) ((bruijn ##.k.1042 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k69, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda19, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.308 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k68) (##inline ##vcore.cdr (bruijn ##.expr.29.308 0 0))) ((bruijn ##.k.1042 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k68, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1043 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k67) (##inline ##vcore.cdr (bruijn ##.expr.291 4 2))) ((bruijn ##.k.1042 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k67, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 3 2)) ((bruijn ##.x.693 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k66) 'lambda (##inline ##vcore.car (bruijn ##.expr.291 3 2))) ((bruijn ##.k.1042 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k66, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.36.318 4 1) (bruijn ##.k.1024 1 0) (bruijn ##.expr.38.320 2 1) (bruijn ##.x.1025 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.38.320 1 1))) ((bruijn ##.x.697 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k79) (bruijn ##.xs.35.321 1 2)) ((bruijn ##.k.1024 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k79, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.36.318 7 1) (bruijn ##.k.1018 2 0) (bruijn ##.expr.38.320 5 1) (bruijn ##.x.1020 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k82) (bruijn ##.xs.35.321 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k82, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.37.322 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k81) (##inline ##vcore.cdr (bruijn ##.expr.38.320 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.38.320 3 1)) (bruijn ##.xs.35.321 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k81, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1017 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0lambda23))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0lambda23, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1015 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0lambda22) (bruijn ##.loop.319 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0lambda22, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k78) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k80))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k78, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319_V0k80, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260 ##.loop.319) (bruijn ##.loop.319 0 0) (bruijn ##.k.1014 1 0) (##inline ##vcore.car (bruijn ##.expr.33.316 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D319(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1013 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda21))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda21, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1031 0 0) (bruijn ##.k.1027 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1032 2 0) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.32.314 6 0)) (##inline ##vcore.cons (bruijn ##.x.1035 1 0) (##inline ##vcore.cons (bruijn ##.x.1037 0 0) '())))))
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 12 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k86) (##inline ##vcore.cons (bruijn ##.xs.325 3 2) (bruijn ##.env.290 11 1)) (##inline ##vcore.car (bruijn ##.expr.39.326 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k86, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.698 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k85) (bruijn ##.xs.325 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k85, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.326 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.39.326 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k84) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda25) (bruijn ##.kk.18.292 8 1)) ((bruijn ##.k.1027 1 0) #f)) ((bruijn ##.k.1027 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k84, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda25, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.324 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k83) (##inline ##vcore.cdr (bruijn ##.expr.33.316 1 0))) ((bruijn ##.k.1027 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k83, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.316 0 0)) (##vcore.call-with-values (bruijn ##.k.1009 3 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda20) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda24)) ((bruijn ##.k.1009 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda20, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda24, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.314 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k77) (##inline ##vcore.cdr (bruijn ##.expr.32.314 0 0))) ((bruijn ##.k.1009 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k77, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1010 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k76) (##inline ##vcore.cdr (bruijn ##.expr.291 5 2))) ((bruijn ##.k.1009 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k76, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 4 2)) ((bruijn ##.x.693 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k75) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.291 4 2))) ((bruijn ##.k.1009 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k75, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.996 0 0) (bruijn ##.k.990 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.997 4 0) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.41.329 7 0)) (##inline ##vcore.cons (bruijn ##.reg.1778 1 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1003 0 0) '()))))))
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1778) ((##vcore.- (bruijn ##.x.1005 1 0) 1)) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 14 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k96) (##inline ##vcore.cons (bruijn ##.proper-xs.335 2 0) (bruijn ##.env.290 13 1)) (##inline ##vcore.car (bruijn ##.expr.43.333 4 0))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k96, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.698 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k95) (bruijn ##.proper-xs.335 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k95, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.258) (bruijn ##.undot.258 11 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k94) (##inline ##vcore.car (bruijn ##.expr.42.331 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k94, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.333 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.43.333 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k93) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda26) (bruijn ##.kk.18.292 8 1)) ((bruijn ##.k.990 4 0) #f)) ((bruijn ##.k.990 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k93, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda26, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.331 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k92) (##inline ##vcore.cdr (bruijn ##.expr.42.331 0 0))) ((bruijn ##.k.990 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k92, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.329 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k91) (##inline ##vcore.cdr (bruijn ##.expr.41.329 0 0))) ((bruijn ##.k.990 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k91, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.991 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k90) (##inline ##vcore.cdr (bruijn ##.expr.291 6 2))) ((bruijn ##.k.990 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k90, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 5 2)) ((bruijn ##.x.693 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k89) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.291 5 2))) ((bruijn ##.k.990 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k89, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.984 0 0) (bruijn ##.k.982 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.985 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.986 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.259) (bruijn ##.bruijn-lambda.259 10 2) (bruijn ##.k.987 0 0) (bruijn ##.env.290 9 1) (bruijn ##.e.338 0 1))
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k101) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda28) (##inline ##vcore.cdr (bruijn ##.expr.291 8 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k101, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda28, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 2)));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.983 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k100) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda27) (bruijn ##.kk.18.292 6 1)) ((bruijn ##.k.982 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k100, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda27, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 6 2)) ((bruijn ##.x.693 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k99) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.291 6 2))) ((bruijn ##.k.982 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k99, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.975 0 0) (bruijn ##.k.972 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.976 1 0) (##inline ##vcore.cons '##qualified-case-lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.46.340 2 0)) (bruijn ##.x.978 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10qualified__case__lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.259) (bruijn ##.bruijn-lambda.259 12 2) (bruijn ##.k.979 0 0) (bruijn ##.env.290 11 1) (bruijn ##.e.343 0 1))
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k107) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda30) (##inline ##vcore.cdr (bruijn ##.expr.46.340 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k107, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda30, self)))),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.340 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k106) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda29) (bruijn ##.kk.18.292 8 1)) ((bruijn ##.k.972 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k106, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda29, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.973 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k105) (##inline ##vcore.cdr (bruijn ##.expr.291 8 2))) ((bruijn ##.k.972 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k105, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 7 2)) ((bruijn ##.x.693 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k104) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.291 7 2))) ((bruijn ##.k.972 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k104, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.961 0 0) (bruijn ##.k.954 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.962 2 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons '1 (##inline ##vcore.cons (bruijn ##.x.965 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VEncodeInt(1l),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 15 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k116) (##inline ##vcore.cons (bruijn ##.x.967 0 0) (bruijn ##.env.290 14 1)) (##inline ##vcore.car (bruijn ##.expr.50.348 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k116, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.700 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k115) (##inline ##vcore.car (bruijn ##.expr.49.346 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k115, self)))),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.348 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.50.348 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k114) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda31) (bruijn ##.kk.18.292 11 1)) ((bruijn ##.k.954 4 0) #f)) ((bruijn ##.k.954 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k114, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda31, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.346 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.49.346 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k113) (##inline ##vcore.cdr (bruijn ##.expr.48.345 1 0))) ((bruijn ##.k.954 3 0) #f)) ((bruijn ##.k.954 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k113, self)), 1,
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.345 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k112) (##inline ##vcore.car (bruijn ##.expr.48.345 0 0))) ((bruijn ##.k.954 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k112, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.955 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k111) (##inline ##vcore.cdr (bruijn ##.expr.291 9 2))) ((bruijn ##.k.954 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k111, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 8 2)) ((bruijn ##.x.693 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k110) 'continuation (##inline ##vcore.car (bruijn ##.expr.291 8 2))) ((bruijn ##.k.954 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k110, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.56.353 5 1) (bruijn ##.k.931 2 0) (bruijn ##.expr.58.355 3 1) (bruijn ##.x.932 1 0) (bruijn ##.x.933 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 38 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k123) (bruijn ##.vals.55.357 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k123, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.58.355 1 1))) ((bruijn ##.x.697 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k122) (bruijn ##.xs.54.356 1 2)) ((bruijn ##.k.931 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k122, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.361 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.60.361 0 0))) ((bruijn ##.kk.57.358 3 1) (bruijn ##.k.923 1 0) (##inline ##vcore.cdr (bruijn ##.expr.58.355 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.59.359 2 0)) (bruijn ##.xs.54.356 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.60.361 0 0)) (bruijn ##.vals.55.357 6 3))) ((bruijn ##.k.923 1 0) #f)) ((bruijn ##.k.923 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.359 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k127) (##inline ##vcore.cdr (bruijn ##.expr.59.359 1 0))) ((bruijn ##.k.923 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k127, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.56.353 9 1) (bruijn ##.k.918 4 0) (bruijn ##.expr.58.355 7 1) (bruijn ##.x.920 1 0) (bruijn ##.x.921 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 42 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k130) (bruijn ##.vals.55.357 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k130, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k129) (bruijn ##.xs.54.356 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k129, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k126) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k128))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k126, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k128, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k125) (##inline ##vcore.car (bruijn ##.expr.58.355 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k125, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.917 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0lambda35))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0lambda35, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.915 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0lambda34) (bruijn ##.loop.354 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0lambda34, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k121) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k124))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k121, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354_V0k124, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260 ##.loop.354) (bruijn ##.loop.354 0 0) (bruijn ##.k.914 1 0) (##inline ##vcore.car (bruijn ##.expr.52.351 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D354(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.913 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda33))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda33, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.939 0 0) (bruijn ##.k.935 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.940 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.942 2 0) (##inline ##vcore.cons (bruijn ##.xs.364 5 2) (##inline ##vcore.cons (bruijn ##.x.945 1 0) (##inline ##vcore.cons (bruijn ##.x.947 0 0) '()))))))
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 17 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k135) (##inline ##vcore.cons (bruijn ##.xs.364 4 2) (bruijn ##.env.290 16 1)) (##inline ##vcore.car (bruijn ##.expr.61.366 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k135, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 17 3) (bruijn ##.k.949 0 0) (##inline ##vcore.cons (bruijn ##.xs.364 4 2) (bruijn ##.env.290 16 1)) (bruijn ##.e.368 0 1))
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k134) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda38) (bruijn ##.vals.365 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k134, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda38, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.698 34 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k133) (bruijn ##.xs.364 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k133, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.366 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.61.366 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k132) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda37) (bruijn ##.kk.18.292 12 1)) ((bruijn ##.k.935 1 0) #f)) ((bruijn ##.k.935 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k132, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda37, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda36, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.363 0 1)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k131) (##inline ##vcore.cdr (bruijn ##.expr.52.351 1 0))) ((bruijn ##.k.935 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k131, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.351 0 0)) (##vcore.call-with-values (bruijn ##.k.910 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda32) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda36)) ((bruijn ##.k.910 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda32, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda36, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.911 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k120) (##inline ##vcore.cdr (bruijn ##.expr.291 10 2))) ((bruijn ##.k.910 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k120, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 9 2)) ((bruijn ##.x.693 34 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k119) 'letrec (##inline ##vcore.car (bruijn ##.expr.291 9 2))) ((bruijn ##.k.910 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k119, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.695 39 0) (bruijn ##.k.864 0 0) (bruijn ##.expr.64.372 3 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.376 5 1) (bruijn ##.k.884 2 0) (bruijn ##.expr.72.378 3 1) (bruijn ##.x.885 1 0) (bruijn ##.x.886 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 43 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k145) (bruijn ##.vals.69.380 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k145, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.72.378 1 1))) ((bruijn ##.x.697 42 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k144) (bruijn ##.xs.68.379 1 2)) ((bruijn ##.k.884 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k144, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.384 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.74.384 0 0))) ((bruijn ##.kk.71.381 3 1) (bruijn ##.k.876 1 0) (##inline ##vcore.cdr (bruijn ##.expr.72.378 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.73.382 2 0)) (bruijn ##.xs.68.379 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.74.384 0 0)) (bruijn ##.vals.69.380 6 3))) ((bruijn ##.k.876 1 0) #f)) ((bruijn ##.k.876 1 0) #f))
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.382 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k149) (##inline ##vcore.cdr (bruijn ##.expr.73.382 1 0))) ((bruijn ##.k.876 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k149, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.376 9 1) (bruijn ##.k.871 4 0) (bruijn ##.expr.72.378 7 1) (bruijn ##.x.873 1 0) (bruijn ##.x.874 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 47 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k152) (bruijn ##.vals.69.380 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k152, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 46 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k151) (bruijn ##.xs.68.379 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k151, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k148) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k150))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k148, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k150, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k147) (##inline ##vcore.car (bruijn ##.expr.72.378 3 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k147, self)), 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.870 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0lambda44))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0lambda44, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.868 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0lambda43) (bruijn ##.loop.377 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0lambda43, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377, got ~D~N"
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
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k143) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k146))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k143, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377_V0k146, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260 ##.loop.377) (bruijn ##.loop.377 0 0) (bruijn ##.k.867 1 0) (bruijn ##.head.65.373 3 1) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D377(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.866 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda42))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda42, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.892 0 0) (bruijn ##.k.888 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.893 3 0) (##inline ##vcore.cons 'basic-block (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.63.370 9 0)) (##inline ##vcore.cons (bruijn ##.x.896 2 0) (##inline ##vcore.cons (bruijn ##.xs.387 4 2) (##inline ##vcore.cons (bruijn ##.x.899 1 0) (##inline ##vcore.cons (bruijn ##.x.901 0 0) '())))))))
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 21 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k156) (##inline ##vcore.cons (bruijn ##.xs.387 3 2) (bruijn ##.env.290 20 1)) (##inline ##vcore.car (bruijn ##.tail.66.374 4 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k156, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 21 3) (bruijn ##.k.903 0 0) (##inline ##vcore.cons (bruijn ##.xs.387 3 2) (bruijn ##.env.290 20 1)) (bruijn ##.e.391 0 1))
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k155) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda47) (bruijn ##.vals.388 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k155, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda47, self)))),
      statics->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.698 38 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k154) (bruijn ##.xs.387 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k154, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda45, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.386 0 1)) (if (##inline ##vcore.pair? (bruijn ##.tail.66.374 1 2)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.tail.66.374 1 2))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k153) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda46) (bruijn ##.kk.18.292 16 1)) ((bruijn ##.k.888 0 0) #f)) ((bruijn ##.k.888 0 0) #f)) ((bruijn ##.k.888 0 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k153, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda46, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.865 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda41) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda45))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda45, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.906 0 0) -1) ((bruijn ##.k.860 5 0) #f) (##vcore.call-with-values (bruijn ##.k.860 5 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda39) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda40)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(-1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda39, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda40, self)))));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k142) (bruijn ##.x.907 0 0) 1)
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k142, self)))),
      _var0,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.694 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k141) (bruijn ##.expr.64.372 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k141, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.370 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k140) (##inline ##vcore.cdr (bruijn ##.expr.63.370 0 0))) ((bruijn ##.k.860 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k140, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.861 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k139) (##inline ##vcore.cdr (bruijn ##.expr.291 11 2))) ((bruijn ##.k.860 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k139, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 10 2)) ((bruijn ##.x.693 35 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k138) 'basic-block (##inline ##vcore.car (bruijn ##.expr.291 10 2))) ((bruijn ##.k.860 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k138, self)))),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.856 0 0) (bruijn ##.k.854 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.857 0 0) (bruijn ##.expr.291 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.855 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k160) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda48) (bruijn ##.kk.18.292 11 1)) ((bruijn ##.k.854 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k160, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda48, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 11 2)) ((bruijn ##.x.693 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k159) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.291 11 2))) ((bruijn ##.k.854 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k159, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.850 0 0) (bruijn ##.k.848 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.851 0 0) (bruijn ##.expr.291 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 14-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.849 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k164) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda49) (bruijn ##.kk.18.292 12 1)) ((bruijn ##.k.848 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k164, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda49, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 12 2)) ((bruijn ##.x.693 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k163) 'quote (##inline ##vcore.car (bruijn ##.expr.291 12 2))) ((bruijn ##.k.848 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k163, self)))),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.841 0 0) (bruijn ##.k.838 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.842 1 0) (##inline ##vcore.cons '##inline (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.79.395 2 0)) (bruijn ##.x.844 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 18 3) (bruijn ##.k.845 0 0) (bruijn ##.env.290 17 1) (bruijn ##.x.398 0 1))
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 38 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k170) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda51) (##inline ##vcore.cdr (bruijn ##.expr.79.395 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k170, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda51, self)))),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.395 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k169) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda50) (bruijn ##.kk.18.292 14 1)) ((bruijn ##.k.838 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k169, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda50, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.839 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k168) (##inline ##vcore.cdr (bruijn ##.expr.291 14 2))) ((bruijn ##.k.838 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k168, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 13 2)) ((bruijn ##.x.693 38 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k167) '##inline (##inline ##vcore.car (bruijn ##.expr.291 13 2))) ((bruijn ##.k.838 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k167, self)))),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.829 0 0) (bruijn ##.k.825 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.830 2 0) (##inline ##vcore.cons '##qualified-call (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.81.400 4 0)) (##inline ##vcore.cons (bruijn ##.x.833 1 0) (bruijn ##.x.834 0 0)))))
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 21 3) (bruijn ##.k.835 0 0) (bruijn ##.env.290 20 1) (bruijn ##.x.405 0 1))
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k178) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda53) (##inline ##vcore.cdr (bruijn ##.expr.82.402 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k178, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda53, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 19 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k177) (bruijn ##.env.290 18 1) (##inline ##vcore.car (bruijn ##.expr.82.402 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k177, self))));
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.402 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k176) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda52) (bruijn ##.kk.18.292 16 1)) ((bruijn ##.k.825 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k176, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda52, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.400 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k175) (##inline ##vcore.cdr (bruijn ##.expr.81.400 0 0))) ((bruijn ##.k.825 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k175, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.826 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k174) (##inline ##vcore.cdr (bruijn ##.expr.291 15 2))) ((bruijn ##.k.825 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k174, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 15-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 14 2)) ((bruijn ##.x.693 39 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k173) '##qualified-call (##inline ##vcore.car (bruijn ##.expr.291 14 2))) ((bruijn ##.k.825 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k173, self)))),
      _V10qualified__call,
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.86.409 4 1) (bruijn ##.k.814 1 0) (bruijn ##.expr.88.411 2 1) (bruijn ##.x.815 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.88.411 1 1))) ((bruijn ##.x.697 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k182) (bruijn ##.xs.85.412 1 2)) ((bruijn ##.k.814 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k182, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.86.409 7 1) (bruijn ##.k.808 2 0) (bruijn ##.expr.88.411 5 1) (bruijn ##.x.810 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 44 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k185) (bruijn ##.xs.85.412 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k185, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.87.413 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k184) (##inline ##vcore.cdr (bruijn ##.expr.88.411 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.88.411 3 1)) (bruijn ##.xs.85.412 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k184, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.807 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0lambda57))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0lambda57, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.805 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0lambda56) (bruijn ##.loop.410 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0lambda56, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k181) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k183))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k181, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410_V0k183, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410")) (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260 ##.loop.410) (bruijn ##.loop.410 0 0) (bruijn ##.k.804 1 0) (##inline ##vcore.cdr (bruijn ##.expr.291 18 2)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V10_Dloop_D410(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.803 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda55))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda55, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.819 0 0) (bruijn ##.k.817 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.820 2 0) (##inline ##vcore.cons (bruijn ##.x.821 1 0) (bruijn ##.x.822 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 20 3) (bruijn ##.k.823 0 0) (bruijn ##.env.290 19 1) (bruijn ##.x.417 0 1))
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 40 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k188) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda60) (bruijn ##.xs.416 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k188, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda60, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 18 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k187) (bruijn ##.env.290 17 1) (##inline ##vcore.car (bruijn ##.expr.291 17 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 3));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k187, self))));
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 17-1, 2));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda58, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.415 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k186) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda59) (bruijn ##.kk.18.292 15 1)) ((bruijn ##.k.817 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k186, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda59, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.291 15 2)) (##vcore.call-with-values (bruijn ##.k.802 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda54) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda58)) ((bruijn ##.k.802 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 15-1, 2)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda54, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda58, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.699 37 0) (bruijn ##.k.797 0 0) (##string ##.string.1794) (bruijn ##.expr.291 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1794.sym, VPOINTER_OTHER),
      VGetArg(statics, 18-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.781 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda61) (bruijn ##.kk.18.292 16 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 16-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda61, self)))),
      VGetArg(statics, 16-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.798 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k191))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k191, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1777) ((##vcore.symbol? (bruijn ##.expr.291 17 2))) (if (bruijn ##.reg.1777 0 0) (##qualified-call (vanity compiler lower bruijn-ify ##.lookup.257) (bruijn ##.lookup.257 18 0) (bruijn ##.k.799 1 0) 0 (bruijn ##.env.290 17 1) (bruijn ##.expr.291 17 2)) ((bruijn ##.k.799 1 0) (bruijn ##.expr.291 17 2))))
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 17-1, 2));
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k190) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda62) (bruijn ##.kk.18.292 14 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k190, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda62, self)))),
      VGetArg(statics, 14-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k180) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k189))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k180, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k189, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k172) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k179))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k172, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k179, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k166) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k171))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k166, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k171, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k162) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k165))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k162, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k165, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k158) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k161))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k158, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k161, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k137) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k157))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k137, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k157, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k118) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k136))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k118, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k136, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k109) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k117))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k109, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k117, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k103) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k108))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k108, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k98) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k102))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k98, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k102, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k88) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k97))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k88, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k97, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k74) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k87))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k87, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k65) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k73))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k65, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k73, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k52) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k64))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k52, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0k64, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.780 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda12))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260_V0lambda12, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D261, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.iter.260) (bruijn ##.iter.260 1 3) (bruijn ##.k.1089 0 0) '() (bruijn ##.expr.419 0 1))
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1110 0 0) (bruijn ##.k.1108 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1111 0 0) (bruijn ##.expr.256 5 1))
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
  // (if (bruijn ##.p.1109 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k194) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda64) (bruijn ##.kk.0.420 2 1)) ((bruijn ##.k.1108 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.256 3 1)) ((bruijn ##.x.693 26 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k193) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.256 3 1))) ((bruijn ##.k.1108 0 0) #f))
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
  // ((bruijn ##.x.1100 0 0) (bruijn ##.k.1095 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1101 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.424 3 0)) (##inline ##vcore.cons (bruijn ##.x.1104 0 0) '()))))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.doit.261) (bruijn ##.doit.261 7 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k201) (##inline ##vcore.car (bruijn ##.expr.5.426 1 0)))
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D261(runtime, _closure->env, 2, _arg0, _arg1);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.426 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.426 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k200) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda65) (bruijn ##.kk.0.420 5 1)) ((bruijn ##.k.1095 3 0) #f)) ((bruijn ##.k.1095 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.424 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k199) (##inline ##vcore.cdr (bruijn ##.expr.4.424 0 0))) ((bruijn ##.k.1095 2 0) #f))
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
  // (if (bruijn ##.p.1096 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k198) (##inline ##vcore.cdr (bruijn ##.expr.256 5 1))) ((bruijn ##.k.1095 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.256 4 1)) ((bruijn ##.x.693 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k197) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.256 4 1))) ((bruijn ##.k.1095 0 0) #f))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.doit.261) (bruijn ##.doit.261 4 4) (bruijn ##.k.1093 0 0) (bruijn ##.expr.256 5 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[4]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D261(runtime, _closure->env, 2, _arg0, _arg1);
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
  // (##vcore.call-with-values (bruijn ##.k.1090 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda66) (bruijn ##.kk.0.420 2 1))
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
  // (letrec 5 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D261")) (##vcore.call/cc (bruijn ##.k.722 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda63)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D257, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D258, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D259, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Diter_D260, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D261, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda63, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.k.1114 3 0) (bruijn ##.x.1116 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.714 6 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430_V0k204) (##string ##.string.1795) (bruijn ##.fun.447 2 1) (bruijn ##.curlambda.248 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430_V0k204, self)))),
      VEncodePointer(&_V10_Dstring_D1795.sym, VPOINTER_OTHER),
      statics->up->vars[1],
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1780) ((##vcore.+ (bruijn ##.curlambda.248 4 2) 1)) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430_V0k203) (bruijn ##.curlambda.248 4 2) (bruijn ##.reg.1780 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430_V0k203, self)))),
      VEncodeInt(4l), VEncodeInt(2l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.k.1118 3 0) (bruijn ##.x.1120 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.714 6 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431_V0k206) (##string ##.string.1796) (bruijn ##.fun.448 2 1) (bruijn ##.curcont.249 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431_V0k206, self)))),
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER),
      statics->up->vars[1],
      VGetArg(statics, 5-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1781) ((##vcore.+ (bruijn ##.curcont.249 4 3) 1)) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431_V0k205) (bruijn ##.curcont.249 4 3) (bruijn ##.reg.1781 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[3],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431_V0k205, self)))),
      VEncodeInt(4l), VEncodeInt(3l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1122 4 0) (##inline ##vcore.car (bruijn ##.lookup.453 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k210) (bruijn ##.literal-table.436 4 6) (##inline ##vcore.cons (bruijn ##.lookup.453 0 0) (bruijn ##.literal-table.436 4 6)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k210, self)))),
      VEncodeInt(4l), VEncodeInt(6l),
      VInlineCons2(runtime,
        _var0,
        statics->up->up->up->vars[6])
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.452 0 0) ((bruijn ##.k.1122 2 0) (##inline ##vcore.car (bruijn ##.lookup.452 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k209) (##inline ##vcore.cons (bruijn ##.key.451 1 0) (bruijn ##.intrin.450 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k209, self)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.713 6 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k208) (bruijn ##.key.451 0 0) (bruijn ##.literal-table.436 2 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k208, self)))),
      _var0,
      statics->up->vars[6]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.lifting-literals?.429 2 2) ((bruijn ##.x.700 18 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k207) '##intrinsic (bruijn ##.sym.449 0 1)) ((bruijn ##.x.700 18 0) (bruijn ##.k.1122 0 0) '##intrinsic (bruijn ##.sym.449 0 1)))
if(VDecodeBool(
statics->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437_V0k207, self)))),
      _V10intrinsic,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      _var0,
      _V10intrinsic,
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1125 10 0) (##inline ##vcore.cons '##string (##inline ##vcore.cons (bruijn ##.x.1139 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V10string,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.711 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k215) (bruijn ##.literal-table.436 10 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k215, self)))),
      VGetArg(statics, 10-1, 6));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k214) (bruijn ##.literal-table.436 9 6) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.454 8 1) (bruijn ##.x.1142 0 0)) (bruijn ##.literal-table.436 9 6)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k214, self)))),
      VEncodeInt(9l), VEncodeInt(6l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 1),
        _var0),
        VGetArg(statics, 9-1, 6))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.455 0 0) ((bruijn ##.k.1125 7 0) (##inline ##vcore.cons '##string (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.lookup.455 0 0)) '()))) ((bruijn ##.x.710 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k213) (##string ##.string.1797)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k213, self)))),
      VEncodePointer(&_V10_Dstring_D1797.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1149 1 0)) (set! (bruijn ##.k.1146 0 0) (bruijn ##.literal-table.436 10 6) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.454 9 1) '()) (bruijn ##.literal-table.436 10 6))) ((bruijn ##.k.1146 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(10l), VEncodeInt(6l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 9-1, 1),
        VNULL),
        VGetArg(statics, 10-1, 6))
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1125 9 0) (bruijn ##.x.454 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k217) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k218))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k217, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k218, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1127 0 0) ((bruijn ##.k.1125 2 0) (bruijn ##.x.454 2 1)) (basic-block 1 1 (##.reg.1783) ((##vcore.void? (bruijn ##.x.454 3 1))) (if (bruijn ##.reg.1783 0 0) ((bruijn ##.k.1125 3 0) (bruijn ##.x.454 3 1)) (basic-block 1 1 (##.reg.1784) ((##vcore.foreign-pointer? (bruijn ##.x.454 4 1))) (if (bruijn ##.reg.1784 0 0) ((bruijn ##.k.1125 4 0) (bruijn ##.x.454 4 1)) (basic-block 1 1 (##.reg.1785) ((##vcore.char? (bruijn ##.x.454 5 1))) (if (bruijn ##.reg.1785 0 0) ((bruijn ##.k.1125 5 0) (bruijn ##.x.454 5 1)) (if (##inline ##vcore.eq? (bruijn ##.x.454 5 1) #t) ((bruijn ##.k.1125 5 0) (bruijn ##.x.454 5 1)) (if (##inline ##vcore.eq? (bruijn ##.x.454 5 1) #f) ((bruijn ##.k.1125 5 0) (bruijn ##.x.454 5 1)) (if (##inline ##vcore.null? (bruijn ##.x.454 5 1)) ((bruijn ##.k.1125 5 0) (bruijn ##.x.454 5 1)) (basic-block 1 1 (##.reg.1786) ((##vcore.string? (bruijn ##.x.454 6 1))) (if (bruijn ##.reg.1786 0 0) ((bruijn ##.x.713 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k212) (bruijn ##.x.454 6 1) (bruijn ##.literal-table.436 7 6)) (basic-block 1 1 (##.reg.1787) ((##vcore.symbol? (bruijn ##.x.454 7 1))) (if (bruijn ##.reg.1787 0 0) ((bruijn ##.x.709 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k216) (bruijn ##.x.454 7 1) (bruijn ##.literal-table.436 8 6)) ((bruijn ##.x.699 26 0) (bruijn ##.k.1125 7 0) (##string ##.string.1798) (bruijn ##.x.454 7 1))))))))))))))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k212, self)))),
      VGetArg(statics, 6-1, 1),
      VGetArg(statics, 7-1, 6));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k216, self)))),
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 8-1, 6));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1798.sym, VPOINTER_OTHER),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.lifting-literals?.429 2 2) (basic-block 1 1 (##.reg.1782) ((##vcore.int? (bruijn ##.x.454 1 1))) (if (bruijn ##.reg.1782 0 0) ((bruijn ##.k.1125 1 0) (bruijn ##.x.454 1 1)) ((bruijn ##.x.712 7 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k211) (bruijn ##.x.454 1 1)))) ((bruijn ##.k.1125 0 0) (bruijn ##.x.454 0 1)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438_V0k211, self)))),
      statics->vars[1]);
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1171 0 0) (bruijn ##.k.1168 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1172 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lamb.457 5 2)) (##inline ##vcore.cons (bruijn ##.x.1174 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)),
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 5 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k222) (bruijn ##.fun.456 4 1) (##inline ##vcore.car (bruijn ##.expr.96.462 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k222, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.462 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.96.462 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k221) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda68) (bruijn ##.kk.93.458 2 1)) ((bruijn ##.k.1168 1 0) #f)) ((bruijn ##.k.1168 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k221, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda68, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.457 2 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k220) (##inline ##vcore.cdr (bruijn ##.lamb.457 2 2))) ((bruijn ##.k.1168 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k220, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1160 0 0) (bruijn ##.k.1155 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1161 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lamb.457 8 2)) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1164 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 8 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k229) (bruijn ##.fun.456 7 1) (##inline ##vcore.car (bruijn ##.expr.99.467 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k229, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.99.467 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.99.467 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k228) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda69) (bruijn ##.kk.93.458 5 1)) ((bruijn ##.k.1155 3 0) #f)) ((bruijn ##.k.1155 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k228, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda69, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1157 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k227) (##inline ##vcore.cdr (bruijn ##.expr.98.466 1 0))) ((bruijn ##.k.1155 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k227, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.466 0 0)) ((bruijn ##.x.693 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k226) '+ (##inline ##vcore.car (bruijn ##.expr.98.466 0 0))) ((bruijn ##.k.1155 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k226, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lamb.457 3 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k225) (##inline ##vcore.cdr (bruijn ##.lamb.457 3 2))) ((bruijn ##.k.1155 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k225, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.708 13 0) (bruijn ##.k.1151 2 0) (##string ##.string.1799))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1799.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k224) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k230))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k224, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k230, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k219) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k223))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k219, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0k223, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1150 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda67))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439_V0lambda67, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1413 0 0) (bruijn ##.k.1411 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1414 0 0) (bruijn ##.expr.470 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1412 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k233) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda71) (bruijn ##.kk.100.472 2 1)) ((bruijn ##.k.1411 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k233, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda71, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 2 2)) ((bruijn ##.x.693 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k232) 'bruijn (##inline ##vcore.car (bruijn ##.expr.470 2 2))) ((bruijn ##.k.1411 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k232, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1397 0 0) (bruijn ##.k.1392 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1398 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.480 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k242) (bruijn ##.functions.435 10 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.480 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.104.476 4 0)) (##inline ##vcore.cons (bruijn ##.x.1407 0 0) '())) '()))) (bruijn ##.functions.435 10 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k242, self)))),
      VEncodeInt(10l), VEncodeInt(5l),
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
        VGetArg(statics, 10-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 9 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k241) (bruijn ##.fun.469 8 1) (##inline ##vcore.car (bruijn ##.expr.105.478 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k241, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.430) (bruijn ##.genlambda.430 8 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k240) (bruijn ##.fun.469 7 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k240, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.105.478 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.105.478 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k239) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda72) (bruijn ##.kk.100.472 5 1)) ((bruijn ##.k.1392 3 0) #f)) ((bruijn ##.k.1392 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k239, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda72, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.104.476 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k238) (##inline ##vcore.cdr (bruijn ##.expr.104.476 0 0))) ((bruijn ##.k.1392 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k238, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1393 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k237) (##inline ##vcore.cdr (bruijn ##.expr.470 4 2))) ((bruijn ##.k.1392 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k237, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 3 2)) ((bruijn ##.x.693 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k236) 'lambda (##inline ##vcore.car (bruijn ##.expr.470 3 2))) ((bruijn ##.k.1392 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k236, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1376 0 0) (bruijn ##.k.1369 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1377 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.487 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k253) (bruijn ##.functions.435 13 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.487 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.107.482 6 0)) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1387 0 0) '()))) '()))) (bruijn ##.functions.435 13 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k253, self)))),
      VEncodeInt(13l), VEncodeInt(5l),
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
        VGetArg(statics, 13-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 12 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k252) (bruijn ##.fun.469 11 1) (##inline ##vcore.car (bruijn ##.expr.109.485 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k252, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.430) (bruijn ##.genlambda.430 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k251) (bruijn ##.fun.469 10 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k251, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.485 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.109.485 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k250) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda73) (bruijn ##.kk.100.472 8 1)) ((bruijn ##.k.1369 5 0) #f)) ((bruijn ##.k.1369 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k250, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda73, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1373 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k249) (##inline ##vcore.cdr (bruijn ##.expr.108.484 1 0))) ((bruijn ##.k.1369 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k249, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.484 0 0)) ((bruijn ##.x.693 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k248) '+ (##inline ##vcore.car (bruijn ##.expr.108.484 0 0))) ((bruijn ##.k.1369 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k248, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.482 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k247) (##inline ##vcore.cdr (bruijn ##.expr.107.482 0 0))) ((bruijn ##.k.1369 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k247, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1370 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k246) (##inline ##vcore.cdr (bruijn ##.expr.470 5 2))) ((bruijn ##.k.1369 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k246, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 4 2)) ((bruijn ##.x.693 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k245) 'lambda (##inline ##vcore.car (bruijn ##.expr.470 4 2))) ((bruijn ##.k.1369 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k245, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1352 0 0) (bruijn ##.k.1346 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1353 5 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.495 4 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k266) (bruijn ##.functions.435 16 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.495 3 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.n.492 6 0) (##inline ##vcore.cons (bruijn ##.x.1363 0 0) '())) '()))) (bruijn ##.functions.435 16 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k266, self)))),
      VEncodeInt(16l), VEncodeInt(5l),
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
        VGetArg(statics, 16-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 15 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k265) (bruijn ##.lamb.495 2 0) (##inline ##vcore.car (bruijn ##.expr.113.493 4 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k265, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k264) (bruijn ##.qualified-functions.432 14 2) (##inline ##vcore.cons (bruijn ##.x.1365 0 0) (bruijn ##.qualified-functions.432 14 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k264, self)))),
      VEncodeInt(14l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 14-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.700 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k263) (bruijn ##.lamb.495 0 0) (bruijn ##.n.492 3 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k263, self)))),
      _var0,
      statics->up->up->vars[0],
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.705 24 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k262) (##inline ##vcore.car (bruijn ##.expr.111.489 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k262, self)))),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.113.493 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.113.493 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k261) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda74) (bruijn ##.kk.100.472 9 1)) ((bruijn ##.k.1346 5 0) #f)) ((bruijn ##.k.1346 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k261, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda74, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k260) (##inline ##vcore.cdr (bruijn ##.expr.112.491 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k260, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112.491 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k259) (##inline ##vcore.car (bruijn ##.expr.112.491 0 0))) ((bruijn ##.k.1346 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k259, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111.489 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k258) (##inline ##vcore.cdr (bruijn ##.expr.111.489 0 0))) ((bruijn ##.k.1346 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k258, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1347 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k257) (##inline ##vcore.cdr (bruijn ##.expr.470 6 2))) ((bruijn ##.k.1346 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k257, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 5 2)) ((bruijn ##.x.693 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k256) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.470 5 2))) ((bruijn ##.k.1346 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k256, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1327 0 0) (bruijn ##.k.1319 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1328 5 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.504 4 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k281) (bruijn ##.functions.435 19 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.504 3 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.n.500 8 0) (##inline ##vcore.cons '+ (##inline ##vcore.cons (bruijn ##.x.1339 0 0) '()))) '()))) (bruijn ##.functions.435 19 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k281, self)))),
      VEncodeInt(19l), VEncodeInt(5l),
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
        VGetArg(statics, 19-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 18 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k280) (bruijn ##.lamb.504 2 0) (##inline ##vcore.car (bruijn ##.expr.118.502 4 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k280, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k279) (bruijn ##.qualified-functions.432 17 2) (##inline ##vcore.cons (bruijn ##.x.1341 0 0) (bruijn ##.qualified-functions.432 17 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k279, self)))),
      VEncodeInt(17l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 17-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.700 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k278) (bruijn ##.lamb.504 0 0) (bruijn ##.n.500 5 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k278, self)))),
      _var0,
      VGetArg(statics, 5-1, 0),
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.705 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k277) (##inline ##vcore.car (bruijn ##.expr.115.497 6 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k277, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.502 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.118.502 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k276) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda75) (bruijn ##.kk.100.472 12 1)) ((bruijn ##.k.1319 7 0) #f)) ((bruijn ##.k.1319 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k276, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda75, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1324 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k275) (##inline ##vcore.cdr (bruijn ##.expr.117.501 1 0))) ((bruijn ##.k.1319 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k275, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.501 0 0)) ((bruijn ##.x.693 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k274) '+ (##inline ##vcore.car (bruijn ##.expr.117.501 0 0))) ((bruijn ##.k.1319 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k274, self)))),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k273) (##inline ##vcore.cdr (bruijn ##.expr.116.499 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k273, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.116.499 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k272) (##inline ##vcore.car (bruijn ##.expr.116.499 0 0))) ((bruijn ##.k.1319 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k272, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.497 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k271) (##inline ##vcore.cdr (bruijn ##.expr.115.497 0 0))) ((bruijn ##.k.1319 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k271, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1320 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k270) (##inline ##vcore.cdr (bruijn ##.expr.470 7 2))) ((bruijn ##.k.1319 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k270, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 6 2)) ((bruijn ##.x.693 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k269) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.470 6 2))) ((bruijn ##.k.1319 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k269, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1308 0 0) (bruijn ##.k.1306 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1309 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.507 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k288) (bruijn ##.functions.435 12 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.507 1 0) (##inline ##vcore.cons '#t (bruijn ##.x.1315 0 0))) (bruijn ##.functions.435 12 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k288, self)))),
      VEncodeInt(12l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        _var0)),
        VGetArg(statics, 12-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-lambda.439) (bruijn ##.iter-lambda.439 12 9) (bruijn ##.k.1316 0 0) (bruijn ##.fun.469 11 1) (bruijn ##.e.508 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k287) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda77) (##inline ##vcore.cdr (bruijn ##.expr.470 10 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k287, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda77, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 2)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.430) (bruijn ##.genlambda.430 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k286) (bruijn ##.fun.469 9 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k286, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1307 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k285) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda76) (bruijn ##.kk.100.472 7 1)) ((bruijn ##.k.1306 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k285, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda76, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 7 2)) ((bruijn ##.x.693 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k284) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.470 7 2))) ((bruijn ##.k.1306 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k284, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1287 0 0) (bruijn ##.k.1284 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1288 5 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.513 4 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k300) (bruijn ##.functions.435 18 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.513 3 0) (##inline ##vcore.cons '#t (bruijn ##.x.1299 0 0))) (bruijn ##.functions.435 18 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k300, self)))),
      VEncodeInt(18l), VEncodeInt(5l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VEncodeBool(true),
        _var0)),
        VGetArg(statics, 18-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-lambda.439) (bruijn ##.iter-lambda.439 18 9) (bruijn ##.k.1300 0 0) (bruijn ##.fun.469 17 1) (bruijn ##.e.514 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 9));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 38 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k299) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda79) (bruijn ##.cases.512 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k299, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda79, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k298) (bruijn ##.qualified-functions.432 16 2) (##inline ##vcore.cons (bruijn ##.x.1302 0 0) (bruijn ##.qualified-functions.432 16 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k298, self)))),
      VEncodeInt(16l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 16-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.700 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k297) (bruijn ##.lamb.513 0 0) 0 #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k297, self)))),
      _var0,
      VEncodeInt(0l),
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.cases.512 1 0))) (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 14 10) (bruijn ##.k.1288 0 0) (bruijn ##.fun.469 13 1) (##inline ##vcore.cons '##qualified-lambda (##inline ##vcore.cons (bruijn ##.name.511 2 0) (##inline ##vcore.car (bruijn ##.cases.512 1 0)))) (bruijn ##.func-position?.471 13 3)) ((bruijn ##.x.705 26 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k296) (bruijn ##.name.511 2 0)))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k296, self)))),
      statics->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k295) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda78) (bruijn ##.kk.100.472 11 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k295, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda78, self)))),
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k294) (##inline ##vcore.cdr (bruijn ##.expr.121.510 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k294, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.510 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k293) (##inline ##vcore.car (bruijn ##.expr.121.510 0 0))) ((bruijn ##.k.1284 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k293, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1285 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k292) (##inline ##vcore.cdr (bruijn ##.expr.470 9 2))) ((bruijn ##.k.1284 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k292, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 8 2)) ((bruijn ##.x.693 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k291) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.470 8 2))) ((bruijn ##.k.1284 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k291, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1270 0 0) (bruijn ##.k.1265 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1271 3 0) (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.k.520 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k309) (bruijn ##.functions.435 16 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.520 1 0) (##inline ##vcore.cons '#t (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.123.516 4 0)) (##inline ##vcore.cons (bruijn ##.x.1280 0 0) '())) '()))) (bruijn ##.functions.435 16 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k309, self)))),
      VEncodeInt(16l), VEncodeInt(5l),
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
        VGetArg(statics, 16-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 15 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k308) (bruijn ##.fun.469 14 1) (##inline ##vcore.car (bruijn ##.expr.124.518 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k308, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.gencont.431) (bruijn ##.gencont.431 14 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k307) (bruijn ##.fun.469 13 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k307, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.124.518 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.124.518 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k306) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda80) (bruijn ##.kk.100.472 11 1)) ((bruijn ##.k.1265 3 0) #f)) ((bruijn ##.k.1265 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k306, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda80, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.123.516 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k305) (##inline ##vcore.cdr (bruijn ##.expr.123.516 0 0))) ((bruijn ##.k.1265 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k305, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1266 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k304) (##inline ##vcore.cdr (bruijn ##.expr.470 10 2))) ((bruijn ##.k.1265 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k304, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 9 2)) ((bruijn ##.x.693 34 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k303) 'continuation (##inline ##vcore.car (bruijn ##.expr.470 9 2))) ((bruijn ##.k.1265 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k303, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1254 0 0) (bruijn ##.k.1248 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1262 1 0)) (set! (bruijn ##.k.1259 0 0) (bruijn ##.foreign-functions.433 20 3) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.mangled.531 2 0) (bruijn ##.expr.470 19 2)) (bruijn ##.foreign-functions.433 20 3))) ((bruijn ##.k.1259 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(20l), VEncodeInt(3l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VGetArg(statics, 19-1, 2)),
        VGetArg(statics, 20-1, 3))
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1255 3 0) (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons (bruijn ##.mangled.531 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k320) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k321))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k320, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k321, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.713 22 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k319) (bruijn ##.mangled.531 0 0) (bruijn ##.foreign-functions.433 18 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k319, self)))),
      _var0,
      VGetArg(statics, 18-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.706 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k318) (##inline ##vcore.car (bruijn ##.expr.129.528 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k318, self)))),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.129.528 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k317) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda81) (bruijn ##.kk.100.472 14 1)) ((bruijn ##.k.1248 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k317, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda81, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.526 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k316) (##inline ##vcore.cdr (bruijn ##.expr.128.526 0 0))) ((bruijn ##.k.1248 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k316, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.524 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k315) (##inline ##vcore.cdr (bruijn ##.expr.127.524 0 0))) ((bruijn ##.k.1248 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k315, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.522 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k314) (##inline ##vcore.cdr (bruijn ##.expr.126.522 0 0))) ((bruijn ##.k.1248 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k314, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1249 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k313) (##inline ##vcore.cdr (bruijn ##.expr.470 11 2))) ((bruijn ##.k.1248 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k313, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 10 2)) ((bruijn ##.x.693 35 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k312) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.470 10 2))) ((bruijn ##.k.1248 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k312, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1236 0 0) (bruijn ##.k.1233 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1245 1 0)) (set! (bruijn ##.k.1242 0 0) (bruijn ##.intrinsics.434 18 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.name.534 3 0) (bruijn ##.expr.470 17 2)) (bruijn ##.intrinsics.434 18 4))) ((bruijn ##.k.1242 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(18l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VGetArg(statics, 17-1, 2)),
        VGetArg(statics, 18-1, 4))
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1237 3 0) (##inline ##vcore.cons '##intrinsic (##inline ##vcore.cons (bruijn ##.name.534 4 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10intrinsic,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.437) (bruijn ##.lift-intrinsic!.437 18 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k331) (bruijn ##.name.534 3 0) (bruijn ##.name.534 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k331, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k329) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k330))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k329, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k330, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.713 20 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k328) (bruijn ##.name.534 1 0) (bruijn ##.intrinsics.434 16 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k328, self)))),
      statics->vars[0],
      VGetArg(statics, 16-1, 4));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k327) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda82) (bruijn ##.kk.100.472 13 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k327, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda82, self)))),
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.533 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k326) (##inline ##vcore.car (bruijn ##.expr.131.533 0 0))) ((bruijn ##.k.1233 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k326, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1234 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k325) (##inline ##vcore.cdr (bruijn ##.expr.470 12 2))) ((bruijn ##.k.1233 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k325, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 11 2)) ((bruijn ##.x.693 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k324) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.470 11 2))) ((bruijn ##.k.1233 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k324, self)))),
      _V10intrinsic,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1221 0 0) (bruijn ##.k.1218 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1230 1 0)) (set! (bruijn ##.k.1227 0 0) (bruijn ##.intrinsics.434 19 4) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.name.537 3 0) (bruijn ##.expr.470 18 2)) (bruijn ##.intrinsics.434 19 4))) ((bruijn ##.k.1227 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(19l), VEncodeInt(4l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VGetArg(statics, 18-1, 2)),
        VGetArg(statics, 19-1, 4))
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1222 3 0) (##inline ##vcore.cons '##basic-intrinsic (##inline ##vcore.cons (bruijn ##.name.537 4 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10basic__intrinsic,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.437) (bruijn ##.lift-intrinsic!.437 19 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k341) (bruijn ##.name.537 3 0) (bruijn ##.name.537 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k341, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k339) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k340))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k339, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k340, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.713 21 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k338) (bruijn ##.name.537 1 0) (bruijn ##.intrinsics.434 17 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k338, self)))),
      statics->vars[0],
      VGetArg(statics, 17-1, 4));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k337) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda83) (bruijn ##.kk.100.472 14 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k337, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda83, self)))),
      VGetArg(statics, 14-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133.536 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k336) (##inline ##vcore.car (bruijn ##.expr.133.536 0 0))) ((bruijn ##.k.1218 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k336, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1219 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k335) (##inline ##vcore.cdr (bruijn ##.expr.470 13 2))) ((bruijn ##.k.1218 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k335, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 12 2)) ((bruijn ##.x.693 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k334) '##basic-intrinsic (##inline ##vcore.car (bruijn ##.expr.470 12 2))) ((bruijn ##.k.1218 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k334, self)))),
      _V10basic__intrinsic,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1211 0 0) (bruijn ##.k.1207 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1212 1 0) (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.1214 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.438) (bruijn ##.lift-literal.438 17 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k347) (##inline ##vcore.car (bruijn ##.expr.135.539 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k347, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.539 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.135.539 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k346) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda84) (bruijn ##.kk.100.472 14 1)) ((bruijn ##.k.1207 2 0) #f)) ((bruijn ##.k.1207 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k346, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda84, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1208 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k345) (##inline ##vcore.cdr (bruijn ##.expr.470 14 2))) ((bruijn ##.k.1207 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k345, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 13 2)) ((bruijn ##.x.693 38 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k344) 'quote (##inline ##vcore.car (bruijn ##.expr.470 13 2))) ((bruijn ##.k.1207 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k344, self)))),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1200 0 0) (bruijn ##.k.1197 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1201 1 0) (##inline ##vcore.cons '##inline (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.137.542 2 0)) (bruijn ##.x.1203 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        _var0)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 19 10) (bruijn ##.k.1204 0 0) (bruijn ##.fun.469 18 1) (bruijn ##.x.545 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 10));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 39 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k353) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda86) (##inline ##vcore.cdr (bruijn ##.expr.137.542 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k353, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda86, self)))),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.542 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k352) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda85) (bruijn ##.kk.100.472 15 1)) ((bruijn ##.k.1197 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k352, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda85, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1198 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k351) (##inline ##vcore.cdr (bruijn ##.expr.470 15 2))) ((bruijn ##.k.1197 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k351, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 15-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.470 14 2)) ((bruijn ##.x.693 39 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k350) '##inline (##inline ##vcore.car (bruijn ##.expr.470 14 2))) ((bruijn ##.k.1197 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k350, self)))),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.708 26 0) (bruijn ##.k.1177 15 0) (##string ##.string.1799))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      VGetArg(statics, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D1799.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1192 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k356))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k356, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.intrin.547 0 0)) ((bruijn ##.k.1193 2 0) (bruijn ##.expr.470 17 2)) (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.437) (bruijn ##.lift-intrinsic!.437 18 7) (bruijn ##.k.1193 2 0) (bruijn ##.expr.470 17 2) (bruijn ##.intrin.547 0 0)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 17-1, 2));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 7));
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 2);
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1788) ((##vcore.symbol? (bruijn ##.expr.470 16 2))) (if (bruijn ##.reg.1788 0 0) (if (bruijn ##.func-position?.471 16 3) ((bruijn ##.k.1193 1 0) (bruijn ##.expr.470 16 2)) ((bruijn ##.x.707 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k357) (bruijn ##.expr.470 16 2))) (##qualified-call (vanity compiler lower to-functions ##.lift-literal.438) (bruijn ##.lift-literal.438 17 8) (bruijn ##.k.1193 1 0) (bruijn ##.expr.470 16 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 16-1, 2));
if(VDecodeBool(
self->vars[0])) {
if(VDecodeBool(
VGetArg(statics, 16-1, 3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 16-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k357, self)))),
      VGetArg(statics, 16-1, 2));
}
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 8));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k355) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda87) (bruijn ##.kk.100.472 13 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k355, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda87, self)))),
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k349) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k354))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k349, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k354, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k343) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k348))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k343, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k348, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k333) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k342))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k333, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k342, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k323) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k332))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k323, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k332, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k311) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k322))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k311, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k322, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k302) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k310))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k302, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k310, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k290) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k301))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k290, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k301, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k283) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k289))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k283, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k289, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k268) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k282))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k268, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k282, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k255) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k267))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k255, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k267, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k244) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k254))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k244, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k254, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k235) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k243))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k235, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k243, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k231) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k234))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k231, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0k234, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.1176 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda70))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440_V0lambda70, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1625 0 0) (bruijn ##.k.1619 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1626 3 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.141.553 7 0)) (##inline ##vcore.cons (bruijn ##.x.1629 2 0) (##inline ##vcore.cons (bruijn ##.x.1631 0 0) '())))))
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 11 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k367) (bruijn ##.x.1632 0 0) (##inline ##vcore.car (bruijn ##.expr.143.557 3 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k367, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.704 23 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k366) (bruijn ##.y.556 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k366, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.438) (bruijn ##.lift-literal.438 9 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k365) (bruijn ##.y.556 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k365, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.143.557 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.143.557 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k364) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda89) (bruijn ##.kk.138.550 6 1)) ((bruijn ##.k.1619 5 0) #f)) ((bruijn ##.k.1619 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k364, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda89, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k363) (##inline ##vcore.cdr (bruijn ##.expr.142.555 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k363, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.142.555 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k362) (##inline ##vcore.car (bruijn ##.expr.142.555 0 0))) ((bruijn ##.k.1619 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k362, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.553 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k361) (##inline ##vcore.cdr (bruijn ##.expr.141.553 0 0))) ((bruijn ##.k.1619 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k361, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1620 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k360) (##inline ##vcore.cdr (bruijn ##.expr.549 3 2))) ((bruijn ##.k.1619 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k360, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.549 2 2)) ((bruijn ##.x.693 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k359) 'define (##inline ##vcore.car (bruijn ##.expr.549 2 2))) ((bruijn ##.k.1619 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k359, self)))),
      _V0define,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1605 0 0) (bruijn ##.k.1596 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1606 3 0) (##inline ##vcore.cons 'set! (##inline ##vcore.cons (bruijn ##.x.1608 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons (bruijn ##.name.565 5 0) (##inline ##vcore.cdr (bruijn ##.expr.148.564 6 0)))) (##inline ##vcore.cons (bruijn ##.x.1612 0 0) '())))))
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 15 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k381) (bruijn ##.x.1613 0 0) (##inline ##vcore.car (bruijn ##.expr.149.567 3 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k381, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.704 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k380) (bruijn ##.name.565 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k380, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 13 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k379) (bruijn ##.fun.548 12 1) (##inline ##vcore.car (bruijn ##.expr.145.560 7 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k379, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.149.567 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.149.567 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k378) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda90) (bruijn ##.kk.138.550 10 1)) ((bruijn ##.k.1596 8 0) #f)) ((bruijn ##.k.1596 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k378, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda90, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k377) (##inline ##vcore.cdr (bruijn ##.expr.146.562 4 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k377, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.148.564 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k376) (##inline ##vcore.car (bruijn ##.expr.148.564 0 0))) ((bruijn ##.k.1596 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k376, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1601 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k375) (##inline ##vcore.cdr (bruijn ##.expr.147.563 1 0))) ((bruijn ##.k.1596 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k375, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.147.563 0 0)) ((bruijn ##.x.693 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k374) 'bruijn (##inline ##vcore.car (bruijn ##.expr.147.563 0 0))) ((bruijn ##.k.1596 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k374, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.562 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k373) (##inline ##vcore.car (bruijn ##.expr.146.562 0 0))) ((bruijn ##.k.1596 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k373, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.560 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k372) (##inline ##vcore.cdr (bruijn ##.expr.145.560 0 0))) ((bruijn ##.k.1596 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k372, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1597 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k371) (##inline ##vcore.cdr (bruijn ##.expr.549 4 2))) ((bruijn ##.k.1596 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k371, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.549 3 2)) ((bruijn ##.x.693 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k370) 'set! (##inline ##vcore.car (bruijn ##.expr.549 3 2))) ((bruijn ##.k.1596 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k370, self)))),
      _V0set_B,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1584 0 0) (bruijn ##.k.1578 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1585 4 0) (##inline ##vcore.cons 'set! (##inline ##vcore.cons (bruijn ##.x.1587 3 0) (##inline ##vcore.cons (bruijn ##.x.1589 2 0) (##inline ##vcore.cons (bruijn ##.x.1591 0 0) '())))))
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 14 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k393) (bruijn ##.x.1592 0 0) (##inline ##vcore.car (bruijn ##.expr.153.574 4 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k393, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.704 26 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k392) (bruijn ##.y.573 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k392, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.438) (bruijn ##.lift-literal.438 12 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k391) (bruijn ##.y.573 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k391, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 11 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k390) (bruijn ##.fun.548 10 1) (##inline ##vcore.car (bruijn ##.expr.151.570 4 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k390, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.153.574 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.153.574 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k389) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda91) (bruijn ##.kk.138.550 8 1)) ((bruijn ##.k.1578 5 0) #f)) ((bruijn ##.k.1578 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k389, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda91, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k388) (##inline ##vcore.cdr (bruijn ##.expr.152.572 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k388, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.572 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k387) (##inline ##vcore.car (bruijn ##.expr.152.572 0 0))) ((bruijn ##.k.1578 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k387, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.151.570 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k386) (##inline ##vcore.cdr (bruijn ##.expr.151.570 0 0))) ((bruijn ##.k.1578 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k386, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1579 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k385) (##inline ##vcore.cdr (bruijn ##.expr.549 5 2))) ((bruijn ##.k.1578 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k385, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.549 4 2)) ((bruijn ##.x.693 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k384) 'set! (##inline ##vcore.car (bruijn ##.expr.549 4 2))) ((bruijn ##.k.1578 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k384, self)))),
      _V0set_B,
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1567 0 0) (bruijn ##.k.1561 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1568 3 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.1570 2 0) (##inline ##vcore.cons (bruijn ##.x.1572 1 0) (##inline ##vcore.cons (bruijn ##.x.1574 0 0) '())))))
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 13 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k403) (bruijn ##.fun.548 12 1) (##inline ##vcore.car (bruijn ##.expr.157.581 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k403, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 12 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k402) (bruijn ##.fun.548 11 1) (##inline ##vcore.car (bruijn ##.expr.156.579 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k402, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 11 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k401) (bruijn ##.fun.548 10 1) (##inline ##vcore.car (bruijn ##.expr.155.577 3 0)) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k401, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.157.581 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.157.581 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k400) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda92) (bruijn ##.kk.138.550 8 1)) ((bruijn ##.k.1561 4 0) #f)) ((bruijn ##.k.1561 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k400, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda92, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.579 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k399) (##inline ##vcore.cdr (bruijn ##.expr.156.579 0 0))) ((bruijn ##.k.1561 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k399, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.155.577 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k398) (##inline ##vcore.cdr (bruijn ##.expr.155.577 0 0))) ((bruijn ##.k.1561 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k398, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1562 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k397) (##inline ##vcore.cdr (bruijn ##.expr.549 6 2))) ((bruijn ##.k.1561 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k397, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.549 5 2)) ((bruijn ##.x.693 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k396) 'if (##inline ##vcore.car (bruijn ##.expr.549 5 2))) ((bruijn ##.k.1561 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k396, self)))),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1544 0 0) (bruijn ##.k.1538 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1545 4 0) (##inline ##vcore.cons (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.590 3 0) '())) (bruijn ##.x.1548 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 16 10) (bruijn ##.k.1549 0 0) (bruijn ##.fun.548 15 1) (bruijn ##.x.591 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k414) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda94) (##inline ##vcore.cdr (bruijn ##.expr.549 14 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k414, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda94, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 2)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k413) (bruijn ##.functions.435 14 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.590 1 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.160.585 4 0)) (##inline ##vcore.cons (bruijn ##.x.1557 0 0) '())) '()))) (bruijn ##.functions.435 14 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k413, self)))),
      VEncodeInt(14l), VEncodeInt(5l),
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
        VGetArg(statics, 14-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 13 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k412) (bruijn ##.fun.548 12 1) (##inline ##vcore.car (bruijn ##.expr.161.587 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k412, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.430) (bruijn ##.genlambda.430 12 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k411) (bruijn ##.fun.548 11 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k411, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.161.587 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.161.587 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k410) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda93) (bruijn ##.kk.138.550 9 1)) ((bruijn ##.k.1538 4 0) #f)) ((bruijn ##.k.1538 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k410, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda93, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.585 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k409) (##inline ##vcore.cdr (bruijn ##.expr.160.585 0 0))) ((bruijn ##.k.1538 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k409, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1540 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k408) (##inline ##vcore.cdr (bruijn ##.expr.159.584 1 0))) ((bruijn ##.k.1538 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k408, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.159.584 0 0)) ((bruijn ##.x.693 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k407) 'lambda (##inline ##vcore.car (bruijn ##.expr.159.584 0 0))) ((bruijn ##.k.1538 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k407, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.549 6 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k406) (##inline ##vcore.car (bruijn ##.expr.549 6 2))) ((bruijn ##.k.1538 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k406, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1518 0 0) (bruijn ##.k.1511 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1519 6 0) (##inline ##vcore.cons (##inline ##vcore.cons 'close (##inline ##vcore.cons (bruijn ##.lamb.601 5 0) '())) (bruijn ##.x.1523 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VNULL)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 21 10) (bruijn ##.k.1524 0 0) (bruijn ##.lamb.601 5 0) (bruijn ##.x.602 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k429) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda96) (##inline ##vcore.cdr (bruijn ##.expr.549 19 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k429, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda96, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 2)));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k428) (bruijn ##.functions.435 19 5) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.lamb.601 3 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.n.597 6 0) (##inline ##vcore.cons (bruijn ##.x.1532 0 0) '())) '()))) (bruijn ##.functions.435 19 5)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k428, self)))),
      VEncodeInt(19l), VEncodeInt(5l),
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
        VGetArg(statics, 19-1, 5))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 18 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k427) (bruijn ##.lamb.601 2 0) (##inline ##vcore.car (bruijn ##.expr.166.598 4 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k427, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k426) (bruijn ##.qualified-functions.432 17 2) (##inline ##vcore.cons (bruijn ##.x.1534 0 0) (bruijn ##.qualified-functions.432 17 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k426, self)))),
      VEncodeInt(17l), VEncodeInt(2l),
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 17-1, 2))
    );
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.700 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k425) (bruijn ##.lamb.601 0 0) (bruijn ##.n.597 3 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k425, self)))),
      _var0,
      statics->up->up->vars[0],
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.705 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k424) (##inline ##vcore.car (bruijn ##.expr.164.594 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k424, self)))),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.166.598 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.166.598 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k423) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda95) (bruijn ##.kk.138.550 12 1)) ((bruijn ##.k.1511 6 0) #f)) ((bruijn ##.k.1511 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k423, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda95, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k422) (##inline ##vcore.cdr (bruijn ##.expr.165.596 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k422, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165.596 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k421) (##inline ##vcore.car (bruijn ##.expr.165.596 0 0))) ((bruijn ##.k.1511 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k421, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.164.594 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k420) (##inline ##vcore.cdr (bruijn ##.expr.164.594 0 0))) ((bruijn ##.k.1511 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k420, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1513 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k419) (##inline ##vcore.cdr (bruijn ##.expr.163.593 1 0))) ((bruijn ##.k.1511 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k419, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.163.593 0 0)) ((bruijn ##.x.693 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k418) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.163.593 0 0))) ((bruijn ##.k.1511 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k418, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.549 7 2)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k417) (##inline ##vcore.car (bruijn ##.expr.549 7 2))) ((bruijn ##.k.1511 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 2)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k417, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1499 0 0) (bruijn ##.k.1492 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1500 2 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.168.604 6 0)) (##inline ##vcore.cons (bruijn ##.x.1503 1 0) (##inline ##vcore.cons (bruijn ##.x.1505 0 0) '())))))
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 16 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k439) (bruijn ##.fun.548 15 1) (##inline ##vcore.car (bruijn ##.expr.171.610 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k439, self))));
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 17 10) (bruijn ##.k.1506 1 0) (bruijn ##.x.1507 0 0) (bruijn ##.val.613 1 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda98, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.704 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k440) (bruijn ##.x.612 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k440, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k438) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda98) (##inline ##vcore.car (bruijn ##.expr.169.606 3 0)) (##inline ##vcore.car (bruijn ##.expr.170.608 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k438, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda98, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.171.610 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.171.610 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k437) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda97) (bruijn ##.kk.138.550 12 1)) ((bruijn ##.k.1492 5 0) #f)) ((bruijn ##.k.1492 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k437, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda97, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.170.608 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k436) (##inline ##vcore.cdr (bruijn ##.expr.170.608 0 0))) ((bruijn ##.k.1492 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k436, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.169.606 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k435) (##inline ##vcore.cdr (bruijn ##.expr.169.606 0 0))) ((bruijn ##.k.1492 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k435, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.168.604 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k434) (##inline ##vcore.cdr (bruijn ##.expr.168.604 0 0))) ((bruijn ##.k.1492 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k434, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1493 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k433) (##inline ##vcore.cdr (bruijn ##.expr.549 9 2))) ((bruijn ##.k.1492 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k433, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.549 8 2)) ((bruijn ##.x.693 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k432) 'letrec (##inline ##vcore.car (bruijn ##.expr.549 8 2))) ((bruijn ##.k.1492 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k432, self)))),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1474 0 0) (bruijn ##.k.1466 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1475 2 0) (##inline ##vcore.cons 'basic-block (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.173.615 8 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.174.617 7 0)) (##inline ##vcore.cons (bruijn ##.xs.620 5 0) (##inline ##vcore.cons (bruijn ##.x.1480 1 0) (##inline ##vcore.cons (bruijn ##.x.1482 0 0) '())))))))
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 19 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k452) (bruijn ##.fun.548 18 1) (##inline ##vcore.car (bruijn ##.expr.177.623 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 11));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k452, self))));
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1483 2 0) (##inline ##vcore.cons (bruijn ##.x.1484 1 0) (bruijn ##.x.1485 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 21 10) (bruijn ##.k.1486 0 0) (bruijn ##.fun.548 20 1) (bruijn ##.x.627 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 41 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k454) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda101) (##inline ##vcore.cdr (bruijn ##.val.626 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k454, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda101, self)))),
      VInlineCdr2(runtime,
        statics->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda100, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 19 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k453) (bruijn ##.fun.548 18 1) (##inline ##vcore.car (bruijn ##.val.626 0 2)) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k453, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 39 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k451) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda100) (bruijn ##.xs.620 3 0) (##inline ##vcore.car (bruijn ##.expr.176.621 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k451, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda100, self)))),
      statics->up->up->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.177.623 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.177.623 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k450) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda99) (bruijn ##.kk.138.550 15 1)) ((bruijn ##.k.1466 7 0) #f)) ((bruijn ##.k.1466 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k450, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda99, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.176.621 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k449) (##inline ##vcore.cdr (bruijn ##.expr.176.621 0 0))) ((bruijn ##.k.1466 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k449, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k448) (##inline ##vcore.cdr (bruijn ##.expr.175.619 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k448, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.175.619 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k447) (##inline ##vcore.car (bruijn ##.expr.175.619 0 0))) ((bruijn ##.k.1466 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k447, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.174.617 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k446) (##inline ##vcore.cdr (bruijn ##.expr.174.617 0 0))) ((bruijn ##.k.1466 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k446, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.615 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k445) (##inline ##vcore.cdr (bruijn ##.expr.173.615 0 0))) ((bruijn ##.k.1466 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k445, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1467 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k444) (##inline ##vcore.cdr (bruijn ##.expr.549 10 2))) ((bruijn ##.k.1466 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k444, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.549 9 2)) ((bruijn ##.x.693 34 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k443) 'basic-block (##inline ##vcore.car (bruijn ##.expr.549 9 2))) ((bruijn ##.k.1466 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k443, self)))),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1457 0 0) (bruijn ##.k.1453 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1458 2 0) (##inline ##vcore.cons '##qualified-call (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.179.629 4 0)) (##inline ##vcore.cons (bruijn ##.x.1461 1 0) (bruijn ##.x.1462 0 0)))))
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 17 10) (bruijn ##.k.1463 0 0) (bruijn ##.fun.548 16 1) (bruijn ##.x.634 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k462) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda103) (##inline ##vcore.cdr (bruijn ##.expr.180.631 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k462, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda103, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 15 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k461) (bruijn ##.fun.548 14 1) (##inline ##vcore.car (bruijn ##.expr.180.631 1 0)) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k461, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.180.631 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k460) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda102) (bruijn ##.kk.138.550 12 1)) ((bruijn ##.k.1453 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k460, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda102, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.179.629 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k459) (##inline ##vcore.cdr (bruijn ##.expr.179.629 0 0))) ((bruijn ##.k.1453 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k459, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1454 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k458) (##inline ##vcore.cdr (bruijn ##.expr.549 11 2))) ((bruijn ##.k.1453 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k458, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.549 10 2)) ((bruijn ##.x.693 35 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k457) '##qualified-call (##inline ##vcore.car (bruijn ##.expr.549 10 2))) ((bruijn ##.k.1453 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k457, self)))),
      _V10qualified__call,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.184.638 4 1) (bruijn ##.k.1442 1 0) (bruijn ##.expr.186.640 2 1) (bruijn ##.x.1443 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.186.640 1 1))) ((bruijn ##.x.697 37 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k466) (bruijn ##.xs.183.641 1 2)) ((bruijn ##.k.1442 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k466, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.184.638 7 1) (bruijn ##.k.1436 2 0) (bruijn ##.expr.186.640 5 1) (bruijn ##.x.1438 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.697 40 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k469) (bruijn ##.xs.183.641 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k469, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0lambda107, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.185.642 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k468) (##inline ##vcore.cdr (bruijn ##.expr.186.640 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.186.640 3 1)) (bruijn ##.xs.183.641 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k468, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1435 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0lambda107))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0lambda107, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1433 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0lambda106) (bruijn ##.loop.639 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0lambda106, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k465) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k467))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k465, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639_V0k467, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639")) (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441 ##.loop.639) (bruijn ##.loop.639 0 0) (bruijn ##.k.1432 1 0) (##inline ##vcore.cdr (bruijn ##.expr.549 14 2)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V10_Dloop_D639(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1431 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda105))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda105, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1447 0 0) (bruijn ##.k.1445 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1448 2 0) (##inline ##vcore.cons (bruijn ##.x.1449 1 0) (bruijn ##.x.1450 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 16 10) (bruijn ##.k.1451 0 0) (bruijn ##.fun.548 15 1) (bruijn ##.x.646 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 36 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k472) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda110) (bruijn ##.xs.645 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k472, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda110, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 14 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k471) (bruijn ##.fun.548 13 1) (##inline ##vcore.car (bruijn ##.expr.549 13 2)) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k471, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda108, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.644 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k470) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda109) (bruijn ##.kk.138.550 11 1)) ((bruijn ##.k.1445 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k470, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda109, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.549 11 2)) (##vcore.call-with-values (bruijn ##.k.1430 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda104) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda108)) ((bruijn ##.k.1430 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 2)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda104, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda108, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.708 22 0) (bruijn ##.k.1428 0 0) (##string ##.string.1800) (bruijn ##.expr.549 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1800.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1417 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda111) (bruijn ##.kk.138.550 10 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 10-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda111, self)))),
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k464) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k473))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k464, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k473, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k456) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k463))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k456, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k463, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k442) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k455))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k442, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k455, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k431) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k441))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k431, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k441, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k416) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k430))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k416, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k430, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k405) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k415))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k405, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k415, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k395) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k404))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k395, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k404, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k383) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k394))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k383, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k394, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k369) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k382))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k369, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k382, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k358) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k368))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k358, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0k368, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1416 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda88))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441_V0lambda88, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1696 0 0) (bruijn ##.k.1694 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1697 0 0) (bruijn ##.expr.648 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1695 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k476) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda113) (bruijn ##.kk.187.649 2 1)) ((bruijn ##.k.1694 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k476, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda113, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.648 2 2)) ((bruijn ##.x.693 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k475) 'bruijn (##inline ##vcore.car (bruijn ##.expr.648 2 2))) ((bruijn ##.k.1694 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k475, self)))),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1690 0 0) (bruijn ##.k.1688 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 6 10) (bruijn ##.k.1691 0 0) (bruijn ##.fun.647 5 1) (bruijn ##.expr.648 5 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1689 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k480) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda114) (bruijn ##.kk.187.649 3 1)) ((bruijn ##.k.1688 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k480, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda114, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.648 3 2)) ((bruijn ##.x.693 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k479) 'lambda (##inline ##vcore.car (bruijn ##.expr.648 3 2))) ((bruijn ##.k.1688 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k479, self)))),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1684 0 0) (bruijn ##.k.1682 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 7 10) (bruijn ##.k.1685 0 0) (bruijn ##.fun.647 6 1) (bruijn ##.expr.648 6 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1683 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k484) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda115) (bruijn ##.kk.187.649 4 1)) ((bruijn ##.k.1682 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k484, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda115, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.648 4 2)) ((bruijn ##.x.693 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k483) '##qualified-lambda (##inline ##vcore.car (bruijn ##.expr.648 4 2))) ((bruijn ##.k.1682 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k483, self)))),
      _V10qualified__lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1678 0 0) (bruijn ##.k.1676 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 8 10) (bruijn ##.k.1679 0 0) (bruijn ##.fun.647 7 1) (bruijn ##.expr.648 7 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1677 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k488) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda116) (bruijn ##.kk.187.649 5 1)) ((bruijn ##.k.1676 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k488, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda116, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.648 5 2)) ((bruijn ##.x.693 30 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k487) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.648 5 2))) ((bruijn ##.k.1676 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k487, self)))),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1672 0 0) (bruijn ##.k.1670 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 9 10) (bruijn ##.k.1673 0 0) (bruijn ##.fun.647 8 1) (bruijn ##.expr.648 8 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1671 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k492) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda117) (bruijn ##.kk.187.649 6 1)) ((bruijn ##.k.1670 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k492, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda117, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.648 6 2)) ((bruijn ##.x.693 31 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k491) '##qualified-case-lambda (##inline ##vcore.car (bruijn ##.expr.648 6 2))) ((bruijn ##.k.1670 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k491, self)))),
      _V10qualified__case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1666 0 0) (bruijn ##.k.1664 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 10 10) (bruijn ##.k.1667 0 0) (bruijn ##.fun.647 9 1) (bruijn ##.expr.648 9 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1665 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k496) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda118) (bruijn ##.kk.187.649 7 1)) ((bruijn ##.k.1664 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k496, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda118, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.648 7 2)) ((bruijn ##.x.693 32 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k495) 'continuation (##inline ##vcore.car (bruijn ##.expr.648 7 2))) ((bruijn ##.k.1664 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k495, self)))),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1660 0 0) (bruijn ##.k.1658 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 11 10) (bruijn ##.k.1661 0 0) (bruijn ##.fun.647 10 1) (bruijn ##.expr.648 10 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1659 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k500) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda119) (bruijn ##.kk.187.649 8 1)) ((bruijn ##.k.1658 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k500, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda119, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.648 8 2)) ((bruijn ##.x.693 33 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k499) 'quote (##inline ##vcore.car (bruijn ##.expr.648 8 2))) ((bruijn ##.k.1658 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k499, self)))),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1654 0 0) (bruijn ##.k.1652 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 12 10) (bruijn ##.k.1655 0 0) (bruijn ##.fun.647 11 1) (bruijn ##.expr.648 11 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1653 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k504) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda120) (bruijn ##.kk.187.649 9 1)) ((bruijn ##.k.1652 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k504, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda120, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.648 9 2)) ((bruijn ##.x.693 34 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k503) '##inline (##inline ##vcore.car (bruijn ##.expr.648 9 2))) ((bruijn ##.k.1652 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k503, self)))),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1649 0 0) (bruijn ##.k.1648 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.441) (bruijn ##.iter-apply.441 12 11) (bruijn ##.k.1650 0 0) (bruijn ##.fun.647 11 1) (bruijn ##.expr.648 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 11));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.648 10 2)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k507) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda121) (bruijn ##.kk.187.649 9 1)) ((bruijn ##.k.1648 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 2)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k507, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda121, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.440) (bruijn ##.iter-atom.440 12 10) (bruijn ##.k.1646 0 0) (bruijn ##.fun.647 11 1) (bruijn ##.expr.648 11 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 10));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1636 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda122) (bruijn ##.kk.187.649 9 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda122, self)))),
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k506) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k508))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k506, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k508, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k502) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k505))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k502, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k505, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k498) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k501))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k498, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k501, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k494) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k497))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k494, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k497, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k490) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k493))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k490, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k493, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k486) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k489))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k486, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k489, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k482) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k485))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k482, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k485, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k478) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k481))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k478, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k481, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k474) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k477))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k474, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0k477, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1635 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda112))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442_V0lambda112, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1718 0 0) (bruijn ##.k.1716 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1719 0 0) (bruijn ##.d.660 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1717 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k511) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda124) (bruijn ##.kk.198.661 2 1)) ((bruijn ##.k.1716 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k511, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda124, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.d.660 2 1)) ((bruijn ##.x.693 27 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k510) '##foreign.declare (##inline ##vcore.car (bruijn ##.d.660 2 1))) ((bruijn ##.k.1716 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k510, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1709 0 0) (bruijn ##.k.1704 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.700 28 0) (bruijn ##.k.1710 2 0) '##vcore.declare (bruijn ##.f.666 4 0) (bruijn ##.x.1711 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 4,
      statics->up->vars[0],
      _V10vcore_Ddeclare,
      statics->up->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.703 24 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k520) (bruijn ##.x.1712 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k520, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter.442) (bruijn ##.iter.442 9 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k519) (bruijn ##.f.666 2 0) (##inline ##vcore.car (bruijn ##.expr.203.667 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 12));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k519, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.203.667 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.203.667 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k518) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda125) (bruijn ##.kk.198.661 6 1)) ((bruijn ##.k.1704 4 0) #f)) ((bruijn ##.k.1704 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k518, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda125, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k517) (##inline ##vcore.cdr (bruijn ##.expr.202.665 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k517, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.202.665 0 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k516) (##inline ##vcore.car (bruijn ##.expr.202.665 0 0))) ((bruijn ##.k.1704 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k516, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1705 0 0) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k515) (##inline ##vcore.cdr (bruijn ##.d.660 4 1))) ((bruijn ##.k.1704 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k515, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.d.660 3 1)) ((bruijn ##.x.693 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k514) '##vcore.declare (##inline ##vcore.car (bruijn ##.d.660 3 1))) ((bruijn ##.k.1704 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k514, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.708 13 0) (bruijn ##.k.1700 2 0) (##string ##.string.1799))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1799.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k513) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k521))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k513, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k521, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda123, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k509) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k512))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k509, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0k512, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1699 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda123))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443_V0lambda123, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D444_V0k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D444_V0k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1721 3 0) (##inline ##vcore.cons (bruijn ##.k.670 3 2) (bruijn ##.x.1723 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->up->vars[2],
        _var0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D444, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.1789) ((##vcore.= 0 (bruijn ##.n.669 1 1))) (if (bruijn ##.reg.1789 0 0) ((bruijn ##.k.1721 1 0) '()) (basic-block 1 1 (##.reg.1790) ((##vcore.- (bruijn ##.n.669 2 1) 1)) (##qualified-call (vanity compiler lower to-functions ##.make-list.444) (bruijn ##.make-list.444 3 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D444_V0k522) (bruijn ##.reg.1790 0 0) (bruijn ##.k.670 2 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VEncodeInt(0l),
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
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
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[14]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D444_V0k522, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D444(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D445, got ~D~N"
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
  // (basic-block 1 1 (##.reg.1791) ((##vcore.= (bruijn ##.x.672 1 2) 0)) (if (bruijn ##.reg.1791 0 0) (##vcore.set-car! (bruijn ##.k.1725 1 0) (bruijn ##.l.671 1 1) (bruijn ##.v.673 1 3)) (basic-block 1 1 (##.reg.1792) ((##vcore.- (bruijn ##.x.672 2 2) 1)) (##qualified-call (vanity compiler lower to-functions ##.list-set!.445) (bruijn ##.list-set!.445 3 15) (bruijn ##.k.1725 2 0) (##inline ##vcore.cdr (bruijn ##.l.671 2 1)) (bruijn ##.reg.1792 0 0) (bruijn ##.v.673 2 3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
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
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[15]);
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D445(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.1730 1 0) (bruijn ##.x.702 19 0) (bruijn ##.x.1732 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->vars[0],
      VGetArg(statics, 19-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.446 ##.loop.677) (bruijn ##.loop.677 4 0) (bruijn ##.k.1730 3 0) (bruijn ##.ret.678 3 1) (##inline ##vcore.cdr (bruijn ##.l.679 3 2)))
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.list-set!.445) (bruijn ##.list-set!.445 5 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k526) (bruijn ##.ret.678 2 1) (bruijn ##.split.680 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.l.679 2 2)) (bruijn ##.x.1737 0 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 15));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k526, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D445(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.701 20 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k525) (bruijn ##.ret.678 1 1) (bruijn ##.split.680 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k525, self)))),
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.l.679 0 2)) ((bruijn ##.x.696 24 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k523) (bruijn ##.x.697 23 0) (bruijn ##.ret.678 0 1)) ((bruijn ##.f.674 2 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k524) (##inline ##vcore.car (bruijn ##.l.679 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k523, self)))),
      VGetArg(statics, 23-1, 0),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677_V0k524, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V0k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V0k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.446 ##.loop.677) (bruijn ##.loop.677 1 0) (bruijn ##.k.1729 2 0) (bruijn ##.x.1739 0 0) (bruijn ##.l.676 2 3))
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446, got ~D~N"
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677")) (##qualified-call (vanity compiler lower to-functions ##.make-list.444) (bruijn ##.make-list.444 2 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V0k527) (bruijn ##.n.675 1 2) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V10_Dloop_D677, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[14]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446_V0k527, self))));
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D444(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1755 0 0) (bruijn ##.k.1753 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1756 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1754 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k530) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda129) (bruijn ##.kk.89.682 2 1)) ((bruijn ##.k.1753 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k530, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda129, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.681 2 1)) ((bruijn ##.x.693 28 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k529) '##foreign.declare (##inline ##vcore.car (bruijn ##.e.681 2 1))) ((bruijn ##.k.1753 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k529, self)))),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1749 0 0) (bruijn ##.k.1747 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1750 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1748 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k534) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda130) (bruijn ##.kk.89.682 3 1)) ((bruijn ##.k.1747 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k534, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda130, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.681 3 1)) ((bruijn ##.x.693 29 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k533) '##vcore.declare (##inline ##vcore.car (bruijn ##.e.681 3 1))) ((bruijn ##.k.1747 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k533, self)))),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1745 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1742 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda131) (bruijn ##.kk.89.682 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda131, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k532) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k535))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k532, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k535, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k528) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k531))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k528, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k531, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1741 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda128))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda128, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.446) (bruijn ##.multi-partition.446 1 16) (bruijn ##.k.1740 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda127) 2 (bruijn ##.exprs.428 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[16]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda127, self))));
    VWORD _arg2 = 
      VEncodeInt(2l);
    VWORD _arg3 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.700 22 0) (bruijn ##.k.1758 4 0) (bruijn ##.literal-table.436 5 6) (bruijn ##.x.1761 1 0) (bruijn ##.x.1762 0 0) (bruijn ##.functions.435 5 5) (bruijn ##.qualified-functions.432 5 2) (bruijn ##.x.1760 2 0) (bruijn ##.x.1759 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 8,
      statics->up->up->up->vars[0],
      VGetArg(statics, 5-1, 6),
      statics->vars[0],
      _var0,
      VGetArg(statics, 5-1, 5),
      VGetArg(statics, 5-1, 2),
      statics->up->vars[0],
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 25 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k539) (##intrinsic ##vcore.cdr) (bruijn ##.intrinsics.434 4 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k539, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 24 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k538) (##intrinsic ##vcore.cdr) (bruijn ##.foreign-functions.433 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k538, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.696 23 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k537) (bruijn ##.iter-declare.443 2 13) (bruijn ##.declares.687 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k537, self)))),
      statics->up->vars[13],
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda133, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter.442) (bruijn ##.iter.442 2 12) (bruijn ##.k.1763 0 0) (##string ##.string.1801) (bruijn ##.e.690 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[12]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1801.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda132, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.696 22 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k536) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda133) (bruijn ##.globals.686 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k536, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda133, self)))),
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
  // (letrec 17 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431") '() '() '() '() '() (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D444") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D445") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446")) (##vcore.call-with-values (bruijn ##.k.1113 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda126) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda132)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[17]; } container;
    self = &container.self;
    VInitEnv(self, 17, 17, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D430, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D431, self))));
    self->vars[2] = VNULL;
    self->vars[3] = VNULL;
    self->vars[4] = VNULL;
    self->vars[5] = VNULL;
    self->vars[6] = VNULL;
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D437, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D438, self))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D439, self))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D440, self))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D441, self))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter_D442, self))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D443, self))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmake__list_D444, self))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlist__set_B_D445, self))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D446, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda126, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda132, self)))));
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
  // (letrec 5 ((close "_V50_V0vanity_V0compiler_V0lower_V0list__index") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify") 0 0 (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions")) ((bruijn ##.k.692 31 0) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn-ify (bruijn ##.bruijn-ify.247 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'to-functions (bruijn ##.to-functions.250 0 4)) '()))))
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
  // ((bruijn ##..vcore.import.204 21 0) (close _V0vanity_V0compiler_V0lower_V20_V0k30) 'sprintf)
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
  // ((bruijn ##..vcore.import.204 20 0) (close _V0vanity_V0compiler_V0lower_V20_V0k29) 'assoc)
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
  // ((bruijn ##..vcore.import.204 19 0) (close _V0vanity_V0compiler_V0lower_V20_V0k28) 'number?)
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
  // ((bruijn ##..vcore.import.204 18 0) (close _V0vanity_V0compiler_V0lower_V20_V0k27) 'cdar)
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
  // ((bruijn ##..vcore.import.204 17 0) (close _V0vanity_V0compiler_V0lower_V20_V0k26) 'gensym)
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
  // ((bruijn ##..vcore.import.204 16 0) (close _V0vanity_V0compiler_V0lower_V20_V0k25) 'assv)
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
  // ((bruijn ##..vcore.import.204 15 0) (close _V0vanity_V0compiler_V0lower_V20_V0k24) 'error)
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
  // ((bruijn ##..vcore.import.204 14 0) (close _V0vanity_V0compiler_V0lower_V20_V0k23) 'lookup-intrinsic-name)
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
  // ((bruijn ##..vcore.import.204 13 0) (close _V0vanity_V0compiler_V0lower_V20_V0k22) 'mangle-foreign)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k22, self)))),
      _V0mangle__foreign);
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
  // ((bruijn ##..vcore.import.204 12 0) (close _V0vanity_V0compiler_V0lower_V20_V0k21) 'mangle-qualified-function)
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
  // ((bruijn ##..vcore.import.204 11 0) (close _V0vanity_V0compiler_V0lower_V20_V0k20) 'mangle-symbol)
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
  // ((bruijn ##..vcore.import.204 10 0) (close _V0vanity_V0compiler_V0lower_V20_V0k19) 'cadr)
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
  // ((bruijn ##..vcore.import.204 9 0) (close _V0vanity_V0compiler_V0lower_V20_V0k18) 'values)
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
  // ((bruijn ##..vcore.import.204 8 0) (close _V0vanity_V0compiler_V0lower_V20_V0k17) 'list-ref)
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
  // ((bruijn ##..vcore.import.204 7 0) (close _V0vanity_V0compiler_V0lower_V20_V0k16) 'list)
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
  // ((bruijn ##..vcore.import.204 6 0) (close _V0vanity_V0compiler_V0lower_V20_V0k15) 'compiler-error)
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
  // ((bruijn ##..vcore.import.204 5 0) (close _V0vanity_V0compiler_V0lower_V20_V0k14) 'length)
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
  // ((bruijn ##..vcore.import.204 4 0) (close _V0vanity_V0compiler_V0lower_V20_V0k13) 'reverse)
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
  // ((bruijn ##..vcore.import.204 3 0) (close _V0vanity_V0compiler_V0lower_V20_V0k12) 'map)
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
  // ((bruijn ##..vcore.import.204 2 0) (close _V0vanity_V0compiler_V0lower_V20_V0k11) 'split-at-right)
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
  // ((bruijn ##..vcore.import.204 1 0) (close _V0vanity_V0compiler_V0lower_V20_V0k10) 'num-pairs)
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
  // ((bruijn ##..vcore.import.204 0 0) (close _V0vanity_V0compiler_V0lower_V20_V0k9) 'equal?)
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0lower_V20_V0k8) (##string ##.string.1802) (bruijn ##.x.1767 6 0) (bruijn ##.x.1768 5 0) (bruijn ##.x.1769 4 0) (bruijn ##.x.1770 3 0) (bruijn ##.x.1771 2 0) (bruijn ##.x.1772 1 0) (bruijn ##.x.1773 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 9,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D1802.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k7) (##string ##.string.1803))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D1803.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k6) (##string ##.string.1804))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D1804.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k5) (##string ##.string.1805))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1805.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k4) (##string ##.string.1806))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1806.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k3) (##string ##.string.1807))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1807.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k2) (##string ##.string.1808))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1808.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k1) (##string ##.string.1809))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1809.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0lower_V20 = (VFunc)_V0vanity_V0compiler_V0lower_V20_V0lambda1;
