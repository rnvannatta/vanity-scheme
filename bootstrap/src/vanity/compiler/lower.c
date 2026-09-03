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

V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0compiler_V0lower;

static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D3002 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D3001 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D3000 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2999 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2998 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D2997 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2996 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D2995 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "_V0vanity_V0compiler_V0hush_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D2994 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
VWEAK VWORD _V0ungensym;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0ungensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "ungensym" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0make__hush__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hush__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hush-table" };
VWEAK VWORD _V0hush__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hush__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hush-table-ref" };
VWEAK VWORD _V0hush__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hush__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hush-table-set!" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
VWEAK VWORD _V0typevector_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0typevector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "typevector\?" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0vector__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-map" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0mangle__foreign;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-foreign" };
VWEAK VWORD _V0mangle__qualified__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0mangle__qualified__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "mangle-qualified-function" };
VWEAK VWORD _V0drop__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0drop__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "drop-right" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0make__list;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0make__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "make-list" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0list__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0list__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "list-set!" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2993 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
VWEAK VWORD _V0to__functions;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0to__functions = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "to-functions" };
VWEAK VWORD _V0bruijn__ify;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0bruijn__ify = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "bruijn-ify" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2992 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "bruijnify-pass: No matching case" };
static VPair _V10_Dpair_D2991 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2990 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2989 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2988 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D2987 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2986 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D2985 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "bruijnify-pass: No matching lambda" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D2984 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "global" };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D2983 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "to-functions iter-apply match statement exhausted" };
VWEAK VWORD _V10qualified__call;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10qualified__call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##qualified-call" };
VWEAK VWORD _V0basic__block;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0basic__block = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "basic-block" };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2982 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2981 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "literal-lifting: unknown literal type" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D2980 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "vector" };
VWEAK VWORD _V10vector;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##vector" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D2979 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "pair" };
VWEAK VWORD _V10pair;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V10pair = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "##pair" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D2978 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "string" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D2977 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "typevector" };
VWEAK VWORD _V10typevector;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10typevector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##typevector" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D2976 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A_V0k~A" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D2975 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "~A_V0lambda~A" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0list__index, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0improper__map, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D615, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0lower_V0to__functions, _var0, _var1, _var2, _var3);
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.%k.837 2 0) (bruijn ##.%x.838 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->vars[0],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301_V0k12(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.sprintf.268 6 25) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301_V0k13) (##string ##.string.2975) (bruijn ##.fun.320 1 1) (bruijn ##.curlambda.293 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 25)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301_V0k13, self)))),
      VEncodePointer(&_V10_Dstring_D2975.sym, VPOINTER_OTHER),
      statics->vars[1],
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.2013) ((##vcore.+ (bruijn ##.curlambda.293 5 2) 1)) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301_V0k12) (bruijn ##.curlambda.293 5 2) (bruijn ##.%x.2013 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301_V0k12, self)))),
      VEncodeInt(5l), VEncodeInt(2l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.%k.840 2 0) (bruijn ##.%x.841 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->vars[0],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302_V0k14(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.sprintf.268 6 25) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302_V0k15) (##string ##.string.2976) (bruijn ##.fun.321 1 1) (bruijn ##.curcont.292 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 25)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302_V0k15, self)))),
      VEncodePointer(&_V10_Dstring_D2976.sym, VPOINTER_OTHER),
      statics->vars[1],
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.2014) ((##vcore.+ (bruijn ##.curcont.292 5 1) 1)) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302_V0k14) (bruijn ##.curcont.292 5 1) (bruijn ##.%x.2014 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302_V0k14, self)))),
      VEncodeInt(5l), VEncodeInt(1l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.val.323 0 0) (basic-block 1 1 (##.%r.2015) ((##vcore.cons (bruijn ##.key.322 2 1) (bruijn ##.val.323 1 0))) ((bruijn ##.%k.844 2 0) (bruijn ##.%r.2015 0 0))) ((bruijn ##.%k.844 1 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.845 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.hush-table-ref.266 5 23) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310_V0k16) (bruijn ##.literal-hushtable.308 1 7) (bruijn ##.key.322 0 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310_V0lambda3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 23)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310_V0k16, self)))),
      statics->vars[7],
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310_V0lambda3, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311_V0k17(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2016 ##.%x.2017) ((##vcore.cons (bruijn ##.key.324 1 1) (bruijn ##.val.325 1 2)) (##vcore.cons (bruijn ##.%x.2016 0 0) (bruijn ##.literal-table.307 2 6))) (set! (bruijn ##.%k.846 1 0) (bruijn ##.literal-table.307 2 6) (bruijn ##.%x.2017 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->vars[6]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(6l),
      self->vars[1]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.hush-table-set!.265 5 22) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311_V0k17) (bruijn ##.literal-hushtable.308 1 7) (bruijn ##.key.324 0 1) (bruijn ##.val.325 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 22)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311_V0k17, self)))),
      statics->vars[7],
      _var1,
      _var2);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k20(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%r.2020) ((##vcore.car (bruijn ##.lookup.2019 1 0))) ((bruijn ##.%k.849 4 0) (bruijn ##.%r.2020 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.329 0 0) (basic-block 1 1 (##.%r.2018) ((##vcore.car (bruijn ##.lookup.329 1 0))) ((bruijn ##.%k.849 3 0) (bruijn ##.%r.2018 0 0))) (basic-block 1 1 (##.lookup.2019) ((##vcore.cons (bruijn ##.key.328 2 0) (bruijn ##.intrin.327 3 2))) (##qualified-call (vanity compiler lower to-functions ##.register-literal!.311) #f (bruijn ##.register-literal!.311 4 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k20) (bruijn ##.key.328 2 0) (bruijn ##.intrin.327 3 2))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[10]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k20, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lookup-literal.310) #f (bruijn ##.lookup-literal.310 2 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k19) (bruijn ##.key.328 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[9]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k19, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.lifting-literals?.299 3 2) ((bruijn ##.list.244 5 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k18) '##intrinsic (bruijn ##.sym.326 0 1)) ((bruijn ##.list.244 5 1) (bruijn ##.%k.849 0 0) '##intrinsic (bruijn ##.sym.326 0 1)))
if(VDecodeBool(
statics->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k18, self)))),
      _V10intrinsic,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      _var0,
      _V10intrinsic,
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2031 ##.%r.2032) ((##vcore.cons (bruijn ##.%x.863 1 0) '()) (##vcore.cons '##typevector (bruijn ##.%x.2031 0 0))) ((bruijn ##.%k.850 13 0) (bruijn ##.%r.2032 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10typevector,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      self->vars[1]);
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cdar.262 16 19) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k26) (bruijn ##.literal-table.307 12 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k26, self)))),
      VGetArg(statics, 12-1, 6));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.register-literal!.311) #f (bruijn ##.register-literal!.311 12 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k25) (bruijn ##.x.331 11 1) (bruijn ##.%x.864 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k25, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.332 0 0) (basic-block 3 3 (##.%x.2028 ##.%x.2029 ##.%r.2030) ((##vcore.cdr (bruijn ##.lookup.332 1 0)) (##vcore.cons (bruijn ##.%x.2028 0 0) '()) (##vcore.cons '##typevector (bruijn ##.%x.2029 0 1))) ((bruijn ##.%k.850 11 0) (bruijn ##.%r.2030 0 2))) ((bruijn ##.gensym.261 15 18) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k24) (##string ##.string.2977)))
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
      _V10typevector,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k24, self)))),
      VEncodePointer(&_V10_Dstring_D2977.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2037 ##.%r.2038) ((##vcore.cons (bruijn ##.%x.869 1 0) '()) (##vcore.cons '##string (bruijn ##.%x.2037 0 0))) ((bruijn ##.%k.850 14 0) (bruijn ##.%r.2038 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10string,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      self->vars[1]);
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k29(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cdar.262 17 19) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k30) (bruijn ##.literal-table.307 13 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k30, self)))),
      VGetArg(statics, 13-1, 6));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.register-literal!.311) #f (bruijn ##.register-literal!.311 13 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k29) (bruijn ##.x.331 12 1) (bruijn ##.%x.870 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k29, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.333 0 0) (basic-block 3 3 (##.%x.2034 ##.%x.2035 ##.%r.2036) ((##vcore.cdr (bruijn ##.lookup.333 1 0)) (##vcore.cons (bruijn ##.%x.2034 0 0) '()) (##vcore.cons '##string (bruijn ##.%x.2035 0 1))) ((bruijn ##.%k.850 12 0) (bruijn ##.%r.2036 0 2))) ((bruijn ##.gensym.261 16 18) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k28) (##string ##.string.2978)))
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
      _V10string,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k28, self)))),
      VEncodePointer(&_V10_Dstring_D2978.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.2040 1 0) (##qualified-call (vanity compiler lower to-functions ##.register-literal!.311) #f (bruijn ##.register-literal!.311 15 10) (bruijn ##.%k.873 0 0) (bruijn ##.x.331 14 1) '()) ((bruijn ##.%k.873 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.850 13 0) (bruijn ##.x.331 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2040) ((##vcore.not (bruijn ##.%x.874 1 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k32) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k33)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k32, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k33, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2048 ##.%r.2049) ((##vcore.cons (bruijn ##.%x.879 1 0) '()) (##vcore.cons '##pair (bruijn ##.%x.2048 0 0))) ((bruijn ##.%k.850 22 0) (bruijn ##.%r.2049 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10pair,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      self->vars[1]);
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k39(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cdar.262 25 19) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k40) (bruijn ##.literal-table.307 21 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k40, self)))),
      VGetArg(statics, 21-1, 6));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.register-literal!.311) #f (bruijn ##.register-literal!.311 21 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k39) (bruijn ##.x.334 2 0) (bruijn ##.%x.880 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k39, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.335 0 0) (basic-block 3 3 (##.%x.2045 ##.%x.2046 ##.%r.2047) ((##vcore.cdr (bruijn ##.lookup.335 1 0)) (##vcore.cons (bruijn ##.%x.2045 0 0) '()) (##vcore.cons '##pair (bruijn ##.%x.2046 0 1))) ((bruijn ##.%k.850 20 0) (bruijn ##.%r.2047 0 2))) ((bruijn ##.gensym.261 24 18) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k38) (##string ##.string.2979)))
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
      _V10pair,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k38, self)))),
      VEncodePointer(&_V10_Dstring_D2979.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lookup-literal.310) #f (bruijn ##.lookup-literal.310 19 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k37) (bruijn ##.x.334 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k37, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2044) ((##vcore.cons (bruijn ##.%x.882 3 0) (bruijn ##.%x.883 1 0))) ((bruijn ##.list.244 22 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k36) '##pair (bruijn ##.%x.2044 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k36, self)))),
      _V10pair,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2043) ((##vcore.cdr (bruijn ##.x.331 15 1))) (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 16 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k35) (bruijn ##.%x.2043 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k35, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2054 ##.%r.2055) ((##vcore.cons (bruijn ##.%x.890 1 0) '()) (##vcore.cons '##vector (bruijn ##.%x.2054 0 0))) ((bruijn ##.%k.850 18 0) (bruijn ##.%r.2055 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10vector,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      self->vars[1]);
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k44(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cdar.262 21 19) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k45) (bruijn ##.literal-table.307 17 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k45, self)))),
      VGetArg(statics, 17-1, 6));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.register-literal!.311) #f (bruijn ##.register-literal!.311 17 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k44) (bruijn ##.x.336 2 0) (bruijn ##.%x.891 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 10));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k44, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.337 0 0) (basic-block 3 3 (##.%x.2051 ##.%x.2052 ##.%r.2053) ((##vcore.cdr (bruijn ##.lookup.337 1 0)) (##vcore.cons (bruijn ##.%x.2051 0 0) '()) (##vcore.cons '##vector (bruijn ##.%x.2052 0 1))) ((bruijn ##.%k.850 16 0) (bruijn ##.%r.2053 0 2))) ((bruijn ##.gensym.261 20 18) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k43) (##string ##.string.2980)))
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
      _V10vector,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k43, self)))),
      VEncodePointer(&_V10_Dstring_D2980.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lookup-literal.310) #f (bruijn ##.lookup-literal.310 15 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k42) (bruijn ##.x.336 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k42, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.859 0 0) (##qualified-call (vanity compiler lower to-functions ##.lookup-literal.310) #f (bruijn ##.lookup-literal.310 10 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k23) (bruijn ##.x.331 9 1)) (basic-block 1 1 (##.%p.2033) ((##vcore.string? (bruijn ##.x.331 10 1))) (if (bruijn ##.%p.2033 0 0) (##qualified-call (vanity compiler lower to-functions ##.lookup-literal.310) #f (bruijn ##.lookup-literal.310 11 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k27) (bruijn ##.x.331 10 1)) (basic-block 1 1 (##.%p.2039) ((##vcore.symbol? (bruijn ##.x.331 11 1))) (if (bruijn ##.%p.2039 0 0) (##qualified-call (vanity compiler lower to-functions ##.lookup-literal.310) #f (bruijn ##.lookup-literal.310 12 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k31) (bruijn ##.x.331 11 1)) (basic-block 1 1 (##.%p.2041) ((##vcore.pair? (bruijn ##.x.331 12 1))) (if (bruijn ##.%p.2041 0 0) (basic-block 1 1 (##.%x.2042) ((##vcore.car (bruijn ##.x.331 13 1))) (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 14 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k34) (bruijn ##.%x.2042 0 0))) (basic-block 1 1 (##.%p.2050) ((##vcore.vector? (bruijn ##.x.331 13 1))) (if (bruijn ##.%p.2050 0 0) ((bruijn ##.vector-map.260 18 17) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k41) (bruijn ##.lift-literal.313 14 12) (bruijn ##.x.331 13 1)) ((bruijn ##.compiler-error.259 18 16) (bruijn ##.%k.850 13 0) (##string ##.string.2981) (bruijn ##.x.331 13 1)))))))))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k23, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k27, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 9));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k31, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k34, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k41, self)))),
      VGetArg(statics, 14-1, 12),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 16)), 3,
      VGetArg(statics, 13-1, 0),
      VEncodePointer(&_V10_Dstring_D2981.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.852 0 0) ((bruijn ##.%k.850 2 0) (bruijn ##.x.331 2 1)) (basic-block 1 1 (##.%p.2022) ((##vcore.void? (bruijn ##.x.331 3 1))) (if (bruijn ##.%p.2022 0 0) ((bruijn ##.%k.850 3 0) (bruijn ##.x.331 3 1)) (basic-block 1 1 (##.%p.2023) ((##vcore.foreign-pointer? (bruijn ##.x.331 4 1))) (if (bruijn ##.%p.2023 0 0) ((bruijn ##.%k.850 4 0) (bruijn ##.x.331 4 1)) (basic-block 1 1 (##.%p.2024) ((##vcore.char? (bruijn ##.x.331 5 1))) (if (bruijn ##.%p.2024 0 0) ((bruijn ##.%k.850 5 0) (bruijn ##.x.331 5 1)) (basic-block 1 1 (##.%p.2025) ((##vcore.eq? (bruijn ##.x.331 6 1) #t)) (if (bruijn ##.%p.2025 0 0) ((bruijn ##.%k.850 6 0) (bruijn ##.x.331 6 1)) (basic-block 1 1 (##.%p.2026) ((##vcore.eq? (bruijn ##.x.331 7 1) #f)) (if (bruijn ##.%p.2026 0 0) ((bruijn ##.%k.850 7 0) (bruijn ##.x.331 7 1)) (basic-block 1 1 (##.%p.2027) ((##vcore.null? (bruijn ##.x.331 8 1))) (if (bruijn ##.%p.2027 0 0) ((bruijn ##.%k.850 8 0) (bruijn ##.x.331 8 1)) ((bruijn ##.typevector?.263 13 20) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k22) (bruijn ##.x.331 8 1)))))))))))))))
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      VEncodeBool(true));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 6-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeBool(false));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 7-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 20)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k22, self)))),
      VGetArg(statics, 8-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.lifting-literals?.299 3 2) (basic-block 1 1 (##.%p.2021) ((##vcore.int? (bruijn ##.x.331 1 1))) (if (bruijn ##.%p.2021 0 0) ((bruijn ##.%k.850 1 0) (bruijn ##.x.331 1 1)) ((bruijn ##.number?.264 6 21) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k21) (bruijn ##.x.331 1 1)))) ((bruijn ##.%k.850 0 0) (bruijn ##.x.331 0 1)))
if(VDecodeBool(
statics->up->up->vars[2])) {
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k21, self)))),
      statics->vars[1]);
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.911 0 0) (bruijn ##.%k.908 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2076 ##.%r.2077) ((##vcore.cons (bruijn ##.%x.914 1 0) '()) (##vcore.cons (bruijn ##.n.2070 4 0) (bruijn ##.%x.2076 0 0))) ((bruijn ##.%k.912 2 0) (bruijn ##.%r.2077 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 7 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k48) (bruijn ##.fun.338 6 1) (bruijn ##.body.2073 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k48, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2056 1 0) (basic-block 3 3 (##.n.2070 ##.expr.115.2071 ##.%p.2072) ((##vcore.car (bruijn ##.lamb.339 4 2)) (##vcore.cdr (bruijn ##.lamb.339 4 2)) (##vcore.pair? (bruijn ##.expr.115.2071 0 1))) (if (bruijn ##.%p.2072 0 2) (basic-block 3 3 (##.body.2073 ##.%x.2074 ##.%p.2075) ((##vcore.car (bruijn ##.expr.115.2071 1 1)) (##vcore.cdr (bruijn ##.expr.115.2071 1 1)) (##vcore.null? (bruijn ##.%x.2074 0 1))) (if (bruijn ##.%p.2075 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k47) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda5) (bruijn ##.kk.112.340 4 1)) ((bruijn ##.%k.908 2 0) #f))) ((bruijn ##.%k.908 1 0) #f))) ((bruijn ##.%k.908 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda5, self)))),
      statics->up->up->up->vars[1]);
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.900 0 0) (bruijn ##.%k.895 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2067 ##.%x.2068 ##.%r.2069) ((##vcore.cons (bruijn ##.%x.904 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2067 0 0)) (##vcore.cons (bruijn ##.n.2058 7 0) (bruijn ##.%x.2068 0 1))) ((bruijn ##.%k.901 2 0) (bruijn ##.%r.2069 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0_P,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 11 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k53) (bruijn ##.fun.338 10 1) (bruijn ##.body.2064 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k53, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.897 0 0) (basic-block 2 2 (##.expr.118.2062 ##.%p.2063) ((##vcore.cdr (bruijn ##.expr.117.2059 3 1)) (##vcore.pair? (bruijn ##.expr.118.2062 0 0))) (if (bruijn ##.%p.2063 0 1) (basic-block 3 3 (##.body.2064 ##.%x.2065 ##.%p.2066) ((##vcore.car (bruijn ##.expr.118.2062 1 0)) (##vcore.cdr (bruijn ##.expr.118.2062 1 0)) (##vcore.null? (bruijn ##.%x.2065 0 1))) (if (bruijn ##.%p.2066 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k52) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda6) (bruijn ##.kk.112.340 8 1)) ((bruijn ##.%k.895 5 0) #f))) ((bruijn ##.%k.895 4 0) #f))) ((bruijn ##.%k.895 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k52, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda6, self)))),
      VGetArg(statics, 8-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2057 1 0) (basic-block 3 3 (##.n.2058 ##.expr.117.2059 ##.%p.2060) ((##vcore.car (bruijn ##.lamb.339 5 2)) (##vcore.cdr (bruijn ##.lamb.339 5 2)) (##vcore.pair? (bruijn ##.expr.117.2059 0 1))) (if (bruijn ##.%p.2060 0 2) (basic-block 1 1 (##.%x.2061) ((##vcore.car (bruijn ##.expr.117.2059 1 1))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k51) '+ (bruijn ##.%x.2061 0 0))) ((bruijn ##.%k.895 1 0) #f))) ((bruijn ##.%k.895 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k51, self)))),
      _V0_P,
      self->vars[0]);
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
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k54(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.258 8 15) (bruijn ##.%k.893 2 0) (##string ##.string.2982))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 15)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2982.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k49(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2057) ((##vcore.pair? (bruijn ##.lamb.339 3 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k50) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k54)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k50, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k54, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2056) ((##vcore.pair? (bruijn ##.lamb.339 2 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k46) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k49)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k46, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k49, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.892 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1158 0 0) (bruijn ##.%k.1156 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1159 0 0) (bruijn ##.expr.352 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1157 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k57) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda8) (bruijn ##.kk.119.354 4 1)) ((bruijn ##.%k.1156 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k57, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda8, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2078 1 0) (basic-block 1 1 (##.%x.2316) ((##vcore.car (bruijn ##.expr.352 4 2))) ((bruijn ##.equal?.243 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k56) 'bruijn (bruijn ##.%x.2316 0 0))) ((bruijn ##.%k.1156 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k56, self)))),
      _V0bruijn,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1141 0 0) (bruijn ##.%k.1135 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k65(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2314 ##.%r.2315) ((##vcore.cons (bruijn ##.lamb.364 4 0) '()) (##vcore.cons 'close (bruijn ##.%x.2314 0 0))) ((bruijn ##.%k.1142 5 0) (bruijn ##.%r.2315 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.2307 ##.%x.2308 ##.%x.2309 ##.%x.2310 ##.%x.2311 ##.%x.2312 ##.%x.2313) ((##vcore.cons (bruijn ##.%x.1152 1 0) '()) (##vcore.cons (bruijn ##.n.2301 6 0) (bruijn ##.%x.2307 0 0)) (##vcore.cons (bruijn ##.%x.2308 0 1) '()) (##vcore.cons (bruijn ##.%x.1148 2 0) (bruijn ##.%x.2309 0 2)) (##vcore.cons '#t (bruijn ##.%x.2310 0 3)) (##vcore.cons (bruijn ##.lamb.364 3 0) (bruijn ##.%x.2311 0 4)) (##vcore.cons (bruijn ##.%x.2312 0 5) (bruijn ##.functions.306 16 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k65) (bruijn ##.functions.306 16 5) (bruijn ##.%x.2313 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(true),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VGetArg(statics, 16-1, 5));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k65, self)))),
      VEncodeInt(16l), VEncodeInt(5l),
      self->vars[6]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 14 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k64) (bruijn ##.fun.351 13 1) (bruijn ##.body.2304 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k64, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 13 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k63) (bruijn ##.debug-info.2298 4 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k63, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.301) #f (bruijn ##.genlambda.301 12 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k62) (bruijn ##.fun.351 11 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k62, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1136 0 0) (basic-block 2 2 (##.expr.123.2296 ##.%p.2297) ((##vcore.cdr (bruijn ##.expr.352 7 2)) (##vcore.pair? (bruijn ##.expr.123.2296 0 0))) (if (bruijn ##.%p.2297 0 1) (basic-block 3 3 (##.debug-info.2298 ##.expr.124.2299 ##.%p.2300) ((##vcore.car (bruijn ##.expr.123.2296 1 0)) (##vcore.cdr (bruijn ##.expr.123.2296 1 0)) (##vcore.pair? (bruijn ##.expr.124.2299 0 1))) (if (bruijn ##.%p.2300 0 2) (basic-block 3 3 (##.n.2301 ##.expr.125.2302 ##.%p.2303) ((##vcore.car (bruijn ##.expr.124.2299 1 1)) (##vcore.cdr (bruijn ##.expr.124.2299 1 1)) (##vcore.pair? (bruijn ##.expr.125.2302 0 1))) (if (bruijn ##.%p.2303 0 2) (basic-block 3 3 (##.body.2304 ##.%x.2305 ##.%p.2306) ((##vcore.car (bruijn ##.expr.125.2302 1 1)) (##vcore.cdr (bruijn ##.expr.125.2302 1 1)) (##vcore.null? (bruijn ##.%x.2305 0 1))) (if (bruijn ##.%p.2306 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k61) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda9) (bruijn ##.kk.119.354 9 1)) ((bruijn ##.%k.1135 6 0) #f))) ((bruijn ##.%k.1135 5 0) #f))) ((bruijn ##.%k.1135 4 0) #f))) ((bruijn ##.%k.1135 3 0) #f))) ((bruijn ##.%k.1135 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda9, self)))),
      VGetArg(statics, 9-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2079 1 0) (basic-block 1 1 (##.%x.2295) ((##vcore.car (bruijn ##.expr.352 5 2))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k60) 'lambda (bruijn ##.%x.2295 0 0))) ((bruijn ##.%k.1135 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k60, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1118 0 0) (bruijn ##.%k.1110 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2293 ##.%r.2294) ((##vcore.cons (bruijn ##.lamb.373 4 0) '()) (##vcore.cons 'close (bruijn ##.%x.2293 0 0))) ((bruijn ##.%k.1119 5 0) (bruijn ##.%r.2294 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.2285 ##.%x.2286 ##.%x.2287 ##.%x.2288 ##.%x.2289 ##.%x.2290 ##.%x.2291 ##.%x.2292) ((##vcore.cons (bruijn ##.%x.1130 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2285 0 0)) (##vcore.cons (bruijn ##.n.2276 9 0) (bruijn ##.%x.2286 0 1)) (##vcore.cons (bruijn ##.%x.2287 0 2) '()) (##vcore.cons (bruijn ##.%x.1125 2 0) (bruijn ##.%x.2288 0 3)) (##vcore.cons '#t (bruijn ##.%x.2289 0 4)) (##vcore.cons (bruijn ##.lamb.373 3 0) (bruijn ##.%x.2290 0 5)) (##vcore.cons (bruijn ##.%x.2291 0 6) (bruijn ##.functions.306 20 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k74) (bruijn ##.functions.306 20 5) (bruijn ##.%x.2292 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0_P,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(true),
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      VGetArg(statics, 20-1, 5));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k74, self)))),
      VEncodeInt(20l), VEncodeInt(5l),
      self->vars[7]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 18 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k73) (bruijn ##.fun.351 17 1) (bruijn ##.body.2282 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k73, self))));
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 17 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k72) (bruijn ##.debug-info.2273 7 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k72, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.301) #f (bruijn ##.genlambda.301 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k71) (bruijn ##.fun.351 15 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k71, self))));
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1115 0 0) (basic-block 2 2 (##.expr.130.2280 ##.%p.2281) ((##vcore.cdr (bruijn ##.expr.129.2277 3 1)) (##vcore.pair? (bruijn ##.expr.130.2280 0 0))) (if (bruijn ##.%p.2281 0 1) (basic-block 3 3 (##.body.2282 ##.%x.2283 ##.%p.2284) ((##vcore.car (bruijn ##.expr.130.2280 1 0)) (##vcore.cdr (bruijn ##.expr.130.2280 1 0)) (##vcore.null? (bruijn ##.%x.2283 0 1))) (if (bruijn ##.%p.2284 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k70) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda10) (bruijn ##.kk.119.354 13 1)) ((bruijn ##.%k.1110 9 0) #f))) ((bruijn ##.%k.1110 8 0) #f))) ((bruijn ##.%k.1110 7 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k70, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda10, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1111 0 0) (basic-block 2 2 (##.expr.127.2271 ##.%p.2272) ((##vcore.cdr (bruijn ##.expr.352 8 2)) (##vcore.pair? (bruijn ##.expr.127.2271 0 0))) (if (bruijn ##.%p.2272 0 1) (basic-block 3 3 (##.debug-info.2273 ##.expr.128.2274 ##.%p.2275) ((##vcore.car (bruijn ##.expr.127.2271 1 0)) (##vcore.cdr (bruijn ##.expr.127.2271 1 0)) (##vcore.pair? (bruijn ##.expr.128.2274 0 1))) (if (bruijn ##.%p.2275 0 2) (basic-block 3 3 (##.n.2276 ##.expr.129.2277 ##.%p.2278) ((##vcore.car (bruijn ##.expr.128.2274 1 1)) (##vcore.cdr (bruijn ##.expr.128.2274 1 1)) (##vcore.pair? (bruijn ##.expr.129.2277 0 1))) (if (bruijn ##.%p.2278 0 2) (basic-block 1 1 (##.%x.2279) ((##vcore.car (bruijn ##.expr.129.2277 1 1))) ((bruijn ##.equal?.243 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k69) '+ (bruijn ##.%x.2279 0 0))) ((bruijn ##.%k.1110 5 0) #f))) ((bruijn ##.%k.1110 4 0) #f))) ((bruijn ##.%k.1110 3 0) #f))) ((bruijn ##.%k.1110 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k69, self)))),
      _V0_P,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2080 1 0) (basic-block 1 1 (##.%x.2270) ((##vcore.car (bruijn ##.expr.352 6 2))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k68) 'lambda (bruijn ##.%x.2270 0 0))) ((bruijn ##.%k.1110 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k68, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1090 0 0) (bruijn ##.%k.1082 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2265 ##.%x.2266 ##.%r.2267) ((##vcore.cons (bruijn ##.%x.1094 1 0) '()) (##vcore.cons (bruijn ##.lamb.385 7 0) (bruijn ##.%x.2265 0 0)) (##vcore.cons 'close (bruijn ##.%x.2266 0 1))) ((bruijn ##.%k.1091 8 0) (bruijn ##.%r.2267 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[2]);
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k84(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (bruijn ##.static?.2245 10 0) ((bruijn ##.drop-right.253 26 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k85) (bruijn ##.name.2242 11 0) 1) (basic-block 2 2 (##.%x.2268 ##.%r.2269) ((##vcore.cons (bruijn ##.lamb.385 6 0) '()) (##vcore.cons 'close (bruijn ##.%x.2268 0 0))) ((bruijn ##.%k.1091 7 0) (bruijn ##.%r.2269 0 1))))
if(VDecodeBool(
VGetArg(statics, 10-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k85, self)))),
      VGetArg(statics, 11-1, 0),
      VEncodeInt(1l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.2258 ##.%x.2259 ##.%x.2260 ##.%x.2261 ##.%x.2262 ##.%x.2263 ##.%x.2264) ((##vcore.cons (bruijn ##.%x.1104 1 0) '()) (##vcore.cons (bruijn ##.n.2251 8 0) (bruijn ##.%x.2258 0 0)) (##vcore.cons (bruijn ##.%x.2259 0 1) '()) (##vcore.cons (bruijn ##.%x.1100 2 0) (bruijn ##.%x.2260 0 2)) (##vcore.cons '#t (bruijn ##.%x.2261 0 3)) (##vcore.cons (bruijn ##.lamb.385 5 0) (bruijn ##.%x.2262 0 4)) (##vcore.cons (bruijn ##.%x.2263 0 5) (bruijn ##.functions.306 22 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k84) (bruijn ##.functions.306 22 5) (bruijn ##.%x.2264 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(true),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VGetArg(statics, 22-1, 5));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k84, self)))),
      VEncodeInt(22l), VEncodeInt(5l),
      self->vars[6]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 20 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k83) (bruijn ##.lamb.385 3 0) (bruijn ##.body.2254 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k83, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k81(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 19 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k82) (bruijn ##.debug-info.2248 6 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k82, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2257) ((##vcore.cons (bruijn ##.%x.1106 1 0) (bruijn ##.qualified-functions.303 19 2))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k81) (bruijn ##.qualified-functions.303 19 2) (bruijn ##.%x.2257 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 19-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k81, self)))),
      VEncodeInt(19l), VEncodeInt(2l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.244 21 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k80) (bruijn ##.lamb.385 0 0) (bruijn ##.n.2251 3 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k80, self)))),
      _var0,
      statics->up->up->vars[0],
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-qualified-function.254 20 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k79) (bruijn ##.name.2242 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k79, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1083 0 0) (basic-block 2 2 (##.expr.132.2240 ##.%p.2241) ((##vcore.cdr (bruijn ##.expr.352 9 2)) (##vcore.pair? (bruijn ##.expr.132.2240 0 0))) (if (bruijn ##.%p.2241 0 1) (basic-block 3 3 (##.name.2242 ##.expr.133.2243 ##.%p.2244) ((##vcore.car (bruijn ##.expr.132.2240 1 0)) (##vcore.cdr (bruijn ##.expr.132.2240 1 0)) (##vcore.pair? (bruijn ##.expr.133.2243 0 1))) (if (bruijn ##.%p.2244 0 2) (basic-block 3 3 (##.static?.2245 ##.expr.134.2246 ##.%p.2247) ((##vcore.car (bruijn ##.expr.133.2243 1 1)) (##vcore.cdr (bruijn ##.expr.133.2243 1 1)) (##vcore.pair? (bruijn ##.expr.134.2246 0 1))) (if (bruijn ##.%p.2247 0 2) (basic-block 3 3 (##.debug-info.2248 ##.expr.135.2249 ##.%p.2250) ((##vcore.car (bruijn ##.expr.134.2246 1 1)) (##vcore.cdr (bruijn ##.expr.134.2246 1 1)) (##vcore.pair? (bruijn ##.expr.135.2249 0 1))) (if (bruijn ##.%p.2250 0 2) (basic-block 3 3 (##.n.2251 ##.expr.136.2252 ##.%p.2253) ((##vcore.car (bruijn ##.expr.135.2249 1 1)) (##vcore.cdr (bruijn ##.expr.135.2249 1 1)) (##vcore.pair? (bruijn ##.expr.136.2252 0 1))) (if (bruijn ##.%p.2253 0 2) (basic-block 3 3 (##.body.2254 ##.%x.2255 ##.%p.2256) ((##vcore.car (bruijn ##.expr.136.2252 1 1)) (##vcore.cdr (bruijn ##.expr.136.2252 1 1)) (##vcore.null? (bruijn ##.%x.2255 0 1))) (if (bruijn ##.%p.2256 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k78) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda11) (bruijn ##.kk.119.354 13 1)) ((bruijn ##.%k.1082 8 0) #f))) ((bruijn ##.%k.1082 7 0) #f))) ((bruijn ##.%k.1082 6 0) #f))) ((bruijn ##.%k.1082 5 0) #f))) ((bruijn ##.%k.1082 4 0) #f))) ((bruijn ##.%k.1082 3 0) #f))) ((bruijn ##.%k.1082 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k78, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda11, self)))),
      VGetArg(statics, 13-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2081 1 0) (basic-block 1 1 (##.%x.2239) ((##vcore.car (bruijn ##.expr.352 7 2))) ((bruijn ##.equal?.243 12 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k77) '##qualified-lambda (bruijn ##.%x.2239 0 0))) ((bruijn ##.%k.1082 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k77, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1060 0 0) (bruijn ##.%k.1050 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2234 ##.%x.2235 ##.%r.2236) ((##vcore.cons (bruijn ##.%x.1064 1 0) '()) (##vcore.cons (bruijn ##.lamb.398 7 0) (bruijn ##.%x.2234 0 0)) (##vcore.cons 'close (bruijn ##.%x.2235 0 1))) ((bruijn ##.%k.1061 8 0) (bruijn ##.%r.2236 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[2]);
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (bruijn ##.static?.2210 13 0) ((bruijn ##.drop-right.253 30 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k97) (bruijn ##.name.2207 14 0) 1) (basic-block 2 2 (##.%x.2237 ##.%r.2238) ((##vcore.cons (bruijn ##.lamb.398 6 0) '()) (##vcore.cons 'close (bruijn ##.%x.2237 0 0))) ((bruijn ##.%k.1061 7 0) (bruijn ##.%r.2238 0 1))))
if(VDecodeBool(
VGetArg(statics, 13-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k97, self)))),
      VGetArg(statics, 14-1, 0),
      VEncodeInt(1l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.2226 ##.%x.2227 ##.%x.2228 ##.%x.2229 ##.%x.2230 ##.%x.2231 ##.%x.2232 ##.%x.2233) ((##vcore.cons (bruijn ##.%x.1075 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2226 0 0)) (##vcore.cons (bruijn ##.n.2216 11 0) (bruijn ##.%x.2227 0 1)) (##vcore.cons (bruijn ##.%x.2228 0 2) '()) (##vcore.cons (bruijn ##.%x.1070 2 0) (bruijn ##.%x.2229 0 3)) (##vcore.cons '#t (bruijn ##.%x.2230 0 4)) (##vcore.cons (bruijn ##.lamb.398 5 0) (bruijn ##.%x.2231 0 5)) (##vcore.cons (bruijn ##.%x.2232 0 6) (bruijn ##.functions.306 26 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k96) (bruijn ##.functions.306 26 5) (bruijn ##.%x.2233 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0_P,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(true),
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      VGetArg(statics, 26-1, 5));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k96, self)))),
      VEncodeInt(26l), VEncodeInt(5l),
      self->vars[7]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 24 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k95) (bruijn ##.lamb.398 3 0) (bruijn ##.body.2222 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k95, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k93(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 23 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k94) (bruijn ##.debug-info.2213 9 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k94, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2225) ((##vcore.cons (bruijn ##.%x.1077 1 0) (bruijn ##.qualified-functions.303 23 2))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k93) (bruijn ##.qualified-functions.303 23 2) (bruijn ##.%x.2225 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 23-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k93, self)))),
      VEncodeInt(23l), VEncodeInt(2l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.244 25 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k92) (bruijn ##.lamb.398 0 0) (bruijn ##.n.2216 6 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k92, self)))),
      _var0,
      VGetArg(statics, 6-1, 0),
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-qualified-function.254 24 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k91) (bruijn ##.name.2207 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k91, self)))),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1057 0 0) (basic-block 2 2 (##.expr.143.2220 ##.%p.2221) ((##vcore.cdr (bruijn ##.expr.142.2217 3 1)) (##vcore.pair? (bruijn ##.expr.143.2220 0 0))) (if (bruijn ##.%p.2221 0 1) (basic-block 3 3 (##.body.2222 ##.%x.2223 ##.%p.2224) ((##vcore.car (bruijn ##.expr.143.2220 1 0)) (##vcore.cdr (bruijn ##.expr.143.2220 1 0)) (##vcore.null? (bruijn ##.%x.2223 0 1))) (if (bruijn ##.%p.2224 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k90) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda12) (bruijn ##.kk.119.354 17 1)) ((bruijn ##.%k.1050 11 0) #f))) ((bruijn ##.%k.1050 10 0) #f))) ((bruijn ##.%k.1050 9 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k90, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda12, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1051 0 0) (basic-block 2 2 (##.expr.138.2205 ##.%p.2206) ((##vcore.cdr (bruijn ##.expr.352 10 2)) (##vcore.pair? (bruijn ##.expr.138.2205 0 0))) (if (bruijn ##.%p.2206 0 1) (basic-block 3 3 (##.name.2207 ##.expr.139.2208 ##.%p.2209) ((##vcore.car (bruijn ##.expr.138.2205 1 0)) (##vcore.cdr (bruijn ##.expr.138.2205 1 0)) (##vcore.pair? (bruijn ##.expr.139.2208 0 1))) (if (bruijn ##.%p.2209 0 2) (basic-block 3 3 (##.static?.2210 ##.expr.140.2211 ##.%p.2212) ((##vcore.car (bruijn ##.expr.139.2208 1 1)) (##vcore.cdr (bruijn ##.expr.139.2208 1 1)) (##vcore.pair? (bruijn ##.expr.140.2211 0 1))) (if (bruijn ##.%p.2212 0 2) (basic-block 3 3 (##.debug-info.2213 ##.expr.141.2214 ##.%p.2215) ((##vcore.car (bruijn ##.expr.140.2211 1 1)) (##vcore.cdr (bruijn ##.expr.140.2211 1 1)) (##vcore.pair? (bruijn ##.expr.141.2214 0 1))) (if (bruijn ##.%p.2215 0 2) (basic-block 3 3 (##.n.2216 ##.expr.142.2217 ##.%p.2218) ((##vcore.car (bruijn ##.expr.141.2214 1 1)) (##vcore.cdr (bruijn ##.expr.141.2214 1 1)) (##vcore.pair? (bruijn ##.expr.142.2217 0 1))) (if (bruijn ##.%p.2218 0 2) (basic-block 1 1 (##.%x.2219) ((##vcore.car (bruijn ##.expr.142.2217 1 1))) ((bruijn ##.equal?.243 20 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k89) '+ (bruijn ##.%x.2219 0 0))) ((bruijn ##.%k.1050 7 0) #f))) ((bruijn ##.%k.1050 6 0) #f))) ((bruijn ##.%k.1050 5 0) #f))) ((bruijn ##.%k.1050 4 0) #f))) ((bruijn ##.%k.1050 3 0) #f))) ((bruijn ##.%k.1050 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k89, self)))),
      _V0_P,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2082 1 0) (basic-block 1 1 (##.%x.2204) ((##vcore.car (bruijn ##.expr.352 8 2))) ((bruijn ##.equal?.243 13 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k88) '##qualified-lambda (bruijn ##.%x.2204 0 0))) ((bruijn ##.%k.1050 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k88, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1038 0 0) (bruijn ##.%k.1035 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k105(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2202 ##.%r.2203) ((##vcore.cons (bruijn ##.lamb.403 4 0) '()) (##vcore.cons 'close (bruijn ##.%x.2202 0 0))) ((bruijn ##.%k.1039 5 0) (bruijn ##.%r.2203 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2198 ##.%x.2199 ##.%x.2200 ##.%x.2201) ((##vcore.cons (bruijn ##.%x.1045 2 0) (bruijn ##.%x.1046 1 0)) (##vcore.cons '#t (bruijn ##.%x.2198 0 0)) (##vcore.cons (bruijn ##.lamb.403 3 0) (bruijn ##.%x.2199 0 1)) (##vcore.cons (bruijn ##.%x.2200 0 2) (bruijn ##.functions.306 18 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k105) (bruijn ##.functions.306 18 5) (bruijn ##.%x.2201 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VGetArg(statics, 18-1, 5));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k105, self)))),
      VEncodeInt(18l), VEncodeInt(5l),
      self->vars[3]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-lambda.314) #f (bruijn ##.iter-lambda.314 17 13) (bruijn ##.%k.1047 0 0) (bruijn ##.fun.351 16 1) (bruijn ##.e.404 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 13));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 20 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k104) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda14) (bruijn ##.cases.2197 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k104, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda14, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 15 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k103) (bruijn ##.debug-info.2196 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k103, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.301) #f (bruijn ##.genlambda.301 14 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k102) (bruijn ##.fun.351 13 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k102, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1036 0 0) (basic-block 2 2 (##.expr.145.2194 ##.%p.2195) ((##vcore.cdr (bruijn ##.expr.352 11 2)) (##vcore.pair? (bruijn ##.expr.145.2194 0 0))) (if (bruijn ##.%p.2195 0 1) (basic-block 2 2 (##.debug-info.2196 ##.cases.2197) ((##vcore.car (bruijn ##.expr.145.2194 1 0)) (##vcore.cdr (bruijn ##.expr.145.2194 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k101) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda13) (bruijn ##.kk.119.354 11 1))) ((bruijn ##.%k.1035 3 0) #f))) ((bruijn ##.%k.1035 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k101, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda13, self)))),
      VGetArg(statics, 11-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2083 1 0) (basic-block 1 1 (##.%x.2193) ((##vcore.car (bruijn ##.expr.352 9 2))) ((bruijn ##.equal?.243 14 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k100) 'case-lambda (bruijn ##.%x.2193 0 0))) ((bruijn ##.%k.1035 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k100, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1012 0 0) (bruijn ##.%k.1007 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2188 ##.%x.2189 ##.%r.2190) ((##vcore.cons (bruijn ##.%x.1021 1 0) '()) (##vcore.cons (bruijn ##.lamb.413 7 0) (bruijn ##.%x.2188 0 0)) (##vcore.cons 'close (bruijn ##.%x.2189 0 1))) ((bruijn ##.%k.1013 9 0) (bruijn ##.%r.2190 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[2]);
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k115(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (bruijn ##.static?.2172 9 0) ((bruijn ##.drop-right.253 28 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k116) (bruijn ##.name.2169 10 0) 1) (basic-block 2 2 (##.%x.2191 ##.%r.2192) ((##vcore.cons (bruijn ##.lamb.413 6 0) '()) (##vcore.cons 'close (bruijn ##.%x.2191 0 0))) ((bruijn ##.%k.1013 8 0) (bruijn ##.%r.2192 0 1))))
if(VDecodeBool(
VGetArg(statics, 9-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k116, self)))),
      VGetArg(statics, 10-1, 0),
      VEncodeInt(1l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2184 ##.%x.2185 ##.%x.2186 ##.%x.2187) ((##vcore.cons (bruijn ##.%x.1027 2 0) (bruijn ##.%x.1028 1 0)) (##vcore.cons '#t (bruijn ##.%x.2184 0 0)) (##vcore.cons (bruijn ##.lamb.413 5 0) (bruijn ##.%x.2185 0 1)) (##vcore.cons (bruijn ##.%x.2186 0 2) (bruijn ##.functions.306 24 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k115) (bruijn ##.functions.306 24 5) (bruijn ##.%x.2187 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VGetArg(statics, 24-1, 5));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k115, self)))),
      VEncodeInt(24l), VEncodeInt(5l),
      self->vars[3]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-lambda.314) #f (bruijn ##.iter-lambda.314 23 13) (bruijn ##.%k.1029 0 0) (bruijn ##.fun.351 22 1) (bruijn ##.e.414 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 13));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 26 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k114) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda16) (bruijn ##.cases.2176 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k114, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda16, self)))),
      VGetArg(statics, 6-1, 1));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k112(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 21 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k113) (bruijn ##.debug-info.2175 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k113, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2183) ((##vcore.cons (bruijn ##.%x.1031 1 0) (bruijn ##.qualified-functions.303 21 2))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k112) (bruijn ##.qualified-functions.303 21 2) (bruijn ##.%x.2183 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 21-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k112, self)))),
      VEncodeInt(21l), VEncodeInt(2l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.244 23 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k111) (bruijn ##.lamb.413 0 0) 0 #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k111, self)))),
      _var0,
      VEncodeInt(0l),
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2177 ##.%p.2178) ((##vcore.cdr (bruijn ##.cases.2176 2 1)) (##vcore.null? (bruijn ##.%x.2177 0 0))) (if (bruijn ##.%p.2178 0 1) (basic-block 4 4 (##.%x.2179 ##.%x.2180 ##.%x.2181 ##.%x.2182) ((##vcore.car (bruijn ##.cases.2176 3 1)) (##vcore.cons (bruijn ##.static?.2172 4 0) (bruijn ##.%x.2179 0 0)) (##vcore.cons (bruijn ##.name.2169 5 0) (bruijn ##.%x.2180 0 1)) (##vcore.cons '##qualified-lambda (bruijn ##.%x.2181 0 2))) (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 19 14) (bruijn ##.%k.1013 2 0) (bruijn ##.fun.351 18 1) (bruijn ##.%x.2182 0 3) (bruijn ##.func-position?.353 18 3))) ((bruijn ##.mangle-qualified-function.254 22 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k110) (bruijn ##.name.2169 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__lambda,
      self->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      self->vars[3];
    VWORD _arg3 = 
      VGetArg(statics, 18-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k110, self)))),
      statics->up->up->up->vars[0]);
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1008 0 0) (basic-block 2 2 (##.expr.147.2167 ##.%p.2168) ((##vcore.cdr (bruijn ##.expr.352 12 2)) (##vcore.pair? (bruijn ##.expr.147.2167 0 0))) (if (bruijn ##.%p.2168 0 1) (basic-block 3 3 (##.name.2169 ##.expr.148.2170 ##.%p.2171) ((##vcore.car (bruijn ##.expr.147.2167 1 0)) (##vcore.cdr (bruijn ##.expr.147.2167 1 0)) (##vcore.pair? (bruijn ##.expr.148.2170 0 1))) (if (bruijn ##.%p.2171 0 2) (basic-block 3 3 (##.static?.2172 ##.expr.149.2173 ##.%p.2174) ((##vcore.car (bruijn ##.expr.148.2170 1 1)) (##vcore.cdr (bruijn ##.expr.148.2170 1 1)) (##vcore.pair? (bruijn ##.expr.149.2173 0 1))) (if (bruijn ##.%p.2174 0 2) (basic-block 2 2 (##.debug-info.2175 ##.cases.2176) ((##vcore.car (bruijn ##.expr.149.2173 1 1)) (##vcore.cdr (bruijn ##.expr.149.2173 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k109) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda15) (bruijn ##.kk.119.354 14 1))) ((bruijn ##.%k.1007 5 0) #f))) ((bruijn ##.%k.1007 4 0) #f))) ((bruijn ##.%k.1007 3 0) #f))) ((bruijn ##.%k.1007 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k109, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda15, self)))),
      VGetArg(statics, 14-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2084 1 0) (basic-block 1 1 (##.%x.2166) ((##vcore.car (bruijn ##.expr.352 10 2))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k108) '##qualified-case-lambda (bruijn ##.%x.2166 0 0))) ((bruijn ##.%k.1007 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k108, self)))),
      _V10qualified__case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.992 0 0) (bruijn ##.%k.986 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k124(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2164 ##.%r.2165) ((##vcore.cons (bruijn ##.k.422 4 0) '()) (##vcore.cons 'close (bruijn ##.%x.2164 0 0))) ((bruijn ##.%k.993 5 0) (bruijn ##.%r.2165 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.2157 ##.%x.2158 ##.%x.2159 ##.%x.2160 ##.%x.2161 ##.%x.2162 ##.%x.2163) ((##vcore.cons (bruijn ##.%x.1003 1 0) '()) (##vcore.cons (bruijn ##.n.2151 6 0) (bruijn ##.%x.2157 0 0)) (##vcore.cons (bruijn ##.%x.2158 0 1) '()) (##vcore.cons (bruijn ##.%x.999 2 0) (bruijn ##.%x.2159 0 2)) (##vcore.cons '#t (bruijn ##.%x.2160 0 3)) (##vcore.cons (bruijn ##.k.422 3 0) (bruijn ##.%x.2161 0 4)) (##vcore.cons (bruijn ##.%x.2162 0 5) (bruijn ##.functions.306 22 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k124) (bruijn ##.functions.306 22 5) (bruijn ##.%x.2163 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(true),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VGetArg(statics, 22-1, 5));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k124, self)))),
      VEncodeInt(22l), VEncodeInt(5l),
      self->vars[6]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 20 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k123) (bruijn ##.fun.351 19 1) (bruijn ##.body.2154 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k123, self))));
    VWORD _arg1 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 19 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k122) (bruijn ##.debug-info.2148 4 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k122, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.gencont.302) #f (bruijn ##.gencont.302 18 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k121) (bruijn ##.fun.351 17 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k121, self))));
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.987 0 0) (basic-block 2 2 (##.expr.151.2146 ##.%p.2147) ((##vcore.cdr (bruijn ##.expr.352 13 2)) (##vcore.pair? (bruijn ##.expr.151.2146 0 0))) (if (bruijn ##.%p.2147 0 1) (basic-block 3 3 (##.debug-info.2148 ##.expr.152.2149 ##.%p.2150) ((##vcore.car (bruijn ##.expr.151.2146 1 0)) (##vcore.cdr (bruijn ##.expr.151.2146 1 0)) (##vcore.pair? (bruijn ##.expr.152.2149 0 1))) (if (bruijn ##.%p.2150 0 2) (basic-block 3 3 (##.n.2151 ##.expr.153.2152 ##.%p.2153) ((##vcore.car (bruijn ##.expr.152.2149 1 1)) (##vcore.cdr (bruijn ##.expr.152.2149 1 1)) (##vcore.pair? (bruijn ##.expr.153.2152 0 1))) (if (bruijn ##.%p.2153 0 2) (basic-block 3 3 (##.body.2154 ##.%x.2155 ##.%p.2156) ((##vcore.car (bruijn ##.expr.153.2152 1 1)) (##vcore.cdr (bruijn ##.expr.153.2152 1 1)) (##vcore.null? (bruijn ##.%x.2155 0 1))) (if (bruijn ##.%p.2156 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k120) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda17) (bruijn ##.kk.119.354 15 1)) ((bruijn ##.%k.986 6 0) #f))) ((bruijn ##.%k.986 5 0) #f))) ((bruijn ##.%k.986 4 0) #f))) ((bruijn ##.%k.986 3 0) #f))) ((bruijn ##.%k.986 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 2));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k120, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda17, self)))),
      VGetArg(statics, 15-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2085 1 0) (basic-block 1 1 (##.%x.2145) ((##vcore.car (bruijn ##.expr.352 11 2))) ((bruijn ##.equal?.243 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k119) 'continuation (bruijn ##.%x.2145 0 0))) ((bruijn ##.%k.986 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k119, self)))),
      _V0continuation,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.976 0 0) (bruijn ##.%k.970 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2140 1 0) (basic-block 2 2 (##.%x.2143 ##.%x.2144) ((##vcore.cons (bruijn ##.mangled.433 4 0) (bruijn ##.expr.352 24 2)) (##vcore.cons (bruijn ##.%x.2143 0 0) (bruijn ##.foreign-functions.304 25 3))) (set! (bruijn ##.%k.980 1 0) (bruijn ##.foreign-functions.304 25 3) (bruijn ##.%x.2144 0 1))) ((bruijn ##.%k.980 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VGetArg(statics, 24-1, 2));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 25-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(25l), VEncodeInt(3l),
      self->vars[1]
    );
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k132(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2141 ##.%r.2142) ((##vcore.cons (bruijn ##.mangled.433 3 0) '()) (##vcore.cons '##foreign.function (bruijn ##.%x.2141 0 0))) ((bruijn ##.%k.977 4 0) (bruijn ##.%r.2142 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10foreign_Dfunction,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2140) ((##vcore.not (bruijn ##.%x.983 1 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k131) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k132)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k131, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k132, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.256 25 13) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k130) (bruijn ##.mangled.433 0 0) (bruijn ##.foreign-functions.304 21 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k130, self)))),
      _var0,
      VGetArg(statics, 21-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-foreign.255 24 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k129) (bruijn ##.name.2138 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k129, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.971 0 0) (basic-block 2 2 (##.expr.155.2127 ##.%p.2128) ((##vcore.cdr (bruijn ##.expr.352 14 2)) (##vcore.pair? (bruijn ##.expr.155.2127 0 0))) (if (bruijn ##.%p.2128 0 1) (basic-block 3 3 (##.lang.2129 ##.expr.156.2130 ##.%p.2131) ((##vcore.car (bruijn ##.expr.155.2127 1 0)) (##vcore.cdr (bruijn ##.expr.155.2127 1 0)) (##vcore.pair? (bruijn ##.expr.156.2130 0 1))) (if (bruijn ##.%p.2131 0 2) (basic-block 3 3 (##.decl.2132 ##.expr.157.2133 ##.%p.2134) ((##vcore.car (bruijn ##.expr.156.2130 1 1)) (##vcore.cdr (bruijn ##.expr.156.2130 1 1)) (##vcore.pair? (bruijn ##.expr.157.2133 0 1))) (if (bruijn ##.%p.2134 0 2) (basic-block 3 3 (##.ret.2135 ##.expr.158.2136 ##.%p.2137) ((##vcore.car (bruijn ##.expr.157.2133 1 1)) (##vcore.cdr (bruijn ##.expr.157.2133 1 1)) (##vcore.pair? (bruijn ##.expr.158.2136 0 1))) (if (bruijn ##.%p.2137 0 2) (basic-block 2 2 (##.name.2138 ##.args.2139) ((##vcore.car (bruijn ##.expr.158.2136 1 1)) (##vcore.cdr (bruijn ##.expr.158.2136 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k128) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda18) (bruijn ##.kk.119.354 17 1))) ((bruijn ##.%k.970 6 0) #f))) ((bruijn ##.%k.970 5 0) #f))) ((bruijn ##.%k.970 4 0) #f))) ((bruijn ##.%k.970 3 0) #f))) ((bruijn ##.%k.970 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k128, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda18, self)))),
      VGetArg(statics, 17-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2086 1 0) (basic-block 1 1 (##.%x.2126) ((##vcore.car (bruijn ##.expr.352 12 2))) ((bruijn ##.equal?.243 17 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k127) '##foreign.function (bruijn ##.%x.2126 0 0))) ((bruijn ##.%k.970 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k127, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.960 0 0) (bruijn ##.%k.957 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2121 1 0) (basic-block 2 2 (##.%x.2124 ##.%x.2125) ((##vcore.cons (bruijn ##.name.2120 5 0) (bruijn ##.expr.352 21 2)) (##vcore.cons (bruijn ##.%x.2124 0 0) (bruijn ##.intrinsics.305 22 4))) (set! (bruijn ##.%k.964 1 0) (bruijn ##.intrinsics.305 22 4) (bruijn ##.%x.2125 0 1))) ((bruijn ##.%k.964 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 21-1, 2));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 22-1, 4));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(22l), VEncodeInt(4l),
      self->vars[1]
    );
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k140(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2122 ##.%r.2123) ((##vcore.cons (bruijn ##.name.2120 4 0) '()) (##vcore.cons '##intrinsic (bruijn ##.%x.2122 0 0))) ((bruijn ##.%k.961 3 0) (bruijn ##.%r.2123 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.312) #f (bruijn ##.lift-intrinsic!.312 20 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k140) (bruijn ##.name.2120 3 0) (bruijn ##.name.2120 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k140, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2121) ((##vcore.not (bruijn ##.%x.967 1 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k138) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k139)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k138, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k139, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.256 22 13) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k137) (bruijn ##.name.2120 1 0) (bruijn ##.intrinsics.305 18 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k137, self)))),
      statics->vars[0],
      VGetArg(statics, 18-1, 4));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.958 0 0) (basic-block 2 2 (##.expr.160.2118 ##.%p.2119) ((##vcore.cdr (bruijn ##.expr.352 15 2)) (##vcore.pair? (bruijn ##.expr.160.2118 0 0))) (if (bruijn ##.%p.2119 0 1) (basic-block 1 1 (##.name.2120) ((##vcore.car (bruijn ##.expr.160.2118 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k136) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda19) (bruijn ##.kk.119.354 15 1))) ((bruijn ##.%k.957 3 0) #f))) ((bruijn ##.%k.957 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k136, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda19, self)))),
      VGetArg(statics, 15-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2087 1 0) (basic-block 1 1 (##.%x.2117) ((##vcore.car (bruijn ##.expr.352 13 2))) ((bruijn ##.equal?.243 18 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k135) '##intrinsic (bruijn ##.%x.2117 0 0))) ((bruijn ##.%k.957 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k135, self)))),
      _V10intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.947 0 0) (bruijn ##.%k.944 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2112 1 0) (basic-block 2 2 (##.%x.2115 ##.%x.2116) ((##vcore.cons (bruijn ##.name.2111 5 0) (bruijn ##.expr.352 22 2)) (##vcore.cons (bruijn ##.%x.2115 0 0) (bruijn ##.intrinsics.305 23 4))) (set! (bruijn ##.%k.951 1 0) (bruijn ##.intrinsics.305 23 4) (bruijn ##.%x.2116 0 1))) ((bruijn ##.%k.951 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 22-1, 2));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 23-1, 4));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(23l), VEncodeInt(4l),
      self->vars[1]
    );
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k148(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2113 ##.%r.2114) ((##vcore.cons (bruijn ##.name.2111 4 0) '()) (##vcore.cons '##basic-intrinsic (bruijn ##.%x.2113 0 0))) ((bruijn ##.%k.948 3 0) (bruijn ##.%r.2114 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10basic__intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k147(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.312) #f (bruijn ##.lift-intrinsic!.312 21 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k148) (bruijn ##.name.2111 3 0) (bruijn ##.name.2111 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k148, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2112) ((##vcore.not (bruijn ##.%x.954 1 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k146) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k147)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k146, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k147, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.256 23 13) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k145) (bruijn ##.name.2111 1 0) (bruijn ##.intrinsics.305 19 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k145, self)))),
      statics->vars[0],
      VGetArg(statics, 19-1, 4));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.945 0 0) (basic-block 2 2 (##.expr.162.2109 ##.%p.2110) ((##vcore.cdr (bruijn ##.expr.352 16 2)) (##vcore.pair? (bruijn ##.expr.162.2109 0 0))) (if (bruijn ##.%p.2110 0 1) (basic-block 1 1 (##.name.2111) ((##vcore.car (bruijn ##.expr.162.2109 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k144) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda20) (bruijn ##.kk.119.354 16 1))) ((bruijn ##.%k.944 3 0) #f))) ((bruijn ##.%k.944 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k144, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda20, self)))),
      VGetArg(statics, 16-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2088 1 0) (basic-block 1 1 (##.%x.2108) ((##vcore.car (bruijn ##.expr.352 14 2))) ((bruijn ##.equal?.243 19 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k143) '##basic-intrinsic (bruijn ##.%x.2108 0 0))) ((bruijn ##.%k.944 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k143, self)))),
      _V10basic__intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.937 0 0) (bruijn ##.%k.933 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2106 ##.%r.2107) ((##vcore.cons (bruijn ##.%x.940 1 0) '()) (##vcore.cons 'quote (bruijn ##.%x.2106 0 0))) ((bruijn ##.%k.938 2 0) (bruijn ##.%r.2107 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0quote,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 20 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k153) (bruijn ##.x.2103 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k153, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.934 0 0) (basic-block 2 2 (##.expr.164.2101 ##.%p.2102) ((##vcore.cdr (bruijn ##.expr.352 17 2)) (##vcore.pair? (bruijn ##.expr.164.2101 0 0))) (if (bruijn ##.%p.2102 0 1) (basic-block 3 3 (##.x.2103 ##.%x.2104 ##.%p.2105) ((##vcore.car (bruijn ##.expr.164.2101 1 0)) (##vcore.cdr (bruijn ##.expr.164.2101 1 0)) (##vcore.null? (bruijn ##.%x.2104 0 1))) (if (bruijn ##.%p.2105 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k152) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda21) (bruijn ##.kk.119.354 17 1)) ((bruijn ##.%k.933 4 0) #f))) ((bruijn ##.%k.933 3 0) #f))) ((bruijn ##.%k.933 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 2));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k152, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda21, self)))),
      VGetArg(statics, 17-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2089 1 0) (basic-block 1 1 (##.%x.2100) ((##vcore.car (bruijn ##.expr.352 15 2))) ((bruijn ##.equal?.243 20 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k151) 'quote (bruijn ##.%x.2100 0 0))) ((bruijn ##.%k.933 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k151, self)))),
      _V0quote,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.926 0 0) (bruijn ##.%k.923 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2098 ##.%r.2099) ((##vcore.cons (bruijn ##.f.2096 3 0) (bruijn ##.%x.929 1 0)) (##vcore.cons '##inline (bruijn ##.%x.2098 0 0))) ((bruijn ##.%k.927 2 0) (bruijn ##.%r.2099 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10inline,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 22 14) (bruijn ##.%k.930 0 0) (bruijn ##.fun.351 21 1) (bruijn ##.x.447 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 21-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 25 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k158) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda23) (bruijn ##.xs.2097 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k158, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda23, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.924 0 0) (basic-block 2 2 (##.expr.166.2094 ##.%p.2095) ((##vcore.cdr (bruijn ##.expr.352 18 2)) (##vcore.pair? (bruijn ##.expr.166.2094 0 0))) (if (bruijn ##.%p.2095 0 1) (basic-block 2 2 (##.f.2096 ##.xs.2097) ((##vcore.car (bruijn ##.expr.166.2094 1 0)) (##vcore.cdr (bruijn ##.expr.166.2094 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k157) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda22) (bruijn ##.kk.119.354 18 1))) ((bruijn ##.%k.923 3 0) #f))) ((bruijn ##.%k.923 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 2));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k157, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda22, self)))),
      VGetArg(statics, 18-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2090 1 0) (basic-block 1 1 (##.%x.2093) ((##vcore.car (bruijn ##.expr.352 16 2))) ((bruijn ##.equal?.243 21 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k156) '##inline (bruijn ##.%x.2093 0 0))) ((bruijn ##.%k.923 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k156, self)))),
      _V10inline,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k161(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.258 20 15) (bruijn ##.%k.917 14 0) (##string ##.string.2982))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 15)), 2,
      VGetArg(statics, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D2982.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.918 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k161))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k161, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2092) ((##vcore.not (bruijn ##.intrin.449 1 0))) (if (bruijn ##.%p.2092 0 0) ((bruijn ##.%k.919 3 0) (bruijn ##.expr.352 18 2)) (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.312) #f (bruijn ##.lift-intrinsic!.312 19 11) (bruijn ##.%k.919 3 0) (bruijn ##.expr.352 18 2) (bruijn ##.intrin.449 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VGetArg(statics, 18-1, 2));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 11));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 2);
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2091) ((##vcore.symbol? (bruijn ##.expr.352 16 2))) (if (bruijn ##.%p.2091 0 0) (if (bruijn ##.func-position?.353 16 3) ((bruijn ##.%k.919 1 0) (bruijn ##.expr.352 16 2)) ((bruijn ##.lookup-intrinsic-name.257 21 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k162) (bruijn ##.expr.352 16 2))) (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 17 12) (bruijn ##.%k.919 1 0) (bruijn ##.expr.352 16 2))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k162, self)))),
      VGetArg(statics, 16-1, 2));
}
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k159(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k160) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda24) (bruijn ##.kk.119.354 13 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k160, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda24, self)))),
      VGetArg(statics, 13-1, 1));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k154(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2090) ((##vcore.pair? (bruijn ##.expr.352 14 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k155) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k159)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k155, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k159, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k149(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2089) ((##vcore.pair? (bruijn ##.expr.352 13 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k150) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k154)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k150, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k154, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k141(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2088) ((##vcore.pair? (bruijn ##.expr.352 12 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k142) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k149)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k142, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k149, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k133(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2087) ((##vcore.pair? (bruijn ##.expr.352 11 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k134) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k141)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k134, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k141, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k125(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2086) ((##vcore.pair? (bruijn ##.expr.352 10 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k126) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k133)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k126, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k133, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k117(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2085) ((##vcore.pair? (bruijn ##.expr.352 9 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k118) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k125)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k118, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k125, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k106(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2084) ((##vcore.pair? (bruijn ##.expr.352 8 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k107) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k117)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k107, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k117, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k98(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2083) ((##vcore.pair? (bruijn ##.expr.352 7 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k99) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k106)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k99, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k106, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k86(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2082) ((##vcore.pair? (bruijn ##.expr.352 6 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k87) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k98)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k87, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k98, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k75(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2081) ((##vcore.pair? (bruijn ##.expr.352 5 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k76) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k86)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k76, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k86, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2080) ((##vcore.pair? (bruijn ##.expr.352 4 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k67) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k75)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k67, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k75, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2079) ((##vcore.pair? (bruijn ##.expr.352 3 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k59) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k66)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k59, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k66, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2078) ((##vcore.pair? (bruijn ##.expr.352 2 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k55) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k58)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k55, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k58, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.%k.916 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda7))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda7, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1385 0 0) (bruijn ##.%k.1379 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2547 ##.%x.2548 ##.%x.2549 ##.%r.2550) ((##vcore.cons (bruijn ##.%x.1391 1 0) '()) (##vcore.cons (bruijn ##.%x.1389 3 0) (bruijn ##.%x.2547 0 0)) (##vcore.cons (bruijn ##.k.2538 7 0) (bruijn ##.%x.2548 0 1)) (##vcore.cons 'define (bruijn ##.%x.2549 0 2))) ((bruijn ##.%k.1386 4 0) (bruijn ##.%r.2550 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0define,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 13 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k168) (bruijn ##.%x.1392 0 0) (bruijn ##.x.2544 3 0) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k168, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.251 16 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k167) (bruijn ##.y.2541 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k167, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 11 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k166) (bruijn ##.y.2541 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k166, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1380 0 0) (basic-block 2 2 (##.expr.170.2536 ##.%p.2537) ((##vcore.cdr (bruijn ##.expr.451 6 2)) (##vcore.pair? (bruijn ##.expr.170.2536 0 0))) (if (bruijn ##.%p.2537 0 1) (basic-block 3 3 (##.k.2538 ##.expr.171.2539 ##.%p.2540) ((##vcore.car (bruijn ##.expr.170.2536 1 0)) (##vcore.cdr (bruijn ##.expr.170.2536 1 0)) (##vcore.pair? (bruijn ##.expr.171.2539 0 1))) (if (bruijn ##.%p.2540 0 2) (basic-block 3 3 (##.y.2541 ##.expr.172.2542 ##.%p.2543) ((##vcore.car (bruijn ##.expr.171.2539 1 1)) (##vcore.cdr (bruijn ##.expr.171.2539 1 1)) (##vcore.pair? (bruijn ##.expr.172.2542 0 1))) (if (bruijn ##.%p.2543 0 2) (basic-block 3 3 (##.x.2544 ##.%x.2545 ##.%p.2546) ((##vcore.car (bruijn ##.expr.172.2542 1 1)) (##vcore.cdr (bruijn ##.expr.172.2542 1 1)) (##vcore.null? (bruijn ##.%x.2545 0 1))) (if (bruijn ##.%p.2546 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k165) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda26) (bruijn ##.kk.167.452 8 1)) ((bruijn ##.%k.1379 6 0) #f))) ((bruijn ##.%k.1379 5 0) #f))) ((bruijn ##.%k.1379 4 0) #f))) ((bruijn ##.%k.1379 3 0) #f))) ((bruijn ##.%k.1379 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k165, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda26, self)))),
      VGetArg(statics, 8-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2317 1 0) (basic-block 1 1 (##.%x.2535) ((##vcore.car (bruijn ##.expr.451 4 2))) ((bruijn ##.equal?.243 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k164) 'define (bruijn ##.%x.2535 0 0))) ((bruijn ##.%k.1379 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k164, self)))),
      _V0define,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1365 0 0) (bruijn ##.%k.1356 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2531 ##.%x.2532 ##.%x.2533 ##.%r.2534) ((##vcore.cons (bruijn ##.%x.1372 1 0) '()) (##vcore.cons (bruijn ##.%x.2530 3 1) (bruijn ##.%x.2531 0 0)) (##vcore.cons (bruijn ##.%x.1368 4 0) (bruijn ##.%x.2532 0 1)) (##vcore.cons 'set! (bruijn ##.%x.2533 0 2))) ((bruijn ##.%k.1366 5 0) (bruijn ##.%r.2534 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[1],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0set_B,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 19 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k176) (bruijn ##.%x.1373 0 0) (bruijn ##.x.2526 4 0) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k176, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->up->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2529 ##.%x.2530) ((##vcore.cons (bruijn ##.name.2522 4 0) (bruijn ##.rest.2523 4 1)) (##vcore.cons 'bruijn (bruijn ##.%x.2529 0 0))) ((bruijn ##.mangle-symbol.251 22 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k175) (bruijn ##.name.2522 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0bruijn,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k175, self)))),
      statics->up->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 16 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k174) (bruijn ##.fun.450 15 1) (bruijn ##.k.2514 7 0) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k174, self))));
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1361 0 0) (basic-block 2 2 (##.expr.177.2520 ##.%p.2521) ((##vcore.cdr (bruijn ##.expr.176.2517 3 0)) (##vcore.pair? (bruijn ##.expr.177.2520 0 0))) (if (bruijn ##.%p.2521 0 1) (basic-block 4 4 (##.name.2522 ##.rest.2523 ##.expr.178.2524 ##.%p.2525) ((##vcore.car (bruijn ##.expr.177.2520 1 0)) (##vcore.cdr (bruijn ##.expr.177.2520 1 0)) (##vcore.cdr (bruijn ##.expr.175.2515 5 1)) (##vcore.pair? (bruijn ##.expr.178.2524 0 2))) (if (bruijn ##.%p.2525 0 3) (basic-block 3 3 (##.x.2526 ##.%x.2527 ##.%p.2528) ((##vcore.car (bruijn ##.expr.178.2524 1 2)) (##vcore.cdr (bruijn ##.expr.178.2524 1 2)) (##vcore.null? (bruijn ##.%x.2527 0 1))) (if (bruijn ##.%p.2528 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k173) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda27) (bruijn ##.kk.167.452 13 1)) ((bruijn ##.%k.1356 10 0) #f))) ((bruijn ##.%k.1356 9 0) #f))) ((bruijn ##.%k.1356 8 0) #f))) ((bruijn ##.%k.1356 7 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[3] = _VBasic_VPairP2(runtime, NULL,
      self->vars[2]);
if(VDecodeBool(
self->vars[3])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[2]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k173, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda27, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1357 0 0) (basic-block 2 2 (##.expr.174.2512 ##.%p.2513) ((##vcore.cdr (bruijn ##.expr.451 7 2)) (##vcore.pair? (bruijn ##.expr.174.2512 0 0))) (if (bruijn ##.%p.2513 0 1) (basic-block 3 3 (##.k.2514 ##.expr.175.2515 ##.%p.2516) ((##vcore.car (bruijn ##.expr.174.2512 1 0)) (##vcore.cdr (bruijn ##.expr.174.2512 1 0)) (##vcore.pair? (bruijn ##.expr.175.2515 0 1))) (if (bruijn ##.%p.2516 0 2) (basic-block 2 2 (##.expr.176.2517 ##.%p.2518) ((##vcore.car (bruijn ##.expr.175.2515 1 1)) (##vcore.pair? (bruijn ##.expr.176.2517 0 0))) (if (bruijn ##.%p.2518 0 1) (basic-block 1 1 (##.%x.2519) ((##vcore.car (bruijn ##.expr.176.2517 1 0))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k172) 'bruijn (bruijn ##.%x.2519 0 0))) ((bruijn ##.%k.1356 5 0) #f))) ((bruijn ##.%k.1356 4 0) #f))) ((bruijn ##.%k.1356 3 0) #f))) ((bruijn ##.%k.1356 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k172, self)))),
      _V0bruijn,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2318 1 0) (basic-block 1 1 (##.%x.2511) ((##vcore.car (bruijn ##.expr.451 5 2))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k171) 'set! (bruijn ##.%x.2511 0 0))) ((bruijn ##.%k.1356 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k171, self)))),
      _V0set_B,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1344 0 0) (bruijn ##.%k.1338 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2507 ##.%x.2508 ##.%x.2509 ##.%r.2510) ((##vcore.cons (bruijn ##.%x.1351 1 0) '()) (##vcore.cons (bruijn ##.%x.1349 3 0) (bruijn ##.%x.2507 0 0)) (##vcore.cons (bruijn ##.%x.1347 4 0) (bruijn ##.%x.2508 0 1)) (##vcore.cons 'set! (bruijn ##.%x.2509 0 2))) ((bruijn ##.%k.1345 5 0) (bruijn ##.%r.2510 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0set_B,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 16 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k184) (bruijn ##.%x.1352 0 0) (bruijn ##.x.2504 4 0) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k184, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->up->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.251 19 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k183) (bruijn ##.y.2501 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k183, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 14 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k182) (bruijn ##.y.2501 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k182, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 13 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k181) (bruijn ##.fun.450 12 1) (bruijn ##.k.2498 3 0) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k181, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1339 0 0) (basic-block 2 2 (##.expr.180.2496 ##.%p.2497) ((##vcore.cdr (bruijn ##.expr.451 8 2)) (##vcore.pair? (bruijn ##.expr.180.2496 0 0))) (if (bruijn ##.%p.2497 0 1) (basic-block 3 3 (##.k.2498 ##.expr.181.2499 ##.%p.2500) ((##vcore.car (bruijn ##.expr.180.2496 1 0)) (##vcore.cdr (bruijn ##.expr.180.2496 1 0)) (##vcore.pair? (bruijn ##.expr.181.2499 0 1))) (if (bruijn ##.%p.2500 0 2) (basic-block 3 3 (##.y.2501 ##.expr.182.2502 ##.%p.2503) ((##vcore.car (bruijn ##.expr.181.2499 1 1)) (##vcore.cdr (bruijn ##.expr.181.2499 1 1)) (##vcore.pair? (bruijn ##.expr.182.2502 0 1))) (if (bruijn ##.%p.2503 0 2) (basic-block 3 3 (##.x.2504 ##.%x.2505 ##.%p.2506) ((##vcore.car (bruijn ##.expr.182.2502 1 1)) (##vcore.cdr (bruijn ##.expr.182.2502 1 1)) (##vcore.null? (bruijn ##.%x.2505 0 1))) (if (bruijn ##.%p.2506 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k180) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda28) (bruijn ##.kk.167.452 10 1)) ((bruijn ##.%k.1338 6 0) #f))) ((bruijn ##.%k.1338 5 0) #f))) ((bruijn ##.%k.1338 4 0) #f))) ((bruijn ##.%k.1338 3 0) #f))) ((bruijn ##.%k.1338 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k180, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda28, self)))),
      VGetArg(statics, 10-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2319 1 0) (basic-block 1 1 (##.%x.2495) ((##vcore.car (bruijn ##.expr.451 6 2))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k179) 'set! (bruijn ##.%x.2495 0 0))) ((bruijn ##.%k.1338 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k179, self)))),
      _V0set_B,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1327 0 0) (bruijn ##.%k.1321 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2491 ##.%x.2492 ##.%x.2493 ##.%r.2494) ((##vcore.cons (bruijn ##.%x.1334 1 0) '()) (##vcore.cons (bruijn ##.%x.1332 2 0) (bruijn ##.%x.2491 0 0)) (##vcore.cons (bruijn ##.%x.1330 3 0) (bruijn ##.%x.2492 0 1)) (##vcore.cons 'if (bruijn ##.%x.2493 0 2))) ((bruijn ##.%k.1328 4 0) (bruijn ##.%r.2494 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 16 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k191) (bruijn ##.fun.450 15 1) (bruijn ##.y.2488 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k191, self))));
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 15 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k190) (bruijn ##.fun.450 14 1) (bruijn ##.x.2485 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k190, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 14 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k189) (bruijn ##.fun.450 13 1) (bruijn ##.p.2482 3 0) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k189, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1322 0 0) (basic-block 2 2 (##.expr.184.2480 ##.%p.2481) ((##vcore.cdr (bruijn ##.expr.451 9 2)) (##vcore.pair? (bruijn ##.expr.184.2480 0 0))) (if (bruijn ##.%p.2481 0 1) (basic-block 3 3 (##.p.2482 ##.expr.185.2483 ##.%p.2484) ((##vcore.car (bruijn ##.expr.184.2480 1 0)) (##vcore.cdr (bruijn ##.expr.184.2480 1 0)) (##vcore.pair? (bruijn ##.expr.185.2483 0 1))) (if (bruijn ##.%p.2484 0 2) (basic-block 3 3 (##.x.2485 ##.expr.186.2486 ##.%p.2487) ((##vcore.car (bruijn ##.expr.185.2483 1 1)) (##vcore.cdr (bruijn ##.expr.185.2483 1 1)) (##vcore.pair? (bruijn ##.expr.186.2486 0 1))) (if (bruijn ##.%p.2487 0 2) (basic-block 3 3 (##.y.2488 ##.%x.2489 ##.%p.2490) ((##vcore.car (bruijn ##.expr.186.2486 1 1)) (##vcore.cdr (bruijn ##.expr.186.2486 1 1)) (##vcore.null? (bruijn ##.%x.2489 0 1))) (if (bruijn ##.%p.2490 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k188) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda29) (bruijn ##.kk.167.452 11 1)) ((bruijn ##.%k.1321 6 0) #f))) ((bruijn ##.%k.1321 5 0) #f))) ((bruijn ##.%k.1321 4 0) #f))) ((bruijn ##.%k.1321 3 0) #f))) ((bruijn ##.%k.1321 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k188, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda29, self)))),
      VGetArg(statics, 11-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2320 1 0) (basic-block 1 1 (##.%x.2479) ((##vcore.car (bruijn ##.expr.451 7 2))) ((bruijn ##.equal?.243 12 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k187) 'if (bruijn ##.%x.2479 0 0))) ((bruijn ##.%k.1321 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k187, self)))),
      _V0if,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1303 0 0) (bruijn ##.%k.1296 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2478) ((##vcore.cons (bruijn ##.%x.2477 2 1) (bruijn ##.%x.1306 1 0))) ((bruijn ##.%k.1304 7 0) (bruijn ##.%r.2478 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 23 14) (bruijn ##.%k.1307 0 0) (bruijn ##.fun.450 22 1) (bruijn ##.x.495 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k199(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2476 ##.%x.2477) ((##vcore.cons (bruijn ##.lamb.494 4 0) '()) (##vcore.cons 'close (bruijn ##.%x.2476 0 0))) ((bruijn ##.map.245 26 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k200) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda31) (bruijn ##.xs.2468 6 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k200, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda31, self)))),
      VGetArg(statics, 6-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.2469 ##.%x.2470 ##.%x.2471 ##.%x.2472 ##.%x.2473 ##.%x.2474 ##.%x.2475) ((##vcore.cons (bruijn ##.%x.1317 1 0) '()) (##vcore.cons (bruijn ##.n.2462 7 0) (bruijn ##.%x.2469 0 0)) (##vcore.cons (bruijn ##.%x.2470 0 1) '()) (##vcore.cons (bruijn ##.%x.1313 2 0) (bruijn ##.%x.2471 0 2)) (##vcore.cons '#f (bruijn ##.%x.2472 0 3)) (##vcore.cons (bruijn ##.lamb.494 3 0) (bruijn ##.%x.2473 0 4)) (##vcore.cons (bruijn ##.%x.2474 0 5) (bruijn ##.functions.306 21 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k199) (bruijn ##.functions.306 21 5) (bruijn ##.%x.2475 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VGetArg(statics, 21-1, 5));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k199, self)))),
      VEncodeInt(21l), VEncodeInt(5l),
      self->vars[6]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 19 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k198) (bruijn ##.fun.450 18 1) (bruijn ##.body.2465 4 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k198, self))));
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 18 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k197) (bruijn ##.debug-info.2459 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k197, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.genlambda.301) #f (bruijn ##.genlambda.301 17 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k196) (bruijn ##.fun.450 16 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k196, self))));
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1298 0 0) (basic-block 2 2 (##.expr.189.2457 ##.%p.2458) ((##vcore.cdr (bruijn ##.expr.188.2454 3 0)) (##vcore.pair? (bruijn ##.expr.189.2457 0 0))) (if (bruijn ##.%p.2458 0 1) (basic-block 3 3 (##.debug-info.2459 ##.expr.190.2460 ##.%p.2461) ((##vcore.car (bruijn ##.expr.189.2457 1 0)) (##vcore.cdr (bruijn ##.expr.189.2457 1 0)) (##vcore.pair? (bruijn ##.expr.190.2460 0 1))) (if (bruijn ##.%p.2461 0 2) (basic-block 3 3 (##.n.2462 ##.expr.191.2463 ##.%p.2464) ((##vcore.car (bruijn ##.expr.190.2460 1 1)) (##vcore.cdr (bruijn ##.expr.190.2460 1 1)) (##vcore.pair? (bruijn ##.expr.191.2463 0 1))) (if (bruijn ##.%p.2464 0 2) (basic-block 3 3 (##.body.2465 ##.%x.2466 ##.%p.2467) ((##vcore.car (bruijn ##.expr.191.2463 1 1)) (##vcore.cdr (bruijn ##.expr.191.2463 1 1)) (##vcore.null? (bruijn ##.%x.2466 0 1))) (if (bruijn ##.%p.2467 0 2) (basic-block 1 1 (##.xs.2468) ((##vcore.cdr (bruijn ##.expr.451 15 2))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k195) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda30) (bruijn ##.kk.167.452 14 1))) ((bruijn ##.%k.1296 7 0) #f))) ((bruijn ##.%k.1296 6 0) #f))) ((bruijn ##.%k.1296 5 0) #f))) ((bruijn ##.%k.1296 4 0) #f))) ((bruijn ##.%k.1296 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 2));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k195, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda30, self)))),
      VGetArg(statics, 14-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2321 1 0) (basic-block 2 2 (##.expr.188.2454 ##.%p.2455) ((##vcore.car (bruijn ##.expr.451 8 2)) (##vcore.pair? (bruijn ##.expr.188.2454 0 0))) (if (bruijn ##.%p.2455 0 1) (basic-block 1 1 (##.%x.2456) ((##vcore.car (bruijn ##.expr.188.2454 1 0))) ((bruijn ##.equal?.243 14 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k194) 'lambda (bruijn ##.%x.2456 0 0))) ((bruijn ##.%k.1296 1 0) #f))) ((bruijn ##.%k.1296 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k194, self)))),
      _V0lambda,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1276 0 0) (bruijn ##.%k.1267 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2453) ((##vcore.cons (bruijn ##.%x.2452 2 1) (bruijn ##.%x.1279 1 0))) ((bruijn ##.%k.1277 9 0) (bruijn ##.%r.2453 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 28 14) (bruijn ##.%k.1280 0 0) (bruijn ##.lamb.509 7 0) (bruijn ##.x.510 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 28-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k210(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2451 ##.%x.2452) ((##vcore.cons (bruijn ##.lamb.509 6 0) '()) (##vcore.cons 'close (bruijn ##.%x.2451 0 0))) ((bruijn ##.map.245 31 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k211) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda33) (bruijn ##.xs.2442 8 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k211, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda33, self)))),
      VGetArg(statics, 8-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.2444 ##.%x.2445 ##.%x.2446 ##.%x.2447 ##.%x.2448 ##.%x.2449 ##.%x.2450) ((##vcore.cons (bruijn ##.%x.1290 1 0) '()) (##vcore.cons (bruijn ##.n.2436 9 0) (bruijn ##.%x.2444 0 0)) (##vcore.cons (bruijn ##.%x.2445 0 1) '()) (##vcore.cons (bruijn ##.%x.1286 2 0) (bruijn ##.%x.2446 0 2)) (##vcore.cons '#f (bruijn ##.%x.2447 0 3)) (##vcore.cons (bruijn ##.lamb.509 5 0) (bruijn ##.%x.2448 0 4)) (##vcore.cons (bruijn ##.%x.2449 0 5) (bruijn ##.functions.306 26 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k210) (bruijn ##.functions.306 26 5) (bruijn ##.%x.2450 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VGetArg(statics, 26-1, 5));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k210, self)))),
      VEncodeInt(26l), VEncodeInt(5l),
      self->vars[6]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 24 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k209) (bruijn ##.lamb.509 3 0) (bruijn ##.body.2439 6 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k209, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k207(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 23 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k208) (bruijn ##.debug-info.2433 7 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 12));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k208, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2443) ((##vcore.cons (bruijn ##.%x.1292 1 0) (bruijn ##.qualified-functions.303 23 2))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k207) (bruijn ##.qualified-functions.303 23 2) (bruijn ##.%x.2443 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 23-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k207, self)))),
      VEncodeInt(23l), VEncodeInt(2l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.244 25 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k206) (bruijn ##.lamb.509 0 0) (bruijn ##.n.2436 4 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k206, self)))),
      _var0,
      statics->up->up->up->vars[0],
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-qualified-function.254 24 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k205) (bruijn ##.name.2427 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k205, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1269 0 0) (basic-block 2 2 (##.expr.194.2425 ##.%p.2426) ((##vcore.cdr (bruijn ##.expr.193.2422 3 0)) (##vcore.pair? (bruijn ##.expr.194.2425 0 0))) (if (bruijn ##.%p.2426 0 1) (basic-block 3 3 (##.name.2427 ##.expr.195.2428 ##.%p.2429) ((##vcore.car (bruijn ##.expr.194.2425 1 0)) (##vcore.cdr (bruijn ##.expr.194.2425 1 0)) (##vcore.pair? (bruijn ##.expr.195.2428 0 1))) (if (bruijn ##.%p.2429 0 2) (basic-block 3 3 (##.static?.2430 ##.expr.196.2431 ##.%p.2432) ((##vcore.car (bruijn ##.expr.195.2428 1 1)) (##vcore.cdr (bruijn ##.expr.195.2428 1 1)) (##vcore.pair? (bruijn ##.expr.196.2431 0 1))) (if (bruijn ##.%p.2432 0 2) (basic-block 3 3 (##.debug-info.2433 ##.expr.197.2434 ##.%p.2435) ((##vcore.car (bruijn ##.expr.196.2431 1 1)) (##vcore.cdr (bruijn ##.expr.196.2431 1 1)) (##vcore.pair? (bruijn ##.expr.197.2434 0 1))) (if (bruijn ##.%p.2435 0 2) (basic-block 3 3 (##.n.2436 ##.expr.198.2437 ##.%p.2438) ((##vcore.car (bruijn ##.expr.197.2434 1 1)) (##vcore.cdr (bruijn ##.expr.197.2434 1 1)) (##vcore.pair? (bruijn ##.expr.198.2437 0 1))) (if (bruijn ##.%p.2438 0 2) (basic-block 3 3 (##.body.2439 ##.%x.2440 ##.%p.2441) ((##vcore.car (bruijn ##.expr.198.2437 1 1)) (##vcore.cdr (bruijn ##.expr.198.2437 1 1)) (##vcore.null? (bruijn ##.%x.2440 0 1))) (if (bruijn ##.%p.2441 0 2) (basic-block 1 1 (##.xs.2442) ((##vcore.cdr (bruijn ##.expr.451 18 2))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k204) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda32) (bruijn ##.kk.167.452 17 1))) ((bruijn ##.%k.1267 9 0) #f))) ((bruijn ##.%k.1267 8 0) #f))) ((bruijn ##.%k.1267 7 0) #f))) ((bruijn ##.%k.1267 6 0) #f))) ((bruijn ##.%k.1267 5 0) #f))) ((bruijn ##.%k.1267 4 0) #f))) ((bruijn ##.%k.1267 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 2));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k204, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda32, self)))),
      VGetArg(statics, 17-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2322 1 0) (basic-block 2 2 (##.expr.193.2422 ##.%p.2423) ((##vcore.car (bruijn ##.expr.451 9 2)) (##vcore.pair? (bruijn ##.expr.193.2422 0 0))) (if (bruijn ##.%p.2423 0 1) (basic-block 1 1 (##.%x.2424) ((##vcore.car (bruijn ##.expr.193.2422 1 0))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k203) '##qualified-lambda (bruijn ##.%x.2424 0 0))) ((bruijn ##.%k.1267 1 0) #f))) ((bruijn ##.%k.1267 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k203, self)))),
      _V10qualified__lambda,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1255 0 0) (bruijn ##.%k.1248 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2418 ##.%x.2419 ##.%x.2420 ##.%r.2421) ((##vcore.cons (bruijn ##.%x.1261 1 0) '()) (##vcore.cons (bruijn ##.%x.1259 2 0) (bruijn ##.%x.2418 0 0)) (##vcore.cons (bruijn ##.n.2406 7 0) (bruijn ##.%x.2419 0 1)) (##vcore.cons 'letrec (bruijn ##.%x.2420 0 2))) ((bruijn ##.%k.1256 3 0) (bruijn ##.%r.2421 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0letrec,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 19 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k217) (bruijn ##.fun.450 18 1) (bruijn ##.body.2415 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k217, self))));
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 20 14) (bruijn ##.%k.1262 1 0) (bruijn ##.%x.1263 0 0) (bruijn ##.val.521 1 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.mangle-symbol.251 23 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k218) (bruijn ##.x.520 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k218, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 22 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k216) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda35) (bruijn ##.xs.2409 3 0) (bruijn ##.vals.2412 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k216, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda35, self)))),
      statics->up->up->vars[0],
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1249 0 0) (basic-block 2 2 (##.expr.200.2404 ##.%p.2405) ((##vcore.cdr (bruijn ##.expr.451 12 2)) (##vcore.pair? (bruijn ##.expr.200.2404 0 0))) (if (bruijn ##.%p.2405 0 1) (basic-block 3 3 (##.n.2406 ##.expr.201.2407 ##.%p.2408) ((##vcore.car (bruijn ##.expr.200.2404 1 0)) (##vcore.cdr (bruijn ##.expr.200.2404 1 0)) (##vcore.pair? (bruijn ##.expr.201.2407 0 1))) (if (bruijn ##.%p.2408 0 2) (basic-block 3 3 (##.xs.2409 ##.expr.202.2410 ##.%p.2411) ((##vcore.car (bruijn ##.expr.201.2407 1 1)) (##vcore.cdr (bruijn ##.expr.201.2407 1 1)) (##vcore.pair? (bruijn ##.expr.202.2410 0 1))) (if (bruijn ##.%p.2411 0 2) (basic-block 3 3 (##.vals.2412 ##.expr.203.2413 ##.%p.2414) ((##vcore.car (bruijn ##.expr.202.2410 1 1)) (##vcore.cdr (bruijn ##.expr.202.2410 1 1)) (##vcore.pair? (bruijn ##.expr.203.2413 0 1))) (if (bruijn ##.%p.2414 0 2) (basic-block 3 3 (##.body.2415 ##.%x.2416 ##.%p.2417) ((##vcore.car (bruijn ##.expr.203.2413 1 1)) (##vcore.cdr (bruijn ##.expr.203.2413 1 1)) (##vcore.null? (bruijn ##.%x.2416 0 1))) (if (bruijn ##.%p.2417 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k215) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda34) (bruijn ##.kk.167.452 15 1)) ((bruijn ##.%k.1248 7 0) #f))) ((bruijn ##.%k.1248 6 0) #f))) ((bruijn ##.%k.1248 5 0) #f))) ((bruijn ##.%k.1248 4 0) #f))) ((bruijn ##.%k.1248 3 0) #f))) ((bruijn ##.%k.1248 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k215, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda34, self)))),
      VGetArg(statics, 15-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2323 1 0) (basic-block 1 1 (##.%x.2403) ((##vcore.car (bruijn ##.expr.451 10 2))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k214) 'letrec (bruijn ##.%x.2403 0 0))) ((bruijn ##.%k.1248 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k214, self)))),
      _V0letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1233 0 0) (bruijn ##.%k.1225 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.path.2382 6 0) (basic-block 1 1 (##.%x.2402) ((##vcore.cons (bruijn ##.path.2382 7 0) (bruijn ##.static-environments.309 22 8))) (set! (bruijn ##.%k.1243 1 0) (bruijn ##.static-environments.309 22 8) (bruijn ##.%x.2402 0 0))) ((bruijn ##.%k.1243 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 6-1, 0))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 22-1, 8));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(22l), VEncodeInt(8l),
      self->vars[0]
    );
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.2397 ##.%x.2398 ##.%x.2399 ##.%x.2400 ##.%r.2401) ((##vcore.cons (bruijn ##.%x.1240 1 0) '()) (##vcore.cons (bruijn ##.%x.1238 2 0) (bruijn ##.%x.2397 0 0)) (##vcore.cons (bruijn ##.n.2385 7 0) (bruijn ##.%x.2398 0 1)) (##vcore.cons (bruijn ##.path.2382 8 0) (bruijn ##.%x.2399 0 2)) (##vcore.cons '##letrec (bruijn ##.%x.2400 0 3))) ((bruijn ##.%k.1234 3 0) (bruijn ##.%r.2401 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10letrec,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[4]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 21 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k226) (bruijn ##.fun.450 20 1) (bruijn ##.body.2394 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k226, self))));
    VWORD _arg1 = 
      VGetArg(statics, 20-1, 1);
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 22 14) (bruijn ##.%k.1241 1 0) (bruijn ##.%x.1242 0 0) (bruijn ##.val.534 1 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.mangle-symbol.251 25 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k227) (bruijn ##.x.533 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k227, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k224(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.245 24 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k225) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda37) (bruijn ##.xs.2388 3 0) (bruijn ##.vals.2391 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k225, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda37, self)))),
      statics->up->up->vars[0],
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k223) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k224))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k223, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k224, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1226 0 0) (basic-block 2 2 (##.expr.205.2380 ##.%p.2381) ((##vcore.cdr (bruijn ##.expr.451 13 2)) (##vcore.pair? (bruijn ##.expr.205.2380 0 0))) (if (bruijn ##.%p.2381 0 1) (basic-block 3 3 (##.path.2382 ##.expr.206.2383 ##.%p.2384) ((##vcore.car (bruijn ##.expr.205.2380 1 0)) (##vcore.cdr (bruijn ##.expr.205.2380 1 0)) (##vcore.pair? (bruijn ##.expr.206.2383 0 1))) (if (bruijn ##.%p.2384 0 2) (basic-block 3 3 (##.n.2385 ##.expr.207.2386 ##.%p.2387) ((##vcore.car (bruijn ##.expr.206.2383 1 1)) (##vcore.cdr (bruijn ##.expr.206.2383 1 1)) (##vcore.pair? (bruijn ##.expr.207.2386 0 1))) (if (bruijn ##.%p.2387 0 2) (basic-block 3 3 (##.xs.2388 ##.expr.208.2389 ##.%p.2390) ((##vcore.car (bruijn ##.expr.207.2386 1 1)) (##vcore.cdr (bruijn ##.expr.207.2386 1 1)) (##vcore.pair? (bruijn ##.expr.208.2389 0 1))) (if (bruijn ##.%p.2390 0 2) (basic-block 3 3 (##.vals.2391 ##.expr.209.2392 ##.%p.2393) ((##vcore.car (bruijn ##.expr.208.2389 1 1)) (##vcore.cdr (bruijn ##.expr.208.2389 1 1)) (##vcore.pair? (bruijn ##.expr.209.2392 0 1))) (if (bruijn ##.%p.2393 0 2) (basic-block 3 3 (##.body.2394 ##.%x.2395 ##.%p.2396) ((##vcore.car (bruijn ##.expr.209.2392 1 1)) (##vcore.cdr (bruijn ##.expr.209.2392 1 1)) (##vcore.null? (bruijn ##.%x.2395 0 1))) (if (bruijn ##.%p.2396 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k222) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda36) (bruijn ##.kk.167.452 17 1)) ((bruijn ##.%k.1225 8 0) #f))) ((bruijn ##.%k.1225 7 0) #f))) ((bruijn ##.%k.1225 6 0) #f))) ((bruijn ##.%k.1225 5 0) #f))) ((bruijn ##.%k.1225 4 0) #f))) ((bruijn ##.%k.1225 3 0) #f))) ((bruijn ##.%k.1225 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 2));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k222, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda36, self)))),
      VGetArg(statics, 17-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2324 1 0) (basic-block 1 1 (##.%x.2379) ((##vcore.car (bruijn ##.expr.451 11 2))) ((bruijn ##.equal?.243 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k221) '##letrec (bruijn ##.%x.2379 0 0))) ((bruijn ##.%k.1225 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k221, self)))),
      _V10letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1207 0 0) (bruijn ##.%k.1199 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.2370 ##.%x.2371 ##.%x.2372 ##.%x.2373 ##.%x.2374 ##.%r.2375) ((##vcore.cons (bruijn ##.%x.1215 1 0) '()) (##vcore.cons (bruijn ##.%x.1213 2 0) (bruijn ##.%x.2370 0 0)) (##vcore.cons (bruijn ##.xs.2361 6 0) (bruijn ##.%x.2371 0 1)) (##vcore.cons (bruijn ##.n.2358 7 0) (bruijn ##.%x.2372 0 2)) (##vcore.cons (bruijn ##.cost.2355 8 0) (bruijn ##.%x.2373 0 3)) (##vcore.cons 'basic-block (bruijn ##.%x.2374 0 4))) ((bruijn ##.%k.1208 3 0) (bruijn ##.%r.2375 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0basic__block,
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 22 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k233) (bruijn ##.fun.450 21 1) (bruijn ##.body.2367 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k233, self))));
    VWORD _arg1 = 
      VGetArg(statics, 21-1, 1);
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2378) ((##vcore.cons (bruijn ##.%x.1217 3 0) (bruijn ##.%x.1218 1 0))) ((bruijn ##.%k.1216 5 0) (bruijn ##.%r.2378 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 26 14) (bruijn ##.%k.1219 0 0) (bruijn ##.fun.450 25 1) (bruijn ##.x.548 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2377) ((##vcore.cdr (bruijn ##.val.547 3 2))) ((bruijn ##.map.245 29 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k235) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda40) (bruijn ##.%x.2377 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k235, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda40, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda39, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.2376) ((##vcore.car (bruijn ##.val.547 1 2))) (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 23 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k234) (bruijn ##.fun.450 22 1) (bruijn ##.%x.2376 0 0) #t))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k234, self))));
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 25 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k232) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda39) (bruijn ##.xs.2361 3 0) (bruijn ##.vals.2364 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 2)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k232, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda39, self)))),
      statics->up->up->vars[0],
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1200 0 0) (basic-block 2 2 (##.expr.211.2353 ##.%p.2354) ((##vcore.cdr (bruijn ##.expr.451 14 2)) (##vcore.pair? (bruijn ##.expr.211.2353 0 0))) (if (bruijn ##.%p.2354 0 1) (basic-block 3 3 (##.cost.2355 ##.expr.212.2356 ##.%p.2357) ((##vcore.car (bruijn ##.expr.211.2353 1 0)) (##vcore.cdr (bruijn ##.expr.211.2353 1 0)) (##vcore.pair? (bruijn ##.expr.212.2356 0 1))) (if (bruijn ##.%p.2357 0 2) (basic-block 3 3 (##.n.2358 ##.expr.213.2359 ##.%p.2360) ((##vcore.car (bruijn ##.expr.212.2356 1 1)) (##vcore.cdr (bruijn ##.expr.212.2356 1 1)) (##vcore.pair? (bruijn ##.expr.213.2359 0 1))) (if (bruijn ##.%p.2360 0 2) (basic-block 3 3 (##.xs.2361 ##.expr.214.2362 ##.%p.2363) ((##vcore.car (bruijn ##.expr.213.2359 1 1)) (##vcore.cdr (bruijn ##.expr.213.2359 1 1)) (##vcore.pair? (bruijn ##.expr.214.2362 0 1))) (if (bruijn ##.%p.2363 0 2) (basic-block 3 3 (##.vals.2364 ##.expr.215.2365 ##.%p.2366) ((##vcore.car (bruijn ##.expr.214.2362 1 1)) (##vcore.cdr (bruijn ##.expr.214.2362 1 1)) (##vcore.pair? (bruijn ##.expr.215.2365 0 1))) (if (bruijn ##.%p.2366 0 2) (basic-block 3 3 (##.body.2367 ##.%x.2368 ##.%p.2369) ((##vcore.car (bruijn ##.expr.215.2365 1 1)) (##vcore.cdr (bruijn ##.expr.215.2365 1 1)) (##vcore.null? (bruijn ##.%x.2368 0 1))) (if (bruijn ##.%p.2369 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k231) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda38) (bruijn ##.kk.167.452 18 1)) ((bruijn ##.%k.1199 8 0) #f))) ((bruijn ##.%k.1199 7 0) #f))) ((bruijn ##.%k.1199 6 0) #f))) ((bruijn ##.%k.1199 5 0) #f))) ((bruijn ##.%k.1199 4 0) #f))) ((bruijn ##.%k.1199 3 0) #f))) ((bruijn ##.%k.1199 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k231, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda38, self)))),
      VGetArg(statics, 18-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2325 1 0) (basic-block 1 1 (##.%x.2352) ((##vcore.car (bruijn ##.expr.451 12 2))) ((bruijn ##.equal?.243 17 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k230) 'basic-block (bruijn ##.%x.2352 0 0))) ((bruijn ##.%k.1199 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k230, self)))),
      _V0basic__block,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1189 0 0) (bruijn ##.%k.1184 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2348 ##.%x.2349 ##.%x.2350 ##.%r.2351) ((##vcore.cons (bruijn ##.%x.1194 2 0) (bruijn ##.%x.1195 1 0)) (##vcore.cons (bruijn ##.static?.2343 5 0) (bruijn ##.%x.2348 0 0)) (##vcore.cons (bruijn ##.name.2340 6 0) (bruijn ##.%x.2349 0 1)) (##vcore.cons '##qualified-call (bruijn ##.%x.2350 0 2))) ((bruijn ##.%k.1190 3 0) (bruijn ##.%r.2351 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__call,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 22 14) (bruijn ##.%k.1196 0 0) (bruijn ##.fun.450 21 1) (bruijn ##.x.557 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 21-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 25 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k241) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda42) (bruijn ##.xs.2347 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k241, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda42, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 20 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k240) (bruijn ##.fun.450 19 1) (bruijn ##.f.2346 1 0) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k240, self))));
    VWORD _arg1 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1185 0 0) (basic-block 2 2 (##.expr.217.2338 ##.%p.2339) ((##vcore.cdr (bruijn ##.expr.451 15 2)) (##vcore.pair? (bruijn ##.expr.217.2338 0 0))) (if (bruijn ##.%p.2339 0 1) (basic-block 3 3 (##.name.2340 ##.expr.218.2341 ##.%p.2342) ((##vcore.car (bruijn ##.expr.217.2338 1 0)) (##vcore.cdr (bruijn ##.expr.217.2338 1 0)) (##vcore.pair? (bruijn ##.expr.218.2341 0 1))) (if (bruijn ##.%p.2342 0 2) (basic-block 3 3 (##.static?.2343 ##.expr.219.2344 ##.%p.2345) ((##vcore.car (bruijn ##.expr.218.2341 1 1)) (##vcore.cdr (bruijn ##.expr.218.2341 1 1)) (##vcore.pair? (bruijn ##.expr.219.2344 0 1))) (if (bruijn ##.%p.2345 0 2) (basic-block 2 2 (##.f.2346 ##.xs.2347) ((##vcore.car (bruijn ##.expr.219.2344 1 1)) (##vcore.cdr (bruijn ##.expr.219.2344 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k239) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda41) (bruijn ##.kk.167.452 17 1))) ((bruijn ##.%k.1184 5 0) #f))) ((bruijn ##.%k.1184 4 0) #f))) ((bruijn ##.%k.1184 3 0) #f))) ((bruijn ##.%k.1184 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 2));
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k239, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda41, self)))),
      VGetArg(statics, 17-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2326 1 0) (basic-block 1 1 (##.%x.2337) ((##vcore.car (bruijn ##.expr.451 13 2))) ((bruijn ##.equal?.243 18 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k238) '##qualified-call (bruijn ##.%x.2337 0 0))) ((bruijn ##.%k.1184 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k238, self)))),
      _V10qualified__call,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1167 0 0) (bruijn ##.%k.1165 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2331) ((##vcore.cons (bruijn ##.%x.1169 2 0) (bruijn ##.%x.1170 1 0))) ((bruijn ##.%k.1168 3 0) (bruijn ##.%r.2331 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 20 14) (bruijn ##.%k.1171 0 0) (bruijn ##.fun.450 19 1) (bruijn ##.x.569 0 1) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 23 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k246) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda45) (bruijn ##.xs.568 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k246, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda45, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 18 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k245) (bruijn ##.fun.450 17 1) (bruijn ##.f.2328 3 0) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k245, self))));
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[0];
    VWORD _arg3 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2330) ((##vcore.null? (bruijn ##.tail-expr.567 1 0))) (if (bruijn ##.%p.2330 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k244) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda44) (bruijn ##.kk.167.452 15 1)) ((bruijn ##.%k.1165 3 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k244, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda44, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.223.561 5 1) (bruijn ##.%k.1180 1 0) (bruijn ##.expr.225.563 3 1) (bruijn ##.%x.1181 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2333 1 1) ((bruijn ##.reverse.252 24 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k248) (bruijn ##.xs.222.564 2 2)) ((bruijn ##.%k.1180 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k248, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.223.561 7 1) (bruijn ##.%k.1175 2 0) (bruijn ##.expr.225.563 5 1) (bruijn ##.%x.1176 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k250(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.252 26 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k251) (bruijn ##.xs.222.564 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k251, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs.2334 ##.%x.2335 ##.%x.2336) ((##vcore.car (bruijn ##.expr.225.563 4 1)) (##vcore.cdr (bruijn ##.expr.225.563 4 1)) (##vcore.cons (bruijn ##.xs.2334 0 0) (bruijn ##.xs.222.564 4 2))) ((bruijn ##.kk.224.565 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k250) (bruijn ##.%x.2335 0 1) (bruijn ##.%x.2336 0 2)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k250, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1174 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0lambda48))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0lambda48, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k249(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1173 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0lambda47) (bruijn ##.loop.562 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0lambda47, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.2332 ##.%p.2333) ((##vcore.pair? (bruijn ##.expr.225.563 1 1)) (##vcore.not (bruijn ##.%x.2332 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k247) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k249)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k247, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k249, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562")) (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316 ##.loop.562) #f (bruijn ##.loop.562 0 0) (bruijn ##.%k.1172 1 0) (bruijn ##.expr.221.2329 2 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2327 1 0) (basic-block 2 2 (##.f.2328 ##.expr.221.2329) ((##vcore.car (bruijn ##.expr.451 14 2)) (##vcore.cdr (bruijn ##.expr.451 14 2))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda43) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda46))) ((bruijn ##.%k.1165 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda43, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda46, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.258 18 15) (bruijn ##.%k.1163 0 0) (##string ##.string.2983) (bruijn ##.expr.451 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 15)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2983.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 2));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k252(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1162 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda49) (bruijn ##.kk.167.452 11 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 11-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda49, self)))),
      VGetArg(statics, 11-1, 1));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k242(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2327) ((##vcore.pair? (bruijn ##.expr.451 12 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k243) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k252)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k243, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k252, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k236(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2326) ((##vcore.pair? (bruijn ##.expr.451 11 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k237) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k242)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k237, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k242, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k228(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2325) ((##vcore.pair? (bruijn ##.expr.451 10 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k229) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k236)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k229, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k236, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k219(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2324) ((##vcore.pair? (bruijn ##.expr.451 9 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k220) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k228)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k220, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k228, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k212(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2323) ((##vcore.pair? (bruijn ##.expr.451 8 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k213) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k219)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k213, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k219, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k201(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2322) ((##vcore.pair? (bruijn ##.expr.451 7 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k202) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k212)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k202, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k212, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k192(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2321) ((##vcore.pair? (bruijn ##.expr.451 6 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k193) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k201)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k193, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k201, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k185(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2320) ((##vcore.pair? (bruijn ##.expr.451 5 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k186) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k192)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k186, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k192, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k177(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2319) ((##vcore.pair? (bruijn ##.expr.451 4 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k178) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k185)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k178, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k185, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k169(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2318) ((##vcore.pair? (bruijn ##.expr.451 3 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k170) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k177)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k170, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k177, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2317) ((##vcore.pair? (bruijn ##.expr.451 2 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k163) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k169)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k163, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k169, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.1161 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda25))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda25, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1447 0 0) (bruijn ##.%k.1445 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1448 0 0) (bruijn ##.expr.571 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1446 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k255) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda51) (bruijn ##.kk.226.572 4 1)) ((bruijn ##.%k.1445 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k255, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda51, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2551 1 0) (basic-block 1 1 (##.%x.2567) ((##vcore.car (bruijn ##.expr.571 4 2))) ((bruijn ##.equal?.243 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k254) 'bruijn (bruijn ##.%x.2567 0 0))) ((bruijn ##.%k.1445 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k254, self)))),
      _V0bruijn,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1441 0 0) (bruijn ##.%k.1439 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 8 14) (bruijn ##.%k.1442 0 0) (bruijn ##.fun.570 7 1) (bruijn ##.expr.571 7 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1440 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k259) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda52) (bruijn ##.kk.226.572 5 1)) ((bruijn ##.%k.1439 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k259, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda52, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2552 1 0) (basic-block 1 1 (##.%x.2566) ((##vcore.car (bruijn ##.expr.571 5 2))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k258) 'lambda (bruijn ##.%x.2566 0 0))) ((bruijn ##.%k.1439 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k258, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1435 0 0) (bruijn ##.%k.1433 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 9 14) (bruijn ##.%k.1436 0 0) (bruijn ##.fun.570 8 1) (bruijn ##.expr.571 8 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1434 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k263) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda53) (bruijn ##.kk.226.572 6 1)) ((bruijn ##.%k.1433 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k263, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda53, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2553 1 0) (basic-block 1 1 (##.%x.2565) ((##vcore.car (bruijn ##.expr.571 6 2))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k262) '##qualified-lambda (bruijn ##.%x.2565 0 0))) ((bruijn ##.%k.1433 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k262, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1429 0 0) (bruijn ##.%k.1427 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 10 14) (bruijn ##.%k.1430 0 0) (bruijn ##.fun.570 9 1) (bruijn ##.expr.571 9 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1428 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k267) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda54) (bruijn ##.kk.226.572 7 1)) ((bruijn ##.%k.1427 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k267, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda54, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2554 1 0) (basic-block 1 1 (##.%x.2564) ((##vcore.car (bruijn ##.expr.571 7 2))) ((bruijn ##.equal?.243 12 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k266) 'case-lambda (bruijn ##.%x.2564 0 0))) ((bruijn ##.%k.1427 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k266, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1423 0 0) (bruijn ##.%k.1421 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 11 14) (bruijn ##.%k.1424 0 0) (bruijn ##.fun.570 10 1) (bruijn ##.expr.571 10 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1422 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k271) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda55) (bruijn ##.kk.226.572 8 1)) ((bruijn ##.%k.1421 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k271, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda55, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2555 1 0) (basic-block 1 1 (##.%x.2563) ((##vcore.car (bruijn ##.expr.571 8 2))) ((bruijn ##.equal?.243 13 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k270) '##qualified-case-lambda (bruijn ##.%x.2563 0 0))) ((bruijn ##.%k.1421 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k270, self)))),
      _V10qualified__case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1417 0 0) (bruijn ##.%k.1415 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 12 14) (bruijn ##.%k.1418 0 0) (bruijn ##.fun.570 11 1) (bruijn ##.expr.571 11 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1416 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k275) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda56) (bruijn ##.kk.226.572 9 1)) ((bruijn ##.%k.1415 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k275, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda56, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2556 1 0) (basic-block 1 1 (##.%x.2562) ((##vcore.car (bruijn ##.expr.571 9 2))) ((bruijn ##.equal?.243 14 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k274) 'continuation (bruijn ##.%x.2562 0 0))) ((bruijn ##.%k.1415 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k274, self)))),
      _V0continuation,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1411 0 0) (bruijn ##.%k.1409 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 13 14) (bruijn ##.%k.1412 0 0) (bruijn ##.fun.570 12 1) (bruijn ##.expr.571 12 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1410 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k279) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda57) (bruijn ##.kk.226.572 10 1)) ((bruijn ##.%k.1409 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k279, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda57, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2557 1 0) (basic-block 1 1 (##.%x.2561) ((##vcore.car (bruijn ##.expr.571 10 2))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k278) 'quote (bruijn ##.%x.2561 0 0))) ((bruijn ##.%k.1409 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k278, self)))),
      _V0quote,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1405 0 0) (bruijn ##.%k.1403 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 14 14) (bruijn ##.%k.1406 0 0) (bruijn ##.fun.570 13 1) (bruijn ##.expr.571 13 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1404 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k283) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda58) (bruijn ##.kk.226.572 11 1)) ((bruijn ##.%k.1403 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k283, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda58, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2558 1 0) (basic-block 1 1 (##.%x.2560) ((##vcore.car (bruijn ##.expr.571 11 2))) ((bruijn ##.equal?.243 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k282) '##inline (bruijn ##.%x.2560 0 0))) ((bruijn ##.%k.1403 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k282, self)))),
      _V10inline,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1400 0 0) (bruijn ##.%k.1399 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 13 15) (bruijn ##.%k.1401 0 0) (bruijn ##.fun.570 12 1) (bruijn ##.expr.571 12 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 15));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2559 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k286) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda59) (bruijn ##.kk.226.572 10 1)) ((bruijn ##.%k.1399 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k286, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda59, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 12 14) (bruijn ##.%k.1397 0 0) (bruijn ##.fun.570 11 1) (bruijn ##.expr.571 11 2) #f)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k287(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1396 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda60) (bruijn ##.kk.226.572 9 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda60, self)))),
      VGetArg(statics, 9-1, 1));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k284(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2559) ((##vcore.pair? (bruijn ##.expr.571 10 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k285) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k287)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k285, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k287, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k280(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2558) ((##vcore.pair? (bruijn ##.expr.571 9 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k281) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k284)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k281, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k284, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k276(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2557) ((##vcore.pair? (bruijn ##.expr.571 8 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k277) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k280)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k277, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k280, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k272(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2556) ((##vcore.pair? (bruijn ##.expr.571 7 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k273) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k276)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k273, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k276, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k268(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2555) ((##vcore.pair? (bruijn ##.expr.571 6 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k269) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k272)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k269, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k272, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k264(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2554) ((##vcore.pair? (bruijn ##.expr.571 5 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k265) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k268)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k265, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k268, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k260(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2553) ((##vcore.pair? (bruijn ##.expr.571 4 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k261) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k264)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k261, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k264, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k256(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2552) ((##vcore.pair? (bruijn ##.expr.571 3 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k257) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k260)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k257, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k260, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2551) ((##vcore.pair? (bruijn ##.expr.571 2 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k253) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k256)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k253, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k256, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.1395 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda50))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda50, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1467 0 0) (bruijn ##.%k.1465 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1468 0 0) (bruijn ##.d.583 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1466 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k290) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda62) (bruijn ##.kk.237.584 4 1)) ((bruijn ##.%k.1465 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k290, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda62, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2568 1 0) (basic-block 1 1 (##.%x.2579) ((##vcore.car (bruijn ##.d.583 4 1))) ((bruijn ##.equal?.243 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k289) '##foreign.declare (bruijn ##.%x.2579 0 0))) ((bruijn ##.%k.1465 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k289, self)))),
      _V10foreign_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1458 0 0) (bruijn ##.%k.1453 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.244 17 1) (bruijn ##.%k.1459 2 0) '##vcore.declare (bruijn ##.f.2573 4 0) (bruijn ##.%x.1460 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 4,
      statics->up->vars[0],
      _V10vcore_Ddeclare,
      statics->up->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.250 16 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k296) (bruijn ##.%x.1461 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k296, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.tofunctions-iter.317) #f (bruijn ##.tofunctions-iter.317 11 16) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k295) (bruijn ##.f.2573 2 0) (bruijn ##.l.2576 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 16));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k295, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1454 0 0) (basic-block 2 2 (##.expr.241.2571 ##.%p.2572) ((##vcore.cdr (bruijn ##.d.583 7 1)) (##vcore.pair? (bruijn ##.expr.241.2571 0 0))) (if (bruijn ##.%p.2572 0 1) (basic-block 3 3 (##.f.2573 ##.expr.242.2574 ##.%p.2575) ((##vcore.car (bruijn ##.expr.241.2571 1 0)) (##vcore.cdr (bruijn ##.expr.241.2571 1 0)) (##vcore.pair? (bruijn ##.expr.242.2574 0 1))) (if (bruijn ##.%p.2575 0 2) (basic-block 3 3 (##.l.2576 ##.%x.2577 ##.%p.2578) ((##vcore.car (bruijn ##.expr.242.2574 1 1)) (##vcore.cdr (bruijn ##.expr.242.2574 1 1)) (##vcore.null? (bruijn ##.%x.2577 0 1))) (if (bruijn ##.%p.2578 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k294) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda63) (bruijn ##.kk.237.584 8 1)) ((bruijn ##.%k.1453 5 0) #f))) ((bruijn ##.%k.1453 4 0) #f))) ((bruijn ##.%k.1453 3 0) #f))) ((bruijn ##.%k.1453 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k294, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda63, self)))),
      VGetArg(statics, 8-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2569 1 0) (basic-block 1 1 (##.%x.2570) ((##vcore.car (bruijn ##.d.583 5 1))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k293) '##vcore.declare (bruijn ##.%x.2570 0 0))) ((bruijn ##.%k.1453 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k293, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k297(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.258 8 15) (bruijn ##.%k.1451 2 0) (##string ##.string.2982))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 15)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2982.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k291(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2569) ((##vcore.pair? (bruijn ##.d.583 3 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k292) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k297)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k292, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k297, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2568) ((##vcore.pair? (bruijn ##.d.583 2 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k288) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k291)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k288, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k291, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.1450 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda61))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda61, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.1471 2 0) (bruijn ##.values.248 9 5) (bruijn ##.%x.1473 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->up->vars[0],
      VGetArg(statics, 9-1, 5),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k301(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.2584) ((##vcore.cdr (bruijn ##.l.597 7 2))) (##qualified-call (vanity compiler lower to-functions ##.multi-partition.319 ##.loop.595) #f (bruijn ##.loop.595 8 0) (bruijn ##.%k.1471 7 0) (bruijn ##.ret.596 7 1) (bruijn ##.%x.2584 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2583) ((##vcore.cons (bruijn ##.%x.2582 2 0) (bruijn ##.%x.1477 1 0))) ((bruijn ##.list-set!.247 13 4) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k301) (bruijn ##.ret.596 6 1) (bruijn ##.split.598 3 0) (bruijn ##.%x.2583 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 4)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k301, self)))),
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[0],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2582) ((##vcore.car (bruijn ##.l.597 4 2))) ((bruijn ##.list-ref.246 11 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k300) (bruijn ##.ret.596 4 1) (bruijn ##.split.598 1 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k300, self)))),
      statics->up->up->up->vars[1],
      statics->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2580) ((##vcore.null? (bruijn ##.l.597 1 2))) (if (bruijn ##.%p.2580 0 0) ((bruijn ##.map.245 8 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k298) (bruijn ##.reverse.252 8 9) (bruijn ##.ret.596 1 1)) (basic-block 1 1 (##.%x.2581) ((##vcore.car (bruijn ##.l.597 2 2))) ((bruijn ##.f.592 4 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k299) (bruijn ##.%x.2581 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k298, self)))),
      VGetArg(statics, 8-1, 9),
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k299, self)))),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.319 ##.loop.595) #f (bruijn ##.loop.595 1 0) (bruijn ##.%k.1470 2 0) (bruijn ##.%x.1479 0 0) (bruijn ##.l.594 2 3))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319, got ~D~N"
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595")) ((bruijn ##.make-list.249 6 6) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V0k302) (bruijn ##.n.593 1 2) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V0k302, self)))),
      statics->vars[2],
      VNULL);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1493 0 0) (bruijn ##.%k.1491 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1494 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1492 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k305) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67) (bruijn ##.kk.108.600 4 1)) ((bruijn ##.%k.1491 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k305, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2585 1 0) (basic-block 1 1 (##.%x.2588) ((##vcore.car (bruijn ##.e.599 4 1))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k304) '##foreign.declare (bruijn ##.%x.2588 0 0))) ((bruijn ##.%k.1491 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k304, self)))),
      _V10foreign_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1487 0 0) (bruijn ##.%k.1485 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1488 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1486 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k309) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68) (bruijn ##.kk.108.600 5 1)) ((bruijn ##.%k.1485 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k309, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2586 1 0) (basic-block 1 1 (##.%x.2587) ((##vcore.car (bruijn ##.e.599 5 1))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k308) '##vcore.declare (bruijn ##.%x.2587 0 0))) ((bruijn ##.%k.1485 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k308, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1483 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k310(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1482 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda69) (bruijn ##.kk.108.600 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda69, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k306(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2586) ((##vcore.pair? (bruijn ##.e.599 3 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k307) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k310)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k307, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k310, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2585) ((##vcore.pair? (bruijn ##.e.599 2 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k303) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k306)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k303, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k306, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.1481 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda66))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda66, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.319) #f (bruijn ##.multi-partition.319 1 18) (bruijn ##.%k.1480 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda65) 2 (bruijn ##.exprs.298 3 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[18]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda65, self))));
    VWORD _arg2 = 
      VEncodeInt(2l);
    VWORD _arg3 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.244 9 1) (bruijn ##.%k.1496 4 0) (bruijn ##.static-environments.309 5 8) (bruijn ##.literal-table.307 5 6) (bruijn ##.%x.1499 1 0) (bruijn ##.%x.1500 0 0) (bruijn ##.functions.306 5 5) (bruijn ##.qualified-functions.303 5 2) (bruijn ##.declares.1498 2 0) (bruijn ##.toplevels.1497 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 9,
      statics->up->up->up->vars[0],
      VGetArg(statics, 5-1, 8),
      VGetArg(statics, 5-1, 6),
      statics->vars[0],
      _var0,
      VGetArg(statics, 5-1, 5),
      VGetArg(statics, 5-1, 2),
      statics->up->vars[0],
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 8 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k314) (##intrinsic ##vcore.cdr) (bruijn ##.intrinsics.305 4 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k314, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 7 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k313) (##intrinsic ##vcore.cdr) (bruijn ##.foreign-functions.304 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k313, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 6 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k312) (bruijn ##.iter-declare.318 2 17) (bruijn ##.declares.605 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k312, self)))),
      statics->up->vars[17],
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.tofunctions-iter.317) #f (bruijn ##.tofunctions-iter.317 2 16) (bruijn ##.%k.1501 0 0) (##string ##.string.2984) (bruijn ##.e.608 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[16]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D2984.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda70, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.map.245 5 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k311) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda71) (bruijn ##.globals.604 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k311, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda71, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 19 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302") '() '() '() '() '() (bruijn ##.%x.843 1 0) '() (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318") (close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319")) (##vcore.call-with-values (bruijn ##.%k.836 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda64) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda70)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[19]; } container;
    self = &container.self;
    VInitEnv(self, 19, 19, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302, self))));
    self->vars[2] = VNULL;
    self->vars[3] = VNULL;
    self->vars[4] = VNULL;
    self->vars[5] = VNULL;
    self->vars[6] = VNULL;
    self->vars[7] = statics->vars[0];
    self->vars[8] = VNULL;
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlookup__literal_D310, self))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dregister__literal_B_D311, self))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312, self))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313, self))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314, self))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315, self))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316, self))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317, self))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318, self))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda64, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda70, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions, got ~D~N"
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
  // ((bruijn ##.make-hush-table.267 2 24) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k11))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[24]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k11, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.7.619 0 0) ((bruijn ##.list.244 7 1) (bruijn ##.%k.1503 3 0) 'bruijn (bruijn ##.x.618 3 3) (bruijn ##.depth.616 3 1) (bruijn ##.x.7.619 0 0)) (basic-block 2 2 (##.%x.2591 ##.%x.2592) ((##vcore.+ 1 (bruijn ##.depth.616 4 1)) (##vcore.cdr (bruijn ##.env.617 4 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.lookup.611) #f (bruijn ##.lookup.611 5 0) (bruijn ##.%k.1503 4 0) (bruijn ##.%x.2591 0 0) (bruijn ##.%x.2592 0 1) (bruijn ##.x.618 4 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 5,
      statics->up->up->vars[0],
      _V0bruijn,
      statics->up->up->vars[3],
      statics->up->up->vars[1],
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611_V0lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%r.2593) ((##vcore.eq? (bruijn ##.x.618 4 3) (bruijn ##.e.621 1 1))) ((bruijn ##.%k.1507 1 0) (bruijn ##.%r.2593 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->up->vars[3],
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611, got ~D~N"
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
  // (basic-block 1 1 (##.%p.2589) ((##vcore.null? (bruijn ##.env.617 1 2))) (if (bruijn ##.%p.2589 0 0) ((bruijn ##.%k.1503 1 0) (bruijn ##.x.618 1 3)) (basic-block 1 1 (##.%x.2590) ((##vcore.car (bruijn ##.env.617 2 2))) (##qualified-call (vanity compiler lower list-index) #t (bruijn ##.list-index.297 5 6) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611_V0k315) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611_V0lambda72) (bruijn ##.%x.2590 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611_V0k315, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611_V0lambda72, self))));
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index, _V60_V0vanity_V0compiler_V0lower)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0list__index(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2597) ((##vcore.cons (bruijn ##.%x.2595 2 0) (bruijn ##.%x.1512 1 0))) ((bruijn ##.%k.1509 4 0) (bruijn ##.%r.2597 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2594) ((##vcore.pair? (bruijn ##.lst.622 1 1))) (if (bruijn ##.%p.2594 0 0) (basic-block 2 2 (##.%x.2595 ##.%x.2596) ((##vcore.car (bruijn ##.lst.622 2 1)) (##vcore.cdr (bruijn ##.lst.622 2 1))) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 3 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612_V0k316) (bruijn ##.%x.2596 0 1))) (basic-block 1 1 (##.%p.2598) ((##vcore.null? (bruijn ##.lst.622 2 1))) (if (bruijn ##.%p.2598 0 0) ((bruijn ##.%k.1509 2 0) '()) (basic-block 1 1 (##.%r.2599) ((##vcore.cons (bruijn ##.lst.622 3 1) '())) ((bruijn ##.%k.1509 3 0) (bruijn ##.%r.2599 0 0)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612_V0k316, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[1],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1539 0 0) (bruijn ##.%k.1535 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2623 ##.%r.2624) ((##vcore.cons (bruijn ##.%x.1543 1 0) '()) (##vcore.cons (bruijn ##.%x.1541 5 0) (bruijn ##.%x.2623 0 0))) ((bruijn ##.%k.1540 6 0) (bruijn ##.%r.2624 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2622) ((##vcore.cons (bruijn ##.%x.1546 1 0) (bruijn ##.unmangled-env.624 13 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 14 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k321) (bruijn ##.%x.2621 2 0) (bruijn ##.%x.2622 0 0) (bruijn ##.body.2618 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 13-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k321, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2621) ((##vcore.cons (bruijn ##.xs.637 6 1) (bruijn ##.env.623 11 1))) (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 14 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k320) (bruijn ##.xs.637 6 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      VGetArg(statics, 11-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k320, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.272 13 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k319) (bruijn ##.xs.637 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 29)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k319, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2615) ((##vcore.null? (bruijn ##.tail-expr.636 1 0))) (if (bruijn ##.%p.2615 0 0) (basic-block 2 2 (##.expr.16.2616 ##.%p.2617) ((##vcore.cdr (bruijn ##.lamb.625 7 3)) (##vcore.pair? (bruijn ##.expr.16.2616 0 0))) (if (bruijn ##.%p.2617 0 1) (basic-block 3 3 (##.body.2618 ##.%x.2619 ##.%p.2620) ((##vcore.car (bruijn ##.expr.16.2616 1 0)) (##vcore.cdr (bruijn ##.expr.16.2616 1 0)) (##vcore.null? (bruijn ##.%x.2619 0 1))) (if (bruijn ##.%p.2620 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k318) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda75) (bruijn ##.kk.8.626 7 1)) ((bruijn ##.%k.1535 5 0) #f))) ((bruijn ##.%k.1535 4 0) #f))) ((bruijn ##.%k.1535 3 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 3));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k318, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda75, self)))),
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
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.13.630 5 1) (bruijn ##.%k.1556 1 0) (bruijn ##.expr.15.632 3 1) (bruijn ##.%x.1557 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2626 1 1) ((bruijn ##.reverse.252 13 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k323) (bruijn ##.xs.12.633 2 2)) ((bruijn ##.%k.1556 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k323, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.13.630 7 1) (bruijn ##.%k.1551 2 0) (bruijn ##.expr.15.632 5 1) (bruijn ##.%x.1552 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k325(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.252 15 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k326) (bruijn ##.xs.12.633 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k326, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs.2627 ##.%x.2628 ##.%x.2629) ((##vcore.car (bruijn ##.expr.15.632 4 1)) (##vcore.cdr (bruijn ##.expr.15.632 4 1)) (##vcore.cons (bruijn ##.xs.2627 0 0) (bruijn ##.xs.12.633 4 2))) ((bruijn ##.kk.14.634 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k325) (bruijn ##.%x.2628 0 1) (bruijn ##.%x.2629 0 2)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k325, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1550 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0lambda78))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0lambda78, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k324(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1549 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0lambda77) (bruijn ##.loop.631 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0lambda77, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.2625 ##.%p.2626) ((##vcore.pair? (bruijn ##.expr.15.632 1 1)) (##vcore.not (bruijn ##.%x.2625 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k322) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k324)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k322, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k324, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.613 ##.loop.631) #f (bruijn ##.loop.631 0 0) (bruijn ##.%k.1548 1 0) (bruijn ##.expr.11.2614 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2600 1 0) (basic-block 1 1 (##.expr.11.2614) ((##vcore.car (bruijn ##.lamb.625 4 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda74) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda76))) ((bruijn ##.%k.1535 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[3]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda74, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda76, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1522 0 0) (bruijn ##.%k.1519 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2611 ##.%x.2612 ##.%r.2613) ((##vcore.cons (bruijn ##.%x.1527 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2611 0 0)) (##vcore.cons (bruijn ##.%x.2608 5 0) (bruijn ##.%x.2612 0 1))) ((bruijn ##.%k.1523 8 0) (bruijn ##.%r.2613 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0_P,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2610) ((##vcore.cons (bruijn ##.%x.1530 1 0) (bruijn ##.unmangled-env.624 13 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 14 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k334) (bruijn ##.%x.2609 3 1) (bruijn ##.%x.2610 0 0) (bruijn ##.body.2605 7 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 13-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k334, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 12 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k333) (bruijn ##.%x.1531 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k333, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2608 ##.%x.2609) ((##vcore.- (bruijn ##.%x.1532 1 0) 1) (##vcore.cons (bruijn ##.proper-xs.644 2 0) (bruijn ##.env.623 10 1))) (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 13 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k332) (bruijn ##.xs.2602 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 10-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k332, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.272 12 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k331) (bruijn ##.proper-xs.644 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 29)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k331, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 8 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k330) (bruijn ##.xs.2602 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k330, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2601 1 0) (basic-block 3 3 (##.xs.2602 ##.expr.18.2603 ##.%p.2604) ((##vcore.car (bruijn ##.lamb.625 5 3)) (##vcore.cdr (bruijn ##.lamb.625 5 3)) (##vcore.pair? (bruijn ##.expr.18.2603 0 1))) (if (bruijn ##.%p.2604 0 2) (basic-block 3 3 (##.body.2605 ##.%x.2606 ##.%p.2607) ((##vcore.car (bruijn ##.expr.18.2603 1 1)) (##vcore.cdr (bruijn ##.expr.18.2603 1 1)) (##vcore.null? (bruijn ##.%x.2606 0 1))) (if (bruijn ##.%p.2607 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k329) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda79) (bruijn ##.kk.8.626 5 1)) ((bruijn ##.%k.1519 2 0) #f))) ((bruijn ##.%k.1519 1 0) #f))) ((bruijn ##.%k.1519 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k329, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda79, self)))),
      VGetArg(statics, 5-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.259 8 16) (bruijn ##.%k.1517 0 0) (##string ##.string.2985) (bruijn ##.lamb.625 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 16)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2985.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k335(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1516 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda80) (bruijn ##.kk.8.626 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda80, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k327(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2601) ((##vcore.pair? (bruijn ##.lamb.625 3 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k328) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k335)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k328, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k335, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2600) ((##vcore.pair? (bruijn ##.lamb.625 2 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k317) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k327)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k317, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k327, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.%k.1515 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda73))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda73, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1935 0 0) (bruijn ##.%k.1929 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.debug?.610 17 2) (basic-block 4 4 (##.%x.2938 ##.%x.2939 ##.%x.2940 ##.%r.2941) ((##vcore.cons (bruijn ##.unmangled-formals.663 2 0) '()) (##vcore.cons '#f (bruijn ##.%x.2938 0 0)) (##vcore.cons (bruijn ##.unmangled-env.646 16 2) '()) (##vcore.cons (bruijn ##.%x.2939 0 1) (bruijn ##.%x.2940 0 2))) ((bruijn ##.%k.1946 1 0) (bruijn ##.%r.2941 0 3))) ((bruijn ##.%k.1946 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 17-1, 2))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 16-1, 2),
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[3]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2934 ##.%x.2935 ##.%x.2936 ##.%r.2937) ((##vcore.cons (bruijn ##.%x.1943 1 0) '()) (##vcore.cons (bruijn ##.%x.1941 3 0) (bruijn ##.%x.2934 0 0)) (##vcore.cons (bruijn ##.%x.1939 4 0) (bruijn ##.%x.2935 0 1)) (##vcore.cons 'lambda (bruijn ##.%x.2936 0 2))) ((bruijn ##.%k.1936 7 0) (bruijn ##.%r.2937 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2932 ##.%x.2933) ((##vcore.cons (bruijn ##.xs.660 9 1) (bruijn ##.env.645 17 1)) (##vcore.cons (bruijn ##.unmangled-formals.663 3 0) (bruijn ##.unmangled-env.646 17 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 18 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k343) (bruijn ##.%x.2932 0 0) (bruijn ##.%x.2933 0 1) (bruijn ##.body.2929 6 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 17-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 17-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k343, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.272 19 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k342) (bruijn ##.xs.660 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 29)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k342, self)))),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1937 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k340) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k341)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k340, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k341, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 15 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k339) (bruijn ##.xs.660 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k339, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2926) ((##vcore.null? (bruijn ##.tail-expr.659 1 0))) (if (bruijn ##.%p.2926 0 0) (basic-block 2 2 (##.expr.28.2927 ##.%p.2928) ((##vcore.cdr (bruijn ##.expr.22.2923 4 0)) (##vcore.pair? (bruijn ##.expr.28.2927 0 0))) (if (bruijn ##.%p.2928 0 1) (basic-block 3 3 (##.body.2929 ##.%x.2930 ##.%p.2931) ((##vcore.car (bruijn ##.expr.28.2927 1 0)) (##vcore.cdr (bruijn ##.expr.28.2927 1 0)) (##vcore.null? (bruijn ##.%x.2930 0 1))) (if (bruijn ##.%p.2931 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k338) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda83) (bruijn ##.kk.19.648 10 1)) ((bruijn ##.%k.1929 8 0) #f))) ((bruijn ##.%k.1929 7 0) #f))) ((bruijn ##.%k.1929 6 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k338, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda83, self)))),
      VGetArg(statics, 10-1, 1));
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
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.25.653 5 1) (bruijn ##.%k.1959 1 0) (bruijn ##.expr.27.655 3 1) (bruijn ##.%x.1960 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2943 1 1) ((bruijn ##.reverse.252 16 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k345) (bruijn ##.xs.24.656 2 2)) ((bruijn ##.%k.1959 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k345, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.25.653 7 1) (bruijn ##.%k.1954 2 0) (bruijn ##.expr.27.655 5 1) (bruijn ##.%x.1955 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k347(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.252 18 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k348) (bruijn ##.xs.24.656 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k348, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs.2944 ##.%x.2945 ##.%x.2946) ((##vcore.car (bruijn ##.expr.27.655 4 1)) (##vcore.cdr (bruijn ##.expr.27.655 4 1)) (##vcore.cons (bruijn ##.xs.2944 0 0) (bruijn ##.xs.24.656 4 2))) ((bruijn ##.kk.26.657 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k347) (bruijn ##.%x.2945 0 1) (bruijn ##.%x.2946 0 2)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k347, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1953 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0lambda86))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0lambda86, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k346(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1952 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0lambda85) (bruijn ##.loop.654 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0lambda85, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.2942 ##.%p.2943) ((##vcore.pair? (bruijn ##.expr.27.655 1 1)) (##vcore.not (bruijn ##.%x.2942 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k344) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k346)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k344, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k346, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.654) #f (bruijn ##.loop.654 0 0) (bruijn ##.%k.1951 1 0) (bruijn ##.expr.23.2925 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1930 0 0) (basic-block 2 2 (##.expr.22.2923 ##.%p.2924) ((##vcore.cdr (bruijn ##.expr.647 6 3)) (##vcore.pair? (bruijn ##.expr.22.2923 0 0))) (if (bruijn ##.%p.2924 0 1) (basic-block 1 1 (##.expr.23.2925) ((##vcore.car (bruijn ##.expr.22.2923 1 0))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda82) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda84))) ((bruijn ##.%k.1929 3 0) #f))) ((bruijn ##.%k.1929 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda82, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda84, self)))));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2630 1 0) (basic-block 1 1 (##.%x.2922) ((##vcore.car (bruijn ##.expr.647 4 3))) ((bruijn ##.equal?.243 8 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k337) 'lambda (bruijn ##.%x.2922 0 0))) ((bruijn ##.%k.1929 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k337, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1908 0 0) (bruijn ##.%k.1903 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.debug?.610 16 2) (basic-block 4 4 (##.%x.2918 ##.%x.2919 ##.%x.2920 ##.%r.2921) ((##vcore.cons (bruijn ##.unmangled-formals.669 3 0) '()) (##vcore.cons '#f (bruijn ##.%x.2918 0 0)) (##vcore.cons (bruijn ##.unmangled-env.646 15 2) '()) (##vcore.cons (bruijn ##.%x.2919 0 1) (bruijn ##.%x.2920 0 2))) ((bruijn ##.%k.1922 1 0) (bruijn ##.%r.2921 0 3))) ((bruijn ##.%k.1922 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 16-1, 2))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 15-1, 2),
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[3]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.2913 ##.%x.2914 ##.%x.2915 ##.%x.2916 ##.%r.2917) ((##vcore.cons (bruijn ##.%x.1917 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2913 0 0)) (##vcore.cons (bruijn ##.%x.2910 4 0) (bruijn ##.%x.2914 0 1)) (##vcore.cons (bruijn ##.%x.1912 6 0) (bruijn ##.%x.2915 0 2)) (##vcore.cons 'lambda (bruijn ##.%x.2916 0 3))) ((bruijn ##.%k.1909 10 0) (bruijn ##.%r.2917 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0_P,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0lambda,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[4]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2912) ((##vcore.cons (bruijn ##.%x.1920 1 0) (bruijn ##.unmangled-env.646 18 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 19 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k359) (bruijn ##.%x.2911 2 1) (bruijn ##.%x.2912 0 0) (bruijn ##.body.2907 9 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 18-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k359, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2910 ##.%x.2911) ((##vcore.- (bruijn ##.%x.1921 1 0) 1) (##vcore.cons (bruijn ##.proper-xs.670 3 0) (bruijn ##.env.645 16 1))) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 17 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k358) (bruijn ##.unmangled-formals.669 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 16-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k358, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.272 18 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k357) (bruijn ##.proper-xs.670 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 29)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k357, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k355) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k356))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k355, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k356, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1910 1 0)) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 13 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k354) (bruijn ##.xs.2904 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k354, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 13 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k353) (bruijn ##.xs.2904 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k353, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1904 0 0) (basic-block 2 2 (##.expr.30.2902 ##.%p.2903) ((##vcore.cdr (bruijn ##.expr.647 7 3)) (##vcore.pair? (bruijn ##.expr.30.2902 0 0))) (if (bruijn ##.%p.2903 0 1) (basic-block 3 3 (##.xs.2904 ##.expr.31.2905 ##.%p.2906) ((##vcore.car (bruijn ##.expr.30.2902 1 0)) (##vcore.cdr (bruijn ##.expr.30.2902 1 0)) (##vcore.pair? (bruijn ##.expr.31.2905 0 1))) (if (bruijn ##.%p.2906 0 2) (basic-block 3 3 (##.body.2907 ##.%x.2908 ##.%p.2909) ((##vcore.car (bruijn ##.expr.31.2905 1 1)) (##vcore.cdr (bruijn ##.expr.31.2905 1 1)) (##vcore.null? (bruijn ##.%x.2908 0 1))) (if (bruijn ##.%p.2909 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k352) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda87) (bruijn ##.kk.19.648 8 1)) ((bruijn ##.%k.1903 5 0) #f))) ((bruijn ##.%k.1903 4 0) #f))) ((bruijn ##.%k.1903 3 0) #f))) ((bruijn ##.%k.1903 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 3));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k352, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda87, self)))),
      VGetArg(statics, 8-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2631 1 0) (basic-block 1 1 (##.%x.2901) ((##vcore.car (bruijn ##.expr.647 5 3))) ((bruijn ##.equal?.243 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k351) 'lambda (bruijn ##.%x.2901 0 0))) ((bruijn ##.%k.1903 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k351, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1872 0 0) (bruijn ##.%k.1864 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.debug?.610 21 2) (basic-block 4 4 (##.%x.2892 ##.%x.2893 ##.%x.2894 ##.%r.2895) ((##vcore.cons (bruijn ##.unmangled-formals.688 2 0) '()) (##vcore.cons (bruijn ##.name.2871 11 0) (bruijn ##.%x.2892 0 0)) (##vcore.cons (bruijn ##.unmangled-env.646 20 2) '()) (##vcore.cons (bruijn ##.%x.2893 0 1) (bruijn ##.%x.2894 0 2))) ((bruijn ##.%k.1885 1 0) (bruijn ##.%r.2895 0 3))) ((bruijn ##.%k.1885 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 21-1, 2))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 20-1, 2),
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[3]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.2886 ##.%x.2887 ##.%x.2888 ##.%x.2889 ##.%x.2890 ##.%r.2891) ((##vcore.cons (bruijn ##.%x.1882 1 0) '()) (##vcore.cons (bruijn ##.%x.1880 3 0) (bruijn ##.%x.2886 0 0)) (##vcore.cons (bruijn ##.%x.1878 4 0) (bruijn ##.%x.2887 0 1)) (##vcore.cons (bruijn ##.static?.2874 13 0) (bruijn ##.%x.2888 0 2)) (##vcore.cons (bruijn ##.name.2871 14 0) (bruijn ##.%x.2889 0 3)) (##vcore.cons '##qualified-lambda (bruijn ##.%x.2890 0 4))) ((bruijn ##.%k.1873 7 0) (bruijn ##.%r.2891 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__lambda,
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2884 ##.%x.2885) ((##vcore.cons (bruijn ##.xs.685 9 1) (bruijn ##.env.645 21 1)) (##vcore.cons (bruijn ##.unmangled-formals.688 3 0) (bruijn ##.unmangled-env.646 21 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 22 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k368) (bruijn ##.%x.2884 0 0) (bruijn ##.%x.2885 0 1) (bruijn ##.body.2881 6 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 21-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 21-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k368, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.272 23 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k367) (bruijn ##.xs.685 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 29)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k367, self)))),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1874 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k365) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k366)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k365, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k366, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 19 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k364) (bruijn ##.xs.685 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k364, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2878) ((##vcore.null? (bruijn ##.tail-expr.684 1 0))) (if (bruijn ##.%p.2878 0 0) (basic-block 2 2 (##.expr.41.2879 ##.%p.2880) ((##vcore.cdr (bruijn ##.expr.35.2875 4 1)) (##vcore.pair? (bruijn ##.expr.41.2879 0 0))) (if (bruijn ##.%p.2880 0 1) (basic-block 3 3 (##.body.2881 ##.%x.2882 ##.%p.2883) ((##vcore.car (bruijn ##.expr.41.2879 1 0)) (##vcore.cdr (bruijn ##.expr.41.2879 1 0)) (##vcore.null? (bruijn ##.%x.2882 0 1))) (if (bruijn ##.%p.2883 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k363) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda89) (bruijn ##.kk.19.648 14 1)) ((bruijn ##.%k.1864 10 0) #f))) ((bruijn ##.%k.1864 9 0) #f))) ((bruijn ##.%k.1864 8 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k363, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda89, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.38.678 5 1) (bruijn ##.%k.1898 1 0) (bruijn ##.expr.40.680 3 1) (bruijn ##.%x.1899 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2897 1 1) ((bruijn ##.reverse.252 20 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k370) (bruijn ##.xs.37.681 2 2)) ((bruijn ##.%k.1898 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k370, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.38.678 7 1) (bruijn ##.%k.1893 2 0) (bruijn ##.expr.40.680 5 1) (bruijn ##.%x.1894 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k372(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.252 22 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k373) (bruijn ##.xs.37.681 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k373, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs.2898 ##.%x.2899 ##.%x.2900) ((##vcore.car (bruijn ##.expr.40.680 4 1)) (##vcore.cdr (bruijn ##.expr.40.680 4 1)) (##vcore.cons (bruijn ##.xs.2898 0 0) (bruijn ##.xs.37.681 4 2))) ((bruijn ##.kk.39.682 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k372) (bruijn ##.%x.2899 0 1) (bruijn ##.%x.2900 0 2)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k372, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0lambda91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1892 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0lambda92))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0lambda92, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k371(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1891 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0lambda91) (bruijn ##.loop.679 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0lambda91, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.2896 ##.%p.2897) ((##vcore.pair? (bruijn ##.expr.40.680 1 1)) (##vcore.not (bruijn ##.%x.2896 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k369) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k371)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k369, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k371, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.679) #f (bruijn ##.loop.679 0 0) (bruijn ##.%k.1890 1 0) (bruijn ##.expr.36.2877 2 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1865 0 0) (basic-block 2 2 (##.expr.33.2869 ##.%p.2870) ((##vcore.cdr (bruijn ##.expr.647 8 3)) (##vcore.pair? (bruijn ##.expr.33.2869 0 0))) (if (bruijn ##.%p.2870 0 1) (basic-block 3 3 (##.name.2871 ##.expr.34.2872 ##.%p.2873) ((##vcore.car (bruijn ##.expr.33.2869 1 0)) (##vcore.cdr (bruijn ##.expr.33.2869 1 0)) (##vcore.pair? (bruijn ##.expr.34.2872 0 1))) (if (bruijn ##.%p.2873 0 2) (basic-block 3 3 (##.static?.2874 ##.expr.35.2875 ##.%p.2876) ((##vcore.car (bruijn ##.expr.34.2872 1 1)) (##vcore.cdr (bruijn ##.expr.34.2872 1 1)) (##vcore.pair? (bruijn ##.expr.35.2875 0 1))) (if (bruijn ##.%p.2876 0 2) (basic-block 1 1 (##.expr.36.2877) ((##vcore.car (bruijn ##.expr.35.2875 1 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda88) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda90))) ((bruijn ##.%k.1864 5 0) #f))) ((bruijn ##.%k.1864 4 0) #f))) ((bruijn ##.%k.1864 3 0) #f))) ((bruijn ##.%k.1864 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda88, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda90, self)))));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2632 1 0) (basic-block 1 1 (##.%x.2868) ((##vcore.car (bruijn ##.expr.647 6 3))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k362) '##qualified-lambda (bruijn ##.%x.2868 0 0))) ((bruijn ##.%k.1864 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k362, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1841 0 0) (bruijn ##.%k.1834 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.debug?.610 20 2) (basic-block 4 4 (##.%x.2864 ##.%x.2865 ##.%x.2866 ##.%r.2867) ((##vcore.cons (bruijn ##.unmangled-formals.698 3 0) '()) (##vcore.cons (bruijn ##.name.2842 9 0) (bruijn ##.%x.2864 0 0)) (##vcore.cons (bruijn ##.unmangled-env.646 19 2) '()) (##vcore.cons (bruijn ##.%x.2865 0 1) (bruijn ##.%x.2866 0 2))) ((bruijn ##.%k.1857 1 0) (bruijn ##.%r.2867 0 3))) ((bruijn ##.%k.1857 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 20-1, 2))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 19-1, 2),
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[3]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.2857 ##.%x.2858 ##.%x.2859 ##.%x.2860 ##.%x.2861 ##.%x.2862 ##.%r.2863) ((##vcore.cons (bruijn ##.%x.1852 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2857 0 0)) (##vcore.cons (bruijn ##.%x.2854 4 0) (bruijn ##.%x.2858 0 1)) (##vcore.cons (bruijn ##.%x.1847 6 0) (bruijn ##.%x.2859 0 2)) (##vcore.cons (bruijn ##.static?.2845 13 0) (bruijn ##.%x.2860 0 3)) (##vcore.cons (bruijn ##.name.2842 14 0) (bruijn ##.%x.2861 0 4)) (##vcore.cons '##qualified-lambda (bruijn ##.%x.2862 0 5))) ((bruijn ##.%k.1842 10 0) (bruijn ##.%r.2863 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0_P,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 0),
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__lambda,
      self->vars[5]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[6]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2856) ((##vcore.cons (bruijn ##.%x.1855 1 0) (bruijn ##.unmangled-env.646 22 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 23 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k384) (bruijn ##.%x.2855 2 1) (bruijn ##.%x.2856 0 0) (bruijn ##.body.2851 9 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 22-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k384, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2854 ##.%x.2855) ((##vcore.- (bruijn ##.%x.1856 1 0) 1) (##vcore.cons (bruijn ##.proper-xs.699 3 0) (bruijn ##.env.645 20 1))) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 21 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k383) (bruijn ##.unmangled-formals.698 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 20-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k383, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.272 22 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k382) (bruijn ##.proper-xs.699 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 29)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k382, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k380) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k381))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k380, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k381, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1843 1 0)) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 17 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k379) (bruijn ##.xs.2848 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k379, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 17 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k378) (bruijn ##.xs.2848 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k378, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1835 0 0) (basic-block 2 2 (##.expr.43.2840 ##.%p.2841) ((##vcore.cdr (bruijn ##.expr.647 9 3)) (##vcore.pair? (bruijn ##.expr.43.2840 0 0))) (if (bruijn ##.%p.2841 0 1) (basic-block 3 3 (##.name.2842 ##.expr.44.2843 ##.%p.2844) ((##vcore.car (bruijn ##.expr.43.2840 1 0)) (##vcore.cdr (bruijn ##.expr.43.2840 1 0)) (##vcore.pair? (bruijn ##.expr.44.2843 0 1))) (if (bruijn ##.%p.2844 0 2) (basic-block 3 3 (##.static?.2845 ##.expr.45.2846 ##.%p.2847) ((##vcore.car (bruijn ##.expr.44.2843 1 1)) (##vcore.cdr (bruijn ##.expr.44.2843 1 1)) (##vcore.pair? (bruijn ##.expr.45.2846 0 1))) (if (bruijn ##.%p.2847 0 2) (basic-block 3 3 (##.xs.2848 ##.expr.46.2849 ##.%p.2850) ((##vcore.car (bruijn ##.expr.45.2846 1 1)) (##vcore.cdr (bruijn ##.expr.45.2846 1 1)) (##vcore.pair? (bruijn ##.expr.46.2849 0 1))) (if (bruijn ##.%p.2850 0 2) (basic-block 3 3 (##.body.2851 ##.%x.2852 ##.%p.2853) ((##vcore.car (bruijn ##.expr.46.2849 1 1)) (##vcore.cdr (bruijn ##.expr.46.2849 1 1)) (##vcore.null? (bruijn ##.%x.2852 0 1))) (if (bruijn ##.%p.2853 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k377) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda93) (bruijn ##.kk.19.648 12 1)) ((bruijn ##.%k.1834 7 0) #f))) ((bruijn ##.%k.1834 6 0) #f))) ((bruijn ##.%k.1834 5 0) #f))) ((bruijn ##.%k.1834 4 0) #f))) ((bruijn ##.%k.1834 3 0) #f))) ((bruijn ##.%k.1834 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 3));
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k377, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda93, self)))),
      VGetArg(statics, 12-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2633 1 0) (basic-block 1 1 (##.%x.2839) ((##vcore.car (bruijn ##.expr.647 7 3))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k376) '##qualified-lambda (bruijn ##.%x.2839 0 0))) ((bruijn ##.%k.1834 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k376, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1820 0 0) (bruijn ##.%k.1818 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2835 ##.%x.2836 ##.%r.2837) ((##vcore.cons '#f (bruijn ##.%x.1829 1 0)) (##vcore.cons (bruijn ##.unmangled-env.646 14 2) '()) (##vcore.cons (bruijn ##.%x.2835 0 0) (bruijn ##.%x.2836 0 1))) ((bruijn ##.%k.1826 2 0) (bruijn ##.%r.2837 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 2),
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.2838) ((##vcore.car (bruijn ##.e.702 1 1))) (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 17 4) (bruijn ##.%k.1830 1 0) (bruijn ##.%x.2838 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.debug?.610 14 2) ((bruijn ##.map.245 16 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k390) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda95) (bruijn ##.cases.2832 2 0)) ((bruijn ##.%k.1826 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 14-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k390, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda95, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2833 ##.%r.2834) ((##vcore.cons (bruijn ##.%x.1823 2 0) (bruijn ##.%x.1824 1 0)) (##vcore.cons 'case-lambda (bruijn ##.%x.2833 0 0))) ((bruijn ##.%k.1821 3 0) (bruijn ##.%r.2834 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.613) #f (bruijn ##.bruijn-lambda.613 14 2) (bruijn ##.%k.1825 0 0) (bruijn ##.env.645 13 1) (bruijn ##.unmangled-env.646 13 2) (bruijn ##.e.703 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 16 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k392) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda96) (bruijn ##.cases.2832 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k392, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda96, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k389) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k391))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k389, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k391, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1819 0 0) (basic-block 1 1 (##.cases.2832) ((##vcore.cdr (bruijn ##.expr.647 10 3))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k388) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda94) (bruijn ##.kk.19.648 9 1))) ((bruijn ##.%k.1818 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k388, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda94, self)))),
      VGetArg(statics, 9-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2634 1 0) (basic-block 1 1 (##.%x.2831) ((##vcore.car (bruijn ##.expr.647 8 3))) ((bruijn ##.equal?.243 12 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k387) 'case-lambda (bruijn ##.%x.2831 0 0))) ((bruijn ##.%k.1818 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k387, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1802 0 0) (bruijn ##.%k.1798 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2827 ##.%x.2828 ##.%r.2829) ((##vcore.cons (bruijn ##.name.2818 5 0) (bruijn ##.%x.1813 1 0)) (##vcore.cons (bruijn ##.unmangled-env.646 17 2) '()) (##vcore.cons (bruijn ##.%x.2827 0 0) (bruijn ##.%x.2828 0 1))) ((bruijn ##.%k.1810 2 0) (bruijn ##.%r.2829 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 17-1, 2),
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.2830) ((##vcore.car (bruijn ##.e.710 1 1))) (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 20 4) (bruijn ##.%k.1814 1 0) (bruijn ##.%x.2830 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.debug?.610 17 2) ((bruijn ##.map.245 19 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k398) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda98) (bruijn ##.cases.2822 2 1)) ((bruijn ##.%k.1810 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 17-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k398, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda98, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2823 ##.%x.2824 ##.%x.2825 ##.%r.2826) ((##vcore.cons (bruijn ##.%x.1807 2 0) (bruijn ##.%x.1808 1 0)) (##vcore.cons (bruijn ##.static?.2821 4 0) (bruijn ##.%x.2823 0 0)) (##vcore.cons (bruijn ##.name.2818 5 0) (bruijn ##.%x.2824 0 1)) (##vcore.cons '##qualified-case-lambda (bruijn ##.%x.2825 0 2))) ((bruijn ##.%k.1803 3 0) (bruijn ##.%r.2826 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__case__lambda,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.613) #f (bruijn ##.bruijn-lambda.613 17 2) (bruijn ##.%k.1809 0 0) (bruijn ##.env.645 16 1) (bruijn ##.unmangled-env.646 16 2) (bruijn ##.e.711 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 2));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 2);
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 19 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k400) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda99) (bruijn ##.cases.2822 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k400, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda99, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k397) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k399))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k397, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k399, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1799 0 0) (basic-block 2 2 (##.expr.49.2816 ##.%p.2817) ((##vcore.cdr (bruijn ##.expr.647 11 3)) (##vcore.pair? (bruijn ##.expr.49.2816 0 0))) (if (bruijn ##.%p.2817 0 1) (basic-block 3 3 (##.name.2818 ##.expr.50.2819 ##.%p.2820) ((##vcore.car (bruijn ##.expr.49.2816 1 0)) (##vcore.cdr (bruijn ##.expr.49.2816 1 0)) (##vcore.pair? (bruijn ##.expr.50.2819 0 1))) (if (bruijn ##.%p.2820 0 2) (basic-block 2 2 (##.static?.2821 ##.cases.2822) ((##vcore.car (bruijn ##.expr.50.2819 1 1)) (##vcore.cdr (bruijn ##.expr.50.2819 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k396) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda97) (bruijn ##.kk.19.648 12 1))) ((bruijn ##.%k.1798 4 0) #f))) ((bruijn ##.%k.1798 3 0) #f))) ((bruijn ##.%k.1798 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 3));
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k396, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda97, self)))),
      VGetArg(statics, 12-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2635 1 0) (basic-block 1 1 (##.%x.2815) ((##vcore.car (bruijn ##.expr.647 9 3))) ((bruijn ##.equal?.243 13 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k395) '##qualified-case-lambda (bruijn ##.%x.2815 0 0))) ((bruijn ##.%k.1798 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k395, self)))),
      _V10qualified__case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1778 0 0) (bruijn ##.%k.1771 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.debug?.610 23 2) (basic-block 4 4 (##.%x.2811 ##.%x.2812 ##.%x.2813 ##.%r.2814) ((##vcore.cons (bruijn ##.unmangled-formals.718 2 0) '()) (##vcore.cons '#f (bruijn ##.%x.2811 0 0)) (##vcore.cons (bruijn ##.unmangled-env.646 22 2) '()) (##vcore.cons (bruijn ##.%x.2812 0 1) (bruijn ##.%x.2813 0 2))) ((bruijn ##.%k.1789 1 0) (bruijn ##.%r.2814 0 3))) ((bruijn ##.%k.1789 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 23-1, 2))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 22-1, 2),
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[3]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2807 ##.%x.2808 ##.%x.2809 ##.%r.2810) ((##vcore.cons (bruijn ##.%x.1785 1 0) '()) (##vcore.cons '1 (bruijn ##.%x.2807 0 0)) (##vcore.cons (bruijn ##.%x.1782 4 0) (bruijn ##.%x.2808 0 1)) (##vcore.cons 'continuation (bruijn ##.%x.2809 0 2))) ((bruijn ##.%k.1779 8 0) (bruijn ##.%r.2810 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(1l),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0continuation,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2805 ##.%x.2806) ((##vcore.cons (bruijn ##.%x.1788 1 0) (bruijn ##.env.645 23 1)) (##vcore.cons (bruijn ##.unmangled-formals.718 3 0) (bruijn ##.unmangled-env.646 23 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 24 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k410) (bruijn ##.%x.2805 0 0) (bruijn ##.%x.2806 0 1) (bruijn ##.body.2802 7 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 23-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 23-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k410, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.244 25 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k409) (bruijn ##.x.2797 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k409, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1780 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k407) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k408)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k407, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k408, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.244 22 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k406) (bruijn ##.%x.1793 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k406, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.ungensym.269 21 26) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k405) (bruijn ##.x.2797 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 26)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k405, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1772 0 0) (basic-block 2 2 (##.expr.52.2793 ##.%p.2794) ((##vcore.cdr (bruijn ##.expr.647 12 3)) (##vcore.pair? (bruijn ##.expr.52.2793 0 0))) (if (bruijn ##.%p.2794 0 1) (basic-block 2 2 (##.expr.53.2795 ##.%p.2796) ((##vcore.car (bruijn ##.expr.52.2793 1 0)) (##vcore.pair? (bruijn ##.expr.53.2795 0 0))) (if (bruijn ##.%p.2796 0 1) (basic-block 3 3 (##.x.2797 ##.%x.2798 ##.%p.2799) ((##vcore.car (bruijn ##.expr.53.2795 1 0)) (##vcore.cdr (bruijn ##.expr.53.2795 1 0)) (##vcore.null? (bruijn ##.%x.2798 0 1))) (if (bruijn ##.%p.2799 0 2) (basic-block 2 2 (##.expr.54.2800 ##.%p.2801) ((##vcore.cdr (bruijn ##.expr.52.2793 3 0)) (##vcore.pair? (bruijn ##.expr.54.2800 0 0))) (if (bruijn ##.%p.2801 0 1) (basic-block 3 3 (##.body.2802 ##.%x.2803 ##.%p.2804) ((##vcore.car (bruijn ##.expr.54.2800 1 0)) (##vcore.cdr (bruijn ##.expr.54.2800 1 0)) (##vcore.null? (bruijn ##.%x.2803 0 1))) (if (bruijn ##.%p.2804 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k404) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda100) (bruijn ##.kk.19.648 15 1)) ((bruijn ##.%k.1771 7 0) #f))) ((bruijn ##.%k.1771 6 0) #f))) ((bruijn ##.%k.1771 5 0) #f))) ((bruijn ##.%k.1771 4 0) #f))) ((bruijn ##.%k.1771 3 0) #f))) ((bruijn ##.%k.1771 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 3));
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k404, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda100, self)))),
      VGetArg(statics, 15-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2636 1 0) (basic-block 1 1 (##.%x.2792) ((##vcore.car (bruijn ##.expr.647 10 3))) ((bruijn ##.equal?.243 14 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k403) 'continuation (bruijn ##.%x.2792 0 0))) ((bruijn ##.%k.1771 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k403, self)))),
      _V0continuation,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1760 0 0) (bruijn ##.%k.1756 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.debug?.610 18 2) ((bruijn ##.%k.1767 0 0) '(##pair ##.pair.2991)) ((bruijn ##.%k.1767 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 18-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2991, VPOINTER_PAIR));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2788 ##.%x.2789 ##.%x.2790 ##.%r.2791) ((##vcore.cons (bruijn ##.%x.1766 1 0) '()) (##vcore.cons '#f (bruijn ##.%x.2788 0 0)) (##vcore.cons (bruijn ##.%x.1763 2 0) (bruijn ##.%x.2789 0 1)) (##vcore.cons 'continuation (bruijn ##.%x.2790 0 2))) ((bruijn ##.%k.1761 3 0) (bruijn ##.%r.2791 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0continuation,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 17 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k417) (bruijn ##.env.645 16 1) (bruijn ##.unmangled-env.646 16 2) (bruijn ##.body.2785 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k417, self))));
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 2);
    VWORD _arg3 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k415) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k416))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k415, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k416, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1757 0 0) (basic-block 2 2 (##.expr.56.2783 ##.%p.2784) ((##vcore.cdr (bruijn ##.expr.647 13 3)) (##vcore.pair? (bruijn ##.expr.56.2783 0 0))) (if (bruijn ##.%p.2784 0 1) (basic-block 3 3 (##.body.2785 ##.%x.2786 ##.%p.2787) ((##vcore.car (bruijn ##.expr.56.2783 1 0)) (##vcore.cdr (bruijn ##.expr.56.2783 1 0)) (##vcore.null? (bruijn ##.%x.2786 0 1))) (if (bruijn ##.%p.2787 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k414) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda101) (bruijn ##.kk.19.648 13 1)) ((bruijn ##.%k.1756 4 0) #f))) ((bruijn ##.%k.1756 3 0) #f))) ((bruijn ##.%k.1756 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 3));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k414, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda101, self)))),
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2637 1 0) (basic-block 1 1 (##.%x.2782) ((##vcore.car (bruijn ##.expr.647 11 3))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k413) 'continuation (bruijn ##.%x.2782 0 0))) ((bruijn ##.%k.1756 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k413, self)))),
      _V0continuation,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1719 0 0) (bruijn ##.%k.1713 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.2762 ##.%x.2763 ##.%x.2764 ##.%x.2765 ##.%r.2766) ((##vcore.cons (bruijn ##.%x.1728 1 0) '()) (##vcore.cons (bruijn ##.%x.1726 3 0) (bruijn ##.%x.2762 0 0)) (##vcore.cons (bruijn ##.xs.736 11 1) (bruijn ##.%x.2763 0 1)) (##vcore.cons (bruijn ##.%x.1723 4 0) (bruijn ##.%x.2764 0 2)) (##vcore.cons 'letrec (bruijn ##.%x.2765 0 3))) ((bruijn ##.%k.1720 7 0) (bruijn ##.%r.2766 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0letrec,
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[4]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2760 ##.%x.2761) ((##vcore.cons (bruijn ##.xs.736 9 1) (bruijn ##.env.645 25 1)) (##vcore.cons (bruijn ##.unmangled-formals.740 3 0) (bruijn ##.unmangled-env.646 25 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 26 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k425) (bruijn ##.%x.2760 0 0) (bruijn ##.%x.2761 0 1) (bruijn ##.body.2757 6 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 25-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 25-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k425, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.2767 ##.%x.2768) ((##vcore.cons (bruijn ##.xs.736 9 1) (bruijn ##.env.645 25 1)) (##vcore.cons (bruijn ##.unmangled-formals.740 3 0) (bruijn ##.unmangled-env.646 25 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 26 3) (bruijn ##.%k.1731 1 0) (bruijn ##.%x.2767 0 0) (bruijn ##.%x.2768 0 1) (bruijn ##.e.741 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 25-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 25-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 27 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k424) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda104) (bruijn ##.vals.737 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k424, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda104, self)))),
      VGetArg(statics, 7-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1721 1 0)) ((bruijn ##.length.272 26 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k423) (bruijn ##.xs.736 6 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 29)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k423, self)))),
      VGetArg(statics, 6-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 23 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k422) (bruijn ##.xs.736 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k422, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda102, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2754) ((##vcore.null? (bruijn ##.tail-expr.735 1 0))) (if (bruijn ##.%p.2754 0 0) (basic-block 2 2 (##.expr.67.2755 ##.%p.2756) ((##vcore.cdr (bruijn ##.expr.58.2751 4 0)) (##vcore.pair? (bruijn ##.expr.67.2755 0 0))) (if (bruijn ##.%p.2756 0 1) (basic-block 3 3 (##.body.2757 ##.%x.2758 ##.%p.2759) ((##vcore.car (bruijn ##.expr.67.2755 1 0)) (##vcore.cdr (bruijn ##.expr.67.2755 1 0)) (##vcore.null? (bruijn ##.%x.2758 0 1))) (if (bruijn ##.%p.2759 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k421) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda103) (bruijn ##.kk.19.648 18 1)) ((bruijn ##.%k.1713 8 0) #f))) ((bruijn ##.%k.1713 7 0) #f))) ((bruijn ##.%k.1713 6 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
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
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k421, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda103, self)))),
      VGetArg(statics, 18-1, 1));
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
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.62.725 6 1) (bruijn ##.%k.1750 2 0) (bruijn ##.expr.64.727 4 1) (bruijn ##.%x.1751 1 0) (bruijn ##.%x.1752 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.252 25 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k428) (bruijn ##.vals.61.729 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k428, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2770 1 1) ((bruijn ##.reverse.252 24 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k427) (bruijn ##.xs.60.728 2 2)) ((bruijn ##.%k.1750 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k427, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2772 1 1) (basic-block 3 3 (##.xs.2773 ##.expr.66.2774 ##.%p.2775) ((##vcore.car (bruijn ##.expr.65.2771 2 0)) (##vcore.cdr (bruijn ##.expr.65.2771 2 0)) (##vcore.pair? (bruijn ##.expr.66.2774 0 1))) (if (bruijn ##.%p.2775 0 2) (basic-block 3 3 (##.vals.2776 ##.%x.2777 ##.%p.2778) ((##vcore.car (bruijn ##.expr.66.2774 1 1)) (##vcore.cdr (bruijn ##.expr.66.2774 1 1)) (##vcore.null? (bruijn ##.%x.2777 0 1))) (if (bruijn ##.%p.2778 0 2) (basic-block 3 3 (##.%x.2779 ##.%x.2780 ##.%x.2781) ((##vcore.cdr (bruijn ##.expr.64.727 8 1)) (##vcore.cons (bruijn ##.xs.2773 2 0) (bruijn ##.xs.60.728 8 2)) (##vcore.cons (bruijn ##.vals.2776 1 0) (bruijn ##.vals.61.729 8 3))) ((bruijn ##.kk.63.730 5 1) (bruijn ##.%k.1742 3 0) (bruijn ##.%x.2779 0 0) (bruijn ##.%x.2780 0 1) (bruijn ##.%x.2781 0 2))) ((bruijn ##.%k.1742 2 0) #f))) ((bruijn ##.%k.1742 1 0) #f))) ((bruijn ##.%k.1742 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.62.725 8 1) (bruijn ##.%k.1738 3 0) (bruijn ##.expr.64.727 6 1) (bruijn ##.%x.1739 1 0) (bruijn ##.%x.1740 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.252 27 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k433) (bruijn ##.vals.61.729 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k433, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k431(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.252 26 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k432) (bruijn ##.xs.60.728 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k432, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0lambda107, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.65.2771 ##.%p.2772) ((##vcore.car (bruijn ##.expr.64.727 4 1)) (##vcore.pair? (bruijn ##.expr.65.2771 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k430) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k431)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k430, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k431, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1737 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0lambda107))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0lambda107, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k429(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1736 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0lambda106) (bruijn ##.loop.726 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0lambda106, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726, got ~D~N"
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
  // (basic-block 2 2 (##.%x.2769 ##.%p.2770) ((##vcore.pair? (bruijn ##.expr.64.727 1 1)) (##vcore.not (bruijn ##.%x.2769 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k426) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k429)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k426, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k429, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.726) #f (bruijn ##.loop.726 0 0) (bruijn ##.%k.1735 1 0) (bruijn ##.expr.59.2753 2 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1714 0 0) (basic-block 2 2 (##.expr.58.2751 ##.%p.2752) ((##vcore.cdr (bruijn ##.expr.647 14 3)) (##vcore.pair? (bruijn ##.expr.58.2751 0 0))) (if (bruijn ##.%p.2752 0 1) (basic-block 1 1 (##.expr.59.2753) ((##vcore.car (bruijn ##.expr.58.2751 1 0))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda102) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda105))) ((bruijn ##.%k.1713 3 0) #f))) ((bruijn ##.%k.1713 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda102, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda105, self)))));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2638 1 0) (basic-block 1 1 (##.%x.2750) ((##vcore.car (bruijn ##.expr.647 12 3))) ((bruijn ##.equal?.243 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k420) 'letrec (bruijn ##.%x.2750 0 0))) ((bruijn ##.%k.1713 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k420, self)))),
      _V0letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1675 0 0) (bruijn ##.%k.1668 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.2729 ##.%x.2730 ##.%x.2731 ##.%x.2732 ##.%x.2733 ##.%r.2734) ((##vcore.cons (bruijn ##.%x.1685 1 0) '()) (##vcore.cons (bruijn ##.%x.1683 3 0) (bruijn ##.%x.2729 0 0)) (##vcore.cons (bruijn ##.xs.758 11 1) (bruijn ##.%x.2730 0 1)) (##vcore.cons (bruijn ##.%x.1680 4 0) (bruijn ##.%x.2731 0 2)) (##vcore.cons (bruijn ##.path.2717 13 0) (bruijn ##.%x.2732 0 3)) (##vcore.cons '##letrec (bruijn ##.%x.2733 0 4))) ((bruijn ##.%k.1676 7 0) (bruijn ##.%r.2734 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V10letrec,
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2727 ##.%x.2728) ((##vcore.cons (bruijn ##.xs.758 9 1) (bruijn ##.env.645 27 1)) (##vcore.cons (bruijn ##.unmangled-formals.762 3 0) (bruijn ##.unmangled-env.646 27 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 28 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k441) (bruijn ##.%x.2727 0 0) (bruijn ##.%x.2728 0 1) (bruijn ##.body.2724 6 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 27-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 27-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 28-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k441, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.2735 ##.%x.2736) ((##vcore.cons (bruijn ##.xs.758 9 1) (bruijn ##.env.645 27 1)) (##vcore.cons (bruijn ##.unmangled-formals.762 3 0) (bruijn ##.unmangled-env.646 27 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 28 3) (bruijn ##.%k.1688 1 0) (bruijn ##.%x.2735 0 0) (bruijn ##.%x.2736 0 1) (bruijn ##.e.763 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 27-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 27-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 28-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 29 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k440) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda110) (bruijn ##.vals.759 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k440, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda110, self)))),
      VGetArg(statics, 7-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1677 1 0)) ((bruijn ##.length.272 28 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k439) (bruijn ##.xs.758 6 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 29)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k439, self)))),
      VGetArg(statics, 6-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 25 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k438) (bruijn ##.xs.758 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k438, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda108, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2721) ((##vcore.null? (bruijn ##.tail-expr.757 1 0))) (if (bruijn ##.%p.2721 0 0) (basic-block 2 2 (##.expr.79.2722 ##.%p.2723) ((##vcore.cdr (bruijn ##.expr.70.2718 4 1)) (##vcore.pair? (bruijn ##.expr.79.2722 0 0))) (if (bruijn ##.%p.2723 0 1) (basic-block 3 3 (##.body.2724 ##.%x.2725 ##.%p.2726) ((##vcore.car (bruijn ##.expr.79.2722 1 0)) (##vcore.cdr (bruijn ##.expr.79.2722 1 0)) (##vcore.null? (bruijn ##.%x.2725 0 1))) (if (bruijn ##.%p.2726 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k437) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda109) (bruijn ##.kk.19.648 20 1)) ((bruijn ##.%k.1668 9 0) #f))) ((bruijn ##.%k.1668 8 0) #f))) ((bruijn ##.%k.1668 7 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k437, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda109, self)))),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
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
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.74.747 6 1) (bruijn ##.%k.1707 2 0) (bruijn ##.expr.76.749 4 1) (bruijn ##.%x.1708 1 0) (bruijn ##.%x.1709 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.252 27 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k444) (bruijn ##.vals.73.751 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k444, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2738 1 1) ((bruijn ##.reverse.252 26 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k443) (bruijn ##.xs.72.750 2 2)) ((bruijn ##.%k.1707 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k443, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2740 1 1) (basic-block 3 3 (##.xs.2741 ##.expr.78.2742 ##.%p.2743) ((##vcore.car (bruijn ##.expr.77.2739 2 0)) (##vcore.cdr (bruijn ##.expr.77.2739 2 0)) (##vcore.pair? (bruijn ##.expr.78.2742 0 1))) (if (bruijn ##.%p.2743 0 2) (basic-block 3 3 (##.vals.2744 ##.%x.2745 ##.%p.2746) ((##vcore.car (bruijn ##.expr.78.2742 1 1)) (##vcore.cdr (bruijn ##.expr.78.2742 1 1)) (##vcore.null? (bruijn ##.%x.2745 0 1))) (if (bruijn ##.%p.2746 0 2) (basic-block 3 3 (##.%x.2747 ##.%x.2748 ##.%x.2749) ((##vcore.cdr (bruijn ##.expr.76.749 8 1)) (##vcore.cons (bruijn ##.xs.2741 2 0) (bruijn ##.xs.72.750 8 2)) (##vcore.cons (bruijn ##.vals.2744 1 0) (bruijn ##.vals.73.751 8 3))) ((bruijn ##.kk.75.752 5 1) (bruijn ##.%k.1699 3 0) (bruijn ##.%x.2747 0 0) (bruijn ##.%x.2748 0 1) (bruijn ##.%x.2749 0 2))) ((bruijn ##.%k.1699 2 0) #f))) ((bruijn ##.%k.1699 1 0) #f))) ((bruijn ##.%k.1699 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.74.747 8 1) (bruijn ##.%k.1695 3 0) (bruijn ##.expr.76.749 6 1) (bruijn ##.%x.1696 1 0) (bruijn ##.%x.1697 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.252 29 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k449) (bruijn ##.vals.73.751 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k449, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k447(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.252 28 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k448) (bruijn ##.xs.72.750 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k448, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0lambda113, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.77.2739 ##.%p.2740) ((##vcore.car (bruijn ##.expr.76.749 4 1)) (##vcore.pair? (bruijn ##.expr.77.2739 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k446) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k447)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k446, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k447, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0lambda112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1694 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0lambda113))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0lambda113, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k445(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1693 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0lambda112) (bruijn ##.loop.748 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0lambda112, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748, got ~D~N"
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
  // (basic-block 2 2 (##.%x.2737 ##.%p.2738) ((##vcore.pair? (bruijn ##.expr.76.749 1 1)) (##vcore.not (bruijn ##.%x.2737 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k442) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k445)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k442, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k445, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.748) #f (bruijn ##.loop.748 0 0) (bruijn ##.%k.1692 1 0) (bruijn ##.expr.71.2720 2 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1669 0 0) (basic-block 2 2 (##.expr.69.2715 ##.%p.2716) ((##vcore.cdr (bruijn ##.expr.647 15 3)) (##vcore.pair? (bruijn ##.expr.69.2715 0 0))) (if (bruijn ##.%p.2716 0 1) (basic-block 3 3 (##.path.2717 ##.expr.70.2718 ##.%p.2719) ((##vcore.car (bruijn ##.expr.69.2715 1 0)) (##vcore.cdr (bruijn ##.expr.69.2715 1 0)) (##vcore.pair? (bruijn ##.expr.70.2718 0 1))) (if (bruijn ##.%p.2719 0 2) (basic-block 1 1 (##.expr.71.2720) ((##vcore.car (bruijn ##.expr.70.2718 1 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda108) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda111))) ((bruijn ##.%k.1668 4 0) #f))) ((bruijn ##.%k.1668 3 0) #f))) ((bruijn ##.%k.1668 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda108, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda111, self)))));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2639 1 0) (basic-block 1 1 (##.%x.2714) ((##vcore.car (bruijn ##.expr.647 13 3))) ((bruijn ##.equal?.243 17 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k436) '##letrec (bruijn ##.%x.2714 0 0))) ((bruijn ##.%k.1668 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k436, self)))),
      _V10letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1629 0 0) (bruijn ##.%k.1622 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.2693 ##.%x.2694 ##.%x.2695 ##.%x.2696 ##.%x.2697 ##.%r.2698) ((##vcore.cons (bruijn ##.%x.1639 1 0) '()) (##vcore.cons (bruijn ##.%x.1637 3 0) (bruijn ##.%x.2693 0 0)) (##vcore.cons (bruijn ##.xs.782 11 1) (bruijn ##.%x.2694 0 1)) (##vcore.cons (bruijn ##.%x.1634 4 0) (bruijn ##.%x.2695 0 2)) (##vcore.cons (bruijn ##.cost.2683 15 0) (bruijn ##.%x.2696 0 3)) (##vcore.cons 'basic-block (bruijn ##.%x.2697 0 4))) ((bruijn ##.%k.1630 7 0) (bruijn ##.%r.2698 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 15-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0basic__block,
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2691 ##.%x.2692) ((##vcore.cons (bruijn ##.xs.782 9 1) (bruijn ##.env.645 30 1)) (##vcore.cons (bruijn ##.unmangled-formals.786 3 0) (bruijn ##.unmangled-env.646 30 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 31 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k458) (bruijn ##.%x.2691 0 0) (bruijn ##.%x.2692 0 1) (bruijn ##.appl.2688 6 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 30-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 30-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 31-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k458, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda117, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.2699 ##.%x.2700) ((##vcore.cons (bruijn ##.xs.782 9 1) (bruijn ##.env.645 30 1)) (##vcore.cons (bruijn ##.unmangled-formals.786 3 0) (bruijn ##.unmangled-env.646 30 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 31 3) (bruijn ##.%k.1642 1 0) (bruijn ##.%x.2699 0 0) (bruijn ##.%x.2700 0 1) (bruijn ##.e.787 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 30-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 30-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 31-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 32 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k457) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda117) (bruijn ##.vals.783 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k457, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda117, self)))),
      VGetArg(statics, 7-1, 2));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1631 1 0)) ((bruijn ##.length.272 31 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k456) (bruijn ##.xs.782 6 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 29)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k456, self)))),
      VGetArg(statics, 6-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 28 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k455) (bruijn ##.xs.782 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k455, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda115, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2686) ((##vcore.null? (bruijn ##.tail-expr.781 1 0))) (if (bruijn ##.%p.2686 0 0) (basic-block 1 1 (##.%p.2687) ((##vcore.pair? (bruijn ##.tail.84.769 3 1))) (if (bruijn ##.%p.2687 0 0) (basic-block 3 3 (##.appl.2688 ##.%x.2689 ##.%p.2690) ((##vcore.car (bruijn ##.tail.84.769 4 1)) (##vcore.cdr (bruijn ##.tail.84.769 4 1)) (##vcore.null? (bruijn ##.%x.2689 0 1))) (if (bruijn ##.%p.2690 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k454) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda116) (bruijn ##.kk.19.648 23 1)) ((bruijn ##.%k.1622 11 0) #f))) ((bruijn ##.%k.1622 10 0) #f))) ((bruijn ##.%k.1622 9 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k454, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda116, self)))),
      VGetArg(statics, 23-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.88.771 6 1) (bruijn ##.%k.1661 2 0) (bruijn ##.expr.90.773 4 1) (bruijn ##.%x.1662 1 0) (bruijn ##.%x.1663 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.252 30 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k461) (bruijn ##.vals.87.775 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k461, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2702 1 1) ((bruijn ##.reverse.252 29 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k460) (bruijn ##.xs.86.774 2 2)) ((bruijn ##.%k.1661 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k460, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2704 1 1) (basic-block 3 3 (##.xs.2705 ##.expr.92.2706 ##.%p.2707) ((##vcore.car (bruijn ##.expr.91.2703 2 0)) (##vcore.cdr (bruijn ##.expr.91.2703 2 0)) (##vcore.pair? (bruijn ##.expr.92.2706 0 1))) (if (bruijn ##.%p.2707 0 2) (basic-block 3 3 (##.vals.2708 ##.%x.2709 ##.%p.2710) ((##vcore.car (bruijn ##.expr.92.2706 1 1)) (##vcore.cdr (bruijn ##.expr.92.2706 1 1)) (##vcore.null? (bruijn ##.%x.2709 0 1))) (if (bruijn ##.%p.2710 0 2) (basic-block 3 3 (##.%x.2711 ##.%x.2712 ##.%x.2713) ((##vcore.cdr (bruijn ##.expr.90.773 8 1)) (##vcore.cons (bruijn ##.xs.2705 2 0) (bruijn ##.xs.86.774 8 2)) (##vcore.cons (bruijn ##.vals.2708 1 0) (bruijn ##.vals.87.775 8 3))) ((bruijn ##.kk.89.776 5 1) (bruijn ##.%k.1653 3 0) (bruijn ##.%x.2711 0 0) (bruijn ##.%x.2712 0 1) (bruijn ##.%x.2713 0 2))) ((bruijn ##.%k.1653 2 0) #f))) ((bruijn ##.%k.1653 1 0) #f))) ((bruijn ##.%k.1653 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.88.771 8 1) (bruijn ##.%k.1649 3 0) (bruijn ##.expr.90.773 6 1) (bruijn ##.%x.1650 1 0) (bruijn ##.%x.1651 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.252 32 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k466) (bruijn ##.vals.87.775 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k466, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k464(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.252 31 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k465) (bruijn ##.xs.86.774 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k465, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0lambda120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.91.2703 ##.%p.2704) ((##vcore.car (bruijn ##.expr.90.773 4 1)) (##vcore.pair? (bruijn ##.expr.91.2703 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k463) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k464)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k463, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k464, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0lambda119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1648 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0lambda120))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0lambda120, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k462(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1647 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0lambda119) (bruijn ##.loop.772 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0lambda119, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772, got ~D~N"
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
  // (basic-block 2 2 (##.%x.2701 ##.%p.2702) ((##vcore.pair? (bruijn ##.expr.90.773 1 1)) (##vcore.not (bruijn ##.%x.2701 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k459) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k462)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k459, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k462, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda118, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.772) #f (bruijn ##.loop.772 0 0) (bruijn ##.%k.1646 1 0) (bruijn ##.head.83.768 2 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda115) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda118))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda115, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda118, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2685) ((##vcore.< (bruijn ##.%x.1665 1 0) 1)) (if (bruijn ##.%p.2685 0 0) ((bruijn ##.%k.1622 6 0) #f) ((bruijn ##.split-at-right.271 23 28) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda114) (bruijn ##.expr.82.2684 2 1) 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 28)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda114, self)))),
      statics->up->vars[1],
      VEncodeInt(1l));
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1623 0 0) (basic-block 2 2 (##.expr.81.2681 ##.%p.2682) ((##vcore.cdr (bruijn ##.expr.647 16 3)) (##vcore.pair? (bruijn ##.expr.81.2681 0 0))) (if (bruijn ##.%p.2682 0 1) (basic-block 2 2 (##.cost.2683 ##.expr.82.2684) ((##vcore.car (bruijn ##.expr.81.2681 1 0)) (##vcore.cdr (bruijn ##.expr.81.2681 1 0))) ((bruijn ##.num-pairs.270 21 27) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k453) (bruijn ##.expr.82.2684 0 1))) ((bruijn ##.%k.1622 3 0) #f))) ((bruijn ##.%k.1622 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 27)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k453, self)))),
      self->vars[1]);
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2640 1 0) (basic-block 1 1 (##.%x.2680) ((##vcore.car (bruijn ##.expr.647 14 3))) ((bruijn ##.equal?.243 18 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k452) 'basic-block (bruijn ##.%x.2680 0 0))) ((bruijn ##.%k.1622 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k452, self)))),
      _V0basic__block,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1618 0 0) (bruijn ##.%k.1616 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1619 0 0) (bruijn ##.expr.647 17 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 17-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1617 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k470) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda121) (bruijn ##.kk.19.648 15 1)) ((bruijn ##.%k.1616 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k470, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda121, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2641 1 0) (basic-block 1 1 (##.%x.2679) ((##vcore.car (bruijn ##.expr.647 15 3))) ((bruijn ##.equal?.243 19 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k469) '##foreign.function (bruijn ##.%x.2679 0 0))) ((bruijn ##.%k.1616 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k469, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1612 0 0) (bruijn ##.%k.1610 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1613 0 0) (bruijn ##.expr.647 18 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 18-1, 3));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1611 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k474) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda122) (bruijn ##.kk.19.648 16 1)) ((bruijn ##.%k.1610 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k474, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda122, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2642 1 0) (basic-block 1 1 (##.%x.2678) ((##vcore.car (bruijn ##.expr.647 16 3))) ((bruijn ##.equal?.243 20 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k473) 'quote (bruijn ##.%x.2678 0 0))) ((bruijn ##.%k.1610 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k473, self)))),
      _V0quote,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1603 0 0) (bruijn ##.%k.1600 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2676 ##.%r.2677) ((##vcore.cons (bruijn ##.f.2674 3 0) (bruijn ##.%x.1606 1 0)) (##vcore.cons '##inline (bruijn ##.%x.2676 0 0))) ((bruijn ##.%k.1604 2 0) (bruijn ##.%r.2677 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V10inline,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 23 3) (bruijn ##.%k.1607 0 0) (bruijn ##.env.645 22 1) (bruijn ##.unmangled-env.646 22 2) (bruijn ##.x.794 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 25 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k479) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda124) (bruijn ##.xs.2675 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k479, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda124, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1601 0 0) (basic-block 2 2 (##.expr.97.2672 ##.%p.2673) ((##vcore.cdr (bruijn ##.expr.647 19 3)) (##vcore.pair? (bruijn ##.expr.97.2672 0 0))) (if (bruijn ##.%p.2673 0 1) (basic-block 2 2 (##.f.2674 ##.xs.2675) ((##vcore.car (bruijn ##.expr.97.2672 1 0)) (##vcore.cdr (bruijn ##.expr.97.2672 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k478) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda123) (bruijn ##.kk.19.648 19 1))) ((bruijn ##.%k.1600 3 0) #f))) ((bruijn ##.%k.1600 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 19-1, 3));
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k478, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda123, self)))),
      VGetArg(statics, 19-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2643 1 0) (basic-block 1 1 (##.%x.2671) ((##vcore.car (bruijn ##.expr.647 17 3))) ((bruijn ##.equal?.243 21 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k477) '##inline (bruijn ##.%x.2671 0 0))) ((bruijn ##.%k.1600 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k477, self)))),
      _V10inline,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1590 0 0) (bruijn ##.%k.1585 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.2667 ##.%x.2668 ##.%x.2669 ##.%r.2670) ((##vcore.cons (bruijn ##.%x.1595 2 0) (bruijn ##.%x.1596 1 0)) (##vcore.cons (bruijn ##.static?.2662 5 0) (bruijn ##.%x.2667 0 0)) (##vcore.cons (bruijn ##.name.2659 6 0) (bruijn ##.%x.2668 0 1)) (##vcore.cons '##qualified-call (bruijn ##.%x.2669 0 2))) ((bruijn ##.%k.1591 3 0) (bruijn ##.%r.2670 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__call,
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 27 3) (bruijn ##.%k.1597 0 0) (bruijn ##.env.645 26 1) (bruijn ##.unmangled-env.646 26 2) (bruijn ##.x.803 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 27-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 26-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 26-1, 2);
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 29 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k485) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda126) (bruijn ##.xs.2666 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k485, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda126, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 25 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k484) (bruijn ##.env.645 24 1) (bruijn ##.unmangled-env.646 24 2) (bruijn ##.f.2665 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 25-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k484, self))));
    VWORD _arg1 = 
      VGetArg(statics, 24-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 24-1, 2);
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1586 0 0) (basic-block 2 2 (##.expr.99.2657 ##.%p.2658) ((##vcore.cdr (bruijn ##.expr.647 20 3)) (##vcore.pair? (bruijn ##.expr.99.2657 0 0))) (if (bruijn ##.%p.2658 0 1) (basic-block 3 3 (##.name.2659 ##.expr.100.2660 ##.%p.2661) ((##vcore.car (bruijn ##.expr.99.2657 1 0)) (##vcore.cdr (bruijn ##.expr.99.2657 1 0)) (##vcore.pair? (bruijn ##.expr.100.2660 0 1))) (if (bruijn ##.%p.2661 0 2) (basic-block 3 3 (##.static?.2662 ##.expr.101.2663 ##.%p.2664) ((##vcore.car (bruijn ##.expr.100.2660 1 1)) (##vcore.cdr (bruijn ##.expr.100.2660 1 1)) (##vcore.pair? (bruijn ##.expr.101.2663 0 1))) (if (bruijn ##.%p.2664 0 2) (basic-block 2 2 (##.f.2665 ##.xs.2666) ((##vcore.car (bruijn ##.expr.101.2663 1 1)) (##vcore.cdr (bruijn ##.expr.101.2663 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k483) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda125) (bruijn ##.kk.19.648 22 1))) ((bruijn ##.%k.1585 5 0) #f))) ((bruijn ##.%k.1585 4 0) #f))) ((bruijn ##.%k.1585 3 0) #f))) ((bruijn ##.%k.1585 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 20-1, 3));
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k483, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda125, self)))),
      VGetArg(statics, 22-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2644 1 0) (basic-block 1 1 (##.%x.2656) ((##vcore.car (bruijn ##.expr.647 18 3))) ((bruijn ##.equal?.243 22 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k482) '##qualified-call (bruijn ##.%x.2656 0 0))) ((bruijn ##.%k.1585 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 18-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k482, self)))),
      _V10qualified__call,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1568 0 0) (bruijn ##.%k.1566 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2650) ((##vcore.cons (bruijn ##.%x.1570 2 0) (bruijn ##.%x.1571 1 0))) ((bruijn ##.%k.1569 3 0) (bruijn ##.%r.2650 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda129, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 25 3) (bruijn ##.%k.1572 0 0) (bruijn ##.env.645 24 1) (bruijn ##.unmangled-env.646 24 2) (bruijn ##.x.815 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 25-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 24-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 24-1, 2);
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.245 27 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k490) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda129) (bruijn ##.xs.814 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k490, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda129, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 23 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k489) (bruijn ##.env.645 22 1) (bruijn ##.unmangled-env.646 22 2) (bruijn ##.f.2647 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k489, self))));
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    VWORD _arg3 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2649) ((##vcore.null? (bruijn ##.tail-expr.813 1 0))) (if (bruijn ##.%p.2649 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k488) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda128) (bruijn ##.kk.19.648 20 1)) ((bruijn ##.%k.1566 3 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k488, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda128, self)))),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.105.807 5 1) (bruijn ##.%k.1581 1 0) (bruijn ##.expr.107.809 3 1) (bruijn ##.%x.1582 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2652 1 1) ((bruijn ##.reverse.252 28 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k492) (bruijn ##.xs.104.810 2 2)) ((bruijn ##.%k.1581 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k492, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.105.807 7 1) (bruijn ##.%k.1576 2 0) (bruijn ##.expr.107.809 5 1) (bruijn ##.%x.1577 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k494(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.252 30 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k495) (bruijn ##.xs.104.810 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k495, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0lambda132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0lambda132, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs.2653 ##.%x.2654 ##.%x.2655) ((##vcore.car (bruijn ##.expr.107.809 4 1)) (##vcore.cdr (bruijn ##.expr.107.809 4 1)) (##vcore.cons (bruijn ##.xs.2653 0 0) (bruijn ##.xs.104.810 4 2))) ((bruijn ##.kk.106.811 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k494) (bruijn ##.%x.2654 0 1) (bruijn ##.%x.2655 0 2)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k494, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0lambda131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0lambda131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.1575 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0lambda132))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0lambda132, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k493(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1574 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0lambda131) (bruijn ##.loop.808 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0lambda131, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.2651 ##.%p.2652) ((##vcore.pair? (bruijn ##.expr.107.809 1 1)) (##vcore.not (bruijn ##.%x.2651 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k491) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k493)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k491, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k493, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda130, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.808) #f (bruijn ##.loop.808 0 0) (bruijn ##.%k.1573 1 0) (bruijn ##.expr.103.2648 2 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808, self))));
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
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2645 1 0) (basic-block 2 2 (##.f.2647 ##.expr.103.2648) ((##vcore.car (bruijn ##.expr.647 19 3)) (##vcore.cdr (bruijn ##.expr.647 19 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda127) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda130))) ((bruijn ##.%k.1566 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 19-1, 3));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 19-1, 3));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda127, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda130, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.259 23 16) (bruijn ##.%k.1561 0 0) (##string ##.string.2992) (bruijn ##.expr.647 19 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 16)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2992.sym, VPOINTER_OTHER),
      VGetArg(statics, 19-1, 3));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k498(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1560 17 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda133) (bruijn ##.kk.19.648 17 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 17-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda133, self)))),
      VGetArg(statics, 17-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.1562 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k498))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k498, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2646) ((##vcore.symbol? (bruijn ##.expr.647 19 3))) (if (bruijn ##.%p.2646 0 0) (##qualified-call (vanity compiler lower bruijn-ify ##.lookup.611) #f (bruijn ##.lookup.611 20 0) (bruijn ##.%k.1563 1 0) 0 (bruijn ##.env.645 19 1) (bruijn ##.expr.647 19 3)) ((bruijn ##.%k.1563 1 0) (bruijn ##.expr.647 19 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 19-1, 3));
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 19-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 19-1, 3));
}
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k496(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k497) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda134) (bruijn ##.kk.19.648 16 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k497, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda134, self)))),
      VGetArg(statics, 16-1, 1));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k486(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2645) ((##vcore.pair? (bruijn ##.expr.647 17 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k487) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k496)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 17-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k487, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k496, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k480(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2644) ((##vcore.pair? (bruijn ##.expr.647 16 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k481) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k486)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 16-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k481, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k486, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k475(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2643) ((##vcore.pair? (bruijn ##.expr.647 15 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k476) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k480)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 15-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k476, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k480, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k471(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2642) ((##vcore.pair? (bruijn ##.expr.647 14 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k472) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k475)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 14-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k472, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k475, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k467(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2641) ((##vcore.pair? (bruijn ##.expr.647 13 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k468) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k471)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k468, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k471, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k450(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2640) ((##vcore.pair? (bruijn ##.expr.647 12 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k451) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k467)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k451, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k467, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k434(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2639) ((##vcore.pair? (bruijn ##.expr.647 11 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k435) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k450)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k435, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k450, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k418(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2638) ((##vcore.pair? (bruijn ##.expr.647 10 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k419) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k434)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k419, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k434, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k411(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2637) ((##vcore.pair? (bruijn ##.expr.647 9 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k412) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k418)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k412, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k418, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k401(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2636) ((##vcore.pair? (bruijn ##.expr.647 8 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k402) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k411)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k402, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k411, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k393(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2635) ((##vcore.pair? (bruijn ##.expr.647 7 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k394) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k401)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k394, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k401, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k385(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2634) ((##vcore.pair? (bruijn ##.expr.647 6 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k386) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k393)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k386, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k393, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k374(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2633) ((##vcore.pair? (bruijn ##.expr.647 5 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k375) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k385)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k375, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k385, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k360(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2632) ((##vcore.pair? (bruijn ##.expr.647 4 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k361) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k374)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k361, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k374, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k349(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2631) ((##vcore.pair? (bruijn ##.expr.647 3 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k350) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k360)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k350, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k360, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2630) ((##vcore.pair? (bruijn ##.expr.647 2 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k336) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k349)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k336, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k349, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.%k.1559 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda81))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda81, self)))));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D615(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D615, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 1 3) (bruijn ##.%k.1963 0 0) '() '() (bruijn ##.expr.817 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[3]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1982 0 0) (bruijn ##.%k.1980 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1983 0 0) (bruijn ##.expr.609 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1981 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k501) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda136) (bruijn ##.kk.1.818 4 1)) ((bruijn ##.%k.1980 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k501, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda136, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2947 1 0) (basic-block 1 1 (##.%x.2961) ((##vcore.car (bruijn ##.expr.609 5 1))) ((bruijn ##.equal?.243 7 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k500) '##foreign.declare (bruijn ##.%x.2961 0 0))) ((bruijn ##.%k.1980 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k500, self)))),
      _V10foreign_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.1972 0 0) (bruijn ##.%k.1967 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2958 ##.%x.2959 ##.%r.2960) ((##vcore.cons (bruijn ##.%x.1976 1 0) '()) (##vcore.cons (bruijn ##.f.2952 4 0) (bruijn ##.%x.2958 0 0)) (##vcore.cons '##vcore.declare (bruijn ##.%x.2959 0 1))) ((bruijn ##.%k.1973 2 0) (bruijn ##.%r.2960 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Ddeclare,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler lower bruijn-ify ##.doit.615) #f (bruijn ##.doit.615 10 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k506) (bruijn ##.l.2955 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 4));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k506, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D615(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1968 0 0) (basic-block 2 2 (##.expr.5.2950 ##.%p.2951) ((##vcore.cdr (bruijn ##.expr.609 8 1)) (##vcore.pair? (bruijn ##.expr.5.2950 0 0))) (if (bruijn ##.%p.2951 0 1) (basic-block 3 3 (##.f.2952 ##.expr.6.2953 ##.%p.2954) ((##vcore.car (bruijn ##.expr.5.2950 1 0)) (##vcore.cdr (bruijn ##.expr.5.2950 1 0)) (##vcore.pair? (bruijn ##.expr.6.2953 0 1))) (if (bruijn ##.%p.2954 0 2) (basic-block 3 3 (##.l.2955 ##.%x.2956 ##.%p.2957) ((##vcore.car (bruijn ##.expr.6.2953 1 1)) (##vcore.cdr (bruijn ##.expr.6.2953 1 1)) (##vcore.null? (bruijn ##.%x.2956 0 1))) (if (bruijn ##.%p.2957 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k505) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda137) (bruijn ##.kk.1.818 8 1)) ((bruijn ##.%k.1967 5 0) #f))) ((bruijn ##.%k.1967 4 0) #f))) ((bruijn ##.%k.1967 3 0) #f))) ((bruijn ##.%k.1967 2 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k505, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda137, self)))),
      VGetArg(statics, 8-1, 1));
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
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2948 1 0) (basic-block 1 1 (##.%x.2949) ((##vcore.car (bruijn ##.expr.609 6 1))) ((bruijn ##.equal?.243 8 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k504) '##vcore.declare (bruijn ##.%x.2949 0 0))) ((bruijn ##.%k.1967 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k504, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower bruijn-ify ##.doit.615) #f (bruijn ##.doit.615 4 4) (bruijn ##.%k.1965 0 0) (bruijn ##.expr.609 5 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[4]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D615(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k507(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1964 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda138) (bruijn ##.kk.1.818 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda138, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k502(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2948) ((##vcore.pair? (bruijn ##.expr.609 4 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k503) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k507)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k503, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k507, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2947) ((##vcore.pair? (bruijn ##.expr.609 3 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k499) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k502)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k499, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k502, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 5 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D615")) (##vcore.call/cc (bruijn ##.%k.1502 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda135)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D615, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda135, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower improper-map) #t (bruijn ##.improper-map.296 1 5) (bruijn ##.%k.1985 0 0) (bruijn ##.ungensym.269 2 26) (bruijn ##.xs.826 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[26];
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0improper__map, _V60_V0vanity_V0compiler_V0lower)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0improper__map(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0lower_V0improper__map_V0k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0improper__map_V0k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2966) ((##vcore.cons (bruijn ##.%x.1989 3 0) (bruijn ##.%x.1990 1 0))) ((bruijn ##.%k.1986 7 0) (bruijn ##.%r.2966 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0improper__map_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0improper__map_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2965) ((##vcore.cdr (bruijn ##.xs.828 5 2))) (##qualified-call (vanity compiler lower improper-map) #t (bruijn ##.improper-map.296 6 5) (close _V50_V0vanity_V0compiler_V0lower_V0improper__map_V0k509) (bruijn ##.f.827 5 1) (bruijn ##.%x.2965 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0lower;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0improper__map_V0k509, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0improper__map, _V60_V0vanity_V0compiler_V0lower)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0improper__map(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0improper__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0improper__map, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2962) ((##vcore.null? (bruijn ##.xs.828 1 2))) (if (bruijn ##.%p.2962 0 0) ((bruijn ##.%k.1986 1 0) '()) (basic-block 1 1 (##.%p.2963) ((##vcore.pair? (bruijn ##.xs.828 2 2))) (if (bruijn ##.%p.2963 0 0) (basic-block 1 1 (##.%x.2964) ((##vcore.car (bruijn ##.xs.828 3 2))) ((bruijn ##.f.827 3 1) (close _V50_V0vanity_V0compiler_V0lower_V0improper__map_V0k508) (bruijn ##.%x.2964 0 0))) ((bruijn ##.f.827 2 1) (bruijn ##.%k.1986 2 0) (bruijn ##.xs.828 2 2))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
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
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0improper__map_V0k508, self)))),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      statics->up->vars[0],
      statics->up->vars[2]);
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831_V0k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831_V0k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1996 0 0) ((bruijn ##.%k.1994 3 0) (bruijn ##.i.833 3 2)) (basic-block 2 2 (##.%x.2969 ##.%x.2970) ((##vcore.cdr (bruijn ##.l.832 4 1)) (##vcore.+ (bruijn ##.i.833 4 2) 1)) (##qualified-call (vanity compiler lower list-index ##.loop.831) #f (bruijn ##.loop.831 5 0) (bruijn ##.%k.1994 4 0) (bruijn ##.%x.2969 0 0) (bruijn ##.%x.2970 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2967) ((##vcore.null? (bruijn ##.l.832 1 1))) (if (bruijn ##.%p.2967 0 0) ((bruijn ##.%k.1994 1 0) #f) (basic-block 1 1 (##.%x.2968) ((##vcore.car (bruijn ##.l.832 2 1))) ((bruijn ##.p.829 4 1) (close _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831_V0k510) (bruijn ##.%x.2968 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831_V0k510, self)))),
      self->vars[0]);
    }
}
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831")) (##qualified-call (vanity compiler lower list-index ##.loop.831) #f (bruijn ##.loop.831 0 0) (bruijn ##.%k.1993 1 0) (bruijn ##.l.830 1 2) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V0vanity_V0compiler_V0lower_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29) {
 if(argc != 30) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0lower_V20_V0lambda2, got ~D~N"
  "-- expected 30~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[30]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 30, 30, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  self->vars[8] = _var8;
  self->vars[9] = _var9;
  self->vars[10] = _var10;
  self->vars[11] = _var11;
  self->vars[12] = _var12;
  self->vars[13] = _var13;
  self->vars[14] = _var14;
  self->vars[15] = _var15;
  self->vars[16] = _var16;
  self->vars[17] = _var17;
  self->vars[18] = _var18;
  self->vars[19] = _var19;
  self->vars[20] = _var20;
  self->vars[21] = _var21;
  self->vars[22] = _var22;
  self->vars[23] = _var23;
  self->vars[24] = _var24;
  self->vars[25] = _var25;
  self->vars[26] = _var26;
  self->vars[27] = _var27;
  self->vars[28] = _var28;
  self->vars[29] = _var29;
  // (##letrec (vanity compiler lower) 7 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions" (vanity compiler lower)) 0 0 (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify" (vanity compiler lower)) (close "_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals" (vanity compiler lower)) (close "_V50_V0vanity_V0compiler_V0lower_V0improper__map" (vanity compiler lower)) (close "_V50_V0vanity_V0compiler_V0lower_V0list__index" (vanity compiler lower))) (basic-block 4 4 (##.%x.2971 ##.%x.2972 ##.%x.2973 ##.%r.2974) ((##vcore.cons 'bruijn-ify (bruijn ##.bruijn-ify.294 1 3)) (##vcore.cons 'to-functions (bruijn ##.to-functions.291 1 0)) (##vcore.cons (bruijn ##.%x.2972 0 1) '()) (##vcore.cons (bruijn ##.%x.2971 0 0) (bruijn ##.%x.2973 0 2))) ((bruijn ##.%k.835 13 0) (bruijn ##.%r.2974 0 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0lower = self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions, _V60_V0vanity_V0compiler_V0lower))));
    self->vars[1] = VEncodeInt(0l);
    self->vars[2] = VEncodeInt(0l);
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify, _V60_V0vanity_V0compiler_V0lower))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals, _V60_V0vanity_V0compiler_V0lower))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0improper__map, _V60_V0vanity_V0compiler_V0lower))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0list__index, _V60_V0vanity_V0compiler_V0lower))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0lower_V20", &_V60_V0vanity_V0compiler_V0lower);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0bruijn__ify,
      statics->vars[3]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0to__functions,
      statics->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      self->vars[3]);
    }
    }
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
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0lower_V20_V0lambda2) (##string ##.string.2993) (bruijn ##.%x.2003 0 0) 'equal? 'list 'map 'list-ref 'list-set! 'values 'make-list 'cadr 'mangle-symbol 'reverse 'drop-right 'mangle-qualified-function 'mangle-foreign 'assoc 'lookup-intrinsic-name 'error 'compiler-error 'vector-map 'gensym 'cdar 'typevector? 'number? 'hush-table-set! 'hush-table-ref 'make-hush-table 'sprintf 'ungensym 'num-pairs 'split-at-right 'length)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 33,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D2993.sym, VPOINTER_OTHER),
      _var0,
      _V0equal_Q,
      _V0list,
      _V0map,
      _V0list__ref,
      _V0list__set_B,
      _V0values,
      _V0make__list,
      _V0cadr,
      _V0mangle__symbol,
      _V0reverse,
      _V0drop__right,
      _V0mangle__qualified__function,
      _V0mangle__foreign,
      _V0assoc,
      _V0lookup__intrinsic__name,
      _V0error,
      _V0compiler__error,
      _V0vector__map,
      _V0gensym,
      _V0cdar,
      _V0typevector_Q,
      _V0number_Q,
      _V0hush__table__set_B,
      _V0hush__table__ref,
      _V0make__hush__table,
      _V0sprintf,
      _V0ungensym,
      _V0num__pairs,
      _V0split__at__right,
      _V0length);
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
  // (##vcore.vector (close _V0vanity_V0compiler_V0lower_V20_V0k10) (bruijn ##.%x.2004 8 0) (bruijn ##.%x.2005 7 0) (bruijn ##.%x.2006 6 0) (bruijn ##.%x.2007 5 0) (bruijn ##.%x.2008 4 0) (bruijn ##.%x.2009 3 0) (bruijn ##.%x.2010 2 0) (bruijn ##.%x.2011 1 0) (bruijn ##.%x.2012 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 10,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k10, self)))),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k9) (##string ##.string.2994))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k9, self)))),
      VEncodePointer(&_V10_Dstring_D2994.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k8) (##string ##.string.2995))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D2995.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k7) (##string ##.string.2996))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D2996.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k6) (##string ##.string.2997))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D2997.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k5) (##string ##.string.2998))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D2998.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k4) (##string ##.string.2999))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D2999.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k3) (##string ##.string.3000))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D3000.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k2) (##string ##.string.3001))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D3001.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k1) (##string ##.string.3002))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D3002.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0lower_V20 = (VFunc)_V0vanity_V0compiler_V0lower_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VInternSymbol(-1001750904, &_VW_V0split__at__right.sym), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VInternSymbol(67164350, &_VW_V0num__pairs.sym), VPOINTER_OTHER);
  _V0ungensym = VEncodePointer(VInternSymbol(798488995, &_VW_V0ungensym.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0make__hush__table = VEncodePointer(VInternSymbol(-1788547486, &_VW_V0make__hush__table.sym), VPOINTER_OTHER);
  _V0hush__table__ref = VEncodePointer(VInternSymbol(-845139466, &_VW_V0hush__table__ref.sym), VPOINTER_OTHER);
  _V0hush__table__set_B = VEncodePointer(VInternSymbol(-1662644055, &_VW_V0hush__table__set_B.sym), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VInternSymbol(-1605136215, &_VW_V0number_Q.sym), VPOINTER_OTHER);
  _V0typevector_Q = VEncodePointer(VInternSymbol(1566825028, &_VW_V0typevector_Q.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0vector__map = VEncodePointer(VInternSymbol(848807183, &_VW_V0vector__map.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VInternSymbol(451875892, &_VW_V0lookup__intrinsic__name.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0mangle__foreign = VEncodePointer(VInternSymbol(646216672, &_VW_V0mangle__foreign.sym), VPOINTER_OTHER);
  _V0mangle__qualified__function = VEncodePointer(VInternSymbol(1519413566, &_VW_V0mangle__qualified__function.sym), VPOINTER_OTHER);
  _V0drop__right = VEncodePointer(VInternSymbol(-377735426, &_VW_V0drop__right.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VInternSymbol(-1891438302, &_VW_V0mangle__symbol.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0make__list = VEncodePointer(VInternSymbol(-177270239, &_VW_V0make__list.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0list__set_B = VEncodePointer(VInternSymbol(-1662644820, &_VW_V0list__set_B.sym), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VInternSymbol(-297841368, &_VW_V0list__ref.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0to__functions = VEncodePointer(VInternSymbol(570485858, &_VW_V0to__functions.sym), VPOINTER_OTHER);
  _V0bruijn__ify = VEncodePointer(VInternSymbol(-1215450488, &_VW_V0bruijn__ify.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V10qualified__call = VEncodePointer(VInternSymbol(1058881829, &_VW_V10qualified__call.sym), VPOINTER_OTHER);
  _V0basic__block = VEncodePointer(VInternSymbol(200115236, &_VW_V0basic__block.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VInternSymbol(-1641713520, &_VW_V10inline.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VInternSymbol(871318520, &_VW_V0continuation.sym), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VInternSymbol(-473367874, &_VW_V10qualified__case__lambda.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VInternSymbol(905832333, &_VW_V10qualified__lambda.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0close = VEncodePointer(VInternSymbol(-786291330, &_VW_V0close.sym), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VInternSymbol(-996132237, &_VW_V0bruijn.sym), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VInternSymbol(-1632835872, &_VW_V0_P.sym), VPOINTER_OTHER);
  _V10vector = VEncodePointer(VInternSymbol(705404156, &_VW_V10vector.sym), VPOINTER_OTHER);
  _V10pair = VEncodePointer(VInternSymbol(1185092068, &_VW_V10pair.sym), VPOINTER_OTHER);
  _V10string = VEncodePointer(VInternSymbol(-434610435, &_VW_V10string.sym), VPOINTER_OTHER);
  _V10typevector = VEncodePointer(VInternSymbol(-86936023, &_VW_V10typevector.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V10_Dpair_D2991.first = VEncodePointer(&_V10_Dpair_D2987, VPOINTER_PAIR);
  _V10_Dpair_D2991.rest = VEncodePointer(&_V10_Dpair_D2990, VPOINTER_PAIR);
  _V10_Dpair_D2990.first = VEncodePointer(&_V10_Dpair_D2989, VPOINTER_PAIR);
  _V10_Dpair_D2990.rest = VNULL;
  _V10_Dpair_D2989.first = _V0unquote;
  _V10_Dpair_D2989.rest = VEncodePointer(&_V10_Dpair_D2988, VPOINTER_PAIR);
  _V10_Dpair_D2988.first = _V0unmangled__env;
  _V10_Dpair_D2988.rest = VNULL;
  _V10_Dpair_D2987.first = VEncodeBool(false);
  _V10_Dpair_D2987.rest = VEncodePointer(&_V10_Dpair_D2986, VPOINTER_PAIR);
  _V10_Dpair_D2986.first = _V0_U;
  _V10_Dpair_D2986.rest = VNULL;
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
