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

static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D3004 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D3003 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D3002 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D3001 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D3000 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D2999 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2998 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D2997 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "_V0vanity_V0compiler_V0hush_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D2996 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
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
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2995 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
VWEAK VWORD _V0to__functions;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0to__functions = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "to-functions" };
VWEAK VWORD _V0bruijn__ify;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0bruijn__ify = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "bruijn-ify" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2994 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "bruijnify-pass: No matching case" };
static VPair _V10_Dpair_D2993 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2992 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2991 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2990 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D2989 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D2988 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D2987 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "bruijnify-pass: No matching lambda" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D2986 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "global" };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D2985 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "to-functions iter-apply match statement exhausted" };
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
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2984 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2983 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "literal-lifting: unknown literal type" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D2982 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "vector" };
VWEAK VWORD _V10vector;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##vector" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D2981 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "pair" };
VWEAK VWORD _V10pair;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V10pair = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "##pair" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D2980 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "string" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D2979 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "typevector" };
VWEAK VWORD _V10typevector;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10typevector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##typevector" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D2978 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A_V0k~A" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D2977 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "~A_V0lambda~A" };
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
  // ((bruijn ##.sprintf.268 6 25) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301_V0k13) (##string ##.string.2977) (bruijn ##.fun.320 1 1) (bruijn ##.curlambda.293 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 25)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301_V0k13, self)))),
      VEncodePointer(&_V10_Dstring_D2977.sym, VPOINTER_OTHER),
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
  // (basic-block 1 1 (##.%x.2014) ((##vcore.+ (bruijn ##.curlambda.293 5 2) 1)) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgenlambda_D301_V0k12) (bruijn ##.curlambda.293 5 2) (bruijn ##.%x.2014 0 0)))
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
  // ((bruijn ##.sprintf.268 6 25) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302_V0k15) (##string ##.string.2978) (bruijn ##.fun.321 1 1) (bruijn ##.curcont.292 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 25)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302_V0k15, self)))),
      VEncodePointer(&_V10_Dstring_D2978.sym, VPOINTER_OTHER),
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
  // (basic-block 1 1 (##.%x.2015) ((##vcore.+ (bruijn ##.curcont.292 5 1) 1)) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dgencont_D302_V0k14) (bruijn ##.curcont.292 5 1) (bruijn ##.%x.2015 0 0)))
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
  // (if (bruijn ##.val.323 0 0) (basic-block 1 1 (##.%r.2016) ((##vcore.cons (bruijn ##.key.322 2 1) (bruijn ##.val.323 1 0))) ((bruijn ##.%k.844 2 0) (bruijn ##.%r.2016 0 0))) ((bruijn ##.%k.844 1 0) #f))
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
  // (basic-block 2 2 (##.%x.2017 ##.%x.2018) ((##vcore.cons (bruijn ##.key.324 1 1) (bruijn ##.val.325 1 2)) (##vcore.cons (bruijn ##.%x.2017 0 0) (bruijn ##.literal-table.307 2 6))) (set! (bruijn ##.%k.846 1 0) (bruijn ##.literal-table.307 2 6) (bruijn ##.%x.2018 0 1)))
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
  // (basic-block 1 1 (##.%r.2021) ((##vcore.car (bruijn ##.lookup.2020 1 0))) ((bruijn ##.%k.849 4 0) (bruijn ##.%r.2021 0 0)))
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
  // (if (bruijn ##.lookup.329 0 0) (basic-block 1 1 (##.%r.2019) ((##vcore.car (bruijn ##.lookup.329 1 0))) ((bruijn ##.%k.849 3 0) (bruijn ##.%r.2019 0 0))) (basic-block 1 1 (##.lookup.2020) ((##vcore.cons (bruijn ##.key.328 2 0) (bruijn ##.intrin.327 3 2))) (##qualified-call (vanity compiler lower to-functions ##.register-literal!.311) #f (bruijn ##.register-literal!.311 4 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__intrinsic_B_D312_V0k20) (bruijn ##.key.328 2 0) (bruijn ##.intrin.327 3 2))))
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
  // (basic-block 2 2 (##.%x.2032 ##.%r.2033) ((##vcore.cons (bruijn ##.%x.863 1 0) '()) (##vcore.cons '##typevector (bruijn ##.%x.2032 0 0))) ((bruijn ##.%k.850 13 0) (bruijn ##.%r.2033 0 1)))
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
  // (if (bruijn ##.lookup.332 0 0) (basic-block 3 3 (##.%x.2029 ##.%x.2030 ##.%r.2031) ((##vcore.cdr (bruijn ##.lookup.332 1 0)) (##vcore.cons (bruijn ##.%x.2029 0 0) '()) (##vcore.cons '##typevector (bruijn ##.%x.2030 0 1))) ((bruijn ##.%k.850 11 0) (bruijn ##.%r.2031 0 2))) ((bruijn ##.gensym.261 15 18) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k24) (##string ##.string.2979)))
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
      VEncodePointer(&_V10_Dstring_D2979.sym, VPOINTER_OTHER));
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
  // (basic-block 2 2 (##.%x.2038 ##.%r.2039) ((##vcore.cons (bruijn ##.%x.869 1 0) '()) (##vcore.cons '##string (bruijn ##.%x.2038 0 0))) ((bruijn ##.%k.850 14 0) (bruijn ##.%r.2039 0 1)))
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
  // (if (bruijn ##.lookup.333 0 0) (basic-block 3 3 (##.%x.2035 ##.%x.2036 ##.%r.2037) ((##vcore.cdr (bruijn ##.lookup.333 1 0)) (##vcore.cons (bruijn ##.%x.2035 0 0) '()) (##vcore.cons '##string (bruijn ##.%x.2036 0 1))) ((bruijn ##.%k.850 12 0) (bruijn ##.%r.2037 0 2))) ((bruijn ##.gensym.261 16 18) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k28) (##string ##.string.2980)))
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
      VEncodePointer(&_V10_Dstring_D2980.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.2041 1 0) (##qualified-call (vanity compiler lower to-functions ##.register-literal!.311) #f (bruijn ##.register-literal!.311 15 10) (bruijn ##.%k.873 0 0) (bruijn ##.x.331 14 1) '()) ((bruijn ##.%k.873 0 0) #f))
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
  // (basic-block 1 1 (##.%p.2041) ((##vcore.not (bruijn ##.%x.874 1 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k32) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k33)))
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
  // (basic-block 2 2 (##.%x.2049 ##.%r.2050) ((##vcore.cons (bruijn ##.%x.879 1 0) '()) (##vcore.cons '##pair (bruijn ##.%x.2049 0 0))) ((bruijn ##.%k.850 22 0) (bruijn ##.%r.2050 0 1)))
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
  // (if (bruijn ##.lookup.335 0 0) (basic-block 3 3 (##.%x.2046 ##.%x.2047 ##.%r.2048) ((##vcore.cdr (bruijn ##.lookup.335 1 0)) (##vcore.cons (bruijn ##.%x.2046 0 0) '()) (##vcore.cons '##pair (bruijn ##.%x.2047 0 1))) ((bruijn ##.%k.850 20 0) (bruijn ##.%r.2048 0 2))) ((bruijn ##.gensym.261 24 18) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k38) (##string ##.string.2981)))
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
      VEncodePointer(&_V10_Dstring_D2981.sym, VPOINTER_OTHER));
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
  // (basic-block 1 1 (##.%x.2045) ((##vcore.cons (bruijn ##.%x.882 3 0) (bruijn ##.%x.883 1 0))) ((bruijn ##.list.244 22 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k36) '##pair (bruijn ##.%x.2045 0 0)))
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
  // (basic-block 1 1 (##.%x.2044) ((##vcore.cdr (bruijn ##.x.331 15 1))) (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 16 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k35) (bruijn ##.%x.2044 0 0)))
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
  // (basic-block 2 2 (##.%x.2055 ##.%r.2056) ((##vcore.cons (bruijn ##.%x.890 1 0) '()) (##vcore.cons '##vector (bruijn ##.%x.2055 0 0))) ((bruijn ##.%k.850 18 0) (bruijn ##.%r.2056 0 1)))
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
  // (if (bruijn ##.lookup.337 0 0) (basic-block 3 3 (##.%x.2052 ##.%x.2053 ##.%r.2054) ((##vcore.cdr (bruijn ##.lookup.337 1 0)) (##vcore.cons (bruijn ##.%x.2052 0 0) '()) (##vcore.cons '##vector (bruijn ##.%x.2053 0 1))) ((bruijn ##.%k.850 16 0) (bruijn ##.%r.2054 0 2))) ((bruijn ##.gensym.261 20 18) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k43) (##string ##.string.2982)))
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
      VEncodePointer(&_V10_Dstring_D2982.sym, VPOINTER_OTHER));
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
  // (if (bruijn ##.%p.859 0 0) (##qualified-call (vanity compiler lower to-functions ##.lookup-literal.310) #f (bruijn ##.lookup-literal.310 10 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k23) (bruijn ##.x.331 9 1)) (basic-block 1 1 (##.%p.2034) ((##vcore.string? (bruijn ##.x.331 10 1))) (if (bruijn ##.%p.2034 0 0) (##qualified-call (vanity compiler lower to-functions ##.lookup-literal.310) #f (bruijn ##.lookup-literal.310 11 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k27) (bruijn ##.x.331 10 1)) (basic-block 1 1 (##.%p.2040) ((##vcore.symbol? (bruijn ##.x.331 11 1))) (if (bruijn ##.%p.2040 0 0) (##qualified-call (vanity compiler lower to-functions ##.lookup-literal.310) #f (bruijn ##.lookup-literal.310 12 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k31) (bruijn ##.x.331 11 1)) (basic-block 1 1 (##.%p.2042) ((##vcore.pair? (bruijn ##.x.331 12 1))) (if (bruijn ##.%p.2042 0 0) (basic-block 1 1 (##.%x.2043) ((##vcore.car (bruijn ##.x.331 13 1))) (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 14 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k34) (bruijn ##.%x.2043 0 0))) (basic-block 1 1 (##.%p.2051) ((##vcore.vector? (bruijn ##.x.331 13 1))) (if (bruijn ##.%p.2051 0 0) ((bruijn ##.vector-map.260 18 17) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k41) (bruijn ##.lift-literal.313 14 12) (bruijn ##.x.331 13 1)) ((bruijn ##.compiler-error.259 18 16) (bruijn ##.%k.850 13 0) (##string ##.string.2983) (bruijn ##.x.331 13 1)))))))))))
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
      VEncodePointer(&_V10_Dstring_D2983.sym, VPOINTER_OTHER),
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
  // (if (bruijn ##.%p.852 0 0) ((bruijn ##.%k.850 2 0) (bruijn ##.x.331 2 1)) (basic-block 1 1 (##.%p.2023) ((##vcore.void? (bruijn ##.x.331 3 1))) (if (bruijn ##.%p.2023 0 0) ((bruijn ##.%k.850 3 0) (bruijn ##.x.331 3 1)) (basic-block 1 1 (##.%p.2024) ((##vcore.foreign-pointer? (bruijn ##.x.331 4 1))) (if (bruijn ##.%p.2024 0 0) ((bruijn ##.%k.850 4 0) (bruijn ##.x.331 4 1)) (basic-block 1 1 (##.%p.2025) ((##vcore.char? (bruijn ##.x.331 5 1))) (if (bruijn ##.%p.2025 0 0) ((bruijn ##.%k.850 5 0) (bruijn ##.x.331 5 1)) (basic-block 1 1 (##.%p.2026) ((##vcore.eq? (bruijn ##.x.331 6 1) #t)) (if (bruijn ##.%p.2026 0 0) ((bruijn ##.%k.850 6 0) (bruijn ##.x.331 6 1)) (basic-block 1 1 (##.%p.2027) ((##vcore.eq? (bruijn ##.x.331 7 1) #f)) (if (bruijn ##.%p.2027 0 0) ((bruijn ##.%k.850 7 0) (bruijn ##.x.331 7 1)) (basic-block 1 1 (##.%p.2028) ((##vcore.null? (bruijn ##.x.331 8 1))) (if (bruijn ##.%p.2028 0 0) ((bruijn ##.%k.850 8 0) (bruijn ##.x.331 8 1)) ((bruijn ##.typevector?.263 13 20) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k22) (bruijn ##.x.331 8 1)))))))))))))))
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
  // (if (bruijn ##.lifting-literals?.299 3 2) (basic-block 1 1 (##.%p.2022) ((##vcore.int? (bruijn ##.x.331 1 1))) (if (bruijn ##.%p.2022 0 0) ((bruijn ##.%k.850 1 0) (bruijn ##.x.331 1 1)) ((bruijn ##.number?.264 6 21) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dlift__literal_D313_V0k21) (bruijn ##.x.331 1 1)))) ((bruijn ##.%k.850 0 0) (bruijn ##.x.331 0 1)))
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
  // (basic-block 2 2 (##.%x.2077 ##.%r.2078) ((##vcore.cons (bruijn ##.%x.914 1 0) '()) (##vcore.cons (bruijn ##.n.2071 4 0) (bruijn ##.%x.2077 0 0))) ((bruijn ##.%k.912 2 0) (bruijn ##.%r.2078 0 1)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 7 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k48) (bruijn ##.fun.338 6 1) (bruijn ##.body.2074 1 0))
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
  // (if (bruijn ##.%p.2057 1 0) (basic-block 3 3 (##.n.2071 ##.expr.115.2072 ##.%p.2073) ((##vcore.car (bruijn ##.lamb.339 4 2)) (##vcore.cdr (bruijn ##.lamb.339 4 2)) (##vcore.pair? (bruijn ##.expr.115.2072 0 1))) (if (bruijn ##.%p.2073 0 2) (basic-block 3 3 (##.body.2074 ##.%x.2075 ##.%p.2076) ((##vcore.car (bruijn ##.expr.115.2072 1 1)) (##vcore.cdr (bruijn ##.expr.115.2072 1 1)) (##vcore.null? (bruijn ##.%x.2075 0 1))) (if (bruijn ##.%p.2076 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k47) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda5) (bruijn ##.kk.112.340 4 1)) ((bruijn ##.%k.908 2 0) #f))) ((bruijn ##.%k.908 1 0) #f))) ((bruijn ##.%k.908 0 0) #f))
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
  // (basic-block 3 3 (##.%x.2068 ##.%x.2069 ##.%r.2070) ((##vcore.cons (bruijn ##.%x.904 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2068 0 0)) (##vcore.cons (bruijn ##.n.2059 7 0) (bruijn ##.%x.2069 0 1))) ((bruijn ##.%k.901 2 0) (bruijn ##.%r.2070 0 2)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 11 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k53) (bruijn ##.fun.338 10 1) (bruijn ##.body.2065 1 0))
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
  // (if (bruijn ##.%p.897 0 0) (basic-block 2 2 (##.expr.118.2063 ##.%p.2064) ((##vcore.cdr (bruijn ##.expr.117.2060 3 1)) (##vcore.pair? (bruijn ##.expr.118.2063 0 0))) (if (bruijn ##.%p.2064 0 1) (basic-block 3 3 (##.body.2065 ##.%x.2066 ##.%p.2067) ((##vcore.car (bruijn ##.expr.118.2063 1 0)) (##vcore.cdr (bruijn ##.expr.118.2063 1 0)) (##vcore.null? (bruijn ##.%x.2066 0 1))) (if (bruijn ##.%p.2067 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k52) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0lambda6) (bruijn ##.kk.112.340 8 1)) ((bruijn ##.%k.895 5 0) #f))) ((bruijn ##.%k.895 4 0) #f))) ((bruijn ##.%k.895 3 0) #f))
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
  // (if (bruijn ##.%p.2058 1 0) (basic-block 3 3 (##.n.2059 ##.expr.117.2060 ##.%p.2061) ((##vcore.car (bruijn ##.lamb.339 5 2)) (##vcore.cdr (bruijn ##.lamb.339 5 2)) (##vcore.pair? (bruijn ##.expr.117.2060 0 1))) (if (bruijn ##.%p.2061 0 2) (basic-block 1 1 (##.%x.2062) ((##vcore.car (bruijn ##.expr.117.2060 1 1))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k51) '+ (bruijn ##.%x.2062 0 0))) ((bruijn ##.%k.895 1 0) #f))) ((bruijn ##.%k.895 0 0) #f))
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
  // ((bruijn ##.error.258 8 15) (bruijn ##.%k.893 2 0) (##string ##.string.2984))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 15)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2984.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k49(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2058) ((##vcore.pair? (bruijn ##.lamb.339 3 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k50) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k54)))
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
  // (basic-block 1 1 (##.%p.2057) ((##vcore.pair? (bruijn ##.lamb.339 2 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k46) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__lambda_D314_V0k49)))
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
  // ((bruijn ##.%x.1159 0 0) (bruijn ##.%k.1157 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1160 0 0) (bruijn ##.expr.352 6 2))
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
  // (if (bruijn ##.%p.1158 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k57) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda8) (bruijn ##.kk.119.354 4 1)) ((bruijn ##.%k.1157 2 0) #f))
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
  // (if (bruijn ##.%p.2079 1 0) (basic-block 1 1 (##.%x.2318) ((##vcore.car (bruijn ##.expr.352 4 2))) ((bruijn ##.equal?.243 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k56) 'bruijn (bruijn ##.%x.2318 0 0))) ((bruijn ##.%k.1157 0 0) #f))
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
  // ((bruijn ##.%x.1142 0 0) (bruijn ##.%k.1136 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k65(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2316 ##.%r.2317) ((##vcore.cons (bruijn ##.lamb.364 4 0) '()) (##vcore.cons 'close (bruijn ##.%x.2316 0 0))) ((bruijn ##.%k.1143 5 0) (bruijn ##.%r.2317 0 1)))
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
  // (basic-block 7 7 (##.%x.2309 ##.%x.2310 ##.%x.2311 ##.%x.2312 ##.%x.2313 ##.%x.2314 ##.%x.2315) ((##vcore.cons (bruijn ##.%x.1153 1 0) '()) (##vcore.cons (bruijn ##.n.2303 6 0) (bruijn ##.%x.2309 0 0)) (##vcore.cons (bruijn ##.%x.2310 0 1) '()) (##vcore.cons (bruijn ##.%x.1149 2 0) (bruijn ##.%x.2311 0 2)) (##vcore.cons '#t (bruijn ##.%x.2312 0 3)) (##vcore.cons (bruijn ##.lamb.364 3 0) (bruijn ##.%x.2313 0 4)) (##vcore.cons (bruijn ##.%x.2314 0 5) (bruijn ##.functions.306 16 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k65) (bruijn ##.functions.306 16 5) (bruijn ##.%x.2315 0 6)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 14 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k64) (bruijn ##.fun.351 13 1) (bruijn ##.body.2306 3 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 13 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k63) (bruijn ##.debug-info.2300 4 0))
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
  // (if (bruijn ##.%p.1137 0 0) (basic-block 2 2 (##.expr.123.2298 ##.%p.2299) ((##vcore.cdr (bruijn ##.expr.352 7 2)) (##vcore.pair? (bruijn ##.expr.123.2298 0 0))) (if (bruijn ##.%p.2299 0 1) (basic-block 3 3 (##.debug-info.2300 ##.expr.124.2301 ##.%p.2302) ((##vcore.car (bruijn ##.expr.123.2298 1 0)) (##vcore.cdr (bruijn ##.expr.123.2298 1 0)) (##vcore.pair? (bruijn ##.expr.124.2301 0 1))) (if (bruijn ##.%p.2302 0 2) (basic-block 3 3 (##.n.2303 ##.expr.125.2304 ##.%p.2305) ((##vcore.car (bruijn ##.expr.124.2301 1 1)) (##vcore.cdr (bruijn ##.expr.124.2301 1 1)) (##vcore.pair? (bruijn ##.expr.125.2304 0 1))) (if (bruijn ##.%p.2305 0 2) (basic-block 3 3 (##.body.2306 ##.%x.2307 ##.%p.2308) ((##vcore.car (bruijn ##.expr.125.2304 1 1)) (##vcore.cdr (bruijn ##.expr.125.2304 1 1)) (##vcore.null? (bruijn ##.%x.2307 0 1))) (if (bruijn ##.%p.2308 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k61) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda9) (bruijn ##.kk.119.354 9 1)) ((bruijn ##.%k.1136 6 0) #f))) ((bruijn ##.%k.1136 5 0) #f))) ((bruijn ##.%k.1136 4 0) #f))) ((bruijn ##.%k.1136 3 0) #f))) ((bruijn ##.%k.1136 2 0) #f))
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
  // (if (bruijn ##.%p.2080 1 0) (basic-block 1 1 (##.%x.2297) ((##vcore.car (bruijn ##.expr.352 5 2))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k60) 'lambda (bruijn ##.%x.2297 0 0))) ((bruijn ##.%k.1136 0 0) #f))
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
  // ((bruijn ##.%x.1119 0 0) (bruijn ##.%k.1111 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2295 ##.%r.2296) ((##vcore.cons (bruijn ##.lamb.373 4 0) '()) (##vcore.cons 'close (bruijn ##.%x.2295 0 0))) ((bruijn ##.%k.1120 5 0) (bruijn ##.%r.2296 0 1)))
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
  // (basic-block 8 8 (##.%x.2287 ##.%x.2288 ##.%x.2289 ##.%x.2290 ##.%x.2291 ##.%x.2292 ##.%x.2293 ##.%x.2294) ((##vcore.cons (bruijn ##.%x.1131 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2287 0 0)) (##vcore.cons (bruijn ##.n.2278 9 0) (bruijn ##.%x.2288 0 1)) (##vcore.cons (bruijn ##.%x.2289 0 2) '()) (##vcore.cons (bruijn ##.%x.1126 2 0) (bruijn ##.%x.2290 0 3)) (##vcore.cons '#t (bruijn ##.%x.2291 0 4)) (##vcore.cons (bruijn ##.lamb.373 3 0) (bruijn ##.%x.2292 0 5)) (##vcore.cons (bruijn ##.%x.2293 0 6) (bruijn ##.functions.306 20 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k74) (bruijn ##.functions.306 20 5) (bruijn ##.%x.2294 0 7)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 18 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k73) (bruijn ##.fun.351 17 1) (bruijn ##.body.2284 3 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 17 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k72) (bruijn ##.debug-info.2275 7 0))
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
  // (if (bruijn ##.%p.1116 0 0) (basic-block 2 2 (##.expr.130.2282 ##.%p.2283) ((##vcore.cdr (bruijn ##.expr.129.2279 3 1)) (##vcore.pair? (bruijn ##.expr.130.2282 0 0))) (if (bruijn ##.%p.2283 0 1) (basic-block 3 3 (##.body.2284 ##.%x.2285 ##.%p.2286) ((##vcore.car (bruijn ##.expr.130.2282 1 0)) (##vcore.cdr (bruijn ##.expr.130.2282 1 0)) (##vcore.null? (bruijn ##.%x.2285 0 1))) (if (bruijn ##.%p.2286 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k70) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda10) (bruijn ##.kk.119.354 13 1)) ((bruijn ##.%k.1111 9 0) #f))) ((bruijn ##.%k.1111 8 0) #f))) ((bruijn ##.%k.1111 7 0) #f))
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
  // (if (bruijn ##.%p.1112 0 0) (basic-block 2 2 (##.expr.127.2273 ##.%p.2274) ((##vcore.cdr (bruijn ##.expr.352 8 2)) (##vcore.pair? (bruijn ##.expr.127.2273 0 0))) (if (bruijn ##.%p.2274 0 1) (basic-block 3 3 (##.debug-info.2275 ##.expr.128.2276 ##.%p.2277) ((##vcore.car (bruijn ##.expr.127.2273 1 0)) (##vcore.cdr (bruijn ##.expr.127.2273 1 0)) (##vcore.pair? (bruijn ##.expr.128.2276 0 1))) (if (bruijn ##.%p.2277 0 2) (basic-block 3 3 (##.n.2278 ##.expr.129.2279 ##.%p.2280) ((##vcore.car (bruijn ##.expr.128.2276 1 1)) (##vcore.cdr (bruijn ##.expr.128.2276 1 1)) (##vcore.pair? (bruijn ##.expr.129.2279 0 1))) (if (bruijn ##.%p.2280 0 2) (basic-block 1 1 (##.%x.2281) ((##vcore.car (bruijn ##.expr.129.2279 1 1))) ((bruijn ##.equal?.243 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k69) '+ (bruijn ##.%x.2281 0 0))) ((bruijn ##.%k.1111 5 0) #f))) ((bruijn ##.%k.1111 4 0) #f))) ((bruijn ##.%k.1111 3 0) #f))) ((bruijn ##.%k.1111 2 0) #f))
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
  // (if (bruijn ##.%p.2081 1 0) (basic-block 1 1 (##.%x.2272) ((##vcore.car (bruijn ##.expr.352 6 2))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k68) 'lambda (bruijn ##.%x.2272 0 0))) ((bruijn ##.%k.1111 0 0) #f))
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
  // ((bruijn ##.%x.1091 0 0) (bruijn ##.%k.1083 9 0))
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
  // (basic-block 3 3 (##.%x.2267 ##.%x.2268 ##.%r.2269) ((##vcore.cons (bruijn ##.%x.1095 1 0) '()) (##vcore.cons (bruijn ##.lamb.385 7 0) (bruijn ##.%x.2267 0 0)) (##vcore.cons 'close (bruijn ##.%x.2268 0 1))) ((bruijn ##.%k.1092 8 0) (bruijn ##.%r.2269 0 2)))
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
  // (if (bruijn ##.static?.2247 10 0) ((bruijn ##.drop-right.253 26 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k85) (bruijn ##.name.2244 11 0) 1) (basic-block 2 2 (##.%x.2270 ##.%r.2271) ((##vcore.cons (bruijn ##.lamb.385 6 0) '()) (##vcore.cons 'close (bruijn ##.%x.2270 0 0))) ((bruijn ##.%k.1092 7 0) (bruijn ##.%r.2271 0 1))))
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
  // (basic-block 7 7 (##.%x.2260 ##.%x.2261 ##.%x.2262 ##.%x.2263 ##.%x.2264 ##.%x.2265 ##.%x.2266) ((##vcore.cons (bruijn ##.%x.1105 1 0) '()) (##vcore.cons (bruijn ##.n.2253 8 0) (bruijn ##.%x.2260 0 0)) (##vcore.cons (bruijn ##.%x.2261 0 1) '()) (##vcore.cons (bruijn ##.%x.1101 2 0) (bruijn ##.%x.2262 0 2)) (##vcore.cons '#t (bruijn ##.%x.2263 0 3)) (##vcore.cons (bruijn ##.lamb.385 5 0) (bruijn ##.%x.2264 0 4)) (##vcore.cons (bruijn ##.%x.2265 0 5) (bruijn ##.functions.306 22 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k84) (bruijn ##.functions.306 22 5) (bruijn ##.%x.2266 0 6)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 20 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k83) (bruijn ##.lamb.385 3 0) (bruijn ##.body.2256 5 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 19 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k82) (bruijn ##.debug-info.2250 6 0))
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
  // (basic-block 1 1 (##.%x.2259) ((##vcore.cons (bruijn ##.%x.1107 1 0) (bruijn ##.qualified-functions.303 19 2))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k81) (bruijn ##.qualified-functions.303 19 2) (bruijn ##.%x.2259 0 0)))
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
  // ((bruijn ##.list.244 21 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k80) (bruijn ##.lamb.385 0 0) (bruijn ##.n.2253 3 0) #f)
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
  // ((bruijn ##.mangle-qualified-function.254 20 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k79) (bruijn ##.name.2244 5 0))
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
  // (if (bruijn ##.%p.1084 0 0) (basic-block 2 2 (##.expr.132.2242 ##.%p.2243) ((##vcore.cdr (bruijn ##.expr.352 9 2)) (##vcore.pair? (bruijn ##.expr.132.2242 0 0))) (if (bruijn ##.%p.2243 0 1) (basic-block 3 3 (##.name.2244 ##.expr.133.2245 ##.%p.2246) ((##vcore.car (bruijn ##.expr.132.2242 1 0)) (##vcore.cdr (bruijn ##.expr.132.2242 1 0)) (##vcore.pair? (bruijn ##.expr.133.2245 0 1))) (if (bruijn ##.%p.2246 0 2) (basic-block 3 3 (##.static?.2247 ##.expr.134.2248 ##.%p.2249) ((##vcore.car (bruijn ##.expr.133.2245 1 1)) (##vcore.cdr (bruijn ##.expr.133.2245 1 1)) (##vcore.pair? (bruijn ##.expr.134.2248 0 1))) (if (bruijn ##.%p.2249 0 2) (basic-block 3 3 (##.debug-info.2250 ##.expr.135.2251 ##.%p.2252) ((##vcore.car (bruijn ##.expr.134.2248 1 1)) (##vcore.cdr (bruijn ##.expr.134.2248 1 1)) (##vcore.pair? (bruijn ##.expr.135.2251 0 1))) (if (bruijn ##.%p.2252 0 2) (basic-block 3 3 (##.n.2253 ##.expr.136.2254 ##.%p.2255) ((##vcore.car (bruijn ##.expr.135.2251 1 1)) (##vcore.cdr (bruijn ##.expr.135.2251 1 1)) (##vcore.pair? (bruijn ##.expr.136.2254 0 1))) (if (bruijn ##.%p.2255 0 2) (basic-block 3 3 (##.body.2256 ##.%x.2257 ##.%p.2258) ((##vcore.car (bruijn ##.expr.136.2254 1 1)) (##vcore.cdr (bruijn ##.expr.136.2254 1 1)) (##vcore.null? (bruijn ##.%x.2257 0 1))) (if (bruijn ##.%p.2258 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k78) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda11) (bruijn ##.kk.119.354 13 1)) ((bruijn ##.%k.1083 8 0) #f))) ((bruijn ##.%k.1083 7 0) #f))) ((bruijn ##.%k.1083 6 0) #f))) ((bruijn ##.%k.1083 5 0) #f))) ((bruijn ##.%k.1083 4 0) #f))) ((bruijn ##.%k.1083 3 0) #f))) ((bruijn ##.%k.1083 2 0) #f))
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
  // (if (bruijn ##.%p.2082 1 0) (basic-block 1 1 (##.%x.2241) ((##vcore.car (bruijn ##.expr.352 7 2))) ((bruijn ##.equal?.243 12 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k77) '##qualified-lambda (bruijn ##.%x.2241 0 0))) ((bruijn ##.%k.1083 0 0) #f))
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
  // ((bruijn ##.%x.1061 0 0) (bruijn ##.%k.1051 12 0))
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
  // (basic-block 3 3 (##.%x.2236 ##.%x.2237 ##.%r.2238) ((##vcore.cons (bruijn ##.%x.1065 1 0) '()) (##vcore.cons (bruijn ##.lamb.398 7 0) (bruijn ##.%x.2236 0 0)) (##vcore.cons 'close (bruijn ##.%x.2237 0 1))) ((bruijn ##.%k.1062 8 0) (bruijn ##.%r.2238 0 2)))
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
  // (if (bruijn ##.static?.2212 13 0) ((bruijn ##.drop-right.253 30 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k97) (bruijn ##.name.2209 14 0) 1) (basic-block 2 2 (##.%x.2239 ##.%r.2240) ((##vcore.cons (bruijn ##.lamb.398 6 0) '()) (##vcore.cons 'close (bruijn ##.%x.2239 0 0))) ((bruijn ##.%k.1062 7 0) (bruijn ##.%r.2240 0 1))))
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
  // (basic-block 8 8 (##.%x.2228 ##.%x.2229 ##.%x.2230 ##.%x.2231 ##.%x.2232 ##.%x.2233 ##.%x.2234 ##.%x.2235) ((##vcore.cons (bruijn ##.%x.1076 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2228 0 0)) (##vcore.cons (bruijn ##.n.2218 11 0) (bruijn ##.%x.2229 0 1)) (##vcore.cons (bruijn ##.%x.2230 0 2) '()) (##vcore.cons (bruijn ##.%x.1071 2 0) (bruijn ##.%x.2231 0 3)) (##vcore.cons '#t (bruijn ##.%x.2232 0 4)) (##vcore.cons (bruijn ##.lamb.398 5 0) (bruijn ##.%x.2233 0 5)) (##vcore.cons (bruijn ##.%x.2234 0 6) (bruijn ##.functions.306 26 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k96) (bruijn ##.functions.306 26 5) (bruijn ##.%x.2235 0 7)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 24 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k95) (bruijn ##.lamb.398 3 0) (bruijn ##.body.2224 5 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 23 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k94) (bruijn ##.debug-info.2215 9 0))
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
  // (basic-block 1 1 (##.%x.2227) ((##vcore.cons (bruijn ##.%x.1078 1 0) (bruijn ##.qualified-functions.303 23 2))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k93) (bruijn ##.qualified-functions.303 23 2) (bruijn ##.%x.2227 0 0)))
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
  // ((bruijn ##.list.244 25 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k92) (bruijn ##.lamb.398 0 0) (bruijn ##.n.2218 6 0) #t)
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
  // ((bruijn ##.mangle-qualified-function.254 24 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k91) (bruijn ##.name.2209 8 0))
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
  // (if (bruijn ##.%p.1058 0 0) (basic-block 2 2 (##.expr.143.2222 ##.%p.2223) ((##vcore.cdr (bruijn ##.expr.142.2219 3 1)) (##vcore.pair? (bruijn ##.expr.143.2222 0 0))) (if (bruijn ##.%p.2223 0 1) (basic-block 3 3 (##.body.2224 ##.%x.2225 ##.%p.2226) ((##vcore.car (bruijn ##.expr.143.2222 1 0)) (##vcore.cdr (bruijn ##.expr.143.2222 1 0)) (##vcore.null? (bruijn ##.%x.2225 0 1))) (if (bruijn ##.%p.2226 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k90) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda12) (bruijn ##.kk.119.354 17 1)) ((bruijn ##.%k.1051 11 0) #f))) ((bruijn ##.%k.1051 10 0) #f))) ((bruijn ##.%k.1051 9 0) #f))
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
  // (if (bruijn ##.%p.1052 0 0) (basic-block 2 2 (##.expr.138.2207 ##.%p.2208) ((##vcore.cdr (bruijn ##.expr.352 10 2)) (##vcore.pair? (bruijn ##.expr.138.2207 0 0))) (if (bruijn ##.%p.2208 0 1) (basic-block 3 3 (##.name.2209 ##.expr.139.2210 ##.%p.2211) ((##vcore.car (bruijn ##.expr.138.2207 1 0)) (##vcore.cdr (bruijn ##.expr.138.2207 1 0)) (##vcore.pair? (bruijn ##.expr.139.2210 0 1))) (if (bruijn ##.%p.2211 0 2) (basic-block 3 3 (##.static?.2212 ##.expr.140.2213 ##.%p.2214) ((##vcore.car (bruijn ##.expr.139.2210 1 1)) (##vcore.cdr (bruijn ##.expr.139.2210 1 1)) (##vcore.pair? (bruijn ##.expr.140.2213 0 1))) (if (bruijn ##.%p.2214 0 2) (basic-block 3 3 (##.debug-info.2215 ##.expr.141.2216 ##.%p.2217) ((##vcore.car (bruijn ##.expr.140.2213 1 1)) (##vcore.cdr (bruijn ##.expr.140.2213 1 1)) (##vcore.pair? (bruijn ##.expr.141.2216 0 1))) (if (bruijn ##.%p.2217 0 2) (basic-block 3 3 (##.n.2218 ##.expr.142.2219 ##.%p.2220) ((##vcore.car (bruijn ##.expr.141.2216 1 1)) (##vcore.cdr (bruijn ##.expr.141.2216 1 1)) (##vcore.pair? (bruijn ##.expr.142.2219 0 1))) (if (bruijn ##.%p.2220 0 2) (basic-block 1 1 (##.%x.2221) ((##vcore.car (bruijn ##.expr.142.2219 1 1))) ((bruijn ##.equal?.243 20 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k89) '+ (bruijn ##.%x.2221 0 0))) ((bruijn ##.%k.1051 7 0) #f))) ((bruijn ##.%k.1051 6 0) #f))) ((bruijn ##.%k.1051 5 0) #f))) ((bruijn ##.%k.1051 4 0) #f))) ((bruijn ##.%k.1051 3 0) #f))) ((bruijn ##.%k.1051 2 0) #f))
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
  // (if (bruijn ##.%p.2083 1 0) (basic-block 1 1 (##.%x.2206) ((##vcore.car (bruijn ##.expr.352 8 2))) ((bruijn ##.equal?.243 13 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k88) '##qualified-lambda (bruijn ##.%x.2206 0 0))) ((bruijn ##.%k.1051 0 0) #f))
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
  // ((bruijn ##.%x.1039 0 0) (bruijn ##.%k.1036 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k105(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.2204 ##.%r.2205) ((##vcore.cons (bruijn ##.lamb.403 4 0) '()) (##vcore.cons 'close (bruijn ##.%x.2204 0 0))) ((bruijn ##.%k.1040 5 0) (bruijn ##.%r.2205 0 1)))
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
  // (basic-block 4 4 (##.%x.2200 ##.%x.2201 ##.%x.2202 ##.%x.2203) ((##vcore.cons (bruijn ##.%x.1046 2 0) (bruijn ##.%x.1047 1 0)) (##vcore.cons '#t (bruijn ##.%x.2200 0 0)) (##vcore.cons (bruijn ##.lamb.403 3 0) (bruijn ##.%x.2201 0 1)) (##vcore.cons (bruijn ##.%x.2202 0 2) (bruijn ##.functions.306 18 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k105) (bruijn ##.functions.306 18 5) (bruijn ##.%x.2203 0 3)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-lambda.314) #f (bruijn ##.iter-lambda.314 17 13) (bruijn ##.%k.1048 0 0) (bruijn ##.fun.351 16 1) (bruijn ##.e.404 0 1))
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
  // ((bruijn ##.map.245 20 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k104) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda14) (bruijn ##.cases.2199 3 1))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 15 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k103) (bruijn ##.debug-info.2198 2 0))
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
  // (if (bruijn ##.%p.1037 0 0) (basic-block 2 2 (##.expr.145.2196 ##.%p.2197) ((##vcore.cdr (bruijn ##.expr.352 11 2)) (##vcore.pair? (bruijn ##.expr.145.2196 0 0))) (if (bruijn ##.%p.2197 0 1) (basic-block 2 2 (##.debug-info.2198 ##.cases.2199) ((##vcore.car (bruijn ##.expr.145.2196 1 0)) (##vcore.cdr (bruijn ##.expr.145.2196 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k101) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda13) (bruijn ##.kk.119.354 11 1))) ((bruijn ##.%k.1036 3 0) #f))) ((bruijn ##.%k.1036 2 0) #f))
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
  // (if (bruijn ##.%p.2084 1 0) (basic-block 1 1 (##.%x.2195) ((##vcore.car (bruijn ##.expr.352 9 2))) ((bruijn ##.equal?.243 14 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k100) 'case-lambda (bruijn ##.%x.2195 0 0))) ((bruijn ##.%k.1036 0 0) #f))
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
  // (basic-block 3 3 (##.%x.2190 ##.%x.2191 ##.%r.2192) ((##vcore.cons (bruijn ##.%x.1022 1 0) '()) (##vcore.cons (bruijn ##.lamb.413 7 0) (bruijn ##.%x.2190 0 0)) (##vcore.cons 'close (bruijn ##.%x.2191 0 1))) ((bruijn ##.%k.1013 9 0) (bruijn ##.%r.2192 0 2)))
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
  // (if (bruijn ##.static?.2173 9 0) ((bruijn ##.drop-right.253 28 10) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k116) (bruijn ##.name.2170 10 0) 1) (basic-block 2 2 (##.%x.2193 ##.%r.2194) ((##vcore.cons (bruijn ##.lamb.413 6 0) '()) (##vcore.cons 'close (bruijn ##.%x.2193 0 0))) ((bruijn ##.%k.1013 8 0) (bruijn ##.%r.2194 0 1))))
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
  // (basic-block 4 4 (##.%x.2186 ##.%x.2187 ##.%x.2188 ##.%x.2189) ((##vcore.cons (bruijn ##.%x.1028 2 0) (bruijn ##.%x.1029 1 0)) (##vcore.cons '#t (bruijn ##.%x.2186 0 0)) (##vcore.cons (bruijn ##.lamb.413 5 0) (bruijn ##.%x.2187 0 1)) (##vcore.cons (bruijn ##.%x.2188 0 2) (bruijn ##.functions.306 24 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k115) (bruijn ##.functions.306 24 5) (bruijn ##.%x.2189 0 3)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-lambda.314) #f (bruijn ##.iter-lambda.314 23 13) (bruijn ##.%k.1030 0 0) (bruijn ##.fun.351 22 1) (bruijn ##.e.414 0 1))
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
  // ((bruijn ##.map.245 26 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k114) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda16) (bruijn ##.cases.2177 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k114, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda16, self)))),
      VGetArg(statics, 6-1, 1));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k112(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 21 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k113) (bruijn ##.debug-info.2176 5 0))
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
  // (basic-block 1 1 (##.%x.2185) ((##vcore.cons (bruijn ##.%x.1032 1 0) (bruijn ##.qualified-functions.303 21 2))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k112) (bruijn ##.qualified-functions.303 21 2) (bruijn ##.%x.2185 0 0)))
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
  // (basic-block 2 2 (##.%x.2178 ##.%p.2179) ((##vcore.cdr (bruijn ##.cases.2177 2 1)) (##vcore.null? (bruijn ##.%x.2178 0 0))) (if (bruijn ##.%p.2179 0 1) (basic-block 5 5 (##.%x.2180 ##.%x.2181 ##.%x.2182 ##.%x.2183 ##.%x.2184) ((##vcore.car (bruijn ##.cases.2177 3 1)) (##vcore.cons (bruijn ##.debug-info.2176 3 0) (bruijn ##.%x.2180 0 0)) (##vcore.cons (bruijn ##.static?.2173 4 0) (bruijn ##.%x.2181 0 1)) (##vcore.cons (bruijn ##.name.2170 5 0) (bruijn ##.%x.2182 0 2)) (##vcore.cons '##qualified-lambda (bruijn ##.%x.2183 0 3))) (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 19 14) (bruijn ##.%k.1013 2 0) (bruijn ##.fun.351 18 1) (bruijn ##.%x.2184 0 4) (bruijn ##.func-position?.353 18 3))) ((bruijn ##.mangle-qualified-function.254 22 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k110) (bruijn ##.name.2170 4 0))))
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
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V10qualified__lambda,
      self->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 14));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      self->vars[4];
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
  // (if (bruijn ##.%p.1008 0 0) (basic-block 2 2 (##.expr.147.2168 ##.%p.2169) ((##vcore.cdr (bruijn ##.expr.352 12 2)) (##vcore.pair? (bruijn ##.expr.147.2168 0 0))) (if (bruijn ##.%p.2169 0 1) (basic-block 3 3 (##.name.2170 ##.expr.148.2171 ##.%p.2172) ((##vcore.car (bruijn ##.expr.147.2168 1 0)) (##vcore.cdr (bruijn ##.expr.147.2168 1 0)) (##vcore.pair? (bruijn ##.expr.148.2171 0 1))) (if (bruijn ##.%p.2172 0 2) (basic-block 3 3 (##.static?.2173 ##.expr.149.2174 ##.%p.2175) ((##vcore.car (bruijn ##.expr.148.2171 1 1)) (##vcore.cdr (bruijn ##.expr.148.2171 1 1)) (##vcore.pair? (bruijn ##.expr.149.2174 0 1))) (if (bruijn ##.%p.2175 0 2) (basic-block 2 2 (##.debug-info.2176 ##.cases.2177) ((##vcore.car (bruijn ##.expr.149.2174 1 1)) (##vcore.cdr (bruijn ##.expr.149.2174 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k109) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda15) (bruijn ##.kk.119.354 14 1))) ((bruijn ##.%k.1007 5 0) #f))) ((bruijn ##.%k.1007 4 0) #f))) ((bruijn ##.%k.1007 3 0) #f))) ((bruijn ##.%k.1007 2 0) #f))
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
  // (if (bruijn ##.%p.2085 1 0) (basic-block 1 1 (##.%x.2167) ((##vcore.car (bruijn ##.expr.352 10 2))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k108) '##qualified-case-lambda (bruijn ##.%x.2167 0 0))) ((bruijn ##.%k.1007 0 0) #f))
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
  // (basic-block 2 2 (##.%x.2165 ##.%r.2166) ((##vcore.cons (bruijn ##.k.422 4 0) '()) (##vcore.cons 'close (bruijn ##.%x.2165 0 0))) ((bruijn ##.%k.993 5 0) (bruijn ##.%r.2166 0 1)))
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
  // (basic-block 7 7 (##.%x.2158 ##.%x.2159 ##.%x.2160 ##.%x.2161 ##.%x.2162 ##.%x.2163 ##.%x.2164) ((##vcore.cons (bruijn ##.%x.1003 1 0) '()) (##vcore.cons (bruijn ##.n.2152 6 0) (bruijn ##.%x.2158 0 0)) (##vcore.cons (bruijn ##.%x.2159 0 1) '()) (##vcore.cons (bruijn ##.%x.999 2 0) (bruijn ##.%x.2160 0 2)) (##vcore.cons '#t (bruijn ##.%x.2161 0 3)) (##vcore.cons (bruijn ##.k.422 3 0) (bruijn ##.%x.2162 0 4)) (##vcore.cons (bruijn ##.%x.2163 0 5) (bruijn ##.functions.306 22 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k124) (bruijn ##.functions.306 22 5) (bruijn ##.%x.2164 0 6)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 20 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k123) (bruijn ##.fun.351 19 1) (bruijn ##.body.2155 3 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 19 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k122) (bruijn ##.debug-info.2149 4 0))
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
  // (if (bruijn ##.%p.987 0 0) (basic-block 2 2 (##.expr.151.2147 ##.%p.2148) ((##vcore.cdr (bruijn ##.expr.352 13 2)) (##vcore.pair? (bruijn ##.expr.151.2147 0 0))) (if (bruijn ##.%p.2148 0 1) (basic-block 3 3 (##.debug-info.2149 ##.expr.152.2150 ##.%p.2151) ((##vcore.car (bruijn ##.expr.151.2147 1 0)) (##vcore.cdr (bruijn ##.expr.151.2147 1 0)) (##vcore.pair? (bruijn ##.expr.152.2150 0 1))) (if (bruijn ##.%p.2151 0 2) (basic-block 3 3 (##.n.2152 ##.expr.153.2153 ##.%p.2154) ((##vcore.car (bruijn ##.expr.152.2150 1 1)) (##vcore.cdr (bruijn ##.expr.152.2150 1 1)) (##vcore.pair? (bruijn ##.expr.153.2153 0 1))) (if (bruijn ##.%p.2154 0 2) (basic-block 3 3 (##.body.2155 ##.%x.2156 ##.%p.2157) ((##vcore.car (bruijn ##.expr.153.2153 1 1)) (##vcore.cdr (bruijn ##.expr.153.2153 1 1)) (##vcore.null? (bruijn ##.%x.2156 0 1))) (if (bruijn ##.%p.2157 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k120) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda17) (bruijn ##.kk.119.354 15 1)) ((bruijn ##.%k.986 6 0) #f))) ((bruijn ##.%k.986 5 0) #f))) ((bruijn ##.%k.986 4 0) #f))) ((bruijn ##.%k.986 3 0) #f))) ((bruijn ##.%k.986 2 0) #f))
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
  // (if (bruijn ##.%p.2086 1 0) (basic-block 1 1 (##.%x.2146) ((##vcore.car (bruijn ##.expr.352 11 2))) ((bruijn ##.equal?.243 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k119) 'continuation (bruijn ##.%x.2146 0 0))) ((bruijn ##.%k.986 0 0) #f))
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
  // (if (bruijn ##.%p.2141 1 0) (basic-block 2 2 (##.%x.2144 ##.%x.2145) ((##vcore.cons (bruijn ##.mangled.433 4 0) (bruijn ##.expr.352 24 2)) (##vcore.cons (bruijn ##.%x.2144 0 0) (bruijn ##.foreign-functions.304 25 3))) (set! (bruijn ##.%k.980 1 0) (bruijn ##.foreign-functions.304 25 3) (bruijn ##.%x.2145 0 1))) ((bruijn ##.%k.980 0 0) #f))
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
  // (basic-block 2 2 (##.%x.2142 ##.%r.2143) ((##vcore.cons (bruijn ##.mangled.433 3 0) '()) (##vcore.cons '##foreign.function (bruijn ##.%x.2142 0 0))) ((bruijn ##.%k.977 4 0) (bruijn ##.%r.2143 0 1)))
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
  // (basic-block 1 1 (##.%p.2141) ((##vcore.not (bruijn ##.%x.983 1 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k131) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k132)))
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
  // ((bruijn ##.mangle-foreign.255 24 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k129) (bruijn ##.name.2139 1 0))
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
  // (if (bruijn ##.%p.971 0 0) (basic-block 2 2 (##.expr.155.2128 ##.%p.2129) ((##vcore.cdr (bruijn ##.expr.352 14 2)) (##vcore.pair? (bruijn ##.expr.155.2128 0 0))) (if (bruijn ##.%p.2129 0 1) (basic-block 3 3 (##.lang.2130 ##.expr.156.2131 ##.%p.2132) ((##vcore.car (bruijn ##.expr.155.2128 1 0)) (##vcore.cdr (bruijn ##.expr.155.2128 1 0)) (##vcore.pair? (bruijn ##.expr.156.2131 0 1))) (if (bruijn ##.%p.2132 0 2) (basic-block 3 3 (##.decl.2133 ##.expr.157.2134 ##.%p.2135) ((##vcore.car (bruijn ##.expr.156.2131 1 1)) (##vcore.cdr (bruijn ##.expr.156.2131 1 1)) (##vcore.pair? (bruijn ##.expr.157.2134 0 1))) (if (bruijn ##.%p.2135 0 2) (basic-block 3 3 (##.ret.2136 ##.expr.158.2137 ##.%p.2138) ((##vcore.car (bruijn ##.expr.157.2134 1 1)) (##vcore.cdr (bruijn ##.expr.157.2134 1 1)) (##vcore.pair? (bruijn ##.expr.158.2137 0 1))) (if (bruijn ##.%p.2138 0 2) (basic-block 2 2 (##.name.2139 ##.args.2140) ((##vcore.car (bruijn ##.expr.158.2137 1 1)) (##vcore.cdr (bruijn ##.expr.158.2137 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k128) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda18) (bruijn ##.kk.119.354 17 1))) ((bruijn ##.%k.970 6 0) #f))) ((bruijn ##.%k.970 5 0) #f))) ((bruijn ##.%k.970 4 0) #f))) ((bruijn ##.%k.970 3 0) #f))) ((bruijn ##.%k.970 2 0) #f))
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
  // (if (bruijn ##.%p.2087 1 0) (basic-block 1 1 (##.%x.2127) ((##vcore.car (bruijn ##.expr.352 12 2))) ((bruijn ##.equal?.243 17 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k127) '##foreign.function (bruijn ##.%x.2127 0 0))) ((bruijn ##.%k.970 0 0) #f))
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
  // (if (bruijn ##.%p.2122 1 0) (basic-block 2 2 (##.%x.2125 ##.%x.2126) ((##vcore.cons (bruijn ##.name.2121 5 0) (bruijn ##.expr.352 21 2)) (##vcore.cons (bruijn ##.%x.2125 0 0) (bruijn ##.intrinsics.305 22 4))) (set! (bruijn ##.%k.964 1 0) (bruijn ##.intrinsics.305 22 4) (bruijn ##.%x.2126 0 1))) ((bruijn ##.%k.964 0 0) #f))
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
  // (basic-block 2 2 (##.%x.2123 ##.%r.2124) ((##vcore.cons (bruijn ##.name.2121 4 0) '()) (##vcore.cons '##intrinsic (bruijn ##.%x.2123 0 0))) ((bruijn ##.%k.961 3 0) (bruijn ##.%r.2124 0 1)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.312) #f (bruijn ##.lift-intrinsic!.312 20 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k140) (bruijn ##.name.2121 3 0) (bruijn ##.name.2121 3 0))
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
  // (basic-block 1 1 (##.%p.2122) ((##vcore.not (bruijn ##.%x.967 1 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k138) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k139)))
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
  // ((bruijn ##.assoc.256 22 13) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k137) (bruijn ##.name.2121 1 0) (bruijn ##.intrinsics.305 18 4))
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
  // (if (bruijn ##.%p.958 0 0) (basic-block 2 2 (##.expr.160.2119 ##.%p.2120) ((##vcore.cdr (bruijn ##.expr.352 15 2)) (##vcore.pair? (bruijn ##.expr.160.2119 0 0))) (if (bruijn ##.%p.2120 0 1) (basic-block 1 1 (##.name.2121) ((##vcore.car (bruijn ##.expr.160.2119 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k136) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda19) (bruijn ##.kk.119.354 15 1))) ((bruijn ##.%k.957 3 0) #f))) ((bruijn ##.%k.957 2 0) #f))
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
  // (if (bruijn ##.%p.2088 1 0) (basic-block 1 1 (##.%x.2118) ((##vcore.car (bruijn ##.expr.352 13 2))) ((bruijn ##.equal?.243 18 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k135) '##intrinsic (bruijn ##.%x.2118 0 0))) ((bruijn ##.%k.957 0 0) #f))
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
  // (if (bruijn ##.%p.2113 1 0) (basic-block 2 2 (##.%x.2116 ##.%x.2117) ((##vcore.cons (bruijn ##.name.2112 5 0) (bruijn ##.expr.352 22 2)) (##vcore.cons (bruijn ##.%x.2116 0 0) (bruijn ##.intrinsics.305 23 4))) (set! (bruijn ##.%k.951 1 0) (bruijn ##.intrinsics.305 23 4) (bruijn ##.%x.2117 0 1))) ((bruijn ##.%k.951 0 0) #f))
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
  // (basic-block 2 2 (##.%x.2114 ##.%r.2115) ((##vcore.cons (bruijn ##.name.2112 4 0) '()) (##vcore.cons '##basic-intrinsic (bruijn ##.%x.2114 0 0))) ((bruijn ##.%k.948 3 0) (bruijn ##.%r.2115 0 1)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.312) #f (bruijn ##.lift-intrinsic!.312 21 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k148) (bruijn ##.name.2112 3 0) (bruijn ##.name.2112 3 0))
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
  // (basic-block 1 1 (##.%p.2113) ((##vcore.not (bruijn ##.%x.954 1 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k146) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k147)))
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
  // ((bruijn ##.assoc.256 23 13) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k145) (bruijn ##.name.2112 1 0) (bruijn ##.intrinsics.305 19 4))
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
  // (if (bruijn ##.%p.945 0 0) (basic-block 2 2 (##.expr.162.2110 ##.%p.2111) ((##vcore.cdr (bruijn ##.expr.352 16 2)) (##vcore.pair? (bruijn ##.expr.162.2110 0 0))) (if (bruijn ##.%p.2111 0 1) (basic-block 1 1 (##.name.2112) ((##vcore.car (bruijn ##.expr.162.2110 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k144) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda20) (bruijn ##.kk.119.354 16 1))) ((bruijn ##.%k.944 3 0) #f))) ((bruijn ##.%k.944 2 0) #f))
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
  // (if (bruijn ##.%p.2089 1 0) (basic-block 1 1 (##.%x.2109) ((##vcore.car (bruijn ##.expr.352 14 2))) ((bruijn ##.equal?.243 19 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k143) '##basic-intrinsic (bruijn ##.%x.2109 0 0))) ((bruijn ##.%k.944 0 0) #f))
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
  // (basic-block 2 2 (##.%x.2107 ##.%r.2108) ((##vcore.cons (bruijn ##.%x.940 1 0) '()) (##vcore.cons 'quote (bruijn ##.%x.2107 0 0))) ((bruijn ##.%k.938 2 0) (bruijn ##.%r.2108 0 1)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 20 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k153) (bruijn ##.x.2104 1 0))
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
  // (if (bruijn ##.%p.934 0 0) (basic-block 2 2 (##.expr.164.2102 ##.%p.2103) ((##vcore.cdr (bruijn ##.expr.352 17 2)) (##vcore.pair? (bruijn ##.expr.164.2102 0 0))) (if (bruijn ##.%p.2103 0 1) (basic-block 3 3 (##.x.2104 ##.%x.2105 ##.%p.2106) ((##vcore.car (bruijn ##.expr.164.2102 1 0)) (##vcore.cdr (bruijn ##.expr.164.2102 1 0)) (##vcore.null? (bruijn ##.%x.2105 0 1))) (if (bruijn ##.%p.2106 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k152) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda21) (bruijn ##.kk.119.354 17 1)) ((bruijn ##.%k.933 4 0) #f))) ((bruijn ##.%k.933 3 0) #f))) ((bruijn ##.%k.933 2 0) #f))
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
  // (if (bruijn ##.%p.2090 1 0) (basic-block 1 1 (##.%x.2101) ((##vcore.car (bruijn ##.expr.352 15 2))) ((bruijn ##.equal?.243 20 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k151) 'quote (bruijn ##.%x.2101 0 0))) ((bruijn ##.%k.933 0 0) #f))
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
  // (basic-block 2 2 (##.%x.2099 ##.%r.2100) ((##vcore.cons (bruijn ##.f.2097 3 0) (bruijn ##.%x.929 1 0)) (##vcore.cons '##inline (bruijn ##.%x.2099 0 0))) ((bruijn ##.%k.927 2 0) (bruijn ##.%r.2100 0 1)))
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
  // ((bruijn ##.map.245 25 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k158) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda23) (bruijn ##.xs.2098 1 1))
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
  // (if (bruijn ##.%p.924 0 0) (basic-block 2 2 (##.expr.166.2095 ##.%p.2096) ((##vcore.cdr (bruijn ##.expr.352 18 2)) (##vcore.pair? (bruijn ##.expr.166.2095 0 0))) (if (bruijn ##.%p.2096 0 1) (basic-block 2 2 (##.f.2097 ##.xs.2098) ((##vcore.car (bruijn ##.expr.166.2095 1 0)) (##vcore.cdr (bruijn ##.expr.166.2095 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k157) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0lambda22) (bruijn ##.kk.119.354 18 1))) ((bruijn ##.%k.923 3 0) #f))) ((bruijn ##.%k.923 2 0) #f))
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
  // (if (bruijn ##.%p.2091 1 0) (basic-block 1 1 (##.%x.2094) ((##vcore.car (bruijn ##.expr.352 16 2))) ((bruijn ##.equal?.243 21 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k156) '##inline (bruijn ##.%x.2094 0 0))) ((bruijn ##.%k.923 0 0) #f))
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
  // ((bruijn ##.error.258 20 15) (bruijn ##.%k.917 14 0) (##string ##.string.2984))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 15)), 2,
      VGetArg(statics, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D2984.sym, VPOINTER_OTHER));
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
  // (basic-block 1 1 (##.%p.2093) ((##vcore.not (bruijn ##.intrin.449 1 0))) (if (bruijn ##.%p.2093 0 0) ((bruijn ##.%k.919 3 0) (bruijn ##.expr.352 18 2)) (##qualified-call (vanity compiler lower to-functions ##.lift-intrinsic!.312) #f (bruijn ##.lift-intrinsic!.312 19 11) (bruijn ##.%k.919 3 0) (bruijn ##.expr.352 18 2) (bruijn ##.intrin.449 1 0))))
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
  // (basic-block 1 1 (##.%p.2092) ((##vcore.symbol? (bruijn ##.expr.352 16 2))) (if (bruijn ##.%p.2092 0 0) (if (bruijn ##.func-position?.353 16 3) ((bruijn ##.%k.919 1 0) (bruijn ##.expr.352 16 2)) ((bruijn ##.lookup-intrinsic-name.257 21 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k162) (bruijn ##.expr.352 16 2))) (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 17 12) (bruijn ##.%k.919 1 0) (bruijn ##.expr.352 16 2))))
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
  // (basic-block 1 1 (##.%p.2091) ((##vcore.pair? (bruijn ##.expr.352 14 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k155) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k159)))
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
  // (basic-block 1 1 (##.%p.2090) ((##vcore.pair? (bruijn ##.expr.352 13 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k150) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k154)))
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
  // (basic-block 1 1 (##.%p.2089) ((##vcore.pair? (bruijn ##.expr.352 12 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k142) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k149)))
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
  // (basic-block 1 1 (##.%p.2088) ((##vcore.pair? (bruijn ##.expr.352 11 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k134) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k141)))
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
  // (basic-block 1 1 (##.%p.2087) ((##vcore.pair? (bruijn ##.expr.352 10 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k126) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k133)))
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
  // (basic-block 1 1 (##.%p.2086) ((##vcore.pair? (bruijn ##.expr.352 9 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k118) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k125)))
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
  // (basic-block 1 1 (##.%p.2085) ((##vcore.pair? (bruijn ##.expr.352 8 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k107) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k117)))
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
  // (basic-block 1 1 (##.%p.2084) ((##vcore.pair? (bruijn ##.expr.352 7 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k99) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k106)))
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
  // (basic-block 1 1 (##.%p.2083) ((##vcore.pair? (bruijn ##.expr.352 6 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k87) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k98)))
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
  // (basic-block 1 1 (##.%p.2082) ((##vcore.pair? (bruijn ##.expr.352 5 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k76) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k86)))
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
  // (basic-block 1 1 (##.%p.2081) ((##vcore.pair? (bruijn ##.expr.352 4 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k67) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k75)))
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
  // (basic-block 1 1 (##.%p.2080) ((##vcore.pair? (bruijn ##.expr.352 3 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k59) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k66)))
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
  // (basic-block 1 1 (##.%p.2079) ((##vcore.pair? (bruijn ##.expr.352 2 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k55) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__atom_D315_V0k58)))
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
  // ((bruijn ##.%x.1386 0 0) (bruijn ##.%k.1380 7 0))
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
  // (basic-block 4 4 (##.%x.2549 ##.%x.2550 ##.%x.2551 ##.%r.2552) ((##vcore.cons (bruijn ##.%x.1392 1 0) '()) (##vcore.cons (bruijn ##.%x.1390 3 0) (bruijn ##.%x.2549 0 0)) (##vcore.cons (bruijn ##.k.2540 7 0) (bruijn ##.%x.2550 0 1)) (##vcore.cons 'define (bruijn ##.%x.2551 0 2))) ((bruijn ##.%k.1387 4 0) (bruijn ##.%r.2552 0 3)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 13 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k168) (bruijn ##.%x.1393 0 0) (bruijn ##.x.2546 3 0) #f)
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
  // ((bruijn ##.mangle-symbol.251 16 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k167) (bruijn ##.y.2543 3 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 11 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k166) (bruijn ##.y.2543 2 0))
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
  // (if (bruijn ##.%p.1381 0 0) (basic-block 2 2 (##.expr.170.2538 ##.%p.2539) ((##vcore.cdr (bruijn ##.expr.451 6 2)) (##vcore.pair? (bruijn ##.expr.170.2538 0 0))) (if (bruijn ##.%p.2539 0 1) (basic-block 3 3 (##.k.2540 ##.expr.171.2541 ##.%p.2542) ((##vcore.car (bruijn ##.expr.170.2538 1 0)) (##vcore.cdr (bruijn ##.expr.170.2538 1 0)) (##vcore.pair? (bruijn ##.expr.171.2541 0 1))) (if (bruijn ##.%p.2542 0 2) (basic-block 3 3 (##.y.2543 ##.expr.172.2544 ##.%p.2545) ((##vcore.car (bruijn ##.expr.171.2541 1 1)) (##vcore.cdr (bruijn ##.expr.171.2541 1 1)) (##vcore.pair? (bruijn ##.expr.172.2544 0 1))) (if (bruijn ##.%p.2545 0 2) (basic-block 3 3 (##.x.2546 ##.%x.2547 ##.%p.2548) ((##vcore.car (bruijn ##.expr.172.2544 1 1)) (##vcore.cdr (bruijn ##.expr.172.2544 1 1)) (##vcore.null? (bruijn ##.%x.2547 0 1))) (if (bruijn ##.%p.2548 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k165) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda26) (bruijn ##.kk.167.452 8 1)) ((bruijn ##.%k.1380 6 0) #f))) ((bruijn ##.%k.1380 5 0) #f))) ((bruijn ##.%k.1380 4 0) #f))) ((bruijn ##.%k.1380 3 0) #f))) ((bruijn ##.%k.1380 2 0) #f))
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
  // (if (bruijn ##.%p.2319 1 0) (basic-block 1 1 (##.%x.2537) ((##vcore.car (bruijn ##.expr.451 4 2))) ((bruijn ##.equal?.243 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k164) 'define (bruijn ##.%x.2537 0 0))) ((bruijn ##.%k.1380 0 0) #f))
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
  // ((bruijn ##.%x.1366 0 0) (bruijn ##.%k.1357 11 0))
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
  // (basic-block 4 4 (##.%x.2533 ##.%x.2534 ##.%x.2535 ##.%r.2536) ((##vcore.cons (bruijn ##.%x.1373 1 0) '()) (##vcore.cons (bruijn ##.%x.2532 3 1) (bruijn ##.%x.2533 0 0)) (##vcore.cons (bruijn ##.%x.1369 4 0) (bruijn ##.%x.2534 0 1)) (##vcore.cons 'set! (bruijn ##.%x.2535 0 2))) ((bruijn ##.%k.1367 5 0) (bruijn ##.%r.2536 0 3)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 19 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k176) (bruijn ##.%x.1374 0 0) (bruijn ##.x.2528 4 0) #f)
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
  // (basic-block 2 2 (##.%x.2531 ##.%x.2532) ((##vcore.cons (bruijn ##.name.2524 4 0) (bruijn ##.rest.2525 4 1)) (##vcore.cons 'bruijn (bruijn ##.%x.2531 0 0))) ((bruijn ##.mangle-symbol.251 22 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k175) (bruijn ##.name.2524 4 0)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 16 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k174) (bruijn ##.fun.450 15 1) (bruijn ##.k.2516 7 0) #f)
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
  // (if (bruijn ##.%p.1362 0 0) (basic-block 2 2 (##.expr.177.2522 ##.%p.2523) ((##vcore.cdr (bruijn ##.expr.176.2519 3 0)) (##vcore.pair? (bruijn ##.expr.177.2522 0 0))) (if (bruijn ##.%p.2523 0 1) (basic-block 4 4 (##.name.2524 ##.rest.2525 ##.expr.178.2526 ##.%p.2527) ((##vcore.car (bruijn ##.expr.177.2522 1 0)) (##vcore.cdr (bruijn ##.expr.177.2522 1 0)) (##vcore.cdr (bruijn ##.expr.175.2517 5 1)) (##vcore.pair? (bruijn ##.expr.178.2526 0 2))) (if (bruijn ##.%p.2527 0 3) (basic-block 3 3 (##.x.2528 ##.%x.2529 ##.%p.2530) ((##vcore.car (bruijn ##.expr.178.2526 1 2)) (##vcore.cdr (bruijn ##.expr.178.2526 1 2)) (##vcore.null? (bruijn ##.%x.2529 0 1))) (if (bruijn ##.%p.2530 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k173) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda27) (bruijn ##.kk.167.452 13 1)) ((bruijn ##.%k.1357 10 0) #f))) ((bruijn ##.%k.1357 9 0) #f))) ((bruijn ##.%k.1357 8 0) #f))) ((bruijn ##.%k.1357 7 0) #f))
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
  // (if (bruijn ##.%p.1358 0 0) (basic-block 2 2 (##.expr.174.2514 ##.%p.2515) ((##vcore.cdr (bruijn ##.expr.451 7 2)) (##vcore.pair? (bruijn ##.expr.174.2514 0 0))) (if (bruijn ##.%p.2515 0 1) (basic-block 3 3 (##.k.2516 ##.expr.175.2517 ##.%p.2518) ((##vcore.car (bruijn ##.expr.174.2514 1 0)) (##vcore.cdr (bruijn ##.expr.174.2514 1 0)) (##vcore.pair? (bruijn ##.expr.175.2517 0 1))) (if (bruijn ##.%p.2518 0 2) (basic-block 2 2 (##.expr.176.2519 ##.%p.2520) ((##vcore.car (bruijn ##.expr.175.2517 1 1)) (##vcore.pair? (bruijn ##.expr.176.2519 0 0))) (if (bruijn ##.%p.2520 0 1) (basic-block 1 1 (##.%x.2521) ((##vcore.car (bruijn ##.expr.176.2519 1 0))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k172) 'bruijn (bruijn ##.%x.2521 0 0))) ((bruijn ##.%k.1357 5 0) #f))) ((bruijn ##.%k.1357 4 0) #f))) ((bruijn ##.%k.1357 3 0) #f))) ((bruijn ##.%k.1357 2 0) #f))
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
  // (if (bruijn ##.%p.2320 1 0) (basic-block 1 1 (##.%x.2513) ((##vcore.car (bruijn ##.expr.451 5 2))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k171) 'set! (bruijn ##.%x.2513 0 0))) ((bruijn ##.%k.1357 0 0) #f))
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
  // ((bruijn ##.%x.1345 0 0) (bruijn ##.%k.1339 7 0))
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
  // (basic-block 4 4 (##.%x.2509 ##.%x.2510 ##.%x.2511 ##.%r.2512) ((##vcore.cons (bruijn ##.%x.1352 1 0) '()) (##vcore.cons (bruijn ##.%x.1350 3 0) (bruijn ##.%x.2509 0 0)) (##vcore.cons (bruijn ##.%x.1348 4 0) (bruijn ##.%x.2510 0 1)) (##vcore.cons 'set! (bruijn ##.%x.2511 0 2))) ((bruijn ##.%k.1346 5 0) (bruijn ##.%r.2512 0 3)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 16 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k184) (bruijn ##.%x.1353 0 0) (bruijn ##.x.2506 4 0) #f)
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
  // ((bruijn ##.mangle-symbol.251 19 8) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k183) (bruijn ##.y.2503 4 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 14 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k182) (bruijn ##.y.2503 3 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 13 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k181) (bruijn ##.fun.450 12 1) (bruijn ##.k.2500 3 0) #f)
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
  // (if (bruijn ##.%p.1340 0 0) (basic-block 2 2 (##.expr.180.2498 ##.%p.2499) ((##vcore.cdr (bruijn ##.expr.451 8 2)) (##vcore.pair? (bruijn ##.expr.180.2498 0 0))) (if (bruijn ##.%p.2499 0 1) (basic-block 3 3 (##.k.2500 ##.expr.181.2501 ##.%p.2502) ((##vcore.car (bruijn ##.expr.180.2498 1 0)) (##vcore.cdr (bruijn ##.expr.180.2498 1 0)) (##vcore.pair? (bruijn ##.expr.181.2501 0 1))) (if (bruijn ##.%p.2502 0 2) (basic-block 3 3 (##.y.2503 ##.expr.182.2504 ##.%p.2505) ((##vcore.car (bruijn ##.expr.181.2501 1 1)) (##vcore.cdr (bruijn ##.expr.181.2501 1 1)) (##vcore.pair? (bruijn ##.expr.182.2504 0 1))) (if (bruijn ##.%p.2505 0 2) (basic-block 3 3 (##.x.2506 ##.%x.2507 ##.%p.2508) ((##vcore.car (bruijn ##.expr.182.2504 1 1)) (##vcore.cdr (bruijn ##.expr.182.2504 1 1)) (##vcore.null? (bruijn ##.%x.2507 0 1))) (if (bruijn ##.%p.2508 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k180) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda28) (bruijn ##.kk.167.452 10 1)) ((bruijn ##.%k.1339 6 0) #f))) ((bruijn ##.%k.1339 5 0) #f))) ((bruijn ##.%k.1339 4 0) #f))) ((bruijn ##.%k.1339 3 0) #f))) ((bruijn ##.%k.1339 2 0) #f))
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
  // (if (bruijn ##.%p.2321 1 0) (basic-block 1 1 (##.%x.2497) ((##vcore.car (bruijn ##.expr.451 6 2))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k179) 'set! (bruijn ##.%x.2497 0 0))) ((bruijn ##.%k.1339 0 0) #f))
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
  // ((bruijn ##.%x.1328 0 0) (bruijn ##.%k.1322 7 0))
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
  // (basic-block 4 4 (##.%x.2493 ##.%x.2494 ##.%x.2495 ##.%r.2496) ((##vcore.cons (bruijn ##.%x.1335 1 0) '()) (##vcore.cons (bruijn ##.%x.1333 2 0) (bruijn ##.%x.2493 0 0)) (##vcore.cons (bruijn ##.%x.1331 3 0) (bruijn ##.%x.2494 0 1)) (##vcore.cons 'if (bruijn ##.%x.2495 0 2))) ((bruijn ##.%k.1329 4 0) (bruijn ##.%r.2496 0 3)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 16 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k191) (bruijn ##.fun.450 15 1) (bruijn ##.y.2490 3 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 15 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k190) (bruijn ##.fun.450 14 1) (bruijn ##.x.2487 3 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 14 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k189) (bruijn ##.fun.450 13 1) (bruijn ##.p.2484 3 0) #f)
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
  // (if (bruijn ##.%p.1323 0 0) (basic-block 2 2 (##.expr.184.2482 ##.%p.2483) ((##vcore.cdr (bruijn ##.expr.451 9 2)) (##vcore.pair? (bruijn ##.expr.184.2482 0 0))) (if (bruijn ##.%p.2483 0 1) (basic-block 3 3 (##.p.2484 ##.expr.185.2485 ##.%p.2486) ((##vcore.car (bruijn ##.expr.184.2482 1 0)) (##vcore.cdr (bruijn ##.expr.184.2482 1 0)) (##vcore.pair? (bruijn ##.expr.185.2485 0 1))) (if (bruijn ##.%p.2486 0 2) (basic-block 3 3 (##.x.2487 ##.expr.186.2488 ##.%p.2489) ((##vcore.car (bruijn ##.expr.185.2485 1 1)) (##vcore.cdr (bruijn ##.expr.185.2485 1 1)) (##vcore.pair? (bruijn ##.expr.186.2488 0 1))) (if (bruijn ##.%p.2489 0 2) (basic-block 3 3 (##.y.2490 ##.%x.2491 ##.%p.2492) ((##vcore.car (bruijn ##.expr.186.2488 1 1)) (##vcore.cdr (bruijn ##.expr.186.2488 1 1)) (##vcore.null? (bruijn ##.%x.2491 0 1))) (if (bruijn ##.%p.2492 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k188) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda29) (bruijn ##.kk.167.452 11 1)) ((bruijn ##.%k.1322 6 0) #f))) ((bruijn ##.%k.1322 5 0) #f))) ((bruijn ##.%k.1322 4 0) #f))) ((bruijn ##.%k.1322 3 0) #f))) ((bruijn ##.%k.1322 2 0) #f))
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
  // (if (bruijn ##.%p.2322 1 0) (basic-block 1 1 (##.%x.2481) ((##vcore.car (bruijn ##.expr.451 7 2))) ((bruijn ##.equal?.243 12 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k187) 'if (bruijn ##.%x.2481 0 0))) ((bruijn ##.%k.1322 0 0) #f))
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
  // ((bruijn ##.%x.1304 0 0) (bruijn ##.%k.1297 9 0))
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
  // (basic-block 1 1 (##.%r.2480) ((##vcore.cons (bruijn ##.%x.2479 2 1) (bruijn ##.%x.1307 1 0))) ((bruijn ##.%k.1305 7 0) (bruijn ##.%r.2480 0 0)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 23 14) (bruijn ##.%k.1308 0 0) (bruijn ##.fun.450 22 1) (bruijn ##.x.495 0 1) #f)
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
  // (basic-block 2 2 (##.%x.2478 ##.%x.2479) ((##vcore.cons (bruijn ##.lamb.494 4 0) '()) (##vcore.cons 'close (bruijn ##.%x.2478 0 0))) ((bruijn ##.map.245 26 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k200) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda31) (bruijn ##.xs.2470 6 0)))
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
  // (basic-block 7 7 (##.%x.2471 ##.%x.2472 ##.%x.2473 ##.%x.2474 ##.%x.2475 ##.%x.2476 ##.%x.2477) ((##vcore.cons (bruijn ##.%x.1318 1 0) '()) (##vcore.cons (bruijn ##.n.2464 7 0) (bruijn ##.%x.2471 0 0)) (##vcore.cons (bruijn ##.%x.2472 0 1) '()) (##vcore.cons (bruijn ##.%x.1314 2 0) (bruijn ##.%x.2473 0 2)) (##vcore.cons '#f (bruijn ##.%x.2474 0 3)) (##vcore.cons (bruijn ##.lamb.494 3 0) (bruijn ##.%x.2475 0 4)) (##vcore.cons (bruijn ##.%x.2476 0 5) (bruijn ##.functions.306 21 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k199) (bruijn ##.functions.306 21 5) (bruijn ##.%x.2477 0 6)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 19 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k198) (bruijn ##.fun.450 18 1) (bruijn ##.body.2467 4 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 18 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k197) (bruijn ##.debug-info.2461 5 0))
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
  // (if (bruijn ##.%p.1299 0 0) (basic-block 2 2 (##.expr.189.2459 ##.%p.2460) ((##vcore.cdr (bruijn ##.expr.188.2456 3 0)) (##vcore.pair? (bruijn ##.expr.189.2459 0 0))) (if (bruijn ##.%p.2460 0 1) (basic-block 3 3 (##.debug-info.2461 ##.expr.190.2462 ##.%p.2463) ((##vcore.car (bruijn ##.expr.189.2459 1 0)) (##vcore.cdr (bruijn ##.expr.189.2459 1 0)) (##vcore.pair? (bruijn ##.expr.190.2462 0 1))) (if (bruijn ##.%p.2463 0 2) (basic-block 3 3 (##.n.2464 ##.expr.191.2465 ##.%p.2466) ((##vcore.car (bruijn ##.expr.190.2462 1 1)) (##vcore.cdr (bruijn ##.expr.190.2462 1 1)) (##vcore.pair? (bruijn ##.expr.191.2465 0 1))) (if (bruijn ##.%p.2466 0 2) (basic-block 3 3 (##.body.2467 ##.%x.2468 ##.%p.2469) ((##vcore.car (bruijn ##.expr.191.2465 1 1)) (##vcore.cdr (bruijn ##.expr.191.2465 1 1)) (##vcore.null? (bruijn ##.%x.2468 0 1))) (if (bruijn ##.%p.2469 0 2) (basic-block 1 1 (##.xs.2470) ((##vcore.cdr (bruijn ##.expr.451 15 2))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k195) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda30) (bruijn ##.kk.167.452 14 1))) ((bruijn ##.%k.1297 7 0) #f))) ((bruijn ##.%k.1297 6 0) #f))) ((bruijn ##.%k.1297 5 0) #f))) ((bruijn ##.%k.1297 4 0) #f))) ((bruijn ##.%k.1297 3 0) #f))
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
  // (if (bruijn ##.%p.2323 1 0) (basic-block 2 2 (##.expr.188.2456 ##.%p.2457) ((##vcore.car (bruijn ##.expr.451 8 2)) (##vcore.pair? (bruijn ##.expr.188.2456 0 0))) (if (bruijn ##.%p.2457 0 1) (basic-block 1 1 (##.%x.2458) ((##vcore.car (bruijn ##.expr.188.2456 1 0))) ((bruijn ##.equal?.243 14 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k194) 'lambda (bruijn ##.%x.2458 0 0))) ((bruijn ##.%k.1297 1 0) #f))) ((bruijn ##.%k.1297 0 0) #f))
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
  // ((bruijn ##.%x.1277 0 0) (bruijn ##.%k.1268 11 0))
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
  // (basic-block 1 1 (##.%r.2455) ((##vcore.cons (bruijn ##.%x.2454 2 1) (bruijn ##.%x.1280 1 0))) ((bruijn ##.%k.1278 9 0) (bruijn ##.%r.2455 0 0)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 28 14) (bruijn ##.%k.1281 0 0) (bruijn ##.lamb.509 7 0) (bruijn ##.x.510 0 1) #f)
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
  // (basic-block 2 2 (##.%x.2453 ##.%x.2454) ((##vcore.cons (bruijn ##.lamb.509 6 0) '()) (##vcore.cons 'close (bruijn ##.%x.2453 0 0))) ((bruijn ##.map.245 31 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k211) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda33) (bruijn ##.xs.2444 8 0)))
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
  // (basic-block 7 7 (##.%x.2446 ##.%x.2447 ##.%x.2448 ##.%x.2449 ##.%x.2450 ##.%x.2451 ##.%x.2452) ((##vcore.cons (bruijn ##.%x.1291 1 0) '()) (##vcore.cons (bruijn ##.n.2438 9 0) (bruijn ##.%x.2446 0 0)) (##vcore.cons (bruijn ##.%x.2447 0 1) '()) (##vcore.cons (bruijn ##.%x.1287 2 0) (bruijn ##.%x.2448 0 2)) (##vcore.cons '#f (bruijn ##.%x.2449 0 3)) (##vcore.cons (bruijn ##.lamb.509 5 0) (bruijn ##.%x.2450 0 4)) (##vcore.cons (bruijn ##.%x.2451 0 5) (bruijn ##.functions.306 26 5))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k210) (bruijn ##.functions.306 26 5) (bruijn ##.%x.2452 0 6)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 24 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k209) (bruijn ##.lamb.509 3 0) (bruijn ##.body.2441 6 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.lift-literal.313) #f (bruijn ##.lift-literal.313 23 12) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k208) (bruijn ##.debug-info.2435 7 0))
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
  // (basic-block 1 1 (##.%x.2445) ((##vcore.cons (bruijn ##.%x.1293 1 0) (bruijn ##.qualified-functions.303 23 2))) (set! (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k207) (bruijn ##.qualified-functions.303 23 2) (bruijn ##.%x.2445 0 0)))
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
  // ((bruijn ##.list.244 25 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k206) (bruijn ##.lamb.509 0 0) (bruijn ##.n.2438 4 0) #f)
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
  // ((bruijn ##.mangle-qualified-function.254 24 11) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k205) (bruijn ##.name.2429 6 0))
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
  // (if (bruijn ##.%p.1270 0 0) (basic-block 2 2 (##.expr.194.2427 ##.%p.2428) ((##vcore.cdr (bruijn ##.expr.193.2424 3 0)) (##vcore.pair? (bruijn ##.expr.194.2427 0 0))) (if (bruijn ##.%p.2428 0 1) (basic-block 3 3 (##.name.2429 ##.expr.195.2430 ##.%p.2431) ((##vcore.car (bruijn ##.expr.194.2427 1 0)) (##vcore.cdr (bruijn ##.expr.194.2427 1 0)) (##vcore.pair? (bruijn ##.expr.195.2430 0 1))) (if (bruijn ##.%p.2431 0 2) (basic-block 3 3 (##.static?.2432 ##.expr.196.2433 ##.%p.2434) ((##vcore.car (bruijn ##.expr.195.2430 1 1)) (##vcore.cdr (bruijn ##.expr.195.2430 1 1)) (##vcore.pair? (bruijn ##.expr.196.2433 0 1))) (if (bruijn ##.%p.2434 0 2) (basic-block 3 3 (##.debug-info.2435 ##.expr.197.2436 ##.%p.2437) ((##vcore.car (bruijn ##.expr.196.2433 1 1)) (##vcore.cdr (bruijn ##.expr.196.2433 1 1)) (##vcore.pair? (bruijn ##.expr.197.2436 0 1))) (if (bruijn ##.%p.2437 0 2) (basic-block 3 3 (##.n.2438 ##.expr.198.2439 ##.%p.2440) ((##vcore.car (bruijn ##.expr.197.2436 1 1)) (##vcore.cdr (bruijn ##.expr.197.2436 1 1)) (##vcore.pair? (bruijn ##.expr.198.2439 0 1))) (if (bruijn ##.%p.2440 0 2) (basic-block 3 3 (##.body.2441 ##.%x.2442 ##.%p.2443) ((##vcore.car (bruijn ##.expr.198.2439 1 1)) (##vcore.cdr (bruijn ##.expr.198.2439 1 1)) (##vcore.null? (bruijn ##.%x.2442 0 1))) (if (bruijn ##.%p.2443 0 2) (basic-block 1 1 (##.xs.2444) ((##vcore.cdr (bruijn ##.expr.451 18 2))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k204) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda32) (bruijn ##.kk.167.452 17 1))) ((bruijn ##.%k.1268 9 0) #f))) ((bruijn ##.%k.1268 8 0) #f))) ((bruijn ##.%k.1268 7 0) #f))) ((bruijn ##.%k.1268 6 0) #f))) ((bruijn ##.%k.1268 5 0) #f))) ((bruijn ##.%k.1268 4 0) #f))) ((bruijn ##.%k.1268 3 0) #f))
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
  // (if (bruijn ##.%p.2324 1 0) (basic-block 2 2 (##.expr.193.2424 ##.%p.2425) ((##vcore.car (bruijn ##.expr.451 9 2)) (##vcore.pair? (bruijn ##.expr.193.2424 0 0))) (if (bruijn ##.%p.2425 0 1) (basic-block 1 1 (##.%x.2426) ((##vcore.car (bruijn ##.expr.193.2424 1 0))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k203) '##qualified-lambda (bruijn ##.%x.2426 0 0))) ((bruijn ##.%k.1268 1 0) #f))) ((bruijn ##.%k.1268 0 0) #f))
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
  // ((bruijn ##.%x.1256 0 0) (bruijn ##.%k.1249 8 0))
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
  // (basic-block 4 4 (##.%x.2420 ##.%x.2421 ##.%x.2422 ##.%r.2423) ((##vcore.cons (bruijn ##.%x.1262 1 0) '()) (##vcore.cons (bruijn ##.%x.1260 2 0) (bruijn ##.%x.2420 0 0)) (##vcore.cons (bruijn ##.n.2408 7 0) (bruijn ##.%x.2421 0 1)) (##vcore.cons 'letrec (bruijn ##.%x.2422 0 2))) ((bruijn ##.%k.1257 3 0) (bruijn ##.%r.2423 0 3)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 19 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k217) (bruijn ##.fun.450 18 1) (bruijn ##.body.2417 2 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 20 14) (bruijn ##.%k.1263 1 0) (bruijn ##.%x.1264 0 0) (bruijn ##.val.521 1 2) #f)
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
  // ((bruijn ##.map.245 22 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k216) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda35) (bruijn ##.xs.2411 3 0) (bruijn ##.vals.2414 2 0))
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
  // (if (bruijn ##.%p.1250 0 0) (basic-block 2 2 (##.expr.200.2406 ##.%p.2407) ((##vcore.cdr (bruijn ##.expr.451 12 2)) (##vcore.pair? (bruijn ##.expr.200.2406 0 0))) (if (bruijn ##.%p.2407 0 1) (basic-block 3 3 (##.n.2408 ##.expr.201.2409 ##.%p.2410) ((##vcore.car (bruijn ##.expr.200.2406 1 0)) (##vcore.cdr (bruijn ##.expr.200.2406 1 0)) (##vcore.pair? (bruijn ##.expr.201.2409 0 1))) (if (bruijn ##.%p.2410 0 2) (basic-block 3 3 (##.xs.2411 ##.expr.202.2412 ##.%p.2413) ((##vcore.car (bruijn ##.expr.201.2409 1 1)) (##vcore.cdr (bruijn ##.expr.201.2409 1 1)) (##vcore.pair? (bruijn ##.expr.202.2412 0 1))) (if (bruijn ##.%p.2413 0 2) (basic-block 3 3 (##.vals.2414 ##.expr.203.2415 ##.%p.2416) ((##vcore.car (bruijn ##.expr.202.2412 1 1)) (##vcore.cdr (bruijn ##.expr.202.2412 1 1)) (##vcore.pair? (bruijn ##.expr.203.2415 0 1))) (if (bruijn ##.%p.2416 0 2) (basic-block 3 3 (##.body.2417 ##.%x.2418 ##.%p.2419) ((##vcore.car (bruijn ##.expr.203.2415 1 1)) (##vcore.cdr (bruijn ##.expr.203.2415 1 1)) (##vcore.null? (bruijn ##.%x.2418 0 1))) (if (bruijn ##.%p.2419 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k215) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda34) (bruijn ##.kk.167.452 15 1)) ((bruijn ##.%k.1249 7 0) #f))) ((bruijn ##.%k.1249 6 0) #f))) ((bruijn ##.%k.1249 5 0) #f))) ((bruijn ##.%k.1249 4 0) #f))) ((bruijn ##.%k.1249 3 0) #f))) ((bruijn ##.%k.1249 2 0) #f))
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
  // (if (bruijn ##.%p.2325 1 0) (basic-block 1 1 (##.%x.2405) ((##vcore.car (bruijn ##.expr.451 10 2))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k214) 'letrec (bruijn ##.%x.2405 0 0))) ((bruijn ##.%k.1249 0 0) #f))
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
  // ((bruijn ##.%x.1234 0 0) (bruijn ##.%k.1226 9 0))
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
  // (if (bruijn ##.path.2384 6 0) (basic-block 1 1 (##.%x.2404) ((##vcore.cons (bruijn ##.path.2384 7 0) (bruijn ##.static-environments.309 22 8))) (set! (bruijn ##.%k.1244 1 0) (bruijn ##.static-environments.309 22 8) (bruijn ##.%x.2404 0 0))) ((bruijn ##.%k.1244 0 0) #f))
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
  // (basic-block 5 5 (##.%x.2399 ##.%x.2400 ##.%x.2401 ##.%x.2402 ##.%r.2403) ((##vcore.cons (bruijn ##.%x.1241 1 0) '()) (##vcore.cons (bruijn ##.%x.1239 2 0) (bruijn ##.%x.2399 0 0)) (##vcore.cons (bruijn ##.n.2387 7 0) (bruijn ##.%x.2400 0 1)) (##vcore.cons (bruijn ##.path.2384 8 0) (bruijn ##.%x.2401 0 2)) (##vcore.cons '##letrec (bruijn ##.%x.2402 0 3))) ((bruijn ##.%k.1235 3 0) (bruijn ##.%r.2403 0 4)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 21 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k226) (bruijn ##.fun.450 20 1) (bruijn ##.body.2396 2 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 22 14) (bruijn ##.%k.1242 1 0) (bruijn ##.%x.1243 0 0) (bruijn ##.val.534 1 2) #f)
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
  // ((bruijn ##.map.245 24 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k225) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda37) (bruijn ##.xs.2390 3 0) (bruijn ##.vals.2393 2 0))
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
  // (if (bruijn ##.%p.1227 0 0) (basic-block 2 2 (##.expr.205.2382 ##.%p.2383) ((##vcore.cdr (bruijn ##.expr.451 13 2)) (##vcore.pair? (bruijn ##.expr.205.2382 0 0))) (if (bruijn ##.%p.2383 0 1) (basic-block 3 3 (##.path.2384 ##.expr.206.2385 ##.%p.2386) ((##vcore.car (bruijn ##.expr.205.2382 1 0)) (##vcore.cdr (bruijn ##.expr.205.2382 1 0)) (##vcore.pair? (bruijn ##.expr.206.2385 0 1))) (if (bruijn ##.%p.2386 0 2) (basic-block 3 3 (##.n.2387 ##.expr.207.2388 ##.%p.2389) ((##vcore.car (bruijn ##.expr.206.2385 1 1)) (##vcore.cdr (bruijn ##.expr.206.2385 1 1)) (##vcore.pair? (bruijn ##.expr.207.2388 0 1))) (if (bruijn ##.%p.2389 0 2) (basic-block 3 3 (##.xs.2390 ##.expr.208.2391 ##.%p.2392) ((##vcore.car (bruijn ##.expr.207.2388 1 1)) (##vcore.cdr (bruijn ##.expr.207.2388 1 1)) (##vcore.pair? (bruijn ##.expr.208.2391 0 1))) (if (bruijn ##.%p.2392 0 2) (basic-block 3 3 (##.vals.2393 ##.expr.209.2394 ##.%p.2395) ((##vcore.car (bruijn ##.expr.208.2391 1 1)) (##vcore.cdr (bruijn ##.expr.208.2391 1 1)) (##vcore.pair? (bruijn ##.expr.209.2394 0 1))) (if (bruijn ##.%p.2395 0 2) (basic-block 3 3 (##.body.2396 ##.%x.2397 ##.%p.2398) ((##vcore.car (bruijn ##.expr.209.2394 1 1)) (##vcore.cdr (bruijn ##.expr.209.2394 1 1)) (##vcore.null? (bruijn ##.%x.2397 0 1))) (if (bruijn ##.%p.2398 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k222) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda36) (bruijn ##.kk.167.452 17 1)) ((bruijn ##.%k.1226 8 0) #f))) ((bruijn ##.%k.1226 7 0) #f))) ((bruijn ##.%k.1226 6 0) #f))) ((bruijn ##.%k.1226 5 0) #f))) ((bruijn ##.%k.1226 4 0) #f))) ((bruijn ##.%k.1226 3 0) #f))) ((bruijn ##.%k.1226 2 0) #f))
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
  // (if (bruijn ##.%p.2326 1 0) (basic-block 1 1 (##.%x.2381) ((##vcore.car (bruijn ##.expr.451 11 2))) ((bruijn ##.equal?.243 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k221) '##letrec (bruijn ##.%x.2381 0 0))) ((bruijn ##.%k.1226 0 0) #f))
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
  // ((bruijn ##.%x.1208 0 0) (bruijn ##.%k.1200 9 0))
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
  // (basic-block 6 6 (##.%x.2372 ##.%x.2373 ##.%x.2374 ##.%x.2375 ##.%x.2376 ##.%r.2377) ((##vcore.cons (bruijn ##.%x.1216 1 0) '()) (##vcore.cons (bruijn ##.%x.1214 2 0) (bruijn ##.%x.2372 0 0)) (##vcore.cons (bruijn ##.xs.2363 6 0) (bruijn ##.%x.2373 0 1)) (##vcore.cons (bruijn ##.n.2360 7 0) (bruijn ##.%x.2374 0 2)) (##vcore.cons (bruijn ##.cost.2357 8 0) (bruijn ##.%x.2375 0 3)) (##vcore.cons 'basic-block (bruijn ##.%x.2376 0 4))) ((bruijn ##.%k.1209 3 0) (bruijn ##.%r.2377 0 5)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 22 15) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k233) (bruijn ##.fun.450 21 1) (bruijn ##.body.2369 2 0))
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
  // (basic-block 1 1 (##.%r.2380) ((##vcore.cons (bruijn ##.%x.1218 3 0) (bruijn ##.%x.1219 1 0))) ((bruijn ##.%k.1217 5 0) (bruijn ##.%r.2380 0 0)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 26 14) (bruijn ##.%k.1220 0 0) (bruijn ##.fun.450 25 1) (bruijn ##.x.548 0 1) #f)
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
  // (basic-block 1 1 (##.%x.2379) ((##vcore.cdr (bruijn ##.val.547 3 2))) ((bruijn ##.map.245 29 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k235) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda40) (bruijn ##.%x.2379 0 0)))
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
  // (basic-block 1 1 (##.%x.2378) ((##vcore.car (bruijn ##.val.547 1 2))) (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 23 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k234) (bruijn ##.fun.450 22 1) (bruijn ##.%x.2378 0 0) #t))
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
  // ((bruijn ##.map.245 25 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k232) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda39) (bruijn ##.xs.2363 3 0) (bruijn ##.vals.2366 2 0))
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
  // (if (bruijn ##.%p.1201 0 0) (basic-block 2 2 (##.expr.211.2355 ##.%p.2356) ((##vcore.cdr (bruijn ##.expr.451 14 2)) (##vcore.pair? (bruijn ##.expr.211.2355 0 0))) (if (bruijn ##.%p.2356 0 1) (basic-block 3 3 (##.cost.2357 ##.expr.212.2358 ##.%p.2359) ((##vcore.car (bruijn ##.expr.211.2355 1 0)) (##vcore.cdr (bruijn ##.expr.211.2355 1 0)) (##vcore.pair? (bruijn ##.expr.212.2358 0 1))) (if (bruijn ##.%p.2359 0 2) (basic-block 3 3 (##.n.2360 ##.expr.213.2361 ##.%p.2362) ((##vcore.car (bruijn ##.expr.212.2358 1 1)) (##vcore.cdr (bruijn ##.expr.212.2358 1 1)) (##vcore.pair? (bruijn ##.expr.213.2361 0 1))) (if (bruijn ##.%p.2362 0 2) (basic-block 3 3 (##.xs.2363 ##.expr.214.2364 ##.%p.2365) ((##vcore.car (bruijn ##.expr.213.2361 1 1)) (##vcore.cdr (bruijn ##.expr.213.2361 1 1)) (##vcore.pair? (bruijn ##.expr.214.2364 0 1))) (if (bruijn ##.%p.2365 0 2) (basic-block 3 3 (##.vals.2366 ##.expr.215.2367 ##.%p.2368) ((##vcore.car (bruijn ##.expr.214.2364 1 1)) (##vcore.cdr (bruijn ##.expr.214.2364 1 1)) (##vcore.pair? (bruijn ##.expr.215.2367 0 1))) (if (bruijn ##.%p.2368 0 2) (basic-block 3 3 (##.body.2369 ##.%x.2370 ##.%p.2371) ((##vcore.car (bruijn ##.expr.215.2367 1 1)) (##vcore.cdr (bruijn ##.expr.215.2367 1 1)) (##vcore.null? (bruijn ##.%x.2370 0 1))) (if (bruijn ##.%p.2371 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k231) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda38) (bruijn ##.kk.167.452 18 1)) ((bruijn ##.%k.1200 8 0) #f))) ((bruijn ##.%k.1200 7 0) #f))) ((bruijn ##.%k.1200 6 0) #f))) ((bruijn ##.%k.1200 5 0) #f))) ((bruijn ##.%k.1200 4 0) #f))) ((bruijn ##.%k.1200 3 0) #f))) ((bruijn ##.%k.1200 2 0) #f))
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
  // (if (bruijn ##.%p.2327 1 0) (basic-block 1 1 (##.%x.2354) ((##vcore.car (bruijn ##.expr.451 12 2))) ((bruijn ##.equal?.243 17 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k230) 'basic-block (bruijn ##.%x.2354 0 0))) ((bruijn ##.%k.1200 0 0) #f))
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
  // ((bruijn ##.%x.1190 0 0) (bruijn ##.%k.1185 7 0))
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
  // (basic-block 4 4 (##.%x.2350 ##.%x.2351 ##.%x.2352 ##.%r.2353) ((##vcore.cons (bruijn ##.%x.1195 2 0) (bruijn ##.%x.1196 1 0)) (##vcore.cons (bruijn ##.static?.2345 5 0) (bruijn ##.%x.2350 0 0)) (##vcore.cons (bruijn ##.name.2342 6 0) (bruijn ##.%x.2351 0 1)) (##vcore.cons '##qualified-call (bruijn ##.%x.2352 0 2))) ((bruijn ##.%k.1191 3 0) (bruijn ##.%r.2353 0 3)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 22 14) (bruijn ##.%k.1197 0 0) (bruijn ##.fun.450 21 1) (bruijn ##.x.557 0 1) #f)
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
  // ((bruijn ##.map.245 25 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k241) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda42) (bruijn ##.xs.2349 2 1))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 20 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k240) (bruijn ##.fun.450 19 1) (bruijn ##.f.2348 1 0) #t)
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
  // (if (bruijn ##.%p.1186 0 0) (basic-block 2 2 (##.expr.217.2340 ##.%p.2341) ((##vcore.cdr (bruijn ##.expr.451 15 2)) (##vcore.pair? (bruijn ##.expr.217.2340 0 0))) (if (bruijn ##.%p.2341 0 1) (basic-block 3 3 (##.name.2342 ##.expr.218.2343 ##.%p.2344) ((##vcore.car (bruijn ##.expr.217.2340 1 0)) (##vcore.cdr (bruijn ##.expr.217.2340 1 0)) (##vcore.pair? (bruijn ##.expr.218.2343 0 1))) (if (bruijn ##.%p.2344 0 2) (basic-block 3 3 (##.static?.2345 ##.expr.219.2346 ##.%p.2347) ((##vcore.car (bruijn ##.expr.218.2343 1 1)) (##vcore.cdr (bruijn ##.expr.218.2343 1 1)) (##vcore.pair? (bruijn ##.expr.219.2346 0 1))) (if (bruijn ##.%p.2347 0 2) (basic-block 2 2 (##.f.2348 ##.xs.2349) ((##vcore.car (bruijn ##.expr.219.2346 1 1)) (##vcore.cdr (bruijn ##.expr.219.2346 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k239) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda41) (bruijn ##.kk.167.452 17 1))) ((bruijn ##.%k.1185 5 0) #f))) ((bruijn ##.%k.1185 4 0) #f))) ((bruijn ##.%k.1185 3 0) #f))) ((bruijn ##.%k.1185 2 0) #f))
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
  // (if (bruijn ##.%p.2328 1 0) (basic-block 1 1 (##.%x.2339) ((##vcore.car (bruijn ##.expr.451 13 2))) ((bruijn ##.equal?.243 18 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k238) '##qualified-call (bruijn ##.%x.2339 0 0))) ((bruijn ##.%k.1185 0 0) #f))
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
  // ((bruijn ##.%x.1168 0 0) (bruijn ##.%k.1166 4 0))
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
  // (basic-block 1 1 (##.%r.2333) ((##vcore.cons (bruijn ##.%x.1170 2 0) (bruijn ##.%x.1171 1 0))) ((bruijn ##.%k.1169 3 0) (bruijn ##.%r.2333 0 0)))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 20 14) (bruijn ##.%k.1172 0 0) (bruijn ##.fun.450 19 1) (bruijn ##.x.569 0 1) #f)
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 18 14) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k245) (bruijn ##.fun.450 17 1) (bruijn ##.f.2330 3 0) #t)
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
  // (basic-block 1 1 (##.%p.2332) ((##vcore.null? (bruijn ##.tail-expr.567 1 0))) (if (bruijn ##.%p.2332 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k244) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda44) (bruijn ##.kk.167.452 15 1)) ((bruijn ##.%k.1166 3 0) #f)))
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
  // ((bruijn ##.kk.223.561 5 1) (bruijn ##.%k.1181 1 0) (bruijn ##.expr.225.563 3 1) (bruijn ##.%x.1182 0 0))
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
  // (if (bruijn ##.%p.2335 1 1) ((bruijn ##.reverse.252 24 9) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k248) (bruijn ##.xs.222.564 2 2)) ((bruijn ##.%k.1181 0 0) #f))
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
  // ((bruijn ##.kk.223.561 7 1) (bruijn ##.%k.1176 2 0) (bruijn ##.expr.225.563 5 1) (bruijn ##.%x.1177 0 0))
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
  // (basic-block 3 3 (##.xs.2336 ##.%x.2337 ##.%x.2338) ((##vcore.car (bruijn ##.expr.225.563 4 1)) (##vcore.cdr (bruijn ##.expr.225.563 4 1)) (##vcore.cons (bruijn ##.xs.2336 0 0) (bruijn ##.xs.222.564 4 2))) ((bruijn ##.kk.224.565 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k250) (bruijn ##.%x.2337 0 1) (bruijn ##.%x.2338 0 2)))
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
  // (##vcore.call/cc (bruijn ##.%k.1175 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0lambda48))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0lambda48, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k249(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1174 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0lambda47) (bruijn ##.loop.562 2 0))
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
  // (basic-block 2 2 (##.%x.2334 ##.%p.2335) ((##vcore.pair? (bruijn ##.expr.225.563 1 1)) (##vcore.not (bruijn ##.%x.2334 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k247) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562_V0k249)))
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V10_Dloop_D562")) (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316 ##.loop.562) #f (bruijn ##.loop.562 0 0) (bruijn ##.%k.1173 1 0) (bruijn ##.expr.221.2331 2 1) '()))
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
  // (if (bruijn ##.%p.2329 1 0) (basic-block 2 2 (##.f.2330 ##.expr.221.2331) ((##vcore.car (bruijn ##.expr.451 14 2)) (##vcore.cdr (bruijn ##.expr.451 14 2))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda43) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda46))) ((bruijn ##.%k.1166 0 0) #f))
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
  // ((bruijn ##.error.258 18 15) (bruijn ##.%k.1164 0 0) (##string ##.string.2985) (bruijn ##.expr.451 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 15)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2985.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 2));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k252(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1163 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda49) (bruijn ##.kk.167.452 11 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 11-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda49, self)))),
      VGetArg(statics, 11-1, 1));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k242(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2329) ((##vcore.pair? (bruijn ##.expr.451 12 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k243) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k252)))
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
  // (basic-block 1 1 (##.%p.2328) ((##vcore.pair? (bruijn ##.expr.451 11 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k237) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k242)))
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
  // (basic-block 1 1 (##.%p.2327) ((##vcore.pair? (bruijn ##.expr.451 10 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k229) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k236)))
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
  // (basic-block 1 1 (##.%p.2326) ((##vcore.pair? (bruijn ##.expr.451 9 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k220) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k228)))
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
  // (basic-block 1 1 (##.%p.2325) ((##vcore.pair? (bruijn ##.expr.451 8 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k213) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k219)))
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
  // (basic-block 1 1 (##.%p.2324) ((##vcore.pair? (bruijn ##.expr.451 7 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k202) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k212)))
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
  // (basic-block 1 1 (##.%p.2323) ((##vcore.pair? (bruijn ##.expr.451 6 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k193) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k201)))
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
  // (basic-block 1 1 (##.%p.2322) ((##vcore.pair? (bruijn ##.expr.451 5 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k186) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k192)))
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
  // (basic-block 1 1 (##.%p.2321) ((##vcore.pair? (bruijn ##.expr.451 4 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k178) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k185)))
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
  // (basic-block 1 1 (##.%p.2320) ((##vcore.pair? (bruijn ##.expr.451 3 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k170) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k177)))
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
  // (basic-block 1 1 (##.%p.2319) ((##vcore.pair? (bruijn ##.expr.451 2 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k163) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0k169)))
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
  // (##vcore.call/cc (bruijn ##.%k.1162 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__apply_D316_V0lambda25))
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
  // ((bruijn ##.%x.1448 0 0) (bruijn ##.%k.1446 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1449 0 0) (bruijn ##.expr.571 6 2))
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
  // (if (bruijn ##.%p.1447 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k255) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda51) (bruijn ##.kk.226.572 4 1)) ((bruijn ##.%k.1446 2 0) #f))
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
  // (if (bruijn ##.%p.2553 1 0) (basic-block 1 1 (##.%x.2569) ((##vcore.car (bruijn ##.expr.571 4 2))) ((bruijn ##.equal?.243 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k254) 'bruijn (bruijn ##.%x.2569 0 0))) ((bruijn ##.%k.1446 0 0) #f))
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
  // ((bruijn ##.%x.1442 0 0) (bruijn ##.%k.1440 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 8 14) (bruijn ##.%k.1443 0 0) (bruijn ##.fun.570 7 1) (bruijn ##.expr.571 7 2) #f)
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
  // (if (bruijn ##.%p.1441 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k259) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda52) (bruijn ##.kk.226.572 5 1)) ((bruijn ##.%k.1440 2 0) #f))
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
  // (if (bruijn ##.%p.2554 1 0) (basic-block 1 1 (##.%x.2568) ((##vcore.car (bruijn ##.expr.571 5 2))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k258) 'lambda (bruijn ##.%x.2568 0 0))) ((bruijn ##.%k.1440 0 0) #f))
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
  // ((bruijn ##.%x.1436 0 0) (bruijn ##.%k.1434 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 9 14) (bruijn ##.%k.1437 0 0) (bruijn ##.fun.570 8 1) (bruijn ##.expr.571 8 2) #f)
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
  // (if (bruijn ##.%p.1435 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k263) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda53) (bruijn ##.kk.226.572 6 1)) ((bruijn ##.%k.1434 2 0) #f))
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
  // (if (bruijn ##.%p.2555 1 0) (basic-block 1 1 (##.%x.2567) ((##vcore.car (bruijn ##.expr.571 6 2))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k262) '##qualified-lambda (bruijn ##.%x.2567 0 0))) ((bruijn ##.%k.1434 0 0) #f))
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
  // ((bruijn ##.%x.1430 0 0) (bruijn ##.%k.1428 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 10 14) (bruijn ##.%k.1431 0 0) (bruijn ##.fun.570 9 1) (bruijn ##.expr.571 9 2) #f)
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
  // (if (bruijn ##.%p.1429 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k267) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda54) (bruijn ##.kk.226.572 7 1)) ((bruijn ##.%k.1428 2 0) #f))
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
  // (if (bruijn ##.%p.2556 1 0) (basic-block 1 1 (##.%x.2566) ((##vcore.car (bruijn ##.expr.571 7 2))) ((bruijn ##.equal?.243 12 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k266) 'case-lambda (bruijn ##.%x.2566 0 0))) ((bruijn ##.%k.1428 0 0) #f))
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
  // ((bruijn ##.%x.1424 0 0) (bruijn ##.%k.1422 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 11 14) (bruijn ##.%k.1425 0 0) (bruijn ##.fun.570 10 1) (bruijn ##.expr.571 10 2) #f)
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
  // (if (bruijn ##.%p.1423 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k271) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda55) (bruijn ##.kk.226.572 8 1)) ((bruijn ##.%k.1422 2 0) #f))
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
  // (if (bruijn ##.%p.2557 1 0) (basic-block 1 1 (##.%x.2565) ((##vcore.car (bruijn ##.expr.571 8 2))) ((bruijn ##.equal?.243 13 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k270) '##qualified-case-lambda (bruijn ##.%x.2565 0 0))) ((bruijn ##.%k.1422 0 0) #f))
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
  // ((bruijn ##.%x.1418 0 0) (bruijn ##.%k.1416 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 12 14) (bruijn ##.%k.1419 0 0) (bruijn ##.fun.570 11 1) (bruijn ##.expr.571 11 2) #f)
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
  // (if (bruijn ##.%p.1417 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k275) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda56) (bruijn ##.kk.226.572 9 1)) ((bruijn ##.%k.1416 2 0) #f))
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
  // (if (bruijn ##.%p.2558 1 0) (basic-block 1 1 (##.%x.2564) ((##vcore.car (bruijn ##.expr.571 9 2))) ((bruijn ##.equal?.243 14 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k274) 'continuation (bruijn ##.%x.2564 0 0))) ((bruijn ##.%k.1416 0 0) #f))
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
  // ((bruijn ##.%x.1412 0 0) (bruijn ##.%k.1410 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 13 14) (bruijn ##.%k.1413 0 0) (bruijn ##.fun.570 12 1) (bruijn ##.expr.571 12 2) #f)
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
  // (if (bruijn ##.%p.1411 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k279) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda57) (bruijn ##.kk.226.572 10 1)) ((bruijn ##.%k.1410 2 0) #f))
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
  // (if (bruijn ##.%p.2559 1 0) (basic-block 1 1 (##.%x.2563) ((##vcore.car (bruijn ##.expr.571 10 2))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k278) 'quote (bruijn ##.%x.2563 0 0))) ((bruijn ##.%k.1410 0 0) #f))
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
  // ((bruijn ##.%x.1406 0 0) (bruijn ##.%k.1404 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 14 14) (bruijn ##.%k.1407 0 0) (bruijn ##.fun.570 13 1) (bruijn ##.expr.571 13 2) #f)
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
  // (if (bruijn ##.%p.1405 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k283) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda58) (bruijn ##.kk.226.572 11 1)) ((bruijn ##.%k.1404 2 0) #f))
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
  // (if (bruijn ##.%p.2560 1 0) (basic-block 1 1 (##.%x.2562) ((##vcore.car (bruijn ##.expr.571 11 2))) ((bruijn ##.equal?.243 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k282) '##inline (bruijn ##.%x.2562 0 0))) ((bruijn ##.%k.1404 0 0) #f))
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
  // ((bruijn ##.%x.1401 0 0) (bruijn ##.%k.1400 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler lower to-functions ##.iter-apply.316) #f (bruijn ##.iter-apply.316 13 15) (bruijn ##.%k.1402 0 0) (bruijn ##.fun.570 12 1) (bruijn ##.expr.571 12 2))
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
  // (if (bruijn ##.%p.2561 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k286) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda59) (bruijn ##.kk.226.572 10 1)) ((bruijn ##.%k.1400 0 0) #f))
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
  // (##qualified-call (vanity compiler lower to-functions ##.iter-atom.315) #f (bruijn ##.iter-atom.315 12 14) (bruijn ##.%k.1398 0 0) (bruijn ##.fun.570 11 1) (bruijn ##.expr.571 11 2) #f)
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
  // (##vcore.call-with-values (bruijn ##.%k.1397 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda60) (bruijn ##.kk.226.572 9 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda60, self)))),
      VGetArg(statics, 9-1, 1));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k284(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2561) ((##vcore.pair? (bruijn ##.expr.571 10 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k285) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k287)))
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
  // (basic-block 1 1 (##.%p.2560) ((##vcore.pair? (bruijn ##.expr.571 9 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k281) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k284)))
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
  // (basic-block 1 1 (##.%p.2559) ((##vcore.pair? (bruijn ##.expr.571 8 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k277) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k280)))
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
  // (basic-block 1 1 (##.%p.2558) ((##vcore.pair? (bruijn ##.expr.571 7 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k273) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k276)))
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
  // (basic-block 1 1 (##.%p.2557) ((##vcore.pair? (bruijn ##.expr.571 6 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k269) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k272)))
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
  // (basic-block 1 1 (##.%p.2556) ((##vcore.pair? (bruijn ##.expr.571 5 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k265) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k268)))
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
  // (basic-block 1 1 (##.%p.2555) ((##vcore.pair? (bruijn ##.expr.571 4 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k261) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k264)))
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
  // (basic-block 1 1 (##.%p.2554) ((##vcore.pair? (bruijn ##.expr.571 3 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k257) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k260)))
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
  // (basic-block 1 1 (##.%p.2553) ((##vcore.pair? (bruijn ##.expr.571 2 2))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k253) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0k256)))
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
  // (##vcore.call/cc (bruijn ##.%k.1396 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dtofunctions__iter_D317_V0lambda50))
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
  // ((bruijn ##.%x.1468 0 0) (bruijn ##.%k.1466 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1469 0 0) (bruijn ##.d.583 6 1))
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
  // (if (bruijn ##.%p.1467 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k290) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda62) (bruijn ##.kk.237.584 4 1)) ((bruijn ##.%k.1466 2 0) #f))
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
  // (if (bruijn ##.%p.2570 1 0) (basic-block 1 1 (##.%x.2581) ((##vcore.car (bruijn ##.d.583 4 1))) ((bruijn ##.equal?.243 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k289) '##foreign.declare (bruijn ##.%x.2581 0 0))) ((bruijn ##.%k.1466 0 0) #f))
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
  // ((bruijn ##.%x.1459 0 0) (bruijn ##.%k.1454 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.244 17 1) (bruijn ##.%k.1460 2 0) '##vcore.declare (bruijn ##.f.2575 4 0) (bruijn ##.%x.1461 0 0))
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
  // ((bruijn ##.cadr.250 16 7) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k296) (bruijn ##.%x.1462 0 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.tofunctions-iter.317) #f (bruijn ##.tofunctions-iter.317 11 16) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k295) (bruijn ##.f.2575 2 0) (bruijn ##.l.2578 1 0))
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
  // (if (bruijn ##.%p.1455 0 0) (basic-block 2 2 (##.expr.241.2573 ##.%p.2574) ((##vcore.cdr (bruijn ##.d.583 7 1)) (##vcore.pair? (bruijn ##.expr.241.2573 0 0))) (if (bruijn ##.%p.2574 0 1) (basic-block 3 3 (##.f.2575 ##.expr.242.2576 ##.%p.2577) ((##vcore.car (bruijn ##.expr.241.2573 1 0)) (##vcore.cdr (bruijn ##.expr.241.2573 1 0)) (##vcore.pair? (bruijn ##.expr.242.2576 0 1))) (if (bruijn ##.%p.2577 0 2) (basic-block 3 3 (##.l.2578 ##.%x.2579 ##.%p.2580) ((##vcore.car (bruijn ##.expr.242.2576 1 1)) (##vcore.cdr (bruijn ##.expr.242.2576 1 1)) (##vcore.null? (bruijn ##.%x.2579 0 1))) (if (bruijn ##.%p.2580 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k294) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda63) (bruijn ##.kk.237.584 8 1)) ((bruijn ##.%k.1454 5 0) #f))) ((bruijn ##.%k.1454 4 0) #f))) ((bruijn ##.%k.1454 3 0) #f))) ((bruijn ##.%k.1454 2 0) #f))
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
  // (if (bruijn ##.%p.2571 1 0) (basic-block 1 1 (##.%x.2572) ((##vcore.car (bruijn ##.d.583 5 1))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k293) '##vcore.declare (bruijn ##.%x.2572 0 0))) ((bruijn ##.%k.1454 0 0) #f))
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
  // ((bruijn ##.error.258 8 15) (bruijn ##.%k.1452 2 0) (##string ##.string.2984))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 15)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2984.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k291(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2571) ((##vcore.pair? (bruijn ##.d.583 3 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k292) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k297)))
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
  // (basic-block 1 1 (##.%p.2570) ((##vcore.pair? (bruijn ##.d.583 2 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k288) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0k291)))
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
  // (##vcore.call/cc (bruijn ##.%k.1451 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Diter__declare_D318_V0lambda61))
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
  // (##vcore.apply (bruijn ##.%k.1472 2 0) (bruijn ##.values.248 9 5) (bruijn ##.%x.1474 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->up->vars[0],
      VGetArg(statics, 9-1, 5),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k301(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.2586) ((##vcore.cdr (bruijn ##.l.597 7 2))) (##qualified-call (vanity compiler lower to-functions ##.multi-partition.319 ##.loop.595) #f (bruijn ##.loop.595 8 0) (bruijn ##.%k.1472 7 0) (bruijn ##.ret.596 7 1) (bruijn ##.%x.2586 0 0)))
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
  // (basic-block 1 1 (##.%x.2585) ((##vcore.cons (bruijn ##.%x.2584 2 0) (bruijn ##.%x.1478 1 0))) ((bruijn ##.list-set!.247 13 4) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k301) (bruijn ##.ret.596 6 1) (bruijn ##.split.598 3 0) (bruijn ##.%x.2585 0 0)))
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
  // (basic-block 1 1 (##.%x.2584) ((##vcore.car (bruijn ##.l.597 4 2))) ((bruijn ##.list-ref.246 11 3) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k300) (bruijn ##.ret.596 4 1) (bruijn ##.split.598 1 0)))
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
  // (basic-block 1 1 (##.%p.2582) ((##vcore.null? (bruijn ##.l.597 1 2))) (if (bruijn ##.%p.2582 0 0) ((bruijn ##.map.245 8 2) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k298) (bruijn ##.reverse.252 8 9) (bruijn ##.ret.596 1 1)) (basic-block 1 1 (##.%x.2583) ((##vcore.car (bruijn ##.l.597 2 2))) ((bruijn ##.f.592 4 1) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V10_Dmulti__partition_D319_V10_Dloop_D595_V0k299) (bruijn ##.%x.2583 0 0)))))
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
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.319 ##.loop.595) #f (bruijn ##.loop.595 1 0) (bruijn ##.%k.1471 2 0) (bruijn ##.%x.1480 0 0) (bruijn ##.l.594 2 3))
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
  // ((bruijn ##.%x.1494 0 0) (bruijn ##.%k.1492 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1495 0 0) 1)
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
  // (if (bruijn ##.%p.1493 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k305) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda67) (bruijn ##.kk.108.600 4 1)) ((bruijn ##.%k.1492 2 0) #f))
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
  // (if (bruijn ##.%p.2587 1 0) (basic-block 1 1 (##.%x.2590) ((##vcore.car (bruijn ##.e.599 4 1))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k304) '##foreign.declare (bruijn ##.%x.2590 0 0))) ((bruijn ##.%k.1492 0 0) #f))
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
  // ((bruijn ##.%x.1488 0 0) (bruijn ##.%k.1486 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1489 0 0) 1)
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
  // (if (bruijn ##.%p.1487 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k309) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda68) (bruijn ##.kk.108.600 5 1)) ((bruijn ##.%k.1486 2 0) #f))
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
  // (if (bruijn ##.%p.2588 1 0) (basic-block 1 1 (##.%x.2589) ((##vcore.car (bruijn ##.e.599 5 1))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k308) '##vcore.declare (bruijn ##.%x.2589 0 0))) ((bruijn ##.%k.1486 0 0) #f))
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
  // ((bruijn ##.%k.1484 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k310(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1483 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda69) (bruijn ##.kk.108.600 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda69, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k306(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2588) ((##vcore.pair? (bruijn ##.e.599 3 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k307) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k310)))
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
  // (basic-block 1 1 (##.%p.2587) ((##vcore.pair? (bruijn ##.e.599 2 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k303) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0k306)))
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
  // (##vcore.call/cc (bruijn ##.%k.1482 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda66))
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
  // (##qualified-call (vanity compiler lower to-functions ##.multi-partition.319) #f (bruijn ##.multi-partition.319 1 18) (bruijn ##.%k.1481 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0to__functions_V0lambda65) 2 (bruijn ##.exprs.298 3 1))
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
  // ((bruijn ##.list.244 9 1) (bruijn ##.%k.1497 4 0) (bruijn ##.static-environments.309 5 8) (bruijn ##.literal-table.307 5 6) (bruijn ##.%x.1500 1 0) (bruijn ##.%x.1501 0 0) (bruijn ##.functions.306 5 5) (bruijn ##.qualified-functions.303 5 2) (bruijn ##.declares.1499 2 0) (bruijn ##.toplevels.1498 3 0))
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
  // (##qualified-call (vanity compiler lower to-functions ##.tofunctions-iter.317) #f (bruijn ##.tofunctions-iter.317 2 16) (bruijn ##.%k.1502 0 0) (##string ##.string.2986) (bruijn ##.e.608 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[16]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D2986.sym, VPOINTER_OTHER);
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
  // (if (bruijn ##.x.7.619 0 0) ((bruijn ##.list.244 7 1) (bruijn ##.%k.1504 3 0) 'bruijn (bruijn ##.x.618 3 3) (bruijn ##.depth.616 3 1) (bruijn ##.x.7.619 0 0)) (basic-block 2 2 (##.%x.2593 ##.%x.2594) ((##vcore.+ 1 (bruijn ##.depth.616 4 1)) (##vcore.cdr (bruijn ##.env.617 4 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.lookup.611) #f (bruijn ##.lookup.611 5 0) (bruijn ##.%k.1504 4 0) (bruijn ##.%x.2593 0 0) (bruijn ##.%x.2594 0 1) (bruijn ##.x.618 4 3))))
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
  // (basic-block 1 1 (##.%r.2595) ((##vcore.eq? (bruijn ##.x.618 4 3) (bruijn ##.e.621 1 1))) ((bruijn ##.%k.1508 1 0) (bruijn ##.%r.2595 0 0)))
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
  // (basic-block 1 1 (##.%p.2591) ((##vcore.null? (bruijn ##.env.617 1 2))) (if (bruijn ##.%p.2591 0 0) ((bruijn ##.%k.1504 1 0) (bruijn ##.x.618 1 3)) (basic-block 1 1 (##.%x.2592) ((##vcore.car (bruijn ##.env.617 2 2))) (##qualified-call (vanity compiler lower list-index) #t (bruijn ##.list-index.297 5 6) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611_V0k315) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611_V0lambda72) (bruijn ##.%x.2592 0 0)))))
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
  // (basic-block 1 1 (##.%r.2599) ((##vcore.cons (bruijn ##.%x.2597 2 0) (bruijn ##.%x.1513 1 0))) ((bruijn ##.%k.1510 4 0) (bruijn ##.%r.2599 0 0)))
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
  // (basic-block 1 1 (##.%p.2596) ((##vcore.pair? (bruijn ##.lst.622 1 1))) (if (bruijn ##.%p.2596 0 0) (basic-block 2 2 (##.%x.2597 ##.%x.2598) ((##vcore.car (bruijn ##.lst.622 2 1)) (##vcore.cdr (bruijn ##.lst.622 2 1))) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 3 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612_V0k316) (bruijn ##.%x.2598 0 1))) (basic-block 1 1 (##.%p.2600) ((##vcore.null? (bruijn ##.lst.622 2 1))) (if (bruijn ##.%p.2600 0 0) ((bruijn ##.%k.1510 2 0) '()) (basic-block 1 1 (##.%r.2601) ((##vcore.cons (bruijn ##.lst.622 3 1) '())) ((bruijn ##.%k.1510 3 0) (bruijn ##.%r.2601 0 0)))))))
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
  // ((bruijn ##.%x.1540 0 0) (bruijn ##.%k.1536 6 0))
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
  // (basic-block 2 2 (##.%x.2625 ##.%r.2626) ((##vcore.cons (bruijn ##.%x.1544 1 0) '()) (##vcore.cons (bruijn ##.%x.1542 5 0) (bruijn ##.%x.2625 0 0))) ((bruijn ##.%k.1541 6 0) (bruijn ##.%r.2626 0 1)))
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
  // (basic-block 1 1 (##.%x.2624) ((##vcore.cons (bruijn ##.%x.1547 1 0) (bruijn ##.unmangled-env.624 13 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 14 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k321) (bruijn ##.%x.2623 2 0) (bruijn ##.%x.2624 0 0) (bruijn ##.body.2620 5 0)))
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
  // (basic-block 1 1 (##.%x.2623) ((##vcore.cons (bruijn ##.xs.637 6 1) (bruijn ##.env.623 11 1))) (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 14 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k320) (bruijn ##.xs.637 6 1)))
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
  // (basic-block 1 1 (##.%p.2617) ((##vcore.null? (bruijn ##.tail-expr.636 1 0))) (if (bruijn ##.%p.2617 0 0) (basic-block 2 2 (##.expr.16.2618 ##.%p.2619) ((##vcore.cdr (bruijn ##.lamb.625 7 3)) (##vcore.pair? (bruijn ##.expr.16.2618 0 0))) (if (bruijn ##.%p.2619 0 1) (basic-block 3 3 (##.body.2620 ##.%x.2621 ##.%p.2622) ((##vcore.car (bruijn ##.expr.16.2618 1 0)) (##vcore.cdr (bruijn ##.expr.16.2618 1 0)) (##vcore.null? (bruijn ##.%x.2621 0 1))) (if (bruijn ##.%p.2622 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k318) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda75) (bruijn ##.kk.8.626 7 1)) ((bruijn ##.%k.1536 5 0) #f))) ((bruijn ##.%k.1536 4 0) #f))) ((bruijn ##.%k.1536 3 0) #f)))
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
  // ((bruijn ##.kk.13.630 5 1) (bruijn ##.%k.1557 1 0) (bruijn ##.expr.15.632 3 1) (bruijn ##.%x.1558 0 0))
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
  // (if (bruijn ##.%p.2628 1 1) ((bruijn ##.reverse.252 13 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k323) (bruijn ##.xs.12.633 2 2)) ((bruijn ##.%k.1557 0 0) #f))
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
  // ((bruijn ##.kk.13.630 7 1) (bruijn ##.%k.1552 2 0) (bruijn ##.expr.15.632 5 1) (bruijn ##.%x.1553 0 0))
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
  // (basic-block 3 3 (##.xs.2629 ##.%x.2630 ##.%x.2631) ((##vcore.car (bruijn ##.expr.15.632 4 1)) (##vcore.cdr (bruijn ##.expr.15.632 4 1)) (##vcore.cons (bruijn ##.xs.2629 0 0) (bruijn ##.xs.12.633 4 2))) ((bruijn ##.kk.14.634 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k325) (bruijn ##.%x.2630 0 1) (bruijn ##.%x.2631 0 2)))
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
  // (##vcore.call/cc (bruijn ##.%k.1551 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0lambda78))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0lambda78, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k324(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1550 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0lambda77) (bruijn ##.loop.631 2 0))
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
  // (basic-block 2 2 (##.%x.2627 ##.%p.2628) ((##vcore.pair? (bruijn ##.expr.15.632 1 1)) (##vcore.not (bruijn ##.%x.2627 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k322) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631_V0k324)))
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V10_Dloop_D631")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.613 ##.loop.631) #f (bruijn ##.loop.631 0 0) (bruijn ##.%k.1549 1 0) (bruijn ##.expr.11.2616 2 0) '()))
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
  // (if (bruijn ##.%p.2602 1 0) (basic-block 1 1 (##.expr.11.2616) ((##vcore.car (bruijn ##.lamb.625 4 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda74) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda76))) ((bruijn ##.%k.1536 0 0) #f))
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
  // ((bruijn ##.%x.1523 0 0) (bruijn ##.%k.1520 3 0))
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
  // (basic-block 3 3 (##.%x.2613 ##.%x.2614 ##.%r.2615) ((##vcore.cons (bruijn ##.%x.1528 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2613 0 0)) (##vcore.cons (bruijn ##.%x.2610 5 0) (bruijn ##.%x.2614 0 1))) ((bruijn ##.%k.1524 8 0) (bruijn ##.%r.2615 0 2)))
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
  // (basic-block 1 1 (##.%x.2612) ((##vcore.cons (bruijn ##.%x.1531 1 0) (bruijn ##.unmangled-env.624 13 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 14 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k334) (bruijn ##.%x.2611 3 1) (bruijn ##.%x.2612 0 0) (bruijn ##.body.2607 7 0)))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 12 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k333) (bruijn ##.%x.1532 0 0))
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
  // (basic-block 2 2 (##.%x.2610 ##.%x.2611) ((##vcore.- (bruijn ##.%x.1533 1 0) 1) (##vcore.cons (bruijn ##.proper-xs.644 2 0) (bruijn ##.env.623 10 1))) (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 13 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k332) (bruijn ##.xs.2604 5 0)))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 8 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k330) (bruijn ##.xs.2604 2 0))
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
  // (if (bruijn ##.%p.2603 1 0) (basic-block 3 3 (##.xs.2604 ##.expr.18.2605 ##.%p.2606) ((##vcore.car (bruijn ##.lamb.625 5 3)) (##vcore.cdr (bruijn ##.lamb.625 5 3)) (##vcore.pair? (bruijn ##.expr.18.2605 0 1))) (if (bruijn ##.%p.2606 0 2) (basic-block 3 3 (##.body.2607 ##.%x.2608 ##.%p.2609) ((##vcore.car (bruijn ##.expr.18.2605 1 1)) (##vcore.cdr (bruijn ##.expr.18.2605 1 1)) (##vcore.null? (bruijn ##.%x.2608 0 1))) (if (bruijn ##.%p.2609 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k329) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda79) (bruijn ##.kk.8.626 5 1)) ((bruijn ##.%k.1520 2 0) #f))) ((bruijn ##.%k.1520 1 0) #f))) ((bruijn ##.%k.1520 0 0) #f))
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
  // ((bruijn ##.compiler-error.259 8 16) (bruijn ##.%k.1518 0 0) (##string ##.string.2987) (bruijn ##.lamb.625 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 16)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2987.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[3]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k335(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1517 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda80) (bruijn ##.kk.8.626 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda80, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k327(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2603) ((##vcore.pair? (bruijn ##.lamb.625 3 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k328) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k335)))
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
  // (basic-block 1 1 (##.%p.2602) ((##vcore.pair? (bruijn ##.lamb.625 2 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k317) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0k327)))
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
  // (##vcore.call/cc (bruijn ##.%k.1516 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613_V0lambda73))
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
  // ((bruijn ##.%x.1936 0 0) (bruijn ##.%k.1930 9 0))
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
  // (if (bruijn ##.debug?.610 17 2) (basic-block 4 4 (##.%x.2940 ##.%x.2941 ##.%x.2942 ##.%r.2943) ((##vcore.cons (bruijn ##.unmangled-formals.663 2 0) '()) (##vcore.cons '#f (bruijn ##.%x.2940 0 0)) (##vcore.cons (bruijn ##.unmangled-env.646 16 2) '()) (##vcore.cons (bruijn ##.%x.2941 0 1) (bruijn ##.%x.2942 0 2))) ((bruijn ##.%k.1947 1 0) (bruijn ##.%r.2943 0 3))) ((bruijn ##.%k.1947 0 0) #f))
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
  // (basic-block 4 4 (##.%x.2936 ##.%x.2937 ##.%x.2938 ##.%r.2939) ((##vcore.cons (bruijn ##.%x.1944 1 0) '()) (##vcore.cons (bruijn ##.%x.1942 3 0) (bruijn ##.%x.2936 0 0)) (##vcore.cons (bruijn ##.%x.1940 4 0) (bruijn ##.%x.2937 0 1)) (##vcore.cons 'lambda (bruijn ##.%x.2938 0 2))) ((bruijn ##.%k.1937 7 0) (bruijn ##.%r.2939 0 3)))
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
  // (basic-block 2 2 (##.%x.2934 ##.%x.2935) ((##vcore.cons (bruijn ##.xs.660 9 1) (bruijn ##.env.645 17 1)) (##vcore.cons (bruijn ##.unmangled-formals.663 3 0) (bruijn ##.unmangled-env.646 17 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 18 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k343) (bruijn ##.%x.2934 0 0) (bruijn ##.%x.2935 0 1) (bruijn ##.body.2931 6 0)))
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
  // (letrec 1 ((bruijn ##.%x.1938 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k340) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k341)))
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
  // (basic-block 1 1 (##.%p.2928) ((##vcore.null? (bruijn ##.tail-expr.659 1 0))) (if (bruijn ##.%p.2928 0 0) (basic-block 2 2 (##.expr.28.2929 ##.%p.2930) ((##vcore.cdr (bruijn ##.expr.22.2925 4 0)) (##vcore.pair? (bruijn ##.expr.28.2929 0 0))) (if (bruijn ##.%p.2930 0 1) (basic-block 3 3 (##.body.2931 ##.%x.2932 ##.%p.2933) ((##vcore.car (bruijn ##.expr.28.2929 1 0)) (##vcore.cdr (bruijn ##.expr.28.2929 1 0)) (##vcore.null? (bruijn ##.%x.2932 0 1))) (if (bruijn ##.%p.2933 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k338) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda83) (bruijn ##.kk.19.648 10 1)) ((bruijn ##.%k.1930 8 0) #f))) ((bruijn ##.%k.1930 7 0) #f))) ((bruijn ##.%k.1930 6 0) #f)))
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
  // ((bruijn ##.kk.25.653 5 1) (bruijn ##.%k.1960 1 0) (bruijn ##.expr.27.655 3 1) (bruijn ##.%x.1961 0 0))
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
  // (if (bruijn ##.%p.2945 1 1) ((bruijn ##.reverse.252 16 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k345) (bruijn ##.xs.24.656 2 2)) ((bruijn ##.%k.1960 0 0) #f))
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
  // ((bruijn ##.kk.25.653 7 1) (bruijn ##.%k.1955 2 0) (bruijn ##.expr.27.655 5 1) (bruijn ##.%x.1956 0 0))
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
  // (basic-block 3 3 (##.xs.2946 ##.%x.2947 ##.%x.2948) ((##vcore.car (bruijn ##.expr.27.655 4 1)) (##vcore.cdr (bruijn ##.expr.27.655 4 1)) (##vcore.cons (bruijn ##.xs.2946 0 0) (bruijn ##.xs.24.656 4 2))) ((bruijn ##.kk.26.657 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k347) (bruijn ##.%x.2947 0 1) (bruijn ##.%x.2948 0 2)))
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
  // (##vcore.call/cc (bruijn ##.%k.1954 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0lambda86))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0lambda86, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k346(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1953 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0lambda85) (bruijn ##.loop.654 2 0))
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
  // (basic-block 2 2 (##.%x.2944 ##.%p.2945) ((##vcore.pair? (bruijn ##.expr.27.655 1 1)) (##vcore.not (bruijn ##.%x.2944 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k344) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654_V0k346)))
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D654")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.654) #f (bruijn ##.loop.654 0 0) (bruijn ##.%k.1952 1 0) (bruijn ##.expr.23.2927 2 0) '()))
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
  // (if (bruijn ##.%p.1931 0 0) (basic-block 2 2 (##.expr.22.2925 ##.%p.2926) ((##vcore.cdr (bruijn ##.expr.647 6 3)) (##vcore.pair? (bruijn ##.expr.22.2925 0 0))) (if (bruijn ##.%p.2926 0 1) (basic-block 1 1 (##.expr.23.2927) ((##vcore.car (bruijn ##.expr.22.2925 1 0))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda82) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda84))) ((bruijn ##.%k.1930 3 0) #f))) ((bruijn ##.%k.1930 2 0) #f))
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
  // (if (bruijn ##.%p.2632 1 0) (basic-block 1 1 (##.%x.2924) ((##vcore.car (bruijn ##.expr.647 4 3))) ((bruijn ##.equal?.243 8 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k337) 'lambda (bruijn ##.%x.2924 0 0))) ((bruijn ##.%k.1930 0 0) #f))
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
  // ((bruijn ##.%x.1909 0 0) (bruijn ##.%k.1904 6 0))
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
  // (if (bruijn ##.debug?.610 16 2) (basic-block 4 4 (##.%x.2920 ##.%x.2921 ##.%x.2922 ##.%r.2923) ((##vcore.cons (bruijn ##.unmangled-formals.669 3 0) '()) (##vcore.cons '#f (bruijn ##.%x.2920 0 0)) (##vcore.cons (bruijn ##.unmangled-env.646 15 2) '()) (##vcore.cons (bruijn ##.%x.2921 0 1) (bruijn ##.%x.2922 0 2))) ((bruijn ##.%k.1923 1 0) (bruijn ##.%r.2923 0 3))) ((bruijn ##.%k.1923 0 0) #f))
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
  // (basic-block 5 5 (##.%x.2915 ##.%x.2916 ##.%x.2917 ##.%x.2918 ##.%r.2919) ((##vcore.cons (bruijn ##.%x.1918 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2915 0 0)) (##vcore.cons (bruijn ##.%x.2912 4 0) (bruijn ##.%x.2916 0 1)) (##vcore.cons (bruijn ##.%x.1913 6 0) (bruijn ##.%x.2917 0 2)) (##vcore.cons 'lambda (bruijn ##.%x.2918 0 3))) ((bruijn ##.%k.1910 10 0) (bruijn ##.%r.2919 0 4)))
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
  // (basic-block 1 1 (##.%x.2914) ((##vcore.cons (bruijn ##.%x.1921 1 0) (bruijn ##.unmangled-env.646 18 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 19 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k359) (bruijn ##.%x.2913 2 1) (bruijn ##.%x.2914 0 0) (bruijn ##.body.2909 9 0)))
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
  // (basic-block 2 2 (##.%x.2912 ##.%x.2913) ((##vcore.- (bruijn ##.%x.1922 1 0) 1) (##vcore.cons (bruijn ##.proper-xs.670 3 0) (bruijn ##.env.645 16 1))) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 17 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k358) (bruijn ##.unmangled-formals.669 4 0)))
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
  // (letrec 1 ((bruijn ##.%x.1911 1 0)) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 13 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k354) (bruijn ##.xs.2906 4 0)))
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
  // (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 13 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k353) (bruijn ##.xs.2906 2 0))
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
  // (if (bruijn ##.%p.1905 0 0) (basic-block 2 2 (##.expr.30.2904 ##.%p.2905) ((##vcore.cdr (bruijn ##.expr.647 7 3)) (##vcore.pair? (bruijn ##.expr.30.2904 0 0))) (if (bruijn ##.%p.2905 0 1) (basic-block 3 3 (##.xs.2906 ##.expr.31.2907 ##.%p.2908) ((##vcore.car (bruijn ##.expr.30.2904 1 0)) (##vcore.cdr (bruijn ##.expr.30.2904 1 0)) (##vcore.pair? (bruijn ##.expr.31.2907 0 1))) (if (bruijn ##.%p.2908 0 2) (basic-block 3 3 (##.body.2909 ##.%x.2910 ##.%p.2911) ((##vcore.car (bruijn ##.expr.31.2907 1 1)) (##vcore.cdr (bruijn ##.expr.31.2907 1 1)) (##vcore.null? (bruijn ##.%x.2910 0 1))) (if (bruijn ##.%p.2911 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k352) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda87) (bruijn ##.kk.19.648 8 1)) ((bruijn ##.%k.1904 5 0) #f))) ((bruijn ##.%k.1904 4 0) #f))) ((bruijn ##.%k.1904 3 0) #f))) ((bruijn ##.%k.1904 2 0) #f))
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
  // (if (bruijn ##.%p.2633 1 0) (basic-block 1 1 (##.%x.2903) ((##vcore.car (bruijn ##.expr.647 5 3))) ((bruijn ##.equal?.243 9 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k351) 'lambda (bruijn ##.%x.2903 0 0))) ((bruijn ##.%k.1904 0 0) #f))
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
  // ((bruijn ##.%x.1873 0 0) (bruijn ##.%k.1865 11 0))
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
  // (if (bruijn ##.debug?.610 21 2) (basic-block 4 4 (##.%x.2894 ##.%x.2895 ##.%x.2896 ##.%r.2897) ((##vcore.cons (bruijn ##.unmangled-formals.688 2 0) '()) (##vcore.cons (bruijn ##.name.2873 11 0) (bruijn ##.%x.2894 0 0)) (##vcore.cons (bruijn ##.unmangled-env.646 20 2) '()) (##vcore.cons (bruijn ##.%x.2895 0 1) (bruijn ##.%x.2896 0 2))) ((bruijn ##.%k.1886 1 0) (bruijn ##.%r.2897 0 3))) ((bruijn ##.%k.1886 0 0) #f))
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
  // (basic-block 6 6 (##.%x.2888 ##.%x.2889 ##.%x.2890 ##.%x.2891 ##.%x.2892 ##.%r.2893) ((##vcore.cons (bruijn ##.%x.1883 1 0) '()) (##vcore.cons (bruijn ##.%x.1881 3 0) (bruijn ##.%x.2888 0 0)) (##vcore.cons (bruijn ##.%x.1879 4 0) (bruijn ##.%x.2889 0 1)) (##vcore.cons (bruijn ##.static?.2876 13 0) (bruijn ##.%x.2890 0 2)) (##vcore.cons (bruijn ##.name.2873 14 0) (bruijn ##.%x.2891 0 3)) (##vcore.cons '##qualified-lambda (bruijn ##.%x.2892 0 4))) ((bruijn ##.%k.1874 7 0) (bruijn ##.%r.2893 0 5)))
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
  // (basic-block 2 2 (##.%x.2886 ##.%x.2887) ((##vcore.cons (bruijn ##.xs.685 9 1) (bruijn ##.env.645 21 1)) (##vcore.cons (bruijn ##.unmangled-formals.688 3 0) (bruijn ##.unmangled-env.646 21 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 22 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k368) (bruijn ##.%x.2886 0 0) (bruijn ##.%x.2887 0 1) (bruijn ##.body.2883 6 0)))
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
  // (letrec 1 ((bruijn ##.%x.1875 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k365) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k366)))
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
  // (basic-block 1 1 (##.%p.2880) ((##vcore.null? (bruijn ##.tail-expr.684 1 0))) (if (bruijn ##.%p.2880 0 0) (basic-block 2 2 (##.expr.41.2881 ##.%p.2882) ((##vcore.cdr (bruijn ##.expr.35.2877 4 1)) (##vcore.pair? (bruijn ##.expr.41.2881 0 0))) (if (bruijn ##.%p.2882 0 1) (basic-block 3 3 (##.body.2883 ##.%x.2884 ##.%p.2885) ((##vcore.car (bruijn ##.expr.41.2881 1 0)) (##vcore.cdr (bruijn ##.expr.41.2881 1 0)) (##vcore.null? (bruijn ##.%x.2884 0 1))) (if (bruijn ##.%p.2885 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k363) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda89) (bruijn ##.kk.19.648 14 1)) ((bruijn ##.%k.1865 10 0) #f))) ((bruijn ##.%k.1865 9 0) #f))) ((bruijn ##.%k.1865 8 0) #f)))
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
  // ((bruijn ##.kk.38.678 5 1) (bruijn ##.%k.1899 1 0) (bruijn ##.expr.40.680 3 1) (bruijn ##.%x.1900 0 0))
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
  // (if (bruijn ##.%p.2899 1 1) ((bruijn ##.reverse.252 20 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k370) (bruijn ##.xs.37.681 2 2)) ((bruijn ##.%k.1899 0 0) #f))
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
  // ((bruijn ##.kk.38.678 7 1) (bruijn ##.%k.1894 2 0) (bruijn ##.expr.40.680 5 1) (bruijn ##.%x.1895 0 0))
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
  // (basic-block 3 3 (##.xs.2900 ##.%x.2901 ##.%x.2902) ((##vcore.car (bruijn ##.expr.40.680 4 1)) (##vcore.cdr (bruijn ##.expr.40.680 4 1)) (##vcore.cons (bruijn ##.xs.2900 0 0) (bruijn ##.xs.37.681 4 2))) ((bruijn ##.kk.39.682 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k372) (bruijn ##.%x.2901 0 1) (bruijn ##.%x.2902 0 2)))
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
  // (##vcore.call/cc (bruijn ##.%k.1893 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0lambda92))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0lambda92, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k371(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1892 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0lambda91) (bruijn ##.loop.679 2 0))
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
  // (basic-block 2 2 (##.%x.2898 ##.%p.2899) ((##vcore.pair? (bruijn ##.expr.40.680 1 1)) (##vcore.not (bruijn ##.%x.2898 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k369) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679_V0k371)))
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D679")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.679) #f (bruijn ##.loop.679 0 0) (bruijn ##.%k.1891 1 0) (bruijn ##.expr.36.2879 2 0) '()))
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
  // (if (bruijn ##.%p.1866 0 0) (basic-block 2 2 (##.expr.33.2871 ##.%p.2872) ((##vcore.cdr (bruijn ##.expr.647 8 3)) (##vcore.pair? (bruijn ##.expr.33.2871 0 0))) (if (bruijn ##.%p.2872 0 1) (basic-block 3 3 (##.name.2873 ##.expr.34.2874 ##.%p.2875) ((##vcore.car (bruijn ##.expr.33.2871 1 0)) (##vcore.cdr (bruijn ##.expr.33.2871 1 0)) (##vcore.pair? (bruijn ##.expr.34.2874 0 1))) (if (bruijn ##.%p.2875 0 2) (basic-block 3 3 (##.static?.2876 ##.expr.35.2877 ##.%p.2878) ((##vcore.car (bruijn ##.expr.34.2874 1 1)) (##vcore.cdr (bruijn ##.expr.34.2874 1 1)) (##vcore.pair? (bruijn ##.expr.35.2877 0 1))) (if (bruijn ##.%p.2878 0 2) (basic-block 1 1 (##.expr.36.2879) ((##vcore.car (bruijn ##.expr.35.2877 1 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda88) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda90))) ((bruijn ##.%k.1865 5 0) #f))) ((bruijn ##.%k.1865 4 0) #f))) ((bruijn ##.%k.1865 3 0) #f))) ((bruijn ##.%k.1865 2 0) #f))
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
  // (if (bruijn ##.%p.2634 1 0) (basic-block 1 1 (##.%x.2870) ((##vcore.car (bruijn ##.expr.647 6 3))) ((bruijn ##.equal?.243 10 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k362) '##qualified-lambda (bruijn ##.%x.2870 0 0))) ((bruijn ##.%k.1865 0 0) #f))
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
  // ((bruijn ##.%x.1842 0 0) (bruijn ##.%k.1835 8 0))
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
  // (if (bruijn ##.debug?.610 20 2) (basic-block 4 4 (##.%x.2866 ##.%x.2867 ##.%x.2868 ##.%r.2869) ((##vcore.cons (bruijn ##.unmangled-formals.698 3 0) '()) (##vcore.cons (bruijn ##.name.2844 9 0) (bruijn ##.%x.2866 0 0)) (##vcore.cons (bruijn ##.unmangled-env.646 19 2) '()) (##vcore.cons (bruijn ##.%x.2867 0 1) (bruijn ##.%x.2868 0 2))) ((bruijn ##.%k.1858 1 0) (bruijn ##.%r.2869 0 3))) ((bruijn ##.%k.1858 0 0) #f))
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
  // (basic-block 7 7 (##.%x.2859 ##.%x.2860 ##.%x.2861 ##.%x.2862 ##.%x.2863 ##.%x.2864 ##.%r.2865) ((##vcore.cons (bruijn ##.%x.1853 1 0) '()) (##vcore.cons '+ (bruijn ##.%x.2859 0 0)) (##vcore.cons (bruijn ##.%x.2856 4 0) (bruijn ##.%x.2860 0 1)) (##vcore.cons (bruijn ##.%x.1848 6 0) (bruijn ##.%x.2861 0 2)) (##vcore.cons (bruijn ##.static?.2847 13 0) (bruijn ##.%x.2862 0 3)) (##vcore.cons (bruijn ##.name.2844 14 0) (bruijn ##.%x.2863 0 4)) (##vcore.cons '##qualified-lambda (bruijn ##.%x.2864 0 5))) ((bruijn ##.%k.1843 10 0) (bruijn ##.%r.2865 0 6)))
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
  // (basic-block 1 1 (##.%x.2858) ((##vcore.cons (bruijn ##.%x.1856 1 0) (bruijn ##.unmangled-env.646 22 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 23 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k384) (bruijn ##.%x.2857 2 1) (bruijn ##.%x.2858 0 0) (bruijn ##.body.2853 9 0)))
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
  // (basic-block 2 2 (##.%x.2856 ##.%x.2857) ((##vcore.- (bruijn ##.%x.1857 1 0) 1) (##vcore.cons (bruijn ##.proper-xs.699 3 0) (bruijn ##.env.645 20 1))) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 21 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k383) (bruijn ##.unmangled-formals.698 4 0)))
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
  // (letrec 1 ((bruijn ##.%x.1844 1 0)) (##qualified-call (vanity compiler lower bruijn-ify ##.undot.612) #f (bruijn ##.undot.612 17 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k379) (bruijn ##.xs.2850 4 0)))
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
  // (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 17 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k378) (bruijn ##.xs.2850 2 0))
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
  // (if (bruijn ##.%p.1836 0 0) (basic-block 2 2 (##.expr.43.2842 ##.%p.2843) ((##vcore.cdr (bruijn ##.expr.647 9 3)) (##vcore.pair? (bruijn ##.expr.43.2842 0 0))) (if (bruijn ##.%p.2843 0 1) (basic-block 3 3 (##.name.2844 ##.expr.44.2845 ##.%p.2846) ((##vcore.car (bruijn ##.expr.43.2842 1 0)) (##vcore.cdr (bruijn ##.expr.43.2842 1 0)) (##vcore.pair? (bruijn ##.expr.44.2845 0 1))) (if (bruijn ##.%p.2846 0 2) (basic-block 3 3 (##.static?.2847 ##.expr.45.2848 ##.%p.2849) ((##vcore.car (bruijn ##.expr.44.2845 1 1)) (##vcore.cdr (bruijn ##.expr.44.2845 1 1)) (##vcore.pair? (bruijn ##.expr.45.2848 0 1))) (if (bruijn ##.%p.2849 0 2) (basic-block 3 3 (##.xs.2850 ##.expr.46.2851 ##.%p.2852) ((##vcore.car (bruijn ##.expr.45.2848 1 1)) (##vcore.cdr (bruijn ##.expr.45.2848 1 1)) (##vcore.pair? (bruijn ##.expr.46.2851 0 1))) (if (bruijn ##.%p.2852 0 2) (basic-block 3 3 (##.body.2853 ##.%x.2854 ##.%p.2855) ((##vcore.car (bruijn ##.expr.46.2851 1 1)) (##vcore.cdr (bruijn ##.expr.46.2851 1 1)) (##vcore.null? (bruijn ##.%x.2854 0 1))) (if (bruijn ##.%p.2855 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k377) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda93) (bruijn ##.kk.19.648 12 1)) ((bruijn ##.%k.1835 7 0) #f))) ((bruijn ##.%k.1835 6 0) #f))) ((bruijn ##.%k.1835 5 0) #f))) ((bruijn ##.%k.1835 4 0) #f))) ((bruijn ##.%k.1835 3 0) #f))) ((bruijn ##.%k.1835 2 0) #f))
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
  // (if (bruijn ##.%p.2635 1 0) (basic-block 1 1 (##.%x.2841) ((##vcore.car (bruijn ##.expr.647 7 3))) ((bruijn ##.equal?.243 11 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k376) '##qualified-lambda (bruijn ##.%x.2841 0 0))) ((bruijn ##.%k.1835 0 0) #f))
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
  // ((bruijn ##.%x.1821 0 0) (bruijn ##.%k.1819 4 0))
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
  // (basic-block 3 3 (##.%x.2837 ##.%x.2838 ##.%r.2839) ((##vcore.cons '#f (bruijn ##.%x.1830 1 0)) (##vcore.cons (bruijn ##.unmangled-env.646 14 2) '()) (##vcore.cons (bruijn ##.%x.2837 0 0) (bruijn ##.%x.2838 0 1))) ((bruijn ##.%k.1827 2 0) (bruijn ##.%r.2839 0 2)))
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
  // (basic-block 1 1 (##.%x.2840) ((##vcore.car (bruijn ##.e.702 1 1))) (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 17 4) (bruijn ##.%k.1831 1 0) (bruijn ##.%x.2840 0 0)))
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
  // (if (bruijn ##.debug?.610 14 2) ((bruijn ##.map.245 16 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k390) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda95) (bruijn ##.cases.2834 2 0)) ((bruijn ##.%k.1827 0 0) #f))
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
  // (basic-block 2 2 (##.%x.2835 ##.%r.2836) ((##vcore.cons (bruijn ##.%x.1824 2 0) (bruijn ##.%x.1825 1 0)) (##vcore.cons 'case-lambda (bruijn ##.%x.2835 0 0))) ((bruijn ##.%k.1822 3 0) (bruijn ##.%r.2836 0 1)))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.613) #f (bruijn ##.bruijn-lambda.613 14 2) (bruijn ##.%k.1826 0 0) (bruijn ##.env.645 13 1) (bruijn ##.unmangled-env.646 13 2) (bruijn ##.e.703 0 1))
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
  // ((bruijn ##.map.245 16 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k392) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda96) (bruijn ##.cases.2834 2 0))
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
  // (if (bruijn ##.%p.1820 0 0) (basic-block 1 1 (##.cases.2834) ((##vcore.cdr (bruijn ##.expr.647 10 3))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k388) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda94) (bruijn ##.kk.19.648 9 1))) ((bruijn ##.%k.1819 2 0) #f))
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
  // (if (bruijn ##.%p.2636 1 0) (basic-block 1 1 (##.%x.2833) ((##vcore.car (bruijn ##.expr.647 8 3))) ((bruijn ##.equal?.243 12 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k387) 'case-lambda (bruijn ##.%x.2833 0 0))) ((bruijn ##.%k.1819 0 0) #f))
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
  // ((bruijn ##.%x.1803 0 0) (bruijn ##.%k.1799 6 0))
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
  // (basic-block 3 3 (##.%x.2829 ##.%x.2830 ##.%r.2831) ((##vcore.cons (bruijn ##.name.2820 5 0) (bruijn ##.%x.1814 1 0)) (##vcore.cons (bruijn ##.unmangled-env.646 17 2) '()) (##vcore.cons (bruijn ##.%x.2829 0 0) (bruijn ##.%x.2830 0 1))) ((bruijn ##.%k.1811 2 0) (bruijn ##.%r.2831 0 2)))
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
  // (basic-block 1 1 (##.%x.2832) ((##vcore.car (bruijn ##.e.710 1 1))) (##qualified-call (vanity compiler lower unmangle-formals) #t (bruijn ##.unmangle-formals.295 20 4) (bruijn ##.%k.1815 1 0) (bruijn ##.%x.2832 0 0)))
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
  // (if (bruijn ##.debug?.610 17 2) ((bruijn ##.map.245 19 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k398) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda98) (bruijn ##.cases.2824 2 1)) ((bruijn ##.%k.1811 0 0) #f))
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
  // (basic-block 4 4 (##.%x.2825 ##.%x.2826 ##.%x.2827 ##.%r.2828) ((##vcore.cons (bruijn ##.%x.1808 2 0) (bruijn ##.%x.1809 1 0)) (##vcore.cons (bruijn ##.static?.2823 4 0) (bruijn ##.%x.2825 0 0)) (##vcore.cons (bruijn ##.name.2820 5 0) (bruijn ##.%x.2826 0 1)) (##vcore.cons '##qualified-case-lambda (bruijn ##.%x.2827 0 2))) ((bruijn ##.%k.1804 3 0) (bruijn ##.%r.2828 0 3)))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-lambda.613) #f (bruijn ##.bruijn-lambda.613 17 2) (bruijn ##.%k.1810 0 0) (bruijn ##.env.645 16 1) (bruijn ##.unmangled-env.646 16 2) (bruijn ##.e.711 0 1))
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
  // ((bruijn ##.map.245 19 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k400) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda99) (bruijn ##.cases.2824 2 1))
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
  // (if (bruijn ##.%p.1800 0 0) (basic-block 2 2 (##.expr.49.2818 ##.%p.2819) ((##vcore.cdr (bruijn ##.expr.647 11 3)) (##vcore.pair? (bruijn ##.expr.49.2818 0 0))) (if (bruijn ##.%p.2819 0 1) (basic-block 3 3 (##.name.2820 ##.expr.50.2821 ##.%p.2822) ((##vcore.car (bruijn ##.expr.49.2818 1 0)) (##vcore.cdr (bruijn ##.expr.49.2818 1 0)) (##vcore.pair? (bruijn ##.expr.50.2821 0 1))) (if (bruijn ##.%p.2822 0 2) (basic-block 2 2 (##.static?.2823 ##.cases.2824) ((##vcore.car (bruijn ##.expr.50.2821 1 1)) (##vcore.cdr (bruijn ##.expr.50.2821 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k396) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda97) (bruijn ##.kk.19.648 12 1))) ((bruijn ##.%k.1799 4 0) #f))) ((bruijn ##.%k.1799 3 0) #f))) ((bruijn ##.%k.1799 2 0) #f))
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
  // (if (bruijn ##.%p.2637 1 0) (basic-block 1 1 (##.%x.2817) ((##vcore.car (bruijn ##.expr.647 9 3))) ((bruijn ##.equal?.243 13 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k395) '##qualified-case-lambda (bruijn ##.%x.2817 0 0))) ((bruijn ##.%k.1799 0 0) #f))
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
  // ((bruijn ##.%x.1779 0 0) (bruijn ##.%k.1772 8 0))
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
  // (if (bruijn ##.debug?.610 23 2) (basic-block 4 4 (##.%x.2813 ##.%x.2814 ##.%x.2815 ##.%r.2816) ((##vcore.cons (bruijn ##.unmangled-formals.718 2 0) '()) (##vcore.cons '#f (bruijn ##.%x.2813 0 0)) (##vcore.cons (bruijn ##.unmangled-env.646 22 2) '()) (##vcore.cons (bruijn ##.%x.2814 0 1) (bruijn ##.%x.2815 0 2))) ((bruijn ##.%k.1790 1 0) (bruijn ##.%r.2816 0 3))) ((bruijn ##.%k.1790 0 0) #f))
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
  // (basic-block 4 4 (##.%x.2809 ##.%x.2810 ##.%x.2811 ##.%r.2812) ((##vcore.cons (bruijn ##.%x.1786 1 0) '()) (##vcore.cons '1 (bruijn ##.%x.2809 0 0)) (##vcore.cons (bruijn ##.%x.1783 4 0) (bruijn ##.%x.2810 0 1)) (##vcore.cons 'continuation (bruijn ##.%x.2811 0 2))) ((bruijn ##.%k.1780 8 0) (bruijn ##.%r.2812 0 3)))
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
  // (basic-block 2 2 (##.%x.2807 ##.%x.2808) ((##vcore.cons (bruijn ##.%x.1789 1 0) (bruijn ##.env.645 23 1)) (##vcore.cons (bruijn ##.unmangled-formals.718 3 0) (bruijn ##.unmangled-env.646 23 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 24 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k410) (bruijn ##.%x.2807 0 0) (bruijn ##.%x.2808 0 1) (bruijn ##.body.2804 7 0)))
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
  // ((bruijn ##.list.244 25 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k409) (bruijn ##.x.2799 7 0))
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
  // (letrec 1 ((bruijn ##.%x.1781 1 0)) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k407) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k408)))
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
  // ((bruijn ##.list.244 22 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k406) (bruijn ##.%x.1794 0 0))
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
  // ((bruijn ##.ungensym.269 21 26) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k405) (bruijn ##.x.2799 3 0))
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
  // (if (bruijn ##.%p.1773 0 0) (basic-block 2 2 (##.expr.52.2795 ##.%p.2796) ((##vcore.cdr (bruijn ##.expr.647 12 3)) (##vcore.pair? (bruijn ##.expr.52.2795 0 0))) (if (bruijn ##.%p.2796 0 1) (basic-block 2 2 (##.expr.53.2797 ##.%p.2798) ((##vcore.car (bruijn ##.expr.52.2795 1 0)) (##vcore.pair? (bruijn ##.expr.53.2797 0 0))) (if (bruijn ##.%p.2798 0 1) (basic-block 3 3 (##.x.2799 ##.%x.2800 ##.%p.2801) ((##vcore.car (bruijn ##.expr.53.2797 1 0)) (##vcore.cdr (bruijn ##.expr.53.2797 1 0)) (##vcore.null? (bruijn ##.%x.2800 0 1))) (if (bruijn ##.%p.2801 0 2) (basic-block 2 2 (##.expr.54.2802 ##.%p.2803) ((##vcore.cdr (bruijn ##.expr.52.2795 3 0)) (##vcore.pair? (bruijn ##.expr.54.2802 0 0))) (if (bruijn ##.%p.2803 0 1) (basic-block 3 3 (##.body.2804 ##.%x.2805 ##.%p.2806) ((##vcore.car (bruijn ##.expr.54.2802 1 0)) (##vcore.cdr (bruijn ##.expr.54.2802 1 0)) (##vcore.null? (bruijn ##.%x.2805 0 1))) (if (bruijn ##.%p.2806 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k404) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda100) (bruijn ##.kk.19.648 15 1)) ((bruijn ##.%k.1772 7 0) #f))) ((bruijn ##.%k.1772 6 0) #f))) ((bruijn ##.%k.1772 5 0) #f))) ((bruijn ##.%k.1772 4 0) #f))) ((bruijn ##.%k.1772 3 0) #f))) ((bruijn ##.%k.1772 2 0) #f))
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
  // (if (bruijn ##.%p.2638 1 0) (basic-block 1 1 (##.%x.2794) ((##vcore.car (bruijn ##.expr.647 10 3))) ((bruijn ##.equal?.243 14 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k403) 'continuation (bruijn ##.%x.2794 0 0))) ((bruijn ##.%k.1772 0 0) #f))
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
  // ((bruijn ##.%x.1761 0 0) (bruijn ##.%k.1757 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.debug?.610 18 2) ((bruijn ##.%k.1768 0 0) '(##pair ##.pair.2993)) ((bruijn ##.%k.1768 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 18-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D2993, VPOINTER_PAIR));
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
  // (basic-block 4 4 (##.%x.2790 ##.%x.2791 ##.%x.2792 ##.%r.2793) ((##vcore.cons (bruijn ##.%x.1767 1 0) '()) (##vcore.cons '#f (bruijn ##.%x.2790 0 0)) (##vcore.cons (bruijn ##.%x.1764 2 0) (bruijn ##.%x.2791 0 1)) (##vcore.cons 'continuation (bruijn ##.%x.2792 0 2))) ((bruijn ##.%k.1762 3 0) (bruijn ##.%r.2793 0 3)))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 17 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k417) (bruijn ##.env.645 16 1) (bruijn ##.unmangled-env.646 16 2) (bruijn ##.body.2787 2 0))
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
  // (if (bruijn ##.%p.1758 0 0) (basic-block 2 2 (##.expr.56.2785 ##.%p.2786) ((##vcore.cdr (bruijn ##.expr.647 13 3)) (##vcore.pair? (bruijn ##.expr.56.2785 0 0))) (if (bruijn ##.%p.2786 0 1) (basic-block 3 3 (##.body.2787 ##.%x.2788 ##.%p.2789) ((##vcore.car (bruijn ##.expr.56.2785 1 0)) (##vcore.cdr (bruijn ##.expr.56.2785 1 0)) (##vcore.null? (bruijn ##.%x.2788 0 1))) (if (bruijn ##.%p.2789 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k414) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda101) (bruijn ##.kk.19.648 13 1)) ((bruijn ##.%k.1757 4 0) #f))) ((bruijn ##.%k.1757 3 0) #f))) ((bruijn ##.%k.1757 2 0) #f))
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
  // (if (bruijn ##.%p.2639 1 0) (basic-block 1 1 (##.%x.2784) ((##vcore.car (bruijn ##.expr.647 11 3))) ((bruijn ##.equal?.243 15 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k413) 'continuation (bruijn ##.%x.2784 0 0))) ((bruijn ##.%k.1757 0 0) #f))
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
  // ((bruijn ##.%x.1720 0 0) (bruijn ##.%k.1714 9 0))
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
  // (basic-block 5 5 (##.%x.2764 ##.%x.2765 ##.%x.2766 ##.%x.2767 ##.%r.2768) ((##vcore.cons (bruijn ##.%x.1729 1 0) '()) (##vcore.cons (bruijn ##.%x.1727 3 0) (bruijn ##.%x.2764 0 0)) (##vcore.cons (bruijn ##.xs.736 11 1) (bruijn ##.%x.2765 0 1)) (##vcore.cons (bruijn ##.%x.1724 4 0) (bruijn ##.%x.2766 0 2)) (##vcore.cons 'letrec (bruijn ##.%x.2767 0 3))) ((bruijn ##.%k.1721 7 0) (bruijn ##.%r.2768 0 4)))
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
  // (basic-block 2 2 (##.%x.2762 ##.%x.2763) ((##vcore.cons (bruijn ##.xs.736 9 1) (bruijn ##.env.645 25 1)) (##vcore.cons (bruijn ##.unmangled-formals.740 3 0) (bruijn ##.unmangled-env.646 25 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 26 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k425) (bruijn ##.%x.2762 0 0) (bruijn ##.%x.2763 0 1) (bruijn ##.body.2759 6 0)))
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
  // (basic-block 2 2 (##.%x.2769 ##.%x.2770) ((##vcore.cons (bruijn ##.xs.736 9 1) (bruijn ##.env.645 25 1)) (##vcore.cons (bruijn ##.unmangled-formals.740 3 0) (bruijn ##.unmangled-env.646 25 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 26 3) (bruijn ##.%k.1732 1 0) (bruijn ##.%x.2769 0 0) (bruijn ##.%x.2770 0 1) (bruijn ##.e.741 1 1)))
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
  // (letrec 1 ((bruijn ##.%x.1722 1 0)) ((bruijn ##.length.272 26 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k423) (bruijn ##.xs.736 6 1)))
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
  // (basic-block 1 1 (##.%p.2756) ((##vcore.null? (bruijn ##.tail-expr.735 1 0))) (if (bruijn ##.%p.2756 0 0) (basic-block 2 2 (##.expr.67.2757 ##.%p.2758) ((##vcore.cdr (bruijn ##.expr.58.2753 4 0)) (##vcore.pair? (bruijn ##.expr.67.2757 0 0))) (if (bruijn ##.%p.2758 0 1) (basic-block 3 3 (##.body.2759 ##.%x.2760 ##.%p.2761) ((##vcore.car (bruijn ##.expr.67.2757 1 0)) (##vcore.cdr (bruijn ##.expr.67.2757 1 0)) (##vcore.null? (bruijn ##.%x.2760 0 1))) (if (bruijn ##.%p.2761 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k421) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda103) (bruijn ##.kk.19.648 18 1)) ((bruijn ##.%k.1714 8 0) #f))) ((bruijn ##.%k.1714 7 0) #f))) ((bruijn ##.%k.1714 6 0) #f)))
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
  // ((bruijn ##.kk.62.725 6 1) (bruijn ##.%k.1751 2 0) (bruijn ##.expr.64.727 4 1) (bruijn ##.%x.1752 1 0) (bruijn ##.%x.1753 0 0))
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
  // (if (bruijn ##.%p.2772 1 1) ((bruijn ##.reverse.252 24 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k427) (bruijn ##.xs.60.728 2 2)) ((bruijn ##.%k.1751 0 0) #f))
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
  // (if (bruijn ##.%p.2774 1 1) (basic-block 3 3 (##.xs.2775 ##.expr.66.2776 ##.%p.2777) ((##vcore.car (bruijn ##.expr.65.2773 2 0)) (##vcore.cdr (bruijn ##.expr.65.2773 2 0)) (##vcore.pair? (bruijn ##.expr.66.2776 0 1))) (if (bruijn ##.%p.2777 0 2) (basic-block 3 3 (##.vals.2778 ##.%x.2779 ##.%p.2780) ((##vcore.car (bruijn ##.expr.66.2776 1 1)) (##vcore.cdr (bruijn ##.expr.66.2776 1 1)) (##vcore.null? (bruijn ##.%x.2779 0 1))) (if (bruijn ##.%p.2780 0 2) (basic-block 3 3 (##.%x.2781 ##.%x.2782 ##.%x.2783) ((##vcore.cdr (bruijn ##.expr.64.727 8 1)) (##vcore.cons (bruijn ##.xs.2775 2 0) (bruijn ##.xs.60.728 8 2)) (##vcore.cons (bruijn ##.vals.2778 1 0) (bruijn ##.vals.61.729 8 3))) ((bruijn ##.kk.63.730 5 1) (bruijn ##.%k.1743 3 0) (bruijn ##.%x.2781 0 0) (bruijn ##.%x.2782 0 1) (bruijn ##.%x.2783 0 2))) ((bruijn ##.%k.1743 2 0) #f))) ((bruijn ##.%k.1743 1 0) #f))) ((bruijn ##.%k.1743 0 0) #f))
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
  // ((bruijn ##.kk.62.725 8 1) (bruijn ##.%k.1739 3 0) (bruijn ##.expr.64.727 6 1) (bruijn ##.%x.1740 1 0) (bruijn ##.%x.1741 0 0))
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
  // (basic-block 2 2 (##.expr.65.2773 ##.%p.2774) ((##vcore.car (bruijn ##.expr.64.727 4 1)) (##vcore.pair? (bruijn ##.expr.65.2773 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k430) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k431)))
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
  // (##vcore.call/cc (bruijn ##.%k.1738 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0lambda107))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0lambda107, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k429(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1737 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0lambda106) (bruijn ##.loop.726 2 0))
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
  // (basic-block 2 2 (##.%x.2771 ##.%p.2772) ((##vcore.pair? (bruijn ##.expr.64.727 1 1)) (##vcore.not (bruijn ##.%x.2771 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k426) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726_V0k429)))
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D726")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.726) #f (bruijn ##.loop.726 0 0) (bruijn ##.%k.1736 1 0) (bruijn ##.expr.59.2755 2 0) '() '()))
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
  // (if (bruijn ##.%p.1715 0 0) (basic-block 2 2 (##.expr.58.2753 ##.%p.2754) ((##vcore.cdr (bruijn ##.expr.647 14 3)) (##vcore.pair? (bruijn ##.expr.58.2753 0 0))) (if (bruijn ##.%p.2754 0 1) (basic-block 1 1 (##.expr.59.2755) ((##vcore.car (bruijn ##.expr.58.2753 1 0))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda102) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda105))) ((bruijn ##.%k.1714 3 0) #f))) ((bruijn ##.%k.1714 2 0) #f))
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
  // (if (bruijn ##.%p.2640 1 0) (basic-block 1 1 (##.%x.2752) ((##vcore.car (bruijn ##.expr.647 12 3))) ((bruijn ##.equal?.243 16 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k420) 'letrec (bruijn ##.%x.2752 0 0))) ((bruijn ##.%k.1714 0 0) #f))
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
  // ((bruijn ##.%x.1676 0 0) (bruijn ##.%k.1669 10 0))
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
  // (basic-block 6 6 (##.%x.2731 ##.%x.2732 ##.%x.2733 ##.%x.2734 ##.%x.2735 ##.%r.2736) ((##vcore.cons (bruijn ##.%x.1686 1 0) '()) (##vcore.cons (bruijn ##.%x.1684 3 0) (bruijn ##.%x.2731 0 0)) (##vcore.cons (bruijn ##.xs.758 11 1) (bruijn ##.%x.2732 0 1)) (##vcore.cons (bruijn ##.%x.1681 4 0) (bruijn ##.%x.2733 0 2)) (##vcore.cons (bruijn ##.path.2719 13 0) (bruijn ##.%x.2734 0 3)) (##vcore.cons '##letrec (bruijn ##.%x.2735 0 4))) ((bruijn ##.%k.1677 7 0) (bruijn ##.%r.2736 0 5)))
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
  // (basic-block 2 2 (##.%x.2729 ##.%x.2730) ((##vcore.cons (bruijn ##.xs.758 9 1) (bruijn ##.env.645 27 1)) (##vcore.cons (bruijn ##.unmangled-formals.762 3 0) (bruijn ##.unmangled-env.646 27 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 28 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k441) (bruijn ##.%x.2729 0 0) (bruijn ##.%x.2730 0 1) (bruijn ##.body.2726 6 0)))
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
  // (basic-block 2 2 (##.%x.2737 ##.%x.2738) ((##vcore.cons (bruijn ##.xs.758 9 1) (bruijn ##.env.645 27 1)) (##vcore.cons (bruijn ##.unmangled-formals.762 3 0) (bruijn ##.unmangled-env.646 27 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 28 3) (bruijn ##.%k.1689 1 0) (bruijn ##.%x.2737 0 0) (bruijn ##.%x.2738 0 1) (bruijn ##.e.763 1 1)))
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
  // (letrec 1 ((bruijn ##.%x.1678 1 0)) ((bruijn ##.length.272 28 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k439) (bruijn ##.xs.758 6 1)))
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
  // (basic-block 1 1 (##.%p.2723) ((##vcore.null? (bruijn ##.tail-expr.757 1 0))) (if (bruijn ##.%p.2723 0 0) (basic-block 2 2 (##.expr.79.2724 ##.%p.2725) ((##vcore.cdr (bruijn ##.expr.70.2720 4 1)) (##vcore.pair? (bruijn ##.expr.79.2724 0 0))) (if (bruijn ##.%p.2725 0 1) (basic-block 3 3 (##.body.2726 ##.%x.2727 ##.%p.2728) ((##vcore.car (bruijn ##.expr.79.2724 1 0)) (##vcore.cdr (bruijn ##.expr.79.2724 1 0)) (##vcore.null? (bruijn ##.%x.2727 0 1))) (if (bruijn ##.%p.2728 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k437) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda109) (bruijn ##.kk.19.648 20 1)) ((bruijn ##.%k.1669 9 0) #f))) ((bruijn ##.%k.1669 8 0) #f))) ((bruijn ##.%k.1669 7 0) #f)))
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
  // ((bruijn ##.kk.74.747 6 1) (bruijn ##.%k.1708 2 0) (bruijn ##.expr.76.749 4 1) (bruijn ##.%x.1709 1 0) (bruijn ##.%x.1710 0 0))
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
  // (if (bruijn ##.%p.2740 1 1) ((bruijn ##.reverse.252 26 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k443) (bruijn ##.xs.72.750 2 2)) ((bruijn ##.%k.1708 0 0) #f))
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
  // (if (bruijn ##.%p.2742 1 1) (basic-block 3 3 (##.xs.2743 ##.expr.78.2744 ##.%p.2745) ((##vcore.car (bruijn ##.expr.77.2741 2 0)) (##vcore.cdr (bruijn ##.expr.77.2741 2 0)) (##vcore.pair? (bruijn ##.expr.78.2744 0 1))) (if (bruijn ##.%p.2745 0 2) (basic-block 3 3 (##.vals.2746 ##.%x.2747 ##.%p.2748) ((##vcore.car (bruijn ##.expr.78.2744 1 1)) (##vcore.cdr (bruijn ##.expr.78.2744 1 1)) (##vcore.null? (bruijn ##.%x.2747 0 1))) (if (bruijn ##.%p.2748 0 2) (basic-block 3 3 (##.%x.2749 ##.%x.2750 ##.%x.2751) ((##vcore.cdr (bruijn ##.expr.76.749 8 1)) (##vcore.cons (bruijn ##.xs.2743 2 0) (bruijn ##.xs.72.750 8 2)) (##vcore.cons (bruijn ##.vals.2746 1 0) (bruijn ##.vals.73.751 8 3))) ((bruijn ##.kk.75.752 5 1) (bruijn ##.%k.1700 3 0) (bruijn ##.%x.2749 0 0) (bruijn ##.%x.2750 0 1) (bruijn ##.%x.2751 0 2))) ((bruijn ##.%k.1700 2 0) #f))) ((bruijn ##.%k.1700 1 0) #f))) ((bruijn ##.%k.1700 0 0) #f))
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
  // ((bruijn ##.kk.74.747 8 1) (bruijn ##.%k.1696 3 0) (bruijn ##.expr.76.749 6 1) (bruijn ##.%x.1697 1 0) (bruijn ##.%x.1698 0 0))
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
  // (basic-block 2 2 (##.expr.77.2741 ##.%p.2742) ((##vcore.car (bruijn ##.expr.76.749 4 1)) (##vcore.pair? (bruijn ##.expr.77.2741 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k446) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k447)))
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
  // (##vcore.call/cc (bruijn ##.%k.1695 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0lambda113))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0lambda113, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k445(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1694 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0lambda112) (bruijn ##.loop.748 2 0))
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
  // (basic-block 2 2 (##.%x.2739 ##.%p.2740) ((##vcore.pair? (bruijn ##.expr.76.749 1 1)) (##vcore.not (bruijn ##.%x.2739 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k442) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748_V0k445)))
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D748")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.748) #f (bruijn ##.loop.748 0 0) (bruijn ##.%k.1693 1 0) (bruijn ##.expr.71.2722 2 0) '() '()))
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
  // (if (bruijn ##.%p.1670 0 0) (basic-block 2 2 (##.expr.69.2717 ##.%p.2718) ((##vcore.cdr (bruijn ##.expr.647 15 3)) (##vcore.pair? (bruijn ##.expr.69.2717 0 0))) (if (bruijn ##.%p.2718 0 1) (basic-block 3 3 (##.path.2719 ##.expr.70.2720 ##.%p.2721) ((##vcore.car (bruijn ##.expr.69.2717 1 0)) (##vcore.cdr (bruijn ##.expr.69.2717 1 0)) (##vcore.pair? (bruijn ##.expr.70.2720 0 1))) (if (bruijn ##.%p.2721 0 2) (basic-block 1 1 (##.expr.71.2722) ((##vcore.car (bruijn ##.expr.70.2720 1 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda108) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda111))) ((bruijn ##.%k.1669 4 0) #f))) ((bruijn ##.%k.1669 3 0) #f))) ((bruijn ##.%k.1669 2 0) #f))
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
  // (if (bruijn ##.%p.2641 1 0) (basic-block 1 1 (##.%x.2716) ((##vcore.car (bruijn ##.expr.647 13 3))) ((bruijn ##.equal?.243 17 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k436) '##letrec (bruijn ##.%x.2716 0 0))) ((bruijn ##.%k.1669 0 0) #f))
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
  // ((bruijn ##.%x.1630 0 0) (bruijn ##.%k.1623 12 0))
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
  // (basic-block 6 6 (##.%x.2695 ##.%x.2696 ##.%x.2697 ##.%x.2698 ##.%x.2699 ##.%r.2700) ((##vcore.cons (bruijn ##.%x.1640 1 0) '()) (##vcore.cons (bruijn ##.%x.1638 3 0) (bruijn ##.%x.2695 0 0)) (##vcore.cons (bruijn ##.xs.782 11 1) (bruijn ##.%x.2696 0 1)) (##vcore.cons (bruijn ##.%x.1635 4 0) (bruijn ##.%x.2697 0 2)) (##vcore.cons (bruijn ##.cost.2685 15 0) (bruijn ##.%x.2698 0 3)) (##vcore.cons 'basic-block (bruijn ##.%x.2699 0 4))) ((bruijn ##.%k.1631 7 0) (bruijn ##.%r.2700 0 5)))
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
  // (basic-block 2 2 (##.%x.2693 ##.%x.2694) ((##vcore.cons (bruijn ##.xs.782 9 1) (bruijn ##.env.645 30 1)) (##vcore.cons (bruijn ##.unmangled-formals.786 3 0) (bruijn ##.unmangled-env.646 30 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 31 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k458) (bruijn ##.%x.2693 0 0) (bruijn ##.%x.2694 0 1) (bruijn ##.appl.2690 6 0)))
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
  // (basic-block 2 2 (##.%x.2701 ##.%x.2702) ((##vcore.cons (bruijn ##.xs.782 9 1) (bruijn ##.env.645 30 1)) (##vcore.cons (bruijn ##.unmangled-formals.786 3 0) (bruijn ##.unmangled-env.646 30 2))) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 31 3) (bruijn ##.%k.1643 1 0) (bruijn ##.%x.2701 0 0) (bruijn ##.%x.2702 0 1) (bruijn ##.e.787 1 1)))
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
  // (letrec 1 ((bruijn ##.%x.1632 1 0)) ((bruijn ##.length.272 31 29) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k456) (bruijn ##.xs.782 6 1)))
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
  // (basic-block 1 1 (##.%p.2688) ((##vcore.null? (bruijn ##.tail-expr.781 1 0))) (if (bruijn ##.%p.2688 0 0) (basic-block 1 1 (##.%p.2689) ((##vcore.pair? (bruijn ##.tail.84.769 3 1))) (if (bruijn ##.%p.2689 0 0) (basic-block 3 3 (##.appl.2690 ##.%x.2691 ##.%p.2692) ((##vcore.car (bruijn ##.tail.84.769 4 1)) (##vcore.cdr (bruijn ##.tail.84.769 4 1)) (##vcore.null? (bruijn ##.%x.2691 0 1))) (if (bruijn ##.%p.2692 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k454) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda116) (bruijn ##.kk.19.648 23 1)) ((bruijn ##.%k.1623 11 0) #f))) ((bruijn ##.%k.1623 10 0) #f))) ((bruijn ##.%k.1623 9 0) #f)))
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
  // ((bruijn ##.kk.88.771 6 1) (bruijn ##.%k.1662 2 0) (bruijn ##.expr.90.773 4 1) (bruijn ##.%x.1663 1 0) (bruijn ##.%x.1664 0 0))
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
  // (if (bruijn ##.%p.2704 1 1) ((bruijn ##.reverse.252 29 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k460) (bruijn ##.xs.86.774 2 2)) ((bruijn ##.%k.1662 0 0) #f))
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
  // (if (bruijn ##.%p.2706 1 1) (basic-block 3 3 (##.xs.2707 ##.expr.92.2708 ##.%p.2709) ((##vcore.car (bruijn ##.expr.91.2705 2 0)) (##vcore.cdr (bruijn ##.expr.91.2705 2 0)) (##vcore.pair? (bruijn ##.expr.92.2708 0 1))) (if (bruijn ##.%p.2709 0 2) (basic-block 3 3 (##.vals.2710 ##.%x.2711 ##.%p.2712) ((##vcore.car (bruijn ##.expr.92.2708 1 1)) (##vcore.cdr (bruijn ##.expr.92.2708 1 1)) (##vcore.null? (bruijn ##.%x.2711 0 1))) (if (bruijn ##.%p.2712 0 2) (basic-block 3 3 (##.%x.2713 ##.%x.2714 ##.%x.2715) ((##vcore.cdr (bruijn ##.expr.90.773 8 1)) (##vcore.cons (bruijn ##.xs.2707 2 0) (bruijn ##.xs.86.774 8 2)) (##vcore.cons (bruijn ##.vals.2710 1 0) (bruijn ##.vals.87.775 8 3))) ((bruijn ##.kk.89.776 5 1) (bruijn ##.%k.1654 3 0) (bruijn ##.%x.2713 0 0) (bruijn ##.%x.2714 0 1) (bruijn ##.%x.2715 0 2))) ((bruijn ##.%k.1654 2 0) #f))) ((bruijn ##.%k.1654 1 0) #f))) ((bruijn ##.%k.1654 0 0) #f))
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
  // ((bruijn ##.kk.88.771 8 1) (bruijn ##.%k.1650 3 0) (bruijn ##.expr.90.773 6 1) (bruijn ##.%x.1651 1 0) (bruijn ##.%x.1652 0 0))
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
  // (basic-block 2 2 (##.expr.91.2705 ##.%p.2706) ((##vcore.car (bruijn ##.expr.90.773 4 1)) (##vcore.pair? (bruijn ##.expr.91.2705 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k463) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k464)))
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
  // (##vcore.call/cc (bruijn ##.%k.1649 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0lambda120))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0lambda120, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k462(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1648 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0lambda119) (bruijn ##.loop.772 2 0))
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
  // (basic-block 2 2 (##.%x.2703 ##.%p.2704) ((##vcore.pair? (bruijn ##.expr.90.773 1 1)) (##vcore.not (bruijn ##.%x.2703 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k459) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772_V0k462)))
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D772")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.772) #f (bruijn ##.loop.772 0 0) (bruijn ##.%k.1647 1 0) (bruijn ##.head.83.768 2 0) '() '()))
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
  // (basic-block 1 1 (##.%p.2687) ((##vcore.< (bruijn ##.%x.1666 1 0) 1)) (if (bruijn ##.%p.2687 0 0) ((bruijn ##.%k.1623 6 0) #f) ((bruijn ##.split-at-right.271 23 28) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda114) (bruijn ##.expr.82.2686 2 1) 1)))
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
  // (if (bruijn ##.%p.1624 0 0) (basic-block 2 2 (##.expr.81.2683 ##.%p.2684) ((##vcore.cdr (bruijn ##.expr.647 16 3)) (##vcore.pair? (bruijn ##.expr.81.2683 0 0))) (if (bruijn ##.%p.2684 0 1) (basic-block 2 2 (##.cost.2685 ##.expr.82.2686) ((##vcore.car (bruijn ##.expr.81.2683 1 0)) (##vcore.cdr (bruijn ##.expr.81.2683 1 0))) ((bruijn ##.num-pairs.270 21 27) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k453) (bruijn ##.expr.82.2686 0 1))) ((bruijn ##.%k.1623 3 0) #f))) ((bruijn ##.%k.1623 2 0) #f))
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
  // (if (bruijn ##.%p.2642 1 0) (basic-block 1 1 (##.%x.2682) ((##vcore.car (bruijn ##.expr.647 14 3))) ((bruijn ##.equal?.243 18 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k452) 'basic-block (bruijn ##.%x.2682 0 0))) ((bruijn ##.%k.1623 0 0) #f))
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
  // ((bruijn ##.%x.1619 0 0) (bruijn ##.%k.1617 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1620 0 0) (bruijn ##.expr.647 17 3))
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
  // (if (bruijn ##.%p.1618 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k470) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda121) (bruijn ##.kk.19.648 15 1)) ((bruijn ##.%k.1617 2 0) #f))
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
  // (if (bruijn ##.%p.2643 1 0) (basic-block 1 1 (##.%x.2681) ((##vcore.car (bruijn ##.expr.647 15 3))) ((bruijn ##.equal?.243 19 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k469) '##foreign.function (bruijn ##.%x.2681 0 0))) ((bruijn ##.%k.1617 0 0) #f))
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
  // ((bruijn ##.%x.1613 0 0) (bruijn ##.%k.1611 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1614 0 0) (bruijn ##.expr.647 18 3))
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
  // (if (bruijn ##.%p.1612 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k474) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda122) (bruijn ##.kk.19.648 16 1)) ((bruijn ##.%k.1611 2 0) #f))
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
  // (if (bruijn ##.%p.2644 1 0) (basic-block 1 1 (##.%x.2680) ((##vcore.car (bruijn ##.expr.647 16 3))) ((bruijn ##.equal?.243 20 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k473) 'quote (bruijn ##.%x.2680 0 0))) ((bruijn ##.%k.1611 0 0) #f))
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
  // ((bruijn ##.%x.1604 0 0) (bruijn ##.%k.1601 5 0))
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
  // (basic-block 2 2 (##.%x.2678 ##.%r.2679) ((##vcore.cons (bruijn ##.f.2676 3 0) (bruijn ##.%x.1607 1 0)) (##vcore.cons '##inline (bruijn ##.%x.2678 0 0))) ((bruijn ##.%k.1605 2 0) (bruijn ##.%r.2679 0 1)))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 23 3) (bruijn ##.%k.1608 0 0) (bruijn ##.env.645 22 1) (bruijn ##.unmangled-env.646 22 2) (bruijn ##.x.794 0 1))
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
  // ((bruijn ##.map.245 25 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k479) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda124) (bruijn ##.xs.2677 1 1))
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
  // (if (bruijn ##.%p.1602 0 0) (basic-block 2 2 (##.expr.97.2674 ##.%p.2675) ((##vcore.cdr (bruijn ##.expr.647 19 3)) (##vcore.pair? (bruijn ##.expr.97.2674 0 0))) (if (bruijn ##.%p.2675 0 1) (basic-block 2 2 (##.f.2676 ##.xs.2677) ((##vcore.car (bruijn ##.expr.97.2674 1 0)) (##vcore.cdr (bruijn ##.expr.97.2674 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k478) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda123) (bruijn ##.kk.19.648 19 1))) ((bruijn ##.%k.1601 3 0) #f))) ((bruijn ##.%k.1601 2 0) #f))
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
  // (if (bruijn ##.%p.2645 1 0) (basic-block 1 1 (##.%x.2673) ((##vcore.car (bruijn ##.expr.647 17 3))) ((bruijn ##.equal?.243 21 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k477) '##inline (bruijn ##.%x.2673 0 0))) ((bruijn ##.%k.1601 0 0) #f))
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
  // ((bruijn ##.%x.1591 0 0) (bruijn ##.%k.1586 7 0))
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
  // (basic-block 4 4 (##.%x.2669 ##.%x.2670 ##.%x.2671 ##.%r.2672) ((##vcore.cons (bruijn ##.%x.1596 2 0) (bruijn ##.%x.1597 1 0)) (##vcore.cons (bruijn ##.static?.2664 5 0) (bruijn ##.%x.2669 0 0)) (##vcore.cons (bruijn ##.name.2661 6 0) (bruijn ##.%x.2670 0 1)) (##vcore.cons '##qualified-call (bruijn ##.%x.2671 0 2))) ((bruijn ##.%k.1592 3 0) (bruijn ##.%r.2672 0 3)))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 27 3) (bruijn ##.%k.1598 0 0) (bruijn ##.env.645 26 1) (bruijn ##.unmangled-env.646 26 2) (bruijn ##.x.803 0 1))
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
  // ((bruijn ##.map.245 29 2) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k485) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda126) (bruijn ##.xs.2668 2 1))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 25 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k484) (bruijn ##.env.645 24 1) (bruijn ##.unmangled-env.646 24 2) (bruijn ##.f.2667 1 0))
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
  // (if (bruijn ##.%p.1587 0 0) (basic-block 2 2 (##.expr.99.2659 ##.%p.2660) ((##vcore.cdr (bruijn ##.expr.647 20 3)) (##vcore.pair? (bruijn ##.expr.99.2659 0 0))) (if (bruijn ##.%p.2660 0 1) (basic-block 3 3 (##.name.2661 ##.expr.100.2662 ##.%p.2663) ((##vcore.car (bruijn ##.expr.99.2659 1 0)) (##vcore.cdr (bruijn ##.expr.99.2659 1 0)) (##vcore.pair? (bruijn ##.expr.100.2662 0 1))) (if (bruijn ##.%p.2663 0 2) (basic-block 3 3 (##.static?.2664 ##.expr.101.2665 ##.%p.2666) ((##vcore.car (bruijn ##.expr.100.2662 1 1)) (##vcore.cdr (bruijn ##.expr.100.2662 1 1)) (##vcore.pair? (bruijn ##.expr.101.2665 0 1))) (if (bruijn ##.%p.2666 0 2) (basic-block 2 2 (##.f.2667 ##.xs.2668) ((##vcore.car (bruijn ##.expr.101.2665 1 1)) (##vcore.cdr (bruijn ##.expr.101.2665 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k483) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda125) (bruijn ##.kk.19.648 22 1))) ((bruijn ##.%k.1586 5 0) #f))) ((bruijn ##.%k.1586 4 0) #f))) ((bruijn ##.%k.1586 3 0) #f))) ((bruijn ##.%k.1586 2 0) #f))
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
  // (if (bruijn ##.%p.2646 1 0) (basic-block 1 1 (##.%x.2658) ((##vcore.car (bruijn ##.expr.647 18 3))) ((bruijn ##.equal?.243 22 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k482) '##qualified-call (bruijn ##.%x.2658 0 0))) ((bruijn ##.%k.1586 0 0) #f))
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
  // ((bruijn ##.%x.1569 0 0) (bruijn ##.%k.1567 4 0))
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
  // (basic-block 1 1 (##.%r.2652) ((##vcore.cons (bruijn ##.%x.1571 2 0) (bruijn ##.%x.1572 1 0))) ((bruijn ##.%k.1570 3 0) (bruijn ##.%r.2652 0 0)))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 25 3) (bruijn ##.%k.1573 0 0) (bruijn ##.env.645 24 1) (bruijn ##.unmangled-env.646 24 2) (bruijn ##.x.815 0 1))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 23 3) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k489) (bruijn ##.env.645 22 1) (bruijn ##.unmangled-env.646 22 2) (bruijn ##.f.2649 3 0))
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
  // (basic-block 1 1 (##.%p.2651) ((##vcore.null? (bruijn ##.tail-expr.813 1 0))) (if (bruijn ##.%p.2651 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k488) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda128) (bruijn ##.kk.19.648 20 1)) ((bruijn ##.%k.1567 3 0) #f)))
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
  // ((bruijn ##.kk.105.807 5 1) (bruijn ##.%k.1582 1 0) (bruijn ##.expr.107.809 3 1) (bruijn ##.%x.1583 0 0))
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
  // (if (bruijn ##.%p.2654 1 1) ((bruijn ##.reverse.252 28 9) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k492) (bruijn ##.xs.104.810 2 2)) ((bruijn ##.%k.1582 0 0) #f))
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
  // ((bruijn ##.kk.105.807 7 1) (bruijn ##.%k.1577 2 0) (bruijn ##.expr.107.809 5 1) (bruijn ##.%x.1578 0 0))
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
  // (basic-block 3 3 (##.xs.2655 ##.%x.2656 ##.%x.2657) ((##vcore.car (bruijn ##.expr.107.809 4 1)) (##vcore.cdr (bruijn ##.expr.107.809 4 1)) (##vcore.cons (bruijn ##.xs.2655 0 0) (bruijn ##.xs.104.810 4 2))) ((bruijn ##.kk.106.811 1 1) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k494) (bruijn ##.%x.2656 0 1) (bruijn ##.%x.2657 0 2)))
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
  // (##vcore.call/cc (bruijn ##.%k.1576 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0lambda132))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0lambda132, self)))));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k493(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1575 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0lambda131) (bruijn ##.loop.808 2 0))
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
  // (basic-block 2 2 (##.%x.2653 ##.%p.2654) ((##vcore.pair? (bruijn ##.expr.107.809 1 1)) (##vcore.not (bruijn ##.%x.2653 0 0))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k491) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808_V0k493)))
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V10_Dloop_D808")) (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614 ##.loop.808) #f (bruijn ##.loop.808 0 0) (bruijn ##.%k.1574 1 0) (bruijn ##.expr.103.2650 2 1) '()))
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
  // (if (bruijn ##.%p.2647 1 0) (basic-block 2 2 (##.f.2649 ##.expr.103.2650) ((##vcore.car (bruijn ##.expr.647 19 3)) (##vcore.cdr (bruijn ##.expr.647 19 3))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda127) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda130))) ((bruijn ##.%k.1567 0 0) #f))
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
  // ((bruijn ##.compiler-error.259 23 16) (bruijn ##.%k.1562 0 0) (##string ##.string.2994) (bruijn ##.expr.647 19 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 16)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2994.sym, VPOINTER_OTHER),
      VGetArg(statics, 19-1, 3));
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k498(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.1561 17 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda133) (bruijn ##.kk.19.648 17 1))
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
  // ((bruijn ##.%x.1563 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k498))
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
  // (basic-block 1 1 (##.%p.2648) ((##vcore.symbol? (bruijn ##.expr.647 19 3))) (if (bruijn ##.%p.2648 0 0) (##qualified-call (vanity compiler lower bruijn-ify ##.lookup.611) #f (bruijn ##.lookup.611 20 0) (bruijn ##.%k.1564 1 0) 0 (bruijn ##.env.645 19 1) (bruijn ##.expr.647 19 3)) ((bruijn ##.%k.1564 1 0) (bruijn ##.expr.647 19 3))))
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
  // (basic-block 1 1 (##.%p.2647) ((##vcore.pair? (bruijn ##.expr.647 17 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k487) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k496)))
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
  // (basic-block 1 1 (##.%p.2646) ((##vcore.pair? (bruijn ##.expr.647 16 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k481) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k486)))
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
  // (basic-block 1 1 (##.%p.2645) ((##vcore.pair? (bruijn ##.expr.647 15 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k476) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k480)))
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
  // (basic-block 1 1 (##.%p.2644) ((##vcore.pair? (bruijn ##.expr.647 14 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k472) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k475)))
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
  // (basic-block 1 1 (##.%p.2643) ((##vcore.pair? (bruijn ##.expr.647 13 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k468) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k471)))
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
  // (basic-block 1 1 (##.%p.2642) ((##vcore.pair? (bruijn ##.expr.647 12 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k451) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k467)))
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
  // (basic-block 1 1 (##.%p.2641) ((##vcore.pair? (bruijn ##.expr.647 11 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k435) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k450)))
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
  // (basic-block 1 1 (##.%p.2640) ((##vcore.pair? (bruijn ##.expr.647 10 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k419) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k434)))
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
  // (basic-block 1 1 (##.%p.2639) ((##vcore.pair? (bruijn ##.expr.647 9 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k412) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k418)))
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
  // (basic-block 1 1 (##.%p.2638) ((##vcore.pair? (bruijn ##.expr.647 8 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k402) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k411)))
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
  // (basic-block 1 1 (##.%p.2637) ((##vcore.pair? (bruijn ##.expr.647 7 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k394) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k401)))
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
  // (basic-block 1 1 (##.%p.2636) ((##vcore.pair? (bruijn ##.expr.647 6 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k386) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k393)))
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
  // (basic-block 1 1 (##.%p.2635) ((##vcore.pair? (bruijn ##.expr.647 5 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k375) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k385)))
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
  // (basic-block 1 1 (##.%p.2634) ((##vcore.pair? (bruijn ##.expr.647 4 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k361) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k374)))
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
  // (basic-block 1 1 (##.%p.2633) ((##vcore.pair? (bruijn ##.expr.647 3 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k350) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k360)))
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
  // (basic-block 1 1 (##.%p.2632) ((##vcore.pair? (bruijn ##.expr.647 2 3))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k336) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0k349)))
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
  // (##vcore.call/cc (bruijn ##.%k.1560 0 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614_V0lambda81))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.bruijn-iter.614) #f (bruijn ##.bruijn-iter.614 1 3) (bruijn ##.%k.1964 0 0) '() '() (bruijn ##.expr.817 0 1))
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
  // ((bruijn ##.%x.1983 0 0) (bruijn ##.%k.1981 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.1984 0 0) (bruijn ##.expr.609 7 1))
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
  // (if (bruijn ##.%p.1982 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k501) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda136) (bruijn ##.kk.1.818 4 1)) ((bruijn ##.%k.1981 2 0) #f))
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
  // (if (bruijn ##.%p.2949 1 0) (basic-block 1 1 (##.%x.2963) ((##vcore.car (bruijn ##.expr.609 5 1))) ((bruijn ##.equal?.243 7 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k500) '##foreign.declare (bruijn ##.%x.2963 0 0))) ((bruijn ##.%k.1981 0 0) #f))
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
  // ((bruijn ##.%x.1973 0 0) (bruijn ##.%k.1968 6 0))
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
  // (basic-block 3 3 (##.%x.2960 ##.%x.2961 ##.%r.2962) ((##vcore.cons (bruijn ##.%x.1977 1 0) '()) (##vcore.cons (bruijn ##.f.2954 4 0) (bruijn ##.%x.2960 0 0)) (##vcore.cons '##vcore.declare (bruijn ##.%x.2961 0 1))) ((bruijn ##.%k.1974 2 0) (bruijn ##.%r.2962 0 2)))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.doit.615) #f (bruijn ##.doit.615 10 4) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k506) (bruijn ##.l.2957 1 0))
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
  // (if (bruijn ##.%p.1969 0 0) (basic-block 2 2 (##.expr.5.2952 ##.%p.2953) ((##vcore.cdr (bruijn ##.expr.609 8 1)) (##vcore.pair? (bruijn ##.expr.5.2952 0 0))) (if (bruijn ##.%p.2953 0 1) (basic-block 3 3 (##.f.2954 ##.expr.6.2955 ##.%p.2956) ((##vcore.car (bruijn ##.expr.5.2952 1 0)) (##vcore.cdr (bruijn ##.expr.5.2952 1 0)) (##vcore.pair? (bruijn ##.expr.6.2955 0 1))) (if (bruijn ##.%p.2956 0 2) (basic-block 3 3 (##.l.2957 ##.%x.2958 ##.%p.2959) ((##vcore.car (bruijn ##.expr.6.2955 1 1)) (##vcore.cdr (bruijn ##.expr.6.2955 1 1)) (##vcore.null? (bruijn ##.%x.2958 0 1))) (if (bruijn ##.%p.2959 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k505) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda137) (bruijn ##.kk.1.818 8 1)) ((bruijn ##.%k.1968 5 0) #f))) ((bruijn ##.%k.1968 4 0) #f))) ((bruijn ##.%k.1968 3 0) #f))) ((bruijn ##.%k.1968 2 0) #f))
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
  // (if (bruijn ##.%p.2950 1 0) (basic-block 1 1 (##.%x.2951) ((##vcore.car (bruijn ##.expr.609 6 1))) ((bruijn ##.equal?.243 8 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k504) '##vcore.declare (bruijn ##.%x.2951 0 0))) ((bruijn ##.%k.1968 0 0) #f))
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
  // (##qualified-call (vanity compiler lower bruijn-ify ##.doit.615) #f (bruijn ##.doit.615 4 4) (bruijn ##.%k.1966 0 0) (bruijn ##.expr.609 5 1))
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
  // (##vcore.call-with-values (bruijn ##.%k.1965 2 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda138) (bruijn ##.kk.1.818 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda138, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k502(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2950) ((##vcore.pair? (bruijn ##.expr.609 4 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k503) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k507)))
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
  // (basic-block 1 1 (##.%p.2949) ((##vcore.pair? (bruijn ##.expr.609 3 1))) ((close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k499) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0k502)))
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
  // (letrec 5 ((close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dlookup_D611") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dundot_D612") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__lambda_D613") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Dbruijn__iter_D614") (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V10_Ddoit_D615")) (##vcore.call/cc (bruijn ##.%k.1503 1 0) (close _V50_V0vanity_V0compiler_V0lower_V0bruijn__ify_V0lambda135)))
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
  // (##qualified-call (vanity compiler lower improper-map) #t (bruijn ##.improper-map.296 1 5) (bruijn ##.%k.1986 0 0) (bruijn ##.ungensym.269 2 26) (bruijn ##.xs.826 0 1))
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
  // (basic-block 1 1 (##.%r.2968) ((##vcore.cons (bruijn ##.%x.1990 3 0) (bruijn ##.%x.1991 1 0))) ((bruijn ##.%k.1987 7 0) (bruijn ##.%r.2968 0 0)))
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
  // (basic-block 1 1 (##.%x.2967) ((##vcore.cdr (bruijn ##.xs.828 5 2))) (##qualified-call (vanity compiler lower improper-map) #t (bruijn ##.improper-map.296 6 5) (close _V50_V0vanity_V0compiler_V0lower_V0improper__map_V0k509) (bruijn ##.f.827 5 1) (bruijn ##.%x.2967 0 0)))
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
  // (basic-block 1 1 (##.%p.2964) ((##vcore.null? (bruijn ##.xs.828 1 2))) (if (bruijn ##.%p.2964 0 0) ((bruijn ##.%k.1987 1 0) '()) (basic-block 1 1 (##.%p.2965) ((##vcore.pair? (bruijn ##.xs.828 2 2))) (if (bruijn ##.%p.2965 0 0) (basic-block 1 1 (##.%x.2966) ((##vcore.car (bruijn ##.xs.828 3 2))) ((bruijn ##.f.827 3 1) (close _V50_V0vanity_V0compiler_V0lower_V0improper__map_V0k508) (bruijn ##.%x.2966 0 0))) ((bruijn ##.f.827 2 1) (bruijn ##.%k.1987 2 0) (bruijn ##.xs.828 2 2))))))
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
  // (if (bruijn ##.%p.1997 0 0) ((bruijn ##.%k.1995 3 0) (bruijn ##.i.833 3 2)) (basic-block 2 2 (##.%x.2971 ##.%x.2972) ((##vcore.cdr (bruijn ##.l.832 4 1)) (##vcore.+ (bruijn ##.i.833 4 2) 1)) (##qualified-call (vanity compiler lower list-index ##.loop.831) #f (bruijn ##.loop.831 5 0) (bruijn ##.%k.1995 4 0) (bruijn ##.%x.2971 0 0) (bruijn ##.%x.2972 0 1))))
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
  // (basic-block 1 1 (##.%p.2969) ((##vcore.null? (bruijn ##.l.832 1 1))) (if (bruijn ##.%p.2969 0 0) ((bruijn ##.%k.1995 1 0) #f) (basic-block 1 1 (##.%x.2970) ((##vcore.car (bruijn ##.l.832 2 1))) ((bruijn ##.p.829 4 1) (close _V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831_V0k510) (bruijn ##.%x.2970 0 0)))))
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0lower_V0list__index_V10_Dloop_D831")) (##qualified-call (vanity compiler lower list-index ##.loop.831) #f (bruijn ##.loop.831 0 0) (bruijn ##.%k.1994 1 0) (bruijn ##.l.830 1 2) 0))
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
  // (##letrec (vanity compiler lower) 7 ((close "_V50_V0vanity_V0compiler_V0lower_V0to__functions" (vanity compiler lower)) 0 0 (close "_V50_V0vanity_V0compiler_V0lower_V0bruijn__ify" (vanity compiler lower)) (close "_V50_V0vanity_V0compiler_V0lower_V0unmangle__formals" (vanity compiler lower)) (close "_V50_V0vanity_V0compiler_V0lower_V0improper__map" (vanity compiler lower)) (close "_V50_V0vanity_V0compiler_V0lower_V0list__index" (vanity compiler lower))) (basic-block 4 4 (##.%x.2973 ##.%x.2974 ##.%x.2975 ##.%r.2976) ((##vcore.cons 'bruijn-ify (bruijn ##.bruijn-ify.294 1 3)) (##vcore.cons 'to-functions (bruijn ##.to-functions.291 1 0)) (##vcore.cons (bruijn ##.%x.2974 0 1) '()) (##vcore.cons (bruijn ##.%x.2973 0 0) (bruijn ##.%x.2975 0 2))) ((bruijn ##.%k.835 13 0) (bruijn ##.%r.2976 0 3))))
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
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0lower_V20_V0lambda2) (##string ##.string.2995) (bruijn ##.%x.2004 0 0) 'equal? 'list 'map 'list-ref 'list-set! 'values 'make-list 'cadr 'mangle-symbol 'reverse 'drop-right 'mangle-qualified-function 'mangle-foreign 'assoc 'lookup-intrinsic-name 'error 'compiler-error 'vector-map 'gensym 'cdar 'typevector? 'number? 'hush-table-set! 'hush-table-ref 'make-hush-table 'sprintf 'ungensym 'num-pairs 'split-at-right 'length)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 33,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D2995.sym, VPOINTER_OTHER),
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
  // (##vcore.vector (close _V0vanity_V0compiler_V0lower_V20_V0k10) (bruijn ##.%x.2005 8 0) (bruijn ##.%x.2006 7 0) (bruijn ##.%x.2007 6 0) (bruijn ##.%x.2008 5 0) (bruijn ##.%x.2009 4 0) (bruijn ##.%x.2010 3 0) (bruijn ##.%x.2011 2 0) (bruijn ##.%x.2012 1 0) (bruijn ##.%x.2013 0 0))
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k9) (##string ##.string.2996))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k9, self)))),
      VEncodePointer(&_V10_Dstring_D2996.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k8) (##string ##.string.2997))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D2997.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k7) (##string ##.string.2998))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D2998.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k6) (##string ##.string.2999))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D2999.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k5) (##string ##.string.3000))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D3000.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k4) (##string ##.string.3001))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D3001.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k3) (##string ##.string.3002))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D3002.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k2) (##string ##.string.3003))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D3003.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0lower_V20_V0k1) (##string ##.string.3004))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0lower_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D3004.sym, VPOINTER_OTHER));
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
  _V10_Dpair_D2993.first = VEncodePointer(&_V10_Dpair_D2989, VPOINTER_PAIR);
  _V10_Dpair_D2993.rest = VEncodePointer(&_V10_Dpair_D2992, VPOINTER_PAIR);
  _V10_Dpair_D2992.first = VEncodePointer(&_V10_Dpair_D2991, VPOINTER_PAIR);
  _V10_Dpair_D2992.rest = VNULL;
  _V10_Dpair_D2991.first = _V0unquote;
  _V10_Dpair_D2991.rest = VEncodePointer(&_V10_Dpair_D2990, VPOINTER_PAIR);
  _V10_Dpair_D2990.first = _V0unmangled__env;
  _V10_Dpair_D2990.rest = VNULL;
  _V10_Dpair_D2989.first = VEncodeBool(false);
  _V10_Dpair_D2989.rest = VEncodePointer(&_V10_Dpair_D2988, VPOINTER_PAIR);
  _V10_Dpair_D2988.first = _V0_U;
  _V10_Dpair_D2988.rest = VNULL;
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
